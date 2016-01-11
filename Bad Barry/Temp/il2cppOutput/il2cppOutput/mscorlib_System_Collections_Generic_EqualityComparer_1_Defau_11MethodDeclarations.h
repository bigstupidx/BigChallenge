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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<LitJson.ObjectMetadata>
struct DefaultComparer_t2443;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<LitJson.ObjectMetadata>::.ctor()
extern "C" void DefaultComparer__ctor_m18588_gshared (DefaultComparer_t2443 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18588(__this, method) (( void (*) (DefaultComparer_t2443 *, const MethodInfo*))DefaultComparer__ctor_m18588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<LitJson.ObjectMetadata>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18589_gshared (DefaultComparer_t2443 * __this, ObjectMetadata_t698  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18589(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2443 *, ObjectMetadata_t698 , const MethodInfo*))DefaultComparer_GetHashCode_m18589_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<LitJson.ObjectMetadata>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18590_gshared (DefaultComparer_t2443 * __this, ObjectMetadata_t698  ___x, ObjectMetadata_t698  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18590(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2443 *, ObjectMetadata_t698 , ObjectMetadata_t698 , const MethodInfo*))DefaultComparer_Equals_m18590_gshared)(__this, ___x, ___y, method)
