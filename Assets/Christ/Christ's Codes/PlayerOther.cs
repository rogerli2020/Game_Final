using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerOther : MonoBehaviour
{
    public float speed = 2.5f;

    private float HSpeed = 0;

    private float VSpeed = 0;

    public int health = 100;

    public FixedJoystick _joystick;

    private Rigidbody2D _rigidbody;

    private Animator _animator;

    // Start is called before the first frame update
    void Start()
    {
        _rigidbody = GetComponent<Rigidbody2D>();
        _animator = GetComponent<Animator>();
    }

    // FixedUpdate
    void FixedUpdate()
    {
        // float xSpeed = Input.GetAxis("Horizontal") * speed;
        // float ySpeed = Input.GetAxis("Vertical") * speed;

        float xJoystickSpeed = _joystick.Horizontal * speed;
        float yJoystickSpeed = _joystick.Vertical * speed;
        
        if (xJoystickSpeed >= 1) 
        {
            HSpeed = speed;
            VSpeed = 0;
        } else if (xJoystickSpeed <= -1)
        {
            HSpeed = -speed;
            VSpeed = 0;
        } else 
        {
            HSpeed = 0;
        }
        if (yJoystickSpeed >= 1)
        {
            VSpeed = speed;
            HSpeed = 0;
        } else if (yJoystickSpeed <= -1)
        {
            VSpeed = -speed;
            HSpeed = 0;
        } else 
        {
            VSpeed = 0;
        }

        // if (xSpeed != 0) ySpeed = 0;
        // else if (ySpeed !=0) xSpeed = 0;

        // if (xJoystickSpeed != 0) yJoystickSpeed = 0;
        // else if (yJoystickSpeed !=0) xJoystickSpeed = 0;

        // _rigidbody.velocity = new Vector2(xSpeed, _rigidbody.velocity.y);
        // _rigidbody.velocity = new Vector2(_rigidbody.velocity.x, ySpeed);

        _rigidbody.velocity = new Vector2(_joystick.Horizontal * speed, _rigidbody.velocity.y);
        _rigidbody.velocity = new Vector2(_rigidbody.velocity.x, _joystick.Vertical * speed);

        float xScale = transform.localScale.x;
        if ((HSpeed > 0 && xScale > 0) || (HSpeed < 0 && xScale < 0))
        {
            transform.localScale *= new Vector2(-1, 1);
        }
        _animator.SetFloat("VSpeed", VSpeed);
        _animator.SetFloat("HSpeed", Mathf.Abs(HSpeed));
    }

        // 添加一个TakeDamage方法，用于接收伤害
    public void TakeDamage(int damage)
    {
        // 减少玩家的生命值
        health -= damage;

        // 检查玩家是否死亡（生命值小于等于0）
        if (health <= 0)
        {
            // 在这里实现玩家死亡的逻辑，例如播放死亡动画、显示游戏结束界面等
            Die();
        }
    }

    private void Die()
    {
        // 实现玩家死亡的逻辑
        // 在这里添加加载场景的功能
        LoadScene("Death"); // 将YourSceneName替换为你要加载的场景名称
    }

    // 添加一个LoadScene方法，用于加载指定名称的场景
    public void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
}