using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;


public class InventoryInMission : MonoBehaviour {

	public List<ItemData> inventoryItems = new List<ItemData>();
	public Image[] itemsInGame;
	private string count;
	private RectTransform imageRect;
	private float imageWidth;

	//logica nova
	public GameObject imageSlot1;
	public GameObject imageSlot2;
	public GameObject imageSlot3;

	public GameObject amount1;
	public GameObject amount2;
	public GameObject amount3;

	public enum items{
		pistol = 0,
		water = 1,
		MP9 = 2,
		shotgun = 3,
		cerealBar = 7,
	}

	void Start(){
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		var player = GameObject.FindGameObjectWithTag ("Player").GetComponent<Player> ();
		inventoryItems = behave.getInventoryItems();

		//logica p/ arma inicial do game ser a primeira dos slots
		
//		selectedWeapon = 0;

		if (inventoryItems != null) {
			for (int i = 0; i<inventoryItems.Count; i++) {
				if(inventoryItems[i].item != null){
					if (!inventoryItems [i].item.Stackable) {
						if (inventoryItems [i].item.ID == 2)
							player.ChangeWeapon (1);
						else if (inventoryItems [i].item.ID == 3)
							player.ChangeWeapon (2);
						print ("entrou aqui e o selectedweapon ta = " + behave.selectedWeapon);
						break;
					}
				}
			}
		}


		//LOGICA NOVA

	if (inventoryItems != null) {
			if (inventoryItems [0].item != null) {
				imageSlot1.GetComponent<Image> ().color = Color.white;
				imageSlot1.GetComponent<Image> ().sprite = inventoryItems [0].item.Sprite;
			} else
				imageSlot1.GetComponent<Image> ().color = Color.clear;

			if (inventoryItems [1].item != null) {
				imageSlot2.GetComponent<Image> ().color = Color.white;
				imageSlot2.GetComponent<Image> ().sprite = inventoryItems [1].item.Sprite;
			} else
				imageSlot2.GetComponent<Image> ().color = Color.clear;

			if (inventoryItems [2].item != null) {
				imageSlot3.GetComponent<Image> ().color = Color.white;
				imageSlot3.GetComponent<Image> ().sprite = inventoryItems [2].item.Sprite;
			} else
				imageSlot3.GetComponent<Image> ().color = Color.clear;


			if (inventoryItems [0].amount > 1) {
				amount1.GetComponent<Text> ().text = inventoryItems [0].amount.ToString ();
			} else
				amount1.GetComponent<Text> ().text = "";

			if (inventoryItems [1].amount > 1) {
				amount2.GetComponent<Text> ().text = inventoryItems [1].amount.ToString ();
			} else
				amount2.GetComponent<Text> ().text = "";

			if (inventoryItems [2].amount > 1) {
				amount3.GetComponent<Text> ().text = inventoryItems [2].amount.ToString ();
			} else
				amount3.GetComponent<Text> ().text = "";
	} else {
			imageSlot1.GetComponent<Image> ().color = Color.clear;
			imageSlot2.GetComponent<Image> ().color = Color.clear;
			imageSlot3.GetComponent<Image> ().color = Color.clear;
	}


	}


	//funcao para usar item
	public void ItemPressed(int itemNumber){

		//FAZER LOGICA P/ ITEMPRESSED
		if (inventoryItems != null) {

			if (inventoryItems [itemNumber].item != null) {
				var player = GameObject.FindGameObjectWithTag ("Player").GetComponent<Player> ();
				var behave = GameObject.FindGameObjectWithTag ("Behaviour").GetComponent<GameBehavior> ();

				switch (inventoryItems [itemNumber].item.ID) {

				case (int)items.pistol:
					player.ChangeWeapon (0);
					break;

				case (int)items.water:
					player.Heal (inventoryItems [itemNumber].item.Vitality);

					inventoryItems [itemNumber].amount--;
					behave.inventory [1]--;

				
					break;
				case (int)items.MP9:
					player.ChangeWeapon (1);
					break;
				case (int)items.shotgun:
					player.ChangeWeapon (2);
					break;

				case (int)items.cerealBar:
					player.Heal (inventoryItems [itemNumber].item.Vitality);
				
					inventoryItems [itemNumber].amount--;
					behave.inventory [7]--;
					break;

				}

				//VERIFICACOES
				if (inventoryItems [itemNumber].item.Stackable) {
					if (itemNumber == 0) {
						if (inventoryItems [itemNumber].amount > 1)
							amount1.GetComponent<Text> ().text = inventoryItems [itemNumber].amount.ToString ();
						else
							amount1.GetComponent<Text> ().text = "";
					} else if (itemNumber == 1) {
						if (inventoryItems [itemNumber].amount > 1)
							amount2.GetComponent<Text> ().text = inventoryItems [itemNumber].amount.ToString ();
						else
							amount2.GetComponent<Text> ().text = "";
					} else if (itemNumber == 2) {
						if (inventoryItems [itemNumber].amount > 1)
							amount3.GetComponent<Text> ().text = inventoryItems [itemNumber].amount.ToString ();
						else
							amount3.GetComponent<Text> ().text = "";
					}

					//VER SE ACABOU O ITEM
					if (inventoryItems [itemNumber].amount <= 0) {
						inventoryItems [itemNumber].item = null;
						if (itemNumber == 0)
							imageSlot1.GetComponent<Image> ().color = Color.clear;
						else if (itemNumber == 1) 
							imageSlot2.GetComponent<Image> ().color = Color.clear;
						else if (itemNumber == 2) 
							imageSlot3.GetComponent<Image> ().color = Color.clear;
					}
				
				}

			}
		}
		return;
	}
}
