#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Menu
struct Menu_t33;
// UnityEngine.UI.Slider
struct Slider_t49;
// UnityEngine.UI.Image
struct Image_t26;
// UnityEngine.GameObject
struct GameObject_t3;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// HUDGame
struct  HUDGame_t48  : public MonoBehaviour_t2
{
	// Menu HUDGame::currentMenu
	Menu_t33 * ___currentMenu_2;
	// UnityEngine.UI.Slider HUDGame::healthSlider
	Slider_t49 * ___healthSlider_3;
	// UnityEngine.UI.Slider HUDGame::xpSlider
	Slider_t49 * ___xpSlider_4;
	// UnityEngine.UI.Image HUDGame::healthSliderImage
	Image_t26 * ___healthSliderImage_5;
	// UnityEngine.UI.Image HUDGame::xpSliderImage
	Image_t26 * ___xpSliderImage_6;
	// UnityEngine.GameObject HUDGame::lvlUp
	GameObject_t3 * ___lvlUp_7;
};
struct HUDGame_t48_StaticFields{
	// System.Boolean HUDGame::isPaused
	bool ___isPaused_8;
};
