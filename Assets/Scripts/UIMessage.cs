using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIMessage : MonoBehaviour {
	public Text m_text;

	public void SetText(string message) {
		m_text.text = message;
	}
}
