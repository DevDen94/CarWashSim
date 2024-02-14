using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float moveSpeed = 5.0f;
    public float rotationSpeed = 2.0f;
    public float lookSpeed = 2.0f;
    public float jumpForce = 5.0f;
    public float gravity = 9.81f;

    private CharacterController controller;
    private float verticalVelocity = 0.0f;

    public Transform playerCamera;

    private float verticalRotation = 0.0f;

    public AudioSource _footstepsSound;

    void Start()
    {
        controller = GetComponent<CharacterController>();
        //Cursor.lockState = CursorLockMode.Locked;

        // Assuming you have a child object for the camera.
        // playerCamera = transform.Find("Camera");

        _footstepsSound.volume = PlayerPrefs.GetFloat("sfx");
    }

    void Update()
    {
        // Get player input for movement
        float horizontalInput = ControlFreak2.CF2Input.GetAxis("Horizontal");
        float verticalInput = ControlFreak2.CF2Input.GetAxis("Vertical");

        if(horizontalInput != 0 || verticalInput != 0)
        {
            _footstepsSound.gameObject.SetActive(true);
        }
        else
        {
            _footstepsSound.gameObject.SetActive(false);
        }

        // Calculate movement direction
        Vector3 forwardMovement = transform.forward * verticalInput;
        Vector3 horizontalMovement = transform.right * horizontalInput;

        // Calculate total movement direction
        Vector3 moveDirection = forwardMovement + horizontalMovement;

        // Apply movement speed
        moveDirection.Normalize();
        moveDirection *= moveSpeed;

        // Check if the player is grounded
        if (controller.isGrounded)
        {
            // Reset vertical velocity if grounded
            verticalVelocity = -0.5f;

            // Handle jumping
            if (Input.GetButtonDown("Jump"))
            {
                verticalVelocity = jumpForce;
            }
        }
        else
        {
            // Apply gravity when not grounded
            verticalVelocity -= gravity * Time.deltaTime;
        }

        // Add vertical velocity to the movement direction
        moveDirection.y = verticalVelocity;

        // Move the CharacterController
        controller.Move(moveDirection * Time.deltaTime);

        // Calculate rotation based on mouse input for player
        float rotationY = ControlFreak2.CF2Input.GetAxis("Mouse X") * rotationSpeed;
        transform.Rotate(0, rotationY, 0);

        // Calculate rotation based on mouse input for camera
        float rotationX = -ControlFreak2.CF2Input.GetAxis("Mouse Y") * lookSpeed;
        verticalRotation += rotationX;
        verticalRotation = Mathf.Clamp(verticalRotation, -90.0f, 90.0f);
        playerCamera.localEulerAngles = new Vector3(verticalRotation, 0, 0);
    }

}
