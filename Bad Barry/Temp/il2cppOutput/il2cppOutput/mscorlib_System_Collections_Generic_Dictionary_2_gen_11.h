﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t77;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1853;
// System.Type[]
struct TypeU5BU5D_t638;
// LitJson.ObjectMetadata[]
struct ObjectMetadataU5BU5D_t2382;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t2361;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t640;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t2383;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct  Dictionary_2_t735  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::table
	Int32U5BU5D_t77* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::linkSlots
	LinkU5BU5D_t1853* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::keySlots
	TypeU5BU5D_t638* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::valueSlots
	ObjectMetadataU5BU5D_t2382* ___valueSlots_7;
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
	SerializationInfo_t640 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t735_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::<>f__am$cacheB
	Transform_1_t2383 * ___U3CU3Ef__amU24cacheB_15;
};