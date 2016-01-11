#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ListBank
struct ListBank_t84;
// UnityEngine.UI.Text
struct Text_t52;
// System.Collections.Generic.List`1<Item>
struct List_1_t61;
// ItemDatabase
struct ItemDatabase_t60;
// System.Int32[]
struct Int32U5BU5D_t46;
// System.String[]
struct StringU5BU5D_t85;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ListBank
struct  ListBank_t84  : public MonoBehaviour_t2
{
	// UnityEngine.UI.Text ListBank::title
	Text_t52 * ___title_3;
	// UnityEngine.UI.Text ListBank::detail
	Text_t52 * ___detail_4;
	// System.Collections.Generic.List`1<Item> ListBank::items
	List_1_t61 * ___items_5;
	// ItemDatabase ListBank::database
	ItemDatabase_t60 * ___database_6;
	// System.Int32 ListBank::itemPrice
	int32_t ___itemPrice_7;
	// System.Int32 ListBank::itemID
	int32_t ___itemID_8;
	// System.Int32[] ListBank::contents
	Int32U5BU5D_t46* ___contents_9;
	// System.String[] ListBank::details
	StringU5BU5D_t85* ___details_10;
};
struct ListBank_t84_StaticFields{
	// ListBank ListBank::Instance
	ListBank_t84 * ___Instance_2;
};
