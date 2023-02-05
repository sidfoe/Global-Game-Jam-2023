using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnswerCollision : MonoBehaviour
{
    private int childId = -1;
    private int parentId = -1;
    private bool hasAnswer = false;
    private bool doubleAnswer = false;

    private GameManager gm;

    public void Start()
    {
        parentId = transform.parent.transform.GetChild(0).gameObject.GetComponent<CreatureBehaviour>().GetId(); //disgusting
        gm = FindObjectOfType<GameManager>();
    }

    public void OnTriggerEnter2D(Collider2D col)
    {
        if(!hasAnswer)
        {
            hasAnswer = true;

            gm.UpdateUnitCheck(1);

            childId = col.gameObject.GetComponent<CreatureBehaviour>().GetId();
        }
        else
        {
            doubleAnswer = true;
        }
    }

    public void OnTriggerExit2D(Collider2D col)
    {
        if (!doubleAnswer)
        {
            hasAnswer = false;
            gm.UpdateUnitCheck(-1);
        }
        else
        {
            doubleAnswer = false;
        }
    }

    public bool GetAnswer()
    {
        return childId == parentId;
    }

}
