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

// Singleton`1<System.Object>
struct Singleton_1_t2028;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Singleton`1<System.Object>::.ctor()
extern "C" void Singleton_1__ctor_m12739_gshared (Singleton_1_t2028 * __this, const MethodInfo* method);
#define Singleton_1__ctor_m12739(__this, method) (( void (*) (Singleton_1_t2028 *, const MethodInfo*))Singleton_1__ctor_m12739_gshared)(__this, method)
// T Singleton`1<System.Object>::get_instance()
extern "C" Object_t * Singleton_1_get_instance_m12740_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Singleton_1_get_instance_m12740(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Singleton_1_get_instance_m12740_gshared)(__this /* static, unused */, method)
