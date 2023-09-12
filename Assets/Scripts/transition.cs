using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class transition : MonoBehaviour
{
   
    private Material material;
    private float transitionAmount = 0.0f;
    

    public static transition Instance;
    public bool isCompleteWash;

    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        isCompleteWash = false;

        Renderer renderer = GetComponent<Renderer>();
        if (renderer != null)
        {
            material = renderer.material;
        }

    }


    private void Update()
    {
        
    }

    private Renderer objectRenderer;
    public void CleanCar(RaycastHit hit)
    {

        Debug.LogError("RayCastFire");
        if (hit.collider.GetComponent<Renderer>().material == material)
        {
            
            // Calculate the transition amount based on hit position or any criteria
            if (transitionAmount <= 1)
            {
                transitionAmount = transitionAmount + 0.009f;
                material.SetFloat("_TransitionAmount", transitionAmount);
            }
            else if (transitionAmount >= 1 && !isCompleteWash)
            {
                Debug.LogError("RayCastFire");
                isCompleteWash = true;
                levemanager.Instance.CompletePatches = levemanager.Instance.CompletePatches + 1;
                levemanager.Instance.LevelProgress.value = levemanager.Instance.LevelProgress.value + 1;
            }
        }

    }


   


   
}
