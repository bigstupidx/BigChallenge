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

// System.IO.BinaryWriter
struct BinaryWriter_t1346;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1860;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1585;
// System.IO.BinaryReader
struct BinaryReader_t1344;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1859;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t181;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t1903;
// System.Object[]
struct ObjectU5BU5D_t179;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t777;
// System.String[]
struct StringU5BU5D_t146;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodCall(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C" void MessageFormatter_WriteMethodCall_m9893 (Object_t * __this /* static, unused */, BinaryWriter_t1346 * ___writer, Object_t * ___obj, HeaderU5BU5D_t1860* ___headers, Object_t * ___surrogateSelector, StreamingContext_t700  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodResponse(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C" void MessageFormatter_WriteMethodResponse_m9894 (Object_t * __this /* static, unused */, BinaryWriter_t1346 * ___writer, Object_t * ___obj, HeaderU5BU5D_t1860* ___headers, Object_t * ___surrogateSelector, StreamingContext_t700  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodCall_m9895 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1344 * ___reader, bool ___hasHeaders, HeaderHandler_t1859 * ___headerHandler, BinaryFormatter_t181 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodResponse_m9896 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1344 * ___reader, bool ___hasHeaders, HeaderHandler_t1859 * ___headerHandler, Object_t * ___methodCallMessage, BinaryFormatter_t181 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::AllTypesArePrimitive(System.Object[])
extern "C" bool MessageFormatter_AllTypesArePrimitive_m9897 (Object_t * __this /* static, unused */, ObjectU5BU5D_t179* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsMethodPrimitive(System.Type)
extern "C" bool MessageFormatter_IsMethodPrimitive_m9898 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Serialization.Formatters.Binary.MessageFormatter::GetExtraProperties(System.Collections.IDictionary,System.String[])
extern "C" ObjectU5BU5D_t179* MessageFormatter_GetExtraProperties_m9899 (Object_t * __this /* static, unused */, Object_t * ___properties, StringU5BU5D_t146* ___internalKeys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsInternalKey(System.String,System.String[])
extern "C" bool MessageFormatter_IsInternalKey_m9900 (Object_t * __this /* static, unused */, String_t* ___key, StringU5BU5D_t146* ___internalKeys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
