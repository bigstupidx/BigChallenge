using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class statistics : MonoBehaviour {

	private GameBehavior behave;
	public Text totalCoinsText;
	public Text hordeKillsText;
	public Text enemiesKilledText;
	public Text ammoSpentText;
	public Text totalExperienceText;
	public Text knifeKillsText;




	// Use this for initialization
	void Start () {
		behave = GameObject.FindGameObjectWithTag("GameBehaviour").GetComponent<GameBehavior>();
		totalCoinsText.text = behave.totalCoins.ToString();
		hordeKillsText.text = behave.hordeKills.ToString();
		enemiesKilledText.text = behave.enemiesKilled.ToString();
		ammoSpentText.text = behave.ammoSpent.ToString();
		totalExperienceText.text = behave.totalExperience.ToString();
		knifeKillsText.text = behave.knifeKills.ToString();

	}
	
	// Update is called once per frame
	void Update () {

	
	}








	void goToMap(AudioSource audio)
	{

		behave.GoToMapWithSound(audio);

	}


}
