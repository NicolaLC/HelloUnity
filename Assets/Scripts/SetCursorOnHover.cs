using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetCursorOnHover : MonoBehaviour
{

  public enum CursorType { DEFAULT, CLICK, TYPE }


  [SerializeField]
  private GameObject imageToEnable;

  private void Awake()
  {
    if (imageToEnable)
    {
      imageToEnable.SetActive(false);
    }
  }
  public CursorType cursorSelected;
  void OnMouseOver()
  {
    switch (cursorSelected)
    {
      case CursorType.DEFAULT:
        CursorController.instance.SetDefaultCursor();
        break;
      case CursorType.TYPE:
        CursorController.instance.SetTypeCursor();
        break;
      case CursorType.CLICK:
        CursorController.instance.SetClickCursor();
        break;
      default:
        CursorController.instance.SetDefaultCursor();
        break;
    }

		if(imageToEnable) {
			imageToEnable.SetActive(true);
		}
  }

  void OnMouseExit()
  {
    CursorController.instance.SetDefaultCursor();
		if(imageToEnable) {
			imageToEnable.SetActive(false);
		}
  }

  public void OnEventEnter()
  {
    OnMouseOver();
  }
  public void OnEventExit()
  {
    OnMouseExit();
  }
}
