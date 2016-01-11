#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t46;
// System.Collections.Generic.List`1<ItemData>
struct List_1_t47;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "mscorlib_System_DateTime.h"

// GameBehavior
struct  GameBehavior_t3  : public MonoBehaviour_t2
{
	// System.Int32[] GameBehavior::inventory
	Int32U5BU5D_t46* ___inventory_2;
	// System.Boolean GameBehavior::levelingUp
	bool ___levelingUp_3;
	// System.Int32 GameBehavior::levelsUp
	int32_t ___levelsUp_4;
	// System.Boolean GameBehavior::pause
	bool ___pause_5;
	// System.Boolean GameBehavior::teste
	bool ___teste_6;
	// System.Single GameBehavior::experience
	float ___experience_7;
	// System.Single GameBehavior::neededExperience
	float ___neededExperience_8;
	// System.Int32 GameBehavior::life
	int32_t ___life_9;
	// System.Int32 GameBehavior::maxLife
	int32_t ___maxLife_10;
	// System.Int32 GameBehavior::energy
	int32_t ___energy_11;
	// System.Int32 GameBehavior::expendPoints
	int32_t ___expendPoints_12;
	// System.Int32 GameBehavior::strength
	int32_t ___strength_13;
	// System.Int32 GameBehavior::agility
	int32_t ___agility_14;
	// System.Int32 GameBehavior::inteligence
	int32_t ___inteligence_15;
	// System.Int32 GameBehavior::vitality
	int32_t ___vitality_16;
	// System.Int32 GameBehavior::previousScene
	int32_t ___previousScene_17;
	// System.Int32 GameBehavior::selectedWeapon
	int32_t ___selectedWeapon_18;
	// System.Int32[] GameBehavior::bullets
	Int32U5BU5D_t46* ___bullets_19;
	// System.Collections.Generic.List`1<ItemData> GameBehavior::inventoryItems
	List_1_t47 * ___inventoryItems_20;
	// System.Single GameBehavior::timer
	float ___timer_21;
	// System.DateTime GameBehavior::lastDateTime
	DateTime_t48  ___lastDateTime_22;
};
