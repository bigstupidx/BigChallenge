﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t61;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1961;
// System.String[]
struct StringU5BU5D_t146;
// LitJson.JsonData[]
struct JsonDataU5BU5D_t2438;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1964;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t699;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.DictionaryEntry>
struct Transform_1_t2439;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct  Dictionary_2_t788  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::table
	Int32U5BU5D_t61* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::linkSlots
	LinkU5BU5D_t1961* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::keySlots
	StringU5BU5D_t146* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::valueSlots
	JsonDataU5BU5D_t2438* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::serialization_info
	SerializationInfo_t699 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t788_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::<>f__am$cacheB
	Transform_1_t2439 * ___U3CU3Ef__amU24cacheB_15;
};