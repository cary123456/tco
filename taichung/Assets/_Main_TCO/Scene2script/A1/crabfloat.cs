using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class crabfloat : MonoBehaviour
{
    // 最大推力和旋轉力
    public float m_Thrust ;
    public float maxTorque;

    public GameObject ancor;

    private Rigidbody rb;
    public float speed ;
    float timeCount = 0.0f;
    public bool small;
    public float minRotationSpeed;
    public float maxRotationSpeed;
    public float rotationSpeed;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        
        

        ancor = GameObject.FindGameObjectWithTag("crabancor");
        rotationSpeed = 0f;
        while (rotationSpeed == 0f)
        {
            rotationSpeed = Random.Range(minRotationSpeed, maxRotationSpeed);
        }
        // 隨機選擇旋轉的方向
        if (Random.value > 0.5f)
        {
            rotationSpeed *= -1f;
        }
        // 將旋轉速度應用到物體的角速度上
       

    }

     void Update()
    {
        ApplyRandomForce();
        GetComponent<Rigidbody>().angularVelocity = new Vector3(0f, 0f, rotationSpeed);
        transform.rotation = Quaternion.Euler(0, 180, transform.eulerAngles.z);
        if (small)
        {
            if (this.gameObject.transform.position.y <= ancor.transform.position.y)
            {
                Destroy(this.gameObject,5);
                this.gameObject.transform.position = new Vector3(this.gameObject.transform.position.x, ancor.transform.position.y, this.gameObject.transform.position.z);

            }
        }
        else
        {
            if (this.gameObject.transform.position.y <= ancor.transform.position.y)
            {
                this.gameObject.GetComponent<Animator>().SetBool("C2P", true);
                this.gameObject.transform.rotation = Quaternion.Lerp(this.transform.rotation, Quaternion.Euler(0, 0, 0), timeCount * speed);
                this.gameObject.transform.GetChild(1).gameObject.SetActive(false);
                timeCount = timeCount + Time.deltaTime;
                this.gameObject.transform.position = new Vector3(this.gameObject.transform.position.x, ancor.transform.position.y, this.gameObject.transform.position.z);

            }
        }

       
        
    }

    void ApplyRandomForce()
    {
        rb.AddForce(Vector3.down * m_Thrust);
    }

    void ApplyRandomTorque()
    {
        Vector3 torque = Random.insideUnitSphere * maxTorque;
        rb.AddTorque(torque, ForceMode.Impulse);
    }

}
