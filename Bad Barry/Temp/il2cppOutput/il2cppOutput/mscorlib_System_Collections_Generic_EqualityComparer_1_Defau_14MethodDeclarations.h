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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>
struct DefaultComparer_t2630;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::.ctor()
extern "C" void DefaultComparer__ctor_m20403_gshared (DefaultComparer_t2630 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20403(__this, method) (( void (*) (DefaultComparer_t2630 *, const MethodInfo*))DefaultComparer__ctor_m20403_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20404_gshared (DefaultComparer_t2630 * __this, CustomAttributeNamedArgument_t1453  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m20404(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2630 *, CustomAttributeNamedArgument_t1453 , const MethodInfo*))DefaultComparer_GetHashCode_m20404_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20405_gshared (DefaultComparer_t2630 * __this, CustomAttributeNamedArgument_t1453  ___x, CustomAttributeNamedArgument_t1453  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m20405(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2630 *, CustomAttributeNamedArgument_t1453 , CustomAttributeNamedArgument_t1453 , const MethodInfo*))DefaultComparer_Equals_m20405_gshared)(__this, ___x, ___y, method)
