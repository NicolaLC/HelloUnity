namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	public static class Expend {





		public static void TrySetActive (this GameObject g, bool active) {
			if (g.activeInHierarchy != active) {
				g.SetActive(active);
			}
		}



		public static void TrySetActive (this Transform tf, bool active) {
			tf.gameObject.TrySetActive(active);
		}




		public static Vector2 Get01Position (this RectTransform rt, Vector2 pos, Camera camera) {
			Vector2 p;
			RectTransformUtility.ScreenPointToLocalPointInRectangle(rt, pos, camera, out p);
			p = new Vector2(
				(p.x + rt.rect.width * rt.pivot.x) / rt.rect.width,
				(p.y + rt.rect.height * rt.pivot.y) / rt.rect.height
			);
			return p;
		}


		public static int BinarySearch<T> (this IList<T> list, T value, IComparer<T> comparer = null) {
			comparer = comparer ?? Comparer<T>.Default;
			int lower = 0;
			int upper = list.Count - 1;
			while (lower <= upper) {
				int middle = lower + (upper - lower) / 2;
				int comparisonResult = comparer.Compare(value, list[middle]);
				if (comparisonResult < 0) {
					upper = middle - 1;
				} else if (comparisonResult > 0) {
					lower = middle + 1;
				} else {
					return middle;
				}
			}
			return ~lower;
		}



		public static void ClearChildren (this Transform tf) {
			int len = tf.childCount;
			for (int i = 0; i < len; i++) {
				Object.Destroy(tf.GetChild(i).gameObject);
			}
		}



		public static void ClearChildren (this Transform tf, System.Action<Transform> action = null) {
			int len = tf.childCount;
			for (int i = 0; i < len; i++) {
				Transform t = tf.GetChild(i);
				if (action != null) {
					action.Invoke(t);
				}
				Object.Destroy(t.gameObject);
			}
		}


		public static void ClearChildrenImmediately (this Transform tf) {
			int len = tf.childCount;
			for (int i = 0; i < len; i++) {
				Object.DestroyImmediate(tf.GetChild(0).gameObject, false);
			}
		}

	}
}