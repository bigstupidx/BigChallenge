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
// UnityEngine.GameObject
struct GameObject_t13;
// InventoryInMission
struct InventoryInMission_t51;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// AtributeScreen
struct  AtributeScreen_t50  : public MonoBehaviour_t2
{
	// GameBehavior AtributeScreen::script
	GameBehavior_t4 * ___script_2;
	// GameBehavior AtributeScreen::behave
	GameBehavior_t4 * ___behave_3;
	// UnityEngine.GameObject AtributeScreen::AttributeTutorial
	GameObject_t13 * ___AttributeTutorial_4;
	// UnityEngine.GameObject AtributeScreen::Strength
	GameObject_t13 * ___Strength_5;
	// UnityEngine.GameObject AtributeScreen::Agility
	GameObject_t13 * ___Agility_6;
	// UnityEngine.GameObject AtributeScreen::Perception
	GameObject_t13 * ___Perception_7;
	// UnityEngine.GameObject AtributeScreen::Vitality
	GameObject_t13 * ___Vitality_8;
	// UnityEngine.GameObject AtributeScreen::backArrow
	GameObject_t13 * ___backArrow_9;
	// System.Single AtributeScreen::height
	float ___height_10;
	// System.Int32 AtributeScreen::index
	int32_t ___index_11;
	// InventoryInMission AtributeScreen::slots
	InventoryInMission_t51 * ___slots_12;
};
