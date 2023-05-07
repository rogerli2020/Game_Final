using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public GameObject gameUI;
    public GameObject player;
    public GameObject Camera;

    public string nearestNPCId;

    // item sprites
    public Sprite greenPlantSprite;
    public Sprite blueKeySprite;
    public Sprite knifeSprite;
    public Sprite swordSprite;
    public Sprite diamondSprite;

    // other sprites;
    public Sprite blueDoorUnlockSprite;

    // references to NPC
    public GameObject blueDoor;

    // character sprites
    public Sprite MageSprite;
    public Sprite BlacksmithSprite;
    public Sprite BlueDoorSprite;
    public Sprite BossSprite;

    // varialbes to keep track of NPC states.
    bool mageTaskDelegated = false;

    // JSONs
    public TextAsset mageInitialConversation;
    public TextAsset mageNoItemConversation;
    public TextAsset mageFinalConversation;
    public TextAsset blackSmithInitialConvo;
    public TextAsset blackSmithAfterConvo;
    public TextAsset blueDoorInitial;
    public TextAsset blueDoorAfter;
    public TextAsset mage2Initial;
    public TextAsset mage2After;
    public TextAsset bossTalk;

    // background music.
    public AudioSource bgm1 = null;
    public AudioSource bgm2 = null;
    private AudioSource currentAudioSource = null;

    // UIs
    public GameObject PauseScreen;

    // sound effects;
    public AudioSource unlockSFX = null;

    private string currentObjective = "TALK";

    // this is very maintainable and readable and kigh quality kode
    public void UpdateUI()
    {
        Character playerStats = player.GetComponent<Character>();
        int playerHealth = playerStats.GetHealth();
        Dictionary<string, int> playerInventory = playerStats.GetInventory();
        Dictionary<string, int> playerInventoryDictCopy = new Dictionary<string, int>(playerInventory);

        GameObject gameUIPanel = gameUI.transform.Find("Panel").gameObject;
        GameObject weaponSlot = gameUIPanel.transform.Find("WeaponSlot").gameObject;

        List<GameObject> itemSlots = new List<GameObject>()
        {
            gameUIPanel.transform.Find("ItemSlot1").gameObject,
            gameUIPanel.transform.Find("ItemSlot2").gameObject,
            gameUIPanel.transform.Find("ItemSlot3").gameObject,
            gameUIPanel.transform.Find("ItemSlot4").gameObject,
            gameUIPanel.transform.Find("ItemSlot5").gameObject,
            gameUIPanel.transform.Find("ItemSlot6").gameObject,
            gameUIPanel.transform.Find("ItemSlot7").gameObject,
            gameUIPanel.transform.Find("ItemSlot8").gameObject,
        };

        bool foundWeed = false;
        bool foundSword = false;

        for (int i = 0; i < itemSlots.Count; i++)
        {
            GameObject curSlot = itemSlots[i];
            GameObject itemSlotSprite = curSlot.transform.Find("ItemSprite").gameObject;
            GameObject itemSlotCount = curSlot.transform.Find("Count").gameObject;

            // if already iterated through everything
            if (playerInventoryDictCopy.Count == 0)
            {
                itemSlotSprite.GetComponent<Image>().enabled = false;
                itemSlotCount.GetComponent<Text>().enabled = false;
                continue;
            }

            // else...
            itemSlotSprite.GetComponent<Image>().enabled = true;
            itemSlotCount.GetComponent<Text>().enabled = true;

            // read from dictionary, set sprite and count.
            List<string> curKeys = new List<string>(playerInventoryDictCopy.Keys);
            string curKey = curKeys[0];
            if (curKey == "WEED")
            {
                foundWeed = true;
                if (currentObjective == "FIND PLANT") currentObjective = "TRADE PLANT";
            } else if (curKey == "KNIFE" && !foundSword)
            {
                weaponSlot.GetComponent<Image>().sprite = GetSprite(curKey);
                player.GetComponent<Player>().attackCoolDown = 1f;
                player.GetComponent<Player>().attackDamage = 10;
                EnableAttackButton();
            } else if (curKey == "SWORD")
            {
                weaponSlot.GetComponent<Image>().sprite = GetSprite(curKey);
                EnableAttackButton();
                player.GetComponent<Player>().attackCoolDown = 0.25f;
                player.GetComponent<Player>().attackDamage = 100;
                foundSword = true;
            }
            itemSlotSprite.GetComponent<Image>().sprite = GetSprite(curKey);
            itemSlotCount.GetComponent<Text>().text = playerInventoryDictCopy[curKey].ToString();
            playerInventoryDictCopy.Remove(curKey);
        }

        if (foundWeed) { EnableHealButton();  } else { DisableHealButton(); }


        // set health amount in UI.
        gameUIPanel.transform.Find("Health").gameObject.GetComponent<Text>().text = playerHealth.ToString();

        // set objective in UI.
        gameUIPanel.transform.Find("objectiveText").gameObject.GetComponent<Text>().text = currentObjective;

    }

    Sprite GetSprite(string itemId)
    {
        switch (itemId)
        {
            case "WEED":
                return greenPlantSprite;
            case "BLUE_KEY":
                return blueKeySprite;
            case "KNIFE":
                return knifeSprite;
            case "SWORD":
                return swordSprite;
            case "DIAMOND":
                return diamondSprite;
            default:
                return greenPlantSprite;
        }
    }

    public void EnableTalkButton()
    {
        GameObject talkButton = gameUI.transform.Find("talkButton").gameObject;
        talkButton.GetComponent<Button>().interactable = true;
    }

    public void DisableTalkButton()
    {
        GameObject talkButton = gameUI.transform.Find("talkButton").gameObject;
        talkButton.GetComponent<Button>().interactable = false;
    }

    public void EnableHealButton()
    {
        GameObject healButton = gameUI.transform.Find("healButton").gameObject;
        healButton.GetComponent<Button>().interactable = true;
    }

    public void EnableAttackButton()
    {
        GameObject attackButton = gameUI.transform.Find("attackButton").gameObject;
        attackButton.GetComponent<Button>().interactable = true;
    }

    public void DisableHealButton()
    {
        GameObject healButton = gameUI.transform.Find("healButton").gameObject;
        healButton.GetComponent<Button>().interactable = false;
    }

    public void HandleHeal()
    {
        player.GetComponent<Character>().ChangeHealth(20);
        player.GetComponent<Character>().ConsumeItem("WEED");
    }



    public void HandleTalk()
    {
        switch (nearestNPCId)
        {
            case "MAGE":
                if (player.GetComponent<Character>().CheckItem("WEED"))
                {
                    StartDialogue(mageFinalConversation, MageSprite, "MAGE");
                } else if (mageTaskDelegated)
                {
                    StartDialogue(mageNoItemConversation, MageSprite, "MAGE");
                } else
                {
                    StartDialogue(mageInitialConversation, MageSprite, "MAGE");
                }
                break;

                // i am losing my mind
            case "BLACKSMITH":
                if (player.GetComponent<Character>().CheckItem("DIAMOND")) // if diamond  say shit
                {
                    StartDialogue(blackSmithAfterConvo, BlacksmithSprite, "BLACKSMITH");
                } else // no diamond say smethingelse
                {
                    StartDialogue(blackSmithInitialConvo, BlacksmithSprite, "BLACKSMITH");
                }
                break;

            case "BLUE_GATE":
                if (player.GetComponent<Character>().CheckItem("BLUE_KEY"))
                {
                    StartDialogue(blueDoorAfter, BlueDoorSprite, "BLUE_GATE");
                } else
                {
                    StartDialogue(blueDoorInitial, BlueDoorSprite, "BLUE_GATE");
                }

                break;

            case "MAGE_2":
                if (player.GetComponent<Character>().CheckItem("SWORD"))
                {
                    StartDialogue(mage2After, MageSprite, "MAGE_2");
                }
                else
                {
                    StartDialogue(mage2Initial, MageSprite, "MAGE_2");
                }
                break;

            default:
                return;
        }
    }

    void ProcessDialogueLog(List<string> DialogueLog, string talkedTo)
    {
        switch(talkedTo)
        {
            case "MAGE":
                foreach (string item in DialogueLog)
                {
                    if (item.Contains("Great! You got yourself a deal!!"))
                    {
                        mageTaskDelegated = true;
                        currentObjective = "FIND PLANT";
                        UpdateUI();
                    }

                    if (item.Contains("Here's your key! Have fun!!"))
                    {
                        player.GetComponent<Character>().ConsumeItem("WEED");
                        player.GetComponent<Character>().AddItem("BLUE_KEY");
                        currentObjective = "OPEN GATE";
                        UpdateUI();
                    }
                }

                break;
            case "BLACKSMITH":
                foreach (string item in DialogueLog)
                {
                    if (item.Contains("shall craft you"))
                    {
                        player.GetComponent<Character>().ConsumeItem("KNIFE");
                        player.GetComponent<Character>().ConsumeItem("DIAMOND");
                        player.GetComponent<Character>().AddItem("SWORD");
                        UpdateUI();
                    }
                }
                break;

            case "BLUE_GATE":
                foreach (string item in DialogueLog)
                {
                    if (item.Contains("unlocked the gate"))
                    {
                        player.GetComponent<Character>().ConsumeItem("BLUE_KEY");
                        blueDoor.GetComponent<SpriteRenderer>().sprite = blueDoorUnlockSprite;
                        blueDoor.GetComponent<Collider2D>().enabled = false;
                        unlockSFX.Play();
                    }
                }
                break;

            default:
                break;
        }
    }


    public void HandleDialogueEnd(List<string> DialogueLog, string talkedTo)
    {
        ProcessDialogueLog(DialogueLog, talkedTo);
        GameObject dialoguePanel = gameUI.transform.Find("DialoguePanel").gameObject;
        dialoguePanel.SetActive(false);
        Time.timeScale = 1;
        currentAudioSource.volume = 0.20f;

    }



    public void StartDialogue(TextAsset JSONFile, Sprite CharSprite, string CharName)
    {
        if (currentAudioSource == null) currentAudioSource = bgm1;
        currentAudioSource.volume = 0.10f;
        GameObject dialoguePanel = gameUI.transform.Find("DialoguePanel").gameObject;
        dialoguePanel.GetComponent<BasicInkExample>().HandleDialogue(JSONFile, CharSprite, CharName);
        Time.timeScale = 0.01f;
        dialoguePanel.SetActive(true);
    }


    public void HandleAttack()
    {
        player.GetComponent<Player>().HandleAttack();
    }

    public void JumpToMainScreen()
    {
        SceneManager.LoadScene("MainScreen");
    }


    public void HandlePause()
    {
        PauseScreen.SetActive(true);
        if (currentAudioSource == null) currentAudioSource = bgm1;
        currentAudioSource.pitch = 0.50f;
        Time.timeScale = 0;
    }

    public void HandleUnpause()
    {
        PauseScreen.SetActive(false);
        if (currentAudioSource == null) currentAudioSource = bgm1;
        currentAudioSource.pitch = 1f;
        Time.timeScale = 1;
    }



    private void Awake()
    {
        UpdateUI();
    }


    public void HandleBossStart()
    {
        bgm1.Stop();
        currentAudioSource = bgm2;
        bgm2.Play();
        StartDialogue(bossTalk, BossSprite, "BOSS");
    }

}
