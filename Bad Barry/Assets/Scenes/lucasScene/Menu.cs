using UnityEngine;
using System.Collections;

public class Menu : MonoBehaviour {

	private Animator animator;
	private CanvasGroup canvasGroup;

	public bool IsOpen{

		get{ return animator.GetBool ("IsOpen");}
		set{animator.SetBool("IsOpen",value);}

	}

	// Use this for initialization
	void Start () {
		//recebe o animator do proprio objeto
		animator = GetComponent<Animator> ();
		canvasGroup = GetComponent<CanvasGroup> ();
	
	}
	
	// Update is called once per frame
	void Update () {
		//verifica se o menu está aparecendo na tela
		if (animator.GetCurrentAnimatorStateInfo (0).IsName ("Open")) {

			canvasGroup.blocksRaycasts = canvasGroup.interactable = true;

		} else {

			canvasGroup.blocksRaycasts = canvasGroup.interactable = false;


		}

		 

	}
}
