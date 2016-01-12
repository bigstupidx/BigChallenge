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

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t127;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1540;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t1588;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t883;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1814;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1815;
// System.IO.BinaryWriter
struct BinaryWriter_t1301;
// System.IO.BinaryReader
struct BinaryReader_t1299;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C" void BinaryFormatter__ctor_m528 (BinaryFormatter_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" void BinaryFormatter__ctor_m9610 (BinaryFormatter_t127 * __this, Object_t * ___selector, StreamingContext_t654  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern "C" Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m9611 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C" void BinaryFormatter_set_AssemblyFormat_m9612 (BinaryFormatter_t127 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern "C" SerializationBinder_t1588 * BinaryFormatter_get_Binder_m9613 (BinaryFormatter_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern "C" StreamingContext_t654  BinaryFormatter_get_Context_m9614 (BinaryFormatter_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern "C" Object_t * BinaryFormatter_get_SurrogateSelector_m9615 (BinaryFormatter_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern "C" int32_t BinaryFormatter_get_FilterLevel_m9616 (BinaryFormatter_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern "C" Object_t * BinaryFormatter_Deserialize_m535 (BinaryFormatter_t127 * __this, Stream_t883 * ___serializationStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern "C" Object_t * BinaryFormatter_NoCheckDeserialize_m9617 (BinaryFormatter_t127 * __this, Stream_t883 * ___serializationStream, HeaderHandler_t1814 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
extern "C" void BinaryFormatter_Serialize_m532 (BinaryFormatter_t127 * __this, Stream_t883 * ___serializationStream, Object_t * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern "C" void BinaryFormatter_Serialize_m9618 (BinaryFormatter_t127 * __this, Stream_t883 * ___serializationStream, Object_t * ___graph, HeaderU5BU5D_t1815* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::WriteBinaryHeader(System.IO.BinaryWriter,System.Boolean)
extern "C" void BinaryFormatter_WriteBinaryHeader_m9619 (BinaryFormatter_t127 * __this, BinaryWriter_t1301 * ___writer, bool ___hasHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern "C" void BinaryFormatter_ReadBinaryHeader_m9620 (BinaryFormatter_t127 * __this, BinaryReader_t1299 * ___reader, bool* ___hasHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
