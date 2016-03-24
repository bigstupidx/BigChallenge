#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Inventory
struct Inventory_t4278335804;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Slot
struct  Slot_t2580000  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Slot::id
	int32_t ___id_2;
	// Inventory Slot::inv
	Inventory_t4278335804 * ___inv_3;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(Slot_t2580000, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}

	inline static int32_t get_offset_of_inv_3() { return static_cast<int32_t>(offsetof(Slot_t2580000, ___inv_3)); }
	inline Inventory_t4278335804 * get_inv_3() const { return ___inv_3; }
	inline Inventory_t4278335804 ** get_address_of_inv_3() { return &___inv_3; }
	inline void set_inv_3(Inventory_t4278335804 * value)
	{
		___inv_3 = value;
		Il2CppCodeGenWriteBarrier(&___inv_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
