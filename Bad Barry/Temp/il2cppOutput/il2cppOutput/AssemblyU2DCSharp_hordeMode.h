#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t9;
// UnityEngine.Transform[]
struct TransformU5BU5D_t120;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t77;
// UnityEngine.GameObject
struct GameObject_t8;
// GameBehavior
struct GameBehavior_t3;
// System.String[]
struct StringU5BU5D_t121;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// hordeMode
struct  hordeMode_t119  : public MonoBehaviour_t2
{
	// System.Int32 hordeMode::level
	int32_t ___level_2;
	// UnityEngine.GameObject[] hordeMode::enemies
	GameObjectU5BU5D_t9* ___enemies_3;
	// UnityEngine.Transform[] hordeMode::respawnPoints
	TransformU5BU5D_t120* ___respawnPoints_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> hordeMode::enemiesInScene
	List_1_t77 * ___enemiesInScene_5;
	// System.Single hordeMode::timer
	float ___timer_6;
	// UnityEngine.GameObject hordeMode::clearedText
	GameObject_t8 * ___clearedText_7;
	// UnityEngine.GameObject hordeMode::countingText
	GameObject_t8 * ___countingText_8;
	// UnityEngine.GameObject hordeMode::totalText
	GameObject_t8 * ___totalText_9;
	// System.Boolean hordeMode::go
	bool ___go_10;
	// System.Int32 hordeMode::count
	int32_t ___count_11;
	// GameBehavior hordeMode::behave
	GameBehavior_t3 * ___behave_12;
	// UnityEngine.GameObject hordeMode::infinity
	GameObject_t8 * ___infinity_13;
	// UnityEngine.GameObject hordeMode::canvasTutorial
	GameObject_t8 * ___canvasTutorial_14;
	// UnityEngine.GameObject hordeMode::textTutorial
	GameObject_t8 * ___textTutorial_15;
	// System.String[] hordeMode::tutoText
	StringU5BU5D_t121* ___tutoText_16;
	// System.Int32 hordeMode::index
	int32_t ___index_17;
	// System.Single hordeMode::time
	float ___time_18;
	// System.Boolean hordeMode::startTime
	bool ___startTime_19;
	// UnityEngine.GameObject[] hordeMode::arrows
	GameObjectU5BU5D_t9* ___arrows_20;
};
