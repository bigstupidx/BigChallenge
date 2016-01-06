#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Menu
struct Menu_t51;
// UnityEngine.GameObject
struct GameObject_t38;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// HUDGame
struct  HUDGame_t50  : public MonoBehaviour_t2
{
	// Menu HUDGame::currentMenu
	Menu_t51 * ___currentMenu_2;
	// UnityEngine.GameObject HUDGame::health
	GameObject_t38 * ___health_3;
	// UnityEngine.GameObject HUDGame::xp
	GameObject_t38 * ___xp_4;
	// UnityEngine.GameObject HUDGame::lvlUp
	GameObject_t38 * ___lvlUp_5;
};
struct HUDGame_t50_StaticFields{
	// System.Boolean HUDGame::isPaused
	bool ___isPaused_6;
};
