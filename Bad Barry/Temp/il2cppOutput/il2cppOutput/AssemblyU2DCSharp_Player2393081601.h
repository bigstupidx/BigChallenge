#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Animator
struct Animator_t792326996;
// HUDGame
struct HUDGame_t1974244713;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t2393081601  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Player::life
	int32_t ___life_2;
	// System.Int32 Player::maxLife
	int32_t ___maxLife_3;
	// System.Int32 Player::armor
	int32_t ___armor_4;
	// System.Single Player::speed
	float ___speed_5;
	// System.Int32 Player::baseDamage
	int32_t ___baseDamage_6;
	// System.Int32 Player::direction
	int32_t ___direction_7;
	// System.Int32 Player::shootDirection
	int32_t ___shootDirection_8;
	// UnityEngine.GameObject Player::weapon
	GameObject_t4012695102 * ___weapon_9;
	// UnityEngine.Animator Player::bothAnimator
	Animator_t792326996 * ___bothAnimator_10;
	// UnityEngine.Animator Player::torsoAnimator
	Animator_t792326996 * ___torsoAnimator_11;
	// UnityEngine.Animator Player::legAnimator
	Animator_t792326996 * ___legAnimator_12;
	// System.Boolean Player::dead
	bool ___dead_13;
	// System.Boolean Player::isShooting
	bool ___isShooting_14;
	// System.Single Player::fireRate
	float ___fireRate_15;
	// System.Single Player::knifeRate
	float ___knifeRate_16;
	// System.Single Player::time
	float ___time_17;
	// System.Single Player::timeToKnife
	float ___timeToKnife_18;
	// System.Single Player::experience
	float ___experience_19;
	// System.Single Player::neededExperience
	float ___neededExperience_20;
	// System.Int32 Player::lvl
	int32_t ___lvl_21;
	// HUDGame Player::hudGame
	HUDGame_t1974244713 * ___hudGame_22;
	// UnityEngine.GameObject Player::HUD
	GameObject_t4012695102 * ___HUD_23;
	// System.Int32 Player::strength
	int32_t ___strength_24;
	// System.Int32 Player::agility
	int32_t ___agility_25;
	// System.Int32 Player::inteligence
	int32_t ___inteligence_26;
	// System.Int32 Player::vitality
	int32_t ___vitality_27;
	// UnityEngine.GameObject Player::knifeRange
	GameObject_t4012695102 * ___knifeRange_28;
	// UnityEngine.GameObject Player::canvasDeath
	GameObject_t4012695102 * ___canvasDeath_29;
	// UnityEngine.GameObject Player::infinityImage
	GameObject_t4012695102 * ___infinityImage_30;
	// System.DateTime Player::lastDateTime
	DateTime_t339033936  ___lastDateTime_31;
	// System.Boolean Player::skillActivate
	bool ___skillActivate_32;
	// System.Single Player::timeToStopSkill
	float ___timeToStopSkill_33;
	// System.Single Player::reloadingTime
	float ___reloadingTime_34;
	// System.Single Player::skillTimer
	float ___skillTimer_35;
	// System.Boolean Player::reloading
	bool ___reloading_36;
	// System.Single Player::reloadingTimer
	float ___reloadingTimer_37;
	// System.DateTime Player::currentTime
	DateTime_t339033936  ___currentTime_38;
	// System.Single Player::extraTime
	float ___extraTime_39;
	// System.Int32 Player::mission
	int32_t ___mission_40;

public:
	inline static int32_t get_offset_of_life_2() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___life_2)); }
	inline int32_t get_life_2() const { return ___life_2; }
	inline int32_t* get_address_of_life_2() { return &___life_2; }
	inline void set_life_2(int32_t value)
	{
		___life_2 = value;
	}

	inline static int32_t get_offset_of_maxLife_3() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___maxLife_3)); }
	inline int32_t get_maxLife_3() const { return ___maxLife_3; }
	inline int32_t* get_address_of_maxLife_3() { return &___maxLife_3; }
	inline void set_maxLife_3(int32_t value)
	{
		___maxLife_3 = value;
	}

	inline static int32_t get_offset_of_armor_4() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___armor_4)); }
	inline int32_t get_armor_4() const { return ___armor_4; }
	inline int32_t* get_address_of_armor_4() { return &___armor_4; }
	inline void set_armor_4(int32_t value)
	{
		___armor_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_baseDamage_6() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___baseDamage_6)); }
	inline int32_t get_baseDamage_6() const { return ___baseDamage_6; }
	inline int32_t* get_address_of_baseDamage_6() { return &___baseDamage_6; }
	inline void set_baseDamage_6(int32_t value)
	{
		___baseDamage_6 = value;
	}

	inline static int32_t get_offset_of_direction_7() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___direction_7)); }
	inline int32_t get_direction_7() const { return ___direction_7; }
	inline int32_t* get_address_of_direction_7() { return &___direction_7; }
	inline void set_direction_7(int32_t value)
	{
		___direction_7 = value;
	}

	inline static int32_t get_offset_of_shootDirection_8() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___shootDirection_8)); }
	inline int32_t get_shootDirection_8() const { return ___shootDirection_8; }
	inline int32_t* get_address_of_shootDirection_8() { return &___shootDirection_8; }
	inline void set_shootDirection_8(int32_t value)
	{
		___shootDirection_8 = value;
	}

	inline static int32_t get_offset_of_weapon_9() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___weapon_9)); }
	inline GameObject_t4012695102 * get_weapon_9() const { return ___weapon_9; }
	inline GameObject_t4012695102 ** get_address_of_weapon_9() { return &___weapon_9; }
	inline void set_weapon_9(GameObject_t4012695102 * value)
	{
		___weapon_9 = value;
		Il2CppCodeGenWriteBarrier(&___weapon_9, value);
	}

	inline static int32_t get_offset_of_bothAnimator_10() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___bothAnimator_10)); }
	inline Animator_t792326996 * get_bothAnimator_10() const { return ___bothAnimator_10; }
	inline Animator_t792326996 ** get_address_of_bothAnimator_10() { return &___bothAnimator_10; }
	inline void set_bothAnimator_10(Animator_t792326996 * value)
	{
		___bothAnimator_10 = value;
		Il2CppCodeGenWriteBarrier(&___bothAnimator_10, value);
	}

	inline static int32_t get_offset_of_torsoAnimator_11() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___torsoAnimator_11)); }
	inline Animator_t792326996 * get_torsoAnimator_11() const { return ___torsoAnimator_11; }
	inline Animator_t792326996 ** get_address_of_torsoAnimator_11() { return &___torsoAnimator_11; }
	inline void set_torsoAnimator_11(Animator_t792326996 * value)
	{
		___torsoAnimator_11 = value;
		Il2CppCodeGenWriteBarrier(&___torsoAnimator_11, value);
	}

	inline static int32_t get_offset_of_legAnimator_12() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___legAnimator_12)); }
	inline Animator_t792326996 * get_legAnimator_12() const { return ___legAnimator_12; }
	inline Animator_t792326996 ** get_address_of_legAnimator_12() { return &___legAnimator_12; }
	inline void set_legAnimator_12(Animator_t792326996 * value)
	{
		___legAnimator_12 = value;
		Il2CppCodeGenWriteBarrier(&___legAnimator_12, value);
	}

	inline static int32_t get_offset_of_dead_13() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___dead_13)); }
	inline bool get_dead_13() const { return ___dead_13; }
	inline bool* get_address_of_dead_13() { return &___dead_13; }
	inline void set_dead_13(bool value)
	{
		___dead_13 = value;
	}

	inline static int32_t get_offset_of_isShooting_14() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___isShooting_14)); }
	inline bool get_isShooting_14() const { return ___isShooting_14; }
	inline bool* get_address_of_isShooting_14() { return &___isShooting_14; }
	inline void set_isShooting_14(bool value)
	{
		___isShooting_14 = value;
	}

	inline static int32_t get_offset_of_fireRate_15() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___fireRate_15)); }
	inline float get_fireRate_15() const { return ___fireRate_15; }
	inline float* get_address_of_fireRate_15() { return &___fireRate_15; }
	inline void set_fireRate_15(float value)
	{
		___fireRate_15 = value;
	}

	inline static int32_t get_offset_of_knifeRate_16() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___knifeRate_16)); }
	inline float get_knifeRate_16() const { return ___knifeRate_16; }
	inline float* get_address_of_knifeRate_16() { return &___knifeRate_16; }
	inline void set_knifeRate_16(float value)
	{
		___knifeRate_16 = value;
	}

	inline static int32_t get_offset_of_time_17() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___time_17)); }
	inline float get_time_17() const { return ___time_17; }
	inline float* get_address_of_time_17() { return &___time_17; }
	inline void set_time_17(float value)
	{
		___time_17 = value;
	}

	inline static int32_t get_offset_of_timeToKnife_18() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___timeToKnife_18)); }
	inline float get_timeToKnife_18() const { return ___timeToKnife_18; }
	inline float* get_address_of_timeToKnife_18() { return &___timeToKnife_18; }
	inline void set_timeToKnife_18(float value)
	{
		___timeToKnife_18 = value;
	}

	inline static int32_t get_offset_of_experience_19() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___experience_19)); }
	inline float get_experience_19() const { return ___experience_19; }
	inline float* get_address_of_experience_19() { return &___experience_19; }
	inline void set_experience_19(float value)
	{
		___experience_19 = value;
	}

	inline static int32_t get_offset_of_neededExperience_20() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___neededExperience_20)); }
	inline float get_neededExperience_20() const { return ___neededExperience_20; }
	inline float* get_address_of_neededExperience_20() { return &___neededExperience_20; }
	inline void set_neededExperience_20(float value)
	{
		___neededExperience_20 = value;
	}

	inline static int32_t get_offset_of_lvl_21() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___lvl_21)); }
	inline int32_t get_lvl_21() const { return ___lvl_21; }
	inline int32_t* get_address_of_lvl_21() { return &___lvl_21; }
	inline void set_lvl_21(int32_t value)
	{
		___lvl_21 = value;
	}

	inline static int32_t get_offset_of_hudGame_22() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___hudGame_22)); }
	inline HUDGame_t1974244713 * get_hudGame_22() const { return ___hudGame_22; }
	inline HUDGame_t1974244713 ** get_address_of_hudGame_22() { return &___hudGame_22; }
	inline void set_hudGame_22(HUDGame_t1974244713 * value)
	{
		___hudGame_22 = value;
		Il2CppCodeGenWriteBarrier(&___hudGame_22, value);
	}

	inline static int32_t get_offset_of_HUD_23() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___HUD_23)); }
	inline GameObject_t4012695102 * get_HUD_23() const { return ___HUD_23; }
	inline GameObject_t4012695102 ** get_address_of_HUD_23() { return &___HUD_23; }
	inline void set_HUD_23(GameObject_t4012695102 * value)
	{
		___HUD_23 = value;
		Il2CppCodeGenWriteBarrier(&___HUD_23, value);
	}

	inline static int32_t get_offset_of_strength_24() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___strength_24)); }
	inline int32_t get_strength_24() const { return ___strength_24; }
	inline int32_t* get_address_of_strength_24() { return &___strength_24; }
	inline void set_strength_24(int32_t value)
	{
		___strength_24 = value;
	}

	inline static int32_t get_offset_of_agility_25() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___agility_25)); }
	inline int32_t get_agility_25() const { return ___agility_25; }
	inline int32_t* get_address_of_agility_25() { return &___agility_25; }
	inline void set_agility_25(int32_t value)
	{
		___agility_25 = value;
	}

	inline static int32_t get_offset_of_inteligence_26() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___inteligence_26)); }
	inline int32_t get_inteligence_26() const { return ___inteligence_26; }
	inline int32_t* get_address_of_inteligence_26() { return &___inteligence_26; }
	inline void set_inteligence_26(int32_t value)
	{
		___inteligence_26 = value;
	}

	inline static int32_t get_offset_of_vitality_27() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___vitality_27)); }
	inline int32_t get_vitality_27() const { return ___vitality_27; }
	inline int32_t* get_address_of_vitality_27() { return &___vitality_27; }
	inline void set_vitality_27(int32_t value)
	{
		___vitality_27 = value;
	}

	inline static int32_t get_offset_of_knifeRange_28() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___knifeRange_28)); }
	inline GameObject_t4012695102 * get_knifeRange_28() const { return ___knifeRange_28; }
	inline GameObject_t4012695102 ** get_address_of_knifeRange_28() { return &___knifeRange_28; }
	inline void set_knifeRange_28(GameObject_t4012695102 * value)
	{
		___knifeRange_28 = value;
		Il2CppCodeGenWriteBarrier(&___knifeRange_28, value);
	}

	inline static int32_t get_offset_of_canvasDeath_29() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___canvasDeath_29)); }
	inline GameObject_t4012695102 * get_canvasDeath_29() const { return ___canvasDeath_29; }
	inline GameObject_t4012695102 ** get_address_of_canvasDeath_29() { return &___canvasDeath_29; }
	inline void set_canvasDeath_29(GameObject_t4012695102 * value)
	{
		___canvasDeath_29 = value;
		Il2CppCodeGenWriteBarrier(&___canvasDeath_29, value);
	}

	inline static int32_t get_offset_of_infinityImage_30() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___infinityImage_30)); }
	inline GameObject_t4012695102 * get_infinityImage_30() const { return ___infinityImage_30; }
	inline GameObject_t4012695102 ** get_address_of_infinityImage_30() { return &___infinityImage_30; }
	inline void set_infinityImage_30(GameObject_t4012695102 * value)
	{
		___infinityImage_30 = value;
		Il2CppCodeGenWriteBarrier(&___infinityImage_30, value);
	}

	inline static int32_t get_offset_of_lastDateTime_31() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___lastDateTime_31)); }
	inline DateTime_t339033936  get_lastDateTime_31() const { return ___lastDateTime_31; }
	inline DateTime_t339033936 * get_address_of_lastDateTime_31() { return &___lastDateTime_31; }
	inline void set_lastDateTime_31(DateTime_t339033936  value)
	{
		___lastDateTime_31 = value;
	}

	inline static int32_t get_offset_of_skillActivate_32() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___skillActivate_32)); }
	inline bool get_skillActivate_32() const { return ___skillActivate_32; }
	inline bool* get_address_of_skillActivate_32() { return &___skillActivate_32; }
	inline void set_skillActivate_32(bool value)
	{
		___skillActivate_32 = value;
	}

	inline static int32_t get_offset_of_timeToStopSkill_33() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___timeToStopSkill_33)); }
	inline float get_timeToStopSkill_33() const { return ___timeToStopSkill_33; }
	inline float* get_address_of_timeToStopSkill_33() { return &___timeToStopSkill_33; }
	inline void set_timeToStopSkill_33(float value)
	{
		___timeToStopSkill_33 = value;
	}

	inline static int32_t get_offset_of_reloadingTime_34() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___reloadingTime_34)); }
	inline float get_reloadingTime_34() const { return ___reloadingTime_34; }
	inline float* get_address_of_reloadingTime_34() { return &___reloadingTime_34; }
	inline void set_reloadingTime_34(float value)
	{
		___reloadingTime_34 = value;
	}

	inline static int32_t get_offset_of_skillTimer_35() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___skillTimer_35)); }
	inline float get_skillTimer_35() const { return ___skillTimer_35; }
	inline float* get_address_of_skillTimer_35() { return &___skillTimer_35; }
	inline void set_skillTimer_35(float value)
	{
		___skillTimer_35 = value;
	}

	inline static int32_t get_offset_of_reloading_36() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___reloading_36)); }
	inline bool get_reloading_36() const { return ___reloading_36; }
	inline bool* get_address_of_reloading_36() { return &___reloading_36; }
	inline void set_reloading_36(bool value)
	{
		___reloading_36 = value;
	}

	inline static int32_t get_offset_of_reloadingTimer_37() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___reloadingTimer_37)); }
	inline float get_reloadingTimer_37() const { return ___reloadingTimer_37; }
	inline float* get_address_of_reloadingTimer_37() { return &___reloadingTimer_37; }
	inline void set_reloadingTimer_37(float value)
	{
		___reloadingTimer_37 = value;
	}

	inline static int32_t get_offset_of_currentTime_38() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___currentTime_38)); }
	inline DateTime_t339033936  get_currentTime_38() const { return ___currentTime_38; }
	inline DateTime_t339033936 * get_address_of_currentTime_38() { return &___currentTime_38; }
	inline void set_currentTime_38(DateTime_t339033936  value)
	{
		___currentTime_38 = value;
	}

	inline static int32_t get_offset_of_extraTime_39() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___extraTime_39)); }
	inline float get_extraTime_39() const { return ___extraTime_39; }
	inline float* get_address_of_extraTime_39() { return &___extraTime_39; }
	inline void set_extraTime_39(float value)
	{
		___extraTime_39 = value;
	}

	inline static int32_t get_offset_of_mission_40() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___mission_40)); }
	inline int32_t get_mission_40() const { return ___mission_40; }
	inline int32_t* get_address_of_mission_40() { return &___mission_40; }
	inline void set_mission_40(int32_t value)
	{
		___mission_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
