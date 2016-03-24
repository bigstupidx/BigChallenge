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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemiesManager
struct  EnemiesManager_t3151134407  : public MonoBehaviour_t3012272455
{
public:
	// GameBehavior EnemiesManager::behave
	GameBehavior_t1830462596 * ___behave_2;

public:
	inline static int32_t get_offset_of_behave_2() { return static_cast<int32_t>(offsetof(EnemiesManager_t3151134407, ___behave_2)); }
	inline GameBehavior_t1830462596 * get_behave_2() const { return ___behave_2; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_2() { return &___behave_2; }
	inline void set_behave_2(GameBehavior_t1830462596 * value)
	{
		___behave_2 = value;
		Il2CppCodeGenWriteBarrier(&___behave_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
