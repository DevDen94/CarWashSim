using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class levemanager : MonoBehaviour
{
    public Slider TimeSlider, WaterSlider;
    public Text Time_, WaterInGallon;

    public static levemanager Instance;

    public int TimeInLevel;
    public float CountdownTime;

    public float TotalWater;

    public bool isToggleOn;



    public UnityEvent SprinkleOn,SprinkleOff;
    public bool HighWaterPressure;
    public GameObject NoozleLow, NoozleHigh;


    public Slider LevelProgress;


    [Space]

    public GameObject LevelComplete, LevelFail, Pause;

    public int MudPatches;
    public int CompletePatches;
    bool LevelComplete_;

    private void Start()
    {
        CountdownTime = TimeInLevel;
        TimeSlider.maxValue = CountdownTime;

        WaterSlider.maxValue = TotalWater;
        string waterValue = WaterSlider.value.ToString("F2");
        WaterInGallon.text = waterValue;

        HighWaterPressure = false;
        NoozleLow.SetActive(true);

        LevelProgress.value = 0;
        LevelProgress.maxValue = MudPatches;
        CompletePatches = 0;
        LevelComplete_ = false;
    }


    public void Update()
    {
        if(MudPatches==CompletePatches && !LevelComplete_)
        {
            LevelComplete_ = true;
            LevelComplete.SetActive(true);
        }
    }






    private void Awake()
    {
        Instance = this;
    }

    public void SprikleOn()
    {
        isToggleOn = true;
        SprinkleOn.Invoke();
    }


    public void SprikleOff()
    {
        isToggleOn = false;
        SprinkleOff.Invoke();
    }

    public void HighPressure()
    {
        HighWaterPressure = true;
        NoozleHigh.SetActive(true);
        NoozleLow.SetActive(false);
    }
    public void LowPressure()
    {
        HighWaterPressure = false;
        NoozleHigh.SetActive(false);
        NoozleLow.SetActive(true);
    }


    public void Next()
    {
        SceneManager.LoadScene(2);
    }

    public void Restart()
    {
        SceneManager.LoadScene(2);
    }

    public void Home()
    {
        SceneManager.LoadScene(0);
    }

    public void onPauseClick()
    {

        Pause.SetActive(true);
        Time.timeScale = 0f;
    }


    public void onResume()
    {
        Time.timeScale = 1f;
        Pause.SetActive(false);
        
    }

}