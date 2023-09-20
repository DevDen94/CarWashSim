using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FPSDisplay : MonoBehaviour
{
	// Start is called before the first frame update
	float deltaTime = 0.0f;

    public void Awake()
    {
		DontDestroyOnLoad(this.gameObject);
	}
    void Update()
	{
		deltaTime += (Time.unscaledDeltaTime - deltaTime) * 0.1f;
	}

	void OnGUI()
	{
		int w = Screen.width, h = Screen.height;

		GUIStyle style = new GUIStyle();

		Rect rect = new Rect(100f, 0, w, h * 2 / 2);
		style.alignment = TextAnchor.MiddleLeft;
		style.fontSize = h * 2 / 50;
		style.normal.textColor = new Color(1.0f, 0f, 0f, 1.0f);
		float msec = deltaTime * 1000.0f;
		float fps = 1.0f / deltaTime;
		string text = string.Format("({1:0.} fps)", msec, fps);
		GUI.Label(rect, text, style);

	}

}
