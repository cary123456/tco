
using UnityEngine;
using UnityEngine.VFX;

public class growvalue : MonoBehaviour
{
    public Renderer rend;
    public float shininess;
    public float vfxvalue;
    //public VisualEffect visualEffect;
    public GestureDetector gestureDetector;
    public bool up;
    public bool grow;
    public int number;
    public GameObject crabman;
    public float timer = 0f;
    public GameObject UImanager;
    // Start is called before the first frame update
    void Start()
    {
        // rend = GetComponent<Renderer>();
        shininess = -0.6f;
        // Use the Specular shader on the material
        //rend.material.shader = Shader.Find("grow");
        UImanager = GameObject.FindGameObjectWithTag("uiman");
    }

    // Update is called once per frame
    void Update()
    {


        if (up) 
        {
            //crabman.GetComponent<crabmove>().crabs[number].GetComponent<Animator>().SetBool("fade", true);
            if (shininess < 1)
            {
                shininess += Time.deltaTime * 1f;
            }
            
        }
        if(shininess > 1f)
        {
            shininess = 1.1f;
        }
        //visualEffect.SetFloat("Particle Edge", -shininess );
        //rend.material.SetFloat("_cut", shininess );

        if (grow)
        {
            this.transform.localScale = Vector3.Lerp(this.transform.localScale, new Vector3(1f, 1.789382f, 1f), timer * 0.5f);
            timer += Time.deltaTime;
        }
        if(UImanager.GetComponent<UIManager>().VR == true)
        {
            this.gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.SetActive(false);
        }

    }
}
