using UnityEngine;
using System.Collections;

public class SetLanguage : MonoBehaviour {

	void Awake () {

		LanguageDictionary.SetLanguage (Application.systemLanguage);
		Debug.Log ("Language set: " + Application.systemLanguage);
	}

}