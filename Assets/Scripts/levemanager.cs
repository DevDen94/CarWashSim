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

    public int TimeInLevel;
    public float CountdownTime;

    public float TotalWater;

    public bool isToggleOn;
    public bool ThisScriptOn = false;
    private bool CanvasBool = false;

    public UnityEvent SprinkleOn,SprinkleOff;
    public bool HighWaterPressure;
    public GameObject NoozleLow, NoozleHigh;


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
            //GamePlayController.instance.WashMan.transform.GetChild(0).gameObject.SetActive(true);
             GameObject d = Instantiate(GamePlayController.instance.WashMan, transform);
            GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(0).gameObject.SetActive(false);
            GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(1).gameObject.SetActive(false);
            //GamePlayController.instance.CurrentLevelUplifter.transform.GetComponent<Animator>().Play("DownliftAnim");
            
            yield return new WaitForSeconds(4.5f);
            CanvasBool = true;
           
            GamePlayController.instance.playerObj.GetComponent<Animator>().enabled = true;
           // d.gameObject.GetComponent<AnimatedCam>().enabled = false;
            yield return new WaitForSeconds(4.5f);
            d.transform.GetChild(1).gameObject.SetActive(true);
            //GamePlayController.instance.WashMan.transform.GetChild(1).gameObject.SetActive(true);
            // yield return new WaitForSeconds(6f);
            yield return new WaitForSeconds(8.5f);
            
            
            GamePlayController.instance.playerObj.transform.GetChild(1).gameObject.SetActive(true);
            yield return new WaitForSeconds(3.5f);
            // d.gameObject.GetComponent<AnimatedCam>().enabled = true ;
            LevelComplete_ = true;
            CanvasBool = true;
           
            //GamePlayController.instance.WashMan.transform.GetChild(1).gameObject.SetActive(false);
            //GamePlayController.instance.WashMan.transform.GetChild(0).gameObject.SetActive(true);
            //GamePlayController.instance.WashMan.gameObject.SetActive(false);
            GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(1).gameObject.SetActive(true);
            Destroy(d);


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
            LevelComplete_ = false;
            yield return null;
            //AdsManager.instance.ShowBigBanner();
            Debug.LogError(LevelComplete);
            
        }
        if (levemanager.Instance.CompletePatches == levemanager.Instance.MudPatches - 3)
        {
            levemanager.Instance.CompletePatches = levemanager.Instance.MudPatches;

            GetchildMat.Instance.AllCarWash();
            
            
            LevelProgress.value = MudPatches;
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
    }


    public void SprikleOff()
    {
        isToggleOn = false;
        SprinkleOff.Invoke();
        HandAnim.Play("HandAnimationOff");
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
        GoogleAdMobController.instance.ShowInterstitialAd();
        GoogleAdMobController.instance.ShowSmallBannerAd();
        SceneManager.LoadScene(2);
        PlayerPrefs.SetInt("LevelRestart", 0);
        //AdsManager.instance.ShowinterAd();
    }

    public void Restart()
    {
       
        LevelComplete_ = false;
        CanvasBool = false;
        if (PlayerPrefs.GetInt("UnlockLevel") == 1)
        {
            PlayerPrefs.SetInt("CurrentLevel", PlayerPrefs.GetInt("CurrentLevel") - 1);
            PlayerPrefs.SetInt("UnlockLevel", 0);
            Debug.Log("aya2" + PlayerPrefs.GetInt("CurrentLevel") + LevelComplete_ + CanvasBool);
        }
       
        //GamePlayController.instance.SwitchControlToCarWash();
        GamePlayController.instance.CurrentLevel.transform.GetChild(1).transform.GetChild(0).gameObject.SetActive(true);
        GetchildMat.Instance.AllCarDirty();
        LevelFail.SetActive(false);
        Pause.SetActive(false);
        LevelComplete.SetActive(false);
        NoozleHigh.SetActive(false);
        NoozleLow.SetActive(false);
        Time.timeScale = 1f;
        SprikleOff();
        AudioManager.Instance.SpraySound.mute = false;
        GamePlayController.instance.playerObj.GetComponent<Animator>().enabled = false;
        GamePlayController.instance.playerObj.GetComponent<Animator>().enabled = true;
        GamePlayController.instance.playerObj.GetComponent<Animator>().enabled = false;
        Invoke(nameof(ResetCarAnim), 1f);
        ResetCarAnim();
        GamePlayController.instance.playerObj.transform.GetChild(1).gameObject.SetActive(false);
        Fpsposition.Instance.FpsPosition();

        this.enabled = false;
        this.enabled = true;
        if(uplift == true)
        {
            UpliftFunc();
        }
       

        GamePlayController.instance.Canvas.SetActive(false);
        GamePlayController.instance.CinemachineCam.SetActive(false);
        GamePlayController.instance.CurrentLevel.transform.GetChild(1).gameObject.SetActive(true);
        PlayerPrefs.SetInt("LevelRestart", 1);
        //GamePlayController.instance.playerObj.GetComponent<Animator>().enabled = false;
        GoogleAdMobController.instance.ShowSmallBannerAd();
        // CarResetPos = GamePlayController.instance.playerObj.transform.position;
        //GamePlayController.instance.playerObj.transform.parent = null;
        //this.transform.SetParent(GamePlayController.instance.CurrentLevelUplifter.transform);


        // GamePlayController.instance.CurrentLevelUplifter.gameObject.GetComponent<Animator>().Play("New State");

        // AdsManager.instance.ShowSmallBanner();
        // AdsManager.instance.ShowinterAd();
        //SceneManager.LoadScene(2);

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
    private void OnDisable()
    {
        
    }
    public void ResetCarAnim()
    {
        GamePlayController.instance.playerObj.GetComponent<Animator>().enabled = true;
        GamePlayController.instance.playerObj.GetComponent<Animator>().enabled = false;
    }
    public void ResetAnim()
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
    }
}