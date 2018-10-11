namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	public class Collider2DHandler : MonoBehaviour {



		[SerializeField] private TransformTransformEvent m_OnTriggerStay;


		private void OnTriggerStay2D (Collider2D collision) {
			m_OnTriggerStay.Invoke(collision.transform, transform);
		}



	}
}