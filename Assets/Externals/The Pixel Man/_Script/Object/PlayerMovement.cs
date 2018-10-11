namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	[DisallowMultipleComponent]
	public class PlayerMovement : CharacterMovement {



		// Ser
		[SerializeField] private KeyCode m_Left0 = KeyCode.LeftArrow;
		[SerializeField] private KeyCode m_Left1 = KeyCode.A;
		[SerializeField] private KeyCode m_Right0 = KeyCode.RightArrow;
		[SerializeField] private KeyCode m_Right1 = KeyCode.D;
		[SerializeField] private KeyCode m_Jump0 = KeyCode.P;
		[SerializeField] private KeyCode m_Jump1 = KeyCode.Space;
		[SerializeField] private KeyCode m_Jump2 = KeyCode.W;
		[SerializeField] private KeyCode m_Jump3 = KeyCode.UpArrow;



		// Data
		private float prevLTime = -1f;
		private float prevRTime = -1f;



		protected override void Update () {

			// Move
			float move = 0f;

			if (Input.GetKey(m_Left0) || Input.GetKey(m_Left1)) {
				if (prevLTime < 0f) {
					prevLTime = Time.time;
				}
				if (prevLTime > prevRTime) {
					move = -1f;
				}
			} else {
				prevLTime = -1f;
			}

			if (Input.GetKey(m_Right0) || Input.GetKey(m_Right1)) {
				if (prevRTime < 0f) {
					prevRTime = Time.time;
				}
				if (prevRTime > prevLTime) {
					move = 1f;
				}
			} else {
				prevRTime = -1f;
			}

			Move(move);

			// Jump
			if (Input.GetKeyDown(m_Jump0) || Input.GetKeyDown(m_Jump1) || Input.GetKeyDown(m_Jump2) || Input.GetKeyDown(m_Jump3) || Input.GetKeyDown(KeyCode.Mouse1)) {
				Jump();
			}
			if (Input.GetKeyUp(m_Jump0) || Input.GetKeyUp(m_Jump1) || Input.GetKeyUp(m_Jump2) || Input.GetKeyUp(m_Jump3) || Input.GetKeyUp(KeyCode.Mouse1)) {
				SwitchGravityScale(false);
			}

			base.Update();

		}




	}
}