using UnityEngine;

public class GameOverCheck : MonoBehaviour
{
    [SerializeField]
    private PlayerHP        playerHP;           // 플레이어 체력
    [SerializeField]
    private GameObject      gameOverPanel;      // 게임 오버 시 나올 패널

    private bool            gameOverCheck;

    private void Awake()
    {
        gameOverPanel.SetActive(false);

        gameOverCheck = false;
    }

    private void Update()
    {
        if (playerHP.CurrentHP <= 0 && !gameOverCheck)
        {
            GameOverPanel();

            gameOverCheck = true;
        }
    }

    // 게임오버 시 뜰 화면
    public void GameOverPanel()
    {
        gameOverPanel.SetActive(true);
    }
}
