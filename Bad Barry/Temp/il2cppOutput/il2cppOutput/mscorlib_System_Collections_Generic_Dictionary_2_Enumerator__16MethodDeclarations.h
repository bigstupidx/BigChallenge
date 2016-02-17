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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2500;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19014_gshared (Enumerator_t2505 * __this, Dictionary_2_t2500 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m19014(__this, ___dictionary, method) (( void (*) (Enumerator_t2505 *, Dictionary_2_t2500 *, const MethodInfo*))Enumerator__ctor_m19014_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19015_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19015(__this, method) (( Object_t * (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19015_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m19016_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m19016(__this, method) (( void (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m19016_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t784  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19017_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19017(__this, method) (( DictionaryEntry_t784  (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19017_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19018_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19018(__this, method) (( Object_t * (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19018_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19019_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19019(__this, method) (( Object_t * (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19019_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19020_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19020(__this, method) (( bool (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_MoveNext_m19020_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" KeyValuePair_2_t2472  Enumerator_get_Current_m19021_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19021(__this, method) (( KeyValuePair_2_t2472  (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_get_Current_m19021_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19022_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m19022(__this, method) (( Object_t * (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_get_CurrentKey_m19022_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentValue()
extern "C" ObjectMetadata_t748  Enumerator_get_CurrentValue_m19023_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m19023(__this, method) (( ObjectMetadata_t748  (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_get_CurrentValue_m19023_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void Enumerator_Reset_m19024_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_Reset_m19024(__this, method) (( void (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_Reset_m19024_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m19025_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m19025(__this, method) (( void (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_VerifyState_m19025_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19026_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m19026(__this, method) (( void (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_VerifyCurrent_m19026_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m19027_gshared (Enumerator_t2505 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19027(__this, method) (( void (*) (Enumerator_t2505 *, const MethodInfo*))Enumerator_Dispose_m19027_gshared)(__this, method)
