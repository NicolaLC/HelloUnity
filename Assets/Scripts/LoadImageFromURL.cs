using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LoadImageFromURL : MonoBehaviour {

	[SerializeField]
	private string url;

	// Use this for initialization
	IEnumerator Start () {
		WWW www = new WWW(Cloudinary.GetImage(url));

		yield return www;

		Texture2D texture = new Texture2D(www.texture.width, www.texture.height, TextureFormat.DXT1, false);

		www.LoadImageIntoTexture(texture);

		Rect rect = new Rect(0, 0, texture.width, texture.height);

		Sprite sprite = Sprite.Create(texture, rect, new Vector2(0.5f, 0.5f), 100);

		GetComponent<Image>().sprite = sprite;
	}
}
