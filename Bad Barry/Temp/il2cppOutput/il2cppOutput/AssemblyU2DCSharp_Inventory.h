#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t4;
// UnityEngine.GameObject
struct GameObject_t13;
// ItemDatabase
struct ItemDatabase_t80;
// System.Collections.Generic.List`1<Item>
struct List_1_t81;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t82;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t69;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Inventory
struct  Inventory_t78  : public MonoBehaviour_t2
{
	// GameBehavior Inventory::behave
	GameBehavior_t4 * ___behave_2;
	// UnityEngine.GameObject Inventory::missionButton
	GameObject_t13 * ___missionButton_3;
	// UnityEngine.GameObject Inventory::inventoryPanel
	GameObject_t13 * ___inventoryPanel_4;
	// UnityEngine.GameObject Inventory::slotPanel
	GameObject_t13 * ___slotPanel_5;
	// UnityEngine.GameObject Inventory::slotPanel2
	GameObject_t13 * ___slotPanel2_6;
	// ItemDatabase Inventory::database
	ItemDatabase_t80 * ___database_7;
	// UnityEngine.GameObject Inventory::inventorySlot
	GameObject_t13 * ___inventorySlot_8;
	// UnityEngine.GameObject Inventory::inventoryItem
	GameObject_t13 * ___inventoryItem_9;
	// System.Int32 Inventory::slotAmount
	int32_t ___slotAmount_10;
	// System.Collections.Generic.List`1<Item> Inventory::items
	List_1_t81 * ___items_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slots
	List_1_t82 * ___slots_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::itemsList
	List_1_t82 * ___itemsList_13;
	// System.Int32 Inventory::slotAmount2
	int32_t ___slotAmount2_14;
	// System.Collections.Generic.List`1<Item> Inventory::items2
	List_1_t81 * ___items2_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slots2
	List_1_t82 * ___slots2_16;
	// UnityEngine.UI.GridLayoutGroup Inventory::gridLayoutGroup
	GridLayoutGroup_t69 * ___gridLayoutGroup_17;
	// System.Boolean Inventory::slots2Completed
	bool ___slots2Completed_18;
	// UnityEngine.GameObject Inventory::buttonBack
	GameObject_t13 * ___buttonBack_19;
	// UnityEngine.GameObject Inventory::canvasTutorial
	GameObject_t13 * ___canvasTutorial_20;
	// UnityEngine.GameObject Inventory::tutorialText
	GameObject_t13 * ___tutorialText_21;
	// UnityEngine.GameObject Inventory::backArrow
	GameObject_t13 * ___backArrow_22;
	// System.Boolean Inventory::teste
	bool ___teste_23;
	// System.Boolean Inventory::teste2
	bool ___teste2_24;
};
