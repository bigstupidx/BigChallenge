#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Item>
struct List_1_t61;
// LitJson.JsonData
struct JsonData_t66;
// ItemDatabase
struct ItemDatabase_t60;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ItemDatabase
struct  ItemDatabase_t60  : public MonoBehaviour_t2
{
	// System.Collections.Generic.List`1<Item> ItemDatabase::database
	List_1_t61 * ___database_2;
	// LitJson.JsonData ItemDatabase::itemData
	JsonData_t66 * ___itemData_3;
};
struct ItemDatabase_t60_StaticFields{
	// ItemDatabase ItemDatabase::Instance
	ItemDatabase_t60 * ___Instance_4;
};
