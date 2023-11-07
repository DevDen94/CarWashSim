using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrossHair : MonoBehaviour
{
    Ray ray;
    RaycastHit hitInfo;
    public Transform From, to;
    // Start is called before the first frame update
    void Start()
    {
        From = this.transform;
    }

    // Update is called once per frame
    void Update()
    {
        ray = new Ray(From.position, to.forward);
        if (Physics.Raycast(ray, out hitInfo, 5))
        {
            //PaintTarget.CursorColor();
            this.transform.position = hitInfo.transform.position;
        }
    }
}