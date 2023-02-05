using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public GameObject creaturePrefab;
    public GameObject unitPrefab;
    public List<Transform> familyTree = new List<Transform>();
    public List<Transform> childSpawns = new List<Transform>();

    public GameObject winText;
    public GameObject loseText;
    public GameObject submitButton;
    public GameObject endGamePanel;
    public GameObject nextButton;

    public List<int> numOfUnits = new List<int>();

    public int NumOfSpriteGroups; 
    public static int spriteGroupType = 0;

    private int round = 0;

    protected HashSet<int> spawnCheck = new HashSet<int>();

    private int unitCheck = 0;

    protected List<GameObject> toDeleteOnReset = new List<GameObject>();

    private List<int> pair21 = new List<int> { 1, 1, 2, 2 };
    private List<int> pair22 = new List<int> { 1, 2, 2, 3 };
    private List<int> pair23 = new List<int> { 2, 2, 3, 3 };

    void Start()
    {
        round = 0;
        unitCheck = 0;

        spriteGroupType = Random.Range(0, NumOfSpriteGroups);

        CreateUnits();
    }

    public void CreateUnits()
    {
        for(int i = 0; i < (round < numOfUnits.Count ? numOfUnits[round] : 4); i++)
        {
            GameObject unit = Instantiate(unitPrefab, familyTree[i]);
            toDeleteOnReset.Add(unit);

            CreatureBehaviour p1 = unit.transform.GetChild(0).gameObject.GetComponent<CreatureBehaviour>();
            CreatureBehaviour p2 = unit.transform.GetChild(1).gameObject.GetComponent<CreatureBehaviour>();

            CreateParents(p1, i);
            CreateParents(p2, i);

            CreateChild(p1, p2, i);
        }
    }

    public virtual void CreateParents(CreatureBehaviour parent, int id)
    {
        parent.SetTraits(Random.Range(1, 3), Random.Range(1, 3), Random.Range(1, 3), Random.Range(1, 3), Random.Range(1, 3));
        parent.SetId(id);

    }

    public virtual void CreateChild(CreatureBehaviour p1, CreatureBehaviour p2, int id)
    {
        var p2Traits = p2.GetComponent<CreatureBehaviour>().GetTraits();
        Dictionary<int, int> childTraits = new Dictionary<int, int>();

        foreach (KeyValuePair<int, int> trait in p1.GetComponent<CreatureBehaviour>().GetTraits())
        {
            if (trait.Value == p2Traits[trait.Key]) // for same pairing pairing
            {
                childTraits.Add(trait.Key, trait.Value);
            }

            else if (trait.Value != p2Traits[trait.Key]) // for 1-2 pairing
            {
                childTraits.Add(trait.Key, Random.Range(1,3));
            }
        }

        //TODO: save the child data somehow so it can be used later to make more children
        int spawn = Random.Range(0, 4);
        while (!spawnCheck.Add(spawn))
        {
            spawn = Random.Range(0, 4);
        }
        GameObject g = Instantiate(creaturePrefab, childSpawns[spawn]);
        g.GetComponent<CreatureBehaviour>().SetTraits(childTraits);
        g.GetComponent<CreatureBehaviour>().SetId(id);
        g.GetComponent<BoxCollider2D>().enabled = true;
        toDeleteOnReset.Add(g);
    }

    public void CheckAnswers()
    {
        var answers = FindObjectsOfType<AnswerCollision>();
        bool isCorrect = true;

        for(int i = 0; i < answers.Length; i++)
        {
            if(!answers[i].GetAnswer())
            {
                isCorrect = false;
                break;
            }
        }

        endGamePanel.SetActive(true);

        if (isCorrect)
        {
            winText.SetActive(true);
            nextButton.SetActive(true);
        }
        else
        {
            loseText.GetComponent<TextMeshProUGUI>().text = "Oops Wrong Parents \n You lasted " + round + " rounds!";
            loseText.SetActive(true);
        }
    }

    public void UpdateUnitCheck(int i)
    {
        unitCheck += i;

        if(unitCheck == numOfUnits[round])
        {
            submitButton.SetActive(true);
        }
        else
        {
            submitButton.SetActive(false);
        }
    }

    public void NextLevel()
    {
        round++;

        foreach(GameObject g in toDeleteOnReset)
        {
            Destroy(g);
        }
        toDeleteOnReset.Clear();

        spawnCheck.Clear();

        endGamePanel.SetActive(false);
        winText.SetActive(false);
        loseText.SetActive(false);
        nextButton.SetActive(false);

        spriteGroupType = Random.Range(0, NumOfSpriteGroups);
        CreateUnits();
    }

    public void GoToMain()
    {
        SceneManager.LoadScene(1);
    }
}
