#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IFormatProvider
struct IFormatProvider_t732;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t733;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t734;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t735;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_t736;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_t737;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t738;
// LitJson.JsonWriter
struct JsonWriter_t728;
// LitJson.ExporterFunc
struct ExporterFunc_t727;
// LitJson.ImporterFunc
struct ImporterFunc_t729;
// LitJson.WrapperFactory
struct WrapperFactory_t730;

#include "mscorlib_System_Object.h"

// LitJson.JsonMapper
struct  JsonMapper_t167  : public Object_t
{
};
struct JsonMapper_t167_StaticFields{
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	Object_t * ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	Object_t* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	Object_t* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	Object_t* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	Object_t* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	Object_t* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	Object_t * ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	Object_t* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	Object_t * ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	Object_t* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	Object_t * ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	Object_t* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	Object_t * ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_t728 * ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	Object_t * ___static_writer_lock_15;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache1
	ExporterFunc_t727 * ___U3CU3Ef__amU24cache1_16;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache2
	ExporterFunc_t727 * ___U3CU3Ef__amU24cache2_17;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache3
	ExporterFunc_t727 * ___U3CU3Ef__amU24cache3_18;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache4
	ExporterFunc_t727 * ___U3CU3Ef__amU24cache4_19;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache5
	ExporterFunc_t727 * ___U3CU3Ef__amU24cache5_20;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache6
	ExporterFunc_t727 * ___U3CU3Ef__amU24cache6_21;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache7
	ExporterFunc_t727 * ___U3CU3Ef__amU24cache7_22;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache8
	ExporterFunc_t727 * ___U3CU3Ef__amU24cache8_23;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache9
	ExporterFunc_t727 * ___U3CU3Ef__amU24cache9_24;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheA
	ImporterFunc_t729 * ___U3CU3Ef__amU24cacheA_25;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheB
	ImporterFunc_t729 * ___U3CU3Ef__amU24cacheB_26;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheC
	ImporterFunc_t729 * ___U3CU3Ef__amU24cacheC_27;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheD
	ImporterFunc_t729 * ___U3CU3Ef__amU24cacheD_28;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheE
	ImporterFunc_t729 * ___U3CU3Ef__amU24cacheE_29;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheF
	ImporterFunc_t729 * ___U3CU3Ef__amU24cacheF_30;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache10
	ImporterFunc_t729 * ___U3CU3Ef__amU24cache10_31;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache11
	ImporterFunc_t729 * ___U3CU3Ef__amU24cache11_32;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache12
	ImporterFunc_t729 * ___U3CU3Ef__amU24cache12_33;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache13
	ImporterFunc_t729 * ___U3CU3Ef__amU24cache13_34;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache14
	ImporterFunc_t729 * ___U3CU3Ef__amU24cache14_35;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache15
	ImporterFunc_t729 * ___U3CU3Ef__amU24cache15_36;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache18
	WrapperFactory_t730 * ___U3CU3Ef__amU24cache18_37;
};
