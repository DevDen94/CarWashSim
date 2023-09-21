using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerScript : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        BusArrow.Instance.Target =GamePlayController.instance.CurrentLevelUplifter.gameObject.transform;
        BusArrow.Instance.MaxDistanceMeasure();
    }

    [System.Obsolete]
    public IEnumerator OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "CarWash")
        {
           
            this.gameObject.transform.SetPositionAndRotation(new Vector3
                              (other.transform.position.x,transform.position.y,other.transform.position.z), other.transform.rotation);
            this.transform.GetChild(2).gameObject.SetActive(false);
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
        if(other.gameObject.tag == "GarageCam")
        {
            other.gameObject.GetComponent<BoxCollider>().enabled = false;
            other.gameObject.transform.GetChild(0).gameObject.SetActive(true);
            yield return new WaitForSeconds(4f);
            other.gameObject.SetActive(false);
        }
       
        yield return null;
    }
    
    
}
