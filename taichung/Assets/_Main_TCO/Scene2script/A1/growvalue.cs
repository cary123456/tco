
using UnityEngine;
using UnityEngine.VFX;

public class growvalue : MonoBehaviour
{
    public float shininess;
    public float vfxvalue;
    //public VisualEffect visualEffect;
    public GestureDetector gestureDetector;
    public bool up;
    public bool grow;
    public int number;
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
            this.transform.GetComponent<Animator>().SetBool("bool2",true);
            //timer += Time.deltaTime;
            this.gameObject.tag = "buildinglo";
        }
        if(UImanager != null)
        {
            if (UImanager.GetComponent<UIManager>().VR == true)
            {
                this.gameObject.transform.GetChild(0).gameObject.SetActive(false);
                this.gameObject.transform.GetChild(1).gameObject.SetActive(false);
                this.gameObject.transform.GetChild(2).gameObject.SetActive(false);
                this.gameObject.transform.GetChild(3).gameObject.SetActive(true);
            }
        }
      

    }
}
