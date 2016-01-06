#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ItemData>
struct List_1_t44;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t53;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// InventoryInMission
struct  InventoryInMission_t52  : public MonoBehaviour_t2
{
	// System.Collections.Generic.List`1<ItemData> InventoryInMission::inventoryItems
	List_1_t44 * ___inventoryItems_2;
	// UnityEngine.UI.Image[] InventoryInMission::itemsInGame
	ImageU5BU5D_t53* ___itemsInGame_3;
	// System.String InventoryInMission::count
	String_t* ___count_4;
};
