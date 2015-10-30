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
struct Dictionary_2_t1886;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12279_gshared (Enumerator_t1892 * __this, Dictionary_2_t1886 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12279(__this, ___dictionary, method) (( void (*) (Enumerator_t1892 *, Dictionary_2_t1886 *, const MethodInfo*))Enumerator__ctor_m12279_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12280_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12280(__this, method) (( Object_t * (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12280_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12281_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12281(__this, method) (( void (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12281_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1005  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12282_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12282(__this, method) (( DictionaryEntry_t1005  (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12282_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12283_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12283(__this, method) (( Object_t * (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12283_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12284_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12284(__this, method) (( Object_t * (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12284_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12285_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12285(__this, method) (( bool (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_MoveNext_m12285_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1888  Enumerator_get_Current_m12286_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12286(__this, method) (( KeyValuePair_2_t1888  (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_get_Current_m12286_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12287_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12287(__this, method) (( int32_t (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_get_CurrentKey_m12287_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12288_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12288(__this, method) (( Object_t * (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_get_CurrentValue_m12288_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m12289_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12289(__this, method) (( void (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_Reset_m12289_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12290_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12290(__this, method) (( void (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_VerifyState_m12290_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12291_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12291(__this, method) (( void (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_VerifyCurrent_m12291_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12292_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12292(__this, method) (( void (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_Dispose_m12292_gshared)(__this, method)
