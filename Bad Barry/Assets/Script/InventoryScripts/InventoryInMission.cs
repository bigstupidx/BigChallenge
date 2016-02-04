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
	


	void Start(){
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		inventoryItems = behave.getInventoryItems();

		itemsInGame = gameObject.GetComponentsInChildren<Image>();
		imageRect = this.GetComponent<RectTransform>();
		imageWidth = imageRect.rect.width/3;
//		print ("nome do text = "+itemsInGame[0].transform.GetChild(0).GetChild(0).GetComponent<Text>().GetComponent<RectTransform>().position = new Vector3);

		if(inventoryItems != null){
			int index = 0;
			foreach(Image image in itemsInGame){
				if(image.name == "ImageSlot0" || image.name == "ImageSlot1" || image.name == "ImageSlot2"){
					if(inventoryItems.Count > index){
						if(inventoryItems[index].item != null){
							image.GetComponentInChildren<Image>().sprite = inventoryItems[index].item.Sprite;

							if(inventoryItems[index].item.Stackable){
								image.GetComponentInChildren<Image>().GetComponentInChildren<Text>().GetComponent<RectTransform>().localPosition = new Vector3(imageWidth/(float)3,-imageWidth/(float)2.89,0);
								image.GetComponentInChildren<Image>().GetComponentInChildren<Text>().GetComponent<RectTransform>().sizeDelta = new Vector2(imageWidth/(float)4,imageWidth/(float)3.7);
								image.GetComponentInChildren<Image>().GetComponentInChildren<Text>().resizeTextForBestFit = true;

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
				case 3 : player.ChangeWeapon(2);
					break;

				}
			}

//		}
		return;
	}
}
