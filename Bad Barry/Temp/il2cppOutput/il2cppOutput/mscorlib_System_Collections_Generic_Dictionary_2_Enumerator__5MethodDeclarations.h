﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2138;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14218_gshared (Enumerator_t2144 * __this, Dictionary_2_t2138 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14218(__this, ___dictionary, method) (( void (*) (Enumerator_t2144 *, Dictionary_2_t2138 *, const MethodInfo*))Enumerator__ctor_m14218_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14219_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14219(__this, method) (( Object_t * (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14219_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m14220_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14220(__this, method) (( void (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m14220_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t784  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14221_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14221(__this, method) (( DictionaryEntry_t784  (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14221_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14222_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14222(__this, method) (( Object_t * (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14222_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14223_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14223(__this, method) (( Object_t * (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14223_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14224_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14224(__this, method) (( bool (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_MoveNext_m14224_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2140  Enumerator_get_Current_m14225_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14225(__this, method) (( KeyValuePair_2_t2140  (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_get_Current_m14225_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14226_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14226(__this, method) (( Object_t * (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_get_CurrentKey_m14226_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14227_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14227(__this, method) (( int32_t (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_get_CurrentValue_m14227_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m14228_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_Reset_m14228(__this, method) (( void (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_Reset_m14228_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14229_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14229(__this, method) (( void (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_VerifyState_m14229_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14230_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14230(__this, method) (( void (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_VerifyCurrent_m14230_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14231_gshared (Enumerator_t2144 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14231(__this, method) (( void (*) (Enumerator_t2144 *, const MethodInfo*))Enumerator_Dispose_m14231_gshared)(__this, method)
