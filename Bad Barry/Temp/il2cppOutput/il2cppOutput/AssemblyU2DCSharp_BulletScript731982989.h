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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletScript
struct  BulletScript_t731982989  : public MonoBehaviour_t3012272455
{
public:
	// System.Single BulletScript::speed
	float ___speed_2;
	// System.Int32 BulletScript::maxDamage
	int32_t ___maxDamage_3;
	// System.Int32 BulletScript::minDamage
	int32_t ___minDamage_4;
	// System.Int32 BulletScript::baseDamage
	int32_t ___baseDamage_5;
	// System.Int32 BulletScript::direction
	int32_t ___direction_6;
	// System.Int32 BulletScript::angle
	int32_t ___angle_7;
	// UnityEngine.GameObject BulletScript::origin
	GameObject_t4012695102 * ___origin_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_maxDamage_3() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___maxDamage_3)); }
	inline int32_t get_maxDamage_3() const { return ___maxDamage_3; }
	inline int32_t* get_address_of_maxDamage_3() { return &___maxDamage_3; }
	inline void set_maxDamage_3(int32_t value)
	{
		___maxDamage_3 = value;
	}

	inline static int32_t get_offset_of_minDamage_4() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___minDamage_4)); }
	inline int32_t get_minDamage_4() const { return ___minDamage_4; }
	inline int32_t* get_address_of_minDamage_4() { return &___minDamage_4; }
	inline void set_minDamage_4(int32_t value)
	{
		___minDamage_4 = value;
	}

	inline static int32_t get_offset_of_baseDamage_5() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___baseDamage_5)); }
	inline int32_t get_baseDamage_5() const { return ___baseDamage_5; }
	inline int32_t* get_address_of_baseDamage_5() { return &___baseDamage_5; }
	inline void set_baseDamage_5(int32_t value)
	{
		___baseDamage_5 = value;
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___direction_6)); }
	inline int32_t get_direction_6() const { return ___direction_6; }
	inline int32_t* get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(int32_t value)
	{
		___direction_6 = value;
	}

	inline static int32_t get_offset_of_angle_7() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___angle_7)); }
	inline int32_t get_angle_7() const { return ___angle_7; }
	inline int32_t* get_address_of_angle_7() { return &___angle_7; }
	inline void set_angle_7(int32_t value)
	{
		___angle_7 = value;
	}

	inline static int32_t get_offset_of_origin_8() { return static_cast<int32_t>(offsetof(BulletScript_t731982989, ___origin_8)); }
	inline GameObject_t4012695102 * get_origin_8() const { return ___origin_8; }
	inline GameObject_t4012695102 ** get_address_of_origin_8() { return &___origin_8; }
	inline void set_origin_8(GameObject_t4012695102 * value)
	{
		___origin_8 = value;
		Il2CppCodeGenWriteBarrier(&___origin_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
