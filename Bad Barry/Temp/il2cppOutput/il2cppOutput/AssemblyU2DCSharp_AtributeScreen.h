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
// UnityEngine.GameObject
struct GameObject_t21;
// InventoryInMission
struct InventoryInMission_t58;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// AtributeScreen
struct  AtributeScreen_t57  : public MonoBehaviour_t2
{
	// GameBehavior AtributeScreen::script
	GameBehavior_t12 * ___script_2;
	// GameBehavior AtributeScreen::behave
	GameBehavior_t12 * ___behave_3;
	// UnityEngine.GameObject AtributeScreen::AttributeTutorial
	GameObject_t21 * ___AttributeTutorial_4;
	// UnityEngine.GameObject AtributeScreen::Strength
	GameObject_t21 * ___Strength_5;
	// UnityEngine.GameObject AtributeScreen::Agility
	GameObject_t21 * ___Agility_6;
	// UnityEngine.GameObject AtributeScreen::Perception
	GameObject_t21 * ___Perception_7;
	// UnityEngine.GameObject AtributeScreen::Vitality
	GameObject_t21 * ___Vitality_8;
	// UnityEngine.GameObject AtributeScreen::backArrow
	GameObject_t21 * ___backArrow_9;
	// System.Single AtributeScreen::height
	float ___height_10;
	// System.Int32 AtributeScreen::index
	int32_t ___index_11;
	// InventoryInMission AtributeScreen::slots
	InventoryInMission_t58 * ___slots_12;
};
