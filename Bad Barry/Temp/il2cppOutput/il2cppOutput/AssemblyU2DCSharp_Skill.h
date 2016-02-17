#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Skill
struct Skill_t121;
// GameBehavior
struct GameBehavior_t12;
// Player
struct Player_t119;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t90;
// ItemDatabase
struct ItemDatabase_t87;
// System.Collections.Generic.List`1<Item>
struct List_1_t88;
// UnityEngine.UI.Text
struct Text_t19;
// UnityEngine.UI.Button
struct Button_t74;
// UnityEngine.UI.Image
struct Image_t46;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
#include "UnityEngine_UnityEngine_Color.h"

// Skill
struct  Skill_t121  : public MonoBehaviour_t2
{
	// GameBehavior Skill::behave
	GameBehavior_t12 * ___behave_3;
	// Player Skill::player
	Player_t119 * ___player_4;
	// UnityEngine.UI.Image[] Skill::skillsInGame
	ImageU5BU5D_t90* ___skillsInGame_5;
	// ItemDatabase Skill::database
	ItemDatabase_t87 * ___database_6;
	// System.Collections.Generic.List`1<Item> Skill::skills
	List_1_t88 * ___skills_7;
	// System.Boolean Skill::skillActivate
	bool ___skillActivate_8;
	// UnityEngine.UI.Text Skill::amount
	Text_t19 * ___amount_9;
	// UnityEngine.UI.Button Skill::slotButton
	Button_t74 * ___slotButton_10;
	// UnityEngine.UI.ColorBlock Skill::slotColors
	ColorBlock_t122  ___slotColors_11;
	// UnityEngine.UI.Image Skill::iconImage
	Image_t46 * ___iconImage_12;
	// UnityEngine.Color Skill::iconColor
	Color_t100  ___iconColor_13;
};
struct Skill_t121_StaticFields{
	// Skill Skill::Instance
	Skill_t121 * ___Instance_2;
};
