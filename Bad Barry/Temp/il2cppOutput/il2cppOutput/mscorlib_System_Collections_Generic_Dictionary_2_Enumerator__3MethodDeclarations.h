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
struct Dictionary_2_t2056;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13519_gshared (Enumerator_t2062 * __this, Dictionary_2_t2056 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13519(__this, ___dictionary, method) (( void (*) (Enumerator_t2062 *, Dictionary_2_t2056 *, const MethodInfo*))Enumerator__ctor_m13519_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13520_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13520(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13520_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m13521_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m13521(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m13521_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t734  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13522_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13522(__this, method) (( DictionaryEntry_t734  (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13522_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13523_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13523(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13523_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13524_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13524(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13525_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13525(__this, method) (( bool (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_MoveNext_m13525_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2058  Enumerator_get_Current_m13526_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13526(__this, method) (( KeyValuePair_2_t2058  (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_get_Current_m13526_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13527_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13527(__this, method) (( int32_t (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_get_CurrentKey_m13527_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13528_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13528(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_get_CurrentValue_m13528_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m13529_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_Reset_m13529(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_Reset_m13529_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13530_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13530(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_VerifyState_m13530_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13531_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13531(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_VerifyCurrent_m13531_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13532_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13532(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_Dispose_m13532_gshared)(__this, method)
