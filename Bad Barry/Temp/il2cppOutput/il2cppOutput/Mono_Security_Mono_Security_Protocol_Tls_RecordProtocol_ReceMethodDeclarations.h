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
struct ReceiveRecordAsyncResult_t926;
// System.AsyncCallback
struct AsyncCallback_t315;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t817;
// System.IO.Stream
struct Stream_t928;
// System.Exception
struct Exception_t165;
// System.Threading.WaitHandle
struct WaitHandle_t979;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m4743 (ReceiveRecordAsyncResult_t926 * __this, AsyncCallback_t315 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t817* ___initialBuffer, Stream_t928 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t928 * ReceiveRecordAsyncResult_get_Record_m4744 (ReceiveRecordAsyncResult_t926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t817* ReceiveRecordAsyncResult_get_ResultingBuffer_m4745 (ReceiveRecordAsyncResult_t926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t817* ReceiveRecordAsyncResult_get_InitialBuffer_m4746 (ReceiveRecordAsyncResult_t926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m4747 (ReceiveRecordAsyncResult_t926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t165 * ReceiveRecordAsyncResult_get_AsyncException_m4748 (ReceiveRecordAsyncResult_t926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m4749 (ReceiveRecordAsyncResult_t926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t979 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m4750 (ReceiveRecordAsyncResult_t926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m4751 (ReceiveRecordAsyncResult_t926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4752 (ReceiveRecordAsyncResult_t926 * __this, Exception_t165 * ___ex, ByteU5BU5D_t817* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4753 (ReceiveRecordAsyncResult_t926 * __this, Exception_t165 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4754 (ReceiveRecordAsyncResult_t926 * __this, ByteU5BU5D_t817* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
