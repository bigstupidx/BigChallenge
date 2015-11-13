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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t849;
// System.AsyncCallback
struct AsyncCallback_t229;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t740;
// System.IO.Stream
struct Stream_t851;
// System.Exception
struct Exception_t82;
// System.Threading.WaitHandle
struct WaitHandle_t902;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m4333 (ReceiveRecordAsyncResult_t849 * __this, AsyncCallback_t229 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t740* ___initialBuffer, Stream_t851 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t851 * ReceiveRecordAsyncResult_get_Record_m4334 (ReceiveRecordAsyncResult_t849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t740* ReceiveRecordAsyncResult_get_ResultingBuffer_m4335 (ReceiveRecordAsyncResult_t849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t740* ReceiveRecordAsyncResult_get_InitialBuffer_m4336 (ReceiveRecordAsyncResult_t849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m4337 (ReceiveRecordAsyncResult_t849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t82 * ReceiveRecordAsyncResult_get_AsyncException_m4338 (ReceiveRecordAsyncResult_t849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m4339 (ReceiveRecordAsyncResult_t849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t902 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m4340 (ReceiveRecordAsyncResult_t849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m4341 (ReceiveRecordAsyncResult_t849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4342 (ReceiveRecordAsyncResult_t849 * __this, Exception_t82 * ___ex, ByteU5BU5D_t740* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4343 (ReceiveRecordAsyncResult_t849 * __this, Exception_t82 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4344 (ReceiveRecordAsyncResult_t849 * __this, ByteU5BU5D_t740* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
