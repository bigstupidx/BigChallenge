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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2331;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m17540_gshared (DefaultComparer_t2331 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17540(__this, method) (( void (*) (DefaultComparer_t2331 *, const MethodInfo*))DefaultComparer__ctor_m17540_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17541_gshared (DefaultComparer_t2331 * __this, Guid_t1622  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17541(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2331 *, Guid_t1622 , const MethodInfo*))DefaultComparer_GetHashCode_m17541_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17542_gshared (DefaultComparer_t2331 * __this, Guid_t1622  ___x, Guid_t1622  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17542(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2331 *, Guid_t1622 , Guid_t1622 , const MethodInfo*))DefaultComparer_Equals_m17542_gshared)(__this, ___x, ___y, method)
