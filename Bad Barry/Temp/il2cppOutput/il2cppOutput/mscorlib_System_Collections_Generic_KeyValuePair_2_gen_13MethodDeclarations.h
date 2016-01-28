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
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "LitJson_LitJson_PropertyMetadata.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m18485_gshared (KeyValuePair_2_t2444 * __this, Object_t * ___key, PropertyMetadata_t723  ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m18485(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2444 *, Object_t *, PropertyMetadata_t723 , const MethodInfo*))KeyValuePair_2__ctor_m18485_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m18486_gshared (KeyValuePair_2_t2444 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m18486(__this, method) (( Object_t * (*) (KeyValuePair_2_t2444 *, const MethodInfo*))KeyValuePair_2_get_Key_m18486_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m18487_gshared (KeyValuePair_2_t2444 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m18487(__this, ___value, method) (( void (*) (KeyValuePair_2_t2444 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m18487_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::get_Value()
extern "C" PropertyMetadata_t723  KeyValuePair_2_get_Value_m18488_gshared (KeyValuePair_2_t2444 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m18488(__this, method) (( PropertyMetadata_t723  (*) (KeyValuePair_2_t2444 *, const MethodInfo*))KeyValuePair_2_get_Value_m18488_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m18489_gshared (KeyValuePair_2_t2444 * __this, PropertyMetadata_t723  ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m18489(__this, ___value, method) (( void (*) (KeyValuePair_2_t2444 *, PropertyMetadata_t723 , const MethodInfo*))KeyValuePair_2_set_Value_m18489_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m18490_gshared (KeyValuePair_2_t2444 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m18490(__this, method) (( String_t* (*) (KeyValuePair_2_t2444 *, const MethodInfo*))KeyValuePair_2_ToString_m18490_gshared)(__this, method)
