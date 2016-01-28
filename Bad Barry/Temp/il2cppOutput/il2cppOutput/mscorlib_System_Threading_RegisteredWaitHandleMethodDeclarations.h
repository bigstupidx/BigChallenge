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
struct RegisteredWaitHandle_t1753;
// System.Threading.WaitHandle
struct WaitHandle_t961;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t1754;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" void RegisteredWaitHandle__ctor_m10730 (RegisteredWaitHandle_t1753 * __this, WaitHandle_t961 * ___waitObject, WaitOrTimerCallback_t1754 * ___callback, Object_t * ___state, TimeSpan_t160  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C" void RegisteredWaitHandle_Wait_m10731 (RegisteredWaitHandle_t1753 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C" void RegisteredWaitHandle_DoCallBack_m10732 (RegisteredWaitHandle_t1753 * __this, Object_t * ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
