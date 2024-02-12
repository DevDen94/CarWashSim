using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ControlFreak2.TouchControl;

public class Gun : MonoBehaviour
{
    public static Gun Instance;
    public Transform gunMuzzleHighPressure, gunMuzzleLighPressure; // The point from which the raycast will be fired.
    public float fireRange = 0.1f; // Maximum distance the raycast can reach.
    private float lastFireTime;
    public float fireRate = 0.1f;
    public ParticleSystem waterSplashLow, onHitEffectLow, waterSplashHigh, onHitEffectHigh;
    public GameObject BubblesWaterLow,BubblesWaterHigh;
    public bool WaterSplash;

    public LayerMask ignoreLayer;


    private bool isParticleSystemActive = false;
    public int hitsToDestroy = 3; // Number of hits required to destroy the object

    private int hitsRemaining;

    public bool isTimeOver;

    public Material CarMaterial;
    int value;
    bool SpraySoundBool;

    public int _currentGun;
    public GameObject[] _allGuns;

    //public Color objectColor;
    //public Color fadeColor;
    //public float fadeTime = 2;
    //public float fadeStart = 0;
    private void Awake()
    {
        Instance = this;
    }
    private void OnEnable()
    {
        value = 179;
        isTimeOver = false;
        levemanager.Instance.Time_.text = "00:00";
    }
    private void Start()
    {
        foreach (var gun in _allGuns)
        {
            gun.SetActive(false);
        }
        _allGuns[_currentGun].SetActive(true);

       /* value = 179;
        isTimeOver = false;
        levemanager.Instance.Time_.text = "00:00";*/
        //CarMaterial.color = fadeColor;
    }


    void Update()
    {

        if(!ControlFreak2.CF2Input.GetButton("Fire1") && !levemanager.Instance.directOn)
        {
            levemanager.Instance.isToggleOn = false;

            Debug.Log("ayieeen");
        }

        // Check if the fire button (e.g., left mouse button) is pressed.
        if (!levemanager.Instance.isToggleOn && ControlFreak2.CF2Input.GetButton("Fire1") && Time.time - lastFireTime >= fireRate)
        {
            //FireRaycast();
            lastFireTime = Time.time;
            WaterSpringOn();
            WaterReduction();
            levemanager.Instance.HandAnim.Play("HandAnimationOn");
            levemanager.Instance.isToggleOn = true;
            //AudioManager.Instance.SpraySound.Play();
        }
        else
        if (!levemanager.Instance.isToggleOn && !ControlFreak2.CF2Input.GetButton("Fire1"))
        {
            waterSpringOff();
            levemanager.Instance.HandAnim.Play("HandAnimationOff");
            levemanager.Instance.isToggleOn = false;


            //AudioManager.Instance.SpraySound.Stop();
        }

        if (levemanager.Instance.isToggleOn)
        {

            lastFireTime = Time.time;
            WaterSpringOn();
            WaterReduction();

        }

        if (levemanager.Instance.SoapOnBool == true)
        {

            lastFireTime = Time.time;
            SoapOn();
           
            //WaterSpringOn();
            //WaterReduction();
            FireRaycastForLow();
        }
        else
        {
            SoapOff();
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
                int level_number = PlayerPrefs.GetInt("CurrentLevel");
                Firebase.Analytics.FirebaseAnalytics.LogEvent("level_fail", "level_number", level_number);
                levemanager.Instance.LevelFail.SetActive(true);
                //AdsManager.instance.ShowinterAd();
                //AdsManager.instance.ShowBigBanner();
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
            int level_number = PlayerPrefs.GetInt("CurrentLevel");
            Firebase.Analytics.FirebaseAnalytics.LogEvent("level_fail", "level_number", level_number);

            levemanager.Instance.LevelFail.SetActive(true);
           // AdsManager.instance.ShowinterAd();
          //  AdsManager.instance.ShowBigBanner();
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
            BubblesWaterHigh.SetActive(true);
            
            transition.Instance.ForWash = true;
           // transition.Instance.Forwashsingle = true;
            


        }// Start the particle system
        else if (!levemanager.Instance.HighWaterPressure)
        {
            FireRaycastForLow();
            waterSplashLow.Play();
            onHitEffectLow.Play();
            BubblesWaterLow.SetActive(true);
            transition.Instance.ForWash = true;
           // transition.Instance.Forwashsingle = true;
        }// Start the particle system
        PaintExample.Instance.brush.splatChannel = 4;//erase
        AudioManager.Instance.SpraySoundFuncOn();
    }
    public void SoapOn()
    {

       levemanager.Instance.SoapEffect.SetActive(true);
       

    }
    public void SoapOff()
    {

        levemanager.Instance.SoapEffect.SetActive(false);
        
    }

    public void waterSpringOff()
    {
        if (levemanager.Instance.HighWaterPressure)
        {
            waterSplashHigh.Stop();
            onHitEffectHigh.Stop();
            
            BubblesWaterHigh.SetActive(false);
            transition.Instance.ForWash = false;
        }// Start the particle system
        else if (!levemanager.Instance.HighWaterPressure)
        {
            waterSplashLow.Stop();
            onHitEffectLow.Stop();
           
            BubblesWaterLow.SetActive(false);
            transition.Instance.ForWash = false;
        }// Start the particle system
        AudioManager.Instance.SpraySoundFuncOff();
    }
    public RaycastHit hitInfo;
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
        //RaycastHit hitInfo;

        // Perform the raycast and check if it hits something.
        Debug.DrawRay(gunMuzzleHighPressure.position, gunMuzzleHighPressure.transform.forward * fireRange, Color.green);
        if (Physics.Raycast(ray, out hitInfo, fireRange))
        {
            Debug.DrawLine(gunMuzzleHighPressure.position, hitInfo.point, Color.yellow);
           
            //PaintTarget.CursorColor();
            //PaintTarget.PaintCursor(PaintExample.Instance.brush);



            Renderer renderer = hitInfo.collider.GetComponent<Renderer>();
            if(PaintExample.Instance.brush.splatChannel == 4)
            {
                //if(hitInfo.collider.GetComponent<PaintTarget>() != null)
                //{
                //    if (hitInfo.collider.GetComponent<PaintTarget>().checkingSplatChannel() == 1)
                //    {
                //        Debug.Log("splat channel is : " + hitInfo.collider.GetComponent<PaintTarget>().checkingSplatChannel());
                        PaintTarget.PaintRaycast(ray, hitInfo, PaintExample.Instance.brush, true);
                //    }
                //}
            }
            else
            {
                PaintTarget.PaintRaycast(ray, hitInfo, PaintExample.Instance.brush, true);
            }

            //PaintTarget.PaintRaycast(ray, hitInfo, PaintExample.Instance.brush, true);

            if (hitInfo.collider.GetComponent<transition>() != null)
            {
               //PaintTarget.Instance.RayColor(hitInfo);
                //if (!hitInfo.collider.GetComponent<transition>().isCompleteWash)
                
                // else
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
