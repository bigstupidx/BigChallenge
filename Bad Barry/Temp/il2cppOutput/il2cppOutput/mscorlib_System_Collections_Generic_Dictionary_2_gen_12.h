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
// System.Type[]
struct TypeU5BU5D_t697;
// LitJson.ObjectMetadata[]
struct ObjectMetadataU5BU5D_t2493;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t2472;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t699;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t2494;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct  Dictionary_2_t793  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::table
	Int32U5BU5D_t61* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::linkSlots
	LinkU5BU5D_t1961* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::keySlots
	TypeU5BU5D_t697* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::valueSlots
	ObjectMetadataU5BU5D_t2493* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::serialization_info
	SerializationInfo_t699 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t793_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::<>f__am$cacheB
	Transform_1_t2494 * ___U3CU3Ef__amU24cacheB_15;
};