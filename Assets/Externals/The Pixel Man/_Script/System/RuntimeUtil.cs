namespace MoenenGames.EightBeatMan {
	namespace MoenenGames {

		using System.Collections;
		using System.Collections.Generic;
		using UnityEngine;
		using System.IO;
		using System;

		public struct Util {



			#region --- File ---



			public static string Read (string _path) {
				try {
					StreamReader _sr = File.OpenText(_path);
					string _data = _sr.ReadToEnd();
					_sr.Close();
					return _data;
				} catch (Exception) {
					return "";
				}
			}


			public static string Read (params string[] _paths) {
				return Read(CombinePaths(_paths));
			}


			public static void Write (string _data, string _path) {
				try {
					CreateFolder(GetGlobalParentPath(_path));
					FileStream fs = new FileStream(_path, FileMode.Create);
					StreamWriter sw = new StreamWriter(fs, System.Text.Encoding.UTF8);
					sw.Write(_data);
					sw.Close();
					fs.Close();
				} catch (Exception) {
					return;
				}
			}


			public static void Write (string _data, params string[] _paths) {
				Write(_data, CombinePaths(_paths));
			}



			public static byte[] FileToByte (string path) {
				if (File.Exists(path)) {
					byte[] bytes = null;
					try {
						bytes = File.ReadAllBytes(path);
					} catch {
						return null;
					}
					return bytes;
				} else {
					return null;
				}
			}


			public static bool ByteToFile (byte[] bytes, string path) {
				try {
					string parentPath = new FileInfo(path).Directory.FullName;
					CreateFolder(parentPath);
					FileStream fs = new FileStream(path, FileMode.Create, FileAccess.Write);
					fs.Write(bytes, 0, bytes.Length);
					fs.Close();
					fs.Dispose();
					return true;
				} catch {
					return false;
				}
			}



			public static void CreateFolder (string _path) {
				_path = GetFullPath(_path);
				if (Directory.Exists(_path)) {
					return;
				}
				string _parentPath = new FileInfo(_path).Directory.FullName;
				if (Directory.Exists(_parentPath)) {
					Directory.CreateDirectory(_path);
				} else {
					CreateFolder(_parentPath);
					Directory.CreateDirectory(_path);
				}
			}


			public static bool FileExist (string path) {
				return !string.IsNullOrEmpty(path) && File.Exists(path);
			}


			public static bool DirectoryExist (string path) {
				return !string.IsNullOrEmpty(path) && Directory.Exists(path);
			}


			public static bool FileOrDirectoryExist (string path) {
				return FileExist(path) || DirectoryExist(path);
			}


			public static void CopyFile (string from, string to) {
				CreateFolder(GetGlobalParentPath(to));
				File.Copy(from, to);
			}


			public static void MoveFile (string from, string to) {
				File.Move(from, to);
			}


			public static void DeleteFile (string path) {
				try {
					File.Delete(path);
				} catch { }
			}


			public static void DeleteDirectory (string path, bool recursive = true) {
				try {
					Directory.Delete(path, recursive);
				} catch { }
			}



			public static void DeleteAllFilesIn (string path, string exception = "") {
				if (DirectoryExist(path)) {
					string[] files = GetFilesIn(path);
					for (int i = 0; i < files.Length; i++) {
						if (string.IsNullOrEmpty(exception) || GetName(files[i]) != GetName(exception)) {
							DeleteFile(files[i]);
						}
					}
				}
			}


			public static byte[] StringToByte (string data) {
				try {
					return System.Text.Encoding.UTF8.GetBytes(data);
				} catch {
					return null;
				}
			}


			public static string ByteToString (byte[] bytes) {
				try {
					return System.Text.Encoding.UTF8.GetString(bytes);
				} catch {
					return null;
				}
			}


			public static byte[][] BreakData (byte[] allBytes) {
				try {
					List<byte[]> list = new List<byte[]>();
					int index = 0;
					while (index < allBytes.Length) {
						int len = BitConverter.ToInt32(allBytes, index);
						index += 4;
						byte[] bytes = new byte[len];
						Buffer.BlockCopy(allBytes, index, bytes, 0, len);
						list.Add(bytes);
						index += len;
					}
					return list.ToArray();
				} catch {
					return null;
				}
			}



			public static byte[] MergeData (byte[][] bytess) {
				try {
					int allLen = 0;
					for (int i = 0; i < bytess.Length; i++) {
						allLen += 4 + bytess[i].Length;
					}
					byte[] bytes = new byte[allLen];
					int index = 0;
					for (int i = 0; i < bytess.Length; i++) {
						int len = bytess[i].Length;
						Buffer.BlockCopy(BitConverter.GetBytes(len), 0, bytes, index, 4);
						index += 4;
						Buffer.BlockCopy(bytess[i], 0, bytes, index, len);
						index += len;
					}
					return bytes;
				} catch {
					return null;
				}
			}




			#endregion



			#region --- Path ---



			public static string FixPath (string _path) {
				_path = _path.Replace('\\', '/');
				_path = _path.Replace("//", "/");
				while (_path.Length > 0 && _path[0] == '/') {
					_path = _path.Remove(0, 1);
				}
				return _path;
			}



			public static string GetFullPath (string path) {
				return new FileInfo(path).FullName;
			}



			public static string CombinePaths (params string[] paths) {
				try {
					string path = "";
					for (int i = 0; i < paths.Length; i++) {
						path = Path.Combine(path, FixPath(paths[i]));
					}
					return FixPath(path);
				} catch {
					return "";
				}
			}



			public static string GetExtension (string path) {
				return Path.GetExtension(path);// .xxx
			}



			public static string ChangeExtension (string path, string newEx) {
				return Path.ChangeExtension(path, newEx);
			}



			public static string GetName (string path) {
				return Path.GetFileNameWithoutExtension(path);
			}


			public static string GetNameWithExtension (string path) {
				return Path.GetFileName(path);
			}



			public static bool PathIsDirectory (string path) {
				FileAttributes attr = File.GetAttributes(path);
				return (attr & FileAttributes.Directory) == FileAttributes.Directory;
			}



			public static string GetGlobalParentPath (string path) {
				return new FileInfo(path).Directory.FullName;
			}


			public static string GetUrl (string path) {
				return string.IsNullOrEmpty(path) ? "" : new Uri(path).AbsoluteUri;
			}



			public static string GetFirstFilePath (string path) {
				try {
					if (DirectoryExist(path)) {
						FileInfo[] infos = new DirectoryInfo(path).GetFiles();
						if (infos.Length > 0) {
							return infos[0].FullName;
						}
					}
				} catch { }
				return "";
			}


			public static string GetFirstFilePath (params string[] paths) {
				return GetFirstFilePath(CombinePaths(paths));
			}


			public static string[] GetFilesIn (string path, params string[] searchs) {
				try {
					if (DirectoryExist(path)) {
						if (searchs == null || searchs.Length == 0) {
							return Directory.GetFiles(path);
						} else {
							List<string> paths = new List<string>();
							for (int i = 0; i < searchs.Length; i++) {
								paths.AddRange(Directory.GetFiles(path, searchs[i], SearchOption.AllDirectories));
							}
							return paths.ToArray();
						}
					}
				} catch { }
				return new string[0];
			}


			#endregion



			#region --- Other ---


			public static bool IsTypeing {
				get {
					var g = UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject;
					if (g) {
						var input = g.GetComponent<UnityEngine.UI.InputField>();
						return input && input.isFocused;
					} else {
						return false;
					}
				}
			}


			#endregion


		}

	}
}