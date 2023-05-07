using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Character : MonoBehaviour
{

    public int initialHealth;
    public GameObject itemPrefab;
    public GameObject gameManager;

    // Audio
    public AudioSource pickupSound = null;
    public AudioSource dropSound = null;
    public AudioSource healSound = null;
    public AudioSource hurtSound = null;
    public AudioSource deathSound = null;

    int health = 100;
    private Dictionary<string, int> _inventory = new Dictionary<string, int>();


    private void Awake()
    {
        health = initialHealth;
    }


    public void DropItem(string itemId)
    {
        if (!CheckItem(itemId))
        {
            Debug.Log("Item cannot be dropped because item is not found.");
            return;
        }

        _inventory[itemId] = _inventory[itemId] - 1;
        if (_inventory[itemId] == 0) _inventory.Remove(itemId);

        GameObject newItem = Instantiate(itemPrefab, gameObject.transform.position, Quaternion.identity);
        newItem.GetComponent<Item>().ChangeItemId(itemId);
        //newItem.GetComponent<Rigidbody2D>().AddForce( new Vector2(5, 5) ,ForceMode2D.Impulse);
        if (dropSound != null) dropSound.Play();
        if (gameManager != null) gameManager.GetComponent<GameManager>().UpdateUI();
    }

    public void ConsumeItem(string itemId)
    {
        if (!CheckItem(itemId))
        {
            return;
        }
        _inventory[itemId] = _inventory[itemId] - 1;
        if (_inventory[itemId] == 0) _inventory.Remove(itemId);
        gameManager.GetComponent<GameManager>().UpdateUI();
    }


    public bool CheckItem(string itemId)
    {
        if (_inventory.ContainsKey(itemId)) return true;
        return false;
    }


    public void AddItem(string itemId)
    {
        if (!CheckItem(itemId)) _inventory[itemId] = 0;
        _inventory[itemId] = _inventory[itemId] + 1;
        if (pickupSound != null) pickupSound.Play();
        gameManager.GetComponent<GameManager>().UpdateUI();
    }

    public void ChangeHealth(int changeBy)
    {
        health += changeBy;
        if (health <= 0) {
            HandleDeath();
            return;
        }
        gameManager.GetComponent<GameManager>().UpdateUI();

        if (changeBy >= 0 && healSound != null) {
            healSound.Play();
            StartCoroutine(FlashColor(0f, 1f, 0f, 1f, 0.1f));
        }

        if (changeBy < 0)
        {
            StartCoroutine(FlashColor(1f, 0f, 0f, 1f, 0.1f));
            if (hurtSound != null) hurtSound.Play();
        }
    }

    IEnumerator FlashColor(float red, float green, float blue, float opacity, float time)
    {
        gameObject.GetComponent<SpriteRenderer>().color = new Color(red, green, blue, opacity);
        yield return new WaitForSeconds(time);
        gameObject.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 1f);
        yield return new WaitForSeconds(time);
        gameObject.GetComponent<SpriteRenderer>().color = new Color(red, green, blue, opacity);
        yield return new WaitForSeconds(time);
        gameObject.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 1f);
        yield return new WaitForSeconds(time);
        gameObject.GetComponent<SpriteRenderer>().color = new Color(red, green, blue, opacity);
        yield return new WaitForSeconds(time);
        gameObject.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 1f);
        yield return new WaitForSeconds(time);
    }

    // returns true if item dropped. Return false if no more items can be dropped.
    private bool DropAnyItem()
    {
        List<string> keyList = new List<string>(_inventory.Keys);
        if (keyList.Count == 0) return false;
        DropItem(keyList[0]);
        return true;
    }


    public void HandleDeath()
    {
        // Drop all items
        while (DropAnyItem()) { }

        // wooooooo
        gameObject.GetComponent<Collider2D>().isTrigger = true;
        gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
        gameObject.GetComponent<Rigidbody2D>().gravityScale = 1f;

        // SCREEEM
        if (deathSound != null) deathSound.Play();

        // destroy self after 3 sex.
        Destroy(gameObject, 3.0f);

        if (gameObject.tag == "Player")
        {
            SceneManager.LoadScene("DeathScene");
        }

        if (gameObject.tag == "Boss")
        {
            SceneManager.LoadScene("Win");
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "ITEM")
        {
            string itemId = collision.gameObject.GetComponent<Item>().itemId;
            AddItem(itemId);
            Destroy(collision.gameObject);
        }
    }

    public int GetHealth()
    {
        return health;
    }

    public Dictionary<string, int> GetInventory()
    {
        return _inventory;
    }

}