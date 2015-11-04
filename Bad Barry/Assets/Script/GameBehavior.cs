using UnityEngine;
using System.Collections;

public class GameBehavior : MonoBehaviour {


	public bool levelingUp = false;
	public int levelsUp = 0;

	// Use this for initialization
	void Start () {

	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void LeveledUp(){

		levelingUp = true;

		levelsUp++;
		//remove this line after use
		GoToAtributesScreen ();
	}


	public void GoToAtributesScreen(){
		SaveCurrentSceneState ();

		DontDestroyOnLoad (gameObject);
		Application.LoadLevel("AtributeScreen");




	}

	private void SaveCurrentSceneState(){

	}


}
