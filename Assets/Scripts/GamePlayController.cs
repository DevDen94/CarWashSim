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
        Debug.Log("l" + PlayerPrefs.GetInt("CurrentLevel"));
        CurrentLevel = Instantiate(Levels[PlayerPrefs.GetInt("CurrentLevel")]);
       
        playerObj = Instantiate(Cars[PlayerPrefs.GetInt("CurrentLevel")].gameObject, CurrentLevel.transform.GetChild(0).transform.position, CurrentLevel.transform.GetChild(0).transform.rotation);
       
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
        Canvas.SetActive(false);
        CinemachineCam.SetActive(false);
       CurrentLevel.transform.GetChild(1).gameObject.SetActive(true);
    }
}
    // Update is called once per frame
   
