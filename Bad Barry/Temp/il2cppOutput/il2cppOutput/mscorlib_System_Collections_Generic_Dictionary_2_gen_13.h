﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t46;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1915;
// System.Type[]
struct TypeU5BU5D_t651;
// LitJson.ExporterFunc[]
struct ExporterFuncU5BU5D_t2464;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t2421;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ExporterFunc,System.Collections.DictionaryEntry>
struct Transform_1_t2465;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct  Dictionary_2_t751  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::table
	Int32U5BU5D_t46* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::linkSlots
	LinkU5BU5D_t1915* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::keySlots
	TypeU5BU5D_t651* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::valueSlots
	ExporterFuncU5BU5D_t2464* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::serialization_info
	SerializationInfo_t653 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t751_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::<>f__am$cacheB
	Transform_1_t2465 * ___U3CU3Ef__amU24cacheB_15;
};
