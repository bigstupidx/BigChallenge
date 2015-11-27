using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;


public class InventoryInMission : MonoBehaviour {

	private List<Item> inventoryItems = new List<Item>();
	private Image[] itemsInGame;



	void Start(){
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		inventoryItems = behave.getInventoryItems();
		itemsInGame = gameObject.GetComponentsInChildren<Image>();
		if(inventoryItems != null){
			int index = 0;
			foreach(Image image in itemsInGame){
				if(image.name == "Image"){
					if(inventoryItems.Count > index){
						if(inventoryItems[index] != null){
							image.GetComponentInChildren<Image>().sprite = inventoryItems[index].Sprite;
							var x = image.GetComponentInChildren<Image>();
							x.color = Color.white;
						}
						else{
							var x = image.GetComponentInChildren<Image>();
							x.color = Color.clear;
						}
							
					}
					index++;
				}
			}
		}



//		items [i] = itemToAdd;
//		GameObject itemObj = Instantiate (inventoryItem);
//		itemObj.GetComponent<ItemData>().item = itemToAdd;
//		itemObj.GetComponent<ItemData>().slot = i;
//		itemObj.transform.SetParent (slots [i].transform);
//		itemObj.transform.position = Vector2.zero;
//		itemObj.GetComponent<Image> ().sprite = itemToAdd.Sprite;
//		itemObj.name = itemToAdd.Title;
//		itemsList.Add(itemObj);

	}


	//funcao para usar item
	public void ItemPressed(int itemNumber){
		print(itemNumber);
		if(inventoryItems != null){

			if(inventoryItems[itemNumber] != null){
				var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();



				switch(inventoryItems[itemNumber].ID){
				case 0 : player.ChangeWeapon(0);
					break;
				case 1: player.Heal(10);
					break;
				case 2 : player.ChangeWeapon(1);
					break;

				}
			}

		}
		return;
	}
}
