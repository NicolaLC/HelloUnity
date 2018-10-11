using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCameraCanvas : MonoBehaviour {
	
	private Camera cam;

	private void Awake()
	{
			cam = Camera.main;
	}
	
	private void OnEnable()
	{
		Vector2 pos;
    RectTransformUtility.ScreenPointToLocalPointInRectangle(transform as RectTransform, Input.mousePosition, cam, out pos);
    transform.position = transform.TransformPoint(pos);
	}
	// Update is called once per frame
	void Update () {
		Vector2 pos;
    RectTransformUtility.ScreenPointToLocalPointInRectangle(transform as RectTransform, Input.mousePosition, cam, out pos);
		pos.y += 20f;
		pos.x += 25f;
    transform.position = Vector3.Lerp(transform.position, transform.TransformPoint(pos), 0.1f);
	}
}
