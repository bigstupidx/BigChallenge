#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Enemy
struct Enemy_t67100520;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boss
struct  Boss_t2076557  : public MonoBehaviour_t3012272455
{
public:
	// Enemy Boss::myself
	Enemy_t67100520 * ___myself_2;
	// System.Boolean Boss::shownVideo
	bool ___shownVideo_3;

public:
	inline static int32_t get_offset_of_myself_2() { return static_cast<int32_t>(offsetof(Boss_t2076557, ___myself_2)); }
	inline Enemy_t67100520 * get_myself_2() const { return ___myself_2; }
	inline Enemy_t67100520 ** get_address_of_myself_2() { return &___myself_2; }
	inline void set_myself_2(Enemy_t67100520 * value)
	{
		___myself_2 = value;
		Il2CppCodeGenWriteBarrier(&___myself_2, value);
	}

	inline static int32_t get_offset_of_shownVideo_3() { return static_cast<int32_t>(offsetof(Boss_t2076557, ___shownVideo_3)); }
	inline bool get_shownVideo_3() const { return ___shownVideo_3; }
	inline bool* get_address_of_shownVideo_3() { return &___shownVideo_3; }
	inline void set_shownVideo_3(bool value)
	{
		___shownVideo_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
