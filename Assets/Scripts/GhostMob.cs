using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GhostMob : MonoBehaviour
{
    public float normalMoveSpeed = 5f;
    public float stunMoveSpeed = 1.5f;
    public float moveSpeed = 5f;
    public float trackingDistance = 10f;
    public float detectionRange = 20f;
    public float stopDistance = 2f;

    public float stunDuration = 1.5f;

    public int damage;

    public Transform player;
    public AudioSource GhostSound;
    private SpriteRenderer spriteRenderer;

    //private float currentStunDuration = 0.0f;

    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").transform;
        spriteRenderer = GetComponent<SpriteRenderer>();

        // randomly add stuff to inventory.
        float randNum = Random.Range(0f, 2f);
        float randNum2 = Random.Range(0f, 2f);
        if (randNum >= 1.0f) gameObject.GetComponent<Character>().AddItem("WEED");
        if (randNum2 >= 1.0f) gameObject.GetComponent<Character>().AddItem("WEED");
    }

    private bool alreadyPlaying = false;
    void Update()
    {
        if (player == null || spriteRenderer == null) return;

        //if (currentStunDuration <= 0f)
        //{
        //    moveSpeed = normalMoveSpeed;
        //} else
        //{
        //    moveSpeed = stunMoveSpeed;
        //    currentStunDuration -= Time.deltaTime;
        //}

        // 检测玩家
        float distanceToPlayer = Vector3.Distance(transform.position, player.position);
        if (distanceToPlayer > detectionRange) return;

        // 追踪玩家
        if (distanceToPlayer < trackingDistance && distanceToPlayer > stopDistance)
        {
            if (!alreadyPlaying)
            {
                GhostSound.Play();
                alreadyPlaying = true;
            }

            Vector3 direction = (player.position - transform.position).normalized;
            transform.position += direction * moveSpeed * Time.deltaTime;

            // 镜像反转
            if (direction.x > 0)
            {
                spriteRenderer.flipX = false;
            }
            else if (direction.x < 0)
            {
                spriteRenderer.flipX = true;
            }
        }
    }

    public void HandleStun()
    {
        //currentStunDuration = stunDuration;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            collision.gameObject.GetComponent<Character>().ChangeHealth(-damage);
            Destroy(gameObject);
        }
    }

    private void OnCollisionStay2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            collision.gameObject.GetComponent<Character>().ChangeHealth(-damage);
            Destroy(gameObject);
        }
    }
}
