using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class DirtyCar : MonoBehaviour
{
    public static DirtyCar Instance;
    public Ray ray;
    //public RaycastHit hitInfo;
   
    public Transform From, to;

   private  Brush brush_;

    PaintExample pe_;

    int _splatChannel = -1;

    private void Awake()
    {
        Instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        pe_ = FindObjectOfType<PaintExample>();
        brush_ = pe_.brush;

        From = this.transform;
    }

    private void OnEnable()
    {
        _splatChannel++;
    }

    // Update is called once per frame
    void Update()
    {
        FireRaycastForLow();
    }
    void FireRaycastForLow()
    {



        ray = new Ray(From.position, From.forward);

        if (Physics.Raycast(ray, out RaycastHit hitInfo, 30))
        {
            PaintExample.Instance.brush.splatChannel = _splatChannel;
            //PaintTarget.PaintCursor(brush_);
            PaintTarget.PaintRaycast(ray,hitInfo,PaintExample.Instance.brush,true);

        }
    }

    
}




