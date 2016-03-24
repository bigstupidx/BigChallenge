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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m11777_gshared (Nullable_1_t1906 * __this, TimeSpan_t178  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m11777(__this, ___value, method) (( void (*) (Nullable_1_t1906 *, TimeSpan_t178 , const MethodInfo*))Nullable_1__ctor_m11777_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m11778_gshared (Nullable_1_t1906 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m11778(__this, method) (( bool (*) (Nullable_1_t1906 *, const MethodInfo*))Nullable_1_get_HasValue_m11778_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t178  Nullable_1_get_Value_m11779_gshared (Nullable_1_t1906 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11779(__this, method) (( TimeSpan_t178  (*) (Nullable_1_t1906 *, const MethodInfo*))Nullable_1_get_Value_m11779_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m20651_gshared (Nullable_1_t1906 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m20651(__this, ___other, method) (( bool (*) (Nullable_1_t1906 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m20651_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m20652_gshared (Nullable_1_t1906 * __this, Nullable_1_t1906  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m20652(__this, ___other, method) (( bool (*) (Nullable_1_t1906 *, Nullable_1_t1906 , const MethodInfo*))Nullable_1_Equals_m20652_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m20653_gshared (Nullable_1_t1906 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m20653(__this, method) (( int32_t (*) (Nullable_1_t1906 *, const MethodInfo*))Nullable_1_GetHashCode_m20653_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m20654_gshared (Nullable_1_t1906 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m20654(__this, method) (( String_t* (*) (Nullable_1_t1906 *, const MethodInfo*))Nullable_1_ToString_m20654_gshared)(__this, method)
