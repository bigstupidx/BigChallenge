#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Item>
struct List_1_t81;
// LitJson.JsonData
struct JsonData_t87;
// ItemDatabase
struct ItemDatabase_t80;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ItemDatabase
struct  ItemDatabase_t80  : public MonoBehaviour_t2
{
	// System.Collections.Generic.List`1<Item> ItemDatabase::database
	List_1_t81 * ___database_2;
	// LitJson.JsonData ItemDatabase::itemData
	JsonData_t87 * ___itemData_3;
};
struct ItemDatabase_t80_StaticFields{
	// ItemDatabase ItemDatabase::Instance
	ItemDatabase_t80 * ___Instance_4;
};
