#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Appear
struct  Appear_t1967765941  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] Appear::floors
	GameObjectU5BU5D_t3499186955* ___floors_2;
	// UnityEngine.GameObject[] Appear::destroyable
	GameObjectU5BU5D_t3499186955* ___destroyable_3;

public:
	inline static int32_t get_offset_of_floors_2() { return static_cast<int32_t>(offsetof(Appear_t1967765941, ___floors_2)); }
	inline GameObjectU5BU5D_t3499186955* get_floors_2() const { return ___floors_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_floors_2() { return &___floors_2; }
	inline void set_floors_2(GameObjectU5BU5D_t3499186955* value)
	{
		___floors_2 = value;
		Il2CppCodeGenWriteBarrier(&___floors_2, value);
	}

	inline static int32_t get_offset_of_destroyable_3() { return static_cast<int32_t>(offsetof(Appear_t1967765941, ___destroyable_3)); }
	inline GameObjectU5BU5D_t3499186955* get_destroyable_3() const { return ___destroyable_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_destroyable_3() { return &___destroyable_3; }
	inline void set_destroyable_3(GameObjectU5BU5D_t3499186955* value)
	{
		___destroyable_3 = value;
		Il2CppCodeGenWriteBarrier(&___destroyable_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
