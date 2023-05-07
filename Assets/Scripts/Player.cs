using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float speed;

    private Rigidbody2D _rigidbody;
    private Character _character;
    private string facing;

    public float attackCoolDown = 60f;
    public int attackDamage = 0;
    public GameObject attackPrefab;
    public GameObject strongAttackPrefab;
    public FixedJoystick _joystick;


    private string lastFacing = "U";

    private Animator _animator;

    private float HSpeed = 0;
    private float VSpeed = 0;

    void Start()
    {
        _rigidbody = gameObject.GetComponent<Rigidbody2D>();
        _character = gameObject.GetComponent<Character>();
        _animator = GetComponent<Animator>();

    }

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
        }
        else if (xJoystickSpeed <= -1)
        {
            HSpeed = -speed;
            VSpeed = 0;
        }
        else
        {
            HSpeed = 0;
        }
        if (yJoystickSpeed >= 1)
        {
            VSpeed = speed;
            HSpeed = 0;
        }
        else if (yJoystickSpeed <= -1)
        {
            VSpeed = -speed;
            HSpeed = 0;
        }
        else
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


        if (HSpeed == 0 && VSpeed == 0) return;
        if (Mathf.Abs(HSpeed) > Mathf.Abs(VSpeed))
        {
            // if x dominates y.
            if (HSpeed >= 0)
            {
                lastFacing = "R";
            } else
            {
                lastFacing = "L";
            }

        } else
        {
            // if y dominates x.
            if (VSpeed >= 0)
            {
                lastFacing = "U";
            }
            else
            {
                lastFacing = "D";
            }
        }

    }

    private Vector3 letterToVector(string vector)
    {

        if (lastFacing == "U")
        {
            return new Vector3(0, 0.15f, 0);
        } else if (lastFacing == "D")
        {
            return new Vector3(0, -0.15f, 0);
        } else if (lastFacing == "R")
        {
            return new Vector3(0.15f, 0, 0);
        } else
        {
            return new Vector3(-0.15f, 0, 0);
        }
    }


    private Quaternion letterToAngle(string vector)
    {

        if (lastFacing == "U")
        {
            return Quaternion.Euler(0, 0, 270);
        }
        else if (lastFacing == "D")
        {
            return Quaternion.Euler(0, 0, 90);
        }
        else if (lastFacing == "R")
        {
            return Quaternion.Euler(0, 0, 180);
        }
        else // L
        {
            return Quaternion.Euler(0, 0, 0);
        }
    }

    public void HandleAttack()
    {
        if (attackDamage <= 0f) return;
        if (attackDamage < 50)
        {
            GameObject attackObj = Instantiate(attackPrefab, gameObject.transform.position + letterToVector(lastFacing), letterToAngle(lastFacing));
            attackObj.transform.parent = gameObject.transform;
        }
        else
        {
            GameObject attackObj = Instantiate(strongAttackPrefab, gameObject.transform.position + letterToVector(lastFacing), letterToAngle(lastFacing));
            attackObj.transform.parent = gameObject.transform;
        }
    }
}
