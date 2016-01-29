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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>
struct DefaultComparer_t2603;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::.ctor()
extern "C" void DefaultComparer__ctor_m20151_gshared (DefaultComparer_t2603 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20151(__this, method) (( void (*) (DefaultComparer_t2603 *, const MethodInfo*))DefaultComparer__ctor_m20151_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20152_gshared (DefaultComparer_t2603 * __this, CustomAttributeTypedArgument_t1439  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m20152(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2603 *, CustomAttributeTypedArgument_t1439 , const MethodInfo*))DefaultComparer_GetHashCode_m20152_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20153_gshared (DefaultComparer_t2603 * __this, CustomAttributeTypedArgument_t1439  ___x, CustomAttributeTypedArgument_t1439  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m20153(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2603 *, CustomAttributeTypedArgument_t1439 , CustomAttributeTypedArgument_t1439 , const MethodInfo*))DefaultComparer_Equals_m20153_gshared)(__this, ___x, ___y, method)
