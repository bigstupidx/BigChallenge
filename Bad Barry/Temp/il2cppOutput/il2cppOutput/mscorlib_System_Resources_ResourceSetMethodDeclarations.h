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

// System.Resources.ResourceSet
struct ResourceSet_t1448;
// System.IO.Stream
struct Stream_t883;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1334;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t730;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Resources.ResourceSet::.ctor()
extern "C" void ResourceSet__ctor_m9038 (ResourceSet_t1448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.Stream)
extern "C" void ResourceSet__ctor_m9039 (ResourceSet_t1448 * __this, Stream_t883 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C" void ResourceSet__ctor_m9040 (ResourceSet_t1448 * __this, UnmanagedMemoryStream_t1334 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.String)
extern "C" void ResourceSet__ctor_m9041 (ResourceSet_t1448 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Resources.ResourceSet::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ResourceSet_System_Collections_IEnumerable_GetEnumerator_m9042 (ResourceSet_t1448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose()
extern "C" void ResourceSet_Dispose_m9043 (ResourceSet_t1448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose(System.Boolean)
extern "C" void ResourceSet_Dispose_m9044 (ResourceSet_t1448 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Resources.ResourceSet::GetEnumerator()
extern "C" Object_t * ResourceSet_GetEnumerator_m9045 (ResourceSet_t1448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObjectInternal(System.String,System.Boolean)
extern "C" Object_t * ResourceSet_GetObjectInternal_m9046 (ResourceSet_t1448 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String)
extern "C" Object_t * ResourceSet_GetObject_m9047 (ResourceSet_t1448 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String,System.Boolean)
extern "C" Object_t * ResourceSet_GetObject_m9048 (ResourceSet_t1448 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::ReadResources()
extern "C" void ResourceSet_ReadResources_m9049 (ResourceSet_t1448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
