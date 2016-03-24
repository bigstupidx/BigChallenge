#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletBox
struct  BulletBox_t3267332425  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 BulletBox::type
	int32_t ___type_2;
	// System.Int32 BulletBox::minBullets
	int32_t ___minBullets_3;
	// System.Int32 BulletBox::maxBullets
	int32_t ___maxBullets_4;

public:
	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(BulletBox_t3267332425, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_minBullets_3() { return static_cast<int32_t>(offsetof(BulletBox_t3267332425, ___minBullets_3)); }
	inline int32_t get_minBullets_3() const { return ___minBullets_3; }
	inline int32_t* get_address_of_minBullets_3() { return &___minBullets_3; }
	inline void set_minBullets_3(int32_t value)
	{
		___minBullets_3 = value;
	}

	inline static int32_t get_offset_of_maxBullets_4() { return static_cast<int32_t>(offsetof(BulletBox_t3267332425, ___maxBullets_4)); }
	inline int32_t get_maxBullets_4() const { return ___maxBullets_4; }
	inline int32_t* get_address_of_maxBullets_4() { return &___maxBullets_4; }
	inline void set_maxBullets_4(int32_t value)
	{
		___maxBullets_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
