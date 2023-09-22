using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BusArrow : MonoBehaviour
{
    public static BusArrow Instance;
    public Transform Target;
    Coroutine BusCouroutine;
    public GameObject ARROW;
    public float mindis = 0f;
    public float MaxDis;
    float StartDIS;
    private void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        BusCouroutine =  StartCoroutine(TargetArrow());

    }
    public void MaxDistanceMeasure()
    {
       StartDIS = Vector3.Distance(Target.position, this.transform.position);
        
    }
    // Update is called once per frame
    void Update()
    {
        
    }
    public IEnumerator TargetArrow()
    {
        while (true)
        {
            if (Target)
            {

                yield return new WaitForSeconds(0.01f);


                Vector3 targetPostition = new Vector3(Target.position.x,
                                           this.transform.position.y,
                                           Target.position.z);
                this.transform.LookAt(targetPostition);
                float DIS = Vector3.Distance(Target.position, this.transform.position);
                float normalizedValue = (DIS - mindis) / (StartDIS - mindis);
                //float normalizedValue = (DIS - 10) / (DIS - 10);
                Color lerpedColor = Color.Lerp(minColor, maxColor, normalizedValue);
                ARROW.GetComponent<MeshRenderer>().material.color = lerpedColor;
            }
           
        }

    }
   
    public Color minColor = Color.green;
    public Color maxColor = Color.red;
   















}
