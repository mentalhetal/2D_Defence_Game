using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject  enemyHPSliderPrefab;
    [SerializeField]
    private Transform   canvasTransform;
    [SerializeField]
    private Transform[] wayPoints;
    [SerializeField]
    private PlayerHP    playerHP;
    [SerializeField]
    private PlayerGold  playerGold;
    private Wave        currentWave;        // 현재 웨이브 정보
    private int         currentEnemyCount;  // 현재 웨이브에 남아있느 적 숫자
    private List<Enemy> enemyList;          // 현재 맵에 존자해는 모든 적의 정보

    public List<Enemy>  EnemyList => enemyList;

    public int          CurrentEnemyCount => currentEnemyCount;
    public int          MaxEnemyCount => currentWave.maxEnemyCount;

    private void Awake()
    {
        enemyList = new List<Enemy>();
    }

    public void StartWave(Wave wave)
    {
        currentWave = wave;
        currentEnemyCount = currentWave.maxEnemyCount;
        StartCoroutine("SpawnEnemy");
    }

    private IEnumerator SpawnEnemy()
    {
        int spawnEnemyCount = 0;

        while(spawnEnemyCount < currentWave.maxEnemyCount)
        {
            int        enemyIndex = Random.Range(0, currentWave.enemyPrefabs.Length);
            GameObject clone      = Instantiate(currentWave.enemyPrefabs[enemyIndex]);
            Enemy      enemy      = clone.GetComponent<Enemy>();

            enemy.Setup(this, wayPoints);
            enemyList.Add(enemy);       // 리스트에 방금 생성된 적 정보 저장

            SpawnEnemyHPSlider(clone);  // 적 체력 UI 생성 및 설정

            spawnEnemyCount++;

            yield return new WaitForSeconds(currentWave.spawnTime);
        }
    }

    private void SpawnEnemyHPSlider(GameObject enemy)
    {
        GameObject sliderClone = Instantiate(enemyHPSliderPrefab);
        sliderClone.transform.SetParent(canvasTransform);
        sliderClone.transform.localScale = Vector3.one;     // 크기 설정 (1, 1, 1,)
        sliderClone.GetComponent<SliderPositionAutoSetter>().Setup(enemy.transform);
        sliderClone.GetComponent<EnemyHPViewer>().Setup(enemy.GetComponent<EnemyHP>());
    }

    public void DestroyEnemy(EnemyDestroyType type, Enemy enemy, int gold)
    {
        if (type == EnemyDestroyType.Arrive)
        {
            playerHP.TakeDamage(1);
        }
        else if (type == EnemyDestroyType.Kill)
        {
            playerGold.CurrentGold += gold;
        }

        currentEnemyCount--;

        enemyList.Remove(enemy);

        Destroy(enemy.gameObject);
    }
}
