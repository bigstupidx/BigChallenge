#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Skill
struct Skill_t99;
// GameBehavior
struct GameBehavior_t3;
// Player
struct Player_t97;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t79;
// ItemDatabase
struct ItemDatabase_t75;
// System.Collections.Generic.List`1<Item>
struct List_1_t76;
// UnityEngine.UI.Text
struct Text_t6;
// UnityEngine.UI.Button
struct Button_t62;
// UnityEngine.UI.Image
struct Image_t34;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
#include "UnityEngine_UnityEngine_Color.h"

// Skill
struct  Skill_t99  : public MonoBehaviour_t2
{
	// GameBehavior Skill::behave
	GameBehavior_t3 * ___behave_3;
	// Player Skill::player
	Player_t97 * ___player_4;
	// UnityEngine.UI.Image[] Skill::skillsInGame
	ImageU5BU5D_t79* ___skillsInGame_5;
	// ItemDatabase Skill::database
	ItemDatabase_t75 * ___database_6;
	// System.Collections.Generic.List`1<Item> Skill::skills
	List_1_t76 * ___skills_7;
	// System.Boolean Skill::skillActivate
	bool ___skillActivate_8;
	// UnityEngine.UI.Text Skill::amount
	Text_t6 * ___amount_9;
	// UnityEngine.UI.Button Skill::slotButton
	Button_t62 * ___slotButton_10;
	// UnityEngine.UI.ColorBlock Skill::slotColors
	ColorBlock_t100  ___slotColors_11;
	// UnityEngine.UI.Image Skill::iconImage
	Image_t34 * ___iconImage_12;
	// UnityEngine.Color Skill::iconColor
	Color_t101  ___iconColor_13;
};
struct Skill_t99_StaticFields{
	// Skill Skill::Instance
	Skill_t99 * ___Instance_2;
};
