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

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t886;
// System.AsyncCallback
struct AsyncCallback_t252;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t759;
// System.Exception
struct Exception_t105;
// System.Threading.WaitHandle
struct WaitHandle_t921;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" void InternalAsyncResult__ctor_m4523 (InternalAsyncResult_t886 * __this, AsyncCallback_t252 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t759* ___buffer, int32_t ___offset, int32_t ___count, bool ___fromWrite, bool ___proceedAfterHandshake, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
extern "C" bool InternalAsyncResult_get_ProceedAfterHandshake_m4524 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
extern "C" bool InternalAsyncResult_get_FromWrite_m4525 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
extern "C" ByteU5BU5D_t759* InternalAsyncResult_get_Buffer_m4526 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
extern "C" int32_t InternalAsyncResult_get_Offset_m4527 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
extern "C" int32_t InternalAsyncResult_get_Count_m4528 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
extern "C" int32_t InternalAsyncResult_get_BytesRead_m4529 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
extern "C" Object_t * InternalAsyncResult_get_AsyncState_m4530 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
extern "C" Exception_t105 * InternalAsyncResult_get_AsyncException_m4531 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
extern "C" bool InternalAsyncResult_get_CompletedWithError_m4532 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t921 * InternalAsyncResult_get_AsyncWaitHandle_m4533 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
extern "C" bool InternalAsyncResult_get_IsCompleted_m4534 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void InternalAsyncResult_SetComplete_m4535 (InternalAsyncResult_t886 * __this, Exception_t105 * ___ex, int32_t ___bytesRead, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
extern "C" void InternalAsyncResult_SetComplete_m4536 (InternalAsyncResult_t886 * __this, Exception_t105 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
extern "C" void InternalAsyncResult_SetComplete_m4537 (InternalAsyncResult_t886 * __this, int32_t ___bytesRead, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
extern "C" void InternalAsyncResult_SetComplete_m4538 (InternalAsyncResult_t886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;