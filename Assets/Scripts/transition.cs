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
    public bool IsSoap;
    public int CompleteSoap;
    private void Awake()
    {
        Instance = this;
    }

    public void Start()
    {
        isCompleteWash = false;
        IsSoap = false;
        Renderer renderer = GetComponent<Renderer>();
        if (renderer != null)
        {
            material = renderer.material;
        }
        //StartCoroutine(AllWashCouroutine());
        //levemanager.Instance.SoapEffect.transform.GetChild(1).gameObject.tag = "Soap";
    }


    private void Update()
    {
        
    }

    private Renderer objectRenderer;
    public void CleanCar(RaycastHit hit)
    {

       // Debug.LogError("RayCastFire");
        if (hit.collider.GetComponent<Renderer>().material == material)
        {
            
            // Calculate the transition amount based on hit position or any criteria
            if (transitionAmount <= 1)
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
               
            }
           
        }

    }
    public IEnumerator AllWashCouroutine() // WHEN cAR 70% WASHED
    {
        if (levemanager.Instance.ThisScriptOn == true)
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
       
        StartCoroutine(AllWashCouroutine());
       
    }
    public void OnTriggerEnter(Collider other) 
    {

         
        if (other.gameObject.tag == "Soap"&& IsSoap == false)
        {
            this.gameObject.transform.GetChild(0).gameObject.SetActive(true);
            //this.gameObject.transform.GetChild(0).gameObject.SetActive(true);
            IsSoap = true;
            PlayerPrefs.SetInt("AdSoap", PlayerPrefs.GetInt("AdSoap") + 1);
            Debug.LogError(PlayerPrefs.GetInt("AdSoap"));
            //other.gameObject.tag = "Untagged";
        }
       

    }

    /* public IEnumerator AllSoapParticleOff()
     {
         if (levemanager.Instance.ThisScriptOn == true)
         {
             yield return new WaitForSeconds(0.01f);
             ///Allmesheswash//
             if (levemanager.Instance.CompletePatches == levemanager.Instance.MudPatches - 2)
             {
                 levemanager.Instance.CompletePatches = levemanager.Instance.MudPatches;
                 transitionAmount = 1f;
                 material.SetFloat("_TransitionAmount", transitionAmount);

             }

         }

         StartCoroutine(AllWashCouroutine());

     }*/

   


}
