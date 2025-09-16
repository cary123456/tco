using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;

public class handtrack : MonoBehaviour
{
    public GameObject thumbR;
    public bool follow;
    public VisualEffect CrabBurstVFX;
    bool isPlayed = false;
    public float burstDelayTime = 0f;
    // Start is called before the first frame update
    void Start()
    {
        thumbR = GameObject.FindGameObjectWithTag("Rhand");
    }

    // Update is called once per frame
    void Update()
    {
        if (follow)
        {
            this.transform.position = Vector3.Lerp(this.transform.position, thumbR.transform.position, 0.05f);
        }
        else
        {
            this.gameObject.GetComponent<Animator>().SetBool("C2P", true);
            if (!isPlayed)
            {
                StartCoroutine(timer(burstDelayTime));
                isPlayed = true;
            }

        }

    }
    IEnumerator timer(float time)
    {
        yield return new WaitForSeconds(time);
        CrabBurstVFX.gameObject.SetActive(true);
        CrabBurstVFX.Play();
    }
}
