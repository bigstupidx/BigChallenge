using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class TextConfig : MonoBehaviour {

	Text flashingText;
	
	void Start(){
		flashingText = GetComponent<Text>();
		//Call coroutine BlinkText on Start
		StartCoroutine(BlinkText());
	}
	
	//function to blink the text
	public IEnumerator BlinkText(){
		while(true){

			flashingText.text= "";
			yield return new WaitForSeconds(.5f);
			flashingText.text= "";
			GetComponent<TranslateText>().Refresh();
			yield return new WaitForSeconds(.5f);
		}
	}
}
