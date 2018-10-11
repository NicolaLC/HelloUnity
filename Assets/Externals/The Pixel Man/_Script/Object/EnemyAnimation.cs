namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	[DisallowMultipleComponent, RequireComponent(typeof(Animator))]
	public class EnemyAnimation : MonoBehaviour {


		// ShotC
		private Animator Ani {
			get {
				return m_Ani ?? (m_Ani = GetComponent<Animator>());
			}
		}

		private EnemyMovement Movement {
			get {
				return m_Movement ?? (m_Movement = GetComponentInParent<EnemyMovement>());
			}
		}

		private EnemyAttackness Attackness {
			get {
				return m_Attackness ?? (m_Attackness = GetComponentInParent<EnemyAttackness>());
			}
		}


		// Ser
		[SerializeField] private Vector2 m_AttackScaleMuti;
		[SerializeField] private Vector2 m_AttackRotationMuti;
		[SerializeField] private Color m_HPColorGreen;
		[SerializeField] private Color m_HPColorRed;
		[SerializeField] private string m_MovingKey = "Moving";


		// Data
		private Animator m_Ani = null;
		private EnemyMovement m_Movement = null;
		private EnemyAttackness m_Attackness = null;
		private SpriteRenderer m_Renderer;
		private Health m_Health;
		private bool m_PrevAttacking = false;


		private void Awake () {
			m_Renderer = GetComponentInChildren<SpriteRenderer>(true);
			m_Health = GetComponentInParent<Health>();
		}


		private void Update () {

			// Animation
			Ani.SetBool(m_MovingKey, Mathf.Abs(Movement.AimSpeed) > 0.01f);

			// Attacking
			if (m_Renderer) {
				bool attacking = Time.time < Attackness.PrevAttackTime + 0.1f;
				if (attacking != m_PrevAttacking) {
					m_PrevAttacking = attacking;
					m_Renderer.transform.localScale = Vector3.one * (attacking ? Random.Range(m_AttackScaleMuti.x, m_AttackScaleMuti.y) : 1f);
					m_Renderer.transform.localRotation = Quaternion.Euler(0f, 0f, attacking ? Random.Range(m_AttackRotationMuti.x, m_AttackRotationMuti.y) : 0f);
				}
			}

			// HP Color
			if (m_Renderer && m_Health) {
				m_Renderer.color = Color.Lerp(m_HPColorRed, m_HPColorGreen, m_Health.HP / m_Health.MaxHP);
			}
		}



		public void Kill () {



		}


	}
}