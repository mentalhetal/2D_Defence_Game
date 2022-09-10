using UnityEngine;

public class Pause : MonoBehaviour
{
    public static bool gamePaused = false;

    [SerializeField]
    private GameObject pausedMenu;

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (!gamePaused)
                CallMenu();
            else if (gamePaused)
                CloseMenu();
        }
    }

    private void CallMenu()
    {
        gamePaused = true;
        pausedMenu.SetActive(true);
        Time.timeScale = 0f;
    }

    public void CloseMenu()
    {
        gamePaused = false;
        pausedMenu.SetActive(false);
        Time.timeScale = 1f;
    }

    public void ExitMenu()
    {
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
        Application.Quit();
#endif
    }
}
