#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Item
struct Item_t2289459;
// Inventory
struct Inventory_t4278335804;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemData
struct  ItemData_t1241678205  : public MonoBehaviour_t3012272455
{
public:
	// Item ItemData::item
	Item_t2289459 * ___item_2;
	// System.Int32 ItemData::amount
	int32_t ___amount_3;
	// System.Int32 ItemData::slot
	int32_t ___slot_4;
	// Inventory ItemData::inv
	Inventory_t4278335804 * ___inv_5;
	// UnityEngine.Vector2 ItemData::offset
	Vector2_t3525329788  ___offset_6;

public:
	inline static int32_t get_offset_of_item_2() { return static_cast<int32_t>(offsetof(ItemData_t1241678205, ___item_2)); }
	inline Item_t2289459 * get_item_2() const { return ___item_2; }
	inline Item_t2289459 ** get_address_of_item_2() { return &___item_2; }
	inline void set_item_2(Item_t2289459 * value)
	{
		___item_2 = value;
		Il2CppCodeGenWriteBarrier(&___item_2, value);
	}

	inline static int32_t get_offset_of_amount_3() { return static_cast<int32_t>(offsetof(ItemData_t1241678205, ___amount_3)); }
	inline int32_t get_amount_3() const { return ___amount_3; }
	inline int32_t* get_address_of_amount_3() { return &___amount_3; }
	inline void set_amount_3(int32_t value)
	{
		___amount_3 = value;
	}

	inline static int32_t get_offset_of_slot_4() { return static_cast<int32_t>(offsetof(ItemData_t1241678205, ___slot_4)); }
	inline int32_t get_slot_4() const { return ___slot_4; }
	inline int32_t* get_address_of_slot_4() { return &___slot_4; }
	inline void set_slot_4(int32_t value)
	{
		___slot_4 = value;
	}

	inline static int32_t get_offset_of_inv_5() { return static_cast<int32_t>(offsetof(ItemData_t1241678205, ___inv_5)); }
	inline Inventory_t4278335804 * get_inv_5() const { return ___inv_5; }
	inline Inventory_t4278335804 ** get_address_of_inv_5() { return &___inv_5; }
	inline void set_inv_5(Inventory_t4278335804 * value)
	{
		___inv_5 = value;
		Il2CppCodeGenWriteBarrier(&___inv_5, value);
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(ItemData_t1241678205, ___offset_6)); }
	inline Vector2_t3525329788  get_offset_6() const { return ___offset_6; }
	inline Vector2_t3525329788 * get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(Vector2_t3525329788  value)
	{
		___offset_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
