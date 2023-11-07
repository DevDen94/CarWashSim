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
    //public GameObject UpliftBtn;
    public static levemanager Instance;
    public GameObject[] Waterbuttons;
    public GameObject SoapBtn;
    public int TimeInLevel;
    public float CountdownTime;

    public float TotalWater;

    public bool isToggleOn;
    public bool ThisScriptOn = false;
    private bool CanvasBool = false;

    public UnityEvent SprinkleOn,SprinkleOff,SoapOnevent,SoapOfEvent;
    public bool HighWaterPressure,SoapOnBool;
    public GameObject NoozleLow, NoozleHigh,SoapEffect;


    public Slider LevelProgress;


    [Space]

    public GameObject LevelComplete, LevelFail, Pause;

    public int MudPatches;
    public int CompletePatches;
    public  bool LevelComplete_;
    [Header("Hand Animation")]
    public Animator HandAnim;
    public GameObject CubeCollider;
    public bool uplift;
    int val;
    private Vector3 CarResetPos;
    private void OnEnable()
    {
        CubeCollider.SetActive(true);
        ThisScriptOn = false;
        StartFuncForRestart();
    }


    private void Start()
    {
        SoapOnBool = false;

    }
    public void UpliftFunc()
    {
        
        AnimatorStateInfo stateInfo = GamePlayController.instance.CurrentLevelUplifter.transform.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0);
        if (!uplift)
        {
            GamePlayController.instance.CurrentLevelUplifter.transform.GetComponent<Animator>().Play("UpliftAnim");

            CheckLifter.instance.UpliftButton.SetActive(false);
            uplift = true;
        }
        else if(uplift)
        {
            GamePlayController.instance.CurrentLevelUplifter.transform.GetComponent<Animator>().Play("DownliftAnim");
            CheckLifter.instance.UpliftButton.SetActive(false);
            uplift = false;
        }
    }
    public IEnumerator LevelCompleteCouroutine()
    {
        yield return new WaitForSeconds(0.001f);
        CompletePatches = PlayerPrefs.GetInt("Washed");
        if (PlayerPrefs.GetInt("UnlockLevel") == 1)
        {
            LevelComplete_ = false;
            CanvasBool = true;

        }
        if (MudPatches == CompletePatches && LevelComplete_ == false&&CanvasBool == false)
        {
            AudioManager.Instance.SpraySound.Stop();
            if(uplift == true)
            {
                UpliftFunc();
            }
             
            GamePlayController.instance.WashMan.SetActive(true);
          
             GameObject d = Instantiate(GamePlayController.instance.WashMan, transform);
            GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(0).gameObject.SetActive(false);
            GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(1).gameObject.SetActive(false);
             CanvasBool = true;
            
            yield return new WaitForSeconds(4f);//4.5


            GamePlayController.instance.playerObj.GetComponent<Animator>().SetBool("run", true);
            GamePlayController.instance.playerObj.GetComponent<Animator>().enabled = true;
            GamePlayController.instance.playerObj.GetComponent<Animator>().SetBool("run",true);
            //GamePlayController.instance.playerObj.GetComponent<Animator>().Play("CarReverse");
            // d.gameObject.GetComponent<AnimatedCam>().enabled = false;
            yield return new WaitForSeconds(4.5f);
            d.transform.GetChild(1).gameObject.SetActive(true);
            
            yield return new WaitForSeconds(8.5f);
            
            
            GamePlayController.instance.playerObj.transform.GetChild(1).gameObject.SetActive(true);
           
            yield return new WaitForSeconds(3.5f);
            LevelComplete_ = true;
            CanvasBool = true;
 
            GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(1).gameObject.SetActive(true);
            Destroy(d);
            GamePlayController.instance.playerObj.GetComponent<Animator>().SetBool("run", false);
            //GamePlayController.instance.playerObj.GetComponent<Animator>().enabled = false;


        }
        if (MudPatches == CompletePatches && LevelComplete_)
        {

            
            LevelComplete_ = false;
            CanvasBool = true;
            LevelComplete.SetActive(true);
            //GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(1).gameObject.SetActive(true);
            if (PlayerPrefs.GetInt("CurrentLevel") < GamePlayController.instance.Levels.Length-1)
            {
               
                PlayerPrefs.SetInt("CurrentLevel", PlayerPrefs.GetInt("CurrentLevel") + 1);
                PlayerPrefs.SetInt("UnlockLevel", 1);
                PlayerPrefs.SetInt("LevelRestart", 0);
                Debug.Log("aya1"+ PlayerPrefs.GetInt("CurrentLevel")+LevelComplete_+CanvasBool);
                
            }
            else
            {
                PlayerPrefs.SetInt("CurrentLevel", UnityEngine.Random.Range(0, GamePlayController.instance.Levels.Length - 2));
               
            }
            yield return new WaitForSeconds(1f);//1
            GamePlayController.instance.playerObj.GetComponent<Animator>().enabled = false;
            LevelComplete_ = false;
            
            yield return null;
           
            
        }
        if (levemanager.Instance.CompletePatches == levemanager.Instance.MudPatches - 3)
        {
            levemanager.Instance.CompletePatches = levemanager.Instance.MudPatches;
            PlayerPrefs.SetInt("Washed", MudPatches);
            GetchildMat.Instance.AllCarWash();
            
            
            LevelProgress.value = MudPatches;
        }
        if (PlayerPrefs.GetInt("AdSoap") > 20)
        {
            foreach(GameObject g in Waterbuttons)
            {
                //g.SetActive(true);
                //SoapBtn.SetActive(false);
            }
        }
        else
        {
            foreach (GameObject g in Waterbuttons)
            {
                //g.SetActive(false);
                //SoapBtn.SetActive(true);
            }
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
        HandAnim.Play("HandAnimationOn");
        SoapEffect.SetActive(false);
        //SoapOn();
        // SoapOnBool = true;
    }
    public void SprikleOff()
    {
        isToggleOn = false;
        SprinkleOff.Invoke();
        HandAnim.Play("HandAnimationOff");
       
       
    }
    public void SoapOnFunc()
    {

        SoapOnevent.Invoke();
            SoapOnBool = true;
          
            HandAnim.Play("HandAnimationOn");
             PaintExample.Instance.brush.splatChannel = 1;
             AudioManager.Instance.SpraySoundFuncOn();
        
        

    }
    public void SoapOfFunc()
    {

        SoapOfEvent.Invoke();
        SoapEffect.SetActive(false);
            HandAnim.Play("HandAnimationOff");
            SoapOnBool = false;
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
        PlayerPrefs.SetInt("LevelRestart", 0);
        GoogleAdMobController.instance.ShowInterstitialAd();
        GoogleAdMobController.instance.ShowSmallBannerAd();
        //AdsManager.instance.ShowinterAd();
    }

    public void Restart()
    {
       //restartOnWashLevel
        
        if (PlayerPrefs.GetInt("UnlockLevel") == 1)
        {
            PlayerPrefs.SetInt("CurrentLevel", PlayerPrefs.GetInt("CurrentLevel") - 1);
            PlayerPrefs.SetInt("UnlockLevel", 0);
            Debug.Log("aya2" + PlayerPrefs.GetInt("CurrentLevel") + LevelComplete_ + CanvasBool);
        }
        GamePlayController.instance.playerObj.transform.parent = null;
        GamePlayController.instance.SwitchControlToCarWash();//Switchtowash
        GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(0).gameObject.SetActive(true);//wash level player on
        GetchildMat.Instance.AllCarDirty();//againCarDirty
       
        NoozleHigh.SetActive(false);
        NoozleLow.SetActive(false);
        Time.timeScale = 1f;
        SprikleOff();//particle off
        AudioManager.Instance.SpraySound.mute = false;
       
        GamePlayController.instance.playerObj.transform.GetChild(1).gameObject.SetActive(false);
        Fpsposition.Instance.FpsPosition();//FpsPlayerPosition
        this.enabled = false;
        this.enabled = true;


        GamePlayController.instance.playerObj.transform.parent = null;
        GamePlayController.instance.CurrentLevelUplifter.transform.GetComponent<Animator>().Play("Empty");
        GamePlayController.instance.Canvas.SetActive(false);
        GamePlayController.instance.CinemachineCam.SetActive(false);
        GamePlayController.instance.CurrentLevel.transform.GetChild(1).gameObject.SetActive(true);//wash level on
        PlayerPrefs.SetInt("LevelRestart", 1);

        Invoke(nameof(ParentSet), 1f);
        uplift = false;
        LevelFail.SetActive(false);
        Pause.SetActive(false);
        LevelComplete.SetActive(false);
        Gun.Instance.isTimeOver = false;
        LevelComplete_ = false;
        CanvasBool = false;
       
        GoogleAdMobController.instance.ShowSmallBannerAd();
        
    }

    public void Home()
    {
        SceneManager.LoadScene(0);
     //   AdsManager.instance.ShowinterAd();
        //PlayerPrefs.SetInt("LevelRestart", 1);
    }

    public void onPauseClick()
    {
       
        Pause.SetActive(true);
        Time.timeScale = 0f;
        GoogleAdMobController.instance.ShowBigBannerAd();
    }


    public void onResume()
    {
        Time.timeScale = 1f;
        
        Pause.SetActive(false);
        GoogleAdMobController.instance.ShowSmallBannerAd();

    }
    public IEnumerator AllWashCouroutine()
    {
        if (levemanager.Instance.ThisScriptOn == true)
        {
            yield return new WaitForSeconds(0.01f);
            ///Allmesheswash//
            
           
        }
        Debug.LogError("AA" + levemanager.Instance.ThisScriptOn);
        //StartCoroutine(AllWashCouroutine());

    }
    public void StartFuncForRestart()
    {
        //this func for restart 
        ThisScriptOn = true;
        val = 0;
        CountdownTime = TimeInLevel;
        TimeSlider.maxValue = CountdownTime;

        WaterSlider.maxValue = TotalWater;
        string waterValue = WaterSlider.value.ToString("F2");
        WaterInGallon.text = waterValue;
        WaterSlider.value = TotalWater;
        HighWaterPressure = false;
        NoozleLow.SetActive(true);

        LevelProgress.value = 0;
        LevelProgress.maxValue = MudPatches;
        CompletePatches = 0;
        LevelComplete_ = false;
        StartCoroutine(LevelCompleteCouroutine());
        PlayerPrefs.SetInt("UnlockLevel", 0);
    }
    public void ParentSet()
    {
        //parentSetAfter1sec
        GamePlayController.instance.playerObj.transform.SetParent(GamePlayController.instance.CurrentLevelUplifter.transform);
    }
    public void Extra()
    {

        //GamePlayController.instance.playerObj.transform.SetParent(GamePlayController.instance.CurrentLevelUplifter.transform);
        //GamePlayController.instance.playerObj.transform.position = CarResetPos;
        //GamePlayController.instance.CurrentLevelUplifter.gameObject.GetComponent<Animator>().enabled = true;
        //this.transform.SetParent(GamePlayController.instance.CurrentLevelUplifter.transform);
        /*if (MudPatches == CompletePatches && LevelComplete_ == false && CanvasBool == false)
        {
            AudioManager.Instance.SpraySound.Stop();
            GameObject d = Instantiate(GamePlayController.instance.AnimationCam, GamePlayController.instance.playerObj.transform);
            GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(0).gameObject.SetActive(false);
            GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(1).gameObject.SetActive(false);
            //GamePlayController.instance.CurrentLevelUplifter.transform.GetComponent<Animator>().Play("DownliftAnim");
            GamePlayController.instance.playerObj.transform.GetChild(1).gameObject.SetActive(true);
            GamePlayController.instance.playerObj.GetComponent<Animator>().enabled = true;

            yield return new WaitForSeconds(8f);
            Destroy(d);
            GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(1).gameObject.SetActive(true);
            LevelComplete_ = true;
            CanvasBool = true;
            Debug.Log("falsef");

        }
        if (MudPatches == CompletePatches && LevelComplete_)
        {


            LevelComplete_ = false;
            CanvasBool = true;
            LevelComplete.SetActive(true);
            //GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(1).gameObject.SetActive(true);
            if (PlayerPrefs.GetInt("CurrentLevel") < GamePlayController.instance.Levels.Length - 1)
            {

                PlayerPrefs.SetInt("CurrentLevel", PlayerPrefs.GetInt("CurrentLevel") + 1);
                PlayerPrefs.SetInt("UnlockLevel", 1);
                PlayerPrefs.SetInt("LevelRestart", 0);
                Debug.Log("aya1" + PlayerPrefs.GetInt("CurrentLevel") + LevelComplete_ + CanvasBool);

            }
            else
            {
                PlayerPrefs.SetInt("CurrentLevel", UnityEngine.Random.Range(0, GamePlayController.instance.Levels.Length - 2));

            }
            LevelComplete_ = false;
            yield return null;
            //AdsManager.instance.ShowBigBanner();

        }
        if (levemanager.Instance.CompletePatches == levemanager.Instance.MudPatches - 3)
        {
            levemanager.Instance.CompletePatches = levemanager.Instance.MudPatches;

            GetchildMat.Instance.AllCarWash();


            LevelProgress.value = MudPatches;
        }

        StartCoroutine(LevelCompleteCouroutine());*/
    }//Unused
}