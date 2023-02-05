using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuBehaviour : MonoBehaviour
{
    public GameObject howToPanel;

    public void StartGame()
    {
        SceneManager.LoadScene(1);
    }

    public void StartHardGame()
    {
        SceneManager.LoadScene(2);
    }

    public void HowTo()
    {
        howToPanel.SetActive(!howToPanel.activeSelf);
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
