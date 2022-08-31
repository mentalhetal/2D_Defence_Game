using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject  enemyPrefab;
    [SerializeField]
    private float       spawnTime;
    [SerializeField]
    private Transform[] wayPoints;
    private List<Enemy> enemyList;      // 현재 맵에 존자해는 모든 적의 정보

    public List<Enemy>  EnemyList => enemyList;

    private void Awake()
    {
        enemyList = new List<Enemy>();
        StartCoroutine("SpawnEnemy");
    }

    private IEnumerator SpawnEnemy()
    {
        while(true)
        {
            GameObject clone = Instantiate(enemyPrefab);
            Enemy      enemy = clone.GetComponent<Enemy>();

            enemy.Setup(this, wayPoints);
            enemyList.Add(enemy);       // 리스트에 방금 생성된 적 정보 저장

            yield return new WaitForSeconds(spawnTime);
        }
    }

    public void DestroyEnemy(Enemy enemy)
    {
        enemyList.Remove(enemy);

        Destroy(enemy.gameObject);
    }
}
