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
    private Wave        currentWave;        // ���� ���̺� ����
    private int         currentEnemyCount;  // ���� ���̺꿡 �����ִ� �� ����
    private List<Enemy> enemyList;          // ���� �ʿ� �����ش� ��� ���� ����

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
            enemyList.Add(enemy);       // ����Ʈ�� ��� ������ �� ���� ����

            SpawnEnemyHPSlider(clone);  // �� ü�� UI ���� �� ����

            spawnEnemyCount++;

            yield return new WaitForSeconds(currentWave.spawnTime);
        }
    }

    private void SpawnEnemyHPSlider(GameObject enemy)
    {
        GameObject sliderClone = Instantiate(enemyHPSliderPrefab);
        sliderClone.transform.SetParent(canvasTransform);
        sliderClone.transform.localScale = Vector3.one;     // ũ�� ���� (1, 1, 1,)
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
