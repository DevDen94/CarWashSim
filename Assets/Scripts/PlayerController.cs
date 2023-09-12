using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float moveSpeed = 5.0f;
    public float mouseSensitivity = 2.0f;

    private CharacterController controller;
    public Camera playerCamera;
    private float verticalRotation = 0;

    private void Start()
    {
        controller = GetComponent<CharacterController>();
        //playerCamera = GetComponentInChildren<Camera>();
        //Cursor.lockState = CursorLockMode.Locked;
    }

    private void Update()
    {
        // Player movement
        float horizontalMovement = ControlFreak2.CF2Input.GetAxis("Horizontal");
        float verticalMovement = ControlFreak2.CF2Input.GetAxis("Vertical");
        Vector3 moveDirection = transform.forward * verticalMovement + transform.right * horizontalMovement;
        controller.Move(moveDirection * moveSpeed * Time.deltaTime);

        // Player rotation
        float mouseX = ControlFreak2.CF2Input.GetAxis("Mouse X") * mouseSensitivity;
        float mouseY = ControlFreak2.CF2Input.GetAxis("Mouse Y") * mouseSensitivity;
        verticalRotation -= mouseY;
        verticalRotation = Mathf.Clamp(verticalRotation, -90, 90);
        playerCamera.transform.localRotation = Quaternion.Euler(verticalRotation, 0, 0);
        transform.Rotate(Vector3.up * mouseX);
    }
}
