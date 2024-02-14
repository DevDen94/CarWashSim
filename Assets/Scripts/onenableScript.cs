using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class onenableScript : MonoBehaviour
{
   
    
    private void OnEnable()
    {

        if (Implementation.Instance.number == 0)
        {
            Implementation.Instance.ShowInterstitial();
            Implementation.Instance.number = Implementation.Instance.number + 1;

        }
        else if (Implementation.Instance.number == 1)
        {
            Implementation.Instance.number = 0;
        }
        else
        {
            Implementation.Instance.number = Implementation.Instance.number + 1;
        }
    }
}
