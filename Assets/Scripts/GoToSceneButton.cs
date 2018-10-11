using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoToSceneButton : MonoBehaviour {
	[SerializeField]
	private string sceneToLoadName;

	void OnMouseOver()
  {
    //If your mouse hovers over the GameObject with the script attached, output this message
    CursorController.instance.SetClickCursor();
  }

  void OnMouseExit()
  {
    //The mouse is no longer hovering over the GameObject so output this message each frame
    CursorController.instance.SetDefaultCursor();
  }
	public void LoadScene() {
		SceneManager.LoadScene(sceneToLoadName, LoadSceneMode.Single);
	}
}
