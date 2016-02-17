#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t21;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t76;
// UnityEngine.RectTransform
struct RectTransform_t11;
// System.Collections.Generic.List`1<Item>
struct List_1_t88;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t89;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// constraintInventory
struct  constraintInventory_t97  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject constraintInventory::inventoryPanel
	GameObject_t21 * ___inventoryPanel_2;
	// UnityEngine.GameObject constraintInventory::slotPanel
	GameObject_t21 * ___slotPanel_3;
	// UnityEngine.GameObject constraintInventory::slotPanel2
	GameObject_t21 * ___slotPanel2_4;
	// UnityEngine.UI.GridLayoutGroup constraintInventory::gridLayoutGroup
	GridLayoutGroup_t76 * ___gridLayoutGroup_5;
	// UnityEngine.UI.GridLayoutGroup constraintInventory::gridLayoutGroup2
	GridLayoutGroup_t76 * ___gridLayoutGroup2_6;
	// UnityEngine.RectTransform constraintInventory::rect
	RectTransform_t11 * ___rect_7;
	// System.Single constraintInventory::height
	float ___height_8;
	// System.Collections.Generic.List`1<Item> constraintInventory::slots1Items
	List_1_t88 * ___slots1Items_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> constraintInventory::slots
	List_1_t89 * ___slots_10;
	// UnityEngine.RectTransform constraintInventory::itemsRect
	RectTransform_t11 * ___itemsRect_11;
};
