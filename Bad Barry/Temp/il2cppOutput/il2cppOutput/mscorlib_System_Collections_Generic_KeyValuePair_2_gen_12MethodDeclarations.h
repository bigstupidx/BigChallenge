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
extern "C" void KeyValuePair_2__ctor_m17593_gshared (KeyValuePair_2_t2352 * __this, Object_t * ___key, PropertyMetadata_t683  ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m17593(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2352 *, Object_t *, PropertyMetadata_t683 , const MethodInfo*))KeyValuePair_2__ctor_m17593_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m17594_gshared (KeyValuePair_2_t2352 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m17594(__this, method) (( Object_t * (*) (KeyValuePair_2_t2352 *, const MethodInfo*))KeyValuePair_2_get_Key_m17594_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m17595_gshared (KeyValuePair_2_t2352 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m17595(__this, ___value, method) (( void (*) (KeyValuePair_2_t2352 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m17595_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::get_Value()
extern "C" PropertyMetadata_t683  KeyValuePair_2_get_Value_m17596_gshared (KeyValuePair_2_t2352 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m17596(__this, method) (( PropertyMetadata_t683  (*) (KeyValuePair_2_t2352 *, const MethodInfo*))KeyValuePair_2_get_Value_m17596_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m17597_gshared (KeyValuePair_2_t2352 * __this, PropertyMetadata_t683  ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m17597(__this, ___value, method) (( void (*) (KeyValuePair_2_t2352 *, PropertyMetadata_t683 , const MethodInfo*))KeyValuePair_2_set_Value_m17597_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m17598_gshared (KeyValuePair_2_t2352 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m17598(__this, method) (( String_t* (*) (KeyValuePair_2_t2352 *, const MethodInfo*))KeyValuePair_2_ToString_m17598_gshared)(__this, method)
