using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;


public class InventoryInMission : MonoBehaviour {

	private List<Item> inventoryItems = new List<Item>();
	private Image[] itemsInGame;
	public Sprite spriteteste;

	void Start(){
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		inventoryItems = behave.getInventoryItems();

		print (inventoryItems);
		itemsInGame = gameObject.GetComponentsInChildren<Image>();

		int index = 0;
		foreach(Image image in itemsInGame){
			if(image.name == "Image"){
				if(index < inventoryItems.Count)
					image.GetComponentInChildren<Image>().sprite = spriteteste;
				index++;
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
		print (itemsInGame [itemNumber].name);
			return;
	}
}
