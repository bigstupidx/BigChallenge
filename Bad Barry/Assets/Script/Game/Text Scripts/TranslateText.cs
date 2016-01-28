using UnityEngine;
using System.Collections;
//add UI access if your using the Unity UI system
using UnityEngine.UI;

public class TranslateText : MonoBehaviour {

	static Text textComponent; //for NGUI texts, change it to a UILabel variable
	string text;
	static Image imageComponent;


	void Start () {
		//Get access to the Text component
		textComponent = GetComponent<Text> () ;
		if ( textComponent != null) { //for NGUI, change Text to a UILabel
			text = textComponent.text;

			//It will change this object's text to its corresponding translation
			print(text);
			if(LanguageDictionary.stringList.ContainsKey(text)){
				textComponent.text = LanguageDictionary.stringList [text];
				print(textComponent.text);

			}

		} 


	}


	public void Refresh(){
		//Get access to the Text component
		textComponent = GetComponent<Text> (); //for NGUI, change Text to a UILabel
		text = textComponent.text;
		//It will change this object's text to its corresponding translation
		textComponent.text = LanguageDictionary.stringList [text];
	}
}