using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CursorController : MonoBehaviour {

	[SerializeField]
	private Texture2D defaultCursor;

	[SerializeField]
	private Texture2D clickCursor;


	[SerializeField]
	private Texture2D typeCursor;

	public static CursorController instance;
	
	private void Awake()
	{
		if(instance == null) {
			instance = this;
		}
		SetDefaultCursor();		
	}

	public void SetDefaultCursor(){
		Cursor.SetCursor(defaultCursor, Vector2.zero, CursorMode.Auto);
	}

	public void SetClickCursor(){
		Cursor.SetCursor(clickCursor, Vector2.zero, CursorMode.Auto);
	}

	public void SetTypeCursor() {
		Cursor.SetCursor(typeCursor, new Vector2(0,25), CursorMode.Auto);
	}
}
