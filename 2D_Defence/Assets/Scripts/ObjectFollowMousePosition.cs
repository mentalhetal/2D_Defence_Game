using UnityEngine;

public class ObjectFollowMousePosition : MonoBehaviour
{
    private Camera mainCamera;

    private void Awake()
    {
        mainCamera = Camera.main;
    }

    private void Update()
    {
        Vector3 position    = new Vector3(Input.mousePosition.x, Input.mousePosition.y);
        transform.position  = mainCamera.ScreenToWorldPoint(position);
        // z 위치를 0으로 설정하기 위해
        transform.position  = new Vector3(transform.position.x, transform.position.y, 0);
    }
}
