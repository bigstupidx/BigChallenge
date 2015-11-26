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
struct DefaultComparer_t1_1129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m1_7023_gshared (DefaultComparer_t1_1129 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_7023(__this, method) (( void (*) (DefaultComparer_t1_1129 *, const MethodInfo*))DefaultComparer__ctor_m1_7023_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_7024_gshared (DefaultComparer_t1_1129 * __this, Guid_t1_722  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_7024(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1129 *, Guid_t1_722 , const MethodInfo*))DefaultComparer_GetHashCode_m1_7024_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_7025_gshared (DefaultComparer_t1_1129 * __this, Guid_t1_722  ___x, Guid_t1_722  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_7025(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1129 *, Guid_t1_722 , Guid_t1_722 , const MethodInfo*))DefaultComparer_Equals_m1_7025_gshared)(__this, ___x, ___y, method)
