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
    [SerializeField]
    private Button              buttonUpgrade;
    [SerializeField]
    private SystemTextViewer    systemTextViewer;

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
        if (currentTower.WeaponType == WeaponType.Cannon || currentTower.WeaponType == WeaponType.Laser)
        {
            imageTower.rectTransform.sizeDelta = new Vector2(88, 59);
            textDamage.text = "Damage : " + currentTower.Damage;
        }
        else
        {
            imageTower.rectTransform.sizeDelta = new Vector2(59, 59);
            textDamage.text = "Slow : " + currentTower.Slow * 100 + "%";
        }

        imageTower.sprite   = currentTower.TowerSprite;
        
        textRate.text       = "Rate : " + currentTower.Rate;
        textRange.text      = "Range : " + currentTower.Range;
        textLevel.text      = "Level : " + currentTower.Level;

        buttonUpgrade.interactable = currentTower.Level < currentTower.MaxLevel ? true : false;
    }

    public void OnClickEventTowerUpgrade()
    {
        bool isSuccess = currentTower.Upgrade();

        if (isSuccess == true)
        {
            UpdateTowerDate();
            towerAttackRange.OnAttackRange(currentTower.transform.position, currentTower.Range);
        }
        else
        {
            systemTextViewer.PrintText(SystemType.Money);
        }
    }

    public void OnClickEventTowerSell()
    {
        currentTower.Sell();
        OffPanel();
    }
}
