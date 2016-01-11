#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
#include "LitJson_LitJson_PropertyMetadata.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m18128_gshared (KeyValuePair_2_t2401 * __this, Object_t * ___key, PropertyMetadata_t696  ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m18128(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2401 *, Object_t *, PropertyMetadata_t696 , const MethodInfo*))KeyValuePair_2__ctor_m18128_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m18129_gshared (KeyValuePair_2_t2401 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m18129(__this, method) (( Object_t * (*) (KeyValuePair_2_t2401 *, const MethodInfo*))KeyValuePair_2_get_Key_m18129_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m18130_gshared (KeyValuePair_2_t2401 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m18130(__this, ___value, method) (( void (*) (KeyValuePair_2_t2401 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m18130_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::get_Value()
extern "C" PropertyMetadata_t696  KeyValuePair_2_get_Value_m18131_gshared (KeyValuePair_2_t2401 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m18131(__this, method) (( PropertyMetadata_t696  (*) (KeyValuePair_2_t2401 *, const MethodInfo*))KeyValuePair_2_get_Value_m18131_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m18132_gshared (KeyValuePair_2_t2401 * __this, PropertyMetadata_t696  ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m18132(__this, ___value, method) (( void (*) (KeyValuePair_2_t2401 *, PropertyMetadata_t696 , const MethodInfo*))KeyValuePair_2_set_Value_m18132_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m18133_gshared (KeyValuePair_2_t2401 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m18133(__this, method) (( String_t* (*) (KeyValuePair_2_t2401 *, const MethodInfo*))KeyValuePair_2_ToString_m18133_gshared)(__this, method)
