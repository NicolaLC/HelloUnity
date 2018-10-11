namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	[DisallowMultipleComponent]
	public class PlayerAttackness : CharacterAttackness {




		// Ser
		[SerializeField] private KeyCode m_Attack = KeyCode.O;



		private void Update () {

			if (Input.GetKey(m_Attack) || Input.GetKey(KeyCode.Mouse0)) {
				Attack();
			}

		}



	}
}