#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3;
// Item
struct Item_t55;
// Inventory
struct Inventory_t50;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Options
struct  Options_t57  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject Options::options
	GameObject_t3 * ___options_2;
	// Item Options::item
	Item_t55 * ___item_3;
	// UnityEngine.Vector3 Options::position
	Vector3_t12  ___position_4;
	// Inventory Options::inv
	Inventory_t50 * ___inv_5;
};
