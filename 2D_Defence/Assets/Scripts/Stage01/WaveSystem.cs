using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaveSystem : MonoBehaviour
{
    [SerializeField]
    private Wave[]       waves;                  // 현재 스테이지의 모든 웨이브 정보
    [SerializeField]
    private EnemySpawner enemySpawner;
    private int          currentWaveIndex = -1;  // 현재 웨이브 인덱스

    public int           CurrentWave => currentWaveIndex+1;
    public int           MaxWave => waves.Length;

    public void StartWave()
    {
        if (enemySpawner.EnemyList.Count == 0 && currentWaveIndex < waves.Length - 1)
        {
            currentWaveIndex++;
            enemySpawner.StartWave(waves[currentWaveIndex]);
        }
    }
}

[System.Serializable]
public struct Wave
{
    public float        spawnTime;      // 현재 웨이브 적 생성 주기
    public int          maxEnemyCount;  // 현재 웨이브 적 등장 숫자
    public GameObject[] enemyPrefabs;   // 현재 웨이브 적 등장 종류
}