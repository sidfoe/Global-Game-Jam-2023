using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CreatureBehaviour : MonoBehaviour
{
    public List<SpriteRenderer> sprites = new List<SpriteRenderer>();
    public List<Sprite> aTraits = new List<Sprite>(); //1 - 2 : 2 being ab instead of just aa
    public List<Sprite> bTraits = new List<Sprite>(); //3

    public int id = -1;

    private Dictionary<int, int> creatureTraits = new Dictionary<int, int>();

    public void SetTraits(int a, int b, int c, int d, int e, bool isHard = false)
    {
        creatureTraits.Add(0, a);
        creatureTraits.Add(1, b);
        creatureTraits.Add(2, c);
        creatureTraits.Add(3, d);
        creatureTraits.Add(4, e);

        SetSprites(isHard);
    }

    public void SetTraits(Dictionary<int, int> traits, bool isHard = false)
    {
        creatureTraits = traits;

        SetSprites(isHard);
    }

    public Dictionary<int, int> GetTraits()
    {
        return creatureTraits;
    }    

    private void SetSprites(bool isHard)
    {
        foreach (KeyValuePair<int, int> trait in creatureTraits)
        {
            if (!isHard)
            {
                sprites[trait.Key].sprite = trait.Value == 1 ? aTraits[trait.Key + (GameManager.spriteGroupType * 5)] : bTraits[trait.Key + (GameManager.spriteGroupType * 5)];
            }
            else
            {
                sprites[trait.Key].sprite = trait.Value == 3 ? bTraits[trait.Key + (GameManager.spriteGroupType * 5)] : aTraits[trait.Key + (GameManager.spriteGroupType * 5)];
            }
        }
    }

    public int GetId()
    {
        return id;
    }

    public void SetId(int i)
    {
        id = i;
    }  
}
