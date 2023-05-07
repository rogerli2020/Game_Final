using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MageScript : MonoBehaviour
{
    void Awake()
    {
        gameObject.GetComponent<Character>().AddItem("BLUE_KEY");
        gameObject.GetComponent<Character>().AddItem("WEED");
        gameObject.GetComponent<Character>().AddItem("WEED");
    }
}
