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
struct StateHandler_t724;
// System.Object
struct Object_t;
// LitJson.FsmContext
struct FsmContext_t723;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
extern "C" void StateHandler__ctor_m3740 (StateHandler_t724 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
extern "C" bool StateHandler_Invoke_m3741 (StateHandler_t724 * __this, FsmContext_t723 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_StateHandler_t724(Il2CppObject* delegate, FsmContext_t723 * ___ctx);
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
extern "C" Object_t * StateHandler_BeginInvoke_m3742 (StateHandler_t724 * __this, FsmContext_t723 * ___ctx, AsyncCallback_t266 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
extern "C" bool StateHandler_EndInvoke_m3743 (StateHandler_t724 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
