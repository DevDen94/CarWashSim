using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gun : MonoBehaviour
{
    public Transform gunMuzzleHighPressure, gunMuzzleLighPressure; // The point from which the raycast will be fired.
    public float fireRange = 0.1f; // Maximum distance the raycast can reach.
    private float lastFireTime;
    public float fireRate = 0.1f;
    public ParticleSystem waterSplashLow, onHitEffectLow, waterSplashHigh, onHitEffectHigh;

    public bool WaterSplash;




    private bool isParticleSystemActive = false;
    public int hitsToDestroy = 3; // Number of hits required to destroy the object

    private int hitsRemaining;

    public bool isTimeOver;

    public Material CarMaterial;
    int value;


    //public Color objectColor;
    //public Color fadeColor;
    //public float fadeTime = 2;
    //public float fadeStart = 0;

    private void Start()
    {
        value = 179;
        isTimeOver = false;
        levemanager.Instance.Time_.text = "00:00";
        //CarMaterial.color = fadeColor;
    }


    void Update()
    {
        // Check if the fire button (e.g., left mouse button) is pressed.
        if (!levemanager.Instance.isToggleOn && ControlFreak2.CF2Input.GetButton("Fire1") && Time.time - lastFireTime >= fireRate)
        {
            //FireRaycast();
            lastFireTime = Time.time;
            WaterSpringOn();
            WaterReduction();
            levemanager.Instance.HandAnim.Play("HandAnimationOn");

        }
        else
        if (!levemanager.Instance.isToggleOn && !ControlFreak2.CF2Input.GetButton("Fire1"))
        {
            waterSpringOff();
            levemanager.Instance.HandAnim.Play("HandAnimationOff");
        }

        if (levemanager.Instance.isToggleOn)
        {

            lastFireTime = Time.time;
            WaterSpringOn();
            WaterReduction();

        }




        //----------------------TIme Logic---------------------------
        if (!isTimeOver)
        {
            levemanager.Instance.CountdownTime -= Time.deltaTime;

            levemanager.Instance.TimeSlider.value = levemanager.Instance.CountdownTime;

            int minutes = Mathf.FloorToInt(levemanager.Instance.CountdownTime / 60);
            int seconds = Mathf.FloorToInt(levemanager.Instance.CountdownTime % 60);

            levemanager.Instance.Time_.text = string.Format("{0:00}:{1:00}", minutes, seconds);
            if (levemanager.Instance.CountdownTime <= 0)
            {
                isTimeOver = true;
                levemanager.Instance.LevelFail.SetActive(true);
            }
        }

    }







    //----------------------------Time Reduction Logic------------------
    void WaterReduction()
    {

        if (!levemanager.Instance.isToggleOn)
        {
            levemanager.Instance.TotalWater = levemanager.Instance.TotalWater - 0.009f;
            levemanager.Instance.WaterSlider.value = levemanager.Instance.TotalWater;
            string waterLevel = levemanager.Instance.WaterSlider.value.ToString("F2");
            levemanager.Instance.WaterInGallon.text = waterLevel;
        }
        else
        {
            levemanager.Instance.TotalWater = levemanager.Instance.TotalWater - 0.001f;
            levemanager.Instance.WaterSlider.value = levemanager.Instance.TotalWater;
        }


        if (levemanager.Instance.WaterSlider.value <= 0)
        {
            levemanager.Instance.LevelFail.SetActive(true);
        }

    }

    public Ray ray;
    //---------------------------------RayCast--------------------
    void FireRaycast()
    {

        WaterSplash = true;
        // Create a ray from the gun muzzle point, in the direction of the gun's forward vector.

        if (levemanager.Instance.HighWaterPressure)
        {
            ray = new Ray(gunMuzzleHighPressure.position, gunMuzzleHighPressure.forward);
        }
        else if (!levemanager.Instance.HighWaterPressure)
        {
            ray = new Ray(gunMuzzleLighPressure.position, gunMuzzleLighPressure.forward);
        }
        RaycastHit hitInfo;

        // Perform the raycast and check if it hits something.
        if (Physics.Raycast(ray, out hitInfo, fireRange))
        {
            //Debug.LogError(hitsRemaining);
            if (hitInfo.collider.gameObject.tag == "Dirt")
            {

                hitsRemaining--;

                if (hitsRemaining <= 0)
                {
                    Destroy(hitInfo.collider.gameObject);
                    hitsRemaining = hitsToDestroy;
                }
            }
        }
        else
        {
            // If the raycast doesn't hit anything, you can handle that here.
            Debug.Log("Raycast hit nothing.");
        }
        //  Debug.DrawRay(ray.origin, ray.direction * waterSplash.main.startLifetime.constantMax, Color.red, 1.0f);
    }

    public void WaterSpringOn()
    {
        if (levemanager.Instance.HighWaterPressure)
        {
            value -= 2;
            waterSplashHigh.Play();
            onHitEffectHigh.Play();
            FireRaycastForLow();

        }// Start the particle system
        else if (!levemanager.Instance.HighWaterPressure)
        {
            FireRaycastForLow();
            waterSplashLow.Play();
            onHitEffectLow.Play();
        }// Start the particle system
    }

    public void waterSpringOff()
    {
        if (levemanager.Instance.HighWaterPressure)
        {
            waterSplashHigh.Stop();
            onHitEffectHigh.Stop();
        }// Start the particle system
        else if (!levemanager.Instance.HighWaterPressure)
        {
            waterSplashLow.Stop();
            onHitEffectLow.Stop();
        }// Start the particle system
    }

    void FireRaycastForLow()
    {

        WaterSplash = true;
        // Create a ray from the gun muzzle point, in the direction of the gun's forward vector.

        if (levemanager.Instance.HighWaterPressure)
        {
            ray = new Ray(gunMuzzleHighPressure.position, gunMuzzleHighPressure.forward);
        }
        else if (!levemanager.Instance.HighWaterPressure)
        {
            ray = new Ray(gunMuzzleLighPressure.position, gunMuzzleLighPressure.forward);
            
        }
        RaycastHit hitInfo;
        
        // Perform the raycast and check if it hits something.
        if (Physics.Raycast(ray, out hitInfo, fireRange))
        {
            if (hitInfo.collider.GetComponent<transition>() != null)
            {
                
                if (!hitInfo.collider.GetComponent<transition>().isCompleteWash)
                    hitInfo.collider.GetComponent<transition>().CleanCar(hitInfo);
                else
                    return;
               // Debug.Log("RayCast");
            }
            else
                return;
        }
        else
        {
            // If the raycast doesn't hit anything, you can handle that here.
            Debug.Log("Raycast hit nothing.");
        }


    }
}
