#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ListBank
struct ListBank_t1409749018;
// System.Collections.Generic.List`1<Item>
struct List_1_t799248428;
// ItemDatabase
struct ItemDatabase_t2582217166;
// Item
struct Item_t2289459;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// GameBehavior
struct GameBehavior_t1830462596;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ListBank
struct  ListBank_t1409749018  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<Item> ListBank::items
	List_1_t799248428 * ___items_3;
	// ItemDatabase ListBank::database
	ItemDatabase_t2582217166 * ___database_4;
	// Item ListBank::itemToBuy
	Item_t2289459 * ___itemToBuy_5;
	// UnityEngine.RectTransform ListBank::canvasRect
	RectTransform_t3317474837 * ___canvasRect_6;
	// GameBehavior ListBank::behave
	GameBehavior_t1830462596 * ___behave_7;
	// System.Int32[] ListBank::contents
	Int32U5BU5D_t1809983122* ___contents_8;

public:
	inline static int32_t get_offset_of_items_3() { return static_cast<int32_t>(offsetof(ListBank_t1409749018, ___items_3)); }
	inline List_1_t799248428 * get_items_3() const { return ___items_3; }
	inline List_1_t799248428 ** get_address_of_items_3() { return &___items_3; }
	inline void set_items_3(List_1_t799248428 * value)
	{
		___items_3 = value;
		Il2CppCodeGenWriteBarrier(&___items_3, value);
	}

	inline static int32_t get_offset_of_database_4() { return static_cast<int32_t>(offsetof(ListBank_t1409749018, ___database_4)); }
	inline ItemDatabase_t2582217166 * get_database_4() const { return ___database_4; }
	inline ItemDatabase_t2582217166 ** get_address_of_database_4() { return &___database_4; }
	inline void set_database_4(ItemDatabase_t2582217166 * value)
	{
		___database_4 = value;
		Il2CppCodeGenWriteBarrier(&___database_4, value);
	}

	inline static int32_t get_offset_of_itemToBuy_5() { return static_cast<int32_t>(offsetof(ListBank_t1409749018, ___itemToBuy_5)); }
	inline Item_t2289459 * get_itemToBuy_5() const { return ___itemToBuy_5; }
	inline Item_t2289459 ** get_address_of_itemToBuy_5() { return &___itemToBuy_5; }
	inline void set_itemToBuy_5(Item_t2289459 * value)
	{
		___itemToBuy_5 = value;
		Il2CppCodeGenWriteBarrier(&___itemToBuy_5, value);
	}

	inline static int32_t get_offset_of_canvasRect_6() { return static_cast<int32_t>(offsetof(ListBank_t1409749018, ___canvasRect_6)); }
	inline RectTransform_t3317474837 * get_canvasRect_6() const { return ___canvasRect_6; }
	inline RectTransform_t3317474837 ** get_address_of_canvasRect_6() { return &___canvasRect_6; }
	inline void set_canvasRect_6(RectTransform_t3317474837 * value)
	{
		___canvasRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___canvasRect_6, value);
	}

	inline static int32_t get_offset_of_behave_7() { return static_cast<int32_t>(offsetof(ListBank_t1409749018, ___behave_7)); }
	inline GameBehavior_t1830462596 * get_behave_7() const { return ___behave_7; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_7() { return &___behave_7; }
	inline void set_behave_7(GameBehavior_t1830462596 * value)
	{
		___behave_7 = value;
		Il2CppCodeGenWriteBarrier(&___behave_7, value);
	}

	inline static int32_t get_offset_of_contents_8() { return static_cast<int32_t>(offsetof(ListBank_t1409749018, ___contents_8)); }
	inline Int32U5BU5D_t1809983122* get_contents_8() const { return ___contents_8; }
	inline Int32U5BU5D_t1809983122** get_address_of_contents_8() { return &___contents_8; }
	inline void set_contents_8(Int32U5BU5D_t1809983122* value)
	{
		___contents_8 = value;
		Il2CppCodeGenWriteBarrier(&___contents_8, value);
	}
};

struct ListBank_t1409749018_StaticFields
{
public:
	// ListBank ListBank::Instance
	ListBank_t1409749018 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(ListBank_t1409749018_StaticFields, ___Instance_2)); }
	inline ListBank_t1409749018 * get_Instance_2() const { return ___Instance_2; }
	inline ListBank_t1409749018 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(ListBank_t1409749018 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
