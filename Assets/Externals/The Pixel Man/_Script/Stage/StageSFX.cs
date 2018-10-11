namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	[DisallowMultipleComponent]
	public class StageSFX : MonoBehaviour {



		// ShotC
		private AudioClip[] SFXs {
			get {
				return m_SFXs;
			}
		}

		private AudioSource Source {
			get {
				return m_Source ?? (m_Source = gameObject.AddComponent<AudioSource>());
			}
		}


		// Ser
		[SerializeField]
		private AudioClip[] m_SFXs;


		// Data
		private AudioSource m_Source = null;



		private void Awake () {

			// Listener
			gameObject.AddComponent<AudioListener>();

			// Play SFX
			StageEvent.Registe("PlaySFX", (o_Index) => {
				PlaySound((int)o_Index);
			});

			StageEvent.Registe("PlaySFX", (o_Index, o_Volume) => {
				PlaySound((int)o_Index, (float)o_Volume);
			});

			StageEvent.Registe("PlaySFX", (o_Index, o_Volume, o_Pitch) => {
				PlaySound((int)o_Index, (float)o_Volume, (float)o_Pitch);
			});

		}




		public void Play (int index) {
			PlaySound(index);
		}



		private void PlaySound (int index, float volume = 1f, float pitch = 1f) {
			Source.pitch = pitch;
			Source.PlayOneShot(SFXs[index], volume);
		}



	}
}
