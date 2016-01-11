using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;


public class InventoryInMission : MonoBehaviour {

	private List<ItemData> inventoryItems = new List<ItemData>();
	private Image[] itemsInGame;
	private string count;




	//INVENTORYITENS JA VEM COM O AMOUNT DO ITEM, SÓ FALTA DECREMENTAR ELE ATÉ Q ACABE, DESTRUIR O OBJETO INGAME, 
	//DECREMENTAR NO INVENTARIO ORIGINAL. JÁ NO INVENTARIO FALTA QUANDO ADICIONAR UM ITEM CONSUMIVEL NO SLOTPANEL DE BAIXO,	
	//APARECER UMA OPCAO DE QUANTOS ITENS DO MESMO QUER ADICIONAR DE UMA VEZ.


	void Start(){
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		inventoryItems = behave.getInventoryItems();
//		for (int i=0; i<inventoryItems.Count; i++) {
//			if(inventoryItems[i].item != null){
//				print (inventoryItems[i].item.Title);
//			}
//			else{
//				print ("neves locao");
//			}
//		}
		itemsInGame = gameObject.GetComponentsInChildren<Image>();

		if(inventoryItems != null){
			int index = 0;
			foreach(Image image in itemsInGame){
				if(image.name == "ImageSlot0" || image.name == "ImageSlot1" || image.name == "ImageSlot2"){
					if(inventoryItems.Count > index){
						if(inventoryItems[index].item != null){
							image.GetComponentInChildren<Image>().sprite = inventoryItems[index].item.Sprite;

							if(inventoryItems[index].item.Stackable){
								if(inventoryItems[index].amount > 1){
									image.GetComponentInChildren<Image>().GetComponentInChildren<Text>().text = inventoryItems[index].amount.ToString();
								}
								else{
									image.GetComponentInChildren<Image>().GetComponentInChildren<Text>().text = "";
								}
								
							}
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

			if(inventoryItems[itemNumber].item != null){
				var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();


				switch(inventoryItems[itemNumber].item.ID){

				case 0 : player.ChangeWeapon(0);
					break;

			case 1: player.Heal(inventoryItems[itemNumber].item.Vitality);
				Image slotImage = itemsInGame[0];
				inventoryItems[itemNumber].amount--;
				var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
				
				behave.inventory[1]--;

				foreach(Image image in itemsInGame){
					if(image.name == ("ImageSlot"+itemNumber)){
						slotImage = image;
					}

				}

				//	print(itemsInGame[itemNumber].transform.GetChild(0).GetComponent<Text>().name);

				if(inventoryItems[itemNumber].amount > 1){
					slotImage.GetComponentInChildren<Text>().text = inventoryItems[itemNumber].amount.ToString() ;

//						itemsInGame[itemNumber].GetComponentInChildren<Image>().GetComponentInChildren<Text>().text = inventoryItems[itemNumber].amount.ToString();
					}
					else{
					slotImage.GetComponentInChildren<Text>().text = "";
//						itemsInGame[itemNumber].GetComponentInChildren<Image>().GetComponentInChildren<Text>().text = "";
					}

					if(inventoryItems[itemNumber].amount <= 0){
						inventoryItems[itemNumber].item = null;
						slotImage.color = Color.clear;
					}
			
					break;
				case 2 : player.ChangeWeapon(1);
					break;

				}
			}

//		}
		return;
	}
}
