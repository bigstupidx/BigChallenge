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

// System.IO.IsolatedStorage.IsolatedStorageException
struct IsolatedStorageException_t1275;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t640;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor()
extern "C" void IsolatedStorageException__ctor_m7738 (IsolatedStorageException_t1275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor(System.String)
extern "C" void IsolatedStorageException__ctor_m7739 (IsolatedStorageException_t1275 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IsolatedStorageException__ctor_m7740 (IsolatedStorageException_t1275 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;