﻿using UnityEngine;
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
			stringList.Add ("Tap to play", "Tap to play");
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
			stringList.Add ("Drag the items to the red slots", "Drag the items to the red slot");
			stringList.Add ("Click the arrow", "Click the arrow");
			stringList.Add ("Now you will learn about the controls of the game and play a little!\nTap for the next step", "Now you will learn about the controls of the game and play a little!\nTap for the next step");
			stringList.Add ("hold and drag the joystick to move Barry", "hold and drag the joystick to move Barry");
			stringList.Add ("press or hold the red button to fire", "press or hold the red button to fire");
			stringList.Add (" three items that you chose to carry into your missions", " three items that you chose to carry into your missions");
			stringList.Add ("shows the amount of bullets that your current weapon has", "shows the amount of bullets that your current weapon has");
			stringList.Add ("indicates how much life the character has", "indicates how much life the character has");
			stringList.Add ("slot for skill, when you use it you become invincible for a amount of time", "slot for skill, when you use it you become invincible for a amount of time");
			stringList.Add ("pause button, you will be able to give up this mission and return to the map", "pause button, you will be able to give up this mission and return to the map");
			stringList.Add ("Ready? Choose your weapon and GO!", "Ready? Choose your weapon and GO!");
			stringList.Add ("cleared", "cleared");
			stringList.Add ("buy the Revolver", "buy the Revolver");
			stringList.Add ("Now you are ready to start your journey, good luck!", "Now you are ready to start your journey, good luck!");
			stringList.Add ("Back to the Map to start!", "Back to the Map to start!");
			stringList.Add ("buy 5 waters", "buy 5 waters");
			stringList.Add ("Strength increases damage", "Strength increases damage");
			stringList.Add ("Agility increases movement speed", "Agility increases movement speed");
			stringList.Add ("Perception increases skill duration", "Perception increases skill duration");
			stringList.Add ("Vitality increases amount of life", "Vitality increases amount of life");
			stringList.Add ("Play", "Play");
			stringList.Add ("Credits", "Credits");
			stringList.Add ("Map", "Map");
			stringList.Add ("You Are Dead !", "You Are Dead !");
			stringList.Add ("Score", "Score");
			stringList.Add ("Mission", "Mission");
			stringList.Add ("Horde", "Horde");
			stringList.Add ("Mode", "Mode");
			stringList.Add("Mission Completed","Mission Completed");

			stringList.Add ("Loading...", "Loading...");
			stringList.Add ("Hideout", "Hideout");
			stringList.Add ("Prison", "Prison");
			stringList.Add ("Mine", "Mine");
			stringList.Add ("Storage", "Storage");
			stringList.Add ("Desert", "Desert");
			stringList.Add ("Beach", "Beach");

			stringList.Add ("Hold and drag to move", "Hold and drag to move");
			stringList.Add ("Press or hold to fire", "Press or hold to fire");
			stringList.Add ("Items to take on missions", "Items to take on missions");
			stringList.Add ("Press to become invincible for a while", "Press to become invincible for a while");



			stringList.Add ("Play horde mode to get more experience and coins!","Play horde mode to get more experience and coins!");
			stringList.Add ("Replay previous missions to get stronger!","Replay previous missions to get stronger!");
			stringList.Add ("Shotgun does massive damage at short distance!","Shotgun does massive damage at short distance!");
			stringList.Add ("Stabbing enemies is risky, but it does tons of damage!","Stabbing enemies is risky, but it does tons of damage!");
			stringList.Add ("Try to dodge enemy bullets!","Try to dodge enemy bullets!");
			stringList.Add ("Some missions might have secret passages... Stay sharp","Some missions might have secret passages... Stay sharp");
			stringList.Add ("Distribute your points wisely","Distribute your points wisely");
			stringList.Add ("Try to take a lot of healing items to missions!","Try to take a lot of healing items to missions!");
			stringList.Add ("Don’t forget to have enough ammo on your weapons!","Don’t forget to have enough ammo on your weapons!");



		
			
		}


		//To end, I will provide a bigger example, for portuguese translation
		if (lang == SystemLanguage.Portuguese) {

			stringList.Add ("Tap to play", "Aperte para jogar");
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
			stringList.Add ("Enemies Killed", "Inimigos mortos");
			stringList.Add ("Ammo Spent", "Munição gasta");
			stringList.Add ("Total Experience", "Experiência total");
			stringList.Add ("Knife Kills", "Facadas");
			stringList.Add ("Drag the items to the red slots", "Arraste os itens para o espaço vermelho");
			stringList.Add ("Click the arrow", "Clique na seta");
			stringList.Add ("Now you will learn about the controls of the game and play a little!\nTap for the next step", "Agora você vai aprender os controles e jogar um pouco!\nAperte para próximo passo");
			stringList.Add ("hold and drag the joystick to move Barry", "segure e arraste para mover o Barry");
			stringList.Add ("press or hold the red button to fire", "aperte ou segure para atirar");
			stringList.Add (" three items that you chose to carry into your missions", "três itens que você escolhe para levar nas missões");
			stringList.Add ("shows the amount of bullets that your current weapon has", "indica quantidade de balas que sua arma atual possui");
			stringList.Add ("indicates how much life the character has", "indica quanto de vida seu personagem possui");
			stringList.Add ("slot for skill, when you use it you become invincible for a amount of time", "espaço para skill, ao usar você fica invencível por um tempo");
			stringList.Add ("pause button, you will be able to give up this mission and return to the map", "botão de pausa, você pode desistir da missão e voltar para o mapa");
			stringList.Add ("Ready? Choose your weapon and GO!", "Pronto? Escolha sua arma e VAI!");
			stringList.Add ("cleared", "Horda concluida");
			stringList.Add ("buy the Revolver", "compre o Revolver");
			stringList.Add ("Now you are ready to start your journey, good luck!", "Agora você está pronto para começar sua jornada, boa sorte!");
			stringList.Add ("Back to the Map to start!", "Voltar para o mapa para começar!");
			stringList.Add ("buy 5 waters", "compre 5 águas");
			stringList.Add ("Strength increases damage", "Força aumenta o dano");
			stringList.Add ("Agility increases movement speed", "Agilidade aumenta a velocidade");
			stringList.Add ("Perception increases skill duration", "Percepção aumenta duração da habilidade");
			stringList.Add ("Vitality increases amount of life", "Vitalidade aumenta quantidade de vida");
			stringList.Add ("Play", "Jogar");
			stringList.Add ("Credits", "Créditos");
			stringList.Add ("Map", "Mapa");
			stringList.Add ("You Are Dead !", "Voce está morto!");
			stringList.Add ("Score", "Resultados");
			stringList.Add ("Mission", "Missão");
			stringList.Add ("Horde", "Modo");
			stringList.Add ("Mode", "Horda");
			stringList.Add("Mission Completed","Missão Completa");

			stringList.Add ("Loading...", "Carregando...");
			stringList.Add ("Hideout", "Casarão");
			stringList.Add ("Prison", "Prisão");
			stringList.Add ("Mine", "Mina");
			stringList.Add ("Storage", "Armazém");
			stringList.Add ("Desert", "Deserto");
			stringList.Add ("Beach", "Praia");

			stringList.Add ("Hold and drag to move", "Segure e arraste para mover");
			stringList.Add ("Press or hold to fire", "Aperte ou segure para atirar");
			stringList.Add ("Items to take on missions", "Itens para levar nas missões");
			stringList.Add ("Press to become invincible for a while", "Aperte para se tornar invencível por um tempo");


			stringList.Add ("Play horde mode to get more experience and coins!","Jogue o modo horda para conseguir mais experiência e mais moedas!");
			stringList.Add ("Replay previous missions to get stronger!","Refaça as missões anteriores para ficar mais forte para as próximas!");
			stringList.Add ("Shotgun does massive damage at short distance!","A Shotgun é muito poderosa a curta distância!");
			stringList.Add ("Stabbing enemies is risky, but it does tons of damage!","Uma facada é arriscada, mas dá muito dano!");
			stringList.Add ("Try to dodge enemy bullets!","Tente desviar das balas dos inimigos!");
			stringList.Add ("Some missions might have secret passages... Stay sharp","Algumas missões podem ter passagens secretas... Fique esperto!");
			stringList.Add ("Distribute your points wisely","Destribua seus pontos sabiamente...");
			stringList.Add ("Try to take a lot of healing items to missions!","Tente sempre levar bastante itens de cura em suas missões!");
			stringList.Add ("Don’t forget to have enough ammo on your weapons!","Não esquecer de sempre ter munição suficiente em suas armas!");


			
			
		}

		//You can add as many new keys to the stringList as you need
	}

	public static SystemLanguage GetLanguage () {
		return language;

	}

}