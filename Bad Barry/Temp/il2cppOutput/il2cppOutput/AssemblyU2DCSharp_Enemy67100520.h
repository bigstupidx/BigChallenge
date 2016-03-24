#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t1830462596;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t67100520  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Enemy::coinsWhenDie
	int32_t ___coinsWhenDie_2;
	// GameBehavior Enemy::behave
	GameBehavior_t1830462596 * ___behave_3;
	// UnityEngine.GameObject[] Enemy::bulletBox
	GameObjectU5BU5D_t3499186955* ___bulletBox_4;
	// System.Int32 Enemy::lvl
	int32_t ___lvl_5;
	// System.Int32 Enemy::life
	int32_t ___life_6;
	// System.Int32 Enemy::baseDamage
	int32_t ___baseDamage_7;
	// System.Int32 Enemy::shootDirection
	int32_t ___shootDirection_8;
	// UnityEngine.GameObject Enemy::weapon
	GameObject_t4012695102 * ___weapon_9;
	// System.Int32 Enemy::selectedWeapon
	int32_t ___selectedWeapon_10;
	// System.Single Enemy::experience
	float ___experience_11;
	// UnityEngine.Animator Enemy::bothAnimator
	Animator_t792326996 * ___bothAnimator_12;
	// UnityEngine.Animator Enemy::torsoAnimator
	Animator_t792326996 * ___torsoAnimator_13;
	// UnityEngine.Animator Enemy::legAnimator
	Animator_t792326996 * ___legAnimator_14;
	// System.Boolean Enemy::isShooting
	bool ___isShooting_15;
	// System.Boolean Enemy::dead
	bool ___dead_16;
	// System.Single Enemy::fireRate
	float ___fireRate_17;
	// System.Single Enemy::time
	float ___time_18;

public:
	inline static int32_t get_offset_of_coinsWhenDie_2() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___coinsWhenDie_2)); }
	inline int32_t get_coinsWhenDie_2() const { return ___coinsWhenDie_2; }
	inline int32_t* get_address_of_coinsWhenDie_2() { return &___coinsWhenDie_2; }
	inline void set_coinsWhenDie_2(int32_t value)
	{
		___coinsWhenDie_2 = value;
	}

	inline static int32_t get_offset_of_behave_3() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___behave_3)); }
	inline GameBehavior_t1830462596 * get_behave_3() const { return ___behave_3; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_3() { return &___behave_3; }
	inline void set_behave_3(GameBehavior_t1830462596 * value)
	{
		___behave_3 = value;
		Il2CppCodeGenWriteBarrier(&___behave_3, value);
	}

	inline static int32_t get_offset_of_bulletBox_4() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___bulletBox_4)); }
	inline GameObjectU5BU5D_t3499186955* get_bulletBox_4() const { return ___bulletBox_4; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_bulletBox_4() { return &___bulletBox_4; }
	inline void set_bulletBox_4(GameObjectU5BU5D_t3499186955* value)
	{
		___bulletBox_4 = value;
		Il2CppCodeGenWriteBarrier(&___bulletBox_4, value);
	}

	inline static int32_t get_offset_of_lvl_5() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___lvl_5)); }
	inline int32_t get_lvl_5() const { return ___lvl_5; }
	inline int32_t* get_address_of_lvl_5() { return &___lvl_5; }
	inline void set_lvl_5(int32_t value)
	{
		___lvl_5 = value;
	}

	inline static int32_t get_offset_of_life_6() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___life_6)); }
	inline int32_t get_life_6() const { return ___life_6; }
	inline int32_t* get_address_of_life_6() { return &___life_6; }
	inline void set_life_6(int32_t value)
	{
		___life_6 = value;
	}

	inline static int32_t get_offset_of_baseDamage_7() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___baseDamage_7)); }
	inline int32_t get_baseDamage_7() const { return ___baseDamage_7; }
	inline int32_t* get_address_of_baseDamage_7() { return &___baseDamage_7; }
	inline void set_baseDamage_7(int32_t value)
	{
		___baseDamage_7 = value;
	}

	inline static int32_t get_offset_of_shootDirection_8() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___shootDirection_8)); }
	inline int32_t get_shootDirection_8() const { return ___shootDirection_8; }
	inline int32_t* get_address_of_shootDirection_8() { return &___shootDirection_8; }
	inline void set_shootDirection_8(int32_t value)
	{
		___shootDirection_8 = value;
	}

	inline static int32_t get_offset_of_weapon_9() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___weapon_9)); }
	inline GameObject_t4012695102 * get_weapon_9() const { return ___weapon_9; }
	inline GameObject_t4012695102 ** get_address_of_weapon_9() { return &___weapon_9; }
	inline void set_weapon_9(GameObject_t4012695102 * value)
	{
		___weapon_9 = value;
		Il2CppCodeGenWriteBarrier(&___weapon_9, value);
	}

	inline static int32_t get_offset_of_selectedWeapon_10() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___selectedWeapon_10)); }
	inline int32_t get_selectedWeapon_10() const { return ___selectedWeapon_10; }
	inline int32_t* get_address_of_selectedWeapon_10() { return &___selectedWeapon_10; }
	inline void set_selectedWeapon_10(int32_t value)
	{
		___selectedWeapon_10 = value;
	}

	inline static int32_t get_offset_of_experience_11() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___experience_11)); }
	inline float get_experience_11() const { return ___experience_11; }
	inline float* get_address_of_experience_11() { return &___experience_11; }
	inline void set_experience_11(float value)
	{
		___experience_11 = value;
	}

	inline static int32_t get_offset_of_bothAnimator_12() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___bothAnimator_12)); }
	inline Animator_t792326996 * get_bothAnimator_12() const { return ___bothAnimator_12; }
	inline Animator_t792326996 ** get_address_of_bothAnimator_12() { return &___bothAnimator_12; }
	inline void set_bothAnimator_12(Animator_t792326996 * value)
	{
		___bothAnimator_12 = value;
		Il2CppCodeGenWriteBarrier(&___bothAnimator_12, value);
	}

	inline static int32_t get_offset_of_torsoAnimator_13() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___torsoAnimator_13)); }
	inline Animator_t792326996 * get_torsoAnimator_13() const { return ___torsoAnimator_13; }
	inline Animator_t792326996 ** get_address_of_torsoAnimator_13() { return &___torsoAnimator_13; }
	inline void set_torsoAnimator_13(Animator_t792326996 * value)
	{
		___torsoAnimator_13 = value;
		Il2CppCodeGenWriteBarrier(&___torsoAnimator_13, value);
	}

	inline static int32_t get_offset_of_legAnimator_14() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___legAnimator_14)); }
	inline Animator_t792326996 * get_legAnimator_14() const { return ___legAnimator_14; }
	inline Animator_t792326996 ** get_address_of_legAnimator_14() { return &___legAnimator_14; }
	inline void set_legAnimator_14(Animator_t792326996 * value)
	{
		___legAnimator_14 = value;
		Il2CppCodeGenWriteBarrier(&___legAnimator_14, value);
	}

	inline static int32_t get_offset_of_isShooting_15() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___isShooting_15)); }
	inline bool get_isShooting_15() const { return ___isShooting_15; }
	inline bool* get_address_of_isShooting_15() { return &___isShooting_15; }
	inline void set_isShooting_15(bool value)
	{
		___isShooting_15 = value;
	}

	inline static int32_t get_offset_of_dead_16() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___dead_16)); }
	inline bool get_dead_16() const { return ___dead_16; }
	inline bool* get_address_of_dead_16() { return &___dead_16; }
	inline void set_dead_16(bool value)
	{
		___dead_16 = value;
	}

	inline static int32_t get_offset_of_fireRate_17() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___fireRate_17)); }
	inline float get_fireRate_17() const { return ___fireRate_17; }
	inline float* get_address_of_fireRate_17() { return &___fireRate_17; }
	inline void set_fireRate_17(float value)
	{
		___fireRate_17 = value;
	}

	inline static int32_t get_offset_of_time_18() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___time_18)); }
	inline float get_time_18() const { return ___time_18; }
	inline float* get_address_of_time_18() { return &___time_18; }
	inline void set_time_18(float value)
	{
		___time_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
