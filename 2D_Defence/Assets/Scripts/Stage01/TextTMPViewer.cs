using UnityEngine;
using TMPro;

public class TextTMPViewer : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI textPlayerHP;       // 플레이어 체력
    [SerializeField]
    private TextMeshProUGUI textPlayerGold;     // 플레이어 골드
    [SerializeField]
    private TextMeshProUGUI textWave;           // 현재 웨이브 / 총 웨이브
    [SerializeField]
    private TextMeshProUGUI textEnemyCount;     // 현재 적 숫자 / 최대 적 숫자
    [SerializeField]
    private PlayerHP        playerHP;
    [SerializeField]
    private PlayerGold      playerGold;
    [SerializeField]
    private WaveSystem      waveSystem;
    [SerializeField]
    private EnemySpawner    enemySpawner;

    private void Update()
    {
        textPlayerHP.text   = playerHP.CurrentHP + "/" + playerHP.MaxHP;
        textPlayerGold.text = playerGold.CurrentGold.ToString();
        textWave.text       = waveSystem.CurrentWave + "/" + waveSystem.MaxWave;
        textEnemyCount.text = enemySpawner.CurrentEnemyCount + "/" + enemySpawner.MaxEnemyCount;
    }
}
