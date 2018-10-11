namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;
	using UnityEngine.Events;

	[DisallowMultipleComponent, RequireComponent(typeof(Rigidbody2D))]
	public abstract class CharacterMovement : MonoBehaviour {



		#region --- VAR ---


		// Const
		private const float GROUND_CHECK_GAP = 0.05f;
		private const float MAX_DROP_SPEED = 24f;


		// ShotC
		private Rigidbody2D Rig {
			get {
				return m_Rig ?? (m_Rig = GetComponent<Rigidbody2D>());
			}
		}

		public bool IsGrounded {
			get {
				return m_IsGrounded;
			}
			private set {
				m_IsGrounded = value;
			}
		}

		public float AimSpeed {
			get {
				return m_AimSpeed;
			}
			private set {
				m_AimSpeed = value;
			}
		}

		public float SpeedY {
			get {
				return Rig.velocity.y;
			}
		}


		// Ser
		[SerializeField] private float m_MoveSpeed = 8f;
		[SerializeField] private float m_JumpSpeed = 18f;
		[SerializeField] private int m_JumpCount = 2;
		[SerializeField] private float m_GravityScaleU = 6f;
		[SerializeField] private float m_GravityScaleD = 12f;
		[SerializeField] private float m_GroundCheckWidth = 0.35f;
		[SerializeField] private VoidEvent m_OnJump;
		[SerializeField] private BoolEvent m_Moving;


		// Data
		private Rigidbody2D m_Rig = null;
		private RaycastHit2D[] GroundCheckHits = new RaycastHit2D[2];
		private float m_AimSpeed = 0f;
		private bool m_IsGrounded = true;
		private int m_CurrentJumpCount = 0;
		private float m_LastJumpTime = float.MinValue;


		#endregion



		#region --- MSG ---



		protected virtual void Update () {
			m_Moving.Invoke(Mathf.Abs(SpeedY) < 0.1f && Mathf.Abs(AimSpeed) > 0.1f);
		}



		protected virtual void FixedUpdate () {

			// Move
			Rig.velocity = new Vector2(
				AimSpeed,
				Mathf.Clamp(Rig.velocity.y, -MAX_DROP_SPEED, MAX_DROP_SPEED)
			);

			// Ground Check
			IsGrounded = GroundCheck(new Vector2(
				transform.position.x - m_GroundCheckWidth * 0.5f,
				transform.position.y + GROUND_CHECK_GAP
			)) || GroundCheck(new Vector2(
				transform.position.x + m_GroundCheckWidth * 0.5f,
				transform.position.y + GROUND_CHECK_GAP
			));

			// Jump Count
			if (IsGrounded && Time.time > m_LastJumpTime + 0.1f) {
				m_CurrentJumpCount = 0;
			}

			// Gravity Scale
			if (Rig.gravityScale == m_GravityScaleU && SpeedY <= 0f) {
				SwitchGravityScale(false);
			}

		}


		#endregion



		#region --- API ---



		public void Move (float speedR) {
			m_AimSpeed = Mathf.Clamp(speedR, -1f, 1f) * m_MoveSpeed;
			if (speedR != 0f) {
				transform.localScale = new Vector3(speedR > 0f ? 1f : -1f, 1f, 1f);
			}
		}



		public void Jump () {
			if (m_CurrentJumpCount < m_JumpCount) {
				m_CurrentJumpCount++;
				m_OnJump.Invoke();
				SwitchGravityScale(true);
				Rig.velocity = new Vector2(Rig.velocity.x, m_JumpSpeed);
				m_LastJumpTime = Time.time;
			}
		}



		public void SwitchGravityScale (bool isU) {
			Rig.gravityScale = isU ? m_GravityScaleU : m_GravityScaleD;
		}



		#endregion



		#region --- LGC ---



		private bool GroundCheck (Vector2 from) {
			int len = Physics2D.RaycastNonAlloc(from, Vector2.down, GroundCheckHits, GROUND_CHECK_GAP * 2f);
			return len == 2 || (len == 1 && GroundCheckHits[0].transform != transform);
		}


		#endregion

	}
}