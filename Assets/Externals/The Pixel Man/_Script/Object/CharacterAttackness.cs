namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	[DisallowMultipleComponent]
	public abstract class CharacterAttackness : MonoBehaviour {


		// ShotC
		private float RandomAttack {
			get {
				return Random.Range(m_AttackMin, m_AttackMax);
			}
		}

		public float NextAttackTime {
			get {
				return m_NextAttackTime;
			}
			private set {
				m_NextAttackTime = value;
			}
		}

		private bool FacingRight {
			get {
				return transform.localScale.x > 0f;
			}
		}

		public float PrevAttackTime {
			get {
				return m_PrevAttackTime;
			}
			private set {
				m_PrevAttackTime = value;
			}
		}



		// Ser
		[SerializeField] private float m_AttackMin = 5f;
		[SerializeField] private float m_AttackMax = 10f;
		[SerializeField] private float m_Frequency = 10f;
		[SerializeField] private float m_MaxDistance = 15f;
		[SerializeField] private float m_AttackHeight = 1f;
		[SerializeField] private float m_TrailDuration = 0.15f;
		[SerializeField] private float m_ExplosionDuration = 0.2f;
		[SerializeField] private bool m_HealthTargetOnly = false;
		[SerializeField] private string m_Team = "";
		[SerializeField] private Transform m_Pivot;
		[SerializeField] private Transform m_Explosion;
		[SerializeField] private LineRenderer m_BulletTrail;
		[SerializeField] private VoidEvent m_OnAttack;


		// Data
		private float m_PrevAttackTime = float.MinValue;
		private float m_NextAttackTime = float.MinValue;





		public void Attack () {
			if (Time.time > NextAttackTime) {
				NextAttackTime = Time.time + 1f / m_Frequency;
				PrevAttackTime = Time.time;

				// Msg
				m_OnAttack.Invoke();

				// Ray
				RaycastHit2D[] hits = Physics2D.BoxCastAll(
					m_Pivot.position,
					new Vector2(0.1f, m_AttackHeight),
					0f,
					transform.localScale.x > 0f ? Vector2.right : Vector2.left,
					m_MaxDistance
				);

				bool hited = false;
				float maxTargetPosX = m_Pivot.position.x + (FacingRight ? 1f : -1f) * m_MaxDistance;

				for (int i = 0; i < hits.Length; i++) {
					if (hits[i].transform != transform) {

						bool isTrigger = hits[i].collider.isTrigger;

						// Max Dis Target
						if (!isTrigger) {
							maxTargetPosX = hits[i].point.x;
							hited = true;
						}

						// Health
						Health health = hits[i].collider.transform.GetComponent<Health>();
						if (health && (string.IsNullOrEmpty(m_Team) || string.IsNullOrEmpty(health.Team) || m_Team != health.Team)) {
							health.TakeDamage(isTrigger ? 0f : RandomAttack);
							if (!isTrigger) {
								break;
							}
						}

						if (!m_HealthTargetOnly && !health && !isTrigger) {
							break;
						}

					}
				}

				// Explosion
				if (hited) {
					if (m_Explosion) {
						var tf = Instantiate(
							m_Explosion,
							new Vector3(maxTargetPosX, m_Pivot.position.y, 0f) + Vector3.back * 0.1f,
							Quaternion.identity
						);
						Destroy(tf.gameObject, m_ExplosionDuration);
					}
				}

				// Line Renderer
				if (m_BulletTrail) {
					StartCoroutine(SpawnBulletTrail(m_Pivot.position, maxTargetPosX));
				}

			}
		}



		IEnumerator SpawnBulletTrail (Vector3 pivotPos, float maxTargetPosX) {

			var lr = Instantiate(m_BulletTrail, Vector3.zero, Quaternion.identity);
			lr.SetPosition(0, pivotPos);
			lr.SetPosition(1, new Vector3(maxTargetPosX, pivotPos.y, 0f));
			Destroy(lr.gameObject, m_TrailDuration + 0.5f);

			Color cStart = lr.startColor;
			Color cEnd = lr.endColor;
			var yi = new WaitForEndOfFrame();
			for (float t = 0f; t < m_TrailDuration; t += Time.deltaTime) {
				lr.startColor = Color.Lerp(cStart, Color.clear, t / m_TrailDuration);
				lr.endColor = Color.Lerp(cEnd, Color.clear, t / m_TrailDuration);
				yield return yi;
			}


		}


	}
}