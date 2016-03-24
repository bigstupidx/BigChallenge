#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ItemData>
struct List_1_t62;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t84;
// System.String
struct String_t;
// UnityEngine.RectTransform
struct RectTransform_t3;
// UnityEngine.GameObject
struct GameObject_t13;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// InventoryInMission
struct  InventoryInMission_t51  : public MonoBehaviour_t2
{
	// System.Collections.Generic.List`1<ItemData> InventoryInMission::inventoryItems
	List_1_t62 * ___inventoryItems_2;
	// UnityEngine.UI.Image[] InventoryInMission::itemsInGame
	ImageU5BU5D_t84* ___itemsInGame_3;
	// System.String InventoryInMission::count
	String_t* ___count_4;
	// UnityEngine.RectTransform InventoryInMission::imageRect
	RectTransform_t3 * ___imageRect_5;
	// System.Single InventoryInMission::imageWidth
	float ___imageWidth_6;
	// UnityEngine.GameObject InventoryInMission::imageSlot1
	GameObject_t13 * ___imageSlot1_7;
	// UnityEngine.GameObject InventoryInMission::imageSlot2
	GameObject_t13 * ___imageSlot2_8;
	// UnityEngine.GameObject InventoryInMission::imageSlot3
	GameObject_t13 * ___imageSlot3_9;
	// UnityEngine.GameObject InventoryInMission::amount1
	GameObject_t13 * ___amount1_10;
	// UnityEngine.GameObject InventoryInMission::amount2
	GameObject_t13 * ___amount2_11;
	// UnityEngine.GameObject InventoryInMission::amount3
	GameObject_t13 * ___amount3_12;
};
