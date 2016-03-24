#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t14;
// UnityEngine.Transform[]
struct TransformU5BU5D_t135;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t82;
// UnityEngine.GameObject
struct GameObject_t13;
// GameBehavior
struct GameBehavior_t4;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// hordeMode
struct  hordeMode_t134  : public MonoBehaviour_t2
{
	// System.Int32 hordeMode::level
	int32_t ___level_2;
	// UnityEngine.GameObject[] hordeMode::enemies
	GameObjectU5BU5D_t14* ___enemies_3;
	// UnityEngine.Transform[] hordeMode::respawnPoints
	TransformU5BU5D_t135* ___respawnPoints_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> hordeMode::enemiesInScene
	List_1_t82 * ___enemiesInScene_5;
	// System.Single hordeMode::timer
	float ___timer_6;
	// UnityEngine.GameObject hordeMode::clearedText
	GameObject_t13 * ___clearedText_7;
	// UnityEngine.GameObject hordeMode::countingText
	GameObject_t13 * ___countingText_8;
	// UnityEngine.GameObject hordeMode::totalText
	GameObject_t13 * ___totalText_9;
	// System.Boolean hordeMode::go
	bool ___go_10;
	// System.Int32 hordeMode::count
	int32_t ___count_11;
	// GameBehavior hordeMode::behave
	GameBehavior_t4 * ___behave_12;
	// UnityEngine.GameObject hordeMode::canvasTutorial
	GameObject_t13 * ___canvasTutorial_13;
	// UnityEngine.GameObject hordeMode::textTutorial
	GameObject_t13 * ___textTutorial_14;
	// System.Int32 hordeMode::index
	int32_t ___index_15;
	// System.Single hordeMode::time
	float ___time_16;
	// System.Boolean hordeMode::startTime
	bool ___startTime_17;
	// UnityEngine.GameObject hordeMode::joystickArrow
	GameObject_t13 * ___joystickArrow_18;
	// UnityEngine.GameObject hordeMode::slotsArrow
	GameObject_t13 * ___slotsArrow_19;
	// UnityEngine.GameObject hordeMode::skillArrow
	GameObject_t13 * ___skillArrow_20;
	// UnityEngine.GameObject hordeMode::fireButtonArrow
	GameObject_t13 * ___fireButtonArrow_21;
};
