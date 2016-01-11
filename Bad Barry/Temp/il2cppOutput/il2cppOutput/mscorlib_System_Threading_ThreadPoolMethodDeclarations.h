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

// System.Threading.WaitCallback
struct WaitCallback_t1806;
// System.Object
struct Object_t;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t1716;
// System.Threading.WaitHandle
struct WaitHandle_t934;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t1717;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C" bool ThreadPool_QueueUserWorkItem_m10505 (Object_t * __this /* static, unused */, WaitCallback_t1806 * ___callBack, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.Int64,System.Boolean)
extern "C" RegisteredWaitHandle_t1716 * ThreadPool_RegisterWaitForSingleObject_m10506 (Object_t * __this /* static, unused */, WaitHandle_t934 * ___waitObject, WaitOrTimerCallback_t1717 * ___callBack, Object_t * ___state, int64_t ___millisecondsTimeOutInterval, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" RegisteredWaitHandle_t1716 * ThreadPool_RegisterWaitForSingleObject_m10507 (Object_t * __this /* static, unused */, WaitHandle_t934 * ___waitObject, WaitOrTimerCallback_t1717 * ___callBack, Object_t * ___state, TimeSpan_t126  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
