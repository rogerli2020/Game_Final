using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraBehavior : MonoBehaviour
{
    public GameObject player;
    private void Update()
    {
        gameObject.transform.position = player.transform.position + new Vector3(0, 0, -10);
    }
}
