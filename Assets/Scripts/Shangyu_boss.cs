using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shangyu_boss : MonoBehaviour
{
    public GameObject bulletPrefab;
    public Transform firePoint;
    public float fireRate = 1f;
    public float moveSpeed = 5f;
    public float trackingDistance = 10f;
    public float detectionRange = 20f;
    public float stopDistance = 2f;

    private Transform player;
    private float nextFireTime = 0f;
    private SpriteRenderer spriteRenderer;

    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").transform;
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        if (player == null || spriteRenderer == null) return;

        // 检测玩家
        float distanceToPlayer = Vector3.Distance(transform.position, player.position);
        if (distanceToPlayer > detectionRange) return;

        // 追踪玩家
        if (distanceToPlayer < trackingDistance && distanceToPlayer > stopDistance)
        {
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

        // 发射子弹
        if (Time.time > nextFireTime)
        {
            FireBullet();
            nextFireTime = Time.time + 1f / fireRate;
        }
    }

    void FireBullet()
    {
        if (bulletPrefab == null || firePoint == null) return;

        GameObject bullet = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation);
        Rigidbody2D bulletRb = bullet.GetComponent<Rigidbody2D>();

        if (bulletRb != null)
        {
            Vector2 direction = (player.position - transform.position).normalized;
            bulletRb.velocity = direction * fireRate;
        }
    }
}
