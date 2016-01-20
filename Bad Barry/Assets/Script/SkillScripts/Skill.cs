using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Skill : MonoBehaviour {

	public static Skill Instance;

	public GameBehavior behave;
	private Image[] skillsInGame;
	private ItemDatabase database;
	public List<Item> skills = new List<Item> ();
	public bool skillActivate = false;
	public Text amount;


	public Button slotButton;
	public ColorBlock slotColors;
	public Image iconImage;
	public Color iconColor;

	void Start () {
		behave = GameObject.FindGameObjectWithTag ("Behaviour").GetComponent<GameBehavior> ();
		skillsInGame = GameObject.Find ("SkillsInGame").GetComponentsInChildren<Image> ();
		database = GetComponent<ItemDatabase> ();

		for (int i = 0; i < behave.abilityIndex ; i++) {
			AddItem(behave.abilityIDs[i]);
		}


		if (behave.abilityIndex > 0) {
			int index = 0;
			foreach (Image image in skillsInGame) {
				if (image.name == "ImageSlot0" || image.name == "ImageSlot1" || image.name == "ImageSlot2") {
					if(behave.abilityIndex > index){
						image.GetComponentInChildren<Image>().sprite = skills[index].Sprite;

							var x = image.GetComponentInChildren<Image>();
							x.color = Color.white;
//						else{
//							var x = image.GetComponentInChildren<Image>();
//							x.color = Color.clear;
//						}
						
					}
					index++;
				}	
			}
		}
	}

	public void AddItem(int id){
		Item itemToAdd = database.FetchItemByID (id);
		skills.Add (itemToAdd);
	}

	public void ItemPressed(int itemNumber){

		if(itemNumber < behave.abilityIndex && !behave.skillActivate){
//			var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();

			foreach (Image image in skillsInGame) {
				if (image.name == "Skill"+(itemNumber+1)){
					slotButton = GameObject.Find ("Skill"+(itemNumber+1)).GetComponent<Button>();
					slotColors = slotButton.colors;

					iconImage = GameObject.Find ("Skill"+(itemNumber+1)).transform.GetChild(0).GetComponent<Image>();
					iconColor = iconImage.color;

					amount =  GameObject.Find ("Skill"+(itemNumber+1)).transform.GetChild(0).GetChild(0).GetComponent<Text>();

					break;
				}
			}


			switch (skills [itemNumber].ID) {
				
			case 4:
//				print ("clicou na habilidade survivor");

				if(!behave.reloading){
					skillActivate = true;
					behave.SkillClicked();
				}
				break;
			}
		}
		return;

	}
	
	// Update is called once per frame
	void Update () {
		if (behave.reloading) {
			Color newColor = new Color(0.231F, 0.231F, 0.231F, 0.89F);

			slotColors.normalColor = newColor;
			slotColors.highlightedColor = newColor;
			slotColors.disabledColor = newColor;
			slotColors.pressedColor = newColor;
			slotButton.colors = slotColors;

			iconImage.color = newColor;


		} else if(slotButton != null){
//			print ("entro else");
			slotColors.normalColor = Color.white;
			slotColors.highlightedColor = Color.white;
			slotColors.disabledColor = Color.white;
			slotColors.pressedColor = Color.white;
			slotButton.colors = slotColors;

			iconImage.color = iconColor;

		}
	}




}
