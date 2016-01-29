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
struct ReceiveRecordAsyncResult_t911;
// System.AsyncCallback
struct AsyncCallback_t298;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t802;
// System.IO.Stream
struct Stream_t913;
// System.Exception
struct Exception_t145;
// System.Threading.WaitHandle
struct WaitHandle_t964;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m4661 (ReceiveRecordAsyncResult_t911 * __this, AsyncCallback_t298 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t802* ___initialBuffer, Stream_t913 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t913 * ReceiveRecordAsyncResult_get_Record_m4662 (ReceiveRecordAsyncResult_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t802* ReceiveRecordAsyncResult_get_ResultingBuffer_m4663 (ReceiveRecordAsyncResult_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t802* ReceiveRecordAsyncResult_get_InitialBuffer_m4664 (ReceiveRecordAsyncResult_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m4665 (ReceiveRecordAsyncResult_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t145 * ReceiveRecordAsyncResult_get_AsyncException_m4666 (ReceiveRecordAsyncResult_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m4667 (ReceiveRecordAsyncResult_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t964 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m4668 (ReceiveRecordAsyncResult_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m4669 (ReceiveRecordAsyncResult_t911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4670 (ReceiveRecordAsyncResult_t911 * __this, Exception_t145 * ___ex, ByteU5BU5D_t802* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4671 (ReceiveRecordAsyncResult_t911 * __this, Exception_t145 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4672 (ReceiveRecordAsyncResult_t911 * __this, ByteU5BU5D_t802* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
