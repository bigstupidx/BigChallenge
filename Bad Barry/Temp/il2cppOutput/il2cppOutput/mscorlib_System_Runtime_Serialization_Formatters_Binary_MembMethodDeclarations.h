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

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct MemberTypeMetadata_t1590;
// System.Type
struct Type_t;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t1592;
// System.IO.BinaryWriter
struct BinaryWriter_t1292;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberTypeMetadata__ctor_m9595 (MemberTypeMetadata_t1590 * __this, Type_t * ___type, StreamingContext_t654  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C" void MemberTypeMetadata_WriteAssemblies_m9596 (MemberTypeMetadata_t1590 * __this, ObjectWriter_t1592 * ___ow, BinaryWriter_t1292 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C" void MemberTypeMetadata_WriteTypeData_m9597 (MemberTypeMetadata_t1590 * __this, ObjectWriter_t1592 * ___ow, BinaryWriter_t1292 * ___writer, bool ___writeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C" void MemberTypeMetadata_WriteObjectData_m9598 (MemberTypeMetadata_t1590 * __this, ObjectWriter_t1592 * ___ow, BinaryWriter_t1292 * ___writer, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
