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
struct IJsonWrapper_t5_12;
// LitJson.WrapperFactory
struct WrapperFactory_t5_11;
// LitJson.JsonReader
struct JsonReader_t5_15;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t1_880;
// System.Type
struct Type_t;
// LitJson.ImporterFunc
struct ImporterFunc_t5_10;
// LitJson.JsonData
struct JsonData_t5_2;
// System.String
struct String_t;
// System.Object
struct Object_t;
// LitJson.JsonWriter
struct JsonWriter_t5_9;

#include "codegen/il2cpp-codegen.h"

// System.Void LitJson.JsonMapper::.cctor()
extern "C" void JsonMapper__cctor_m5_67 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C" Object_t * JsonMapper_ReadValue_m5_68 (Object_t * __this /* static, unused */, WrapperFactory_t5_11 * ___factory, JsonReader_t5_15 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C" void JsonMapper_RegisterBaseExporters_m5_69 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C" void JsonMapper_RegisterBaseImporters_m5_70 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C" void JsonMapper_RegisterImporter_m5_71 (Object_t * __this /* static, unused */, Object_t* ___table, Type_t * ___json_type, Type_t * ___value_type, ImporterFunc_t5_10 * ___importer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
extern "C" JsonData_t5_2 * JsonMapper_ToObject_m5_72 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern "C" Object_t * JsonMapper_ToWrapper_m5_73 (Object_t * __this /* static, unused */, WrapperFactory_t5_11 * ___factory, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__1_m5_74 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__2_m5_75 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__3_m5_76 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__4_m5_77 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__5_m5_78 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__6_m5_79 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__7_m5_80 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__8_m5_81 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__9_m5_82 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t5_9 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__A_m5_83 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__B_m5_84 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__C_m5_85 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__D_m5_86 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__E_m5_87 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__F_m5_88 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__10_m5_89 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__11_m5_90 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__12_m5_91 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__13_m5_92 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__14_m5_93 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__15_m5_94 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
extern "C" Object_t * JsonMapper_U3CToObjectU3Em__18_m5_95 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
