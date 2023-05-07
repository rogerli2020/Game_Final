using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    public string itemId;
    public float collidableAfter;

    public Sprite greenPlantSprite;
    public Sprite blueKeySprite;
    public Sprite knifeSprite;
    public Sprite diamondSprite;
    public Sprite swordSprite;

    private SpriteRenderer _sr;

    public void ChangeItemId(string newId)
    {
        itemId = newId;
        SetSprite(itemId);
    }

    void SetSprite(string itemId)
    {
        try // WHY THE FUCK does this code always return a NULLException?????!?!@?
        {
            switch (itemId)
            {
                case "WEED":
                    _sr.sprite = greenPlantSprite;
                    break;
                case "BLUE_KEY":
                    _sr.sprite = blueKeySprite;
                    break;
                case "KNIFE":
                    _sr.sprite = knifeSprite;
                    break;
                case "DIAMOND":
                    _sr.sprite = diamondSprite;
                    break;
                case "SWORD":
                    _sr.sprite = swordSprite;
                    break;
                default:
                    Debug.Log("SetSprite: id not found.");
                    break;
            }
        } catch { }
    }


    private void Start()
    {
        _sr = gameObject.GetComponent<SpriteRenderer>();
        SetSprite(itemId);
        StartCoroutine(WaitForCollidable());
    }

    IEnumerator WaitForCollidable()
    {
        // suspend execution for 5 seconds
        yield return new WaitForSeconds(collidableAfter);
        gameObject.GetComponent<BoxCollider2D>().enabled = true;
        gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
    }
}
