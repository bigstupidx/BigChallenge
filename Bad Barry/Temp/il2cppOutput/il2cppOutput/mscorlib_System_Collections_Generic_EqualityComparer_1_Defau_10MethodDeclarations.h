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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<LitJson.ArrayMetadata>
struct DefaultComparer_t2488;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<LitJson.ArrayMetadata>::.ctor()
extern "C" void DefaultComparer__ctor_m18779_gshared (DefaultComparer_t2488 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18779(__this, method) (( void (*) (DefaultComparer_t2488 *, const MethodInfo*))DefaultComparer__ctor_m18779_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<LitJson.ArrayMetadata>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18780_gshared (DefaultComparer_t2488 * __this, ArrayMetadata_t747  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18780(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2488 *, ArrayMetadata_t747 , const MethodInfo*))DefaultComparer_GetHashCode_m18780_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<LitJson.ArrayMetadata>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18781_gshared (DefaultComparer_t2488 * __this, ArrayMetadata_t747  ___x, ArrayMetadata_t747  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18781(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2488 *, ArrayMetadata_t747 , ArrayMetadata_t747 , const MethodInfo*))DefaultComparer_Equals_m18781_gshared)(__this, ___x, ___y, method)
