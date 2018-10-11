using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cloudinary : MonoBehaviour {
	public static string GetImage(string urlToFecth) {
		return "https://res.cloudinary.com/nicola-castellani/image/fetch/" + urlToFecth;
	}

}
