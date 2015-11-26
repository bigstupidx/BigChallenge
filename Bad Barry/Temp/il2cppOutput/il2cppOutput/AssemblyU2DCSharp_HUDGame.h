#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Menu
struct Menu_t8_24;
// UnityEngine.UI.Slider
struct Slider_t7_125;
// UnityEngine.UI.Image
struct Image_t7_64;
// UnityEngine.GameObject
struct GameObject_t6_94;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// HUDGame
struct  HUDGame_t8_35  : public MonoBehaviour_t6_88
{
	// Menu HUDGame::currentMenu
	Menu_t8_24 * ___currentMenu_2;
	// UnityEngine.UI.Slider HUDGame::healthSlider
	Slider_t7_125 * ___healthSlider_3;
	// UnityEngine.UI.Slider HUDGame::xpSlider
	Slider_t7_125 * ___xpSlider_4;
	// UnityEngine.UI.Image HUDGame::healthSliderImage
	Image_t7_64 * ___healthSliderImage_5;
	// UnityEngine.UI.Image HUDGame::xpSliderImage
	Image_t7_64 * ___xpSliderImage_6;
	// UnityEngine.GameObject HUDGame::lvlUp
	GameObject_t6_94 * ___lvlUp_7;
};
struct HUDGame_t8_35_StaticFields{
	// System.Boolean HUDGame::isPaused
	bool ___isPaused_8;
};
