using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class SceneSwitchScript : MonoBehaviour
{

    public void JumpToMainScreen()
    {
        SceneManager.LoadScene("MainScreen");
    }

    public void JumpToWinScreen()
    {
        SceneManager.LoadScene("Win");
    }

    public void JumpToGameScreen()
    {
        SceneManager.LoadScene("Intro");
    }

}
