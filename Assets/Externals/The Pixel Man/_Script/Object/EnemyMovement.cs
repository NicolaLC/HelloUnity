namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	public class EnemyMovement : CharacterMovement {



		[SerializeField] private Vector2 m_JumpTimeGap = new Vector2(6f, 20f);
		[SerializeField] private Vector2 m_TurnTimeGap = new Vector2(6f, 20f);
		[SerializeField] private Vector2 m_IdleSpeedXRange = new Vector2(-1f, 1f);
		[SerializeField] private float m_AimTargetDistance = 0.5f;
		[SerializeField] private BoxCollider2D m_MovementZone;
		[SerializeField] private Transform m_Target;



		private bool m_Idling = true;
		private Bounds m_Zone;
		private float m_NextJumpTime = float.MaxValue;
		private float m_NextTurnTime = float.MaxValue;
		private float m_IdleSpeedX = 0f;
		private float m_AimTargetMuti = 1f;
		private Vector3 InitPos;


		private void Awake () {
			m_MovementZone.enabled = true;
			m_Zone = m_MovementZone.bounds;
			m_MovementZone.enabled = false;
			InitPos = transform.position;
			m_NextJumpTime = Time.time + Random.Range(m_JumpTimeGap.x, m_JumpTimeGap.y);
			m_NextTurnTime = Time.time + Random.Range(m_TurnTimeGap.x, m_TurnTimeGap.y);
		}


		protected override void Update () {

			// Random Jump
			if (Time.time > m_NextJumpTime) {
				m_NextJumpTime = Time.time + Random.Range(m_JumpTimeGap.x, m_JumpTimeGap.y);
				Jump();
			}

			// Random Turn
			if (Time.time > m_NextTurnTime) {
				m_NextTurnTime = Time.time + Random.Range(m_TurnTimeGap.x, m_TurnTimeGap.y);
				Turn();
			}

			// Out Zone Turn
			Vector3 pos = transform.position;
			pos.z = m_Zone.center.z;
			if (!m_Zone.Contains(pos)) {
				m_IdleSpeedX = m_Zone.center.x - transform.position.x;
			}

			base.Update();
		}



		protected override void FixedUpdate () {

			Vector3 pos = m_Target.position;
			pos.z = m_Zone.center.z;
			m_Idling = !m_Zone.Contains(pos);

			Move(m_Idling ? m_IdleSpeedX : m_Target.position.x - transform.position.x + m_AimTargetDistance * m_AimTargetMuti);

			base.FixedUpdate();
		}



		private void Turn () {
			m_IdleSpeedX = Random.Range(m_IdleSpeedXRange.x, m_IdleSpeedXRange.y);
			m_AimTargetMuti = Random.value > 0.5f ? 1f : -1f;
		}



		public void BackToInitPos () {
			transform.position = InitPos;
		}


	}
}