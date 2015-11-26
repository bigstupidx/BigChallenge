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
struct Dictionary_2_t1_1022;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_6132_gshared (Enumerator_t1_1030 * __this, Dictionary_2_t1_1022 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_6132(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1030 *, Dictionary_2_t1_1022 *, const MethodInfo*))Enumerator__ctor_m1_6132_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_6133_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_6133(__this, method) (( Object_t * (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_6133_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_6134_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_6134(__this, method) (( void (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_6134_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6135_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6135(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6135_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6136_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6136(__this, method) (( Object_t * (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6136_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6137_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6137(__this, method) (( Object_t * (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6137_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_6138_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_6138(__this, method) (( bool (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_MoveNext_m1_6138_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1_1025  Enumerator_get_Current_m1_6139_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_6139(__this, method) (( KeyValuePair_2_t1_1025  (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_get_Current_m1_6139_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_6140_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_6140(__this, method) (( Object_t * (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_6140_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m1_6141_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_6141(__this, method) (( int32_t (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_6141_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m1_6142_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_6142(__this, method) (( void (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_Reset_m1_6142_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_6143_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_6143(__this, method) (( void (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_VerifyState_m1_6143_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_6144_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_6144(__this, method) (( void (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_6144_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m1_6145_gshared (Enumerator_t1_1030 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_6145(__this, method) (( void (*) (Enumerator_t1_1030 *, const MethodInfo*))Enumerator_Dispose_m1_6145_gshared)(__this, method)
