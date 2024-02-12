using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunObject : MonoBehaviour
{
    public int _indexOfGun;
    public GameObject _equipGunButton;

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.CompareTag("Player"))
        {
            _equipGunButton.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            _equipGunButton.SetActive(false);
        }
    }

    //public void ForRewardButtonFunc()
    //{
    //    if(Application.internetReachability != NetworkReachability.NotReachable)
    //    {
    //        Gun.Instance._currentGun = _indexOfGun;
    //        GoogleMobileAdsController.Instance.ShowRewardedAd();
    //        PlayerPrefs.SetInt("Reward", 1);
    //    }
    //}
}
