using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatedCam : MonoBehaviour
{
    private float speed = 10f;
    // Start is called before the first frame update

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(0f, -speed * Time.deltaTime, 0f);
    }
}
