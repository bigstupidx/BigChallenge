using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class AtributeIconManager : MonoBehaviour {

	public Sprite[] sprites; //recebe as imagens que serao mostradas para o jogador
	private Image atributeImage; 
	private GameBehavior behave;


	// Use this for initialization
	void Start () {
		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		atributeImage = GetComponent<Image>();

		//verifica se jogador tem pontos de atributos para gastar
		if (behave.expendPoints != 0) {

			atributeImage.enabled = true;

			int imageIndex = behave.expendPoints;

			//verifica se tem uma imagem que represente esse numero de atributos
			if (imageIndex <= sprites.Length) {
				atributeImage.sprite = sprites [imageIndex - 1];
			} else {
				atributeImage.sprite = sprites [sprites.Length - 1];
			}
		} else {
			atributeImage.enabled = false;
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
