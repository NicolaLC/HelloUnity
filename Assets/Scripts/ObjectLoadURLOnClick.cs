using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectLoadURLOnClick : MonoBehaviour {

	[SerializeField]
	private string urlToCall;

	private void OnMouseDown()
	{
		if(urlToCall != null) Application.OpenURL(urlToCall);
	}
}
