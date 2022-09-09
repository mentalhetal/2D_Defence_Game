using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class GameStartExit : MonoBehaviour
{
    public void GameStart()
    {
        LoadingSceneController.LoadScene("Stage01");
    }

    public void Exit()
    {
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
        Application.Quit();
#endif
    }
}
