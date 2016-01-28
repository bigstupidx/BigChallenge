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

// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t1754;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t297;
// System.AsyncCallback
struct AsyncCallback_t298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitOrTimerCallback::.ctor(System.Object,System.IntPtr)
extern "C" void WaitOrTimerCallback__ctor_m11655 (WaitOrTimerCallback_t1754 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitOrTimerCallback::Invoke(System.Object,System.Boolean)
extern "C" void WaitOrTimerCallback_Invoke_m11656 (WaitOrTimerCallback_t1754 * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WaitOrTimerCallback_t1754(Il2CppObject* delegate, Object_t * ___state, bool ___timedOut);
// System.IAsyncResult System.Threading.WaitOrTimerCallback::BeginInvoke(System.Object,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * WaitOrTimerCallback_BeginInvoke_m11657 (WaitOrTimerCallback_t1754 * __this, Object_t * ___state, bool ___timedOut, AsyncCallback_t298 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitOrTimerCallback::EndInvoke(System.IAsyncResult)
extern "C" void WaitOrTimerCallback_EndInvoke_m11658 (WaitOrTimerCallback_t1754 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
