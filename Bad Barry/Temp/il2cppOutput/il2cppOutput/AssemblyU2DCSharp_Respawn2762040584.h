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

// Respawn
struct  Respawn_t2762040584  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Respawn::respawn_time
	float ___respawn_time_2;
	// System.Single Respawn::timer
	float ___timer_3;
	// UnityEngine.GameObject Respawn::inimigo
	GameObject_t4012695102 * ___inimigo_4;

public:
	inline static int32_t get_offset_of_respawn_time_2() { return static_cast<int32_t>(offsetof(Respawn_t2762040584, ___respawn_time_2)); }
	inline float get_respawn_time_2() const { return ___respawn_time_2; }
	inline float* get_address_of_respawn_time_2() { return &___respawn_time_2; }
	inline void set_respawn_time_2(float value)
	{
		___respawn_time_2 = value;
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(Respawn_t2762040584, ___timer_3)); }
	inline float get_timer_3() const { return ___timer_3; }
	inline float* get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(float value)
	{
		___timer_3 = value;
	}

	inline static int32_t get_offset_of_inimigo_4() { return static_cast<int32_t>(offsetof(Respawn_t2762040584, ___inimigo_4)); }
	inline GameObject_t4012695102 * get_inimigo_4() const { return ___inimigo_4; }
	inline GameObject_t4012695102 ** get_address_of_inimigo_4() { return &___inimigo_4; }
	inline void set_inimigo_4(GameObject_t4012695102 * value)
	{
		___inimigo_4 = value;
		Il2CppCodeGenWriteBarrier(&___inimigo_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
