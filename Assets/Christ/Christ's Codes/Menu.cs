using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{
    public AudioSource _bgm;
    public AudioSource _play;
    private Animator _animator;

    public void Start()
    {
        // Play the background music
        _bgm.Play();
        _animator = GetComponent<Animator>();
    }

    public void PlayGame()
    {
        // Load the next scene in the build index
        _play.Play();
        _bgm.Stop();

        // Play the animation
        _animator.SetBool("play", true);
        StartCoroutine(WaitForSceneLoad());
    }

    private IEnumerator WaitForSceneLoad() {
        yield return new WaitForSeconds(1.9f);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
}
