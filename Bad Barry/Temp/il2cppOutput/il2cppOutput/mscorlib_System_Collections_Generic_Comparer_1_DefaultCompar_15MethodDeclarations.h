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

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2654;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m20629_gshared (DefaultComparer_t2654 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20629(__this, method) (( void (*) (DefaultComparer_t2654 *, const MethodInfo*))DefaultComparer__ctor_m20629_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m20630_gshared (DefaultComparer_t2654 * __this, TimeSpan_t160  ___x, TimeSpan_t160  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m20630(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2654 *, TimeSpan_t160 , TimeSpan_t160 , const MethodInfo*))DefaultComparer_Compare_m20630_gshared)(__this, ___x, ___y, method)
