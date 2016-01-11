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

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct SerializableTypeMetadata_t1589;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1587;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t1592;
// System.IO.BinaryWriter
struct BinaryWriter_t1292;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.SerializationInfo)
extern "C" void SerializableTypeMetadata__ctor_m9589 (SerializableTypeMetadata_t1589 * __this, Type_t * ___itype, SerializationInfo_t653 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C" bool SerializableTypeMetadata_IsCompatible_m9590 (SerializableTypeMetadata_t1589 * __this, TypeMetadata_t1587 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C" void SerializableTypeMetadata_WriteAssemblies_m9591 (SerializableTypeMetadata_t1589 * __this, ObjectWriter_t1592 * ___ow, BinaryWriter_t1292 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C" void SerializableTypeMetadata_WriteTypeData_m9592 (SerializableTypeMetadata_t1589 * __this, ObjectWriter_t1592 * ___ow, BinaryWriter_t1292 * ___writer, bool ___writeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C" void SerializableTypeMetadata_WriteObjectData_m9593 (SerializableTypeMetadata_t1589 * __this, ObjectWriter_t1592 * ___ow, BinaryWriter_t1292 * ___writer, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::get_RequiresTypes()
extern "C" bool SerializableTypeMetadata_get_RequiresTypes_m9594 (SerializableTypeMetadata_t1589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
