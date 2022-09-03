using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TowerDataViewer : MonoBehaviour
{
    [SerializeField]
    private Image               imageTower;
    [SerializeField]
    private TextMeshProUGUI     textDamage;
    [SerializeField]
    private TextMeshProUGUI     textRate;
    [SerializeField]
    private TextMeshProUGUI     textRange;
    [SerializeField]
    private TextMeshProUGUI     textLevel;
    [SerializeField]
    private TowerAttackRange    towerAttackRange;

    private TowerWeapon     currentTower;

    private void Awake()
    {
        OffPanel();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            OffPanel();
        }
    }

    public void OnPanel(Transform towerWeapon)
    {
        currentTower = towerWeapon.GetComponent<TowerWeapon>();
        // Ÿ�� ���� ON
        gameObject.SetActive(true);
        // Ÿ�� ���� ����
        UpdateTowerDate();
        towerAttackRange.OnAttackRange(currentTower.transform.position, currentTower.Range);
    }

    public void OffPanel()
    {
        // Ÿ�� ���� OFF
        gameObject.SetActive(false);
        towerAttackRange.OffAttackRange();
    }

    private void UpdateTowerDate()
    {
        textDamage.text = "Damage : " + currentTower.Damage;
        textRate.text   = "Rate : " + currentTower.Rate;
        textRange.text  = "Range : " + currentTower.Range;
        textLevel.text  = "Level : " + currentTower.Level;
    }
}