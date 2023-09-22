using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ManinMenuScript : MonoBehaviour
{


    public GameObject MainMenuPAnel, SettingPanel, LoadingPanel, ExitPanel;
    private void Start()
    {
        Time.timeScale = 1f;
        AdsManager.instance.ShowSmallBanner();

        if (AdsManager.instance.isAppOpen)
        {
            AdsManager.instance.ShowAppOpenAd();
            AdsManager.instance.isAppOpen=false;
        }

    }
    public void Play()
    {
        LoadingPanel.SetActive(true);
        AudioManager.Instance.Buttonclick();
        AdsManager.instance.ShowinterAd();
        //LoadingPanel.SetActive(true);
    }

    public void Back()
    {
        AudioManager.Instance.Buttonclick();

        SettingPanel.SetActive(false);
    }


    public void Setting()
    {
        AudioManager.Instance.Buttonclick();

        SettingPanel.SetActive(true);
    }

    public void RemoveAds()
    {
        AudioManager.Instance.Buttonclick();

    }

    public void RestorePurchase()
    {
        AudioManager.Instance.Buttonclick();

    }

    public void PP()
    {
        AudioManager.Instance.Buttonclick();
        Application.OpenURL("https://darwingames1.blogspot.com/2023/06/privacy-policy.html");

    }

    public void RateUS()
    {
        AudioManager.Instance.Buttonclick();
        Application.OpenURL("https://play.google.com/store/apps/details?id=" + Application.identifier);
    }

    public void MoreGAmes()
    {
        AudioManager.Instance.Buttonclick();
        Application.OpenURL("https://play.google.com/store/apps/dev?id=5659235520105216655");

    }
    public void openExitPanel()
    {
        ExitPanel.SetActive(true);
        AdsManager.instance.ShowinterAd();
        
    }

    public void offExitPanel()
    {
        ExitPanel.SetActive(false);
    }

    public void Exit()
    {
        Application.Quit();
    }

}
