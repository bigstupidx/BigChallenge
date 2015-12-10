using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class constraintInventory : MonoBehaviour {
	
	GameObject inventoryPanel;
	GameObject slotPanel;
	GameObject slotPanel2;
	
	GridLayoutGroup gridLayoutGroup;
	GridLayoutGroup gridLayoutGroup2;
	RectTransform rect;
	public int cellCount = 2;
	public float height;
	
	
	// Use this for initialization
	void Start () {
		inventoryPanel = GameObject.Find ("inventory Panel");
		
		slotPanel = inventoryPanel.transform.FindChild ("slot Panel").gameObject;
		slotPanel2 = inventoryPanel.transform.FindChild ("slot In Game Panel").gameObject;
		
		gridLayoutGroup = slotPanel.GetComponent<GridLayoutGroup> ();
		gridLayoutGroup2 = slotPanel2.GetComponent<GridLayoutGroup> ();

		rect = gridLayoutGroup2.GetComponentInParent<RectTransform> ();
		gridLayoutGroup2.cellSize = new Vector2 ((float)(rect.rect.width * 0.2), (float)(rect.rect.height * 0.8));
		gridLayoutGroup2.spacing = new Vector2 ((float)(rect.rect.width * 0.10), (float)(rect.rect.height * 0.10));
		gridLayoutGroup2.padding = new RectOffset((int)(rect.rect.width * 0.10),0,(int)(rect.rect.height * 0.1),0);

		gridLayoutGroup.cellSize = new Vector2 ((float)(rect.rect.width * 0.2), (float)(rect.rect.height * 0.8));
		gridLayoutGroup.spacing = new Vector2 ((float)(rect.rect.width * 0.10), (float)(rect.rect.height * 0.30));
		gridLayoutGroup.padding = new RectOffset((int)(rect.rect.width * 0.10),0,(int)(rect.rect.height * 0.1),0);
		

		cellCount = GetComponentsInChildren<RectTransform> ().Length;
	}
	
	void OnRectTransformDimensionsChange ()
	{
		Debug.Log("RectTransformDimensionsChange firing on " + this.name + " fine.");
		
		if (gridLayoutGroup == null)
			print ("bagui ta null");
		
		if (gridLayoutGroup != null && rect != null) {
			print("entro if");
			
			
			rect = gridLayoutGroup2.GetComponentInParent<RectTransform> ();
			gridLayoutGroup2.cellSize = new Vector2 ((float)(rect.rect.width * 0.2), (float)(rect.rect.height * 0.8));
			gridLayoutGroup2.spacing = new Vector2 ((float)(rect.rect.width * 0.10), (float)(rect.rect.height * 0.10));
			gridLayoutGroup2.padding = new RectOffset((int)(rect.rect.width * 0.10),0,(int)(rect.rect.height * 0.1),0);
			
			gridLayoutGroup.cellSize = new Vector2 ((float)(rect.rect.width * 0.2), (float)(rect.rect.height * 0.8));
			gridLayoutGroup.spacing = new Vector2 ((float)(rect.rect.width * 0.10), (float)(rect.rect.height * 0.30));
			gridLayoutGroup.padding = new RectOffset((int)(rect.rect.width * 0.10),0,(int)(rect.rect.height * 0.1),0);

		}
		
		
		
	}
}
