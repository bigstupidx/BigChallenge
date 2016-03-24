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

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t1646;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1585;
// System.IO.BinaryWriter
struct BinaryWriter_t1346;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1860;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1641;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C" void ObjectWriter__ctor_m9945 (ObjectWriter_t1646 * __this, Object_t * ___surrogateSelector, StreamingContext_t700  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.cctor()
extern "C" void ObjectWriter__cctor_m9946 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectGraph(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern "C" void ObjectWriter_WriteObjectGraph_m9947 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, Object_t * ___obj, HeaderU5BU5D_t1860* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::QueueObject(System.Object)
extern "C" void ObjectWriter_QueueObject_m9948 (ObjectWriter_t1646 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteQueuedObjects(System.IO.BinaryWriter)
extern "C" void ObjectWriter_WriteQueuedObjects_m9949 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectInstance(System.IO.BinaryWriter,System.Object,System.Boolean)
extern "C" void ObjectWriter_WriteObjectInstance_m9950 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, Object_t * ___obj, bool ___isValueObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSerializationEnd(System.IO.BinaryWriter)
extern "C" void ObjectWriter_WriteSerializationEnd_m9951 (Object_t * __this /* static, unused */, BinaryWriter_t1346 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObject(System.IO.BinaryWriter,System.Int64,System.Object)
extern "C" void ObjectWriter_WriteObject_m9952 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, int64_t ___id, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetObjectData(System.Object,System.Runtime.Serialization.Formatters.Binary.TypeMetadata&,System.Object&)
extern "C" void ObjectWriter_GetObjectData_m9953 (ObjectWriter_t1646 * __this, Object_t * ___obj, TypeMetadata_t1641 ** ___metadata, Object_t ** ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CreateMemberTypeMetadata(System.Type)
extern "C" TypeMetadata_t1641 * ObjectWriter_CreateMemberTypeMetadata_m9954 (ObjectWriter_t1646 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteArray_m9955 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteGenericArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteGenericArray_m9956 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteObjectArray_m9957 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteStringArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteStringArray_m9958 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveTypeArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WritePrimitiveTypeArray_m9959 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::BlockWrite(System.IO.BinaryWriter,System.Array,System.Int32)
extern "C" void ObjectWriter_BlockWrite_m9960 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, Array_t * ___array, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSingleDimensionArrayElements(System.IO.BinaryWriter,System.Array,System.Type)
extern "C" void ObjectWriter_WriteSingleDimensionArrayElements_m9961 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, Array_t * ___array, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteNullFiller(System.IO.BinaryWriter,System.Int32)
extern "C" void ObjectWriter_WriteNullFiller_m9962 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, int32_t ___numNulls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectReference(System.IO.BinaryWriter,System.Int64)
extern "C" void ObjectWriter_WriteObjectReference_m9963 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, int64_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteValue(System.IO.BinaryWriter,System.Type,System.Object)
extern "C" void ObjectWriter_WriteValue_m9964 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, Type_t * ___valueType, Object_t * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteString(System.IO.BinaryWriter,System.Int64,System.String)
extern "C" void ObjectWriter_WriteString_m9965 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, int64_t ___id, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssembly(System.IO.BinaryWriter,System.Reflection.Assembly)
extern "C" int32_t ObjectWriter_WriteAssembly_m9966 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, Assembly_t1178 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssemblyName(System.IO.BinaryWriter,System.String)
extern "C" int32_t ObjectWriter_WriteAssemblyName_m9967 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyId(System.Reflection.Assembly)
extern "C" int32_t ObjectWriter_GetAssemblyId_m9968 (ObjectWriter_t1646 * __this, Assembly_t1178 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyNameId(System.String)
extern "C" int32_t ObjectWriter_GetAssemblyNameId_m9969 (ObjectWriter_t1646 * __this, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::RegisterAssembly(System.String,System.Boolean&)
extern "C" int32_t ObjectWriter_RegisterAssembly_m9970 (ObjectWriter_t1646 * __this, String_t* ___assembly, bool* ___firstTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveValue(System.IO.BinaryWriter,System.Object)
extern "C" void ObjectWriter_WritePrimitiveValue_m9971 (Object_t * __this /* static, unused */, BinaryWriter_t1346 * ___writer, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeCode(System.IO.BinaryWriter,System.Type)
extern "C" void ObjectWriter_WriteTypeCode_m9972 (Object_t * __this /* static, unused */, BinaryWriter_t1346 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeTag System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetTypeTag(System.Type)
extern "C" uint8_t ObjectWriter_GetTypeTag_m9973 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeSpec(System.IO.BinaryWriter,System.Type)
extern "C" void ObjectWriter_WriteTypeSpec_m9974 (ObjectWriter_t1646 * __this, BinaryWriter_t1346 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
