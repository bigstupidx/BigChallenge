#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Menu
struct Menu_t76;
// UnityEngine.GameObject
struct GameObject_t13;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t48;
// GameBehavior
struct GameBehavior_t4;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// HUDGame
struct  HUDGame_t75  : public MonoBehaviour_t2
{
	// Menu HUDGame::currentMenu
	Menu_t76 * ___currentMenu_2;
	// UnityEngine.GameObject HUDGame::health
	GameObject_t13 * ___health_3;
	// UnityEngine.GameObject HUDGame::xp
	GameObject_t13 * ___xp_4;
	// UnityEngine.GameObject HUDGame::lvlUp
	GameObject_t13 * ___lvlUp_5;
	// UnityEngine.GameObject HUDGame::ammo
	GameObject_t13 * ___ammo_6;
	// UnityEngine.Sprite[] HUDGame::images
	SpriteU5BU5D_t48* ___images_7;
	// UnityEngine.GameObject HUDGame::ammoImage
	GameObject_t13 * ___ammoImage_8;
	// GameBehavior HUDGame::behave
	GameBehavior_t4 * ___behave_10;
};
struct HUDGame_t75_StaticFields{
	// System.Boolean HUDGame::isPaused
	bool ___isPaused_9;
};
