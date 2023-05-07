using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Damage : MonoBehaviour
{
    public int damage;

    public float disappearAfter = 0.2f;
    private float timePassed = 0f;
    public AudioSource shing;

    private void Awake()
    {
        shing.Play();
    }


    private void FixedUpdate()
    {
        timePassed += Time.deltaTime;
        Color currentColor = gameObject.GetComponent<SpriteRenderer>().color;
        gameObject.GetComponent<SpriteRenderer>().color = new Color(currentColor.r, currentColor.b, currentColor.g, (disappearAfter - timePassed)/(disappearAfter) );
        if (timePassed >= disappearAfter)
        {
            Destroy(gameObject);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        Debug.Log(collision.gameObject.tag);
        if (collision.gameObject.GetComponent<Character>())
        {
            collision.gameObject.GetComponent<Character>().ChangeHealth(-damage);

            if (collision.gameObject.tag == "GHOST")
            {
                collision.gameObject.GetComponent<GhostMob>().HandleStun();
            }
        }
    }
}
