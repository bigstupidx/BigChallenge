using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Mute : MonoBehaviour
{

	public bool isMute = false; 

	public void OnClick ()
	{
		print ("Entrou Mute");

		isMute = !isMute;
		if (isMute) {
			AudioListener.volume = 0.0f;
			this.GetComponent<Image>().sprite = Resources.Load<Sprite>("Images/Map Images/Mute");
		}
		else{
			AudioListener.volume = 1.0f;
			this.GetComponent<Image>().sprite = Resources.Load<Sprite>("Images/Map Images/NoMute");
		}
	}
}