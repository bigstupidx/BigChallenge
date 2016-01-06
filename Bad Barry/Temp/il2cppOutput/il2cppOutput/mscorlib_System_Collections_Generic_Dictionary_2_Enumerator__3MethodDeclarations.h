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
struct Dictionary_2_t1996;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12953_gshared (Enumerator_t2002 * __this, Dictionary_2_t1996 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12953(__this, ___dictionary, method) (( void (*) (Enumerator_t2002 *, Dictionary_2_t1996 *, const MethodInfo*))Enumerator__ctor_m12953_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12954_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12954(__this, method) (( Object_t * (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12954_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12955_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12955(__this, method) (( void (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12955_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t721  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12956_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12956(__this, method) (( DictionaryEntry_t721  (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12956_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12957_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12957(__this, method) (( Object_t * (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12957_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12958_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12958(__this, method) (( Object_t * (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12958_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12959_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12959(__this, method) (( bool (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_MoveNext_m12959_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1998  Enumerator_get_Current_m12960_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12960(__this, method) (( KeyValuePair_2_t1998  (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_get_Current_m12960_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12961_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12961(__this, method) (( int32_t (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_get_CurrentKey_m12961_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12962_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12962(__this, method) (( Object_t * (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_get_CurrentValue_m12962_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m12963_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12963(__this, method) (( void (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_Reset_m12963_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12964_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12964(__this, method) (( void (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_VerifyState_m12964_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12965_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12965(__this, method) (( void (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_VerifyCurrent_m12965_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12966_gshared (Enumerator_t2002 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12966(__this, method) (( void (*) (Enumerator_t2002 *, const MethodInfo*))Enumerator_Dispose_m12966_gshared)(__this, method)
