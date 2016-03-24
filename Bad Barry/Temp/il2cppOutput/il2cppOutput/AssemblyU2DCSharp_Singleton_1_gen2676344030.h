#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LoadingSceneManager
struct LoadingSceneManager_t2423528637;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<LoadingSceneManager>
struct  Singleton_1_t2676344030  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct Singleton_1_t2676344030_StaticFields
{
public:
	// T Singleton`1::s_instance
	LoadingSceneManager_t2423528637 * ___s_instance_2;

public:
	inline static int32_t get_offset_of_s_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t2676344030_StaticFields, ___s_instance_2)); }
	inline LoadingSceneManager_t2423528637 * get_s_instance_2() const { return ___s_instance_2; }
	inline LoadingSceneManager_t2423528637 ** get_address_of_s_instance_2() { return &___s_instance_2; }
	inline void set_s_instance_2(LoadingSceneManager_t2423528637 * value)
	{
		___s_instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
