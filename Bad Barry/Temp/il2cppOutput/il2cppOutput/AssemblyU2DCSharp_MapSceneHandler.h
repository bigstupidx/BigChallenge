#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t12;
// UnityEngine.UI.Text
struct Text_t19;
// UnityEngine.UI.Slider
struct Slider_t20;
// UnityEngine.GameObject
struct GameObject_t21;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t22;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MapSceneHandler
struct  MapSceneHandler_t18  : public MonoBehaviour_t2
{
	// GameBehavior MapSceneHandler::behave
	GameBehavior_t12 * ___behave_2;
	// UnityEngine.UI.Text MapSceneHandler::coins
	Text_t19 * ___coins_3;
	// UnityEngine.UI.Slider MapSceneHandler::energySlider
	Slider_t20 * ___energySlider_4;
	// UnityEngine.UI.Text MapSceneHandler::counter
	Text_t19 * ___counter_5;
	// System.Int32 MapSceneHandler::missionNumber
	int32_t ___missionNumber_6;
	// UnityEngine.GameObject MapSceneHandler::MapTutorialCanvas
	GameObject_t21 * ___MapTutorialCanvas_7;
	// UnityEngine.GameObject[] MapSceneHandler::buttons
	GameObjectU5BU5D_t22* ___buttons_8;
	// UnityEngine.GameObject[] MapSceneHandler::arrows
	GameObjectU5BU5D_t22* ___arrows_9;
	// UnityEngine.GameObject MapSceneHandler::mapPanel
	GameObject_t21 * ___mapPanel_10;
	// UnityEngine.GameObject MapSceneHandler::mapText
	GameObject_t21 * ___mapText_11;
	// UnityEngine.GameObject[] MapSceneHandler::missions
	GameObjectU5BU5D_t22* ___missions_12;
};
