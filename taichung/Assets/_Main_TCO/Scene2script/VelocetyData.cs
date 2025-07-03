using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VelocetyData : MonoBehaviour
{
    public Vector3 Position;
    public Vector3 LastPosition;
    public float Timing;
    public float DeltaTime; // 位置採樣頻率(時間差)
    public float Velocety;
    void Start()
    {
        Timing = 0;
        Position = this.transform.position;
    }

    void Update()
    {
        if (Time.time - Timing > DeltaTime)
        {
            LastPosition = Position;
            Position = this.transform.position;
            Velocety = Vector3.Distance(Position, LastPosition) / DeltaTime;
            Timing = Time.time;
        }
        // 速率計算
    }
}
