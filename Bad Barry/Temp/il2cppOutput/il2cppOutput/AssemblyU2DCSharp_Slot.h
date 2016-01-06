#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Inventory
struct Inventory_t54;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Slot
struct  Slot_t64  : public MonoBehaviour_t2
{
	// System.Int32 Slot::id
	int32_t ___id_2;
	// Inventory Slot::inv
	Inventory_t54 * ___inv_3;
};
