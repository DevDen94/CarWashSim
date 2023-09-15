using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerScript : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    [System.Obsolete]
    public IEnumerator OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "CarWash")
        {
           
            this.gameObject.transform.SetPositionAndRotation(new Vector3
                              (other.transform.position.x,transform.position.y,other.transform.position.z), other.transform.rotation);
            other.gameObject.SetActive(false);
            this.gameObject.GetComponent<Rigidbody>().isKinematic = true;
            this.gameObject.GetComponent<BoxCollider>().enabled = false;
            this.GetComponent<PrometeoCarController>().enabled = false;
            GameObject d = Instantiate(GamePlayController.instance.AnimationCam, this.transform);
            yield return new WaitForSeconds(3f);
            Destroy(d);
            GamePlayController.instance.SwitchControlToCarWash();
            this.transform.SetParent(GamePlayController.instance.CurrentLevelUplifter.transform);
           
        }
       
        yield return null;
    }
    
    
}
