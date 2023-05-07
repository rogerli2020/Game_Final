using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class NextScenes : MonoBehaviour
{

    public AudioSource _audioSource;

    public void nextLevel()
    {
        _audioSource.Play();
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

}
