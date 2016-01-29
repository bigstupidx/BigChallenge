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

// System.Resources.RuntimeResourceSet
struct RuntimeResourceSet_t1480;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1364;
// System.IO.Stream
struct Stream_t913;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Resources.RuntimeResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C" void RuntimeResourceSet__ctor_m9231 (RuntimeResourceSet_t1480 * __this, UnmanagedMemoryStream_t1364 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.RuntimeResourceSet::.ctor(System.IO.Stream)
extern "C" void RuntimeResourceSet__ctor_m9232 (RuntimeResourceSet_t1480 * __this, Stream_t913 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.RuntimeResourceSet::.ctor(System.String)
extern "C" void RuntimeResourceSet__ctor_m9233 (RuntimeResourceSet_t1480 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::GetObject(System.String)
extern "C" Object_t * RuntimeResourceSet_GetObject_m9234 (RuntimeResourceSet_t1480 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::GetObject(System.String,System.Boolean)
extern "C" Object_t * RuntimeResourceSet_GetObject_m9235 (RuntimeResourceSet_t1480 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::CloneDisposableObjectIfPossible(System.Object)
extern "C" Object_t * RuntimeResourceSet_CloneDisposableObjectIfPossible_m9236 (RuntimeResourceSet_t1480 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
