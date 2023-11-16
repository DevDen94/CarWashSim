using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PaintIn3D;

public class transition : MonoBehaviour
{
   
    public Material material;
    public float transitionAmount = 0.0f;
    public float SoapAmount;

    public static transition Instance;
    public bool isCompleteWash;
    public bool IsSoap,ForWash,Forwashsingle;
    public int CompleteSoap;
    private void Awake()
    {
        Instance = this;
    }

    public void Start()
    {
        ForWash = false;
        isCompleteWash = false;
        IsSoap = false;
        Forwashsingle = false;
        Renderer renderer = GetComponent<Renderer>();
        if (renderer != null)
        {
            material = renderer.material;
        }
        PlayerPrefs.SetInt("Washed", 0);
        PlayerPrefs.SetInt("AdSoap", 0);
    }


    private void Update()
    {
        
    }

    private Renderer objectRenderer;
    public void CleanCar(RaycastHit hit)
    {
        if (hit.collider.gameObject.GetComponent<transition>().ForWash == true)
        {
            hit.collider.gameObject.transform.GetChild(0).gameObject.SetActive(false);
            Debug.LogError("RayCastFire");
        }
        // 
        if (hit.collider.GetComponent<Renderer>().material == material)
        {
            
            // Calculate the transition amount based on hit position or any criteria
          /*  if (transitionAmount <= 1)
            {
                //transitionAmount = transitionAmount + 0.009f;
                transitionAmount = transitionAmount + 0.2f;
                Debug.Log("Raycast" + transitionAmount);
                material.SetFloat("_TransitionAmount", transitionAmount);
                hit.collider.gameObject.transform.GetChild(0).gameObject.SetActive(false);
                //hit.collider.gameObject.transform.GetChild(0).gameObject.SetActive(true);
            }
            else if (transitionAmount >= 1 && !isCompleteWash)
            {
                //Debug.LogError("RayCastFire");
                transitionAmount = 1f;
                material.SetFloat("_TransitionAmount", transitionAmount);
                isCompleteWash = true;
                levemanager.Instance.CompletePatches = levemanager.Instance.CompletePatches + 1;
                levemanager.Instance.LevelProgress.value = levemanager.Instance.LevelProgress.value + 1;
                //this.transform.GetChild(0).GetComponent<ParticleSystem>().Play();
                AudioManager.Instance.WashClick.Play();
                hit.collider.gameObject.transform.GetChild(0).gameObject.SetActive(false);
               
            }*/
           
        }

    }
    public IEnumerator AllWashCouroutine() // WHEN cAR 70% WASHED Unused
    {
        /* if (levemanager.Instance.ThisScriptOn == true)
         {
             yield return new WaitForSeconds(0.01f);
             ///Allmesheswash//
             if (levemanager.Instance.CompletePatches == levemanager.Instance.MudPatches - 2)
             {
                 levemanager.Instance.CompletePatches = levemanager.Instance.MudPatches;
                 transitionAmount = 1f;
                 material.SetFloat("_TransitionAmount", transitionAmount);


                 //this.gameObject.transform.GetChild(0).gameObject.GetComponent<ParticleSystem>().Stop();
             }

         }

         StartCoroutine(AllWashCouroutine());*/
        yield return null;
    }
    public void OnTriggerEnter(Collider other) 
    {

         
        if (other.gameObject.tag == "Soap"&& IsSoap == false && levemanager.Instance.SoapOnBool == true)
        {
            this.gameObject.transform.GetChild(0).gameObject.SetActive(true);
            
            IsSoap = true;
            ForWash = true;
            //Forwashsingle = true;
            Debug.Log("dropping");
            if (PlayerPrefs.GetInt("CurrentLevel") >= 2)
            {
                PlayerPrefs.SetInt("AdSoap", PlayerPrefs.GetInt("AdSoap") + 15);
            }
            else
            {
                PlayerPrefs.SetInt("AdSoap", PlayerPrefs.GetInt("AdSoap") + 1);
            }
           
            
        }
        if (other.gameObject.tag == "Soap" && ForWash == true&& levemanager.Instance.isToggleOn == true)
        {
            this.gameObject.transform.GetChild(0).gameObject.SetActive(false);
            
            PlayerPrefs.SetInt("Washed", PlayerPrefs.GetInt("Washed") + 1);

            Debug.Log("soaping");

            ForWash = false;
            //levemanager.Instance.isToggleOn = false;
            Invoke(nameof(For1meshComplete), 2f);

        }

    }
    public void For1meshComplete()
    {

        ForWash = true;
        levemanager.Instance.isToggleOn = true;
    }
   

   


}
