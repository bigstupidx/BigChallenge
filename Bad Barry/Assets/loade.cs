using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class loade : MonoBehaviour {

	private string scene;
	public string[] texts;
	public Text loadingText;
	public Text tip;
	

	// Use this for initialization
	void Start () {

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		scene = behave.toLoadScene;
		tip.text = texts[Random.Range(0,(int)texts.Length)]; 
		//tip.GetComponent<TranslateText>().Refresh();
		//loadingText.GetComponent<TranslateText>().Refresh();

		StartCoroutine(LoadNewScene());


	}
	
	// Update is called once per frame
	void Update () {

		loadingText.color = new Color(loadingText.color.r, loadingText.color.g, loadingText.color.b, Mathf.PingPong(Time.time, 1));

	}


	IEnumerator LoadNewScene() {
	// This line waits for 3 seconds before executing the next line in the coroutine.
	// This line is only necessary for this demo. The scenes are so simple that they load too fast to read the "Loading..." text.
		yield return new WaitForSeconds(0);
	// Start an asynchronous operation to load the scene that was passed to the LoadNewScene coroutine.
		AsyncOperation async = Application.LoadLevelAsync(scene);
	// While the asynchronous operation to load the new scene is not yet complete, continue waiting until it's done.
		while (!async.isDone) {
			yield return null;
		}

	}
}







