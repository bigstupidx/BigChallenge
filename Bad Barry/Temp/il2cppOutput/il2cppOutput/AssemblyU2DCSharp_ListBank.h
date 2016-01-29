#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ListBank
struct ListBank_t108;
// System.Collections.Generic.List`1<Item>
struct List_1_t76;
// ItemDatabase
struct ItemDatabase_t75;
// Item
struct Item_t82;
// UnityEngine.RectTransform
struct RectTransform_t80;
// GameBehavior
struct GameBehavior_t3;
// System.Int32[]
struct Int32U5BU5D_t56;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ListBank
struct  ListBank_t108  : public MonoBehaviour_t2
{
	// System.Collections.Generic.List`1<Item> ListBank::items
	List_1_t76 * ___items_3;
	// ItemDatabase ListBank::database
	ItemDatabase_t75 * ___database_4;
	// Item ListBank::itemToBuy
	Item_t82 * ___itemToBuy_5;
	// UnityEngine.RectTransform ListBank::canvasRect
	RectTransform_t80 * ___canvasRect_6;
	// GameBehavior ListBank::behave
	GameBehavior_t3 * ___behave_7;
	// System.Int32[] ListBank::contents
	Int32U5BU5D_t56* ___contents_8;
};
struct ListBank_t108_StaticFields{
	// ListBank ListBank::Instance
	ListBank_t108 * ___Instance_2;
};
