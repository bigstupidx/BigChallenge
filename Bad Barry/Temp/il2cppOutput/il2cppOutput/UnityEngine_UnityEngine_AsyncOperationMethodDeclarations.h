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
struct AsyncOperation_t144;
struct AsyncOperation_t144_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m3216 (AsyncOperation_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m3217 (AsyncOperation_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m3218 (AsyncOperation_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C" bool AsyncOperation_get_isDone_m940 (AsyncOperation_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t144_marshal(const AsyncOperation_t144& unmarshaled, AsyncOperation_t144_marshaled& marshaled);
extern "C" void AsyncOperation_t144_marshal_back(const AsyncOperation_t144_marshaled& marshaled, AsyncOperation_t144& unmarshaled);
extern "C" void AsyncOperation_t144_marshal_cleanup(AsyncOperation_t144_marshaled& marshaled);
