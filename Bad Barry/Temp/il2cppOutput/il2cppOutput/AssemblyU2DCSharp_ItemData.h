#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Item
struct Item_t86;
// Inventory
struct Inventory_t78;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// ItemData
struct  ItemData_t85  : public MonoBehaviour_t2
{
	// Item ItemData::item
	Item_t86 * ___item_2;
	// System.Int32 ItemData::amount
	int32_t ___amount_3;
	// System.Int32 ItemData::slot
	int32_t ___slot_4;
	// Inventory ItemData::inv
	Inventory_t78 * ___inv_5;
	// UnityEngine.Vector2 ItemData::offset
	Vector2_t38  ___offset_6;
};
