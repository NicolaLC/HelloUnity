namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	public class StageCamera : MonoBehaviour {



		// Ser
		[SerializeField] private Vector2 m_LerpRate = new Vector2(10f, 1f);
		[SerializeField] private Rigidbody2D m_Player;


		// Cache
		private Vector3 AimPosition;



		private void Awake () {
			AimPosition = transform.position;
		}


		private void LateUpdate () {
			transform.position = AimPosition;
		}


		void FixedUpdate () {
			AimPosition.x = Mathf.Lerp(
				transform.position.x,
				m_Player.position.x,
				Time.deltaTime * m_LerpRate.x
			);
			AimPosition.y = Mathf.Lerp(
				transform.position.y,
				m_Player.position.y,
				Time.deltaTime * m_LerpRate.y
			);
			AimPosition.z = m_Player.transform.position.z;
		}


	}
}