#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ListBank
struct ListBank_t129;
// System.Collections.Generic.List`1<Item>
struct List_1_t88;
// ItemDatabase
struct ItemDatabase_t87;
// Item
struct Item_t92;
// UnityEngine.RectTransform
struct RectTransform_t11;
// GameBehavior
struct GameBehavior_t12;
// System.Int32[]
struct Int32U5BU5D_t68;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ListBank
struct  ListBank_t129  : public MonoBehaviour_t2
{
	// System.Collections.Generic.List`1<Item> ListBank::items
	List_1_t88 * ___items_3;
	// ItemDatabase ListBank::database
	ItemDatabase_t87 * ___database_4;
	// Item ListBank::itemToBuy
	Item_t92 * ___itemToBuy_5;
	// UnityEngine.RectTransform ListBank::canvasRect
	RectTransform_t11 * ___canvasRect_6;
	// GameBehavior ListBank::behave
	GameBehavior_t12 * ___behave_7;
	// System.Int32[] ListBank::contents
	Int32U5BU5D_t68* ___contents_8;
};
struct ListBank_t129_StaticFields{
	// ListBank ListBank::Instance
	ListBank_t129 * ___Instance_2;
};
