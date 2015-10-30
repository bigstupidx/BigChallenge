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
extern "C" void Nullable_1__ctor_m10510_gshared (Nullable_1_t1706 * __this, TimeSpan_t916  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10510(__this, ___value, method) (( void (*) (Nullable_1_t1706 *, TimeSpan_t916 , const MethodInfo*))Nullable_1__ctor_m10510_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10511_gshared (Nullable_1_t1706 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10511(__this, method) (( bool (*) (Nullable_1_t1706 *, const MethodInfo*))Nullable_1_get_HasValue_m10511_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t916  Nullable_1_get_Value_m10512_gshared (Nullable_1_t1706 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10512(__this, method) (( TimeSpan_t916  (*) (Nullable_1_t1706 *, const MethodInfo*))Nullable_1_get_Value_m10512_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m17522_gshared (Nullable_1_t1706 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17522(__this, ___other, method) (( bool (*) (Nullable_1_t1706 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m17522_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m17523_gshared (Nullable_1_t1706 * __this, Nullable_1_t1706  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17523(__this, ___other, method) (( bool (*) (Nullable_1_t1706 *, Nullable_1_t1706 , const MethodInfo*))Nullable_1_Equals_m17523_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m17524_gshared (Nullable_1_t1706 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m17524(__this, method) (( int32_t (*) (Nullable_1_t1706 *, const MethodInfo*))Nullable_1_GetHashCode_m17524_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m17525_gshared (Nullable_1_t1706 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m17525(__this, method) (( String_t* (*) (Nullable_1_t1706 *, const MethodInfo*))Nullable_1_ToString_m17525_gshared)(__this, method)
