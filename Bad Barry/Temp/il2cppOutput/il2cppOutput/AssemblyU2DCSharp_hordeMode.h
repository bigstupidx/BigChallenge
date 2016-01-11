#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t39;
// UnityEngine.Transform[]
struct TransformU5BU5D_t96;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t62;
// UnityEngine.GameObject
struct GameObject_t40;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// hordeMode
struct  hordeMode_t95  : public MonoBehaviour_t2
{
	// System.Int32 hordeMode::level
	int32_t ___level_2;
	// UnityEngine.GameObject[] hordeMode::enemies
	GameObjectU5BU5D_t39* ___enemies_3;
	// UnityEngine.Transform[] hordeMode::respawnPoints
	TransformU5BU5D_t96* ___respawnPoints_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> hordeMode::enemiesInScene
	List_1_t62 * ___enemiesInScene_5;
	// System.Single hordeMode::timer
	float ___timer_6;
	// UnityEngine.GameObject hordeMode::clearedText
	GameObject_t40 * ___clearedText_7;
	// UnityEngine.GameObject hordeMode::countingText
	GameObject_t40 * ___countingText_8;
	// UnityEngine.GameObject hordeMode::totalText
	GameObject_t40 * ___totalText_9;
	// System.Boolean hordeMode::go
	bool ___go_10;
	// System.Int32 hordeMode::count
	int32_t ___count_11;
};
