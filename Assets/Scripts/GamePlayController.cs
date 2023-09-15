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
   

    private void Awake()
    {
        //Instantiate(Environment);
        if(instance== null)
        {
            instance = this;
        }

        CurrentLevel = Instantiate(Levels[PlayerPrefs.GetInt("CurrentLevel")]);
       
        playerObj = Instantiate(Cars[PlayerPrefs.GetInt("Cars")].gameObject, CurrentLevel.transform.GetChild(0).transform.position, CurrentLevel.transform.GetChild(0).transform.rotation);
       
    }

    // Start is called before the first frame update
    [Obsolete]
    void Start()
    {
        
        freelookref.GetComponent<CinemachineFreeLook>().Follow = playerObj.transform;
        freelookref.GetComponent<CinemachineFreeLook>().LookAt = playerObj.transform;
        foreach(Transform t in CurrentLevel.transform)
        {
            if(t.tag == "Uplift")
            {
                CurrentLevelUplifter = t.gameObject;
            }
        }
        
        //CamerasForGamePlay();
        //Canvas.SetActive(false);
        //StartCoroutine(CameraAnimator());
       
        //playerObj = Cars[PlayerPrefs.GetInt("Cars")].gameObject;
        //playerObj.SetActive(true);

    }

    
    public void PanelManager(int i)


    {
        switch (i)
        {
            default:
                ////pause////
                Panels[0].SetActive(true);
                Time.timeScale = 0f;
                //Cars[PlayerPrefs.GetInt("currentBus")].gameObject.SetActive(false);
                break;
            case 1:
                ///resume////
                Panels[0].SetActive(false);
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
                ///Next//
                /*if (PlayerPrefs.GetInt("CurrentLevel") < LevelManager.Instance.Levels.Length - 1)
                {
                    PlayerPrefs.SetInt("CurrentLevel", PlayerPrefs.GetInt("CurrentLevel") + 1);
                }*/
                PlayerPrefs.SetInt("CurrentLevel", PlayerPrefs.GetInt("UnlockLevel"));
                SceneManager.LoadScene(2);
                Time.timeScale = 1f;
                break;
            
            

        }


    }///PanelsControlers///
    public IEnumerator CameraAnimator()
    {
        if (CameraBool == true)
        {
            Panels[3].gameObject.SetActive(true);

        }
        CinemachineCam.SetActive(false);
       
        GameObject g = Instantiate(AnimationCam, playerObj.transform);
        
        yield return new WaitForSeconds(7f);
        if(CameraBool == true)
        {
            Panels[2].gameObject.SetActive(true);
           
        }
        else
        {

            Destroy(g);
            CamerasForGamePlay();
            
            Canvas.SetActive(true);
        }
        CameraBool = false;



    }///AnimatinCamera///

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
        Canvas.SetActive(false);
        CinemachineCam.SetActive(false);
       CurrentLevel.transform.GetChild(1).gameObject.SetActive(true);
    }
}
    // Update is called once per frame
   
