using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class transition : MonoBehaviour
{
   
    public Material material;
    public float transitionAmount = 0.0f;
    

    public static transition Instance;
    public bool isCompleteWash;

    private void Awake()
    {
        Instance = this;
    }

    public void Start()
    {
        isCompleteWash = false;

        Renderer renderer = GetComponent<Renderer>();
        if (renderer != null)
        {
            material = renderer.material;
        }
        //StartCoroutine(AllWashCouroutine());
        Debug.LogError("start");
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
                Debug.LogWarning(transitionAmount);
            }
            else if (transitionAmount >= 1 && !isCompleteWash)
            {
                //Debug.LogError("RayCastFire");
                transitionAmount = 1f;
                material.SetFloat("_TransitionAmount", transitionAmount);
                isCompleteWash = true;
                levemanager.Instance.CompletePatches = levemanager.Instance.CompletePatches + 1;
                levemanager.Instance.LevelProgress.value = levemanager.Instance.LevelProgress.value + 1;
                this.transform.GetChild(0).GetComponent<ParticleSystem>().Play();
                AudioManager.Instance.WashClick.Play();
            }
            
        }

    }
    public IEnumerator AllWashCouroutine()
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
            Debug.LogError("AA");
        }
        Debug.LogError("AA" + levemanager.Instance.ThisScriptOn);
        StartCoroutine(AllWashCouroutine());
       
    }


   


   
}
