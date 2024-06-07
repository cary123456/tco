using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;
public class crabfloat : MonoBehaviour
{
    // �̤j���O�M����O
    public float m_Thrust ;
    public float maxTorque;

    public GameObject ancor;

    private Rigidbody rb;
    public float speed ;
            // 变量初始化为3
    public float value ;

    // 目标值
    private float targetValue = 1f;

    // 计时器变量
    private float timer = 0f;
    public float duration ;
    float timeCount = 0.0f;
    public bool small;
    public float minRotationSpeed;
    public float maxRotationSpeed;
    public float rotationSpeed;
    public float midifloat;
    public bool melt;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        value = 3;
        

        ancor = GameObject.FindGameObjectWithTag("crabancor");
        rotationSpeed = 0f;
        while (rotationSpeed == 0f)
        {
            rotationSpeed = Random.Range(minRotationSpeed, maxRotationSpeed);
        }
        // �H����ܱ��઺��V
        if (Random.value > 0.5f)
        {
            rotationSpeed *= -1f;
        }
        // �N����t�����Ψ쪫�骺���t�פW
       

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

        if(melt)
        {

            // 更新计时器
            timer += Time.deltaTime;

            // 计算当前时间比例
            float t = timer / duration;

            // 插值计算当前值
            value = Mathf.Lerp(5f, 1f, t);
            
            // 输出当前值到控制台
            Debug.Log("Current Value: " + value);
            this.gameObject.GetComponent<VisualEffect>().SetFloat("scale",value);
            // 如果达到目标时间，停止更新
            if (timer >= duration)
            {
                // 确保值精确设置为目标值
                timer = duration;
                value = targetValue;
                Debug.Log("Final Value: " + value);

                // 禁用Update方法中的更改以防止重复更改
                //this.enabled = false;
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
