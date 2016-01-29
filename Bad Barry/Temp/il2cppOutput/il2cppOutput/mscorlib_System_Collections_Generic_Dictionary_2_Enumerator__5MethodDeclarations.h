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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2116;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14108_gshared (Enumerator_t2122 * __this, Dictionary_2_t2116 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14108(__this, ___dictionary, method) (( void (*) (Enumerator_t2122 *, Dictionary_2_t2116 *, const MethodInfo*))Enumerator__ctor_m14108_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14109_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14109(__this, method) (( Object_t * (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14109_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m14110_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14110(__this, method) (( void (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m14110_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t764  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14111_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14111(__this, method) (( DictionaryEntry_t764  (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14111_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14112_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14112(__this, method) (( Object_t * (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14112_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14113_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14113(__this, method) (( Object_t * (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14113_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14114_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14114(__this, method) (( bool (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_MoveNext_m14114_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2118  Enumerator_get_Current_m14115_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14115(__this, method) (( KeyValuePair_2_t2118  (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_get_Current_m14115_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14116_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14116(__this, method) (( Object_t * (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_get_CurrentKey_m14116_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14117_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14117(__this, method) (( int32_t (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_get_CurrentValue_m14117_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m14118_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_Reset_m14118(__this, method) (( void (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_Reset_m14118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14119_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14119(__this, method) (( void (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_VerifyState_m14119_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14120_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14120(__this, method) (( void (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_VerifyCurrent_m14120_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14121_gshared (Enumerator_t2122 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14121(__this, method) (( void (*) (Enumerator_t2122 *, const MethodInfo*))Enumerator_Dispose_m14121_gshared)(__this, method)
