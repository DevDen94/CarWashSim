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
    public void ResetUplifter()
    {
        this.transform.position = new Vector3(transform.position.x, 0f, transform.position.z);
        this.gameObject.GetComponent<Animator>().enabled = false;
        Invoke(nameof(ResetAnim), 1f);
    }
    public void ResetAnim()
    {
        this.gameObject.GetComponent<Animator>().enabled = true;
    }
}
