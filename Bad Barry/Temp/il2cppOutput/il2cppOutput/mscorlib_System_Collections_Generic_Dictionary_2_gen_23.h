#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t68;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1967;
// System.Object[]
struct ObjectU5BU5D_t184;
// LitJson.ArrayMetadata[]
struct ArrayMetadataU5BU5D_t2475;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1973;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t704;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t2479;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct  Dictionary_2_t2478  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::table
	Int32U5BU5D_t68* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::linkSlots
	LinkU5BU5D_t1967* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::keySlots
	ObjectU5BU5D_t184* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::valueSlots
	ArrayMetadataU5BU5D_t2475* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::serialization_info
	SerializationInfo_t704 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t2478_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<>f__am$cacheB
	Transform_1_t2479 * ___U3CU3Ef__amU24cacheB_15;
};
