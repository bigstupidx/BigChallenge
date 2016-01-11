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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2411;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_17.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18271_gshared (Enumerator_t2415 * __this, Dictionary_2_t2411 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m18271(__this, ___host, method) (( void (*) (Enumerator_t2415 *, Dictionary_2_t2411 *, const MethodInfo*))Enumerator__ctor_m18271_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18272_gshared (Enumerator_t2415 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18272(__this, method) (( Object_t * (*) (Enumerator_t2415 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18272_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18273_gshared (Enumerator_t2415 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18273(__this, method) (( void (*) (Enumerator_t2415 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18273_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m18274_gshared (Enumerator_t2415 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18274(__this, method) (( void (*) (Enumerator_t2415 *, const MethodInfo*))Enumerator_Dispose_m18274_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18275_gshared (Enumerator_t2415 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18275(__this, method) (( bool (*) (Enumerator_t2415 *, const MethodInfo*))Enumerator_MoveNext_m18275_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" ArrayMetadata_t697  Enumerator_get_Current_m18276_gshared (Enumerator_t2415 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18276(__this, method) (( ArrayMetadata_t697  (*) (Enumerator_t2415 *, const MethodInfo*))Enumerator_get_Current_m18276_gshared)(__this, method)
