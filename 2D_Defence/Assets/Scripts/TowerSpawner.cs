using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerSpawner : MonoBehaviour
{
    [SerializeField]
    private TowerTemplate       towerTemplate;
    [SerializeField]
    private EnemySpawner        enemySpawner;
    [SerializeField]
    private PlayerGold          playerGold;
    [SerializeField]
    private SystemTextViewer    systemTextViewer;

    public void SpawnTower(Transform tileTransform)
    {
        if ( towerTemplate.weapon[0].cost > playerGold.CurrentGold)
        {
            systemTextViewer.PrintText(SystemType.Money);
            return;
        }

        Tile tile = tileTransform.GetComponent<Tile>();

        if (tile.IsBuildTower == true)
        {
            systemTextViewer.PrintText(SystemType.Build);
            return;
        }

        tile.IsBuildTower = true;

        playerGold.CurrentGold -= towerTemplate.weapon[0].cost;

        // 타일보다 화면상으로 위에 있게 하기 위해 z축 -1에 배치
        Vector3 position = tileTransform.position + Vector3.back;
        GameObject clone = Instantiate(towerTemplate.towerPrefab, position, Quaternion.identity);
        // 타워 무기에 enemySpawner 정보 전달
        clone.GetComponent<TowerWeapon>().Setup(enemySpawner, playerGold, tile);
    }
}
