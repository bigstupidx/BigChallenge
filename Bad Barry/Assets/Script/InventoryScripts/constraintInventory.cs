using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class constraintInventory : MonoBehaviour {
	
	GameObject inventoryPanel;
	GameObject slotPanel;
	GameObject slotPanel2;
//	GameObject 
	
	GridLayoutGroup gridLayoutGroup;
	GridLayoutGroup gridLayoutGroup2;
	RectTransform rect;
	public float height;

	public List<Item> slots1Items = new List<Item> ();
	public List<GameObject> slots = new List<GameObject> ();
	RectTransform itemsRect;
	
	
	// Use this for initialization
	void Start () {
		inventoryPanel = GameObject.Find ("inventory Panel");

		slotPanel = inventoryPanel.transform.FindChild ("slot Panel").gameObject;
		slotPanel2 = inventoryPanel.transform.FindChild ("slot In Game Panel").gameObject;
		
		gridLayoutGroup = slotPanel.GetComponent<GridLayoutGroup> ();
		gridLayoutGroup2 = slotPanel2.GetComponent<GridLayoutGroup> ();

		rect = gridLayoutGroup2.GetComponent<RectTransform> ();

		gridLayoutGroup2.cellSize = new Vector2 ((float)(rect.rect.width * 0.3), (float)(rect.rect.width * 0.3));
//		gridLayoutGroup2.padding = new RectOffset((int)(rect.rect.width * 0.10),0,(int)(rect.rect.height * 0.1),0);
		float spacing2 = (slotPanel2.GetComponent<RectTransform> ().rect.width - (3 * gridLayoutGroup2.cellSize.x)) / 2;
		gridLayoutGroup2.spacing = new Vector2 (spacing2, 0);

		int cellCont = 10;

		gridLayoutGroup.cellSize = new Vector2 ((float)(rect.rect.width * 0.3), (float)(rect.rect.width * 0.3));
		float spacing = (slotPanel.GetComponent<RectTransform> ().rect.width - ((cellCont/2) * gridLayoutGroup.cellSize.x)) / ((cellCont/2) - 1);
		gridLayoutGroup.spacing = new Vector2 (spacing, (float)(rect.rect.height * 0.30));
//		gridLayoutGroup.padding = new RectOffset((int)(rect.rect.width * 0.10),0,(int)(rect.rect.height * 0.1),0);

		print (slotPanel2.GetComponent<RectTransform> ().rect.width);

	}
	
	void OnRectTransformDimensionsChange ()
	{
		Debug.Log("RectTransformDimensionsChange firing on " + this.name + " finee.");
		
		if (gridLayoutGroup != null && rect != null) {


			rect = gridLayoutGroup2.GetComponent<RectTransform> ();
			gridLayoutGroup2.cellSize = new Vector2 ((float)(rect.rect.width * 0.3), (float)(rect.rect.width * 0.3));
			//		gridLayoutGroup2.padding = new RectOffset((int)(rect.rect.width * 0.10),0,(int)(rect.rect.height * 0.1),0);
			float spacing2 = (slotPanel2.GetComponent<RectTransform> ().rect.width - (3 * gridLayoutGroup2.cellSize.x)) / 2;
			gridLayoutGroup2.spacing = new Vector2 (spacing2, 0);
			
			int cellCont = 10;
			
			gridLayoutGroup.cellSize = new Vector2 ((float)(rect.rect.width * 0.3), (float)(rect.rect.width * 0.3));
			float spacing = (slotPanel.GetComponent<RectTransform> ().rect.width - ((cellCont/2) * gridLayoutGroup.cellSize.x)) / ((cellCont/2) - 1);
			gridLayoutGroup.spacing = new Vector2 (spacing, (float)(rect.rect.height * 0.30));

		}
		
		
		
	}
}
