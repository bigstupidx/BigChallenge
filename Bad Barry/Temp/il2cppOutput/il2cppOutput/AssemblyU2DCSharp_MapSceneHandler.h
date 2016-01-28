#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t3;
// UnityEngine.UI.Text
struct Text_t6;
// UnityEngine.UI.Slider
struct Slider_t7;
// UnityEngine.GameObject
struct GameObject_t8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t9;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MapSceneHandler
struct  MapSceneHandler_t5  : public MonoBehaviour_t2
{
	// GameBehavior MapSceneHandler::behave
	GameBehavior_t3 * ___behave_2;
	// UnityEngine.UI.Text MapSceneHandler::coins
	Text_t6 * ___coins_3;
	// UnityEngine.UI.Slider MapSceneHandler::energySlider
	Slider_t7 * ___energySlider_4;
	// UnityEngine.UI.Text MapSceneHandler::counter
	Text_t6 * ___counter_5;
	// System.Int32 MapSceneHandler::missionNumber
	int32_t ___missionNumber_6;
	// UnityEngine.GameObject MapSceneHandler::MapTutorialCanvas
	GameObject_t8 * ___MapTutorialCanvas_7;
	// UnityEngine.GameObject[] MapSceneHandler::buttons
	GameObjectU5BU5D_t9* ___buttons_8;
	// UnityEngine.GameObject[] MapSceneHandler::arrows
	GameObjectU5BU5D_t9* ___arrows_9;
	// UnityEngine.GameObject MapSceneHandler::mapPanel
	GameObject_t8 * ___mapPanel_10;
	// UnityEngine.GameObject MapSceneHandler::mapText
	GameObject_t8 * ___mapText_11;
};
