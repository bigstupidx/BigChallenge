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
struct Dictionary_2_t2433;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18544_gshared (Enumerator_t2437 * __this, Dictionary_2_t2433 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m18544(__this, ___host, method) (( void (*) (Enumerator_t2437 *, Dictionary_2_t2433 *, const MethodInfo*))Enumerator__ctor_m18544_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18545_gshared (Enumerator_t2437 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18545(__this, method) (( Object_t * (*) (Enumerator_t2437 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18545_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18546_gshared (Enumerator_t2437 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18546(__this, method) (( void (*) (Enumerator_t2437 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m18547_gshared (Enumerator_t2437 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18547(__this, method) (( void (*) (Enumerator_t2437 *, const MethodInfo*))Enumerator_Dispose_m18547_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18548_gshared (Enumerator_t2437 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18548(__this, method) (( bool (*) (Enumerator_t2437 *, const MethodInfo*))Enumerator_MoveNext_m18548_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" ObjectMetadata_t698  Enumerator_get_Current_m18549_gshared (Enumerator_t2437 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18549(__this, method) (( ObjectMetadata_t698  (*) (Enumerator_t2437 *, const MethodInfo*))Enumerator_get_Current_m18549_gshared)(__this, method)
