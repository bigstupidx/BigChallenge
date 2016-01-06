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
struct Dictionary_2_t2021;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13270_gshared (Enumerator_t2027 * __this, Dictionary_2_t2021 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13270(__this, ___dictionary, method) (( void (*) (Enumerator_t2027 *, Dictionary_2_t2021 *, const MethodInfo*))Enumerator__ctor_m13270_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13271_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13271(__this, method) (( Object_t * (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13271_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m13272_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m13272(__this, method) (( void (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m13272_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t721  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13273_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13273(__this, method) (( DictionaryEntry_t721  (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13273_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13274_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13274(__this, method) (( Object_t * (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13274_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13275_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13275(__this, method) (( Object_t * (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13275_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13276_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13276(__this, method) (( bool (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_MoveNext_m13276_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2023  Enumerator_get_Current_m13277_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13277(__this, method) (( KeyValuePair_2_t2023  (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_get_Current_m13277_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13278_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13278(__this, method) (( Object_t * (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_get_CurrentKey_m13278_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m13279_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13279(__this, method) (( int32_t (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_get_CurrentValue_m13279_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m13280_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_Reset_m13280(__this, method) (( void (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_Reset_m13280_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m13281_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13281(__this, method) (( void (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_VerifyState_m13281_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13282_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13282(__this, method) (( void (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_VerifyCurrent_m13282_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m13283_gshared (Enumerator_t2027 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13283(__this, method) (( void (*) (Enumerator_t2027 *, const MethodInfo*))Enumerator_Dispose_m13283_gshared)(__this, method)
