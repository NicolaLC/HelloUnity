using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ObjectLoadSceneOnClick : MonoBehaviour {

	[SerializeField]
	private string sceneToLoadName;

	private void OnMouseDown()
	{
			SceneManager.LoadScene(sceneToLoadName, LoadSceneMode.Single);
	}
}
