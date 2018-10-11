namespace MoenenGames.EightBeatMan {
	using UnityEngine;
	using UnityEngine.Events;

	[System.Serializable]
	public class VoidEvent : UnityEvent { }

	[System.Serializable]
	public class BoolEvent : UnityEvent<bool> { }

	[System.Serializable]
	public class FloatEvent : UnityEvent<float> { }

	[System.Serializable]
	public class IntEvent : UnityEvent<int> { }

	[System.Serializable]
	public class TransformEvent : UnityEvent<Transform> { }

	[System.Serializable]
	public class TransformTransformEvent : UnityEvent<Transform, Transform> { }

}



