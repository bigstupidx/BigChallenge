#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ListBank
struct ListBank_t123;
// System.Collections.Generic.List`1<Item>
struct List_1_t81;
// ItemDatabase
struct ItemDatabase_t80;
// Item
struct Item_t86;
// UnityEngine.RectTransform
struct RectTransform_t3;
// GameBehavior
struct GameBehavior_t4;
// System.Int32[]
struct Int32U5BU5D_t61;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ListBank
struct  ListBank_t123  : public MonoBehaviour_t2
{
	// System.Collections.Generic.List`1<Item> ListBank::items
	List_1_t81 * ___items_3;
	// ItemDatabase ListBank::database
	ItemDatabase_t80 * ___database_4;
	// Item ListBank::itemToBuy
	Item_t86 * ___itemToBuy_5;
	// UnityEngine.RectTransform ListBank::canvasRect
	RectTransform_t3 * ___canvasRect_6;
	// GameBehavior ListBank::behave
	GameBehavior_t4 * ___behave_7;
	// System.Int32[] ListBank::contents
	Int32U5BU5D_t61* ___contents_8;
};
struct ListBank_t123_StaticFields{
	// ListBank ListBank::Instance
	ListBank_t123 * ___Instance_2;
};
