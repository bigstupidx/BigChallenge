#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Item>
struct List_1_t799248428;
// LitJson.JsonData
struct JsonData_t2847671799;
// ItemDatabase
struct ItemDatabase_t2582217166;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemDatabase
struct  ItemDatabase_t2582217166  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<Item> ItemDatabase::database
	List_1_t799248428 * ___database_2;
	// LitJson.JsonData ItemDatabase::itemData
	JsonData_t2847671799 * ___itemData_3;

public:
	inline static int32_t get_offset_of_database_2() { return static_cast<int32_t>(offsetof(ItemDatabase_t2582217166, ___database_2)); }
	inline List_1_t799248428 * get_database_2() const { return ___database_2; }
	inline List_1_t799248428 ** get_address_of_database_2() { return &___database_2; }
	inline void set_database_2(List_1_t799248428 * value)
	{
		___database_2 = value;
		Il2CppCodeGenWriteBarrier(&___database_2, value);
	}

	inline static int32_t get_offset_of_itemData_3() { return static_cast<int32_t>(offsetof(ItemDatabase_t2582217166, ___itemData_3)); }
	inline JsonData_t2847671799 * get_itemData_3() const { return ___itemData_3; }
	inline JsonData_t2847671799 ** get_address_of_itemData_3() { return &___itemData_3; }
	inline void set_itemData_3(JsonData_t2847671799 * value)
	{
		___itemData_3 = value;
		Il2CppCodeGenWriteBarrier(&___itemData_3, value);
	}
};

struct ItemDatabase_t2582217166_StaticFields
{
public:
	// ItemDatabase ItemDatabase::Instance
	ItemDatabase_t2582217166 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(ItemDatabase_t2582217166_StaticFields, ___Instance_4)); }
	inline ItemDatabase_t2582217166 * get_Instance_4() const { return ___Instance_4; }
	inline ItemDatabase_t2582217166 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(ItemDatabase_t2582217166 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
