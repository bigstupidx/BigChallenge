﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Array/SimpleEnumerator
struct SimpleEnumerator_t1188;
// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Array/SimpleEnumerator::.ctor(System.Array)
extern "C" void SimpleEnumerator__ctor_m6815 (SimpleEnumerator_t1188 * __this, Array_t * ___arrayToEnumerate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array/SimpleEnumerator::get_Current()
extern "C" Object_t * SimpleEnumerator_get_Current_m6816 (SimpleEnumerator_t1188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array/SimpleEnumerator::MoveNext()
extern "C" bool SimpleEnumerator_MoveNext_m6817 (SimpleEnumerator_t1188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/SimpleEnumerator::Reset()
extern "C" void SimpleEnumerator_Reset_m6818 (SimpleEnumerator_t1188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array/SimpleEnumerator::Clone()
extern "C" Object_t * SimpleEnumerator_Clone_m6819 (SimpleEnumerator_t1188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;