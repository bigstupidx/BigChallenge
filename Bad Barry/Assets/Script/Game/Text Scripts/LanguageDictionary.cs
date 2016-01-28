using UnityEngine;
using System.Collections;
//First, add Generic Collections, so you can use dictionaries
using System.Collections.Generic;

public static class LanguageDictionary {
	//Create a public static Dictionary of strings named "stringList"
	//the first string is the KEY and the second string is the value
	public static Dictionary<string, string> stringList = new Dictionary<string, string>();

	//Create a public static function named SetLanguage with a string
	//variable named "lang":

	private static SystemLanguage language;
	public static void SetLanguage (SystemLanguage lang) {

		stringList = new Dictionary<string, string>();
		language = lang;
		//Check the chosen language ("lang"). In this case we're using 
		//English as the default language

		if (lang == SystemLanguage.English || lang == SystemLanguage.Unknown) {
			//Set keys and values of the stringList, the key being the word
			//in default language, and the value the corresponding translation
			stringList.Add ("tap to play", "tap to play");
			stringList.Add ("Attributes", "Attributes");
			stringList.Add ("Inventory", "Inventory");
			stringList.Add ("Store", "Store");
			stringList.Add ("Statistics", "Statistics");
			stringList.Add ("Horde Mode", "Horde Mode");
			stringList.Add ("Mission 1", "Mission 1");
			stringList.Add ("Mission 2", "Mission 2");
			stringList.Add ("Mission 3", "Mission 3");
			stringList.Add ("Mission 4", "Mission 4");
			stringList.Add ("Mission 5", "Mission 5");
			stringList.Add ("Mission 6", "Mission 6");
			stringList.Add ("points", "points");
			stringList.Add ("Strength", "Strength");
			stringList.Add ("Agility", "Agility");
			stringList.Add ("Perception", "Perception");
			stringList.Add ("Vitality", "Vitality");
			stringList.Add ("Total Coins", "Total Coins");
			stringList.Add ("Horde Kills", "Horde Kills");
			stringList.Add ("Enemies Killed", "Enemies Killed");
			stringList.Add ("Ammo Spent", "Ammo Spent");
			stringList.Add ("Total Experience", "Total Experience");
			stringList.Add ("Knife Kills", "Knife Kills");
			stringList.Add ("Drag the items to the red slot", "Drag the items to the red slot");
			stringList.Add ("Click the arrow", "Click the arrow");
			stringList.Add ("Now you will learn about the controls of the game and play a little!\nTap for the next step", "Now you will learn about the controls of the game and play a little!\nTap for the next step");
			stringList.Add ("hold and drag the joystick to move Barry", "hold and drag the joystick to move Barry");
			stringList.Add ("press or hold the red button to fire", "press or hold the red button to fire");
			stringList.Add (" three items that you chose to carry into your missions", " three items that you chose to carry into your missions");
			stringList.Add ("hows the amount of bullets that your current weapon has", "hows the amount of bullets that your current weapon has");
			stringList.Add ("indicates how much life the character has", "indicates how much life the character has");
			stringList.Add ("slot for skill, when you use it you had been unattainable for a while", "slot for skill, when you use it you had been unattainable for a while");
			stringList.Add ("pause button, you will be able to give up their mission and return to the map", "pause button, you will be able to give up their mission and return to the map");
			stringList.Add ("Ready? Choose your weapon and GO", "Ready? Choose your weapon and GO");
			stringList.Add ("cleared", "cleared");
			stringList.Add ("buy the Revolver", "buy the Revolver");
			stringList.Add ("Now you are ready to start your journey, good luck!", "Now you are ready to start your journey, good luck!");
			stringList.Add ("Back to the Map to start!", "Back to the Map to start!");
			stringList.Add ("buy 5 waters", "buy 5 waters");

		}


		//To end, I will provide a bigger example, for portuguese translation
		if (lang == SystemLanguage.Portuguese) {

			stringList.Add ("tap to play", "aperte para jogar");
			stringList.Add ("Attributes", "Atributos");
			stringList.Add ("Inventory", "Inventário");
			stringList.Add ("Store", "Loja");
			stringList.Add ("Statistics", "Estatísticas");
			stringList.Add ("Horde Mode", "Modo Horda");
			stringList.Add ("Mission 1", "Missão 1");
			stringList.Add ("Mission 2", "Missão 2");
			stringList.Add ("Mission 3", "Missão 3");
			stringList.Add ("Mission 4", "Missão 4");
			stringList.Add ("Mission 5", "Missão 5");
			stringList.Add ("Mission 6", "Missão 6");
			stringList.Add ("points", "pontos");
			stringList.Add ("Strength", "Força");
			stringList.Add ("Agility", "Agilidade");
			stringList.Add ("Perception", "Percepção");
			stringList.Add ("Vitality", "Vitalidade");
			stringList.Add ("Total Coins", "Total de moedas");
			stringList.Add ("Horde Kills", "Mortes no modo Horda");
			stringList.Add ("Enemies Killed", "Enemies mortos");
			stringList.Add ("Ammo Spent", "Munição gasta");
			stringList.Add ("Total Experience", "Experiência total");
			stringList.Add ("Knife Kills", "Facadas");
			stringList.Add ("Drag the items to the red slot", "Arraste os itens para o espaço vermelho");
			stringList.Add ("Click the arrow", "Clique na seta");
			stringList.Add ("Now you will learn about the controls of the game and play a little!\nTap for the next step", "Agora você vai aprender os controles e jogar um pouco!\nAperte para próximo passo");
			stringList.Add ("hold and drag the joystick to move Barry", "hold and drag the joystick to move Barry");
			stringList.Add ("press or hold the red button to fire", "press or hold the red button to fire");
			stringList.Add (" three items that you chose to carry into your missions", " three items that you chose to carry into your missions");
			stringList.Add ("hows the amount of bullets that your current weapon has", "hows the amount of bullets that your current weapon has");
			stringList.Add ("indicates how much life the character has", "indicates how much life the character has");
			stringList.Add ("slot for skill, when you use it you had been unattainable for a while", "slot for skill, when you use it you had been unattainable for a while");
			stringList.Add ("pause button, you will be able to give up their mission and return to the map", "pause button, you will be able to give up their mission and return to the map");
			stringList.Add ("Ready? Choose your weapon and GO", "Ready? Choose your weapon and GO");
			stringList.Add ("cleared", "cleared");
			stringList.Add ("buy the Revolver", "buy the Revolver");
			stringList.Add ("Now you are ready to start your journey, good luck!", "Now you are ready to start your journey, good luck!");
			stringList.Add ("Back to the Map to start!", "Back to the Map to start!");
			stringList.Add ("buy 5 waters", "buy 5 waters");

		}

		//You can add as many new keys to the stringList as you need
	}

	public static SystemLanguage GetLanguage () {
		return language;

	}

}