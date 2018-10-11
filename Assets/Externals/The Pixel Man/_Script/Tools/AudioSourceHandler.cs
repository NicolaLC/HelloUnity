namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	[RequireComponent(typeof(AudioSource))]
	public class AudioSourceHandler : MonoBehaviour {




		// ShotC
		public AudioSource Source {
			get {
				return m_Source ?? (m_Source = GetComponent<AudioSource>());
			}
		}


		// Ser
		[SerializeField] private bool m_PlayOnStart = false;
		[SerializeField] private float m_RandomPitchMin = 1f;
		[SerializeField] private float m_RandomPitchMax = 1f;
		[SerializeField] private float m_RandomVolumeMin = 1f;
		[SerializeField] private float m_RandomVolumeMax = 1f;


		// Data
		private AudioSource m_Source;



		public void OnEnable () {
			Source.playOnAwake = false;
			if (m_PlayOnStart) {
				Play();
			} else {
				Stop();
			}
		}



		public void Play () {
			Source.pitch = Random.Range(m_RandomPitchMin, m_RandomPitchMax);
			Source.volume = Random.Range(m_RandomVolumeMin, m_RandomVolumeMax);
			Source.Play();
		}


		public void Stop () {
			Source.Stop();
		}


	}
}