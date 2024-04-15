using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class raycast : MonoBehaviour
{
    public string buildingTag = "Building"; // �n�������������
    public float rayLength = 100f; // �g�u����
    public GameObject build;
    public LineRenderer laserLineRenderer;
    public bool right;
    public void Update()
    {
        // �q�������m�o�X�@���g�u
        Ray ray = new Ray(transform.position, transform.forward);
        RaycastHit hit;

        // �p�G�g�u�����F�F��
        if (Physics.Raycast(ray, out hit, rayLength))
        {
            // �ˬd����������O�_�����w������
            if (hit.collider.CompareTag(buildingTag))
            {
                build = hit.collider.gameObject;
                // �b����x����ܳQ���������骺�W��
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
            build = null;
        }

        // ø�s�g�u�A�N����ܬ�����
        Debug.DrawRay(ray.origin, ray.direction * rayLength, Color.red);
    }
}