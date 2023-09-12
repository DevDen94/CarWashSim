using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ManinMenuScript : MonoBehaviour
{


    public GameObject MainMenuPAnel, SettingPanel, LoadingPanel, ExitPanel;

    public void Play()
    {
        AudioManager.Instance.Buttonclick();
        LoadingPanel.SetActive(true);
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

    }

    public void RateUS()
    {
        AudioManager.Instance.Buttonclick();

    }

    public void MoreGAmes()
    {
        AudioManager.Instance.Buttonclick();

    }
    public void openExitPanel()
    {
        ExitPanel.SetActive(true);
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
