namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;


	[DisallowMultipleComponent, RequireComponent(typeof(Animator))]
	public class PlayerAnimation : MonoBehaviour {


		// ShotC
		private Animator Ani {
			get {
				return m_Ani ?? (m_Ani = GetComponent<Animator>());
			}
		}

		private PlayerMovement Movement {
			get {
				return m_Movement ?? (m_Movement = GetComponentInParent<PlayerMovement>());
			}
		}

		private PlayerAttackness Attackness {
			get {
				return m_Attackness ?? (m_Attackness = GetComponentInParent<PlayerAttackness>());
			}
		}


		// Ser
		[SerializeField] private Transform m_DiedParticlePrefab;
		[SerializeField] private string m_MovingKey = "Moving";
		[SerializeField] private string m_JumpingKey = "Jumping";
		[SerializeField] private string m_SpeedYKey = "SpeedY";
		[SerializeField] private string m_AttackingKey = "AttackID";


		// Data
		private Animator m_Ani = null;
		private PlayerMovement m_Movement = null;
		private PlayerAttackness m_Attackness = null;



		private void Update () {
			Ani.SetBool(m_MovingKey, Mathf.Abs(Movement.AimSpeed) > 0.01f);
			Ani.SetBool(m_JumpingKey, !Movement.IsGrounded && Mathf.Abs(Movement.SpeedY) > 0.1f);
			Ani.SetFloat(m_SpeedYKey, Movement.SpeedY);
			Ani.SetFloat(m_AttackingKey, Time.time > Attackness.NextAttackTime + 0.1f ? 0f : 1f);
		}



		public void Kill () {
			if (m_DiedParticlePrefab) {
				var tf = Instantiate(m_DiedParticlePrefab, transform.position, Quaternion.identity);
				Destroy(tf.gameObject, 2f);
			}
			transform.parent.gameObject.TrySetActive(false);
		}


	}
}