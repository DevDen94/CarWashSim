using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckLifter : MonoBehaviour
{
    public GameObject UpliftButton;
    public static CheckLifter instance;


    private void Awake()
    {
        instance = this;
    }
    public void EnableUplift()
    {
        UpliftButton.SetActive(true);
    }
    public void DisableUpLift()
    {
        UpliftButton.SetActive(false);
    }
}
