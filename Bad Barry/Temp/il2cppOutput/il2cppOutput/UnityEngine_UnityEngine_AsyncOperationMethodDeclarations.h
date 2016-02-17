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

// UnityEngine.AsyncOperation
struct AsyncOperation_t150;
struct AsyncOperation_t150_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m3236 (AsyncOperation_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m3237 (AsyncOperation_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m3238 (AsyncOperation_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C" bool AsyncOperation_get_isDone_m963 (AsyncOperation_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t150_marshal(const AsyncOperation_t150& unmarshaled, AsyncOperation_t150_marshaled& marshaled);
extern "C" void AsyncOperation_t150_marshal_back(const AsyncOperation_t150_marshaled& marshaled, AsyncOperation_t150& unmarshaled);
extern "C" void AsyncOperation_t150_marshal_cleanup(AsyncOperation_t150_marshaled& marshaled);
