#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ItemData>
struct List_1_t57;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t79;
// System.String
struct String_t;
// UnityEngine.RectTransform
struct RectTransform_t80;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// InventoryInMission
struct  InventoryInMission_t78  : public MonoBehaviour_t2
{
	// System.Collections.Generic.List`1<ItemData> InventoryInMission::inventoryItems
	List_1_t57 * ___inventoryItems_2;
	// UnityEngine.UI.Image[] InventoryInMission::itemsInGame
	ImageU5BU5D_t79* ___itemsInGame_3;
	// System.String InventoryInMission::count
	String_t* ___count_4;
	// UnityEngine.RectTransform InventoryInMission::imageRect
	RectTransform_t80 * ___imageRect_5;
	// System.Single InventoryInMission::imageWidth
	float ___imageWidth_6;
};
