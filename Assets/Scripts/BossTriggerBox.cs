using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossTriggerBox : MonoBehaviour
{
    public GameManager gameManager;

    private bool alreadyTriggered = false;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player" && !alreadyTriggered)
        {
            gameManager.HandleBossStart();
            alreadyTriggered = true;
        }
    }

}
