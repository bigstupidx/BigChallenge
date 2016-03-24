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

// LitJson.Lexer/StateHandler
struct StateHandler_t1030384025;
// System.Object
struct Il2CppObject;
// LitJson.FsmContext
struct FsmContext_t1497545108;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "LitJson_LitJson_FsmContext1497545108.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void StateHandler__ctor_m3491238465 (StateHandler_t1030384025 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
extern "C"  bool StateHandler_Invoke_m165363923 (StateHandler_t1030384025 * __this, FsmContext_t1497545108 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_StateHandler_t1030384025(Il2CppObject* delegate, FsmContext_t1497545108 * ___ctx);
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StateHandler_BeginInvoke_m1450599572 (StateHandler_t1030384025 * __this, FsmContext_t1497545108 * ___ctx, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
extern "C"  bool StateHandler_EndInvoke_m3407616839 (StateHandler_t1030384025 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
