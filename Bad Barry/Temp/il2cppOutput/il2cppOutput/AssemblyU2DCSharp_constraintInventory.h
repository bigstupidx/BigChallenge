#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t13;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t69;
// UnityEngine.RectTransform
struct RectTransform_t3;
// System.Collections.Generic.List`1<Item>
struct List_1_t81;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t82;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// constraintInventory
struct  constraintInventory_t91  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject constraintInventory::inventoryPanel
	GameObject_t13 * ___inventoryPanel_2;
	// UnityEngine.GameObject constraintInventory::slotPanel
	GameObject_t13 * ___slotPanel_3;
	// UnityEngine.GameObject constraintInventory::slotPanel2
	GameObject_t13 * ___slotPanel2_4;
	// UnityEngine.UI.GridLayoutGroup constraintInventory::gridLayoutGroup
	GridLayoutGroup_t69 * ___gridLayoutGroup_5;
	// UnityEngine.UI.GridLayoutGroup constraintInventory::gridLayoutGroup2
	GridLayoutGroup_t69 * ___gridLayoutGroup2_6;
	// UnityEngine.RectTransform constraintInventory::rect
	RectTransform_t3 * ___rect_7;
	// System.Single constraintInventory::height
	float ___height_8;
	// System.Collections.Generic.List`1<Item> constraintInventory::slots1Items
	List_1_t81 * ___slots1Items_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> constraintInventory::slots
	List_1_t82 * ___slots_10;
	// UnityEngine.RectTransform constraintInventory::itemsRect
	RectTransform_t3 * ___itemsRect_11;
};
