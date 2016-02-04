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
		texts = new string[]{ "Jogue o modo horda para conseguir mais experiencia e mais moedas!",
							  "Refaça as missões anteriores para ficar mais forte para as próximas!",
							  "A Shotgun é muito poderosa a curta distância!",
							  "Uma facada, quase sempre, é fatal!",
							  "Tente desviar das balas dos inimigos!",
							  "Algumas missões podem ter passagens secretas... Fique esperto!",
							  "Destribua seus pontos sabiamente...",
							  "Tente sempre levar bastante itens de cura em suas missões!",
							  "Não esquecer de sempre ter munição suficiente em suas armas!" };
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		scene = behave.toLoadScene;
		print (scene);
		if (scene == "Mission 2" || scene == "Mission 3" || scene == "Mission 4" || scene == "Mission 5" || scene == "Mission 6" || scene == "NewPrototype" || scene == "HordeMode" || scene == "Epilogue") {
			canvas.GetComponent<Button> ().interactable = true;
			tapToPlay = false;
			missions = true;
		} else
			missions = false;

		tip.text = texts[Random.Range(0,(int)texts.Length)]; 
		//tip.GetComponent<TranslateText>().Refresh();
		//loadingText.GetComponent<TranslateText>().Refresh();

		StartCoroutine(LoadNewScene());


	}

	public void canvasClicked(){
		print ("clicou no canvas");
		tapToPlay = true;
		canvas.GetComponent<Button> ().interactable = false;
	}
	
	// Update is called once per frame
	void Update () {
		var x = Mathf.PingPong(Time.time, 1);
		loadingText.color = new Color(loadingText.color.r, loadingText.color.g, loadingText.color.b, x);

	}


	IEnumerator LoadNewScene() {
	// This line waits for 3 seconds before executing the next line in the coroutine.
	// This line is only necessary for this demo. The scenes are so simple that they load too fast to read the "Loading..." text.
	// Start an asynchronous operation to load the scene that was passed to the LoadNewScene coroutine.
		AsyncOperation async = Application.LoadLevelAsync(scene);
	// While the asynchronous operation to load the new scene is not yet complete, continue waiting until it's done.
		print (tapToPlay);
		if (!missions) {
			print ("entrou not missions");
			while (!async.isDone) {
				yield return null;
			}
		}
		else{
			print ("entrou missions");
			while(!tapToPlay){
				yield return null;
			}
		}

	}
}







