using UnityEngine;

public class GameOverCheck : MonoBehaviour
{
    [SerializeField]
    private PlayerHP        playerHP;           // �÷��̾� ü��
    [SerializeField]
    private GameObject      gameOverPanel;      // ���� ���� �� ���� �г�

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

    // ���ӿ��� �� �� ȭ��
    public void GameOverPanel()
    {
        gameOverPanel.SetActive(true);
    }
}
