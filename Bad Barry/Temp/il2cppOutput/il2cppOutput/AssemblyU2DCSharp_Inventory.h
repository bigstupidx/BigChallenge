#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t3;
// UnityEngine.GameObject
struct GameObject_t8;
// ItemDatabase
struct ItemDatabase_t75;
// System.Collections.Generic.List`1<Item>
struct List_1_t76;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t77;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t64;
// UnityEngine.UI.Button
struct Button_t62;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Inventory
struct  Inventory_t73  : public MonoBehaviour_t2
{
	// GameBehavior Inventory::behave
	GameBehavior_t3 * ___behave_2;
	// UnityEngine.GameObject Inventory::inventoryPanel
	GameObject_t8 * ___inventoryPanel_3;
	// UnityEngine.GameObject Inventory::slotPanel
	GameObject_t8 * ___slotPanel_4;
	// UnityEngine.GameObject Inventory::slotPanel2
	GameObject_t8 * ___slotPanel2_5;
	// ItemDatabase Inventory::database
	ItemDatabase_t75 * ___database_6;
	// UnityEngine.GameObject Inventory::inventorySlot
	GameObject_t8 * ___inventorySlot_7;
	// UnityEngine.GameObject Inventory::inventoryItem
	GameObject_t8 * ___inventoryItem_8;
	// System.Int32 Inventory::slotAmount
	int32_t ___slotAmount_9;
	// System.Collections.Generic.List`1<Item> Inventory::items
	List_1_t76 * ___items_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slots
	List_1_t77 * ___slots_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::itemsList
	List_1_t77 * ___itemsList_12;
	// System.Int32 Inventory::slotAmount2
	int32_t ___slotAmount2_13;
	// System.Collections.Generic.List`1<Item> Inventory::items2
	List_1_t76 * ___items2_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slots2
	List_1_t77 * ___slots2_15;
	// UnityEngine.UI.GridLayoutGroup Inventory::gridLayoutGroup
	GridLayoutGroup_t64 * ___gridLayoutGroup_16;
	// System.Boolean Inventory::slots2Completed
	bool ___slots2Completed_17;
	// UnityEngine.UI.Button Inventory::buttonBack
	Button_t62 * ___buttonBack_18;
	// UnityEngine.GameObject Inventory::canvasTutorial
	GameObject_t8 * ___canvasTutorial_19;
	// UnityEngine.GameObject Inventory::tutorialText
	GameObject_t8 * ___tutorialText_20;
	// UnityEngine.GameObject Inventory::backArrow
	GameObject_t8 * ___backArrow_21;
	// System.Boolean Inventory::teste
	bool ___teste_22;
	// System.Boolean Inventory::teste2
	bool ___teste2_23;
};
