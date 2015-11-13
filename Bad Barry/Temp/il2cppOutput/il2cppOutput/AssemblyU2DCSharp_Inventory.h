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
// ItemDatabase
struct ItemDatabase_t51;
// System.Collections.Generic.List`1<Item>
struct List_1_t52;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t53;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Inventory
struct  Inventory_t50  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject Inventory::inventoryPanel
	GameObject_t3 * ___inventoryPanel_2;
	// UnityEngine.GameObject Inventory::slotPanel
	GameObject_t3 * ___slotPanel_3;
	// ItemDatabase Inventory::database
	ItemDatabase_t51 * ___database_4;
	// UnityEngine.GameObject Inventory::inventorySlot
	GameObject_t3 * ___inventorySlot_5;
	// UnityEngine.GameObject Inventory::inventoryItem
	GameObject_t3 * ___inventoryItem_6;
	// UnityEngine.GameObject Inventory::Options
	GameObject_t3 * ___Options_7;
	// System.Int32 Inventory::slotAmount
	int32_t ___slotAmount_8;
	// System.Collections.Generic.List`1<Item> Inventory::items
	List_1_t52 * ___items_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slots
	List_1_t53 * ___slots_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::itemsList
	List_1_t53 * ___itemsList_11;
};
