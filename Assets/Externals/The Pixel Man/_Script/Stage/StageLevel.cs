namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;
	using UnityEngine.SceneManagement;
	using UnityEngine.UI;

	[DisallowMultipleComponent]
	public class StageLevel : MonoBehaviour {



		#region --- VAR ---


		// Ser
		[SerializeField] private Color m_HPColorGreen;
		[SerializeField] private Color m_HPColorRed;
		[SerializeField] private Transform m_Stage;
		[SerializeField] private Transform m_Player;
		[SerializeField] private StageSFX m_SFX;
		[SerializeField] private Image m_HpBar;
		[SerializeField] private Image[] m_CoinIcons;
		[SerializeField] private RectTransform m_RestartPanel;
		[SerializeField] private RectTransform m_WinPanel;
		[SerializeField] private RectTransform m_DiePanel;


		// Data
		private Health m_PlayerHealth;
		private Vector2 m_LastSavedPos;
		private List<Health> Enemys = new List<Health>();

		#endregion




		#region --- MSG ---


		private void Awake () {
			// Init Setting
			QualitySettings.vSyncCount = 0;
			Physics2D.queriesHitTriggers = true;
			Screen.SetResolution(2048, 2048 * 9 / 16, false, -1);
			// Init Component
			m_PlayerHealth = m_Player.GetComponent<Health>();
			var ems = m_Stage.GetComponentsInChildren<EnemyMovement>();
			for (int i = 0; i < ems.Length; i++) {
				Health h = ems[i].transform.GetComponent<Health>();
				if (h) {
					Enemys.Add(h);
				}
			}
		}



		private void Start () {
			Save();
		}



		private void Update () {
			if (Input.GetKeyDown(KeyCode.R)) {
				Load(0);
			}
			if (Input.GetKeyDown(KeyCode.Escape)) {
				m_RestartPanel.TrySetActive(true);
			}
		}



		#endregion



		#region --- API ---



		public void ReStartGame () {
			Time.timeScale = 1f;
			SceneManager.LoadScene("Main");
		}



		public void Win () {
			m_WinPanel.TrySetActive(true);
			Time.timeScale = 0f;
		}



		public void Save () {
			m_LastSavedPos = m_Player.position;
		}



		public void Load (float delay) {
			if (!IsInvoking("LoadDelay")) {
				Invoke("LoadDelay", delay);
			}
		}



		public void AddCoin (Transform player, Transform target) {
			if (player == m_Player) {
				target.gameObject.SetActive(false);
				int index = target.GetSiblingIndex();
				m_CoinIcons[index].color = Color.white;
				if (index == target.parent.childCount - 1) {
					Win();
				}
				m_SFX.Play(4);
			}
		}



		public void FreshPlayerHP () {
			m_HpBar.fillAmount = m_PlayerHealth.HP / m_PlayerHealth.MaxHP;
			m_HpBar.color = Color.Lerp(m_HPColorRed, m_HPColorGreen, m_HpBar.fillAmount);
		}


		public void OpenLink (string link) {
			Application.OpenURL(link);
		}



		#endregion



		#region --- LGC ---



		private void LoadDelay () {
			m_Player.position = m_LastSavedPos;
			m_PlayerHealth.Rebirth();
			FreshPlayerHP();
			m_Player.TrySetActive(true);
			// Rebirth Enemys
			for (int i = 0; i < Enemys.Count; i++) {
				Enemys[i].Rebirth();
				Enemys[i].gameObject.TrySetActive(true);
				m_DiePanel.gameObject.TrySetActive(false);
			}
		}



		#endregion


	}
}