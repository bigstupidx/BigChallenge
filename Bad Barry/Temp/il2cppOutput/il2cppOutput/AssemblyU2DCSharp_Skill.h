#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Skill
struct Skill_t115;
// GameBehavior
struct GameBehavior_t4;
// Player
struct Player_t113;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t84;
// ItemDatabase
struct ItemDatabase_t80;
// System.Collections.Generic.List`1<Item>
struct List_1_t81;
// UnityEngine.UI.Text
struct Text_t11;
// UnityEngine.UI.Button
struct Button_t67;
// UnityEngine.UI.Image
struct Image_t39;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
#include "UnityEngine_UnityEngine_Color.h"

// Skill
struct  Skill_t115  : public MonoBehaviour_t2
{
	// GameBehavior Skill::behave
	GameBehavior_t4 * ___behave_3;
	// Player Skill::player
	Player_t113 * ___player_4;
	// UnityEngine.UI.Image[] Skill::skillsInGame
	ImageU5BU5D_t84* ___skillsInGame_5;
	// ItemDatabase Skill::database
	ItemDatabase_t80 * ___database_6;
	// System.Collections.Generic.List`1<Item> Skill::skills
	List_1_t81 * ___skills_7;
	// System.Boolean Skill::skillActivate
	bool ___skillActivate_8;
	// UnityEngine.UI.Text Skill::amount
	Text_t11 * ___amount_9;
	// UnityEngine.UI.Button Skill::slotButton
	Button_t67 * ___slotButton_10;
	// UnityEngine.UI.ColorBlock Skill::slotColors
	ColorBlock_t116  ___slotColors_11;
	// UnityEngine.UI.Image Skill::iconImage
	Image_t39 * ___iconImage_12;
	// UnityEngine.Color Skill::iconColor
	Color_t94  ___iconColor_13;
};
struct Skill_t115_StaticFields{
	// Skill Skill::Instance
	Skill_t115 * ___Instance_2;
};
