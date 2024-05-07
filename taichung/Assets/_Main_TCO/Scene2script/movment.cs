using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movment : MonoBehaviour
{
    public float speed = 5.0f;
    public float acceleration = 10.0f;
    public float rotationSpeed = 50.0f;
    public float boostMultiplier = 2.0f;
    private float xRotationSpeed = 0.0f;
    private float yRotationSpeed = 0.0f;
    private float zRotationSpeed = 0.0f;
    public GameObject objectToRotate;
    public GameObject ball;
    public bool flag = true;
    public float smooth; 
    public Vector3 vox;
    public Vector3 voy;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float currentSpeed = (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift)) ? acceleration : speed;

        
        float moveHorizontal = Input.GetAxis("Horizontal") * currentSpeed * Time.deltaTime;
        float moveVertical = Input.GetAxis("Vertical") * currentSpeed * Time.deltaTime;


        float moveUpDown = 0f;
        if (Input.GetKey(KeyCode.Q)) { moveUpDown = -1f * currentSpeed * Time.deltaTime; }
        if (Input.GetKey(KeyCode.E)) { moveUpDown = 1f * currentSpeed * Time.deltaTime; }

        if(flag)
            transform.Translate(moveHorizontal, moveUpDown, moveVertical,Space.World);


        if (Input.GetKey(KeyCode.J) && flag)
        {
            transform.Rotate(Vector3.up, -rotationSpeed * Time.deltaTime, Space.World);
        }
        if (Input.GetKey(KeyCode.L) && flag)
        {
            transform.Rotate(Vector3.up, rotationSpeed * Time.deltaTime, Space.World);
        }
        if (Input.GetKey(KeyCode.I) && flag)
        {
            transform.Rotate(Vector3.right, -rotationSpeed * Time.deltaTime, Space.Self);
        }
        if (Input.GetKey(KeyCode.K) && flag)
        {
            transform.Rotate(Vector3.right, rotationSpeed * Time.deltaTime, Space.Self);
        }

        

        if (Input.GetKey(KeyCode.Keypad1))
        {
            vox = Vector3.Lerp(vox, new Vector3(-speed,0,0) , 1f/smooth/Time.deltaTime);
        }
        else if (Input.GetKey(KeyCode.Keypad3))
        {
           vox = Vector3.Lerp(vox, new Vector3(speed,0,0) , 1f/smooth/Time.deltaTime);
        }
        else
        {
            vox = Vector3.Lerp(vox, new Vector3(0,0,0) , 1f/smooth/Time.deltaTime);
        }

        if (Input.GetKey(KeyCode.Keypad5))
        {
            voy = Vector3.Lerp(voy, new Vector3(0,0,speed) , 1f/smooth/Time.deltaTime);
        }

        else if (Input.GetKey(KeyCode.Keypad2))
        {
            voy = Vector3.Lerp(voy, new Vector3(0,0,-speed) , 1f/smooth/Time.deltaTime);
        } 
        else
        {
             voy = Vector3.Lerp(voy, new Vector3(0,0,0) , 1f/smooth/Time.deltaTime);
        }
        ball.GetComponent<Rigidbody>().velocity = new Vector3(vox.x , 0f, voy.z);



        float boost = Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift) ? boostMultiplier : 1.0f;

        // X軸旋轉控制
        if (Input.GetKey(KeyCode.N))
        {
            xRotationSpeed = -rotationSpeed * boost;
        }
        else if (Input.GetKey(KeyCode.M))
        {
            xRotationSpeed = rotationSpeed * boost;
        }
        else
        {
            xRotationSpeed = 0.0f;
        }

        // Y軸旋轉控制
        if (Input.GetKey(KeyCode.X))
        {
            yRotationSpeed = -rotationSpeed * boost;
        }
        else if (Input.GetKey(KeyCode.Z))
        {
            yRotationSpeed = rotationSpeed * boost;
        }
        else
        {
            yRotationSpeed = 0.0f;
        }

        // Z軸旋轉控制
        if (Input.GetKey(KeyCode.C))
        {
            zRotationSpeed = -rotationSpeed * boost;
        }
        else if (Input.GetKey(KeyCode.V))
        {
            zRotationSpeed = rotationSpeed * boost;
        }
        else
        {
            zRotationSpeed = 0.0f;
        }

        // 進行旋轉
        
       // objectToRotate.transform.Rotate(xRotationSpeed * Time.deltaTime, yRotationSpeed * Time.deltaTime, zRotationSpeed * Time.deltaTime);
    }
}
