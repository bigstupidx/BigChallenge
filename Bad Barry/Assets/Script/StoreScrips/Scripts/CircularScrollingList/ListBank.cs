/* Store the contents for ListBoxes to display.
 */
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class ListBank : MonoBehaviour
{
	public static ListBank Instance;

	public List<Item> items = new List<Item> ();
	private ItemDatabase database;
	public Item itemToBuy;
	public RectTransform canvasRect;

	public GameBehavior behave;

	private int[] contents = {
		1, 2, 3, 4, 5
	};



		void Start(){

		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();

			canvasRect = this.GetComponentInParent<Canvas> ().GetComponent<RectTransform>();
			database = GetComponent<ItemDatabase> ();

			for (int i = 0; i < database.getItemDataLength() ; i++) {
				items.Add (new Item());
			}

			for (int i = 0; i < database.getItemDataLength(); i++) {
				AddItem(i);
			}
		}

		public void AddItem(int id){
			Item itemToAdd = database.FetchItemByID (id);
			items[id] = itemToAdd;
		}


	void Awake()
	{
		Instance = this;
	}

	public int getListContent( int index )
	{
		return contents[ index ];
	}

	public Item getItem(int index){
		return items [index];
	}
	
//	public void updateDetail( int index )
//	{
//		title.text = "Section " + contents[ index ].ToString();
//		detail.text = details[ index ];
//	}

	public int getListLength()
	{
		return items.Count;
	}
}
