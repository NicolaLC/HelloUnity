using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class SearchImageOnWeb : MonoBehaviour {

	[SerializeField]
	private InputField m_searchField;

	[SerializeField]
	private UIMessage m_message_error;

	[SerializeField]
	private Image m_imageTo;

	[SerializeField]
	private Button m_searchButton;
	private string m_apiKey = "10368104-41f50ea0217ee5f91fd480988";
	private void Awake()
	{
			m_message_error.gameObject.SetActive(false);
	}
	IEnumerator Search() {
		if(m_searchField.text != "") {
			m_searchButton.interactable = false;
			UnityWebRequest www = UnityWebRequest.Get("https://pixabay.com/api/?key=" + m_apiKey +"&q=" + m_searchField.text);
			
			yield return www.SendWebRequest(); // send req to the web
			m_searchButton.interactable = true;	
			if(www.isNetworkError || www.isHttpError) {
				m_message_error.SetText("Search failed, retry.");
				m_message_error.gameObject.SetActive(true);
				Invoke("HideMessages", 5f);
			} else {
				string response = www.downloadHandler.text;
				var dict = MiniJSON.Json.Deserialize(response) as Dictionary<string, object>;
				var hits = dict["hits"] as List<object>;
				if(hits != null && hits.Count > 0) {
					var hit = hits[Random.Range(0, hits.Count - 1)] as Dictionary<string, object>;
					if(hit != null) {
						string largeImageURL = hit["largeImageURL"] as string;
						if(largeImageURL != null) {
							StartCoroutine("LoadImage", largeImageURL);
						}
					}
				} else {
					m_message_error.SetText("This search produced no results.");
					m_message_error.gameObject.SetActive(true);
					Invoke("HideMessages", 5f);
				}
			}
		} else {
			m_message_error.SetText("Please, search for something! Insert a value");
			m_message_error.gameObject.SetActive(true);
			yield return null;
			Invoke("HideMessages", 5f);
		}
	}

	IEnumerator LoadImage (string url) {
		WWW www = new WWW(Cloudinary.GetImage(url));

		yield return www;

		Texture2D texture = new Texture2D(www.texture.width, www.texture.height, TextureFormat.DXT1, false);

		www.LoadImageIntoTexture(texture);

		Rect rect = new Rect(0, 0, texture.width, texture.height);

		Sprite sprite = Sprite.Create(texture, rect, new Vector2(0.5f, 0.5f), 100);

		m_imageTo.sprite = sprite;
	}

	public void StartSearch() {
		StartCoroutine("Search");
	}

	private void HideMessages() {
		m_message_error.gameObject.SetActive(false);
	}
}
