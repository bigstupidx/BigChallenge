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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2088;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13786_gshared (Enumerator_t2094 * __this, Dictionary_2_t2088 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13786(__this, ___dictionary, method) (( void (*) (Enumerator_t2094 *, Dictionary_2_t2088 *, const MethodInfo*))Enumerator__ctor_m13786_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13787_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13787(__this, method) (( Object_t * (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13787_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m13788_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m13788(__this, method) (( void (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m13788_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t761  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13789_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13789(__this, method) (( DictionaryEntry_t761  (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13789_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13790_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13790(__this, method) (( Object_t * (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13790_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13791_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13791(__this, method) (( Object_t * (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13791_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13792_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13792(__this, method) (( bool (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_MoveNext_m13792_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2090  Enumerator_get_Current_m13793_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13793(__this, method) (( KeyValuePair_2_t2090  (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_get_Current_m13793_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13794_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13794(__this, method) (( int32_t (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_get_CurrentKey_m13794_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13795_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13795(__this, method) (( Object_t * (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_get_CurrentValue_m13795_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m13796_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_Reset_m13796(__this, method) (( void (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_Reset_m13796_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13797_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13797(__this, method) (( void (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_VerifyState_m13797_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13798_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13798(__this, method) (( void (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_VerifyCurrent_m13798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13799_gshared (Enumerator_t2094 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13799(__this, method) (( void (*) (Enumerator_t2094 *, const MethodInfo*))Enumerator_Dispose_m13799_gshared)(__this, method)
