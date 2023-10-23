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
    /*public void ResetUplifter()
    {
        this.transform.position = new Vector3(transform.position.x, -0.26f, transform.position.z);
        this.gameObject.GetComponent<Animator>().enabled = false;
        this.gameObject.GetComponent<Animator>().Play("New State");
        
        Invoke(nameof(ResetAnim), 0.5f);
    }
    public void ResetAnim()
    {
       
        GamePlayController.instance.playerObj.transform.SetParent(this.transform);
        this.gameObject.GetComponent<Animator>().enabled = true;
        //this.transform.SetParent(GamePlayController.instance.CurrentLevelUplifter.transform);
    }*/
}
