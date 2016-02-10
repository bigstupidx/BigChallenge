using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class loade : MonoBehaviour {

	private string scene;
	public string[] texts ;
	public Text loadingText;
	public Text tip;
	public bool tapToPlay;
	public GameObject barry;
	public GameObject canvas;

	public bool missions;
	

	// Use this for initialization
	void Start () {
		tapToPlay = true;
		texts = new string[]{"Play horde mode to get more experience and coins!",
			"Replay previous missions to get stronger!",
			"Shotgun does massive damage at short distance!",
			"Stabbing enemies is risky, but it does tons of damage!",
			"Try to dodge enemy bullets!",
			"Some missions might have secret passages... Stay sharp",
			"Distribute your points wisely",
			"Try to take a lot of healing items to missions!",
			"Don’t forget to have enough ammo on your weapons!"};
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		scene = behave.toLoadScene;
		if (scene == "Mission 2" || scene == "Mission 3" || scene == "Mission 4" || scene == "Mission 5" || scene == "Mission 6" || scene == "NewPrototype" || scene == "HordeMode" || scene == "Epilogue") {
			tapToPlay = false;
			missions = true;
			loadingText.text = "Tap to play";
			loadingText.GetComponent<TranslateText>().Refresh();

		} else{
			StartCoroutine(LoadNewScene());
			missions = false;

		}

		tip.text = texts[Random.Range(0,(int)texts.Length)]; 
		tip.GetComponent<TranslateText>().Refresh();




	}

	public void canvasClicked(){
		if(!tapToPlay){
			tapToPlay = true;
			canvas.GetComponent<Button> ().interactable = false;
			StartCoroutine(LoadNewScene());
			loadingText.text = "Loading...";
			loadingText.GetComponent<TranslateText>().Refresh();



		}
	}
	
	// Update is called once per frame
	void Update () {
		var x = Mathf.PingPong(Time.time, 1);
		loadingText.color = new Color(loadingText.color.r, loadingText.color.g, loadingText.color.b, x);

	}


	IEnumerator LoadNewScene() {
	
		AsyncOperation async = Application.LoadLevelAsync(scene);
	// While the asynchronous operation to load the new scene is not yet complete, continue waiting until it's done.

		while (!async.isDone) {
			yield return null;
		}
	

	}
}







