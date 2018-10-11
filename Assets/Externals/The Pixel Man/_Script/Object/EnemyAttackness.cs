namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	[RequireComponent(typeof(Collider2D)), DisallowMultipleComponent]
	public class EnemyAttackness : CharacterAttackness {




		[SerializeField] private Collider2D m_TargetCollider;
		[SerializeField] private Collider2D m_AttackRange;




		private void FixedUpdate () {
			if (Physics2D.IsTouching(m_AttackRange, m_TargetCollider)) {
				Attack();
			}
		}



	}
}