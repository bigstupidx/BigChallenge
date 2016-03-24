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
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.List`1<ItemData>
struct List_1_t2038637174;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameBehavior
struct  GameBehavior_t1830462596  : public MonoBehaviour_t3012272455
{
public:
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
	Int32U5BU5D_t1809983122* ___inventory_30;
	// System.Int32[] GameBehavior::abilityIDs
	Int32U5BU5D_t1809983122* ___abilityIDs_31;
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
	Int32U5BU5D_t1809983122* ___bullets_49;
	// System.Collections.Generic.List`1<ItemData> GameBehavior::inventoryItems
	List_1_t2038637174 * ___inventoryItems_50;
	// System.Single GameBehavior::timer
	float ___timer_51;
	// System.Single GameBehavior::timeToEnergy
	float ___timeToEnergy_52;
	// System.DateTime GameBehavior::lastDateTime
	DateTime_t339033936  ___lastDateTime_53;
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

public:
	inline static int32_t get_offset_of_hordeScoreBoardId_2() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___hordeScoreBoardId_2)); }
	inline String_t* get_hordeScoreBoardId_2() const { return ___hordeScoreBoardId_2; }
	inline String_t** get_address_of_hordeScoreBoardId_2() { return &___hordeScoreBoardId_2; }
	inline void set_hordeScoreBoardId_2(String_t* value)
	{
		___hordeScoreBoardId_2 = value;
		Il2CppCodeGenWriteBarrier(&___hordeScoreBoardId_2, value);
	}

	inline static int32_t get_offset_of_knifel100Id_3() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___knifel100Id_3)); }
	inline String_t* get_knifel100Id_3() const { return ___knifel100Id_3; }
	inline String_t** get_address_of_knifel100Id_3() { return &___knifel100Id_3; }
	inline void set_knifel100Id_3(String_t* value)
	{
		___knifel100Id_3 = value;
		Il2CppCodeGenWriteBarrier(&___knifel100Id_3, value);
	}

	inline static int32_t get_offset_of_knifel500Id_4() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___knifel500Id_4)); }
	inline String_t* get_knifel500Id_4() const { return ___knifel500Id_4; }
	inline String_t** get_address_of_knifel500Id_4() { return &___knifel500Id_4; }
	inline void set_knifel500Id_4(String_t* value)
	{
		___knifel500Id_4 = value;
		Il2CppCodeGenWriteBarrier(&___knifel500Id_4, value);
	}

	inline static int32_t get_offset_of_knifel2000Id_5() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___knifel2000Id_5)); }
	inline String_t* get_knifel2000Id_5() const { return ___knifel2000Id_5; }
	inline String_t** get_address_of_knifel2000Id_5() { return &___knifel2000Id_5; }
	inline void set_knifel2000Id_5(String_t* value)
	{
		___knifel2000Id_5 = value;
		Il2CppCodeGenWriteBarrier(&___knifel2000Id_5, value);
	}

	inline static int32_t get_offset_of_knifel10000Id_6() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___knifel10000Id_6)); }
	inline String_t* get_knifel10000Id_6() const { return ___knifel10000Id_6; }
	inline String_t** get_address_of_knifel10000Id_6() { return &___knifel10000Id_6; }
	inline void set_knifel10000Id_6(String_t* value)
	{
		___knifel10000Id_6 = value;
		Il2CppCodeGenWriteBarrier(&___knifel10000Id_6, value);
	}

	inline static int32_t get_offset_of_horde10Id_7() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___horde10Id_7)); }
	inline String_t* get_horde10Id_7() const { return ___horde10Id_7; }
	inline String_t** get_address_of_horde10Id_7() { return &___horde10Id_7; }
	inline void set_horde10Id_7(String_t* value)
	{
		___horde10Id_7 = value;
		Il2CppCodeGenWriteBarrier(&___horde10Id_7, value);
	}

	inline static int32_t get_offset_of_horde25Id_8() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___horde25Id_8)); }
	inline String_t* get_horde25Id_8() const { return ___horde25Id_8; }
	inline String_t** get_address_of_horde25Id_8() { return &___horde25Id_8; }
	inline void set_horde25Id_8(String_t* value)
	{
		___horde25Id_8 = value;
		Il2CppCodeGenWriteBarrier(&___horde25Id_8, value);
	}

	inline static int32_t get_offset_of_horde50Id_9() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___horde50Id_9)); }
	inline String_t* get_horde50Id_9() const { return ___horde50Id_9; }
	inline String_t** get_address_of_horde50Id_9() { return &___horde50Id_9; }
	inline void set_horde50Id_9(String_t* value)
	{
		___horde50Id_9 = value;
		Il2CppCodeGenWriteBarrier(&___horde50Id_9, value);
	}

	inline static int32_t get_offset_of_horde100Id_10() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___horde100Id_10)); }
	inline String_t* get_horde100Id_10() const { return ___horde100Id_10; }
	inline String_t** get_address_of_horde100Id_10() { return &___horde100Id_10; }
	inline void set_horde100Id_10(String_t* value)
	{
		___horde100Id_10 = value;
		Il2CppCodeGenWriteBarrier(&___horde100Id_10, value);
	}

	inline static int32_t get_offset_of_coins500Id_11() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___coins500Id_11)); }
	inline String_t* get_coins500Id_11() const { return ___coins500Id_11; }
	inline String_t** get_address_of_coins500Id_11() { return &___coins500Id_11; }
	inline void set_coins500Id_11(String_t* value)
	{
		___coins500Id_11 = value;
		Il2CppCodeGenWriteBarrier(&___coins500Id_11, value);
	}

	inline static int32_t get_offset_of_coins1000Id_12() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___coins1000Id_12)); }
	inline String_t* get_coins1000Id_12() const { return ___coins1000Id_12; }
	inline String_t** get_address_of_coins1000Id_12() { return &___coins1000Id_12; }
	inline void set_coins1000Id_12(String_t* value)
	{
		___coins1000Id_12 = value;
		Il2CppCodeGenWriteBarrier(&___coins1000Id_12, value);
	}

	inline static int32_t get_offset_of_coins10000Id_13() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___coins10000Id_13)); }
	inline String_t* get_coins10000Id_13() const { return ___coins10000Id_13; }
	inline String_t** get_address_of_coins10000Id_13() { return &___coins10000Id_13; }
	inline void set_coins10000Id_13(String_t* value)
	{
		___coins10000Id_13 = value;
		Il2CppCodeGenWriteBarrier(&___coins10000Id_13, value);
	}

	inline static int32_t get_offset_of_coins100000Id_14() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___coins100000Id_14)); }
	inline String_t* get_coins100000Id_14() const { return ___coins100000Id_14; }
	inline String_t** get_address_of_coins100000Id_14() { return &___coins100000Id_14; }
	inline void set_coins100000Id_14(String_t* value)
	{
		___coins100000Id_14 = value;
		Il2CppCodeGenWriteBarrier(&___coins100000Id_14, value);
	}

	inline static int32_t get_offset_of_agilityHighId_15() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___agilityHighId_15)); }
	inline String_t* get_agilityHighId_15() const { return ___agilityHighId_15; }
	inline String_t** get_address_of_agilityHighId_15() { return &___agilityHighId_15; }
	inline void set_agilityHighId_15(String_t* value)
	{
		___agilityHighId_15 = value;
		Il2CppCodeGenWriteBarrier(&___agilityHighId_15, value);
	}

	inline static int32_t get_offset_of_strenghtyHighId_16() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___strenghtyHighId_16)); }
	inline String_t* get_strenghtyHighId_16() const { return ___strenghtyHighId_16; }
	inline String_t** get_address_of_strenghtyHighId_16() { return &___strenghtyHighId_16; }
	inline void set_strenghtyHighId_16(String_t* value)
	{
		___strenghtyHighId_16 = value;
		Il2CppCodeGenWriteBarrier(&___strenghtyHighId_16, value);
	}

	inline static int32_t get_offset_of_inteligenceHighId_17() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___inteligenceHighId_17)); }
	inline String_t* get_inteligenceHighId_17() const { return ___inteligenceHighId_17; }
	inline String_t** get_address_of_inteligenceHighId_17() { return &___inteligenceHighId_17; }
	inline void set_inteligenceHighId_17(String_t* value)
	{
		___inteligenceHighId_17 = value;
		Il2CppCodeGenWriteBarrier(&___inteligenceHighId_17, value);
	}

	inline static int32_t get_offset_of_vitalityHighId_18() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___vitalityHighId_18)); }
	inline String_t* get_vitalityHighId_18() const { return ___vitalityHighId_18; }
	inline String_t** get_address_of_vitalityHighId_18() { return &___vitalityHighId_18; }
	inline void set_vitalityHighId_18(String_t* value)
	{
		___vitalityHighId_18 = value;
		Il2CppCodeGenWriteBarrier(&___vitalityHighId_18, value);
	}

	inline static int32_t get_offset_of_death10Id_19() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___death10Id_19)); }
	inline String_t* get_death10Id_19() const { return ___death10Id_19; }
	inline String_t** get_address_of_death10Id_19() { return &___death10Id_19; }
	inline void set_death10Id_19(String_t* value)
	{
		___death10Id_19 = value;
		Il2CppCodeGenWriteBarrier(&___death10Id_19, value);
	}

	inline static int32_t get_offset_of_death100Id_20() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___death100Id_20)); }
	inline String_t* get_death100Id_20() const { return ___death100Id_20; }
	inline String_t** get_address_of_death100Id_20() { return &___death100Id_20; }
	inline void set_death100Id_20(String_t* value)
	{
		___death100Id_20 = value;
		Il2CppCodeGenWriteBarrier(&___death100Id_20, value);
	}

	inline static int32_t get_offset_of_death1000Id_21() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___death1000Id_21)); }
	inline String_t* get_death1000Id_21() const { return ___death1000Id_21; }
	inline String_t** get_address_of_death1000Id_21() { return &___death1000Id_21; }
	inline void set_death1000Id_21(String_t* value)
	{
		___death1000Id_21 = value;
		Il2CppCodeGenWriteBarrier(&___death1000Id_21, value);
	}

	inline static int32_t get_offset_of_death10000Id_22() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___death10000Id_22)); }
	inline String_t* get_death10000Id_22() const { return ___death10000Id_22; }
	inline String_t** get_address_of_death10000Id_22() { return &___death10000Id_22; }
	inline void set_death10000Id_22(String_t* value)
	{
		___death10000Id_22 = value;
		Il2CppCodeGenWriteBarrier(&___death10000Id_22, value);
	}

	inline static int32_t get_offset_of_ammo250Id_23() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___ammo250Id_23)); }
	inline String_t* get_ammo250Id_23() const { return ___ammo250Id_23; }
	inline String_t** get_address_of_ammo250Id_23() { return &___ammo250Id_23; }
	inline void set_ammo250Id_23(String_t* value)
	{
		___ammo250Id_23 = value;
		Il2CppCodeGenWriteBarrier(&___ammo250Id_23, value);
	}

	inline static int32_t get_offset_of_ammo1000Id_24() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___ammo1000Id_24)); }
	inline String_t* get_ammo1000Id_24() const { return ___ammo1000Id_24; }
	inline String_t** get_address_of_ammo1000Id_24() { return &___ammo1000Id_24; }
	inline void set_ammo1000Id_24(String_t* value)
	{
		___ammo1000Id_24 = value;
		Il2CppCodeGenWriteBarrier(&___ammo1000Id_24, value);
	}

	inline static int32_t get_offset_of_ammo10000Id_25() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___ammo10000Id_25)); }
	inline String_t* get_ammo10000Id_25() const { return ___ammo10000Id_25; }
	inline String_t** get_address_of_ammo10000Id_25() { return &___ammo10000Id_25; }
	inline void set_ammo10000Id_25(String_t* value)
	{
		___ammo10000Id_25 = value;
		Il2CppCodeGenWriteBarrier(&___ammo10000Id_25, value);
	}

	inline static int32_t get_offset_of_ammo100000Id_26() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___ammo100000Id_26)); }
	inline String_t* get_ammo100000Id_26() const { return ___ammo100000Id_26; }
	inline String_t** get_address_of_ammo100000Id_26() { return &___ammo100000Id_26; }
	inline void set_ammo100000Id_26(String_t* value)
	{
		___ammo100000Id_26 = value;
		Il2CppCodeGenWriteBarrier(&___ammo100000Id_26, value);
	}

	inline static int32_t get_offset_of_submachineAchievId_27() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___submachineAchievId_27)); }
	inline String_t* get_submachineAchievId_27() const { return ___submachineAchievId_27; }
	inline String_t** get_address_of_submachineAchievId_27() { return &___submachineAchievId_27; }
	inline void set_submachineAchievId_27(String_t* value)
	{
		___submachineAchievId_27 = value;
		Il2CppCodeGenWriteBarrier(&___submachineAchievId_27, value);
	}

	inline static int32_t get_offset_of_shotgunAchievId_28() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___shotgunAchievId_28)); }
	inline String_t* get_shotgunAchievId_28() const { return ___shotgunAchievId_28; }
	inline String_t** get_address_of_shotgunAchievId_28() { return &___shotgunAchievId_28; }
	inline void set_shotgunAchievId_28(String_t* value)
	{
		___shotgunAchievId_28 = value;
		Il2CppCodeGenWriteBarrier(&___shotgunAchievId_28, value);
	}

	inline static int32_t get_offset_of_loadingSound_29() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___loadingSound_29)); }
	inline bool get_loadingSound_29() const { return ___loadingSound_29; }
	inline bool* get_address_of_loadingSound_29() { return &___loadingSound_29; }
	inline void set_loadingSound_29(bool value)
	{
		___loadingSound_29 = value;
	}

	inline static int32_t get_offset_of_inventory_30() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___inventory_30)); }
	inline Int32U5BU5D_t1809983122* get_inventory_30() const { return ___inventory_30; }
	inline Int32U5BU5D_t1809983122** get_address_of_inventory_30() { return &___inventory_30; }
	inline void set_inventory_30(Int32U5BU5D_t1809983122* value)
	{
		___inventory_30 = value;
		Il2CppCodeGenWriteBarrier(&___inventory_30, value);
	}

	inline static int32_t get_offset_of_abilityIDs_31() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___abilityIDs_31)); }
	inline Int32U5BU5D_t1809983122* get_abilityIDs_31() const { return ___abilityIDs_31; }
	inline Int32U5BU5D_t1809983122** get_address_of_abilityIDs_31() { return &___abilityIDs_31; }
	inline void set_abilityIDs_31(Int32U5BU5D_t1809983122* value)
	{
		___abilityIDs_31 = value;
		Il2CppCodeGenWriteBarrier(&___abilityIDs_31, value);
	}

	inline static int32_t get_offset_of_abilityIndex_32() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___abilityIndex_32)); }
	inline int32_t get_abilityIndex_32() const { return ___abilityIndex_32; }
	inline int32_t* get_address_of_abilityIndex_32() { return &___abilityIndex_32; }
	inline void set_abilityIndex_32(int32_t value)
	{
		___abilityIndex_32 = value;
	}

	inline static int32_t get_offset_of_levelingUp_33() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___levelingUp_33)); }
	inline bool get_levelingUp_33() const { return ___levelingUp_33; }
	inline bool* get_address_of_levelingUp_33() { return &___levelingUp_33; }
	inline void set_levelingUp_33(bool value)
	{
		___levelingUp_33 = value;
	}

	inline static int32_t get_offset_of_levelsUp_34() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___levelsUp_34)); }
	inline int32_t get_levelsUp_34() const { return ___levelsUp_34; }
	inline int32_t* get_address_of_levelsUp_34() { return &___levelsUp_34; }
	inline void set_levelsUp_34(int32_t value)
	{
		___levelsUp_34 = value;
	}

	inline static int32_t get_offset_of_pause_35() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___pause_35)); }
	inline bool get_pause_35() const { return ___pause_35; }
	inline bool* get_address_of_pause_35() { return &___pause_35; }
	inline void set_pause_35(bool value)
	{
		___pause_35 = value;
	}

	inline static int32_t get_offset_of_teste_36() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___teste_36)); }
	inline bool get_teste_36() const { return ___teste_36; }
	inline bool* get_address_of_teste_36() { return &___teste_36; }
	inline void set_teste_36(bool value)
	{
		___teste_36 = value;
	}

	inline static int32_t get_offset_of_experience_37() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___experience_37)); }
	inline float get_experience_37() const { return ___experience_37; }
	inline float* get_address_of_experience_37() { return &___experience_37; }
	inline void set_experience_37(float value)
	{
		___experience_37 = value;
	}

	inline static int32_t get_offset_of_neededExperience_38() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___neededExperience_38)); }
	inline float get_neededExperience_38() const { return ___neededExperience_38; }
	inline float* get_address_of_neededExperience_38() { return &___neededExperience_38; }
	inline void set_neededExperience_38(float value)
	{
		___neededExperience_38 = value;
	}

	inline static int32_t get_offset_of_life_39() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___life_39)); }
	inline int32_t get_life_39() const { return ___life_39; }
	inline int32_t* get_address_of_life_39() { return &___life_39; }
	inline void set_life_39(int32_t value)
	{
		___life_39 = value;
	}

	inline static int32_t get_offset_of_maxLife_40() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___maxLife_40)); }
	inline int32_t get_maxLife_40() const { return ___maxLife_40; }
	inline int32_t* get_address_of_maxLife_40() { return &___maxLife_40; }
	inline void set_maxLife_40(int32_t value)
	{
		___maxLife_40 = value;
	}

	inline static int32_t get_offset_of_energy_41() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___energy_41)); }
	inline int32_t get_energy_41() const { return ___energy_41; }
	inline int32_t* get_address_of_energy_41() { return &___energy_41; }
	inline void set_energy_41(int32_t value)
	{
		___energy_41 = value;
	}

	inline static int32_t get_offset_of_expendPoints_42() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___expendPoints_42)); }
	inline int32_t get_expendPoints_42() const { return ___expendPoints_42; }
	inline int32_t* get_address_of_expendPoints_42() { return &___expendPoints_42; }
	inline void set_expendPoints_42(int32_t value)
	{
		___expendPoints_42 = value;
	}

	inline static int32_t get_offset_of_strength_43() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___strength_43)); }
	inline int32_t get_strength_43() const { return ___strength_43; }
	inline int32_t* get_address_of_strength_43() { return &___strength_43; }
	inline void set_strength_43(int32_t value)
	{
		___strength_43 = value;
	}

	inline static int32_t get_offset_of_agility_44() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___agility_44)); }
	inline int32_t get_agility_44() const { return ___agility_44; }
	inline int32_t* get_address_of_agility_44() { return &___agility_44; }
	inline void set_agility_44(int32_t value)
	{
		___agility_44 = value;
	}

	inline static int32_t get_offset_of_inteligence_45() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___inteligence_45)); }
	inline int32_t get_inteligence_45() const { return ___inteligence_45; }
	inline int32_t* get_address_of_inteligence_45() { return &___inteligence_45; }
	inline void set_inteligence_45(int32_t value)
	{
		___inteligence_45 = value;
	}

	inline static int32_t get_offset_of_vitality_46() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___vitality_46)); }
	inline int32_t get_vitality_46() const { return ___vitality_46; }
	inline int32_t* get_address_of_vitality_46() { return &___vitality_46; }
	inline void set_vitality_46(int32_t value)
	{
		___vitality_46 = value;
	}

	inline static int32_t get_offset_of_previousScene_47() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___previousScene_47)); }
	inline int32_t get_previousScene_47() const { return ___previousScene_47; }
	inline int32_t* get_address_of_previousScene_47() { return &___previousScene_47; }
	inline void set_previousScene_47(int32_t value)
	{
		___previousScene_47 = value;
	}

	inline static int32_t get_offset_of_selectedWeapon_48() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___selectedWeapon_48)); }
	inline int32_t get_selectedWeapon_48() const { return ___selectedWeapon_48; }
	inline int32_t* get_address_of_selectedWeapon_48() { return &___selectedWeapon_48; }
	inline void set_selectedWeapon_48(int32_t value)
	{
		___selectedWeapon_48 = value;
	}

	inline static int32_t get_offset_of_bullets_49() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___bullets_49)); }
	inline Int32U5BU5D_t1809983122* get_bullets_49() const { return ___bullets_49; }
	inline Int32U5BU5D_t1809983122** get_address_of_bullets_49() { return &___bullets_49; }
	inline void set_bullets_49(Int32U5BU5D_t1809983122* value)
	{
		___bullets_49 = value;
		Il2CppCodeGenWriteBarrier(&___bullets_49, value);
	}

	inline static int32_t get_offset_of_inventoryItems_50() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___inventoryItems_50)); }
	inline List_1_t2038637174 * get_inventoryItems_50() const { return ___inventoryItems_50; }
	inline List_1_t2038637174 ** get_address_of_inventoryItems_50() { return &___inventoryItems_50; }
	inline void set_inventoryItems_50(List_1_t2038637174 * value)
	{
		___inventoryItems_50 = value;
		Il2CppCodeGenWriteBarrier(&___inventoryItems_50, value);
	}

	inline static int32_t get_offset_of_timer_51() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___timer_51)); }
	inline float get_timer_51() const { return ___timer_51; }
	inline float* get_address_of_timer_51() { return &___timer_51; }
	inline void set_timer_51(float value)
	{
		___timer_51 = value;
	}

	inline static int32_t get_offset_of_timeToEnergy_52() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___timeToEnergy_52)); }
	inline float get_timeToEnergy_52() const { return ___timeToEnergy_52; }
	inline float* get_address_of_timeToEnergy_52() { return &___timeToEnergy_52; }
	inline void set_timeToEnergy_52(float value)
	{
		___timeToEnergy_52 = value;
	}

	inline static int32_t get_offset_of_lastDateTime_53() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___lastDateTime_53)); }
	inline DateTime_t339033936  get_lastDateTime_53() const { return ___lastDateTime_53; }
	inline DateTime_t339033936 * get_address_of_lastDateTime_53() { return &___lastDateTime_53; }
	inline void set_lastDateTime_53(DateTime_t339033936  value)
	{
		___lastDateTime_53 = value;
	}

	inline static int32_t get_offset_of_earnedCoins_54() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___earnedCoins_54)); }
	inline int32_t get_earnedCoins_54() const { return ___earnedCoins_54; }
	inline int32_t* get_address_of_earnedCoins_54() { return &___earnedCoins_54; }
	inline void set_earnedCoins_54(int32_t value)
	{
		___earnedCoins_54 = value;
	}

	inline static int32_t get_offset_of_enemiesKilled_55() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___enemiesKilled_55)); }
	inline int32_t get_enemiesKilled_55() const { return ___enemiesKilled_55; }
	inline int32_t* get_address_of_enemiesKilled_55() { return &___enemiesKilled_55; }
	inline void set_enemiesKilled_55(int32_t value)
	{
		___enemiesKilled_55 = value;
	}

	inline static int32_t get_offset_of_totalEnemies_56() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___totalEnemies_56)); }
	inline int32_t get_totalEnemies_56() const { return ___totalEnemies_56; }
	inline int32_t* get_address_of_totalEnemies_56() { return &___totalEnemies_56; }
	inline void set_totalEnemies_56(int32_t value)
	{
		___totalEnemies_56 = value;
	}

	inline static int32_t get_offset_of_coins_57() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___coins_57)); }
	inline int32_t get_coins_57() const { return ___coins_57; }
	inline int32_t* get_address_of_coins_57() { return &___coins_57; }
	inline void set_coins_57(int32_t value)
	{
		___coins_57 = value;
	}

	inline static int32_t get_offset_of_totalCoins_58() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___totalCoins_58)); }
	inline int32_t get_totalCoins_58() const { return ___totalCoins_58; }
	inline int32_t* get_address_of_totalCoins_58() { return &___totalCoins_58; }
	inline void set_totalCoins_58(int32_t value)
	{
		___totalCoins_58 = value;
	}

	inline static int32_t get_offset_of_maxHordeKills_59() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___maxHordeKills_59)); }
	inline int32_t get_maxHordeKills_59() const { return ___maxHordeKills_59; }
	inline int32_t* get_address_of_maxHordeKills_59() { return &___maxHordeKills_59; }
	inline void set_maxHordeKills_59(int32_t value)
	{
		___maxHordeKills_59 = value;
	}

	inline static int32_t get_offset_of_currentHordeKills_60() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___currentHordeKills_60)); }
	inline int32_t get_currentHordeKills_60() const { return ___currentHordeKills_60; }
	inline int32_t* get_address_of_currentHordeKills_60() { return &___currentHordeKills_60; }
	inline void set_currentHordeKills_60(int32_t value)
	{
		___currentHordeKills_60 = value;
	}

	inline static int32_t get_offset_of_ammoSpent_61() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___ammoSpent_61)); }
	inline int32_t get_ammoSpent_61() const { return ___ammoSpent_61; }
	inline int32_t* get_address_of_ammoSpent_61() { return &___ammoSpent_61; }
	inline void set_ammoSpent_61(int32_t value)
	{
		___ammoSpent_61 = value;
	}

	inline static int32_t get_offset_of_totalExperience_62() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___totalExperience_62)); }
	inline float get_totalExperience_62() const { return ___totalExperience_62; }
	inline float* get_address_of_totalExperience_62() { return &___totalExperience_62; }
	inline void set_totalExperience_62(float value)
	{
		___totalExperience_62 = value;
	}

	inline static int32_t get_offset_of_knifeKills_63() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___knifeKills_63)); }
	inline int32_t get_knifeKills_63() const { return ___knifeKills_63; }
	inline int32_t* get_address_of_knifeKills_63() { return &___knifeKills_63; }
	inline void set_knifeKills_63(int32_t value)
	{
		___knifeKills_63 = value;
	}

	inline static int32_t get_offset_of_totalDeaths_64() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___totalDeaths_64)); }
	inline int32_t get_totalDeaths_64() const { return ___totalDeaths_64; }
	inline int32_t* get_address_of_totalDeaths_64() { return &___totalDeaths_64; }
	inline void set_totalDeaths_64(int32_t value)
	{
		___totalDeaths_64 = value;
	}

	inline static int32_t get_offset_of_totalEnemiesKilled_65() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___totalEnemiesKilled_65)); }
	inline int32_t get_totalEnemiesKilled_65() const { return ___totalEnemiesKilled_65; }
	inline int32_t* get_address_of_totalEnemiesKilled_65() { return &___totalEnemiesKilled_65; }
	inline void set_totalEnemiesKilled_65(int32_t value)
	{
		___totalEnemiesKilled_65 = value;
	}

	inline static int32_t get_offset_of_showTutorial_66() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___showTutorial_66)); }
	inline bool get_showTutorial_66() const { return ___showTutorial_66; }
	inline bool* get_address_of_showTutorial_66() { return &___showTutorial_66; }
	inline void set_showTutorial_66(bool value)
	{
		___showTutorial_66 = value;
	}

	inline static int32_t get_offset_of_showMap_67() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___showMap_67)); }
	inline bool get_showMap_67() const { return ___showMap_67; }
	inline bool* get_address_of_showMap_67() { return &___showMap_67; }
	inline void set_showMap_67(bool value)
	{
		___showMap_67 = value;
	}

	inline static int32_t get_offset_of_showAttributes_68() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___showAttributes_68)); }
	inline bool get_showAttributes_68() const { return ___showAttributes_68; }
	inline bool* get_address_of_showAttributes_68() { return &___showAttributes_68; }
	inline void set_showAttributes_68(bool value)
	{
		___showAttributes_68 = value;
	}

	inline static int32_t get_offset_of_showStore_69() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___showStore_69)); }
	inline bool get_showStore_69() const { return ___showStore_69; }
	inline bool* get_address_of_showStore_69() { return &___showStore_69; }
	inline void set_showStore_69(bool value)
	{
		___showStore_69 = value;
	}

	inline static int32_t get_offset_of_currentMission_70() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___currentMission_70)); }
	inline int32_t get_currentMission_70() const { return ___currentMission_70; }
	inline int32_t* get_address_of_currentMission_70() { return &___currentMission_70; }
	inline void set_currentMission_70(int32_t value)
	{
		___currentMission_70 = value;
	}

	inline static int32_t get_offset_of_toLoadScene_71() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___toLoadScene_71)); }
	inline String_t* get_toLoadScene_71() const { return ___toLoadScene_71; }
	inline String_t** get_address_of_toLoadScene_71() { return &___toLoadScene_71; }
	inline void set_toLoadScene_71(String_t* value)
	{
		___toLoadScene_71 = value;
		Il2CppCodeGenWriteBarrier(&___toLoadScene_71, value);
	}

	inline static int32_t get_offset_of_goingToMission_72() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___goingToMission_72)); }
	inline bool get_goingToMission_72() const { return ___goingToMission_72; }
	inline bool* get_address_of_goingToMission_72() { return &___goingToMission_72; }
	inline void set_goingToMission_72(bool value)
	{
		___goingToMission_72 = value;
	}

	inline static int32_t get_offset_of_selectedMission_73() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596, ___selectedMission_73)); }
	inline int32_t get_selectedMission_73() const { return ___selectedMission_73; }
	inline int32_t* get_address_of_selectedMission_73() { return &___selectedMission_73; }
	inline void set_selectedMission_73(int32_t value)
	{
		___selectedMission_73 = value;
	}
};

struct GameBehavior_t1830462596_StaticFields
{
public:
	// System.Action`1<System.Boolean> GameBehavior::<>f__am$cache48
	Action_1_t359458046 * ___U3CU3Ef__amU24cache48_74;
	// System.Action`1<System.Boolean> GameBehavior::<>f__am$cache49
	Action_1_t359458046 * ___U3CU3Ef__amU24cache49_75;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache48_74() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596_StaticFields, ___U3CU3Ef__amU24cache48_74)); }
	inline Action_1_t359458046 * get_U3CU3Ef__amU24cache48_74() const { return ___U3CU3Ef__amU24cache48_74; }
	inline Action_1_t359458046 ** get_address_of_U3CU3Ef__amU24cache48_74() { return &___U3CU3Ef__amU24cache48_74; }
	inline void set_U3CU3Ef__amU24cache48_74(Action_1_t359458046 * value)
	{
		___U3CU3Ef__amU24cache48_74 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache48_74, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache49_75() { return static_cast<int32_t>(offsetof(GameBehavior_t1830462596_StaticFields, ___U3CU3Ef__amU24cache49_75)); }
	inline Action_1_t359458046 * get_U3CU3Ef__amU24cache49_75() const { return ___U3CU3Ef__amU24cache49_75; }
	inline Action_1_t359458046 ** get_address_of_U3CU3Ef__amU24cache49_75() { return &___U3CU3Ef__amU24cache49_75; }
	inline void set_U3CU3Ef__amU24cache49_75(Action_1_t359458046 * value)
	{
		___U3CU3Ef__amU24cache49_75 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache49_75, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
