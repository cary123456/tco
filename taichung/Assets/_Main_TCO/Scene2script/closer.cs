using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
public class closer : MonoBehaviour
{
    public Transform referencePoint;

    void Update()
    {
        if (referencePoint == null)
        {
            Debug.LogError("Reference point not set!");
            return;
        }

        ReorderBuildings();
    }

    void ReorderBuildings()
    {
        // 获取所有带有 "building" 标签的对象
        GameObject[] buildings = GameObject.FindGameObjectsWithTag("word");

        // 根据与 referencePoint 的距离对对象进行排序（从远到近）
        List<GameObject> sortedBuildings = buildings
            .OrderByDescending(building => Vector3.Distance(building.transform.position, referencePoint.position))
            .ToList();

        // 按照排序结果重新排列 Hierarchy 中的对象
        if(sortedBuildings.Count > 0)
        {

            for (int i = 0; i < sortedBuildings.Count; i++)
            {
                sortedBuildings[i].transform.SetSiblingIndex(i);
            }
        }

        Debug.Log("Buildings reordered based on distance from reference point (farthest to nearest).");
    }
}
