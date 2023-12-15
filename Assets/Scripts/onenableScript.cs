using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class onenableScript : MonoBehaviour
{
   
    
    private void OnEnable()
    {
        Debug.LogError("Ads calling1");
        if (GoogleMobileAdsController.Instance.number == 0) { 
        GoogleMobileAdsController.Instance.ShowInterstitialAd();
            GoogleMobileAdsController.Instance.number = GoogleMobileAdsController.Instance.number + 1;
            Debug.LogError("Ads calling");
        }else if (GoogleMobileAdsController.Instance.number == 2)
        {
            GoogleMobileAdsController.Instance.number = 0;
        }
        else
        {
            GoogleMobileAdsController.Instance.number = GoogleMobileAdsController.Instance.number + 1;
        }
    }
}
