using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class move2 : MonoBehaviour
{
    public Vector2 turn;
    public float sensitivity = .5f;
    private Vector3 deltaMove;
    public float speed = 5;
    public float acceleration = 10f;

    public KeyCode speedUp = KeyCode.LeftShift;
    public KeyCode moveUp = KeyCode.Mouse0;
    public KeyCode moveDown = KeyCode.Mouse1;
    public KeyCode mouseLock = KeyCode.Q;

    public KeyCode moveForward = KeyCode.W;
    public KeyCode moveBackward = KeyCode.S;
    public KeyCode moveLeft = KeyCode.A;
    public KeyCode moveRight = KeyCode.D;

    public bool locked = false;
    private int i = 0;

    // Start is called before the first frame update
    void Start()
    {
        transform.rotation = Quaternion.Euler(0, 0, 0);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(mouseLock))
        {
            i++;
        }

        if (i % 2 == 1)
        {
            locked = true;
            Cursor.lockState = CursorLockMode.Locked;

        }
        else if (i % 2 == 0)
        {
            locked = false;
            Cursor.lockState = CursorLockMode.Confined;

        }
        if (locked)
        {
            float currentSpeed = (Input.GetKey(speedUp)) ? acceleration : speed;

            turn.y += Input.GetAxis("Mouse Y") * sensitivity;
            turn.x += Input.GetAxis("Mouse X") * sensitivity;
            transform.rotation = Quaternion.Euler(0, turn.x, 0) * Quaternion.Euler(-turn.y, 0, 0);

            float moveUpDown = 0f;
            if (Input.GetKey(moveDown)) { moveUpDown = -1f * currentSpeed * Time.deltaTime; }
            if (Input.GetKey(moveUp)) { moveUpDown = 1f * currentSpeed * Time.deltaTime; }

            float moveHorizontal = 0f;
            if (Input.GetKey(moveLeft)) { moveHorizontal = -1f * currentSpeed * Time.deltaTime; }
            if (Input.GetKey(moveRight)) { moveHorizontal = 1f * currentSpeed * Time.deltaTime; }

            float moveVertical = 0f;
            if (Input.GetKey(moveBackward)) { moveVertical = -1f * currentSpeed * Time.deltaTime; }
            if (Input.GetKey(moveForward)) { moveVertical = 1f * currentSpeed * Time.deltaTime; }

            deltaMove = new Vector3(moveHorizontal, 0, moveVertical);
            transform.Translate(deltaMove, Space.Self); 

            transform.Translate(0, moveUpDown, 0, Space.World);
        }
    }
}
