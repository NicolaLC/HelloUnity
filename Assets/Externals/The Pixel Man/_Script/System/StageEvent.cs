namespace MoenenGames.EightBeatMan {
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	public static class StageEvent {


		public delegate void Event0 ();
		public delegate void Event1 (object a);
		public delegate void Event2 (object a, object b);
		public delegate void Event3 (object a, object b, object c);
		public delegate object ObjectEvent0 ();
		public delegate object ObjectEvent1 (object a);
		public delegate object ObjectEvent2 (object a, object b);
		public delegate object ObjectEvent3 (object a, object b, object c);


		private static Dictionary<string, Event0> m_Event0 = new Dictionary<string, Event0>();
		private static Dictionary<string, Event1> m_Event1 = new Dictionary<string, Event1>();
		private static Dictionary<string, Event2> m_Event2 = new Dictionary<string, Event2>();
		private static Dictionary<string, Event3> m_Event3 = new Dictionary<string, Event3>();
		private static Dictionary<string, ObjectEvent0> m_ObjectEvent0 = new Dictionary<string, ObjectEvent0>();
		private static Dictionary<string, ObjectEvent1> m_ObjectEvent1 = new Dictionary<string, ObjectEvent1>();
		private static Dictionary<string, ObjectEvent2> m_ObjectEvent2 = new Dictionary<string, ObjectEvent2>();
		private static Dictionary<string, ObjectEvent3> m_ObjectEvent3 = new Dictionary<string, ObjectEvent3>();



		#region --- Void ---

		// Registe
		public static void Registe (string key, Event0 e) {
			if (m_Event0.ContainsKey(key)) {
				m_Event0[key] += e;
			} else {
				m_Event0.Add(key, e);
			}
		}

		public static void Registe (string key, Event1 e) {
			if (m_Event1.ContainsKey(key)) {
				m_Event1[key] += e;
			} else {
				m_Event1.Add(key, e);
			}
		}

		public static void Registe (string key, Event2 e) {
			if (m_Event2.ContainsKey(key)) {
				m_Event2[key] += e;
			} else {
				m_Event2.Add(key, e);
			}
		}

		public static void Registe (string key, Event3 e) {
			if (m_Event3.ContainsKey(key)) {
				m_Event3[key] += e;
			} else {
				m_Event3.Add(key, e);
			}
		}


		// Invoke
		public static void Invoke (string key) {
			if (m_Event0.ContainsKey(key)) {
				m_Event0[key].Invoke();
			}
		}

		public static void Invoke (string key, object data) {
			if (m_Event1.ContainsKey(key)) {
				m_Event1[key].Invoke(data);
			}
		}

		public static void Invoke (string key, object data0, object data1) {
			if (m_Event2.ContainsKey(key)) {
				m_Event2[key].Invoke(data0, data1);
			}
		}

		public static void Invoke (string key, object data0, object data1, object data2) {
			if (m_Event3.ContainsKey(key)) {
				m_Event3[key].Invoke(data0, data1, data2);
			}
		}


		#endregion



		#region --- Object ---

		// Registe
		public static void RegisteObject (string key, ObjectEvent0 e) {
			if (m_ObjectEvent0.ContainsKey(key)) {
				m_ObjectEvent0[key] += e;
			} else {
				m_ObjectEvent0.Add(key, e);
			}
		}

		public static void RegisteObject (string key, ObjectEvent1 e) {
			if (m_ObjectEvent1.ContainsKey(key)) {
				m_ObjectEvent1[key] += e;
			} else {
				m_ObjectEvent1.Add(key, e);
			}
		}

		public static void RegisteObject (string key, ObjectEvent2 e) {
			if (m_ObjectEvent2.ContainsKey(key)) {
				m_ObjectEvent2[key] += e;
			} else {
				m_ObjectEvent2.Add(key, e);
			}
		}

		public static void RegisteObject (string key, ObjectEvent3 e) {
			if (m_ObjectEvent3.ContainsKey(key)) {
				m_ObjectEvent3[key] += e;
			} else {
				m_ObjectEvent3.Add(key, e);
			}
		}


		// Invoke
		public static object InvokeObject (string key) {
			return m_ObjectEvent0.ContainsKey(key) ? m_ObjectEvent0[key].Invoke() : null;
		}

		public static object InvokeObject (string key, object data) {
			return m_ObjectEvent1.ContainsKey(key) ? m_ObjectEvent1[key].Invoke(data) : null;
		}

		public static object InvokeObject (string key, object data0, object data1) {
			return m_ObjectEvent2.ContainsKey(key) ? m_ObjectEvent2[key].Invoke(data0, data1) : null;
		}

		public static object InvokeObject (string key, object data0, object data1, object data2) {
			return m_ObjectEvent3.ContainsKey(key) ? m_ObjectEvent3[key].Invoke(data0, data1, data2) : null;
		}


		#endregion



	}
}