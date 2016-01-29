#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t8;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t64;
// UnityEngine.RectTransform
struct RectTransform_t80;
// System.Collections.Generic.List`1<Item>
struct List_1_t76;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t77;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// constraintInventory
struct  constraintInventory_t87  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject constraintInventory::inventoryPanel
	GameObject_t8 * ___inventoryPanel_2;
	// UnityEngine.GameObject constraintInventory::slotPanel
	GameObject_t8 * ___slotPanel_3;
	// UnityEngine.GameObject constraintInventory::slotPanel2
	GameObject_t8 * ___slotPanel2_4;
	// UnityEngine.UI.GridLayoutGroup constraintInventory::gridLayoutGroup
	GridLayoutGroup_t64 * ___gridLayoutGroup_5;
	// UnityEngine.UI.GridLayoutGroup constraintInventory::gridLayoutGroup2
	GridLayoutGroup_t64 * ___gridLayoutGroup2_6;
	// UnityEngine.RectTransform constraintInventory::rect
	RectTransform_t80 * ___rect_7;
	// System.Single constraintInventory::height
	float ___height_8;
	// System.Collections.Generic.List`1<Item> constraintInventory::slots1Items
	List_1_t76 * ___slots1Items_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> constraintInventory::slots
	List_1_t77 * ___slots_10;
	// UnityEngine.RectTransform constraintInventory::itemsRect
	RectTransform_t80 * ___itemsRect_11;
};
