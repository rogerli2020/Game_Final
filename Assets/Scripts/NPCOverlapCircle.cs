using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCOverlapCircle : MonoBehaviour
{

    public GameManager gameManager;
    public GameObject parent;
    public string NPCid;

    private bool isInRange = false;

    private void OnTriggerEnter2D(Collider2D other)
    {
        gameManager.nearestNPCId = NPCid;
        gameManager.EnableTalkButton();
        isInRange = true;
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        isInRange = false;
        gameManager.DisableTalkButton();
    }

    private void OnDestroy()
    {
        if (isInRange)
        {
            gameManager.DisableTalkButton();
        }
    }
}
