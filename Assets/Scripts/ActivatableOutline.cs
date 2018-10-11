using UnityEngine;

[RequireComponent(typeof(Outline))]
public class ActivatableOutline : MonoBehaviour
{
  private Outline myOutlineScript;

  private void Awake()
  {
    myOutlineScript = GetComponent<Outline>();
  }
  void OnMouseOver()
  {
    //If your mouse hovers over the GameObject with the script attached, output this message
    myOutlineScript.enabled = true;
  }

  void OnMouseExit()
  {
    //The mouse is no longer hovering over the GameObject so output this message each frame
    myOutlineScript.enabled = false;
  }
}
