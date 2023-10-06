using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LoadingScript : MonoBehaviour
{
    public Image progressBar;
    public Text progressText;
    public float loadingSpeed = 0.001f; // Control the loading speed here.
    public int Value;
    float progress;

    private void OnEnable()
    {

        if (!PlayerPrefs.HasKey("LN"))
        {
            PlayerPrefs.SetInt("LN", 1);
        }

        progress = 0f;
        Time.timeScale = 1f;
        

        

    }
    private void Start()
    {
        
        StartCoroutine(LoadAsyncScene());
        Invoke(nameof(showBigBanner),0.5f);
      //  AdsManager.instance.ShowBigBanner();
    }


    public void showBigBanner()
    {
        GoogleAdMobController.instance.ShowBigBannerAd();
    }

    private IEnumerator LoadAsyncScene()
    {


        
        
        while (progressBar.fillAmount <1)
         {
           
            progressText.text = (progressBar.fillAmount * 100f).ToString("F0") + "%";
            yield return null;
         }
        
        AsyncOperation oper = SceneManager.LoadSceneAsync(Value);
        oper.allowSceneActivation = true;
       



    }
}

