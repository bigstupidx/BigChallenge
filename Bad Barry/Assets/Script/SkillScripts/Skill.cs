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
	public Button buttonClicked;
	public bool skillActivate = false;
	public ColorBlock colors;


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

		if(itemNumber < behave.abilityIndex){
//			var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();

			foreach (Image image in skillsInGame) {
				if (image.name == "Skill"+(itemNumber+1)){
					buttonClicked = GameObject.Find ("Skill"+(itemNumber+1)).GetComponent<Button>();
//					print ("CLIQUEI NO BOTAO"+GameObject.Find ("Skill"+(itemNumber+1)).name);

					colors = buttonClicked.colors;
					break;
				}
			}

			skillActivate = true;


			switch (skills [itemNumber].ID) {
				
			case 4:
//				print ("clicou na habilidade survivor");

				behave.SkillClicked();
				break;
			}
		}
		return;

	}
	
	// Update is called once per frame
	void Update () {
		if (skillActivate) {
			colors.normalColor = Color.clear;
			colors.highlightedColor = Color.clear;
			colors.disabledColor = Color.clear;
			colors.pressedColor = Color.clear;
			buttonClicked.colors = colors;
		} else if(buttonClicked != null){
//			print ("entro else");
			colors.normalColor = Color.white;
			colors.highlightedColor = Color.white;
			colors.disabledColor = Color.white;
			colors.pressedColor = Color.white;
			buttonClicked.colors = colors;
		}
	}




}
