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
    public GameObject UpliftBtn;
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
        StartCoroutine(LevelCompleteCouroutine());
      
    }
    public void UpliftFunc()
    {
        GamePlayController.instance.CurrentLevelUplifter.transform.GetComponent<Animator>().Play("UpliftAnim");
    }
    public IEnumerator LevelCompleteCouroutine()
    {
        yield return new WaitForSeconds(0.001f);
        if (CompletePatches == 16)
        {
            UpliftBtn.SetActive(true);

        }
        if (MudPatches == CompletePatches && !LevelComplete_)
        {
            GameObject d = Instantiate(GamePlayController.instance.AnimationCam, GamePlayController.instance.playerObj.transform);
            GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(0).gameObject.SetActive(false);
            GamePlayController.instance.CurrentLevelUplifter.transform.GetComponent<Animator>().Play("DownliftAnim");
            GamePlayController.instance.playerObj.transform.GetChild(1).gameObject.SetActive(true);
            yield return new WaitForSeconds(8f);
            Destroy(d);
            LevelComplete_ = true;

        }
        if (MudPatches == CompletePatches && LevelComplete_)
        {
            LevelComplete_ = true;
            LevelComplete.SetActive(true);
        }
        StartCoroutine(LevelCompleteCouroutine());

    }

    public void Update()
    {
        /*if(MudPatches==CompletePatches && !LevelComplete_)
        {
            LevelComplete_ = true;
            LevelComplete.SetActive(true);
        }
        if(CompletePatches == 17)
        {
            UpliftBtn.SetActive(true);
            
        }
        if (CompletePatches == 18)
        {
           
            GamePlayController.instance.CurrentLevelUplifter.transform.GetComponent<Animator>().Play("DownliftAnim");
        }*/


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