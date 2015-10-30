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
struct ReceiveRecordAsyncResult_t753;
// System.AsyncCallback
struct AsyncCallback_t208;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t644;
// System.IO.Stream
struct Stream_t755;
// System.Exception
struct Exception_t62;
// System.Threading.WaitHandle
struct WaitHandle_t807;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3918 (ReceiveRecordAsyncResult_t753 * __this, AsyncCallback_t208 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t644* ___initialBuffer, Stream_t755 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t755 * ReceiveRecordAsyncResult_get_Record_m3919 (ReceiveRecordAsyncResult_t753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t644* ReceiveRecordAsyncResult_get_ResultingBuffer_m3920 (ReceiveRecordAsyncResult_t753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t644* ReceiveRecordAsyncResult_get_InitialBuffer_m3921 (ReceiveRecordAsyncResult_t753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3922 (ReceiveRecordAsyncResult_t753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t62 * ReceiveRecordAsyncResult_get_AsyncException_m3923 (ReceiveRecordAsyncResult_t753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3924 (ReceiveRecordAsyncResult_t753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t807 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3925 (ReceiveRecordAsyncResult_t753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3926 (ReceiveRecordAsyncResult_t753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3927 (ReceiveRecordAsyncResult_t753 * __this, Exception_t62 * ___ex, ByteU5BU5D_t644* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3928 (ReceiveRecordAsyncResult_t753 * __this, Exception_t62 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3929 (ReceiveRecordAsyncResult_t753 * __this, ByteU5BU5D_t644* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
