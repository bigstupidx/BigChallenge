#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t12;
// UnityEngine.GameObject
struct GameObject_t21;
// ItemDatabase
struct ItemDatabase_t87;
// System.Collections.Generic.List`1<Item>
struct List_1_t88;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t89;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t76;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Inventory
struct  Inventory_t85  : public MonoBehaviour_t2
{
	// GameBehavior Inventory::behave
	GameBehavior_t12 * ___behave_2;
	// UnityEngine.GameObject Inventory::missionButton
	GameObject_t21 * ___missionButton_3;
	// UnityEngine.GameObject Inventory::inventoryPanel
	GameObject_t21 * ___inventoryPanel_4;
	// UnityEngine.GameObject Inventory::slotPanel
	GameObject_t21 * ___slotPanel_5;
	// UnityEngine.GameObject Inventory::slotPanel2
	GameObject_t21 * ___slotPanel2_6;
	// ItemDatabase Inventory::database
	ItemDatabase_t87 * ___database_7;
	// UnityEngine.GameObject Inventory::inventorySlot
	GameObject_t21 * ___inventorySlot_8;
	// UnityEngine.GameObject Inventory::inventoryItem
	GameObject_t21 * ___inventoryItem_9;
	// System.Int32 Inventory::slotAmount
	int32_t ___slotAmount_10;
	// System.Collections.Generic.List`1<Item> Inventory::items
	List_1_t88 * ___items_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slots
	List_1_t89 * ___slots_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::itemsList
	List_1_t89 * ___itemsList_13;
	// System.Int32 Inventory::slotAmount2
	int32_t ___slotAmount2_14;
	// System.Collections.Generic.List`1<Item> Inventory::items2
	List_1_t88 * ___items2_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slots2
	List_1_t89 * ___slots2_16;
	// UnityEngine.UI.GridLayoutGroup Inventory::gridLayoutGroup
	GridLayoutGroup_t76 * ___gridLayoutGroup_17;
	// System.Boolean Inventory::slots2Completed
	bool ___slots2Completed_18;
	// UnityEngine.GameObject Inventory::buttonBack
	GameObject_t21 * ___buttonBack_19;
	// UnityEngine.GameObject Inventory::canvasTutorial
	GameObject_t21 * ___canvasTutorial_20;
	// UnityEngine.GameObject Inventory::tutorialText
	GameObject_t21 * ___tutorialText_21;
	// UnityEngine.GameObject Inventory::backArrow
	GameObject_t21 * ___backArrow_22;
	// System.Boolean Inventory::teste
	bool ___teste_23;
	// System.Boolean Inventory::teste2
	bool ___teste2_24;
};
