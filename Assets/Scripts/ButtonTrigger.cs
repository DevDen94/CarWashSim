using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonTrigger : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public IEnumerator OnTriggerStay(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {

          
            GamePlayController.instance.CurrentLevelUplifter.GetComponent<Animator>().speed = 0f;
            
            CheckLifter.instance.DisableUpLift();
        }
        yield return null;
    }
    
    public IEnumerator OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
           
            GamePlayController.instance.CurrentLevelUplifter.GetComponent<Animator>().speed = 1f;
            yield return new WaitForSeconds(2f);
            CheckLifter.instance.EnableUplift();
        }
        yield return null;
    }
}
