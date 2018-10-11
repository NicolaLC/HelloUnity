using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoToUrlButton : MonoBehaviour {

	[SerializeField]
	private string urlToCall;

	public void GoToUrl() {
		if(urlToCall != null) Application.OpenURL(urlToCall);
	}
}
