using System;
using System.IO;
using UnityEngine;
public class Pathing
{
	public static string AppDataPath
	{
		get {                
			return Application.dataPath; // gets app install path...
		}
	}
	
	// gets streaming assets raw path... 
	public static string AppContentDataUri
	{
		get {
			if(Application.platform == RuntimePlatform.IPhonePlayer) {
				string urlFile = "";
				urlFile = AppDataPath + "/Raw/Items.json" ;
				return urlFile ;
			}
			else if(Application.platform == RuntimePlatform.Android) {
				
				//return new ("jar:file://" + Application.dataPath + "!/assets");
				return "";
			}
			else {
				string urlFile = "";
				urlFile = AppDataPath + "/StreamingAssets/Items.json" ;
				return urlFile ;

			}
		}
	}
	
}