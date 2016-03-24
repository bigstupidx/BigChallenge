#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t4006040370;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Coin
struct  Coin_t2106033  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Coin::<Coins>k__BackingField
	int32_t ___U3CCoinsU3Ek__BackingField_2;
	// UnityEngine.Sprite Coin::<Sprite>k__BackingField
	Sprite_t4006040370 * ___U3CSpriteU3Ek__BackingField_3;
	// System.String Coin::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CCoinsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___U3CCoinsU3Ek__BackingField_2)); }
	inline int32_t get_U3CCoinsU3Ek__BackingField_2() const { return ___U3CCoinsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CCoinsU3Ek__BackingField_2() { return &___U3CCoinsU3Ek__BackingField_2; }
	inline void set_U3CCoinsU3Ek__BackingField_2(int32_t value)
	{
		___U3CCoinsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CSpriteU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___U3CSpriteU3Ek__BackingField_3)); }
	inline Sprite_t4006040370 * get_U3CSpriteU3Ek__BackingField_3() const { return ___U3CSpriteU3Ek__BackingField_3; }
	inline Sprite_t4006040370 ** get_address_of_U3CSpriteU3Ek__BackingField_3() { return &___U3CSpriteU3Ek__BackingField_3; }
	inline void set_U3CSpriteU3Ek__BackingField_3(Sprite_t4006040370 * value)
	{
		___U3CSpriteU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSpriteU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___U3CNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CNameU3Ek__BackingField_4() const { return ___U3CNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_4() { return &___U3CNameU3Ek__BackingField_4; }
	inline void set_U3CNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
