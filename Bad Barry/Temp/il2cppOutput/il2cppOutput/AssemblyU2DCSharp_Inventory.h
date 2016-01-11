#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t40;
// ItemDatabase
struct ItemDatabase_t60;
// System.Collections.Generic.List`1<Item>
struct List_1_t61;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t62;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t63;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Inventory
struct  Inventory_t59  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject Inventory::inventoryPanel
	GameObject_t40 * ___inventoryPanel_2;
	// UnityEngine.GameObject Inventory::slotPanel
	GameObject_t40 * ___slotPanel_3;
	// UnityEngine.GameObject Inventory::slotPanel2
	GameObject_t40 * ___slotPanel2_4;
	// ItemDatabase Inventory::database
	ItemDatabase_t60 * ___database_5;
	// UnityEngine.GameObject Inventory::inventorySlot
	GameObject_t40 * ___inventorySlot_6;
	// UnityEngine.GameObject Inventory::inventoryItem
	GameObject_t40 * ___inventoryItem_7;
	// System.Int32 Inventory::slotAmount
	int32_t ___slotAmount_8;
	// System.Collections.Generic.List`1<Item> Inventory::items
	List_1_t61 * ___items_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slots
	List_1_t62 * ___slots_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::itemsList
	List_1_t62 * ___itemsList_11;
	// System.Int32 Inventory::slotAmount2
	int32_t ___slotAmount2_12;
	// System.Collections.Generic.List`1<Item> Inventory::items2
	List_1_t61 * ___items2_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slots2
	List_1_t62 * ___slots2_14;
	// UnityEngine.UI.GridLayoutGroup Inventory::gridLayoutGroup
	GridLayoutGroup_t63 * ___gridLayoutGroup_15;
};
