using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Options : MonoBehaviour {

	private GameObject options;
	private Item item;
	private Vector3 position;
	private Inventory inv;


	// Use this for initialization
	void Start () {

		options = GameObject.Find ("Options");
		options.SetActive (false);

		inv = GameObject.Find ("Inventory").GetComponent<Inventory> ();

	}
	
	// Update is called once per frame
	void Update () {
		if (options.activeSelf) {
			options.transform.position = position ;
		}
	}

	public void EquipButtonClicked(){
		Debug.Log ("AOBA");
		//logica para decrementar o item se possivel

		if (item.Stackable)
			inv.DecrementItem (item.ID);
		else
			//inv.EquipItem (item.ID); // CASO FOR UMA ARMA, IR PARA UMA FUNCAO PARA EQUIPA-LA NO PERSONAGEM


		Deactivate ();
	}

	public void Activate(Item item, Vector3 position){
		this.item = item;
		this.position = position;
		//this.position.z = 99;
		ItemType ();
		options.SetActive (true);
//		if (item.Stackable)
//			inv.DecrementItem (item.ID);

	}
	
	public void Deactivate(){
		options.SetActive (false);
	}

	void ItemType(){
		if (item.Stackable)
			options.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = "Usar";
		else
			options.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = "Equipar";
		
	}
}
