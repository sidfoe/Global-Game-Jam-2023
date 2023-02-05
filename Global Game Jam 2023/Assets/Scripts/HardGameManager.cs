using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class HardGameManager : GameManager
{
    public override void CreateParents(CreatureBehaviour parent, int id)
    {
        parent.SetId(id);
        parent.SetTraits(Random.Range(1, 4), Random.Range(1, 4), Random.Range(1, 4), Random.Range(1, 4), Random.Range(1, 4), true);
    }

    public override void CreateChild(CreatureBehaviour p1, CreatureBehaviour p2, int id)
    {
        var p2Traits = p2.GetComponent<CreatureBehaviour>().GetTraits();
        Dictionary<int, int> childTraits = new Dictionary<int, int>();

        foreach (KeyValuePair<int, int> trait in p1.GetComponent<CreatureBehaviour>().GetTraits())
        {
            if (trait.Value == 2)
            {
                int newVal = Random.Range(1, 4);
                switch (p2Traits[trait.Key])
                {
                    case 1:
                        childTraits.Add(trait.Key, newVal);
                        break;
                    case 2:
                        childTraits.Add(trait.Key, newVal);
                        break;
                    case 3:
                        childTraits.Add(trait.Key, newVal);
                        break;
                }
            }

            else if (p2Traits[trait.Key] == 2)
            {
                int newVal = Random.Range(1, 4);
                switch (trait.Value)
                {
                    case 1:
                        childTraits.Add(trait.Key, newVal);
                        break;
                    case 2:
                        childTraits.Add(trait.Key, newVal);
                        break;
                    case 3:
                        childTraits.Add(trait.Key, newVal);
                        break;
                }
            }

            else if (trait.Value == p2Traits[trait.Key]) // for 1-1 or 3-3 pairing
            {
                childTraits.Add(trait.Key, trait.Value);
            }

            else if (trait.Value != p2Traits[trait.Key]) // for 1-3 pairing
            {
                childTraits.Add(trait.Key, 2);
            }
        }

        int spawn = Random.Range(0, 4);
        while (!spawnCheck.Add(spawn))
        {
            spawn = Random.Range(0, 4);
        }
        GameObject g = Instantiate(creaturePrefab, childSpawns[spawn]);
        g.GetComponent<CreatureBehaviour>().SetTraits(childTraits, true);
        g.GetComponent<CreatureBehaviour>().SetId(id);
        g.GetComponent<BoxCollider2D>().enabled = true;
        toDeleteOnReset.Add(g);
    }

}
