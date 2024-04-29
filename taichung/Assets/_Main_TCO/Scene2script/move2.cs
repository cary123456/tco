using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class move2 : MonoBehaviour
{
    public Vector2 turn;
    public float sensitivity = .5f;
    public Vector3 deltaMove;
    public float speed = 5;
    public float acceleration = 10f;

    public bool test;
    public float value;
    public bool mouseopen = false;
    public Transform a;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Q))
        {
            mouseopen = true;
        }

        if (mouseopen)
        {
            Cursor.lockState = CursorLockMode.Locked;
            float currentSpeed = (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift)) ? acceleration : speed;

            // 處理旋轉
            turn.y += Input.GetAxis("Mouse Y") * sensitivity;
            turn.x += Input.GetAxis("Mouse X") * sensitivity;
            transform.localRotation = Quaternion.Euler(0, turn.x, 0) * Quaternion.Euler(-turn.y, 0, 0);

            // 處理移動
            float moveUpDown = 0f;
            if (Input.GetMouseButton(1)) { moveUpDown = -1f * currentSpeed * Time.deltaTime; }
            if (Input.GetMouseButton(0)) { moveUpDown = 1f * currentSpeed * Time.deltaTime; }

            deltaMove = new Vector3(Input.GetAxisRaw("Horizontal") * currentSpeed * Time.deltaTime, 0, Input.GetAxisRaw("Vertical") * currentSpeed * Time.deltaTime);
            transform.Translate(deltaMove, Space.Self); // 使用 Space.Self 使其相對於本地坐標系統移動

            // 使用世界空間進行上下移動
            transform.Translate(0, moveUpDown, 0, Space.World);
        }

    }


}
