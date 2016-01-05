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
		itemsInGame = gameObject.GetComponentsInChildren<Image>();
		print ("amount teste");
		print (inventoryItems[0].amount);
		if(inventoryItems != null){
			int index = 0;
			foreach(Image image in itemsInGame){
				if(image.name == "Image"){
					if(inventoryItems.Count > index){
						if(inventoryItems[index].item != null){
							image.GetComponentInChildren<Image>().sprite = inventoryItems[index].item.Sprite;
							image.GetComponentInChildren<Image>().GetComponentInChildren<Text>().text = inventoryItems[0].amount.ToString();
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
		if(inventoryItems != null){

			if(inventoryItems[itemNumber].item != null){
				var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
				int invPos = 0;

//				//logica para achar a posicao do item em questao no inventoryitems
//				for(int i = 0; i<inventoryItems.Count; i++){
//					if(inventoryItems[i].item.ID == itemNumber){
//						invPos = i;
//						break;
//					}
//				}

				switch(inventoryItems[itemNumber].item.ID){

				case 0 : player.ChangeWeapon(0);
					break;

				case 1: player.Heal(10);

					inventoryItems[invPos].amount--;
					itemsInGame[invPos].GetComponentInChildren<Image>().GetComponentInChildren<Text>().text = inventoryItems[invPos].amount.ToString();

					if(inventoryItems[invPos].amount == 0){
						inventoryItems.RemoveAt(invPos);
					}
			
					break;
				case 2 : player.ChangeWeapon(1);
					break;

				}
			}

		}
		return;
	}
}
