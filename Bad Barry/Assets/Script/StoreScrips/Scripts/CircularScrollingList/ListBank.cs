/* Store the contents for ListBoxes to display.
 */
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class ListBank : MonoBehaviour
{
	public static ListBank Instance;
	public UnityEngine.UI.Text title;
	public UnityEngine.UI.Text detail;

	public List<Item> items = new List<Item> ();
	private ItemDatabase database;

	private int[] contents = {
		1, 2, 3, 4, 5
	};

		void Start(){

			database = GetComponent<ItemDatabase> ();

			for (int i = 0; i < database.getItemDataLength() ; i++) {
				items.Add (new Item());
			}


			AddItem (0);
			AddItem (1);
			AddItem (2);
		}

		public void AddItem(int id){
			Item itemToAdd = database.FetchItemByID (id);
			items[id] = itemToAdd;
		}

	private string[] details = {
		"AVcc is the supply voltage pin for A/D Converter.",
		"Each data bit transferred pn the TWI bus is accompanied",
		"All address packets transmitted on the TWI bus are 9 bits long",
		"The Analog Comparator compares the input values on the positive pin AIN0 and negative pin AIN1.",
		"When configured as a Master, the SPI interface has no automatic control of the SS line.",
		"All Atmel microcontrollers have a three-byte signature code which identifies the device.",
		"The EEPROM Access Registers are accessible in the I/O space.",
		"Main purpose of the delay is to keep the AVR in reset until it is supplied with minimum VCC.",
		"Sleep modes enable the application to shut down unused modules in the MCU, thereby saving power.",
		"The External Interrupts are triggered by the INT0 and INT1 pins or any of the PCINT23..0 pins.",
		"Animation Parameters are variables that are defined within an Animator Controller that can be accessed and assigned values from scripts."
	};

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

//	public Item[] getItems(){
//		return items;
//	}

	public void updateDetail( int index )
	{
		title.text = "Section " + contents[ index ].ToString();
		detail.text = details[ index ];
	}

	public int getListLength()
	{
		return items.Count;
	}
}
