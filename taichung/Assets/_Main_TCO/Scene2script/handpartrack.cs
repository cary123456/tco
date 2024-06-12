using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class handpartrack : MonoBehaviour
{
    public GameObject Rhand;
    public GameObject Lhand;
    
    public bool R;
    private float yMin = 0.24f;
    private float yMax = 1.9f;

    // Value的最小和最大值
    private float valueMin = 0f;
    private float valueMax = 1f;
    public float midifloat;
    // Start is called before the first frame update
    void Start()
    {
        Rhand = GameObject.FindGameObjectWithTag("Rhand");
        Lhand = GameObject.FindGameObjectWithTag("hand");
    }

    // Update is called once per frame
    void Update()
    {
        if (R)
        {
            this.transform.position = Vector3.Lerp(this.transform.position, Rhand.transform.position, 0.05f);
            float yPos = this.gameObject.transform.position.y;

        // 將y軸位置轉換為介於0和1之間的值
            midifloat = ConvertYToValue(yPos);
        }
        else
        {
            this.transform.position = Vector3.Lerp(this.transform.position, Lhand.transform.position, 0.05f);
        }

    }
     float ConvertYToValue(float yPos)
    {
        // 如果y軸低於0.24，value維持0
        if (yPos <= yMin)
        {
            return valueMin;
        }
        // 如果y軸高於1.9，value維持1
        else if (yPos >= yMax)
        {
            return valueMax;
        }
        // 其他情況下，根據比例進行轉換
        else
        {
            return (yPos - yMin) / (yMax - yMin);
        }
    }
}
