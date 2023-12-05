  using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using Cinemachine;
public class GamePlayController : MonoBehaviour
{
    public static GamePlayController instance;
    [Header("Cars In This Object")]
    public GameObject playerObj;
    [Header("Cars")]
    public GameObject[] Cars;
    
    [Header("Environment")]
    public GameObject Environment;
   [Header("Cameras And Bus")]
    public GameObject CinemachineCam;
     [Header("Panels")]
    public GameObject[] Panels;
    [Header("Canvas")]
    public GameObject Canvas;
     [Header("AnimationCamera")]
    public GameObject AnimationCam;
    [Header("BoolForWinPanel")]
    public bool CameraBool = false;
    public GameObject[] Levels;
  
    [Header("CurrentLevel in this object")]
    public GameObject CurrentLevel;
    public GameObject freelookref;
    [Header("UpLifter")]
    public GameObject CurrentLevelUplifter;
    public GameObject FpsStartPoint;
    public GameObject WashMan;

    public GameObject CarDownBlockers;

    private void Awake()
    {
       
        if(instance== null)
        {
            instance = this;
        }

        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        CurrentLevel = Instantiate(Levels[PlayerPrefs.GetInt("CurrentLevel")]);

        playerObj = Instantiate(Cars[PlayerPrefs.GetInt("CurrentLevel")].gameObject, CurrentLevel.transform.GetChild(0).transform.position, CurrentLevel.transform.GetChild(0).transform.rotation);




    }
    private void OnEnable()
    {
        
    }
    // Start is called before the first frame update
    [Obsolete]
    void Start()
    {

        Time.timeScale = 1f;
        //Instantiate(Environment);
        
        freelookref.GetComponent<CinemachineFreeLook>().Follow = playerObj.transform;
        freelookref.GetComponent<CinemachineFreeLook>().LookAt = playerObj.transform;
        foreach (Transform t in CurrentLevel.transform)
        {
            if (t.tag == "Uplift")
            {
                CurrentLevelUplifter = t.gameObject;
            }
        }
        /*if(PlayerPrefs.GetInt("LevelRestart") == 1)
        {
            SwitchControlToCarWash();
            
        }
        else
        {
            PlayerPrefs.SetInt("LevelRestart", 0);
        }*/
        // AdsManager.instance.ShowSmallBanner();
        GoogleAdMobController.instance.ShowSmallBannerAd();

    }

    
    public void PanelManager(int i)

    {

        switch (i)
        {
            default:
                ////pause////
                Panels[0].SetActive(true);
                Time.timeScale = 0f;
                // AdsManager.instance.ShowinterAd();
                //  AdsManager.instance.ShowBigBanner();
               // GoogleAdMobController.instance.ShowInterstitialAd();
                GoogleAdMobController.instance.ShowBigBannerAd();

                //Cars[PlayerPrefs.GetInt("currentBus")].gameObject.SetActive(false);
                break;
            case 1:
                ///resume////
                Panels[0].SetActive(false);
                GoogleAdMobController.instance.ShowSmallBannerAd();

                //  AdsManager.instance.ShowSmallBanner();
                Time.timeScale = 1f;
                //Cars[PlayerPrefs.GetInt("currentBus")].gameObject.SetActive(true);
                break;
            case 2:
                ///home////
                SceneManager.LoadScene(1);
                break;
            case 3:
                ///replay////
                Time.timeScale = 1f;
                SceneManager.LoadScene(2);
                
                break;
            case 4:
                ///Next////
                Time.timeScale = 1f;
               

                Panels[1].SetActive(false);
                SwitchControlToCarWash();
                GoogleAdMobController.instance.ShowSmallBannerAd();
                break;



        }


    }///PanelsControlers///
  

    public void CamerasForGamePlay()
    {
        if (PlayerPrefs.GetInt("CurrentLevel") == 0 || PlayerPrefs.GetInt("CurrentLevel") == 2 || PlayerPrefs.GetInt("CurrentLevel") == 4 || PlayerPrefs.GetInt("CurrentLevel") == 6 || PlayerPrefs.GetInt("CurrentLevel") == 8)
        {
            CinemachineCam.SetActive(true);
           
            //UvcCamera.GetComponent<CameraController>().enabled = true;
        }
        else
        {
            CinemachineCam.SetActive(false);
           
        }
    }
    public void SwitchControlToCarWash()
    {

        playerObj.GetComponent<Animator>().SetBool("run", false);

        Canvas.SetActive(false);
        CinemachineCam.SetActive(false);
        CurrentLevel.transform.GetChild(1).gameObject.SetActive(true);

        levemanager.Instance._levelArrows.SetActive(false);
        levemanager.Instance._levelArrows2.SetActive(false);
        playerObj.GetComponent<Animator>().enabled = false;
        foreach (Transform child in CurrentLevel.transform)
        {
            if (child.tag == "CarWash")
            {
                
                playerObj.transform.SetPositionAndRotation(child.position, child.rotation);
            }

           
        }
        Fpsposition.Instance.FpsPosition();
        
        PlayerPrefs.SetInt("LevelRestart", 1);
        
    }
}
    // Update is called once per frame
   
