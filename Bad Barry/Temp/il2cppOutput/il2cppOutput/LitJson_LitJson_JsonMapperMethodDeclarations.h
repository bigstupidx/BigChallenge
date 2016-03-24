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

// LitJson.IJsonWrapper
struct IJsonWrapper_t749;
// LitJson.WrapperFactory
struct WrapperFactory_t748;
// LitJson.JsonReader
struct JsonReader_t758;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t752;
// System.Type
struct Type_t;
// LitJson.ImporterFunc
struct ImporterFunc_t747;
// LitJson.JsonData
struct JsonData_t87;
// System.String
struct String_t;
// System.Object
struct Object_t;
// LitJson.JsonWriter
struct JsonWriter_t746;

#include "codegen/il2cpp-codegen.h"

// System.Void LitJson.JsonMapper::.cctor()
extern "C" void JsonMapper__cctor_m3950 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C" Object_t * JsonMapper_ReadValue_m3951 (Object_t * __this /* static, unused */, WrapperFactory_t748 * ___factory, JsonReader_t758 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C" void JsonMapper_RegisterBaseExporters_m3952 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C" void JsonMapper_RegisterBaseImporters_m3953 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C" void JsonMapper_RegisterImporter_m3954 (Object_t * __this /* static, unused */, Object_t* ___table, Type_t * ___json_type, Type_t * ___value_type, ImporterFunc_t747 * ___importer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
extern "C" JsonData_t87 * JsonMapper_ToObject_m833 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern "C" Object_t * JsonMapper_ToWrapper_m3955 (Object_t * __this /* static, unused */, WrapperFactory_t748 * ___factory, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__1_m3956 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__2_m3957 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__3_m3958 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__4_m3959 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__5_m3960 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__6_m3961 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__7_m3962 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__8_m3963 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__9_m3964 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__A_m3965 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__B_m3966 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__C_m3967 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__D_m3968 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__E_m3969 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__F_m3970 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__10_m3971 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__11_m3972 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__12_m3973 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__13_m3974 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__14_m3975 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__15_m3976 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
extern "C" Object_t * JsonMapper_U3CToObjectU3Em__18_m3977 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
