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

// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t1726;
// System.Threading.WaitHandle
struct WaitHandle_t934;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t1727;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" void RegisteredWaitHandle__ctor_m10552 (RegisteredWaitHandle_t1726 * __this, WaitHandle_t934 * ___waitObject, WaitOrTimerCallback_t1727 * ___callback, Object_t * ___state, TimeSpan_t126  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C" void RegisteredWaitHandle_Wait_m10553 (RegisteredWaitHandle_t1726 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C" void RegisteredWaitHandle_DoCallBack_m10554 (RegisteredWaitHandle_t1726 * __this, Object_t * ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
