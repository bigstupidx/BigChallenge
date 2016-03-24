#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t4;
// UnityEngine.UI.Text
struct Text_t11;
// UnityEngine.UI.Slider
struct Slider_t12;
// UnityEngine.GameObject
struct GameObject_t13;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t14;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MapSceneHandler
struct  MapSceneHandler_t10  : public MonoBehaviour_t2
{
	// GameBehavior MapSceneHandler::behave
	GameBehavior_t4 * ___behave_2;
	// UnityEngine.UI.Text MapSceneHandler::coins
	Text_t11 * ___coins_3;
	// UnityEngine.UI.Slider MapSceneHandler::energySlider
	Slider_t12 * ___energySlider_4;
	// UnityEngine.UI.Text MapSceneHandler::counter
	Text_t11 * ___counter_5;
	// System.Int32 MapSceneHandler::missionNumber
	int32_t ___missionNumber_6;
	// UnityEngine.GameObject MapSceneHandler::MapTutorialCanvas
	GameObject_t13 * ___MapTutorialCanvas_7;
	// UnityEngine.GameObject[] MapSceneHandler::buttons
	GameObjectU5BU5D_t14* ___buttons_8;
	// UnityEngine.GameObject[] MapSceneHandler::arrows
	GameObjectU5BU5D_t14* ___arrows_9;
	// UnityEngine.GameObject MapSceneHandler::mapPanel
	GameObject_t13 * ___mapPanel_10;
	// UnityEngine.GameObject MapSceneHandler::mapText
	GameObject_t13 * ___mapText_11;
	// UnityEngine.GameObject[] MapSceneHandler::missions
	GameObjectU5BU5D_t14* ___missions_12;
};
