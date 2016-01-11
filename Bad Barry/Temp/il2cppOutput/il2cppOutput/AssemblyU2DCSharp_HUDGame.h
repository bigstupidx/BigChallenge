#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Menu
struct Menu_t56;
// UnityEngine.GameObject
struct GameObject_t40;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// HUDGame
struct  HUDGame_t55  : public MonoBehaviour_t2
{
	// Menu HUDGame::currentMenu
	Menu_t56 * ___currentMenu_2;
	// UnityEngine.GameObject HUDGame::health
	GameObject_t40 * ___health_3;
	// UnityEngine.GameObject HUDGame::xp
	GameObject_t40 * ___xp_4;
	// UnityEngine.GameObject HUDGame::lvlUp
	GameObject_t40 * ___lvlUp_5;
	// UnityEngine.GameObject HUDGame::ammo
	GameObject_t40 * ___ammo_6;
};
struct HUDGame_t55_StaticFields{
	// System.Boolean HUDGame::isPaused
	bool ___isPaused_7;
};
