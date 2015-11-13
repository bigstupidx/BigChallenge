#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Item
struct Item_t55;
// Inventory
struct Inventory_t50;
// Tooltip
struct Tooltip_t56;
// Options
struct Options_t57;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// ItemData
struct  ItemData_t54  : public MonoBehaviour_t2
{
	// Item ItemData::item
	Item_t55 * ___item_2;
	// System.Int32 ItemData::amount
	int32_t ___amount_3;
	// System.Int32 ItemData::slot
	int32_t ___slot_4;
	// Inventory ItemData::inv
	Inventory_t50 * ___inv_5;
	// Tooltip ItemData::tooltip
	Tooltip_t56 * ___tooltip_6;
	// UnityEngine.Vector2 ItemData::offset
	Vector2_t25  ___offset_7;
	// Options ItemData::options
	Options_t57 * ___options_8;
};
