namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	[DisallowMultipleComponent]
	public class Health : MonoBehaviour {



		// ShotC
		public float HP {
			get {
				return m_HP;
			}
			private set {
				m_HP = value;
			}
		}

		public float MaxHP {
			get {
				return m_MaxHP;
			}
		}

		public string Team {
			get {
				return m_Team;
			}
		}


		// Ser
		[SerializeField] private float m_HP = 10f;
		[SerializeField] private float m_MaxHP = 10f;
		[SerializeField] private string m_Team = "";
		[SerializeField] private TransformEvent m_OnDied;
		[SerializeField] private FloatEvent m_OnTakeDamage;
		[SerializeField] private VoidEvent m_OnRebirth;



		public void TakeDamage (float damage) {
			HP = Mathf.Clamp(HP - damage, 0f, MaxHP);
			m_OnTakeDamage.Invoke(damage);
			if (HP <= 0f) {
				Die();
			}
		}



		public void Die () {
			HP = 0f;
			m_OnDied.Invoke(transform);
		}


		public void Rebirth () {
			HP = MaxHP;
			m_OnRebirth.Invoke();
		}



	}
}
