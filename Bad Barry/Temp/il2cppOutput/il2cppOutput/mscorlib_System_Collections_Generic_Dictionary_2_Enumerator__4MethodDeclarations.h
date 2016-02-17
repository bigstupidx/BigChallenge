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
struct Dictionary_2_t2113;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13899_gshared (Enumerator_t2119 * __this, Dictionary_2_t2113 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13899(__this, ___dictionary, method) (( void (*) (Enumerator_t2119 *, Dictionary_2_t2113 *, const MethodInfo*))Enumerator__ctor_m13899_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13900_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13900(__this, method) (( Object_t * (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13900_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m13901_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m13901(__this, method) (( void (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m13901_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t784  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13902_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13902(__this, method) (( DictionaryEntry_t784  (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13902_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13903_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13903(__this, method) (( Object_t * (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13903_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13904_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13904(__this, method) (( Object_t * (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13905_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13905(__this, method) (( bool (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_MoveNext_m13905_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2115  Enumerator_get_Current_m13906_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13906(__this, method) (( KeyValuePair_2_t2115  (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_get_Current_m13906_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13907_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13907(__this, method) (( int32_t (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_get_CurrentKey_m13907_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13908_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13908(__this, method) (( Object_t * (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_get_CurrentValue_m13908_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m13909_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_Reset_m13909(__this, method) (( void (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_Reset_m13909_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13910_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13910(__this, method) (( void (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_VerifyState_m13910_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13911_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13911(__this, method) (( void (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_VerifyCurrent_m13911_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13912_gshared (Enumerator_t2119 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13912(__this, method) (( void (*) (Enumerator_t2119 *, const MethodInfo*))Enumerator_Dispose_m13912_gshared)(__this, method)
