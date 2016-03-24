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
struct Dictionary_2_t2132;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14192_gshared (Enumerator_t2138 * __this, Dictionary_2_t2132 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14192(__this, ___dictionary, method) (( void (*) (Enumerator_t2138 *, Dictionary_2_t2132 *, const MethodInfo*))Enumerator__ctor_m14192_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14193_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14193(__this, method) (( Object_t * (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14193_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m14194_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14194(__this, method) (( void (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m14194_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t779  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14195_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14195(__this, method) (( DictionaryEntry_t779  (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14195_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14196_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14196(__this, method) (( Object_t * (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14196_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14197_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14197(__this, method) (( Object_t * (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14197_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14198_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14198(__this, method) (( bool (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_MoveNext_m14198_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2134  Enumerator_get_Current_m14199_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14199(__this, method) (( KeyValuePair_2_t2134  (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_get_Current_m14199_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14200_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14200(__this, method) (( Object_t * (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_get_CurrentKey_m14200_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14201_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14201(__this, method) (( int32_t (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_get_CurrentValue_m14201_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m14202_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_Reset_m14202(__this, method) (( void (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_Reset_m14202_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14203_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14203(__this, method) (( void (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_VerifyState_m14203_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14204_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14204(__this, method) (( void (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_VerifyCurrent_m14204_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14205_gshared (Enumerator_t2138 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14205(__this, method) (( void (*) (Enumerator_t2138 *, const MethodInfo*))Enumerator_Dispose_m14205_gshared)(__this, method)
