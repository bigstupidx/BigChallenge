#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t68;
// System.Collections.Generic.List`1<ItemData>
struct List_1_t69;
// System.Action`1<System.Boolean>
struct Action_1_t71;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "mscorlib_System_DateTime.h"

// GameBehavior
struct  GameBehavior_t12  : public MonoBehaviour_t2
{
	// System.String GameBehavior::hordeScoreBoardId
	String_t* ___hordeScoreBoardId_2;
	// System.String GameBehavior::knifel100Id
	String_t* ___knifel100Id_3;
	// System.String GameBehavior::knifel500Id
	String_t* ___knifel500Id_4;
	// System.String GameBehavior::knifel2000Id
	String_t* ___knifel2000Id_5;
	// System.String GameBehavior::knifel10000Id
	String_t* ___knifel10000Id_6;
	// System.String GameBehavior::horde10Id
	String_t* ___horde10Id_7;
	// System.String GameBehavior::horde25Id
	String_t* ___horde25Id_8;
	// System.String GameBehavior::horde50Id
	String_t* ___horde50Id_9;
	// System.String GameBehavior::horde100Id
	String_t* ___horde100Id_10;
	// System.String GameBehavior::coins500Id
	String_t* ___coins500Id_11;
	// System.String GameBehavior::coins1000Id
	String_t* ___coins1000Id_12;
	// System.String GameBehavior::coins10000Id
	String_t* ___coins10000Id_13;
	// System.String GameBehavior::coins100000Id
	String_t* ___coins100000Id_14;
	// System.String GameBehavior::agilityHighId
	String_t* ___agilityHighId_15;
	// System.String GameBehavior::strenghtyHighId
	String_t* ___strenghtyHighId_16;
	// System.String GameBehavior::inteligenceHighId
	String_t* ___inteligenceHighId_17;
	// System.String GameBehavior::vitalityHighId
	String_t* ___vitalityHighId_18;
	// System.String GameBehavior::death10Id
	String_t* ___death10Id_19;
	// System.String GameBehavior::death100Id
	String_t* ___death100Id_20;
	// System.String GameBehavior::death1000Id
	String_t* ___death1000Id_21;
	// System.String GameBehavior::death10000Id
	String_t* ___death10000Id_22;
	// System.String GameBehavior::ammo250Id
	String_t* ___ammo250Id_23;
	// System.String GameBehavior::ammo1000Id
	String_t* ___ammo1000Id_24;
	// System.String GameBehavior::ammo10000Id
	String_t* ___ammo10000Id_25;
	// System.String GameBehavior::ammo100000Id
	String_t* ___ammo100000Id_26;
	// System.String GameBehavior::submachineAchievId
	String_t* ___submachineAchievId_27;
	// System.String GameBehavior::shotgunAchievId
	String_t* ___shotgunAchievId_28;
	// System.Boolean GameBehavior::loadingSound
	bool ___loadingSound_29;
	// System.Int32[] GameBehavior::inventory
	Int32U5BU5D_t68* ___inventory_30;
	// System.Int32[] GameBehavior::abilityIDs
	Int32U5BU5D_t68* ___abilityIDs_31;
	// System.Int32 GameBehavior::abilityIndex
	int32_t ___abilityIndex_32;
	// System.Boolean GameBehavior::levelingUp
	bool ___levelingUp_33;
	// System.Int32 GameBehavior::levelsUp
	int32_t ___levelsUp_34;
	// System.Boolean GameBehavior::pause
	bool ___pause_35;
	// System.Boolean GameBehavior::teste
	bool ___teste_36;
	// System.Single GameBehavior::experience
	float ___experience_37;
	// System.Single GameBehavior::neededExperience
	float ___neededExperience_38;
	// System.Int32 GameBehavior::life
	int32_t ___life_39;
	// System.Int32 GameBehavior::maxLife
	int32_t ___maxLife_40;
	// System.Int32 GameBehavior::energy
	int32_t ___energy_41;
	// System.Int32 GameBehavior::expendPoints
	int32_t ___expendPoints_42;
	// System.Int32 GameBehavior::strength
	int32_t ___strength_43;
	// System.Int32 GameBehavior::agility
	int32_t ___agility_44;
	// System.Int32 GameBehavior::inteligence
	int32_t ___inteligence_45;
	// System.Int32 GameBehavior::vitality
	int32_t ___vitality_46;
	// System.Int32 GameBehavior::previousScene
	int32_t ___previousScene_47;
	// System.Int32 GameBehavior::selectedWeapon
	int32_t ___selectedWeapon_48;
	// System.Int32[] GameBehavior::bullets
	Int32U5BU5D_t68* ___bullets_49;
	// System.Collections.Generic.List`1<ItemData> GameBehavior::inventoryItems
	List_1_t69 * ___inventoryItems_50;
	// System.Single GameBehavior::timer
	float ___timer_51;
	// System.Single GameBehavior::timeToEnergy
	float ___timeToEnergy_52;
	// System.DateTime GameBehavior::lastDateTime
	DateTime_t70  ___lastDateTime_53;
	// System.Int32 GameBehavior::earnedCoins
	int32_t ___earnedCoins_54;
	// System.Int32 GameBehavior::enemiesKilled
	int32_t ___enemiesKilled_55;
	// System.Int32 GameBehavior::totalEnemies
	int32_t ___totalEnemies_56;
	// System.Int32 GameBehavior::coins
	int32_t ___coins_57;
	// System.Int32 GameBehavior::totalCoins
	int32_t ___totalCoins_58;
	// System.Int32 GameBehavior::maxHordeKills
	int32_t ___maxHordeKills_59;
	// System.Int32 GameBehavior::currentHordeKills
	int32_t ___currentHordeKills_60;
	// System.Int32 GameBehavior::ammoSpent
	int32_t ___ammoSpent_61;
	// System.Single GameBehavior::totalExperience
	float ___totalExperience_62;
	// System.Int32 GameBehavior::knifeKills
	int32_t ___knifeKills_63;
	// System.Int32 GameBehavior::totalDeaths
	int32_t ___totalDeaths_64;
	// System.Int32 GameBehavior::totalEnemiesKilled
	int32_t ___totalEnemiesKilled_65;
	// System.Boolean GameBehavior::showTutorial
	bool ___showTutorial_66;
	// System.Boolean GameBehavior::showMap
	bool ___showMap_67;
	// System.Boolean GameBehavior::showAttributes
	bool ___showAttributes_68;
	// System.Boolean GameBehavior::showStore
	bool ___showStore_69;
	// System.Int32 GameBehavior::currentMission
	int32_t ___currentMission_70;
	// System.String GameBehavior::toLoadScene
	String_t* ___toLoadScene_71;
	// System.Boolean GameBehavior::goingToMission
	bool ___goingToMission_72;
	// System.Int32 GameBehavior::selectedMission
	int32_t ___selectedMission_73;
};
struct GameBehavior_t12_StaticFields{
	// System.Action`1<System.Boolean> GameBehavior::<>f__am$cache48
	Action_1_t71 * ___U3CU3Ef__amU24cache48_74;
	// System.Action`1<System.Boolean> GameBehavior::<>f__am$cache49
	Action_1_t71 * ___U3CU3Ef__amU24cache49_75;
};
