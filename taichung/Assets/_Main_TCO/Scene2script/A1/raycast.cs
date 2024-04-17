using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class raycast : MonoBehaviour
{
    public string buildingTag = "Building"; // 要擊中的物體標籤
    public float rayLength = 100f; // 射線長度
    public GameObject build;
    public LineRenderer laserLineRenderer;
    public bool right;
    public float scale;
    public void Update()
    {
        // 從本物件位置發出一條射線
        if (right)
        {
            scale = -1;
        }
        else
        {
            scale = 1;
        }
        Ray ray = new Ray(transform.position, transform.forward*scale);
        RaycastHit hit;

        // 如果射線擊中了東西
        if (Physics.Raycast(ray, out hit, rayLength))
        {
            // 檢查擊中的物體是否有指定的標籤
            if (hit.collider.CompareTag(buildingTag))
            {
                build = hit.collider.gameObject;
                // 在控制台中顯示被擊中的物體的名稱
                Debug.Log("Hit building: " + hit.collider.gameObject.name);
                laserLineRenderer.SetPosition(0, this.transform.position);
                laserLineRenderer.SetPosition(1, hit.point);
                laserLineRenderer.material.SetColor("_EmissionColor", Color.green); 
            }           

        }
        else
        {
            
            if (right)
            {
                laserLineRenderer.SetPosition(0, this.transform.position);
                laserLineRenderer.SetPosition(1, this.transform.position + this.transform.forward * -rayLength);
            }
            else
            {
                laserLineRenderer.SetPosition(0, this.transform.position);
                laserLineRenderer.SetPosition(1, this.transform.position + this.transform.forward * rayLength);
            }

            laserLineRenderer.material.SetColor("_EmissionColor", Color.red);
            
        }

        // 繪製射線，將其顯示為紅色
        Debug.DrawRay(ray.origin, ray.direction * rayLength, Color.red);
    }
}
