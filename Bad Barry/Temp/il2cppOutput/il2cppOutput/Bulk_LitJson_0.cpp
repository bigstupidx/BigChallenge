#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// LitJson.JsonData
struct JsonData_t87;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t775;
// System.Collections.IEnumerator
struct IEnumerator_t150;
// System.Collections.ICollection
struct ICollection_t776;
// System.Collections.IDictionary
struct IDictionary_t777;
// System.Collections.IList
struct IList_t778;
// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t737;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t738;
// LitJson.JsonException
struct JsonException_t739;
// System.Exception
struct Exception_t165;
// LitJson.ExporterFunc
struct ExporterFunc_t745;
// LitJson.JsonWriter
struct JsonWriter_t746;
// System.IAsyncResult
struct IAsyncResult_t314;
// System.AsyncCallback
struct AsyncCallback_t315;
// LitJson.ImporterFunc
struct ImporterFunc_t747;
// LitJson.WrapperFactory
struct WrapperFactory_t748;
// LitJson.IJsonWrapper
struct IJsonWrapper_t749;
// LitJson.JsonReader
struct JsonReader_t758;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t752;
// System.Type
struct Type_t;
// System.IO.TextReader
struct TextReader_t761;
// System.Int32[]
struct Int32U5BU5D_t61;
// LitJson.WriterContext
struct WriterContext_t764;
// System.Char[]
struct CharU5BU5D_t323;
// LitJson.FsmContext
struct FsmContext_t768;
// LitJson.Lexer/StateHandler
struct StateHandler_t769;
// LitJson.Lexer
struct Lexer_t760;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "LitJson_U3CModuleU3E.h"
#include "LitJson_U3CModuleU3EMethodDeclarations.h"
#include "LitJson_LitJson_JsonType.h"
#include "LitJson_LitJson_JsonTypeMethodDeclarations.h"
#include "LitJson_LitJson_JsonData.h"
#include "LitJson_LitJson_JsonDataMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "mscorlib_System_Boolean.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_ArgumentException.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "mscorlib_System_Double.h"
#include "mscorlib_System_Int64.h"
#include "mscorlib_System_InvalidCastExceptionMethodDeclarations.h"
#include "mscorlib_System_InvalidCastException.h"
#include "LitJson_LitJson_OrderedDictionaryEnumeratorMethodDeclarations.h"
#include "LitJson_LitJson_OrderedDictionaryEnumerator.h"
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
#include "mscorlib_System_InvalidOperationException.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_37MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_37.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_38MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_38.h"
#include "mscorlib_System_Int32MethodDeclarations.h"
#include "mscorlib_System_Int64MethodDeclarations.h"
#include "mscorlib_System_DoubleMethodDeclarations.h"
#include "mscorlib_System_BooleanMethodDeclarations.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
#include "LitJson_LitJson_JsonException.h"
#include "LitJson_LitJson_JsonExceptionMethodDeclarations.h"
#include "LitJson_LitJson_ParserToken.h"
#include "mscorlib_System_Exception.h"
#include "mscorlib_System_ApplicationExceptionMethodDeclarations.h"
#include "mscorlib_System_ApplicationException.h"
#include "mscorlib_System_Char.h"
#include "LitJson_LitJson_PropertyMetadata.h"
#include "LitJson_LitJson_PropertyMetadataMethodDeclarations.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "LitJson_LitJson_ArrayMetadataMethodDeclarations.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "LitJson_LitJson_ObjectMetadataMethodDeclarations.h"
#include "LitJson_LitJson_ExporterFunc.h"
#include "LitJson_LitJson_ExporterFuncMethodDeclarations.h"
#include "mscorlib_System_IntPtr.h"
#include "LitJson_LitJson_JsonWriter.h"
#include "mscorlib_System_AsyncCallback.h"
#include "LitJson_LitJson_ImporterFunc.h"
#include "LitJson_LitJson_ImporterFuncMethodDeclarations.h"
#include "LitJson_LitJson_WrapperFactory.h"
#include "LitJson_LitJson_WrapperFactoryMethodDeclarations.h"
#include "LitJson_LitJson_JsonMapper.h"
#include "LitJson_LitJson_JsonMapperMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13MethodDeclarations.h"
#include "LitJson_LitJson_JsonWriterMethodDeclarations.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfoMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15.h"
#include "LitJson_LitJson_JsonReader.h"
#include "LitJson_LitJson_JsonReaderMethodDeclarations.h"
#include "LitJson_LitJson_JsonToken.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16.h"
#include "mscorlib_System_ConvertMethodDeclarations.h"
#include "mscorlib_System_Byte.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_SByte.h"
#include "mscorlib_System_Int16.h"
#include "mscorlib_System_UInt16.h"
#include "mscorlib_System_UInt32.h"
#include "mscorlib_System_UInt64.h"
#include "mscorlib_System_Single.h"
#include "LitJson_LitJson_JsonTokenMethodDeclarations.h"
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"
#include "mscorlib_System_IO_StringReader.h"
#include "mscorlib_System_IO_TextReader.h"
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
#include "System_System_Collections_Generic_Stack_1_gen_0MethodDeclarations.h"
#include "LitJson_LitJson_LexerMethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException.h"
#include "System_System_Collections_Generic_Stack_1_gen_0.h"
#include "LitJson_LitJson_Lexer.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17.h"
#include "mscorlib_ArrayTypes.h"
#include "LitJson_U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199_1.h"
#include "LitJson_U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199_1MethodDeclarations.h"
#include "LitJson_U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199.h"
#include "mscorlib_System_RuntimeFieldHandle.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18.h"
#include "mscorlib_System_UInt64MethodDeclarations.h"
#include "mscorlib_System_IO_TextReaderMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
#include "LitJson_LitJson_Condition.h"
#include "LitJson_LitJson_ConditionMethodDeclarations.h"
#include "LitJson_LitJson_WriterContext.h"
#include "LitJson_LitJson_WriterContextMethodDeclarations.h"
#include "mscorlib_System_Globalization_NumberFormatInfoMethodDeclarations.h"
#include "mscorlib_System_Globalization_NumberFormatInfo.h"
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
#include "mscorlib_System_IO_StringWriterMethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder.h"
#include "mscorlib_System_IO_StringWriter.h"
#include "mscorlib_System_IO_TextWriter.h"
#include "System_System_Collections_Generic_Stack_1_gen_1MethodDeclarations.h"
#include "System_System_Collections_Generic_Stack_1_gen_1.h"
#include "mscorlib_System_IO_TextWriterMethodDeclarations.h"
#include "LitJson_LitJson_FsmContext.h"
#include "LitJson_LitJson_FsmContextMethodDeclarations.h"
#include "LitJson_LitJson_Lexer_StateHandler.h"
#include "LitJson_LitJson_Lexer_StateHandlerMethodDeclarations.h"
#include "LitJson_ArrayTypes.h"
#include "LitJson_U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199_0.h"
#include "LitJson_LitJson_ParserTokenMethodDeclarations.h"
#include "LitJson_U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199MethodDeclarations.h"
#include "LitJson_U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199_0MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
extern "C" int32_t JsonData_System_Collections_ICollection_get_Count_m3888 (JsonData_t87 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = JsonData_get_Count_m834(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
extern TypeInfo* ICollection_t776_il2cpp_TypeInfo_var;
extern "C" bool JsonData_System_Collections_ICollection_get_IsSynchronized_m3889 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureCollection_m3920(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t776_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t776_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonData_System_Collections_ICollection_get_SyncRoot_m3890 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureCollection_m3920(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t776_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern "C" bool JsonData_System_Collections_IList_get_IsFixedSize_m3891 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureList_m3922(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t778_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern "C" bool JsonData_System_Collections_IList_get_IsReadOnly_m3892 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureList_m3922(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IList::get_IsReadOnly() */, IList_t778_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
extern TypeInfo* IDictionary_t777_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonData_System_Collections_IDictionary_get_Item_m3893 (JsonData_t87 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureDictionary_m3921(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t777_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t489_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral535;
extern "C" void JsonData_System_Collections_IDictionary_set_Item_m3894 (JsonData_t87 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ArgumentException_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		_stringLiteral535 = il2cpp_codegen_string_literal_from_index(535);
		s_Il2CppMethodIntialized = true;
	}
	JsonData_t87 * V_0 = {0};
	{
		Object_t * L_0 = ___key;
		if (((String_t*)IsInstSealed(L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t489 * L_1 = (ArgumentException_t489 *)il2cpp_codegen_object_new (ArgumentException_t489_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2800(L_1, _stringLiteral535, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t * L_2 = ___value;
		JsonData_t87 * L_3 = JsonData_ToJsonData_m3923(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Object_t * L_4 = ___key;
		JsonData_t87 * L_5 = V_0;
		JsonData_set_Item_m3897(__this, ((String_t*)CastclassSealed(L_4, String_t_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonData_System_Collections_IList_get_Item_m3895 (JsonData_t87 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureList_m3922(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(2 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t778_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void JsonData_System_Collections_IList_set_Item_m3896 (JsonData_t87 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	JsonData_t87 * V_0 = {0};
	{
		JsonData_EnsureList_m3922(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___value;
		JsonData_t87 * L_1 = JsonData_ToJsonData_m3923(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___index;
		JsonData_t87 * L_3 = V_0;
		JsonData_set_Item_m3898(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LitJson.JsonData::get_Count()
extern TypeInfo* ICollection_t776_il2cpp_TypeInfo_var;
extern "C" int32_t JsonData_get_Count_m834 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureCollection_m3920(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t776_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
extern TypeInfo* IDictionary_2_t735_il2cpp_TypeInfo_var;
extern "C" JsonData_t87 * JsonData_get_Item_m836 (JsonData_t87 * __this, String_t* ___prop_name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonData_EnsureDictionary_m3921(__this, /*hidden argument*/NULL);
		Object_t* L_0 = (__this->___inst_object_5);
		String_t* L_1 = ___prop_name;
		NullCheck(L_0);
		JsonData_t87 * L_2 = (JsonData_t87 *)InterfaceFuncInvoker1< JsonData_t87 *, String_t* >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::get_Item(!0) */, IDictionary_2_t735_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
extern TypeInfo* IDictionary_2_t735_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t736_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t782_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m4051_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4052_MethodInfo_var;
extern "C" void JsonData_set_Item_m3897 (JsonData_t87 * __this, String_t* ___prop_name, JsonData_t87 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		IList_1_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ICollection_1_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		KeyValuePair_2__ctor_m4051_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484033);
		KeyValuePair_2_get_Key_m4052_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t781  V_0 = {0};
	int32_t V_1 = 0;
	KeyValuePair_2_t781  V_2 = {0};
	{
		JsonData_EnsureDictionary_m3921(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___prop_name;
		JsonData_t87 * L_1 = ___value;
		KeyValuePair_2__ctor_m4051((&V_0), L_0, L_1, /*hidden argument*/KeyValuePair_2__ctor_m4051_MethodInfo_var);
		Object_t* L_2 = (__this->___inst_object_5);
		String_t* L_3 = ___prop_name;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::ContainsKey(!0) */, IDictionary_2_t735_il2cpp_TypeInfo_var, L_2, L_3);
		if (!L_4)
		{
			goto IL_0073;
		}
	}
	{
		V_1 = 0;
		goto IL_005d;
	}

IL_0028:
	{
		Object_t* L_5 = (__this->___object_list_9);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		KeyValuePair_2_t781  L_7 = (KeyValuePair_2_t781 )InterfaceFuncInvoker1< KeyValuePair_2_t781 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t736_il2cpp_TypeInfo_var, L_5, L_6);
		V_2 = L_7;
		String_t* L_8 = KeyValuePair_2_get_Key_m4052((&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m4052_MethodInfo_var);
		String_t* L_9 = ___prop_name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m702(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		Object_t* L_11 = (__this->___object_list_9);
		int32_t L_12 = V_1;
		KeyValuePair_2_t781  L_13 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_t781  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t736_il2cpp_TypeInfo_var, L_11, L_12, L_13);
		goto IL_006e;
	}

IL_0059:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005d:
	{
		int32_t L_15 = V_1;
		Object_t* L_16 = (__this->___object_list_9);
		NullCheck(L_16);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t782_il2cpp_TypeInfo_var, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0028;
		}
	}

IL_006e:
	{
		goto IL_007f;
	}

IL_0073:
	{
		Object_t* L_18 = (__this->___object_list_9);
		KeyValuePair_2_t781  L_19 = V_0;
		NullCheck(L_18);
		InterfaceActionInvoker1< KeyValuePair_2_t781  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(!0) */, ICollection_1_t782_il2cpp_TypeInfo_var, L_18, L_19);
	}

IL_007f:
	{
		Object_t* L_20 = (__this->___inst_object_5);
		String_t* L_21 = ___prop_name;
		JsonData_t87 * L_22 = ___value;
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, JsonData_t87 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_t735_il2cpp_TypeInfo_var, L_20, L_21, L_22);
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
extern TypeInfo* IList_1_t734_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t736_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4053_MethodInfo_var;
extern "C" JsonData_t87 * JsonData_get_Item_m835 (JsonData_t87 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_1_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		IList_1_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		KeyValuePair_2_get_Value_m4053_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484035);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t781  V_0 = {0};
	{
		JsonData_EnsureCollection_m3920(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___type_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		Object_t* L_1 = (__this->___inst_array_0);
		int32_t L_2 = ___index;
		NullCheck(L_1);
		JsonData_t87 * L_3 = (JsonData_t87 *)InterfaceFuncInvoker1< JsonData_t87 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<LitJson.JsonData>::get_Item(System.Int32) */, IList_1_t734_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0020:
	{
		Object_t* L_4 = (__this->___object_list_9);
		int32_t L_5 = ___index;
		NullCheck(L_4);
		KeyValuePair_2_t781  L_6 = (KeyValuePair_2_t781 )InterfaceFuncInvoker1< KeyValuePair_2_t781 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t736_il2cpp_TypeInfo_var, L_4, L_5);
		V_0 = L_6;
		JsonData_t87 * L_7 = KeyValuePair_2_get_Value_m4053((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m4053_MethodInfo_var);
		return L_7;
	}
}
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
extern TypeInfo* IList_1_t734_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t736_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t735_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4052_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m4051_MethodInfo_var;
extern "C" void JsonData_set_Item_m3898 (JsonData_t87 * __this, int32_t ___index, JsonData_t87 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_1_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		IList_1_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		IDictionary_2_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		KeyValuePair_2_get_Key_m4052_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		KeyValuePair_2__ctor_m4051_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484033);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t781  V_0 = {0};
	KeyValuePair_2_t781  V_1 = {0};
	{
		JsonData_EnsureCollection_m3920(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___type_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		Object_t* L_1 = (__this->___inst_array_0);
		int32_t L_2 = ___index;
		JsonData_t87 * L_3 = ___value;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, JsonData_t87 * >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<LitJson.JsonData>::set_Item(System.Int32,!0) */, IList_1_t734_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		goto IL_0061;
	}

IL_0025:
	{
		Object_t* L_4 = (__this->___object_list_9);
		int32_t L_5 = ___index;
		NullCheck(L_4);
		KeyValuePair_2_t781  L_6 = (KeyValuePair_2_t781 )InterfaceFuncInvoker1< KeyValuePair_2_t781 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t736_il2cpp_TypeInfo_var, L_4, L_5);
		V_0 = L_6;
		String_t* L_7 = KeyValuePair_2_get_Key_m4052((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m4052_MethodInfo_var);
		JsonData_t87 * L_8 = ___value;
		KeyValuePair_2__ctor_m4051((&V_1), L_7, L_8, /*hidden argument*/KeyValuePair_2__ctor_m4051_MethodInfo_var);
		Object_t* L_9 = (__this->___object_list_9);
		int32_t L_10 = ___index;
		KeyValuePair_2_t781  L_11 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_t781  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t736_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		Object_t* L_12 = (__this->___inst_object_5);
		String_t* L_13 = KeyValuePair_2_get_Key_m4052((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m4052_MethodInfo_var);
		JsonData_t87 * L_14 = ___value;
		NullCheck(L_12);
		InterfaceActionInvoker2< String_t*, JsonData_t87 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_t735_il2cpp_TypeInfo_var, L_12, L_13, L_14);
	}

IL_0061:
	{
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Void LitJson.JsonData::.ctor()
extern "C" void JsonData__ctor_m3899 (JsonData_t87 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m671(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Object)
extern TypeInfo* Boolean_t189_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t717_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t180_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t489_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral536;
extern "C" void JsonData__ctor_m3900 (JsonData_t87 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Double_t717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		Int32_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Int64_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ArgumentException_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		_stringLiteral536 = il2cpp_codegen_string_literal_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m671(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___obj;
		if (!((Object_t *)IsInstSealed(L_0, Boolean_t189_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		__this->___type_8 = 7;
		Object_t * L_1 = ___obj;
		__this->___inst_boolean_1 = ((*(bool*)((bool*)UnBox (L_1, Boolean_t189_il2cpp_TypeInfo_var))));
		return;
	}

IL_0025:
	{
		Object_t * L_2 = ___obj;
		if (!((Object_t *)IsInstSealed(L_2, Double_t717_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		__this->___type_8 = 6;
		Object_t * L_3 = ___obj;
		__this->___inst_double_2 = ((*(double*)((double*)UnBox (L_3, Double_t717_il2cpp_TypeInfo_var))));
		return;
	}

IL_0044:
	{
		Object_t * L_4 = ___obj;
		if (!((Object_t *)IsInstSealed(L_4, Int32_t157_il2cpp_TypeInfo_var)))
		{
			goto IL_0063;
		}
	}
	{
		__this->___type_8 = 4;
		Object_t * L_5 = ___obj;
		__this->___inst_int_3 = ((*(int32_t*)((int32_t*)UnBox (L_5, Int32_t157_il2cpp_TypeInfo_var))));
		return;
	}

IL_0063:
	{
		Object_t * L_6 = ___obj;
		if (!((Object_t *)IsInstSealed(L_6, Int64_t180_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		__this->___type_8 = 5;
		Object_t * L_7 = ___obj;
		__this->___inst_long_4 = ((*(int64_t*)((int64_t*)UnBox (L_7, Int64_t180_il2cpp_TypeInfo_var))));
		return;
	}

IL_0082:
	{
		Object_t * L_8 = ___obj;
		if (!((String_t*)IsInstSealed(L_8, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00a1;
		}
	}
	{
		__this->___type_8 = 3;
		Object_t * L_9 = ___obj;
		__this->___inst_string_6 = ((String_t*)CastclassSealed(L_9, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00a1:
	{
		ArgumentException_t489 * L_10 = (ArgumentException_t489 *)il2cpp_codegen_object_new (ArgumentException_t489_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2800(L_10, _stringLiteral536, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_10);
	}
}
// System.Boolean LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern TypeInfo* InvalidCastException_t783_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral537;
extern "C" bool JsonData_op_Explicit_m838 (Object_t * __this /* static, unused */, JsonData_t87 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidCastException_t783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(452);
		_stringLiteral537 = il2cpp_codegen_string_literal_from_index(537);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonData_t87 * L_0 = ___data;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___type_8);
		if ((((int32_t)L_1) == ((int32_t)7)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidCastException_t783 * L_2 = (InvalidCastException_t783 *)il2cpp_codegen_object_new (InvalidCastException_t783_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m4054(L_2, _stringLiteral537, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		JsonData_t87 * L_3 = ___data;
		NullCheck(L_3);
		bool L_4 = (L_3->___inst_boolean_1);
		return L_4;
	}
}
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern TypeInfo* InvalidCastException_t783_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral538;
extern "C" int32_t JsonData_op_Explicit_m837 (Object_t * __this /* static, unused */, JsonData_t87 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidCastException_t783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(452);
		_stringLiteral538 = il2cpp_codegen_string_literal_from_index(538);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonData_t87 * L_0 = ___data;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___type_8);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidCastException_t783 * L_2 = (InvalidCastException_t783 *)il2cpp_codegen_object_new (InvalidCastException_t783_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m4054(L_2, _stringLiteral538, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		JsonData_t87 * L_3 = ___data;
		NullCheck(L_3);
		int32_t L_4 = (L_3->___inst_int_3);
		return L_4;
	}
}
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t776_il2cpp_TypeInfo_var;
extern "C" void JsonData_System_Collections_ICollection_CopyTo_m3901 (JsonData_t87 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureCollection_m3920(__this, /*hidden argument*/NULL);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t776_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
extern TypeInfo* IDictionary_t777_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t782_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m4051_MethodInfo_var;
extern "C" void JsonData_System_Collections_IDictionary_Add_m3902 (JsonData_t87 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ICollection_1_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		KeyValuePair_2__ctor_m4051_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484033);
		s_Il2CppMethodIntialized = true;
	}
	JsonData_t87 * V_0 = {0};
	KeyValuePair_2_t781  V_1 = {0};
	{
		Object_t * L_0 = ___value;
		JsonData_t87 * L_1 = JsonData_ToJsonData_m3923(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = JsonData_EnsureDictionary_m3921(__this, /*hidden argument*/NULL);
		Object_t * L_3 = ___key;
		JsonData_t87 * L_4 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(2 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t777_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		Object_t * L_5 = ___key;
		JsonData_t87 * L_6 = V_0;
		KeyValuePair_2__ctor_m4051((&V_1), ((String_t*)CastclassSealed(L_5, String_t_il2cpp_TypeInfo_var)), L_6, /*hidden argument*/KeyValuePair_2__ctor_m4051_MethodInfo_var);
		Object_t* L_7 = (__this->___object_list_9);
		KeyValuePair_2_t781  L_8 = V_1;
		NullCheck(L_7);
		InterfaceActionInvoker1< KeyValuePair_2_t781  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(!0) */, ICollection_1_t782_il2cpp_TypeInfo_var, L_7, L_8);
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* IDictionary_t777_il2cpp_TypeInfo_var;
extern "C" bool JsonData_System_Collections_IDictionary_Contains_m3903 (JsonData_t87 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureDictionary_m3921(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(3 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t777_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
extern TypeInfo* IOrderedDictionary_t784_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonData_System_Collections_IDictionary_GetEnumerator_m3904 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IOrderedDictionary_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(453);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IDictionaryEnumerator System.Collections.Specialized.IOrderedDictionary::GetEnumerator() */, IOrderedDictionary_t784_il2cpp_TypeInfo_var, __this);
		return L_0;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* IDictionary_t777_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t736_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t782_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4052_MethodInfo_var;
extern "C" void JsonData_System_Collections_IDictionary_Remove_m3905 (JsonData_t87 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		IList_1_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ICollection_1_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		KeyValuePair_2_get_Key_m4052_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t781  V_1 = {0};
	{
		Object_t * L_0 = JsonData_EnsureDictionary_m3921(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___key;
		NullCheck(L_0);
		InterfaceActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t777_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = 0;
		goto IL_004c;
	}

IL_0013:
	{
		Object_t* L_2 = (__this->___object_list_9);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		KeyValuePair_2_t781  L_4 = (KeyValuePair_2_t781 )InterfaceFuncInvoker1< KeyValuePair_2_t781 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t736_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		String_t* L_5 = KeyValuePair_2_get_Key_m4052((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m4052_MethodInfo_var);
		Object_t * L_6 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m702(NULL /*static, unused*/, L_5, ((String_t*)CastclassSealed(L_6, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		Object_t* L_8 = (__this->___object_list_9);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::RemoveAt(System.Int32) */, IList_1_t736_il2cpp_TypeInfo_var, L_8, L_9);
		goto IL_005d;
	}

IL_0048:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_004c:
	{
		int32_t L_11 = V_0;
		Object_t* L_12 = (__this->___object_list_9);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t782_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}

IL_005d:
	{
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t785_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonData_System_Collections_IEnumerable_GetEnumerator_m3906 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureCollection_m3920(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t785_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
extern "C" void JsonData_LitJson_IJsonWrapper_SetBoolean_m3907 (JsonData_t87 * __this, bool ___val, const MethodInfo* method)
{
	{
		__this->___type_8 = 7;
		bool L_0 = ___val;
		__this->___inst_boolean_1 = L_0;
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
extern "C" void JsonData_LitJson_IJsonWrapper_SetDouble_m3908 (JsonData_t87 * __this, double ___val, const MethodInfo* method)
{
	{
		__this->___type_8 = 6;
		double L_0 = ___val;
		__this->___inst_double_2 = L_0;
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
extern "C" void JsonData_LitJson_IJsonWrapper_SetInt_m3909 (JsonData_t87 * __this, int32_t ___val, const MethodInfo* method)
{
	{
		__this->___type_8 = 4;
		int32_t L_0 = ___val;
		__this->___inst_int_3 = L_0;
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
extern "C" void JsonData_LitJson_IJsonWrapper_SetLong_m3910 (JsonData_t87 * __this, int64_t ___val, const MethodInfo* method)
{
	{
		__this->___type_8 = 5;
		int64_t L_0 = ___val;
		__this->___inst_long_4 = L_0;
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
extern "C" void JsonData_LitJson_IJsonWrapper_SetString_m3911 (JsonData_t87 * __this, String_t* ___val, const MethodInfo* method)
{
	{
		__this->___type_8 = 3;
		String_t* L_0 = ___val;
		__this->___inst_string_6 = L_0;
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
extern "C" int32_t JsonData_System_Collections_IList_Add_m3912 (JsonData_t87 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = JsonData_Add_m3924(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern "C" void JsonData_System_Collections_IList_Clear_m3913 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureList_m3922(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void System.Collections.IList::Clear() */, IList_t778_il2cpp_TypeInfo_var, L_0);
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern "C" bool JsonData_System_Collections_IList_Contains_m3914 (JsonData_t87 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureList_m3922(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(6 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t778_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern "C" int32_t JsonData_System_Collections_IList_IndexOf_m3915 (JsonData_t87 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureList_m3922(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_t778_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern "C" void JsonData_System_Collections_IList_Insert_m3916 (JsonData_t87 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureList_m3922(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(8 /* System.Void System.Collections.IList::Insert(System.Int32,System.Object) */, IList_t778_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern "C" void JsonData_System_Collections_IList_Remove_m3917 (JsonData_t87 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureList_m3922(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		InterfaceActionInvoker1< Object_t * >::Invoke(9 /* System.Void System.Collections.IList::Remove(System.Object) */, IList_t778_il2cpp_TypeInfo_var, L_0, L_1);
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern "C" void JsonData_System_Collections_IList_RemoveAt_m3918 (JsonData_t87 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = JsonData_EnsureList_m3922(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void System.Collections.IList::RemoveAt(System.Int32) */, IList_t778_il2cpp_TypeInfo_var, L_0, L_1);
		__this->___json_7 = (String_t*)NULL;
		return;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
extern TypeInfo* IEnumerable_1_t786_il2cpp_TypeInfo_var;
extern TypeInfo* OrderedDictionaryEnumerator_t737_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m3919 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		OrderedDictionaryEnumerator_t737_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonData_EnsureDictionary_m3921(__this, /*hidden argument*/NULL);
		Object_t* L_0 = (__this->___object_list_9);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_t786_il2cpp_TypeInfo_var, L_0);
		OrderedDictionaryEnumerator_t737 * L_2 = (OrderedDictionaryEnumerator_t737 *)il2cpp_codegen_object_new (OrderedDictionaryEnumerator_t737_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_m3932(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
extern TypeInfo* ICollection_t776_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t787_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral539;
extern "C" Object_t * JsonData_EnsureCollection_m3920 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		InvalidOperationException_t787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		_stringLiteral539 = il2cpp_codegen_string_literal_from_index(539);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___type_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}
	{
		Object_t* L_1 = (__this->___inst_array_0);
		return ((Object_t *)Castclass(L_1, ICollection_t776_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = (__this->___type_8);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		Object_t* L_3 = (__this->___inst_object_5);
		return ((Object_t *)Castclass(L_3, ICollection_t776_il2cpp_TypeInfo_var));
	}

IL_0030:
	{
		InvalidOperationException_t787 * L_4 = (InvalidOperationException_t787 *)il2cpp_codegen_object_new (InvalidOperationException_t787_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4055(L_4, _stringLiteral539, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}
}
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
extern TypeInfo* IDictionary_t777_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t787_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t788_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t789_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4056_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4057_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral540;
extern "C" Object_t * JsonData_EnsureDictionary_m3921 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		InvalidOperationException_t787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Dictionary_2_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		List_1_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		Dictionary_2__ctor_m4056_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484036);
		List_1__ctor_m4057_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484037);
		_stringLiteral540 = il2cpp_codegen_string_literal_from_index(540);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___type_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		Object_t* L_1 = (__this->___inst_object_5);
		return ((Object_t *)Castclass(L_1, IDictionary_t777_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = (__this->___type_8);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		InvalidOperationException_t787 * L_3 = (InvalidOperationException_t787 *)il2cpp_codegen_object_new (InvalidOperationException_t787_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4055(L_3, _stringLiteral540, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002e:
	{
		__this->___type_8 = 1;
		Dictionary_2_t788 * L_4 = (Dictionary_2_t788 *)il2cpp_codegen_object_new (Dictionary_2_t788_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4056(L_4, /*hidden argument*/Dictionary_2__ctor_m4056_MethodInfo_var);
		__this->___inst_object_5 = L_4;
		List_1_t789 * L_5 = (List_1_t789 *)il2cpp_codegen_object_new (List_1_t789_il2cpp_TypeInfo_var);
		List_1__ctor_m4057(L_5, /*hidden argument*/List_1__ctor_m4057_MethodInfo_var);
		__this->___object_list_9 = L_5;
		Object_t* L_6 = (__this->___inst_object_5);
		return ((Object_t *)Castclass(L_6, IDictionary_t777_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IList LitJson.JsonData::EnsureList()
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t787_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t790_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4058_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral541;
extern "C" Object_t * JsonData_EnsureList_m3922 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		InvalidOperationException_t787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		List_1_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(460);
		List_1__ctor_m4058_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484038);
		_stringLiteral541 = il2cpp_codegen_string_literal_from_index(541);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___type_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}
	{
		Object_t* L_1 = (__this->___inst_array_0);
		return ((Object_t *)Castclass(L_1, IList_t778_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = (__this->___type_8);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		InvalidOperationException_t787 * L_3 = (InvalidOperationException_t787 *)il2cpp_codegen_object_new (InvalidOperationException_t787_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4055(L_3, _stringLiteral541, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002e:
	{
		__this->___type_8 = 2;
		List_1_t790 * L_4 = (List_1_t790 *)il2cpp_codegen_object_new (List_1_t790_il2cpp_TypeInfo_var);
		List_1__ctor_m4058(L_4, /*hidden argument*/List_1__ctor_m4058_MethodInfo_var);
		__this->___inst_array_0 = L_4;
		Object_t* L_5 = (__this->___inst_array_0);
		return ((Object_t *)Castclass(L_5, IList_t778_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
extern TypeInfo* JsonData_t87_il2cpp_TypeInfo_var;
extern "C" JsonData_t87 * JsonData_ToJsonData_m3923 (JsonData_t87 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonData_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (JsonData_t87 *)NULL;
	}

IL_0008:
	{
		Object_t * L_1 = ___obj;
		if (!((JsonData_t87 *)IsInstClass(L_1, JsonData_t87_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_2 = ___obj;
		return ((JsonData_t87 *)CastclassClass(L_2, JsonData_t87_il2cpp_TypeInfo_var));
	}

IL_001a:
	{
		Object_t * L_3 = ___obj;
		JsonData_t87 * L_4 = (JsonData_t87 *)il2cpp_codegen_object_new (JsonData_t87_il2cpp_TypeInfo_var);
		JsonData__ctor_m3900(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 LitJson.JsonData::Add(System.Object)
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern "C" int32_t JsonData_Add_m3924 (JsonData_t87 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	JsonData_t87 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		JsonData_t87 * L_1 = JsonData_ToJsonData_m3923(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		__this->___json_7 = (String_t*)NULL;
		Object_t * L_2 = JsonData_EnsureList_m3922(__this, /*hidden argument*/NULL);
		JsonData_t87 * L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t778_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
extern "C" bool JsonData_Equals_m3925 (JsonData_t87 * __this, JsonData_t87 * ___x, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		JsonData_t87 * L_0 = ___x;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		JsonData_t87 * L_1 = ___x;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___type_8);
		int32_t L_3 = (__this->___type_8);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		int32_t L_4 = (__this->___type_8);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (L_5 == 0)
		{
			goto IL_004d;
		}
		if (L_5 == 1)
		{
			goto IL_004f;
		}
		if (L_5 == 2)
		{
			goto IL_0061;
		}
		if (L_5 == 3)
		{
			goto IL_0073;
		}
		if (L_5 == 4)
		{
			goto IL_0085;
		}
		if (L_5 == 5)
		{
			goto IL_0097;
		}
		if (L_5 == 6)
		{
			goto IL_00a9;
		}
		if (L_5 == 7)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		Object_t* L_6 = (__this->___inst_object_5);
		JsonData_t87 * L_7 = ___x;
		NullCheck(L_7);
		Object_t* L_8 = (L_7->___inst_object_5);
		NullCheck(L_6);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_8);
		return L_9;
	}

IL_0061:
	{
		Object_t* L_10 = (__this->___inst_array_0);
		JsonData_t87 * L_11 = ___x;
		NullCheck(L_11);
		Object_t* L_12 = (L_11->___inst_array_0);
		NullCheck(L_10);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_12);
		return L_13;
	}

IL_0073:
	{
		String_t* L_14 = (__this->___inst_string_6);
		JsonData_t87 * L_15 = ___x;
		NullCheck(L_15);
		String_t* L_16 = (L_15->___inst_string_6);
		NullCheck(L_14);
		bool L_17 = String_Equals_m4059(L_14, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_0085:
	{
		int32_t* L_18 = &(__this->___inst_int_3);
		JsonData_t87 * L_19 = ___x;
		NullCheck(L_19);
		int32_t L_20 = (L_19->___inst_int_3);
		bool L_21 = Int32_Equals_m3822(L_18, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0097:
	{
		int64_t* L_22 = &(__this->___inst_long_4);
		JsonData_t87 * L_23 = ___x;
		NullCheck(L_23);
		int64_t L_24 = (L_23->___inst_long_4);
		bool L_25 = Int64_Equals_m4060(L_22, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_00a9:
	{
		double* L_26 = &(__this->___inst_double_2);
		JsonData_t87 * L_27 = ___x;
		NullCheck(L_27);
		double L_28 = (L_27->___inst_double_2);
		bool L_29 = Double_Equals_m4061(L_26, L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_00bb:
	{
		bool* L_30 = &(__this->___inst_boolean_1);
		JsonData_t87 * L_31 = ___x;
		NullCheck(L_31);
		bool L_32 = (L_31->___inst_boolean_1);
		bool L_33 = Boolean_Equals_m4062(L_30, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00cd:
	{
		return 0;
	}
}
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
extern TypeInfo* Dictionary_2_t788_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t789_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t790_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4056_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4057_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4058_MethodInfo_var;
extern "C" void JsonData_SetJsonType_m3926 (JsonData_t87 * __this, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		List_1_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		List_1_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(460);
		Dictionary_2__ctor_m4056_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484036);
		List_1__ctor_m4057_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484037);
		List_1__ctor_m4058_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484038);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___type_8);
		int32_t L_1 = ___type;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = ___type;
		if (L_2 == 0)
		{
			goto IL_0038;
		}
		if (L_2 == 1)
		{
			goto IL_003d;
		}
		if (L_2 == 2)
		{
			goto IL_0058;
		}
		if (L_2 == 3)
		{
			goto IL_0068;
		}
		if (L_2 == 4)
		{
			goto IL_0074;
		}
		if (L_2 == 5)
		{
			goto IL_0080;
		}
		if (L_2 == 6)
		{
			goto IL_008d;
		}
		if (L_2 == 7)
		{
			goto IL_00a1;
		}
	}
	{
		goto IL_00ad;
	}

IL_0038:
	{
		goto IL_00ad;
	}

IL_003d:
	{
		Dictionary_2_t788 * L_3 = (Dictionary_2_t788 *)il2cpp_codegen_object_new (Dictionary_2_t788_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4056(L_3, /*hidden argument*/Dictionary_2__ctor_m4056_MethodInfo_var);
		__this->___inst_object_5 = L_3;
		List_1_t789 * L_4 = (List_1_t789 *)il2cpp_codegen_object_new (List_1_t789_il2cpp_TypeInfo_var);
		List_1__ctor_m4057(L_4, /*hidden argument*/List_1__ctor_m4057_MethodInfo_var);
		__this->___object_list_9 = L_4;
		goto IL_00ad;
	}

IL_0058:
	{
		List_1_t790 * L_5 = (List_1_t790 *)il2cpp_codegen_object_new (List_1_t790_il2cpp_TypeInfo_var);
		List_1__ctor_m4058(L_5, /*hidden argument*/List_1__ctor_m4058_MethodInfo_var);
		__this->___inst_array_0 = L_5;
		goto IL_00ad;
	}

IL_0068:
	{
		__this->___inst_string_6 = (String_t*)NULL;
		goto IL_00ad;
	}

IL_0074:
	{
		__this->___inst_int_3 = 0;
		goto IL_00ad;
	}

IL_0080:
	{
		__this->___inst_long_4 = (((int64_t)((int64_t)0)));
		goto IL_00ad;
	}

IL_008d:
	{
		__this->___inst_double_2 = (0.0);
		goto IL_00ad;
	}

IL_00a1:
	{
		__this->___inst_boolean_1 = 0;
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_6 = ___type;
		__this->___type_8 = L_6;
		return;
	}
}
// System.String LitJson.JsonData::ToString()
extern Il2CppCodeGenString* _stringLiteral542;
extern Il2CppCodeGenString* _stringLiteral543;
extern Il2CppCodeGenString* _stringLiteral544;
extern "C" String_t* JsonData_ToString_m3927 (JsonData_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral542 = il2cpp_codegen_string_literal_from_index(542);
		_stringLiteral543 = il2cpp_codegen_string_literal_from_index(543);
		_stringLiteral544 = il2cpp_codegen_string_literal_from_index(544);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___type_8);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_007e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0030;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0084;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_005a;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_006c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0048;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_008b;
	}

IL_0030:
	{
		return _stringLiteral542;
	}

IL_0036:
	{
		bool* L_2 = &(__this->___inst_boolean_1);
		NullCheck(L_2);
		String_t* L_3 = Boolean_ToString_m4063(L_2, NULL);
		return L_3;
	}

IL_0048:
	{
		double* L_4 = &(__this->___inst_double_2);
		NullCheck(L_4);
		String_t* L_5 = Double_ToString_m4064(L_4, NULL);
		return L_5;
	}

IL_005a:
	{
		int32_t* L_6 = &(__this->___inst_int_3);
		NullCheck(L_6);
		String_t* L_7 = Int32_ToString_m675(L_6, NULL);
		return L_7;
	}

IL_006c:
	{
		int64_t* L_8 = &(__this->___inst_long_4);
		NullCheck(L_8);
		String_t* L_9 = Int64_ToString_m4065(L_8, NULL);
		return L_9;
	}

IL_007e:
	{
		return _stringLiteral543;
	}

IL_0084:
	{
		String_t* L_10 = (__this->___inst_string_6);
		return L_10;
	}

IL_008b:
	{
		return _stringLiteral544;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
extern TypeInfo* DictionaryEntry_t779_il2cpp_TypeInfo_var;
extern "C" Object_t * OrderedDictionaryEnumerator_get_Current_m3928 (OrderedDictionaryEnumerator_t737 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t779_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEntry_t779  L_0 = OrderedDictionaryEnumerator_get_Entry_m3929(__this, /*hidden argument*/NULL);
		DictionaryEntry_t779  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t779_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
extern TypeInfo* IEnumerator_1_t738_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4052_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4053_MethodInfo_var;
extern "C" DictionaryEntry_t779  OrderedDictionaryEnumerator_get_Entry_m3929 (OrderedDictionaryEnumerator_t737 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_1_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		KeyValuePair_2_get_Key_m4052_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		KeyValuePair_2_get_Value_m4053_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484035);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t781  V_0 = {0};
	{
		Object_t* L_0 = (__this->___list_enumerator_0);
		NullCheck(L_0);
		KeyValuePair_2_t781  L_1 = (KeyValuePair_2_t781 )InterfaceFuncInvoker0< KeyValuePair_2_t781  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t738_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2 = KeyValuePair_2_get_Key_m4052((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m4052_MethodInfo_var);
		JsonData_t87 * L_3 = KeyValuePair_2_get_Value_m4053((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m4053_MethodInfo_var);
		DictionaryEntry_t779  L_4 = {0};
		DictionaryEntry__ctor_m4066(&L_4, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
extern TypeInfo* IEnumerator_1_t738_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4052_MethodInfo_var;
extern "C" Object_t * OrderedDictionaryEnumerator_get_Key_m3930 (OrderedDictionaryEnumerator_t737 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_1_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		KeyValuePair_2_get_Key_m4052_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t781  V_0 = {0};
	{
		Object_t* L_0 = (__this->___list_enumerator_0);
		NullCheck(L_0);
		KeyValuePair_2_t781  L_1 = (KeyValuePair_2_t781 )InterfaceFuncInvoker0< KeyValuePair_2_t781  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t738_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2 = KeyValuePair_2_get_Key_m4052((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m4052_MethodInfo_var);
		return L_2;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
extern TypeInfo* IEnumerator_1_t738_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4053_MethodInfo_var;
extern "C" Object_t * OrderedDictionaryEnumerator_get_Value_m3931 (OrderedDictionaryEnumerator_t737 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_1_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		KeyValuePair_2_get_Value_m4053_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484035);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t781  V_0 = {0};
	{
		Object_t* L_0 = (__this->___list_enumerator_0);
		NullCheck(L_0);
		KeyValuePair_2_t781  L_1 = (KeyValuePair_2_t781 )InterfaceFuncInvoker0< KeyValuePair_2_t781  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t738_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		JsonData_t87 * L_2 = KeyValuePair_2_get_Value_m4053((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m4053_MethodInfo_var);
		return L_2;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
extern "C" void OrderedDictionaryEnumerator__ctor_m3932 (OrderedDictionaryEnumerator_t737 * __this, Object_t* ___enumerator, const MethodInfo* method)
{
	{
		Object__ctor_m671(__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___enumerator;
		__this->___list_enumerator_0 = L_0;
		return;
	}
}
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
extern TypeInfo* IEnumerator_t150_il2cpp_TypeInfo_var;
extern "C" bool OrderedDictionaryEnumerator_MoveNext_m3933 (OrderedDictionaryEnumerator_t737 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (__this->___list_enumerator_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t150_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
extern TypeInfo* IEnumerator_t150_il2cpp_TypeInfo_var;
extern "C" void OrderedDictionaryEnumerator_Reset_m3934 (OrderedDictionaryEnumerator_t737 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (__this->___list_enumerator_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t150_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
extern TypeInfo* ParserToken_t771_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral545;
extern "C" void JsonException__ctor_m3935 (JsonException_t739 * __this, int32_t ___token, Exception_t165 * ___inner_exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParserToken_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral545 = il2cpp_codegen_string_literal_from_index(545);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___token;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(ParserToken_t771_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m918(NULL /*static, unused*/, _stringLiteral545, L_2, /*hidden argument*/NULL);
		Exception_t165 * L_4 = ___inner_exception;
		ApplicationException__ctor_m4067(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.Int32)
extern TypeInfo* Char_t469_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral546;
extern "C" void JsonException__ctor_m3936 (JsonException_t739 * __this, int32_t ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral546 = il2cpp_codegen_string_literal_from_index(546);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___c;
		uint16_t L_1 = (((int32_t)((uint16_t)L_0)));
		Object_t * L_2 = Box(Char_t469_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m918(NULL /*static, unused*/, _stringLiteral546, L_2, /*hidden argument*/NULL);
		ApplicationException__ctor_m4068(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C" void JsonException__ctor_m3937 (JsonException_t739 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		ApplicationException__ctor_m4068(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" void ExporterFunc__ctor_m3938 (ExporterFunc_t745 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
extern "C" void ExporterFunc_Invoke_m3939 (ExporterFunc_t745 * __this, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ExporterFunc_Invoke_m3939((ExporterFunc_t745 *)__this->___prev_9,___obj, ___writer, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj, ___writer,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj, ___writer,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, JsonWriter_t746 * ___writer, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___obj, ___writer,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ExporterFunc_t745(Il2CppObject* delegate, Object_t * ___obj, JsonWriter_t746 * ___writer)
{
	// Marshaling of parameter '___obj' to native representation
	Object_t * ____obj_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
extern "C" Object_t * ExporterFunc_BeginInvoke_m3940 (ExporterFunc_t745 * __this, Object_t * ___obj, JsonWriter_t746 * ___writer, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj;
	__d_args[1] = ___writer;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
extern "C" void ExporterFunc_EndInvoke_m3941 (ExporterFunc_t745 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" void ImporterFunc__ctor_m3942 (ImporterFunc_t747 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
extern "C" Object_t * ImporterFunc_Invoke_m3943 (ImporterFunc_t747 * __this, Object_t * ___input, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ImporterFunc_Invoke_m3943((ImporterFunc_t747 *)__this->___prev_9,___input, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___input, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___input, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_ImporterFunc_t747(Il2CppObject* delegate, Object_t * ___input)
{
	// Marshaling of parameter '___input' to native representation
	Object_t * ____input_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * ImporterFunc_BeginInvoke_m3944 (ImporterFunc_t747 * __this, Object_t * ___input, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ImporterFunc_EndInvoke_m3945 (ImporterFunc_t747 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
extern "C" void WrapperFactory__ctor_m3946 (WrapperFactory_t748 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
extern "C" Object_t * WrapperFactory_Invoke_m3947 (WrapperFactory_t748 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WrapperFactory_Invoke_m3947((WrapperFactory_t748 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_WrapperFactory_t748(Il2CppObject* delegate)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func();
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'LitJson.IJsonWrapper'."));

	return __return_value_unmarshaled;
}
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * WrapperFactory_BeginInvoke_m3948 (WrapperFactory_t748 * __this, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
extern "C" Object_t * WrapperFactory_EndInvoke_m3949 (WrapperFactory_t748 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Void LitJson.JsonMapper::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* JsonMapper_t184_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t791_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t792_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t793_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t794_il2cpp_TypeInfo_var;
extern TypeInfo* JsonWriter_t746_il2cpp_TypeInfo_var;
extern TypeInfo* DateTimeFormatInfo_t795_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t796_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t797_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4069_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4070_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4071_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4072_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4074_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4075_MethodInfo_var;
extern "C" void JsonMapper__cctor_m3950 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		JsonMapper_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Dictionary_2_t791_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		Dictionary_2_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		Dictionary_2_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		Dictionary_2_t794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		JsonWriter_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		DateTimeFormatInfo_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		Dictionary_2_t796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(478);
		Dictionary_2_t797_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		Dictionary_2__ctor_m4069_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484039);
		Dictionary_2__ctor_m4070_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484040);
		Dictionary_2__ctor_m4071_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484041);
		Dictionary_2__ctor_m4072_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484042);
		Dictionary_2__ctor_m4074_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484043);
		Dictionary_2__ctor_m4075_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484044);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m671(L_0, /*hidden argument*/NULL);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___array_metadata_lock_7 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m671(L_1, /*hidden argument*/NULL);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___conv_ops_lock_9 = L_1;
		Object_t * L_2 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m671(L_2, /*hidden argument*/NULL);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___object_metadata_lock_11 = L_2;
		Object_t * L_3 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m671(L_3, /*hidden argument*/NULL);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___type_properties_lock_13 = L_3;
		Object_t * L_4 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m671(L_4, /*hidden argument*/NULL);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___static_writer_lock_15 = L_4;
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___max_nesting_depth_0 = ((int32_t)100);
		Dictionary_2_t791 * L_5 = (Dictionary_2_t791 *)il2cpp_codegen_object_new (Dictionary_2_t791_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4069(L_5, /*hidden argument*/Dictionary_2__ctor_m4069_MethodInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___array_metadata_6 = L_5;
		Dictionary_2_t792 * L_6 = (Dictionary_2_t792 *)il2cpp_codegen_object_new (Dictionary_2_t792_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4070(L_6, /*hidden argument*/Dictionary_2__ctor_m4070_MethodInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___conv_ops_8 = L_6;
		Dictionary_2_t793 * L_7 = (Dictionary_2_t793 *)il2cpp_codegen_object_new (Dictionary_2_t793_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4071(L_7, /*hidden argument*/Dictionary_2__ctor_m4071_MethodInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___object_metadata_10 = L_7;
		Dictionary_2_t794 * L_8 = (Dictionary_2_t794 *)il2cpp_codegen_object_new (Dictionary_2_t794_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4072(L_8, /*hidden argument*/Dictionary_2__ctor_m4072_MethodInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___type_properties_12 = L_8;
		JsonWriter_t746 * L_9 = (JsonWriter_t746 *)il2cpp_codegen_object_new (JsonWriter_t746_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m3993(L_9, /*hidden argument*/NULL);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___static_writer_14 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_t795_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t795 * L_10 = DateTimeFormatInfo_get_InvariantInfo_m4073(NULL /*static, unused*/, /*hidden argument*/NULL);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___datetime_format_1 = L_10;
		Dictionary_2_t796 * L_11 = (Dictionary_2_t796 *)il2cpp_codegen_object_new (Dictionary_2_t796_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4074(L_11, /*hidden argument*/Dictionary_2__ctor_m4074_MethodInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_exporters_table_2 = L_11;
		Dictionary_2_t796 * L_12 = (Dictionary_2_t796 *)il2cpp_codegen_object_new (Dictionary_2_t796_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4074(L_12, /*hidden argument*/Dictionary_2__ctor_m4074_MethodInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___custom_exporters_table_3 = L_12;
		Dictionary_2_t797 * L_13 = (Dictionary_2_t797 *)il2cpp_codegen_object_new (Dictionary_2_t797_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4075(L_13, /*hidden argument*/Dictionary_2__ctor_m4075_MethodInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4 = L_13;
		Dictionary_2_t797 * L_14 = (Dictionary_2_t797 *)il2cpp_codegen_object_new (Dictionary_2_t797_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4075(L_14, /*hidden argument*/Dictionary_2__ctor_m4075_MethodInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___custom_importers_table_5 = L_14;
		JsonMapper_RegisterBaseExporters_m3952(NULL /*static, unused*/, /*hidden argument*/NULL);
		JsonMapper_RegisterBaseImporters_m3953(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IJsonWrapper_t749_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t717_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t180_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t189_il2cpp_TypeInfo_var;
extern TypeInfo* JsonMapper_t184_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t778_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t777_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_ReadValue_m3951 (Object_t * __this /* static, unused */, WrapperFactory_t748 * ___factory, JsonReader_t758 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IJsonWrapper_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		Double_t717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		Int32_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Int64_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		Boolean_t189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		JsonMapper_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		IList_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		IDictionary_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	String_t* V_2 = {0};
	{
		JsonReader_t758 * L_0 = ___reader;
		NullCheck(L_0);
		JsonReader_Read_m3990(L_0, /*hidden argument*/NULL);
		JsonReader_t758 * L_1 = ___reader;
		NullCheck(L_1);
		int32_t L_2 = JsonReader_get_Token_m3978(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_0020;
		}
	}
	{
		JsonReader_t758 * L_3 = ___reader;
		NullCheck(L_3);
		int32_t L_4 = JsonReader_get_Token_m3978(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		return (Object_t *)NULL;
	}

IL_0022:
	{
		WrapperFactory_t748 * L_5 = ___factory;
		NullCheck(L_5);
		Object_t * L_6 = WrapperFactory_Invoke_m3947(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		JsonReader_t758 * L_7 = ___reader;
		NullCheck(L_7);
		int32_t L_8 = JsonReader_get_Token_m3978(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_9 = V_0;
		JsonReader_t758 * L_10 = ___reader;
		NullCheck(L_10);
		Object_t * L_11 = JsonReader_get_Value_m3979(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void LitJson.IJsonWrapper::SetString(System.String) */, IJsonWrapper_t749_il2cpp_TypeInfo_var, L_9, ((String_t*)CastclassSealed(L_11, String_t_il2cpp_TypeInfo_var)));
		Object_t * L_12 = V_0;
		return L_12;
	}

IL_0049:
	{
		JsonReader_t758 * L_13 = ___reader;
		NullCheck(L_13);
		int32_t L_14 = JsonReader_get_Token_m3978(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		Object_t * L_15 = V_0;
		JsonReader_t758 * L_16 = ___reader;
		NullCheck(L_16);
		Object_t * L_17 = JsonReader_get_Value_m3979(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< double >::Invoke(1 /* System.Void LitJson.IJsonWrapper::SetDouble(System.Double) */, IJsonWrapper_t749_il2cpp_TypeInfo_var, L_15, ((*(double*)((double*)UnBox (L_17, Double_t717_il2cpp_TypeInfo_var)))));
		Object_t * L_18 = V_0;
		return L_18;
	}

IL_0068:
	{
		JsonReader_t758 * L_19 = ___reader;
		NullCheck(L_19);
		int32_t L_20 = JsonReader_get_Token_m3978(L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)6))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t * L_21 = V_0;
		JsonReader_t758 * L_22 = ___reader;
		NullCheck(L_22);
		Object_t * L_23 = JsonReader_get_Value_m3979(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void LitJson.IJsonWrapper::SetInt(System.Int32) */, IJsonWrapper_t749_il2cpp_TypeInfo_var, L_21, ((*(int32_t*)((int32_t*)UnBox (L_23, Int32_t157_il2cpp_TypeInfo_var)))));
		Object_t * L_24 = V_0;
		return L_24;
	}

IL_0087:
	{
		JsonReader_t758 * L_25 = ___reader;
		NullCheck(L_25);
		int32_t L_26 = JsonReader_get_Token_m3978(L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)7))))
		{
			goto IL_00a6;
		}
	}
	{
		Object_t * L_27 = V_0;
		JsonReader_t758 * L_28 = ___reader;
		NullCheck(L_28);
		Object_t * L_29 = JsonReader_get_Value_m3979(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< int64_t >::Invoke(4 /* System.Void LitJson.IJsonWrapper::SetLong(System.Int64) */, IJsonWrapper_t749_il2cpp_TypeInfo_var, L_27, ((*(int64_t*)((int64_t*)UnBox (L_29, Int64_t180_il2cpp_TypeInfo_var)))));
		Object_t * L_30 = V_0;
		return L_30;
	}

IL_00a6:
	{
		JsonReader_t758 * L_31 = ___reader;
		NullCheck(L_31);
		int32_t L_32 = JsonReader_get_Token_m3978(L_31, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00c6;
		}
	}
	{
		Object_t * L_33 = V_0;
		JsonReader_t758 * L_34 = ___reader;
		NullCheck(L_34);
		Object_t * L_35 = JsonReader_get_Value_m3979(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void LitJson.IJsonWrapper::SetBoolean(System.Boolean) */, IJsonWrapper_t749_il2cpp_TypeInfo_var, L_33, ((*(bool*)((bool*)UnBox (L_35, Boolean_t189_il2cpp_TypeInfo_var)))));
		Object_t * L_36 = V_0;
		return L_36;
	}

IL_00c6:
	{
		JsonReader_t758 * L_37 = ___reader;
		NullCheck(L_37);
		int32_t L_38 = JsonReader_get_Token_m3978(L_37, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)4))))
		{
			goto IL_010a;
		}
	}
	{
		Object_t * L_39 = V_0;
		NullCheck(L_39);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t749_il2cpp_TypeInfo_var, L_39, 2);
	}

IL_00d9:
	{
		WrapperFactory_t748 * L_40 = ___factory;
		JsonReader_t758 * L_41 = ___reader;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		Object_t * L_42 = JsonMapper_ReadValue_m3951(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		V_1 = L_42;
		Object_t * L_43 = V_1;
		if (L_43)
		{
			goto IL_00f8;
		}
	}
	{
		JsonReader_t758 * L_44 = ___reader;
		NullCheck(L_44);
		int32_t L_45 = JsonReader_get_Token_m3978(L_44, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_45) == ((uint32_t)5))))
		{
			goto IL_00f8;
		}
	}
	{
		goto IL_0105;
	}

IL_00f8:
	{
		Object_t * L_46 = V_0;
		Object_t * L_47 = V_1;
		NullCheck(L_46);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t778_il2cpp_TypeInfo_var, L_46, L_47);
		goto IL_00d9;
	}

IL_0105:
	{
		goto IL_0154;
	}

IL_010a:
	{
		JsonReader_t758 * L_48 = ___reader;
		NullCheck(L_48);
		int32_t L_49 = JsonReader_get_Token_m3978(L_48, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_0154;
		}
	}
	{
		Object_t * L_50 = V_0;
		NullCheck(L_50);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t749_il2cpp_TypeInfo_var, L_50, 1);
	}

IL_011d:
	{
		JsonReader_t758 * L_51 = ___reader;
		NullCheck(L_51);
		JsonReader_Read_m3990(L_51, /*hidden argument*/NULL);
		JsonReader_t758 * L_52 = ___reader;
		NullCheck(L_52);
		int32_t L_53 = JsonReader_get_Token_m3978(L_52, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_53) == ((uint32_t)3))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0154;
	}

IL_0135:
	{
		JsonReader_t758 * L_54 = ___reader;
		NullCheck(L_54);
		Object_t * L_55 = JsonReader_get_Value_m3979(L_54, /*hidden argument*/NULL);
		V_2 = ((String_t*)CastclassSealed(L_55, String_t_il2cpp_TypeInfo_var));
		Object_t * L_56 = V_0;
		String_t* L_57 = V_2;
		WrapperFactory_t748 * L_58 = ___factory;
		JsonReader_t758 * L_59 = ___reader;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		Object_t * L_60 = JsonMapper_ReadValue_m3951(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
		NullCheck(L_56);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t777_il2cpp_TypeInfo_var, L_56, L_57, L_60);
		goto IL_011d;
	}

IL_0154:
	{
		Object_t * L_61 = V_0;
		return L_61;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern const Il2CppType* Byte_t711_0_0_0_var;
extern const Il2CppType* Char_t469_0_0_0_var;
extern const Il2CppType* DateTime_t63_0_0_0_var;
extern const Il2CppType* Decimal_t780_0_0_0_var;
extern const Il2CppType* SByte_t798_0_0_0_var;
extern const Il2CppType* Int16_t799_0_0_0_var;
extern const Il2CppType* UInt16_t800_0_0_0_var;
extern const Il2CppType* UInt32_t718_0_0_0_var;
extern const Il2CppType* UInt64_t801_0_0_0_var;
extern TypeInfo* JsonMapper_t184_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ExporterFunc_t745_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t751_il2cpp_TypeInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseExportersU3Em__1_m3956_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseExportersU3Em__2_m3957_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseExportersU3Em__3_m3958_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseExportersU3Em__4_m3959_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseExportersU3Em__5_m3960_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseExportersU3Em__6_m3961_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseExportersU3Em__7_m3962_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseExportersU3Em__8_m3963_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseExportersU3Em__9_m3964_MethodInfo_var;
extern "C" void JsonMapper_RegisterBaseExporters_m3952 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t711_0_0_0_var = il2cpp_codegen_type_from_index(372);
		Char_t469_0_0_0_var = il2cpp_codegen_type_from_index(246);
		DateTime_t63_0_0_0_var = il2cpp_codegen_type_from_index(50);
		Decimal_t780_0_0_0_var = il2cpp_codegen_type_from_index(481);
		SByte_t798_0_0_0_var = il2cpp_codegen_type_from_index(482);
		Int16_t799_0_0_0_var = il2cpp_codegen_type_from_index(483);
		UInt16_t800_0_0_0_var = il2cpp_codegen_type_from_index(484);
		UInt32_t718_0_0_0_var = il2cpp_codegen_type_from_index(412);
		UInt64_t801_0_0_0_var = il2cpp_codegen_type_from_index(485);
		JsonMapper_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		ExporterFunc_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(469);
		IDictionary_2_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		JsonMapper_U3CRegisterBaseExportersU3Em__1_m3956_MethodInfo_var = il2cpp_codegen_method_info_from_index(397);
		JsonMapper_U3CRegisterBaseExportersU3Em__2_m3957_MethodInfo_var = il2cpp_codegen_method_info_from_index(398);
		JsonMapper_U3CRegisterBaseExportersU3Em__3_m3958_MethodInfo_var = il2cpp_codegen_method_info_from_index(399);
		JsonMapper_U3CRegisterBaseExportersU3Em__4_m3959_MethodInfo_var = il2cpp_codegen_method_info_from_index(400);
		JsonMapper_U3CRegisterBaseExportersU3Em__5_m3960_MethodInfo_var = il2cpp_codegen_method_info_from_index(401);
		JsonMapper_U3CRegisterBaseExportersU3Em__6_m3961_MethodInfo_var = il2cpp_codegen_method_info_from_index(402);
		JsonMapper_U3CRegisterBaseExportersU3Em__7_m3962_MethodInfo_var = il2cpp_codegen_method_info_from_index(403);
		JsonMapper_U3CRegisterBaseExportersU3Em__8_m3963_MethodInfo_var = il2cpp_codegen_method_info_from_index(404);
		JsonMapper_U3CRegisterBaseExportersU3Em__9_m3964_MethodInfo_var = il2cpp_codegen_method_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * G_B2_0 = {0};
	Object_t* G_B2_1 = {0};
	Type_t * G_B1_0 = {0};
	Object_t* G_B1_1 = {0};
	Type_t * G_B4_0 = {0};
	Object_t* G_B4_1 = {0};
	Type_t * G_B3_0 = {0};
	Object_t* G_B3_1 = {0};
	Type_t * G_B6_0 = {0};
	Object_t* G_B6_1 = {0};
	Type_t * G_B5_0 = {0};
	Object_t* G_B5_1 = {0};
	Type_t * G_B8_0 = {0};
	Object_t* G_B8_1 = {0};
	Type_t * G_B7_0 = {0};
	Object_t* G_B7_1 = {0};
	Type_t * G_B10_0 = {0};
	Object_t* G_B10_1 = {0};
	Type_t * G_B9_0 = {0};
	Object_t* G_B9_1 = {0};
	Type_t * G_B12_0 = {0};
	Object_t* G_B12_1 = {0};
	Type_t * G_B11_0 = {0};
	Object_t* G_B11_1 = {0};
	Type_t * G_B14_0 = {0};
	Object_t* G_B14_1 = {0};
	Type_t * G_B13_0 = {0};
	Object_t* G_B13_1 = {0};
	Type_t * G_B16_0 = {0};
	Object_t* G_B16_1 = {0};
	Type_t * G_B15_0 = {0};
	Object_t* G_B15_1 = {0};
	Type_t * G_B18_0 = {0};
	Object_t* G_B18_1 = {0};
	Type_t * G_B17_0 = {0};
	Object_t* G_B17_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		Object_t* L_0 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_exporters_table_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Byte_t711_0_0_0_var), /*hidden argument*/NULL);
		ExporterFunc_t745 * L_2 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_16;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_3 = { (void*)JsonMapper_U3CRegisterBaseExportersU3Em__1_m3956_MethodInfo_var };
		ExporterFunc_t745 * L_4 = (ExporterFunc_t745 *)il2cpp_codegen_object_new (ExporterFunc_t745_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3938(L_4, NULL, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_16 = L_4;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ExporterFunc_t745 * L_5 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_16;
		NullCheck(G_B2_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t745 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t751_il2cpp_TypeInfo_var, G_B2_1, G_B2_0, L_5);
		Object_t* L_6 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_exporters_table_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Char_t469_0_0_0_var), /*hidden argument*/NULL);
		ExporterFunc_t745 * L_8 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_17;
		G_B3_0 = L_7;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_6;
			goto IL_0058;
		}
	}
	{
		IntPtr_t L_9 = { (void*)JsonMapper_U3CRegisterBaseExportersU3Em__2_m3957_MethodInfo_var };
		ExporterFunc_t745 * L_10 = (ExporterFunc_t745 *)il2cpp_codegen_object_new (ExporterFunc_t745_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3938(L_10, NULL, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_17 = L_10;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ExporterFunc_t745 * L_11 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_17;
		NullCheck(G_B4_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t745 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t751_il2cpp_TypeInfo_var, G_B4_1, G_B4_0, L_11);
		Object_t* L_12 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_exporters_table_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(DateTime_t63_0_0_0_var), /*hidden argument*/NULL);
		ExporterFunc_t745 * L_14 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_18;
		G_B5_0 = L_13;
		G_B5_1 = L_12;
		if (L_14)
		{
			G_B6_0 = L_13;
			G_B6_1 = L_12;
			goto IL_0089;
		}
	}
	{
		IntPtr_t L_15 = { (void*)JsonMapper_U3CRegisterBaseExportersU3Em__3_m3958_MethodInfo_var };
		ExporterFunc_t745 * L_16 = (ExporterFunc_t745 *)il2cpp_codegen_object_new (ExporterFunc_t745_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3938(L_16, NULL, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_18 = L_16;
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0089:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ExporterFunc_t745 * L_17 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_18;
		NullCheck(G_B6_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t745 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t751_il2cpp_TypeInfo_var, G_B6_1, G_B6_0, L_17);
		Object_t* L_18 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_exporters_table_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Decimal_t780_0_0_0_var), /*hidden argument*/NULL);
		ExporterFunc_t745 * L_20 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_19;
		G_B7_0 = L_19;
		G_B7_1 = L_18;
		if (L_20)
		{
			G_B8_0 = L_19;
			G_B8_1 = L_18;
			goto IL_00ba;
		}
	}
	{
		IntPtr_t L_21 = { (void*)JsonMapper_U3CRegisterBaseExportersU3Em__4_m3959_MethodInfo_var };
		ExporterFunc_t745 * L_22 = (ExporterFunc_t745 *)il2cpp_codegen_object_new (ExporterFunc_t745_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3938(L_22, NULL, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_19 = L_22;
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_00ba:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ExporterFunc_t745 * L_23 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_19;
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t745 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t751_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_23);
		Object_t* L_24 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_exporters_table_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(SByte_t798_0_0_0_var), /*hidden argument*/NULL);
		ExporterFunc_t745 * L_26 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_20;
		G_B9_0 = L_25;
		G_B9_1 = L_24;
		if (L_26)
		{
			G_B10_0 = L_25;
			G_B10_1 = L_24;
			goto IL_00eb;
		}
	}
	{
		IntPtr_t L_27 = { (void*)JsonMapper_U3CRegisterBaseExportersU3Em__5_m3960_MethodInfo_var };
		ExporterFunc_t745 * L_28 = (ExporterFunc_t745 *)il2cpp_codegen_object_new (ExporterFunc_t745_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3938(L_28, NULL, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_20 = L_28;
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
	}

IL_00eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ExporterFunc_t745 * L_29 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_20;
		NullCheck(G_B10_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t745 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t751_il2cpp_TypeInfo_var, G_B10_1, G_B10_0, L_29);
		Object_t* L_30 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_exporters_table_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_31 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Int16_t799_0_0_0_var), /*hidden argument*/NULL);
		ExporterFunc_t745 * L_32 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_21;
		G_B11_0 = L_31;
		G_B11_1 = L_30;
		if (L_32)
		{
			G_B12_0 = L_31;
			G_B12_1 = L_30;
			goto IL_011c;
		}
	}
	{
		IntPtr_t L_33 = { (void*)JsonMapper_U3CRegisterBaseExportersU3Em__6_m3961_MethodInfo_var };
		ExporterFunc_t745 * L_34 = (ExporterFunc_t745 *)il2cpp_codegen_object_new (ExporterFunc_t745_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3938(L_34, NULL, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_21 = L_34;
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
	}

IL_011c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ExporterFunc_t745 * L_35 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_21;
		NullCheck(G_B12_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t745 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t751_il2cpp_TypeInfo_var, G_B12_1, G_B12_0, L_35);
		Object_t* L_36 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_exporters_table_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(UInt16_t800_0_0_0_var), /*hidden argument*/NULL);
		ExporterFunc_t745 * L_38 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache7_22;
		G_B13_0 = L_37;
		G_B13_1 = L_36;
		if (L_38)
		{
			G_B14_0 = L_37;
			G_B14_1 = L_36;
			goto IL_014d;
		}
	}
	{
		IntPtr_t L_39 = { (void*)JsonMapper_U3CRegisterBaseExportersU3Em__7_m3962_MethodInfo_var };
		ExporterFunc_t745 * L_40 = (ExporterFunc_t745 *)il2cpp_codegen_object_new (ExporterFunc_t745_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3938(L_40, NULL, L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache7_22 = L_40;
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ExporterFunc_t745 * L_41 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache7_22;
		NullCheck(G_B14_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t745 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t751_il2cpp_TypeInfo_var, G_B14_1, G_B14_0, L_41);
		Object_t* L_42 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_exporters_table_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(UInt32_t718_0_0_0_var), /*hidden argument*/NULL);
		ExporterFunc_t745 * L_44 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_23;
		G_B15_0 = L_43;
		G_B15_1 = L_42;
		if (L_44)
		{
			G_B16_0 = L_43;
			G_B16_1 = L_42;
			goto IL_017e;
		}
	}
	{
		IntPtr_t L_45 = { (void*)JsonMapper_U3CRegisterBaseExportersU3Em__8_m3963_MethodInfo_var };
		ExporterFunc_t745 * L_46 = (ExporterFunc_t745 *)il2cpp_codegen_object_new (ExporterFunc_t745_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3938(L_46, NULL, L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_23 = L_46;
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
	}

IL_017e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ExporterFunc_t745 * L_47 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_23;
		NullCheck(G_B16_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t745 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t751_il2cpp_TypeInfo_var, G_B16_1, G_B16_0, L_47);
		Object_t* L_48 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_exporters_table_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_49 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(UInt64_t801_0_0_0_var), /*hidden argument*/NULL);
		ExporterFunc_t745 * L_50 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_24;
		G_B17_0 = L_49;
		G_B17_1 = L_48;
		if (L_50)
		{
			G_B18_0 = L_49;
			G_B18_1 = L_48;
			goto IL_01af;
		}
	}
	{
		IntPtr_t L_51 = { (void*)JsonMapper_U3CRegisterBaseExportersU3Em__9_m3964_MethodInfo_var };
		ExporterFunc_t745 * L_52 = (ExporterFunc_t745 *)il2cpp_codegen_object_new (ExporterFunc_t745_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3938(L_52, NULL, L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_24 = L_52;
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
	}

IL_01af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ExporterFunc_t745 * L_53 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_24;
		NullCheck(G_B18_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t745 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t751_il2cpp_TypeInfo_var, G_B18_1, G_B18_0, L_53);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern const Il2CppType* Int32_t157_0_0_0_var;
extern const Il2CppType* Byte_t711_0_0_0_var;
extern const Il2CppType* UInt64_t801_0_0_0_var;
extern const Il2CppType* SByte_t798_0_0_0_var;
extern const Il2CppType* Int16_t799_0_0_0_var;
extern const Il2CppType* UInt16_t800_0_0_0_var;
extern const Il2CppType* UInt32_t718_0_0_0_var;
extern const Il2CppType* Single_t156_0_0_0_var;
extern const Il2CppType* Double_t717_0_0_0_var;
extern const Il2CppType* Decimal_t780_0_0_0_var;
extern const Il2CppType* Int64_t180_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Char_t469_0_0_0_var;
extern const Il2CppType* DateTime_t63_0_0_0_var;
extern TypeInfo* JsonMapper_t184_il2cpp_TypeInfo_var;
extern TypeInfo* ImporterFunc_t747_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__A_m3965_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__B_m3966_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__C_m3967_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__D_m3968_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__E_m3969_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__F_m3970_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__10_m3971_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__11_m3972_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__12_m3973_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__13_m3974_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__14_m3975_MethodInfo_var;
extern const MethodInfo* JsonMapper_U3CRegisterBaseImportersU3Em__15_m3976_MethodInfo_var;
extern "C" void JsonMapper_RegisterBaseImporters_m3953 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t157_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Byte_t711_0_0_0_var = il2cpp_codegen_type_from_index(372);
		UInt64_t801_0_0_0_var = il2cpp_codegen_type_from_index(485);
		SByte_t798_0_0_0_var = il2cpp_codegen_type_from_index(482);
		Int16_t799_0_0_0_var = il2cpp_codegen_type_from_index(483);
		UInt16_t800_0_0_0_var = il2cpp_codegen_type_from_index(484);
		UInt32_t718_0_0_0_var = il2cpp_codegen_type_from_index(412);
		Single_t156_0_0_0_var = il2cpp_codegen_type_from_index(3);
		Double_t717_0_0_0_var = il2cpp_codegen_type_from_index(411);
		Decimal_t780_0_0_0_var = il2cpp_codegen_type_from_index(481);
		Int64_t180_0_0_0_var = il2cpp_codegen_type_from_index(53);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(7);
		Char_t469_0_0_0_var = il2cpp_codegen_type_from_index(246);
		DateTime_t63_0_0_0_var = il2cpp_codegen_type_from_index(50);
		JsonMapper_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ImporterFunc_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		JsonMapper_U3CRegisterBaseImportersU3Em__A_m3965_MethodInfo_var = il2cpp_codegen_method_info_from_index(406);
		JsonMapper_U3CRegisterBaseImportersU3Em__B_m3966_MethodInfo_var = il2cpp_codegen_method_info_from_index(407);
		JsonMapper_U3CRegisterBaseImportersU3Em__C_m3967_MethodInfo_var = il2cpp_codegen_method_info_from_index(408);
		JsonMapper_U3CRegisterBaseImportersU3Em__D_m3968_MethodInfo_var = il2cpp_codegen_method_info_from_index(409);
		JsonMapper_U3CRegisterBaseImportersU3Em__E_m3969_MethodInfo_var = il2cpp_codegen_method_info_from_index(410);
		JsonMapper_U3CRegisterBaseImportersU3Em__F_m3970_MethodInfo_var = il2cpp_codegen_method_info_from_index(411);
		JsonMapper_U3CRegisterBaseImportersU3Em__10_m3971_MethodInfo_var = il2cpp_codegen_method_info_from_index(412);
		JsonMapper_U3CRegisterBaseImportersU3Em__11_m3972_MethodInfo_var = il2cpp_codegen_method_info_from_index(413);
		JsonMapper_U3CRegisterBaseImportersU3Em__12_m3973_MethodInfo_var = il2cpp_codegen_method_info_from_index(414);
		JsonMapper_U3CRegisterBaseImportersU3Em__13_m3974_MethodInfo_var = il2cpp_codegen_method_info_from_index(415);
		JsonMapper_U3CRegisterBaseImportersU3Em__14_m3975_MethodInfo_var = il2cpp_codegen_method_info_from_index(416);
		JsonMapper_U3CRegisterBaseImportersU3Em__15_m3976_MethodInfo_var = il2cpp_codegen_method_info_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	ImporterFunc_t747 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_0 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_25;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		IntPtr_t L_1 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__A_m3965_MethodInfo_var };
		ImporterFunc_t747 * L_2 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_2, NULL, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_25 = L_2;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_3 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_25;
		V_0 = L_3;
		Object_t* L_4 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Int32_t157_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_6 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Byte_t711_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_7 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		ImporterFunc_t747 * L_8 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_26;
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		IntPtr_t L_9 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__B_m3966_MethodInfo_var };
		ImporterFunc_t747 * L_10 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_10, NULL, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_26 = L_10;
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_11 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_26;
		V_0 = L_11;
		Object_t* L_12 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Int32_t157_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_14 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(UInt64_t801_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_15 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		ImporterFunc_t747 * L_16 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_27;
		if (L_16)
		{
			goto IL_0092;
		}
	}
	{
		IntPtr_t L_17 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__C_m3967_MethodInfo_var };
		ImporterFunc_t747 * L_18 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_18, NULL, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_27 = L_18;
	}

IL_0092:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_19 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_27;
		V_0 = L_19;
		Object_t* L_20 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Int32_t157_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_22 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(SByte_t798_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_23 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		ImporterFunc_t747 * L_24 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_28;
		if (L_24)
		{
			goto IL_00cf;
		}
	}
	{
		IntPtr_t L_25 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__D_m3968_MethodInfo_var };
		ImporterFunc_t747 * L_26 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_26, NULL, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_28 = L_26;
	}

IL_00cf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_27 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_28;
		V_0 = L_27;
		Object_t* L_28 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Int32_t157_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_30 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Int16_t799_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_31 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_28, L_29, L_30, L_31, /*hidden argument*/NULL);
		ImporterFunc_t747 * L_32 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_29;
		if (L_32)
		{
			goto IL_010c;
		}
	}
	{
		IntPtr_t L_33 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__E_m3969_MethodInfo_var };
		ImporterFunc_t747 * L_34 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_34, NULL, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_29 = L_34;
	}

IL_010c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_35 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_29;
		V_0 = L_35;
		Object_t* L_36 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Int32_t157_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_38 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(UInt16_t800_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_39 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_36, L_37, L_38, L_39, /*hidden argument*/NULL);
		ImporterFunc_t747 * L_40 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_30;
		if (L_40)
		{
			goto IL_0149;
		}
	}
	{
		IntPtr_t L_41 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__F_m3970_MethodInfo_var };
		ImporterFunc_t747 * L_42 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_42, NULL, L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_30 = L_42;
	}

IL_0149:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_43 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_30;
		V_0 = L_43;
		Object_t* L_44 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Int32_t157_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_46 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(UInt32_t718_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_47 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_44, L_45, L_46, L_47, /*hidden argument*/NULL);
		ImporterFunc_t747 * L_48 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_31;
		if (L_48)
		{
			goto IL_0186;
		}
	}
	{
		IntPtr_t L_49 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__10_m3971_MethodInfo_var };
		ImporterFunc_t747 * L_50 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_50, NULL, L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_31 = L_50;
	}

IL_0186:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_51 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_31;
		V_0 = L_51;
		Object_t* L_52 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_53 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Int32_t157_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_54 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Single_t156_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_55 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_52, L_53, L_54, L_55, /*hidden argument*/NULL);
		ImporterFunc_t747 * L_56 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_32;
		if (L_56)
		{
			goto IL_01c3;
		}
	}
	{
		IntPtr_t L_57 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__11_m3972_MethodInfo_var };
		ImporterFunc_t747 * L_58 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_58, NULL, L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_32 = L_58;
	}

IL_01c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_59 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_32;
		V_0 = L_59;
		Object_t* L_60 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_61 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Int32_t157_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_62 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Double_t717_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_63 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_60, L_61, L_62, L_63, /*hidden argument*/NULL);
		ImporterFunc_t747 * L_64 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_33;
		if (L_64)
		{
			goto IL_0200;
		}
	}
	{
		IntPtr_t L_65 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__12_m3973_MethodInfo_var };
		ImporterFunc_t747 * L_66 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_66, NULL, L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_33 = L_66;
	}

IL_0200:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_67 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_33;
		V_0 = L_67;
		Object_t* L_68 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_69 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Double_t717_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_70 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Decimal_t780_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_71 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_68, L_69, L_70, L_71, /*hidden argument*/NULL);
		ImporterFunc_t747 * L_72 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_34;
		if (L_72)
		{
			goto IL_023d;
		}
	}
	{
		IntPtr_t L_73 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__13_m3974_MethodInfo_var };
		ImporterFunc_t747 * L_74 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_74, NULL, L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_34 = L_74;
	}

IL_023d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_75 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_34;
		V_0 = L_75;
		Object_t* L_76 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_77 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Int64_t180_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_78 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(UInt32_t718_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_79 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_76, L_77, L_78, L_79, /*hidden argument*/NULL);
		ImporterFunc_t747 * L_80 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache14_35;
		if (L_80)
		{
			goto IL_027a;
		}
	}
	{
		IntPtr_t L_81 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__14_m3975_MethodInfo_var };
		ImporterFunc_t747 * L_82 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_82, NULL, L_81, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache14_35 = L_82;
	}

IL_027a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_83 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache14_35;
		V_0 = L_83;
		Object_t* L_84 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_85 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_86 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(Char_t469_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_87 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_84, L_85, L_86, L_87, /*hidden argument*/NULL);
		ImporterFunc_t747 * L_88 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache15_36;
		if (L_88)
		{
			goto IL_02b7;
		}
	}
	{
		IntPtr_t L_89 = { (void*)JsonMapper_U3CRegisterBaseImportersU3Em__15_m3976_MethodInfo_var };
		ImporterFunc_t747 * L_90 = (ImporterFunc_t747 *)il2cpp_codegen_object_new (ImporterFunc_t747_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3942(L_90, NULL, L_89, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache15_36 = L_90;
	}

IL_02b7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		ImporterFunc_t747 * L_91 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache15_36;
		V_0 = L_91;
		Object_t* L_92 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___base_importers_table_4;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_93 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_94 = Type_GetTypeFromHandle_m700(NULL /*static, unused*/, LoadTypeToken(DateTime_t63_0_0_0_var), /*hidden argument*/NULL);
		ImporterFunc_t747 * L_95 = V_0;
		JsonMapper_RegisterImporter_m3954(NULL /*static, unused*/, L_92, L_93, L_94, L_95, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern TypeInfo* IDictionary_2_t752_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t802_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t803_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4076_MethodInfo_var;
extern "C" void JsonMapper_RegisterImporter_m3954 (Object_t * __this /* static, unused */, Object_t* ___table, Type_t * ___json_type, Type_t * ___value_type, ImporterFunc_t747 * ___importer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		Dictionary_2_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		IDictionary_2_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		Dictionary_2__ctor_m4076_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484066);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___table;
		Type_t * L_1 = ___json_type;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_t752_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___table;
		Type_t * L_4 = ___json_type;
		Dictionary_2_t802 * L_5 = (Dictionary_2_t802 *)il2cpp_codegen_object_new (Dictionary_2_t802_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4076(L_5, /*hidden argument*/Dictionary_2__ctor_m4076_MethodInfo_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< Type_t *, Object_t* >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(!0,!1) */, IDictionary_2_t752_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0018:
	{
		Object_t* L_6 = ___table;
		Type_t * L_7 = ___json_type;
		NullCheck(L_6);
		Object_t* L_8 = (Object_t*)InterfaceFuncInvoker1< Object_t*, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_t752_il2cpp_TypeInfo_var, L_6, L_7);
		Type_t * L_9 = ___value_type;
		ImporterFunc_t747 * L_10 = ___importer;
		NullCheck(L_8);
		InterfaceActionInvoker2< Type_t *, ImporterFunc_t747 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(!0,!1) */, IDictionary_2_t803_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return;
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
extern TypeInfo* JsonMapper_t184_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperFactory_t748_il2cpp_TypeInfo_var;
extern TypeInfo* JsonData_t87_il2cpp_TypeInfo_var;
extern const MethodInfo* JsonMapper_U3CToObjectU3Em__18_m3977_MethodInfo_var;
extern "C" JsonData_t87 * JsonMapper_ToObject_m833 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonMapper_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		WrapperFactory_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		JsonData_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		JsonMapper_U3CToObjectU3Em__18_m3977_MethodInfo_var = il2cpp_codegen_method_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		WrapperFactory_t748 * L_0 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache18_37;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		IntPtr_t L_1 = { (void*)JsonMapper_U3CToObjectU3Em__18_m3977_MethodInfo_var };
		WrapperFactory_t748 * L_2 = (WrapperFactory_t748 *)il2cpp_codegen_object_new (WrapperFactory_t748_il2cpp_TypeInfo_var);
		WrapperFactory__ctor_m3946(L_2, NULL, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache18_37 = L_2;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		WrapperFactory_t748 * L_3 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache18_37;
		String_t* L_4 = ___json;
		Object_t * L_5 = JsonMapper_ToWrapper_m3955(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return ((JsonData_t87 *)CastclassClass(L_5, JsonData_t87_il2cpp_TypeInfo_var));
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern TypeInfo* JsonReader_t758_il2cpp_TypeInfo_var;
extern TypeInfo* JsonMapper_t184_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_ToWrapper_m3955 (Object_t * __this /* static, unused */, WrapperFactory_t748 * ___factory, String_t* ___json, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonReader_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		JsonMapper_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	JsonReader_t758 * V_0 = {0};
	{
		String_t* L_0 = ___json;
		JsonReader_t758 * L_1 = (JsonReader_t758 *)il2cpp_codegen_object_new (JsonReader_t758_il2cpp_TypeInfo_var);
		JsonReader__ctor_m3981(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		WrapperFactory_t748 * L_2 = ___factory;
		JsonReader_t758 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		Object_t * L_4 = JsonMapper_ReadValue_m3951(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
extern TypeInfo* Byte_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__1_m3956 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_t746 * L_0 = ___writer;
		Object_t * L_1 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m4077(NULL /*static, unused*/, ((*(uint8_t*)((uint8_t*)UnBox (L_1, Byte_t711_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m4003(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
extern TypeInfo* Char_t469_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__2_m3957 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_t746 * L_0 = ___writer;
		Object_t * L_1 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m4078(NULL /*static, unused*/, ((*(uint16_t*)((uint16_t*)UnBox (L_1, Char_t469_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m4004(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
extern TypeInfo* DateTime_t63_il2cpp_TypeInfo_var;
extern TypeInfo* JsonMapper_t184_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__3_m3958 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		JsonMapper_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_t746 * L_0 = ___writer;
		Object_t * L_1 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		Object_t * L_2 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___datetime_format_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToString_m4079(NULL /*static, unused*/, ((*(DateTime_t63 *)((DateTime_t63 *)UnBox (L_1, DateTime_t63_il2cpp_TypeInfo_var)))), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m4004(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
extern TypeInfo* Decimal_t780_il2cpp_TypeInfo_var;
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__4_m3959 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Decimal_t780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_t746 * L_0 = ___writer;
		Object_t * L_1 = ___obj;
		NullCheck(L_0);
		JsonWriter_Write_m4002(L_0, ((*(Decimal_t780 *)((Decimal_t780 *)UnBox (L_1, Decimal_t780_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
extern TypeInfo* SByte_t798_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__5_m3960 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByte_t798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_t746 * L_0 = ___writer;
		Object_t * L_1 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m4080(NULL /*static, unused*/, ((*(int8_t*)((int8_t*)UnBox (L_1, SByte_t798_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m4003(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
extern TypeInfo* Int16_t799_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__6_m3961 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int16_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_t746 * L_0 = ___writer;
		Object_t * L_1 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m4081(NULL /*static, unused*/, ((*(int16_t*)((int16_t*)UnBox (L_1, Int16_t799_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m4003(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
extern TypeInfo* UInt16_t800_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__7_m3962 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt16_t800_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_t746 * L_0 = ___writer;
		Object_t * L_1 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m4082(NULL /*static, unused*/, ((*(uint16_t*)((uint16_t*)UnBox (L_1, UInt16_t800_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m4003(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
extern TypeInfo* UInt32_t718_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__8_m3963 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt32_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(412);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_t746 * L_0 = ___writer;
		Object_t * L_1 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		uint64_t L_2 = Convert_ToUInt64_m4083(NULL /*static, unused*/, ((*(uint32_t*)((uint32_t*)UnBox (L_1, UInt32_t718_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m4005(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
extern TypeInfo* UInt64_t801_il2cpp_TypeInfo_var;
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__9_m3964 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t746 * ___writer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt64_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_t746 * L_0 = ___writer;
		Object_t * L_1 = ___obj;
		NullCheck(L_0);
		JsonWriter_Write_m4005(L_0, ((*(uint64_t*)((uint64_t*)UnBox (L_1, UInt64_t801_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
extern TypeInfo* Int32_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t711_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__A_m3965 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		Byte_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_m4084(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox (L_0, Int32_t157_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(Byte_t711_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
extern TypeInfo* Int32_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t801_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__B_m3966 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		UInt64_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m4085(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox (L_0, Int32_t157_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(UInt64_t801_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
extern TypeInfo* Int32_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* SByte_t798_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__C_m3967 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		SByte_t798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_m4086(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox (L_0, Int32_t157_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int8_t L_2 = L_1;
		Object_t * L_3 = Box(SByte_t798_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
extern TypeInfo* Int32_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t799_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__D_m3968 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		Int16_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_m4087(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox (L_0, Int32_t157_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int16_t L_2 = L_1;
		Object_t * L_3 = Box(Int16_t799_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
extern TypeInfo* Int32_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t800_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__E_m3969 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		UInt16_t800_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		uint16_t L_1 = Convert_ToUInt16_m4088(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox (L_0, Int32_t157_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint16_t L_2 = L_1;
		Object_t * L_3 = Box(UInt16_t800_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
extern TypeInfo* Int32_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t718_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__F_m3970 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		UInt32_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(412);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_m4089(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox (L_0, Int32_t157_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		Object_t * L_3 = Box(UInt32_t718_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
extern TypeInfo* Int32_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t156_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__10_m3971 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		Single_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m4090(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox (L_0, Int32_t157_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t156_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
extern TypeInfo* Int32_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t717_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__11_m3972 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		Double_t717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m4091(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox (L_0, Int32_t157_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		double L_2 = L_1;
		Object_t * L_3 = Box(Double_t717_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
extern TypeInfo* Double_t717_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t780_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__12_m3973 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Double_t717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		Decimal_t780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		Decimal_t780  L_1 = Convert_ToDecimal_m4092(NULL /*static, unused*/, ((*(double*)((double*)UnBox (L_0, Double_t717_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Decimal_t780  L_2 = L_1;
		Object_t * L_3 = Box(Decimal_t780_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
extern TypeInfo* Int64_t180_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t718_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__13_m3974 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		UInt32_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(412);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_m4093(NULL /*static, unused*/, ((*(int64_t*)((int64_t*)UnBox (L_0, Int64_t180_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		Object_t * L_3 = Box(UInt32_t718_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t469_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__14_m3975 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		Char_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		uint16_t L_1 = Convert_ToChar_m4094(NULL /*static, unused*/, ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		uint16_t L_2 = L_1;
		Object_t * L_3 = Box(Char_t469_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* JsonMapper_t184_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t63_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__15_m3976 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		JsonMapper_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		DateTime_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t184_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((JsonMapper_t184_StaticFields*)JsonMapper_t184_il2cpp_TypeInfo_var->static_fields)->___datetime_format_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		DateTime_t63  L_2 = Convert_ToDateTime_m4095(NULL /*static, unused*/, ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTime_t63  L_3 = L_2;
		Object_t * L_4 = Box(DateTime_t63_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
extern TypeInfo* JsonData_t87_il2cpp_TypeInfo_var;
extern "C" Object_t * JsonMapper_U3CToObjectU3Em__18_m3977 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonData_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonData_t87 * L_0 = (JsonData_t87 *)il2cpp_codegen_object_new (JsonData_t87_il2cpp_TypeInfo_var);
		JsonData__ctor_m3899(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C" int32_t JsonReader_get_Token_m3978 (JsonReader_t758 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___token_14);
		return L_0;
	}
}
// System.Object LitJson.JsonReader::get_Value()
extern "C" Object_t * JsonReader_get_Value_m3979 (JsonReader_t758 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___token_value_13);
		return L_0;
	}
}
// System.Void LitJson.JsonReader::.cctor()
extern TypeInfo* JsonReader_t758_il2cpp_TypeInfo_var;
extern "C" void JsonReader__cctor_m3980 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonReader_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonReader_PopulateParseTable_m3983(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.String)
extern TypeInfo* StringReader_t804_il2cpp_TypeInfo_var;
extern "C" void JsonReader__ctor_m3981 (JsonReader_t758 * __this, String_t* ___json_text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringReader_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___json_text;
		StringReader_t804 * L_1 = (StringReader_t804 *)il2cpp_codegen_object_new (StringReader_t804_il2cpp_TypeInfo_var);
		StringReader__ctor_m4096(L_1, L_0, /*hidden argument*/NULL);
		JsonReader__ctor_m3982(__this, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern TypeInfo* ArgumentNullException_t160_il2cpp_TypeInfo_var;
extern TypeInfo* Stack_1_t759_il2cpp_TypeInfo_var;
extern TypeInfo* Lexer_t760_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m4097_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m4098_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral547;
extern "C" void JsonReader__ctor_m3982 (JsonReader_t758 * __this, TextReader_t761 * ___reader, bool ___owned, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Stack_1_t759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(492);
		Lexer_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		Stack_1__ctor_m4097_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484068);
		Stack_1_Push_m4098_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484069);
		_stringLiteral547 = il2cpp_codegen_string_literal_from_index(547);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m671(__this, /*hidden argument*/NULL);
		TextReader_t761 * L_0 = ___reader;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t160 * L_1 = (ArgumentNullException_t160 *)il2cpp_codegen_object_new (ArgumentNullException_t160_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m687(L_1, _stringLiteral547, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		__this->___parser_in_string_7 = 0;
		__this->___parser_return_8 = 0;
		__this->___read_started_9 = 0;
		Stack_1_t759 * L_2 = (Stack_1_t759 *)il2cpp_codegen_object_new (Stack_1_t759_il2cpp_TypeInfo_var);
		Stack_1__ctor_m4097(L_2, /*hidden argument*/Stack_1__ctor_m4097_MethodInfo_var);
		__this->___automaton_stack_1 = L_2;
		Stack_1_t759 * L_3 = (__this->___automaton_stack_1);
		NullCheck(L_3);
		Stack_1_Push_m4098(L_3, ((int32_t)65553), /*hidden argument*/Stack_1_Push_m4098_MethodInfo_var);
		Stack_1_t759 * L_4 = (__this->___automaton_stack_1);
		NullCheck(L_4);
		Stack_1_Push_m4098(L_4, ((int32_t)65543), /*hidden argument*/Stack_1_Push_m4098_MethodInfo_var);
		TextReader_t761 * L_5 = ___reader;
		Lexer_t760 * L_6 = (Lexer_t760 *)il2cpp_codegen_object_new (Lexer_t760_il2cpp_TypeInfo_var);
		Lexer__ctor_m4015(L_6, L_5, /*hidden argument*/NULL);
		__this->___lexer_6 = L_6;
		__this->___end_of_input_5 = 0;
		__this->___end_of_json_4 = 0;
		__this->___skip_non_members_12 = 1;
		TextReader_t761 * L_7 = ___reader;
		__this->___reader_10 = L_7;
		bool L_8 = ___owned;
		__this->___reader_is_owned_11 = L_8;
		return;
	}
}
// System.Void LitJson.JsonReader::PopulateParseTable()
extern TypeInfo* Dictionary_2_t805_il2cpp_TypeInfo_var;
extern TypeInfo* JsonReader_t758_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t61_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4099_MethodInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D0_0_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D1_1_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D2_2_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D3_3_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D4_4_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D5_5_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D6_6_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D7_7_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D8_8_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D9_9_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2DA_10_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2DB_11_FieldInfo_var;
extern "C" void JsonReader_PopulateParseTable_m3983 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		JsonReader_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		Int32U5BU5D_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		Dictionary_2__ctor_m4099_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484070);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D0_0_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 0);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D1_1_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 1);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D2_2_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 2);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D3_3_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 3);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D4_4_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 4);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D5_5_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 5);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D6_6_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 6);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D7_7_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 7);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D8_8_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 8);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D9_9_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 9);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2DA_10_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 10);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2DB_11_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 11);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t805 * L_0 = (Dictionary_2_t805 *)il2cpp_codegen_object_new (Dictionary_2_t805_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4099(L_0, /*hidden argument*/Dictionary_2__ctor_m4099_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t758_il2cpp_TypeInfo_var);
		((JsonReader_t758_StaticFields*)JsonReader_t758_il2cpp_TypeInfo_var->static_fields)->___parse_table_0 = L_0;
		JsonReader_TableAddRow_m3985(NULL /*static, unused*/, ((int32_t)65548), /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_1 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 2));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, 0, sizeof(int32_t))) = (int32_t)((int32_t)91);
		Int32U5BU5D_t61* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, 1, sizeof(int32_t))) = (int32_t)((int32_t)65549);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65548), ((int32_t)91), L_2, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3985(NULL /*static, unused*/, ((int32_t)65549), /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_3 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D0_0_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)34), L_3, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_4 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D1_1_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)91), L_4, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_5 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, 0, sizeof(int32_t))) = (int32_t)((int32_t)93);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)93), L_5, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_6 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D2_2_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)123), L_6, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_7 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_7, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D3_3_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)65537), L_7, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_8 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D4_4_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)65538), L_8, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_9 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_9, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D5_5_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)65539), L_9, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_10 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_10, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D6_6_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)65540), L_10, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3985(NULL /*static, unused*/, ((int32_t)65544), /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_11 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 2));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_11, 0, sizeof(int32_t))) = (int32_t)((int32_t)123);
		Int32U5BU5D_t61* L_12 = L_11;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_12, 1, sizeof(int32_t))) = (int32_t)((int32_t)65545);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65544), ((int32_t)123), L_12, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3985(NULL /*static, unused*/, ((int32_t)65545), /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_13 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_13, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D7_7_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65545), ((int32_t)34), L_13, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_14 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, 0, sizeof(int32_t))) = (int32_t)((int32_t)125);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65545), ((int32_t)125), L_14, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3985(NULL /*static, unused*/, ((int32_t)65546), /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_15 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D8_8_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65546), ((int32_t)34), L_15, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3985(NULL /*static, unused*/, ((int32_t)65547), /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_16 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_16, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2D9_9_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65547), ((int32_t)44), L_16, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_17 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_17, 0, sizeof(int32_t))) = (int32_t)((int32_t)65554);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65547), ((int32_t)125), L_17, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3985(NULL /*static, unused*/, ((int32_t)65552), /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_18 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_18, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2DA_10_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65552), ((int32_t)34), L_18, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3985(NULL /*static, unused*/, ((int32_t)65543), /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_19 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_19, 0, sizeof(int32_t))) = (int32_t)((int32_t)65548);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65543), ((int32_t)91), L_19, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_20 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_20, 0, sizeof(int32_t))) = (int32_t)((int32_t)65544);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65543), ((int32_t)123), L_20, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3985(NULL /*static, unused*/, ((int32_t)65550), /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_21 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_21, 0, sizeof(int32_t))) = (int32_t)((int32_t)65552);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)34), L_21, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_22 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_22, 0, sizeof(int32_t))) = (int32_t)((int32_t)65548);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)91), L_22, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_23 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, 0, sizeof(int32_t))) = (int32_t)((int32_t)65544);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)123), L_23, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_24 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, 0, sizeof(int32_t))) = (int32_t)((int32_t)65537);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)65537), L_24, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_25 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_25, 0, sizeof(int32_t))) = (int32_t)((int32_t)65538);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)65538), L_25, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_26 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, 0, sizeof(int32_t))) = (int32_t)((int32_t)65539);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)65539), L_26, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_27 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, 0, sizeof(int32_t))) = (int32_t)((int32_t)65540);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)65540), L_27, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3985(NULL /*static, unused*/, ((int32_t)65551), /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_28 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_28, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2DB_11_FieldInfo_var), /*hidden argument*/NULL);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65551), ((int32_t)44), L_28, /*hidden argument*/NULL);
		Int32U5BU5D_t61* L_29 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, 1));
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, 0, sizeof(int32_t))) = (int32_t)((int32_t)65554);
		JsonReader_TableAddCol_m3984(NULL /*static, unused*/, ((int32_t)65551), ((int32_t)93), L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern TypeInfo* JsonReader_t758_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t762_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t806_il2cpp_TypeInfo_var;
extern "C" void JsonReader_TableAddCol_m3984 (Object_t * __this /* static, unused */, int32_t ___row, int32_t ___col, Int32U5BU5D_t61* ___symbols, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonReader_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		IDictionary_2_t762_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		IDictionary_2_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t758_il2cpp_TypeInfo_var);
		Object_t* L_0 = ((JsonReader_t758_StaticFields*)JsonReader_t758_il2cpp_TypeInfo_var->static_fields)->___parse_table_0;
		int32_t L_1 = ___row;
		NullCheck(L_0);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker1< Object_t*, int32_t >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_t762_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_3 = ___col;
		Int32U5BU5D_t61* L_4 = ___symbols;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, Int32U5BU5D_t61* >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::Add(!0,!1) */, IDictionary_2_t806_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern TypeInfo* JsonReader_t758_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t807_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t762_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4100_MethodInfo_var;
extern "C" void JsonReader_TableAddRow_m3985 (Object_t * __this /* static, unused */, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonReader_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		Dictionary_2_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		IDictionary_2_t762_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		Dictionary_2__ctor_m4100_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484071);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t758_il2cpp_TypeInfo_var);
		Object_t* L_0 = ((JsonReader_t758_StaticFields*)JsonReader_t758_il2cpp_TypeInfo_var->static_fields)->___parse_table_0;
		int32_t L_1 = ___rule;
		Dictionary_2_t807 * L_2 = (Dictionary_2_t807 *)il2cpp_codegen_object_new (Dictionary_2_t807_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4100(L_2, /*hidden argument*/Dictionary_2__ctor_m4100_MethodInfo_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Object_t* >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Add(!0,!1) */, IDictionary_2_t762_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern TypeInfo* Double_t717_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t180_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t801_il2cpp_TypeInfo_var;
extern "C" void JsonReader_ProcessNumber_m3986 (JsonReader_t758 * __this, String_t* ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Double_t717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		Int32_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Int64_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		UInt64_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		String_t* L_0 = ___number;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2701(L_0, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = ___number;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m2701(L_2, ((int32_t)101), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = ___number;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m2701(L_4, ((int32_t)69), /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_004b;
		}
	}

IL_002a:
	{
		String_t* L_6 = ___number;
		bool L_7 = Double_TryParse_m4101(NULL /*static, unused*/, L_6, (&V_0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		__this->___token_14 = 8;
		double L_8 = V_0;
		double L_9 = L_8;
		Object_t * L_10 = Box(Double_t717_il2cpp_TypeInfo_var, &L_9);
		__this->___token_value_13 = L_10;
		return;
	}

IL_004b:
	{
		String_t* L_11 = ___number;
		bool L_12 = Int32_TryParse_m4102(NULL /*static, unused*/, L_11, (&V_1), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		__this->___token_14 = 6;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t157_il2cpp_TypeInfo_var, &L_14);
		__this->___token_value_13 = L_15;
		return;
	}

IL_006c:
	{
		String_t* L_16 = ___number;
		bool L_17 = Int64_TryParse_m4103(NULL /*static, unused*/, L_16, (&V_2), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008d;
		}
	}
	{
		__this->___token_14 = 7;
		int64_t L_18 = V_2;
		int64_t L_19 = L_18;
		Object_t * L_20 = Box(Int64_t180_il2cpp_TypeInfo_var, &L_19);
		__this->___token_value_13 = L_20;
		return;
	}

IL_008d:
	{
		String_t* L_21 = ___number;
		bool L_22 = UInt64_TryParse_m4104(NULL /*static, unused*/, L_21, (&V_3), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		__this->___token_14 = 7;
		uint64_t L_23 = V_3;
		uint64_t L_24 = L_23;
		Object_t * L_25 = Box(UInt64_t801_il2cpp_TypeInfo_var, &L_24);
		__this->___token_value_13 = L_25;
		return;
	}

IL_00ae:
	{
		__this->___token_14 = 6;
		int32_t L_26 = 0;
		Object_t * L_27 = Box(Int32_t157_il2cpp_TypeInfo_var, &L_26);
		__this->___token_value_13 = L_27;
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessSymbol()
extern TypeInfo* Boolean_t189_il2cpp_TypeInfo_var;
extern "C" void JsonReader_ProcessSymbol_m3987 (JsonReader_t758 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___current_symbol_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0020;
		}
	}
	{
		__this->___token_14 = 4;
		__this->___parser_return_8 = 1;
		goto IL_01b8;
	}

IL_0020:
	{
		int32_t L_1 = (__this->___current_symbol_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0040;
		}
	}
	{
		__this->___token_14 = 5;
		__this->___parser_return_8 = 1;
		goto IL_01b8;
	}

IL_0040:
	{
		int32_t L_2 = (__this->___current_symbol_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0060;
		}
	}
	{
		__this->___token_14 = 1;
		__this->___parser_return_8 = 1;
		goto IL_01b8;
	}

IL_0060:
	{
		int32_t L_3 = (__this->___current_symbol_3);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0080;
		}
	}
	{
		__this->___token_14 = 3;
		__this->___parser_return_8 = 1;
		goto IL_01b8;
	}

IL_0080:
	{
		int32_t L_4 = (__this->___current_symbol_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_5 = (__this->___parser_in_string_7);
		if (!L_5)
		{
			goto IL_00ab;
		}
	}
	{
		__this->___parser_in_string_7 = 0;
		__this->___parser_return_8 = 1;
		goto IL_00c5;
	}

IL_00ab:
	{
		int32_t L_6 = (__this->___token_14);
		if (L_6)
		{
			goto IL_00be;
		}
	}
	{
		__this->___token_14 = ((int32_t)9);
	}

IL_00be:
	{
		__this->___parser_in_string_7 = 1;
	}

IL_00c5:
	{
		goto IL_01b8;
	}

IL_00ca:
	{
		int32_t L_7 = (__this->___current_symbol_3);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65541)))))
		{
			goto IL_00f0;
		}
	}
	{
		Lexer_t760 * L_8 = (__this->___lexer_6);
		NullCheck(L_8);
		String_t* L_9 = Lexer_get_StringValue_m4013(L_8, /*hidden argument*/NULL);
		__this->___token_value_13 = L_9;
		goto IL_01b8;
	}

IL_00f0:
	{
		int32_t L_10 = (__this->___current_symbol_3);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)65539)))))
		{
			goto IL_0120;
		}
	}
	{
		__this->___token_14 = ((int32_t)10);
		bool L_11 = 0;
		Object_t * L_12 = Box(Boolean_t189_il2cpp_TypeInfo_var, &L_11);
		__this->___token_value_13 = L_12;
		__this->___parser_return_8 = 1;
		goto IL_01b8;
	}

IL_0120:
	{
		int32_t L_13 = (__this->___current_symbol_3);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)65540)))))
		{
			goto IL_0144;
		}
	}
	{
		__this->___token_14 = ((int32_t)11);
		__this->___parser_return_8 = 1;
		goto IL_01b8;
	}

IL_0144:
	{
		int32_t L_14 = (__this->___current_symbol_3);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)65537)))))
		{
			goto IL_0171;
		}
	}
	{
		Lexer_t760 * L_15 = (__this->___lexer_6);
		NullCheck(L_15);
		String_t* L_16 = Lexer_get_StringValue_m4013(L_15, /*hidden argument*/NULL);
		JsonReader_ProcessNumber_m3986(__this, L_16, /*hidden argument*/NULL);
		__this->___parser_return_8 = 1;
		goto IL_01b8;
	}

IL_0171:
	{
		int32_t L_17 = (__this->___current_symbol_3);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)65546)))))
		{
			goto IL_018d;
		}
	}
	{
		__this->___token_14 = 2;
		goto IL_01b8;
	}

IL_018d:
	{
		int32_t L_18 = (__this->___current_symbol_3);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)65538)))))
		{
			goto IL_01b8;
		}
	}
	{
		__this->___token_14 = ((int32_t)10);
		bool L_19 = 1;
		Object_t * L_20 = Box(Boolean_t189_il2cpp_TypeInfo_var, &L_19);
		__this->___token_value_13 = L_20;
		__this->___parser_return_8 = 1;
	}

IL_01b8:
	{
		return;
	}
}
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C" bool JsonReader_ReadToken_m3988 (JsonReader_t758 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___end_of_input_5);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Lexer_t760 * L_1 = (__this->___lexer_6);
		NullCheck(L_1);
		Lexer_NextToken_m4049(L_1, /*hidden argument*/NULL);
		Lexer_t760 * L_2 = (__this->___lexer_6);
		NullCheck(L_2);
		bool L_3 = Lexer_get_EndOfInput_m4011(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		JsonReader_Close_m3989(__this, /*hidden argument*/NULL);
		return 0;
	}

IL_0031:
	{
		Lexer_t760 * L_4 = (__this->___lexer_6);
		NullCheck(L_4);
		int32_t L_5 = Lexer_get_Token_m4012(L_4, /*hidden argument*/NULL);
		__this->___current_input_2 = L_5;
		return 1;
	}
}
// System.Void LitJson.JsonReader::Close()
extern "C" void JsonReader_Close_m3989 (JsonReader_t758 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___end_of_input_5);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___end_of_input_5 = 1;
		__this->___end_of_json_4 = 1;
		bool L_1 = (__this->___reader_is_owned_11);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		TextReader_t761 * L_2 = (__this->___reader_10);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextReader::Close() */, L_2);
	}

IL_0030:
	{
		__this->___reader_10 = (TextReader_t761 *)NULL;
		return;
	}
}
// System.Boolean LitJson.JsonReader::Read()
extern TypeInfo* JsonException_t739_il2cpp_TypeInfo_var;
extern TypeInfo* JsonReader_t758_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t762_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t806_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t808_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1_Clear_m4105_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m4098_MethodInfo_var;
extern const MethodInfo* Stack_1_Peek_m4106_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m4107_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral548;
extern "C" bool JsonReader_Read_m3990 (JsonReader_t758 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonException_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		JsonReader_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		IDictionary_2_t762_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		IDictionary_2_t806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		KeyNotFoundException_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		Stack_1_Clear_m4105_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484072);
		Stack_1_Push_m4098_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484069);
		Stack_1_Peek_m4106_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484073);
		Stack_1_Pop_m4107_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral548 = il2cpp_codegen_string_literal_from_index(548);
		s_Il2CppMethodIntialized = true;
	}
	Int32U5BU5D_t61* V_0 = {0};
	KeyNotFoundException_t808 * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t165 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t165 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___end_of_input_5);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		bool L_1 = (__this->___end_of_json_4);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		__this->___end_of_json_4 = 0;
		Stack_1_t759 * L_2 = (__this->___automaton_stack_1);
		NullCheck(L_2);
		Stack_1_Clear_m4105(L_2, /*hidden argument*/Stack_1_Clear_m4105_MethodInfo_var);
		Stack_1_t759 * L_3 = (__this->___automaton_stack_1);
		NullCheck(L_3);
		Stack_1_Push_m4098(L_3, ((int32_t)65553), /*hidden argument*/Stack_1_Push_m4098_MethodInfo_var);
		Stack_1_t759 * L_4 = (__this->___automaton_stack_1);
		NullCheck(L_4);
		Stack_1_Push_m4098(L_4, ((int32_t)65543), /*hidden argument*/Stack_1_Push_m4098_MethodInfo_var);
	}

IL_004a:
	{
		__this->___parser_in_string_7 = 0;
		__this->___parser_return_8 = 0;
		__this->___token_14 = 0;
		__this->___token_value_13 = NULL;
		bool L_5 = (__this->___read_started_9);
		if (L_5)
		{
			goto IL_0085;
		}
	}
	{
		__this->___read_started_9 = 1;
		bool L_6 = JsonReader_ReadToken_m3988(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0085;
		}
	}
	{
		return 0;
	}

IL_0085:
	{
		bool L_7 = (__this->___parser_return_8);
		if (!L_7)
		{
			goto IL_00ae;
		}
	}
	{
		Stack_1_t759 * L_8 = (__this->___automaton_stack_1);
		NullCheck(L_8);
		int32_t L_9 = Stack_1_Peek_m4106(L_8, /*hidden argument*/Stack_1_Peek_m4106_MethodInfo_var);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)65553)))))
		{
			goto IL_00ac;
		}
	}
	{
		__this->___end_of_json_4 = 1;
	}

IL_00ac:
	{
		return 1;
	}

IL_00ae:
	{
		Stack_1_t759 * L_10 = (__this->___automaton_stack_1);
		NullCheck(L_10);
		int32_t L_11 = Stack_1_Pop_m4107(L_10, /*hidden argument*/Stack_1_Pop_m4107_MethodInfo_var);
		__this->___current_symbol_3 = L_11;
		JsonReader_ProcessSymbol_m3987(__this, /*hidden argument*/NULL);
		int32_t L_12 = (__this->___current_symbol_3);
		int32_t L_13 = (__this->___current_input_2);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0115;
		}
	}
	{
		bool L_14 = JsonReader_ReadToken_m3988(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0110;
		}
	}
	{
		Stack_1_t759 * L_15 = (__this->___automaton_stack_1);
		NullCheck(L_15);
		int32_t L_16 = Stack_1_Peek_m4106(L_15, /*hidden argument*/Stack_1_Peek_m4106_MethodInfo_var);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65553))))
		{
			goto IL_0101;
		}
	}
	{
		JsonException_t739 * L_17 = (JsonException_t739 *)il2cpp_codegen_object_new (JsonException_t739_il2cpp_TypeInfo_var);
		JsonException__ctor_m3937(L_17, _stringLiteral548, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_0101:
	{
		bool L_18 = (__this->___parser_return_8);
		if (!L_18)
		{
			goto IL_010e;
		}
	}
	{
		return 1;
	}

IL_010e:
	{
		return 0;
	}

IL_0110:
	{
		goto IL_0085;
	}

IL_0115:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t758_il2cpp_TypeInfo_var);
		Object_t* L_19 = ((JsonReader_t758_StaticFields*)JsonReader_t758_il2cpp_TypeInfo_var->static_fields)->___parse_table_0;
		int32_t L_20 = (__this->___current_symbol_3);
		NullCheck(L_19);
		Object_t* L_21 = (Object_t*)InterfaceFuncInvoker1< Object_t*, int32_t >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_t762_il2cpp_TypeInfo_var, L_19, L_20);
		int32_t L_22 = (__this->___current_input_2);
		NullCheck(L_21);
		Int32U5BU5D_t61* L_23 = (Int32U5BU5D_t61*)InterfaceFuncInvoker1< Int32U5BU5D_t61*, int32_t >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::get_Item(!0) */, IDictionary_2_t806_il2cpp_TypeInfo_var, L_21, L_22);
		V_0 = L_23;
		goto IL_0144;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t165 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (KeyNotFoundException_t808_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0136;
		throw e;
	}

CATCH_0136:
	{ // begin catch(System.Collections.Generic.KeyNotFoundException)
		V_1 = ((KeyNotFoundException_t808 *)__exception_local);
		int32_t L_24 = (__this->___current_input_2);
		KeyNotFoundException_t808 * L_25 = V_1;
		JsonException_t739 * L_26 = (JsonException_t739 *)il2cpp_codegen_object_new (JsonException_t739_il2cpp_TypeInfo_var);
		JsonException__ctor_m3935(L_26, L_24, L_25, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	} // end catch (depth: 1)

IL_0144:
	{
		Int32U5BU5D_t61* L_27 = V_0;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		int32_t L_28 = 0;
		if ((!(((uint32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_27, L_28, sizeof(int32_t)))) == ((uint32_t)((int32_t)65554)))))
		{
			goto IL_0156;
		}
	}
	{
		goto IL_0085;
	}

IL_0156:
	{
		Int32U5BU5D_t61* L_29 = V_0;
		NullCheck(L_29);
		V_2 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_29)->max_length))))-(int32_t)1));
		goto IL_0173;
	}

IL_0161:
	{
		Stack_1_t759 * L_30 = (__this->___automaton_stack_1);
		Int32U5BU5D_t61* L_31 = V_0;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck(L_30);
		Stack_1_Push_m4098(L_30, (*(int32_t*)(int32_t*)SZArrayLdElema(L_31, L_33, sizeof(int32_t))), /*hidden argument*/Stack_1_Push_m4098_MethodInfo_var);
		int32_t L_34 = V_2;
		V_2 = ((int32_t)((int32_t)L_34-(int32_t)1));
	}

IL_0173:
	{
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_0161;
		}
	}
	{
		goto IL_0085;
	}
}
// System.Void LitJson.WriterContext::.ctor()
extern "C" void WriterContext__ctor_m3991 (WriterContext_t764 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m671(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.cctor()
extern TypeInfo* NumberFormatInfo_t767_il2cpp_TypeInfo_var;
extern TypeInfo* JsonWriter_t746_il2cpp_TypeInfo_var;
extern "C" void JsonWriter__cctor_m3992 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatInfo_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		JsonWriter_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t767_il2cpp_TypeInfo_var);
		NumberFormatInfo_t767 * L_0 = NumberFormatInfo_get_InvariantInfo_m4108(NULL /*static, unused*/, /*hidden argument*/NULL);
		((JsonWriter_t746_StaticFields*)JsonWriter_t746_il2cpp_TypeInfo_var->static_fields)->___number_format_0 = L_0;
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor()
extern TypeInfo* StringBuilder_t440_il2cpp_TypeInfo_var;
extern TypeInfo* StringWriter_t809_il2cpp_TypeInfo_var;
extern "C" void JsonWriter__ctor_m3993 (JsonWriter_t746 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t440_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		StringWriter_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m671(__this, /*hidden argument*/NULL);
		StringBuilder_t440 * L_0 = (StringBuilder_t440 *)il2cpp_codegen_object_new (StringBuilder_t440_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2331(L_0, /*hidden argument*/NULL);
		__this->___inst_string_builder_7 = L_0;
		StringBuilder_t440 * L_1 = (__this->___inst_string_builder_7);
		StringWriter_t809 * L_2 = (StringWriter_t809 *)il2cpp_codegen_object_new (StringWriter_t809_il2cpp_TypeInfo_var);
		StringWriter__ctor_m4109(L_2, L_1, /*hidden argument*/NULL);
		__this->___writer_10 = L_2;
		JsonWriter_Init_m3995(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern TypeInfo* JsonException_t739_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral549;
extern Il2CppCodeGenString* _stringLiteral550;
extern Il2CppCodeGenString* _stringLiteral551;
extern Il2CppCodeGenString* _stringLiteral552;
extern Il2CppCodeGenString* _stringLiteral553;
extern Il2CppCodeGenString* _stringLiteral554;
extern "C" void JsonWriter_DoValidation_m3994 (JsonWriter_t746 * __this, int32_t ___cond, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonException_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		_stringLiteral549 = il2cpp_codegen_string_literal_from_index(549);
		_stringLiteral550 = il2cpp_codegen_string_literal_from_index(550);
		_stringLiteral551 = il2cpp_codegen_string_literal_from_index(551);
		_stringLiteral552 = il2cpp_codegen_string_literal_from_index(552);
		_stringLiteral553 = il2cpp_codegen_string_literal_from_index(553);
		_stringLiteral554 = il2cpp_codegen_string_literal_from_index(554);
		s_Il2CppMethodIntialized = true;
	}
	{
		WriterContext_t764 * L_0 = (__this->___context_1);
		NullCheck(L_0);
		bool L_1 = (L_0->___ExpectingValue_3);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		WriterContext_t764 * L_2 = (__this->___context_1);
		WriterContext_t764 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = (L_3->___Count_0);
		NullCheck(L_3);
		L_3->___Count_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		bool L_5 = (__this->___validate_9);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		bool L_6 = (__this->___has_reached_end_3);
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		JsonException_t739 * L_7 = (JsonException_t739 *)il2cpp_codegen_object_new (JsonException_t739_il2cpp_TypeInfo_var);
		JsonException__ctor_m3937(L_7, _stringLiteral549, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0045:
	{
		int32_t L_8 = ___cond;
		if (L_8 == 0)
		{
			goto IL_0064;
		}
		if (L_8 == 1)
		{
			goto IL_0084;
		}
		if (L_8 == 2)
		{
			goto IL_00b4;
		}
		if (L_8 == 3)
		{
			goto IL_00e4;
		}
		if (L_8 == 4)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0154;
	}

IL_0064:
	{
		WriterContext_t764 * L_9 = (__this->___context_1);
		NullCheck(L_9);
		bool L_10 = (L_9->___InArray_1);
		if (L_10)
		{
			goto IL_007f;
		}
	}
	{
		JsonException_t739 * L_11 = (JsonException_t739 *)il2cpp_codegen_object_new (JsonException_t739_il2cpp_TypeInfo_var);
		JsonException__ctor_m3937(L_11, _stringLiteral550, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_007f:
	{
		goto IL_0154;
	}

IL_0084:
	{
		WriterContext_t764 * L_12 = (__this->___context_1);
		NullCheck(L_12);
		bool L_13 = (L_12->___InObject_2);
		if (!L_13)
		{
			goto IL_00a4;
		}
	}
	{
		WriterContext_t764 * L_14 = (__this->___context_1);
		NullCheck(L_14);
		bool L_15 = (L_14->___ExpectingValue_3);
		if (!L_15)
		{
			goto IL_00af;
		}
	}

IL_00a4:
	{
		JsonException_t739 * L_16 = (JsonException_t739 *)il2cpp_codegen_object_new (JsonException_t739_il2cpp_TypeInfo_var);
		JsonException__ctor_m3937(L_16, _stringLiteral551, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_16);
	}

IL_00af:
	{
		goto IL_0154;
	}

IL_00b4:
	{
		WriterContext_t764 * L_17 = (__this->___context_1);
		NullCheck(L_17);
		bool L_18 = (L_17->___InObject_2);
		if (!L_18)
		{
			goto IL_00df;
		}
	}
	{
		WriterContext_t764 * L_19 = (__this->___context_1);
		NullCheck(L_19);
		bool L_20 = (L_19->___ExpectingValue_3);
		if (L_20)
		{
			goto IL_00df;
		}
	}
	{
		JsonException_t739 * L_21 = (JsonException_t739 *)il2cpp_codegen_object_new (JsonException_t739_il2cpp_TypeInfo_var);
		JsonException__ctor_m3937(L_21, _stringLiteral552, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}

IL_00df:
	{
		goto IL_0154;
	}

IL_00e4:
	{
		WriterContext_t764 * L_22 = (__this->___context_1);
		NullCheck(L_22);
		bool L_23 = (L_22->___InObject_2);
		if (!L_23)
		{
			goto IL_0104;
		}
	}
	{
		WriterContext_t764 * L_24 = (__this->___context_1);
		NullCheck(L_24);
		bool L_25 = (L_24->___ExpectingValue_3);
		if (!L_25)
		{
			goto IL_010f;
		}
	}

IL_0104:
	{
		JsonException_t739 * L_26 = (JsonException_t739 *)il2cpp_codegen_object_new (JsonException_t739_il2cpp_TypeInfo_var);
		JsonException__ctor_m3937(L_26, _stringLiteral553, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}

IL_010f:
	{
		goto IL_0154;
	}

IL_0114:
	{
		WriterContext_t764 * L_27 = (__this->___context_1);
		NullCheck(L_27);
		bool L_28 = (L_27->___InArray_1);
		if (L_28)
		{
			goto IL_014f;
		}
	}
	{
		WriterContext_t764 * L_29 = (__this->___context_1);
		NullCheck(L_29);
		bool L_30 = (L_29->___InObject_2);
		if (!L_30)
		{
			goto IL_0144;
		}
	}
	{
		WriterContext_t764 * L_31 = (__this->___context_1);
		NullCheck(L_31);
		bool L_32 = (L_31->___ExpectingValue_3);
		if (L_32)
		{
			goto IL_014f;
		}
	}

IL_0144:
	{
		JsonException_t739 * L_33 = (JsonException_t739 *)il2cpp_codegen_object_new (JsonException_t739_il2cpp_TypeInfo_var);
		JsonException__ctor_m3937(L_33, _stringLiteral554, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_33);
	}

IL_014f:
	{
		goto IL_0154;
	}

IL_0154:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
extern TypeInfo* CharU5BU5D_t323_il2cpp_TypeInfo_var;
extern TypeInfo* Stack_1_t765_il2cpp_TypeInfo_var;
extern TypeInfo* WriterContext_t764_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m4110_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m4111_MethodInfo_var;
extern "C" void JsonWriter_Init_m3995 (JsonWriter_t746 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(250);
		Stack_1_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		WriterContext_t764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		Stack_1__ctor_m4110_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484075);
		Stack_1_Push_m4111_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484076);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___has_reached_end_3 = 0;
		__this->___hex_seq_4 = ((CharU5BU5D_t323*)SZArrayNew(CharU5BU5D_t323_il2cpp_TypeInfo_var, 4));
		__this->___indentation_5 = 0;
		__this->___indent_value_6 = 4;
		__this->___pretty_print_8 = 0;
		__this->___validate_9 = 1;
		Stack_1_t765 * L_0 = (Stack_1_t765 *)il2cpp_codegen_object_new (Stack_1_t765_il2cpp_TypeInfo_var);
		Stack_1__ctor_m4110(L_0, /*hidden argument*/Stack_1__ctor_m4110_MethodInfo_var);
		__this->___ctx_stack_2 = L_0;
		WriterContext_t764 * L_1 = (WriterContext_t764 *)il2cpp_codegen_object_new (WriterContext_t764_il2cpp_TypeInfo_var);
		WriterContext__ctor_m3991(L_1, /*hidden argument*/NULL);
		__this->___context_1 = L_1;
		Stack_1_t765 * L_2 = (__this->___ctx_stack_2);
		WriterContext_t764 * L_3 = (__this->___context_1);
		NullCheck(L_2);
		Stack_1_Push_m4111(L_2, L_3, /*hidden argument*/Stack_1_Push_m4111_MethodInfo_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C" void JsonWriter_IntToHex_m3996 (Object_t * __this /* static, unused */, int32_t ___n, CharU5BU5D_t323* ___hex, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0039;
	}

IL_0007:
	{
		int32_t L_0 = ___n;
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)((int32_t)16)));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0023;
		}
	}
	{
		CharU5BU5D_t323* L_2 = ___hex;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)((int32_t)3-(int32_t)L_3)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, ((int32_t)((int32_t)3-(int32_t)L_3)), sizeof(uint16_t))) = (uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)48)+(int32_t)L_4)))));
		goto IL_0030;
	}

IL_0023:
	{
		CharU5BU5D_t323* L_5 = ___hex;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)3-(int32_t)L_6)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, ((int32_t)((int32_t)3-(int32_t)L_6)), sizeof(uint16_t))) = (uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)65)+(int32_t)((int32_t)((int32_t)L_7-(int32_t)((int32_t)10))))))));
	}

IL_0030:
	{
		int32_t L_8 = ___n;
		___n = ((int32_t)((int32_t)L_8>>(int32_t)4));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C" void JsonWriter_Put_m3997 (JsonWriter_t746 * __this, String_t* ___str, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___pretty_print_8);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		WriterContext_t764 * L_1 = (__this->___context_1);
		NullCheck(L_1);
		bool L_2 = (L_1->___ExpectingValue_3);
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0022:
	{
		TextWriter_t766 * L_3 = (__this->___writer_10);
		NullCheck(L_3);
		VirtActionInvoker1< uint16_t >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0033:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = (__this->___indentation_5);
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0022;
		}
	}

IL_003f:
	{
		TextWriter_t766 * L_7 = (__this->___writer_10);
		String_t* L_8 = ___str;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
extern "C" void JsonWriter_PutNewline_m3998 (JsonWriter_t746 * __this, const MethodInfo* method)
{
	{
		JsonWriter_PutNewline_m3999(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C" void JsonWriter_PutNewline_m3999 (JsonWriter_t746 * __this, bool ___add_comma, const MethodInfo* method)
{
	{
		bool L_0 = ___add_comma;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_t764 * L_1 = (__this->___context_1);
		NullCheck(L_1);
		bool L_2 = (L_1->___ExpectingValue_3);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_t764 * L_3 = (__this->___context_1);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___Count_0);
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		TextWriter_t766 * L_5 = (__this->___writer_10);
		NullCheck(L_5);
		VirtActionInvoker1< uint16_t >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_0034:
	{
		bool L_6 = (__this->___pretty_print_8);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		WriterContext_t764 * L_7 = (__this->___context_1);
		NullCheck(L_7);
		bool L_8 = (L_7->___ExpectingValue_3);
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		TextWriter_t766 * L_9 = (__this->___writer_10);
		NullCheck(L_9);
		VirtActionInvoker1< uint16_t >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, ((int32_t)10));
	}

IL_005c:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* JsonWriter_t746_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral555;
extern Il2CppCodeGenString* _stringLiteral556;
extern Il2CppCodeGenString* _stringLiteral557;
extern Il2CppCodeGenString* _stringLiteral558;
extern Il2CppCodeGenString* _stringLiteral559;
extern Il2CppCodeGenString* _stringLiteral560;
extern "C" void JsonWriter_PutString_m4000 (JsonWriter_t746 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		JsonWriter_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		_stringLiteral555 = il2cpp_codegen_string_literal_from_index(555);
		_stringLiteral556 = il2cpp_codegen_string_literal_from_index(556);
		_stringLiteral557 = il2cpp_codegen_string_literal_from_index(557);
		_stringLiteral558 = il2cpp_codegen_string_literal_from_index(558);
		_stringLiteral559 = il2cpp_codegen_string_literal_from_index(559);
		_stringLiteral560 = il2cpp_codegen_string_literal_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		JsonWriter_Put_m3997(__this, L_0, /*hidden argument*/NULL);
		TextWriter_t766 * L_1 = (__this->___writer_10);
		NullCheck(L_1);
		VirtActionInvoker1< uint16_t >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		String_t* L_2 = ___str;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2633(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_015a;
	}

IL_0026:
	{
		String_t* L_4 = ___str;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		uint16_t L_6 = String_get_Chars_m2651(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		uint16_t L_7 = V_2;
		if (((int32_t)((int32_t)L_7-(int32_t)8)) == 0)
		{
			goto IL_00db;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)8)) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)8)) == 2)
		{
			goto IL_0063;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)8)) == 3)
		{
			goto IL_004e;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)8)) == 4)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)8)) == 5)
		{
			goto IL_0078;
		}
	}

IL_004e:
	{
		uint16_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_00a2;
		}
	}
	{
		uint16_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_00f0;
	}

IL_0063:
	{
		TextWriter_t766 * L_10 = (__this->___writer_10);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, _stringLiteral555);
		goto IL_0156;
	}

IL_0078:
	{
		TextWriter_t766 * L_11 = (__this->___writer_10);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteral556);
		goto IL_0156;
	}

IL_008d:
	{
		TextWriter_t766 * L_12 = (__this->___writer_10);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral557);
		goto IL_0156;
	}

IL_00a2:
	{
		TextWriter_t766 * L_13 = (__this->___writer_10);
		NullCheck(L_13);
		VirtActionInvoker1< uint16_t >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)92));
		TextWriter_t766 * L_14 = (__this->___writer_10);
		String_t* L_15 = ___str;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m2651(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< uint16_t >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_14, L_17);
		goto IL_0156;
	}

IL_00c6:
	{
		TextWriter_t766 * L_18 = (__this->___writer_10);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteral558);
		goto IL_0156;
	}

IL_00db:
	{
		TextWriter_t766 * L_19 = (__this->___writer_10);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral559);
		goto IL_0156;
	}

IL_00f0:
	{
		String_t* L_20 = ___str;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		uint16_t L_22 = String_get_Chars_m2651(L_20, L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)32))))
		{
			goto IL_0123;
		}
	}
	{
		String_t* L_23 = ___str;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		uint16_t L_25 = String_get_Chars_m2651(L_23, L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) > ((int32_t)((int32_t)126))))
		{
			goto IL_0123;
		}
	}
	{
		TextWriter_t766 * L_26 = (__this->___writer_10);
		String_t* L_27 = ___str;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		uint16_t L_29 = String_get_Chars_m2651(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< uint16_t >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, L_29);
		goto IL_0156;
	}

IL_0123:
	{
		String_t* L_30 = ___str;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		uint16_t L_32 = String_get_Chars_m2651(L_30, L_31, /*hidden argument*/NULL);
		CharU5BU5D_t323* L_33 = (__this->___hex_seq_4);
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t746_il2cpp_TypeInfo_var);
		JsonWriter_IntToHex_m3996(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		TextWriter_t766 * L_34 = (__this->___writer_10);
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteral560);
		TextWriter_t766 * L_35 = (__this->___writer_10);
		CharU5BU5D_t323* L_36 = (__this->___hex_seq_4);
		NullCheck(L_35);
		VirtActionInvoker1< CharU5BU5D_t323* >::Invoke(9 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_35, L_36);
	}

IL_0156:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_015a:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0026;
		}
	}
	{
		TextWriter_t766 * L_40 = (__this->___writer_10);
		NullCheck(L_40);
		VirtActionInvoker1< uint16_t >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)34));
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JsonWriter_ToString_m4001 (JsonWriter_t746 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringBuilder_t440 * L_0 = (__this->___inst_string_builder_7);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		StringBuilder_t440 * L_2 = (__this->___inst_string_builder_7);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern TypeInfo* JsonWriter_t746_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" void JsonWriter_Write_m4002 (JsonWriter_t746 * __this, Decimal_t780  ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonWriter_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_DoValidation_m3994(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m3998(__this, /*hidden argument*/NULL);
		Decimal_t780  L_0 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t746_il2cpp_TypeInfo_var);
		NumberFormatInfo_t767 * L_1 = ((JsonWriter_t746_StaticFields*)JsonWriter_t746_il2cpp_TypeInfo_var->static_fields)->___number_format_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m4112(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m3997(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t764 * L_3 = (__this->___context_1);
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = 0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern TypeInfo* JsonWriter_t746_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" void JsonWriter_Write_m4003 (JsonWriter_t746 * __this, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonWriter_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_DoValidation_m3994(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m3998(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t746_il2cpp_TypeInfo_var);
		NumberFormatInfo_t767 * L_1 = ((JsonWriter_t746_StaticFields*)JsonWriter_t746_il2cpp_TypeInfo_var->static_fields)->___number_format_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m4113(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m3997(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t764 * L_3 = (__this->___context_1);
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = 0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
extern Il2CppCodeGenString* _stringLiteral561;
extern "C" void JsonWriter_Write_m4004 (JsonWriter_t746 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral561 = il2cpp_codegen_string_literal_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_DoValidation_m3994(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m3998(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		JsonWriter_Put_m3997(__this, _stringLiteral561, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_0023:
	{
		String_t* L_1 = ___str;
		JsonWriter_PutString_m4000(__this, L_1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		WriterContext_t764 * L_2 = (__this->___context_1);
		NullCheck(L_2);
		L_2->___ExpectingValue_3 = 0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern TypeInfo* JsonWriter_t746_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" void JsonWriter_Write_m4005 (JsonWriter_t746 * __this, uint64_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonWriter_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonWriter_DoValidation_m3994(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m3998(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t746_il2cpp_TypeInfo_var);
		NumberFormatInfo_t767 * L_1 = ((JsonWriter_t746_StaticFields*)JsonWriter_t746_il2cpp_TypeInfo_var->static_fields)->___number_format_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m4114(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m3997(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t764 * L_3 = (__this->___context_1);
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = 0;
		return;
	}
}
// System.Void LitJson.FsmContext::.ctor()
extern "C" void FsmContext__ctor_m4006 (FsmContext_t768 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m671(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
extern "C" void StateHandler__ctor_m4007 (StateHandler_t769 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
extern "C" bool StateHandler_Invoke_m4008 (StateHandler_t769 * __this, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		StateHandler_Invoke_m4008((StateHandler_t769 *)__this->___prev_9,___ctx, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, FsmContext_t768 * ___ctx, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___ctx,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, FsmContext_t768 * ___ctx, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___ctx,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___ctx,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_StateHandler_t769(Il2CppObject* delegate, FsmContext_t768 * ___ctx)
{
	// Marshaling of parameter '___ctx' to native representation
	FsmContext_t768 * ____ctx_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'LitJson.FsmContext'."));
}
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
extern "C" Object_t * StateHandler_BeginInvoke_m4009 (StateHandler_t769 * __this, FsmContext_t768 * ___ctx, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
extern "C" bool StateHandler_EndInvoke_m4010 (StateHandler_t769 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C" bool Lexer_get_EndOfInput_m4011 (Lexer_t760 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___end_of_input_4);
		return L_0;
	}
}
// System.Int32 LitJson.Lexer::get_Token()
extern "C" int32_t Lexer_get_Token_m4012 (Lexer_t760 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___token_12);
		return L_0;
	}
}
// System.String LitJson.Lexer::get_StringValue()
extern "C" String_t* Lexer_get_StringValue_m4013 (Lexer_t760 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___string_value_11);
		return L_0;
	}
}
// System.Void LitJson.Lexer::.cctor()
extern TypeInfo* Lexer_t760_il2cpp_TypeInfo_var;
extern "C" void Lexer__cctor_m4014 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Lexer_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	{
		Lexer_PopulateFsmTables_m4017(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern TypeInfo* StringBuilder_t440_il2cpp_TypeInfo_var;
extern TypeInfo* FsmContext_t768_il2cpp_TypeInfo_var;
extern "C" void Lexer__ctor_m4015 (Lexer_t760 * __this, TextReader_t761 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t440_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		FsmContext_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m671(__this, /*hidden argument*/NULL);
		__this->___allow_comments_2 = 1;
		__this->___allow_single_quoted_strings_3 = 1;
		__this->___input_buffer_6 = 0;
		StringBuilder_t440 * L_0 = (StringBuilder_t440 *)il2cpp_codegen_object_new (StringBuilder_t440_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3852(L_0, ((int32_t)128), /*hidden argument*/NULL);
		__this->___string_buffer_10 = L_0;
		__this->___state_9 = 1;
		__this->___end_of_input_4 = 0;
		TextReader_t761 * L_1 = ___reader;
		__this->___reader_8 = L_1;
		FsmContext_t768 * L_2 = (FsmContext_t768 *)il2cpp_codegen_object_new (FsmContext_t768_il2cpp_TypeInfo_var);
		FsmContext__ctor_m4006(L_2, /*hidden argument*/NULL);
		__this->___fsm_context_5 = L_2;
		FsmContext_t768 * L_3 = (__this->___fsm_context_5);
		NullCheck(L_3);
		L_3->___L_2 = __this;
		return;
	}
}
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C" int32_t Lexer_HexValue_m4016 (Object_t * __this /* static, unused */, int32_t ___digit, const MethodInfo* method)
{
	{
		int32_t L_0 = ___digit;
		if (((int32_t)((int32_t)L_0-(int32_t)((int32_t)65))) == 0)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_0-(int32_t)((int32_t)65))) == 1)
		{
			goto IL_004a;
		}
		if (((int32_t)((int32_t)L_0-(int32_t)((int32_t)65))) == 2)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_0-(int32_t)((int32_t)65))) == 3)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_0-(int32_t)((int32_t)65))) == 4)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_0-(int32_t)((int32_t)65))) == 5)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_1 = ___digit;
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)97))) == 0)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)97))) == 1)
		{
			goto IL_004a;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)97))) == 2)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)97))) == 3)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)97))) == 4)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)97))) == 5)
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0059;
	}

IL_0047:
	{
		return ((int32_t)10);
	}

IL_004a:
	{
		return ((int32_t)11);
	}

IL_004d:
	{
		return ((int32_t)12);
	}

IL_0050:
	{
		return ((int32_t)13);
	}

IL_0053:
	{
		return ((int32_t)14);
	}

IL_0056:
	{
		return ((int32_t)15);
	}

IL_0059:
	{
		int32_t L_2 = ___digit;
		return ((int32_t)((int32_t)L_2-(int32_t)((int32_t)48)));
	}
}
// System.Void LitJson.Lexer::PopulateFsmTables()
extern TypeInfo* StateHandlerU5BU5D_t770_il2cpp_TypeInfo_var;
extern TypeInfo* Lexer_t760_il2cpp_TypeInfo_var;
extern TypeInfo* StateHandler_t769_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t61_il2cpp_TypeInfo_var;
extern const MethodInfo* Lexer_State1_m4019_MethodInfo_var;
extern const MethodInfo* Lexer_State2_m4020_MethodInfo_var;
extern const MethodInfo* Lexer_State3_m4021_MethodInfo_var;
extern const MethodInfo* Lexer_State4_m4022_MethodInfo_var;
extern const MethodInfo* Lexer_State5_m4023_MethodInfo_var;
extern const MethodInfo* Lexer_State6_m4024_MethodInfo_var;
extern const MethodInfo* Lexer_State7_m4025_MethodInfo_var;
extern const MethodInfo* Lexer_State8_m4026_MethodInfo_var;
extern const MethodInfo* Lexer_State9_m4027_MethodInfo_var;
extern const MethodInfo* Lexer_State10_m4028_MethodInfo_var;
extern const MethodInfo* Lexer_State11_m4029_MethodInfo_var;
extern const MethodInfo* Lexer_State12_m4030_MethodInfo_var;
extern const MethodInfo* Lexer_State13_m4031_MethodInfo_var;
extern const MethodInfo* Lexer_State14_m4032_MethodInfo_var;
extern const MethodInfo* Lexer_State15_m4033_MethodInfo_var;
extern const MethodInfo* Lexer_State16_m4034_MethodInfo_var;
extern const MethodInfo* Lexer_State17_m4035_MethodInfo_var;
extern const MethodInfo* Lexer_State18_m4036_MethodInfo_var;
extern const MethodInfo* Lexer_State19_m4037_MethodInfo_var;
extern const MethodInfo* Lexer_State20_m4038_MethodInfo_var;
extern const MethodInfo* Lexer_State21_m4039_MethodInfo_var;
extern const MethodInfo* Lexer_State22_m4040_MethodInfo_var;
extern const MethodInfo* Lexer_State23_m4041_MethodInfo_var;
extern const MethodInfo* Lexer_State24_m4042_MethodInfo_var;
extern const MethodInfo* Lexer_State25_m4043_MethodInfo_var;
extern const MethodInfo* Lexer_State26_m4044_MethodInfo_var;
extern const MethodInfo* Lexer_State27_m4045_MethodInfo_var;
extern const MethodInfo* Lexer_State28_m4046_MethodInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2DC_12_FieldInfo_var;
extern "C" void Lexer_PopulateFsmTables_m4017 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StateHandlerU5BU5D_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		Lexer_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		StateHandler_t769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		Int32U5BU5D_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		Lexer_State1_m4019_MethodInfo_var = il2cpp_codegen_method_info_from_index(429);
		Lexer_State2_m4020_MethodInfo_var = il2cpp_codegen_method_info_from_index(430);
		Lexer_State3_m4021_MethodInfo_var = il2cpp_codegen_method_info_from_index(431);
		Lexer_State4_m4022_MethodInfo_var = il2cpp_codegen_method_info_from_index(432);
		Lexer_State5_m4023_MethodInfo_var = il2cpp_codegen_method_info_from_index(433);
		Lexer_State6_m4024_MethodInfo_var = il2cpp_codegen_method_info_from_index(434);
		Lexer_State7_m4025_MethodInfo_var = il2cpp_codegen_method_info_from_index(435);
		Lexer_State8_m4026_MethodInfo_var = il2cpp_codegen_method_info_from_index(436);
		Lexer_State9_m4027_MethodInfo_var = il2cpp_codegen_method_info_from_index(437);
		Lexer_State10_m4028_MethodInfo_var = il2cpp_codegen_method_info_from_index(438);
		Lexer_State11_m4029_MethodInfo_var = il2cpp_codegen_method_info_from_index(439);
		Lexer_State12_m4030_MethodInfo_var = il2cpp_codegen_method_info_from_index(440);
		Lexer_State13_m4031_MethodInfo_var = il2cpp_codegen_method_info_from_index(441);
		Lexer_State14_m4032_MethodInfo_var = il2cpp_codegen_method_info_from_index(442);
		Lexer_State15_m4033_MethodInfo_var = il2cpp_codegen_method_info_from_index(443);
		Lexer_State16_m4034_MethodInfo_var = il2cpp_codegen_method_info_from_index(444);
		Lexer_State17_m4035_MethodInfo_var = il2cpp_codegen_method_info_from_index(445);
		Lexer_State18_m4036_MethodInfo_var = il2cpp_codegen_method_info_from_index(446);
		Lexer_State19_m4037_MethodInfo_var = il2cpp_codegen_method_info_from_index(447);
		Lexer_State20_m4038_MethodInfo_var = il2cpp_codegen_method_info_from_index(448);
		Lexer_State21_m4039_MethodInfo_var = il2cpp_codegen_method_info_from_index(449);
		Lexer_State22_m4040_MethodInfo_var = il2cpp_codegen_method_info_from_index(450);
		Lexer_State23_m4041_MethodInfo_var = il2cpp_codegen_method_info_from_index(451);
		Lexer_State24_m4042_MethodInfo_var = il2cpp_codegen_method_info_from_index(452);
		Lexer_State25_m4043_MethodInfo_var = il2cpp_codegen_method_info_from_index(453);
		Lexer_State26_m4044_MethodInfo_var = il2cpp_codegen_method_info_from_index(454);
		Lexer_State27_m4045_MethodInfo_var = il2cpp_codegen_method_info_from_index(455);
		Lexer_State28_m4046_MethodInfo_var = il2cpp_codegen_method_info_from_index(456);
		U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2DC_12_FieldInfo_var = il2cpp_codegen_field_info_from_index(496, 12);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	StateHandlerU5BU5D_t770* G_B2_1 = {0};
	StateHandlerU5BU5D_t770* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StateHandlerU5BU5D_t770* G_B1_1 = {0};
	StateHandlerU5BU5D_t770* G_B1_2 = {0};
	int32_t G_B4_0 = 0;
	StateHandlerU5BU5D_t770* G_B4_1 = {0};
	StateHandlerU5BU5D_t770* G_B4_2 = {0};
	int32_t G_B3_0 = 0;
	StateHandlerU5BU5D_t770* G_B3_1 = {0};
	StateHandlerU5BU5D_t770* G_B3_2 = {0};
	int32_t G_B6_0 = 0;
	StateHandlerU5BU5D_t770* G_B6_1 = {0};
	StateHandlerU5BU5D_t770* G_B6_2 = {0};
	int32_t G_B5_0 = 0;
	StateHandlerU5BU5D_t770* G_B5_1 = {0};
	StateHandlerU5BU5D_t770* G_B5_2 = {0};
	int32_t G_B8_0 = 0;
	StateHandlerU5BU5D_t770* G_B8_1 = {0};
	StateHandlerU5BU5D_t770* G_B8_2 = {0};
	int32_t G_B7_0 = 0;
	StateHandlerU5BU5D_t770* G_B7_1 = {0};
	StateHandlerU5BU5D_t770* G_B7_2 = {0};
	int32_t G_B10_0 = 0;
	StateHandlerU5BU5D_t770* G_B10_1 = {0};
	StateHandlerU5BU5D_t770* G_B10_2 = {0};
	int32_t G_B9_0 = 0;
	StateHandlerU5BU5D_t770* G_B9_1 = {0};
	StateHandlerU5BU5D_t770* G_B9_2 = {0};
	int32_t G_B12_0 = 0;
	StateHandlerU5BU5D_t770* G_B12_1 = {0};
	StateHandlerU5BU5D_t770* G_B12_2 = {0};
	int32_t G_B11_0 = 0;
	StateHandlerU5BU5D_t770* G_B11_1 = {0};
	StateHandlerU5BU5D_t770* G_B11_2 = {0};
	int32_t G_B14_0 = 0;
	StateHandlerU5BU5D_t770* G_B14_1 = {0};
	StateHandlerU5BU5D_t770* G_B14_2 = {0};
	int32_t G_B13_0 = 0;
	StateHandlerU5BU5D_t770* G_B13_1 = {0};
	StateHandlerU5BU5D_t770* G_B13_2 = {0};
	int32_t G_B16_0 = 0;
	StateHandlerU5BU5D_t770* G_B16_1 = {0};
	StateHandlerU5BU5D_t770* G_B16_2 = {0};
	int32_t G_B15_0 = 0;
	StateHandlerU5BU5D_t770* G_B15_1 = {0};
	StateHandlerU5BU5D_t770* G_B15_2 = {0};
	int32_t G_B18_0 = 0;
	StateHandlerU5BU5D_t770* G_B18_1 = {0};
	StateHandlerU5BU5D_t770* G_B18_2 = {0};
	int32_t G_B17_0 = 0;
	StateHandlerU5BU5D_t770* G_B17_1 = {0};
	StateHandlerU5BU5D_t770* G_B17_2 = {0};
	int32_t G_B20_0 = 0;
	StateHandlerU5BU5D_t770* G_B20_1 = {0};
	StateHandlerU5BU5D_t770* G_B20_2 = {0};
	int32_t G_B19_0 = 0;
	StateHandlerU5BU5D_t770* G_B19_1 = {0};
	StateHandlerU5BU5D_t770* G_B19_2 = {0};
	int32_t G_B22_0 = 0;
	StateHandlerU5BU5D_t770* G_B22_1 = {0};
	StateHandlerU5BU5D_t770* G_B22_2 = {0};
	int32_t G_B21_0 = 0;
	StateHandlerU5BU5D_t770* G_B21_1 = {0};
	StateHandlerU5BU5D_t770* G_B21_2 = {0};
	int32_t G_B24_0 = 0;
	StateHandlerU5BU5D_t770* G_B24_1 = {0};
	StateHandlerU5BU5D_t770* G_B24_2 = {0};
	int32_t G_B23_0 = 0;
	StateHandlerU5BU5D_t770* G_B23_1 = {0};
	StateHandlerU5BU5D_t770* G_B23_2 = {0};
	int32_t G_B26_0 = 0;
	StateHandlerU5BU5D_t770* G_B26_1 = {0};
	StateHandlerU5BU5D_t770* G_B26_2 = {0};
	int32_t G_B25_0 = 0;
	StateHandlerU5BU5D_t770* G_B25_1 = {0};
	StateHandlerU5BU5D_t770* G_B25_2 = {0};
	int32_t G_B28_0 = 0;
	StateHandlerU5BU5D_t770* G_B28_1 = {0};
	StateHandlerU5BU5D_t770* G_B28_2 = {0};
	int32_t G_B27_0 = 0;
	StateHandlerU5BU5D_t770* G_B27_1 = {0};
	StateHandlerU5BU5D_t770* G_B27_2 = {0};
	int32_t G_B30_0 = 0;
	StateHandlerU5BU5D_t770* G_B30_1 = {0};
	StateHandlerU5BU5D_t770* G_B30_2 = {0};
	int32_t G_B29_0 = 0;
	StateHandlerU5BU5D_t770* G_B29_1 = {0};
	StateHandlerU5BU5D_t770* G_B29_2 = {0};
	int32_t G_B32_0 = 0;
	StateHandlerU5BU5D_t770* G_B32_1 = {0};
	StateHandlerU5BU5D_t770* G_B32_2 = {0};
	int32_t G_B31_0 = 0;
	StateHandlerU5BU5D_t770* G_B31_1 = {0};
	StateHandlerU5BU5D_t770* G_B31_2 = {0};
	int32_t G_B34_0 = 0;
	StateHandlerU5BU5D_t770* G_B34_1 = {0};
	StateHandlerU5BU5D_t770* G_B34_2 = {0};
	int32_t G_B33_0 = 0;
	StateHandlerU5BU5D_t770* G_B33_1 = {0};
	StateHandlerU5BU5D_t770* G_B33_2 = {0};
	int32_t G_B36_0 = 0;
	StateHandlerU5BU5D_t770* G_B36_1 = {0};
	StateHandlerU5BU5D_t770* G_B36_2 = {0};
	int32_t G_B35_0 = 0;
	StateHandlerU5BU5D_t770* G_B35_1 = {0};
	StateHandlerU5BU5D_t770* G_B35_2 = {0};
	int32_t G_B38_0 = 0;
	StateHandlerU5BU5D_t770* G_B38_1 = {0};
	StateHandlerU5BU5D_t770* G_B38_2 = {0};
	int32_t G_B37_0 = 0;
	StateHandlerU5BU5D_t770* G_B37_1 = {0};
	StateHandlerU5BU5D_t770* G_B37_2 = {0};
	int32_t G_B40_0 = 0;
	StateHandlerU5BU5D_t770* G_B40_1 = {0};
	StateHandlerU5BU5D_t770* G_B40_2 = {0};
	int32_t G_B39_0 = 0;
	StateHandlerU5BU5D_t770* G_B39_1 = {0};
	StateHandlerU5BU5D_t770* G_B39_2 = {0};
	int32_t G_B42_0 = 0;
	StateHandlerU5BU5D_t770* G_B42_1 = {0};
	StateHandlerU5BU5D_t770* G_B42_2 = {0};
	int32_t G_B41_0 = 0;
	StateHandlerU5BU5D_t770* G_B41_1 = {0};
	StateHandlerU5BU5D_t770* G_B41_2 = {0};
	int32_t G_B44_0 = 0;
	StateHandlerU5BU5D_t770* G_B44_1 = {0};
	StateHandlerU5BU5D_t770* G_B44_2 = {0};
	int32_t G_B43_0 = 0;
	StateHandlerU5BU5D_t770* G_B43_1 = {0};
	StateHandlerU5BU5D_t770* G_B43_2 = {0};
	int32_t G_B46_0 = 0;
	StateHandlerU5BU5D_t770* G_B46_1 = {0};
	StateHandlerU5BU5D_t770* G_B46_2 = {0};
	int32_t G_B45_0 = 0;
	StateHandlerU5BU5D_t770* G_B45_1 = {0};
	StateHandlerU5BU5D_t770* G_B45_2 = {0};
	int32_t G_B48_0 = 0;
	StateHandlerU5BU5D_t770* G_B48_1 = {0};
	StateHandlerU5BU5D_t770* G_B48_2 = {0};
	int32_t G_B47_0 = 0;
	StateHandlerU5BU5D_t770* G_B47_1 = {0};
	StateHandlerU5BU5D_t770* G_B47_2 = {0};
	int32_t G_B50_0 = 0;
	StateHandlerU5BU5D_t770* G_B50_1 = {0};
	StateHandlerU5BU5D_t770* G_B50_2 = {0};
	int32_t G_B49_0 = 0;
	StateHandlerU5BU5D_t770* G_B49_1 = {0};
	StateHandlerU5BU5D_t770* G_B49_2 = {0};
	int32_t G_B52_0 = 0;
	StateHandlerU5BU5D_t770* G_B52_1 = {0};
	StateHandlerU5BU5D_t770* G_B52_2 = {0};
	int32_t G_B51_0 = 0;
	StateHandlerU5BU5D_t770* G_B51_1 = {0};
	StateHandlerU5BU5D_t770* G_B51_2 = {0};
	int32_t G_B54_0 = 0;
	StateHandlerU5BU5D_t770* G_B54_1 = {0};
	StateHandlerU5BU5D_t770* G_B54_2 = {0};
	int32_t G_B53_0 = 0;
	StateHandlerU5BU5D_t770* G_B53_1 = {0};
	StateHandlerU5BU5D_t770* G_B53_2 = {0};
	int32_t G_B56_0 = 0;
	StateHandlerU5BU5D_t770* G_B56_1 = {0};
	StateHandlerU5BU5D_t770* G_B56_2 = {0};
	int32_t G_B55_0 = 0;
	StateHandlerU5BU5D_t770* G_B55_1 = {0};
	StateHandlerU5BU5D_t770* G_B55_2 = {0};
	{
		StateHandlerU5BU5D_t770* L_0 = ((StateHandlerU5BU5D_t770*)SZArrayNew(StateHandlerU5BU5D_t770_il2cpp_TypeInfo_var, ((int32_t)28)));
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_1 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache0_14;
		G_B1_0 = 0;
		G_B1_1 = L_0;
		G_B1_2 = L_0;
		if (L_1)
		{
			G_B2_0 = 0;
			G_B2_1 = L_0;
			G_B2_2 = L_0;
			goto IL_0021;
		}
	}
	{
		IntPtr_t L_2 = { (void*)Lexer_State1_m4019_MethodInfo_var };
		StateHandler_t769 * L_3 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_3, NULL, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache0_14 = L_3;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_4 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache0_14;
		NullCheck(G_B2_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B2_1, G_B2_0);
		ArrayElementTypeCheck (G_B2_1, L_4);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B2_1, G_B2_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_4;
		StateHandlerU5BU5D_t770* L_5 = G_B2_2;
		StateHandler_t769 * L_6 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache1_15;
		G_B3_0 = 1;
		G_B3_1 = L_5;
		G_B3_2 = L_5;
		if (L_6)
		{
			G_B4_0 = 1;
			G_B4_1 = L_5;
			G_B4_2 = L_5;
			goto IL_0041;
		}
	}
	{
		IntPtr_t L_7 = { (void*)Lexer_State2_m4020_MethodInfo_var };
		StateHandler_t769 * L_8 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_8, NULL, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache1_15 = L_8;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_9 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache1_15;
		NullCheck(G_B4_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B4_1, G_B4_0);
		ArrayElementTypeCheck (G_B4_1, L_9);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B4_1, G_B4_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_9;
		StateHandlerU5BU5D_t770* L_10 = G_B4_2;
		StateHandler_t769 * L_11 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache2_16;
		G_B5_0 = 2;
		G_B5_1 = L_10;
		G_B5_2 = L_10;
		if (L_11)
		{
			G_B6_0 = 2;
			G_B6_1 = L_10;
			G_B6_2 = L_10;
			goto IL_0061;
		}
	}
	{
		IntPtr_t L_12 = { (void*)Lexer_State3_m4021_MethodInfo_var };
		StateHandler_t769 * L_13 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_13, NULL, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache2_16 = L_13;
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0061:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_14 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache2_16;
		NullCheck(G_B6_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_1, G_B6_0);
		ArrayElementTypeCheck (G_B6_1, L_14);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B6_1, G_B6_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_14;
		StateHandlerU5BU5D_t770* L_15 = G_B6_2;
		StateHandler_t769 * L_16 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache3_17;
		G_B7_0 = 3;
		G_B7_1 = L_15;
		G_B7_2 = L_15;
		if (L_16)
		{
			G_B8_0 = 3;
			G_B8_1 = L_15;
			G_B8_2 = L_15;
			goto IL_0081;
		}
	}
	{
		IntPtr_t L_17 = { (void*)Lexer_State4_m4022_MethodInfo_var };
		StateHandler_t769 * L_18 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_18, NULL, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache3_17 = L_18;
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_0081:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_19 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache3_17;
		NullCheck(G_B8_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B8_1, G_B8_0);
		ArrayElementTypeCheck (G_B8_1, L_19);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B8_1, G_B8_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_19;
		StateHandlerU5BU5D_t770* L_20 = G_B8_2;
		StateHandler_t769 * L_21 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache4_18;
		G_B9_0 = 4;
		G_B9_1 = L_20;
		G_B9_2 = L_20;
		if (L_21)
		{
			G_B10_0 = 4;
			G_B10_1 = L_20;
			G_B10_2 = L_20;
			goto IL_00a1;
		}
	}
	{
		IntPtr_t L_22 = { (void*)Lexer_State5_m4023_MethodInfo_var };
		StateHandler_t769 * L_23 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_23, NULL, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache4_18 = L_23;
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_00a1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_24 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache4_18;
		NullCheck(G_B10_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_1, G_B10_0);
		ArrayElementTypeCheck (G_B10_1, L_24);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B10_1, G_B10_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_24;
		StateHandlerU5BU5D_t770* L_25 = G_B10_2;
		StateHandler_t769 * L_26 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache5_19;
		G_B11_0 = 5;
		G_B11_1 = L_25;
		G_B11_2 = L_25;
		if (L_26)
		{
			G_B12_0 = 5;
			G_B12_1 = L_25;
			G_B12_2 = L_25;
			goto IL_00c1;
		}
	}
	{
		IntPtr_t L_27 = { (void*)Lexer_State6_m4024_MethodInfo_var };
		StateHandler_t769 * L_28 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_28, NULL, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache5_19 = L_28;
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_00c1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_29 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache5_19;
		NullCheck(G_B12_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B12_1, G_B12_0);
		ArrayElementTypeCheck (G_B12_1, L_29);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B12_1, G_B12_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_29;
		StateHandlerU5BU5D_t770* L_30 = G_B12_2;
		StateHandler_t769 * L_31 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache6_20;
		G_B13_0 = 6;
		G_B13_1 = L_30;
		G_B13_2 = L_30;
		if (L_31)
		{
			G_B14_0 = 6;
			G_B14_1 = L_30;
			G_B14_2 = L_30;
			goto IL_00e1;
		}
	}
	{
		IntPtr_t L_32 = { (void*)Lexer_State7_m4025_MethodInfo_var };
		StateHandler_t769 * L_33 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_33, NULL, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache6_20 = L_33;
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
	}

IL_00e1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_34 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache6_20;
		NullCheck(G_B14_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B14_1, G_B14_0);
		ArrayElementTypeCheck (G_B14_1, L_34);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B14_1, G_B14_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_34;
		StateHandlerU5BU5D_t770* L_35 = G_B14_2;
		StateHandler_t769 * L_36 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache7_21;
		G_B15_0 = 7;
		G_B15_1 = L_35;
		G_B15_2 = L_35;
		if (L_36)
		{
			G_B16_0 = 7;
			G_B16_1 = L_35;
			G_B16_2 = L_35;
			goto IL_0101;
		}
	}
	{
		IntPtr_t L_37 = { (void*)Lexer_State8_m4026_MethodInfo_var };
		StateHandler_t769 * L_38 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_38, NULL, L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache7_21 = L_38;
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_39 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache7_21;
		NullCheck(G_B16_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B16_1, G_B16_0);
		ArrayElementTypeCheck (G_B16_1, L_39);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B16_1, G_B16_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_39;
		StateHandlerU5BU5D_t770* L_40 = G_B16_2;
		StateHandler_t769 * L_41 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache8_22;
		G_B17_0 = 8;
		G_B17_1 = L_40;
		G_B17_2 = L_40;
		if (L_41)
		{
			G_B18_0 = 8;
			G_B18_1 = L_40;
			G_B18_2 = L_40;
			goto IL_0121;
		}
	}
	{
		IntPtr_t L_42 = { (void*)Lexer_State9_m4027_MethodInfo_var };
		StateHandler_t769 * L_43 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_43, NULL, L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache8_22 = L_43;
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
	}

IL_0121:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_44 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache8_22;
		NullCheck(G_B18_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B18_1, G_B18_0);
		ArrayElementTypeCheck (G_B18_1, L_44);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B18_1, G_B18_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_44;
		StateHandlerU5BU5D_t770* L_45 = G_B18_2;
		StateHandler_t769 * L_46 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache9_23;
		G_B19_0 = ((int32_t)9);
		G_B19_1 = L_45;
		G_B19_2 = L_45;
		if (L_46)
		{
			G_B20_0 = ((int32_t)9);
			G_B20_1 = L_45;
			G_B20_2 = L_45;
			goto IL_0142;
		}
	}
	{
		IntPtr_t L_47 = { (void*)Lexer_State10_m4028_MethodInfo_var };
		StateHandler_t769 * L_48 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_48, NULL, L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache9_23 = L_48;
		G_B20_0 = G_B19_0;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
	}

IL_0142:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_49 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache9_23;
		NullCheck(G_B20_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B20_1, G_B20_0);
		ArrayElementTypeCheck (G_B20_1, L_49);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B20_1, G_B20_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_49;
		StateHandlerU5BU5D_t770* L_50 = G_B20_2;
		StateHandler_t769 * L_51 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheA_24;
		G_B21_0 = ((int32_t)10);
		G_B21_1 = L_50;
		G_B21_2 = L_50;
		if (L_51)
		{
			G_B22_0 = ((int32_t)10);
			G_B22_1 = L_50;
			G_B22_2 = L_50;
			goto IL_0163;
		}
	}
	{
		IntPtr_t L_52 = { (void*)Lexer_State11_m4029_MethodInfo_var };
		StateHandler_t769 * L_53 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_53, NULL, L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheA_24 = L_53;
		G_B22_0 = G_B21_0;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
	}

IL_0163:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_54 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheA_24;
		NullCheck(G_B22_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B22_1, G_B22_0);
		ArrayElementTypeCheck (G_B22_1, L_54);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B22_1, G_B22_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_54;
		StateHandlerU5BU5D_t770* L_55 = G_B22_2;
		StateHandler_t769 * L_56 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheB_25;
		G_B23_0 = ((int32_t)11);
		G_B23_1 = L_55;
		G_B23_2 = L_55;
		if (L_56)
		{
			G_B24_0 = ((int32_t)11);
			G_B24_1 = L_55;
			G_B24_2 = L_55;
			goto IL_0184;
		}
	}
	{
		IntPtr_t L_57 = { (void*)Lexer_State12_m4030_MethodInfo_var };
		StateHandler_t769 * L_58 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_58, NULL, L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheB_25 = L_58;
		G_B24_0 = G_B23_0;
		G_B24_1 = G_B23_1;
		G_B24_2 = G_B23_2;
	}

IL_0184:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_59 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheB_25;
		NullCheck(G_B24_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B24_1, G_B24_0);
		ArrayElementTypeCheck (G_B24_1, L_59);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B24_1, G_B24_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_59;
		StateHandlerU5BU5D_t770* L_60 = G_B24_2;
		StateHandler_t769 * L_61 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheC_26;
		G_B25_0 = ((int32_t)12);
		G_B25_1 = L_60;
		G_B25_2 = L_60;
		if (L_61)
		{
			G_B26_0 = ((int32_t)12);
			G_B26_1 = L_60;
			G_B26_2 = L_60;
			goto IL_01a5;
		}
	}
	{
		IntPtr_t L_62 = { (void*)Lexer_State13_m4031_MethodInfo_var };
		StateHandler_t769 * L_63 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_63, NULL, L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheC_26 = L_63;
		G_B26_0 = G_B25_0;
		G_B26_1 = G_B25_1;
		G_B26_2 = G_B25_2;
	}

IL_01a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_64 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheC_26;
		NullCheck(G_B26_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B26_1, G_B26_0);
		ArrayElementTypeCheck (G_B26_1, L_64);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B26_1, G_B26_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_64;
		StateHandlerU5BU5D_t770* L_65 = G_B26_2;
		StateHandler_t769 * L_66 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheD_27;
		G_B27_0 = ((int32_t)13);
		G_B27_1 = L_65;
		G_B27_2 = L_65;
		if (L_66)
		{
			G_B28_0 = ((int32_t)13);
			G_B28_1 = L_65;
			G_B28_2 = L_65;
			goto IL_01c6;
		}
	}
	{
		IntPtr_t L_67 = { (void*)Lexer_State14_m4032_MethodInfo_var };
		StateHandler_t769 * L_68 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_68, NULL, L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheD_27 = L_68;
		G_B28_0 = G_B27_0;
		G_B28_1 = G_B27_1;
		G_B28_2 = G_B27_2;
	}

IL_01c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_69 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheD_27;
		NullCheck(G_B28_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B28_1, G_B28_0);
		ArrayElementTypeCheck (G_B28_1, L_69);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B28_1, G_B28_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_69;
		StateHandlerU5BU5D_t770* L_70 = G_B28_2;
		StateHandler_t769 * L_71 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheE_28;
		G_B29_0 = ((int32_t)14);
		G_B29_1 = L_70;
		G_B29_2 = L_70;
		if (L_71)
		{
			G_B30_0 = ((int32_t)14);
			G_B30_1 = L_70;
			G_B30_2 = L_70;
			goto IL_01e7;
		}
	}
	{
		IntPtr_t L_72 = { (void*)Lexer_State15_m4033_MethodInfo_var };
		StateHandler_t769 * L_73 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_73, NULL, L_72, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheE_28 = L_73;
		G_B30_0 = G_B29_0;
		G_B30_1 = G_B29_1;
		G_B30_2 = G_B29_2;
	}

IL_01e7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_74 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheE_28;
		NullCheck(G_B30_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B30_1, G_B30_0);
		ArrayElementTypeCheck (G_B30_1, L_74);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B30_1, G_B30_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_74;
		StateHandlerU5BU5D_t770* L_75 = G_B30_2;
		StateHandler_t769 * L_76 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheF_29;
		G_B31_0 = ((int32_t)15);
		G_B31_1 = L_75;
		G_B31_2 = L_75;
		if (L_76)
		{
			G_B32_0 = ((int32_t)15);
			G_B32_1 = L_75;
			G_B32_2 = L_75;
			goto IL_0208;
		}
	}
	{
		IntPtr_t L_77 = { (void*)Lexer_State16_m4034_MethodInfo_var };
		StateHandler_t769 * L_78 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_78, NULL, L_77, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheF_29 = L_78;
		G_B32_0 = G_B31_0;
		G_B32_1 = G_B31_1;
		G_B32_2 = G_B31_2;
	}

IL_0208:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_79 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cacheF_29;
		NullCheck(G_B32_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B32_1, G_B32_0);
		ArrayElementTypeCheck (G_B32_1, L_79);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B32_1, G_B32_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_79;
		StateHandlerU5BU5D_t770* L_80 = G_B32_2;
		StateHandler_t769 * L_81 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache10_30;
		G_B33_0 = ((int32_t)16);
		G_B33_1 = L_80;
		G_B33_2 = L_80;
		if (L_81)
		{
			G_B34_0 = ((int32_t)16);
			G_B34_1 = L_80;
			G_B34_2 = L_80;
			goto IL_0229;
		}
	}
	{
		IntPtr_t L_82 = { (void*)Lexer_State17_m4035_MethodInfo_var };
		StateHandler_t769 * L_83 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_83, NULL, L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache10_30 = L_83;
		G_B34_0 = G_B33_0;
		G_B34_1 = G_B33_1;
		G_B34_2 = G_B33_2;
	}

IL_0229:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_84 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache10_30;
		NullCheck(G_B34_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B34_1, G_B34_0);
		ArrayElementTypeCheck (G_B34_1, L_84);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B34_1, G_B34_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_84;
		StateHandlerU5BU5D_t770* L_85 = G_B34_2;
		StateHandler_t769 * L_86 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache11_31;
		G_B35_0 = ((int32_t)17);
		G_B35_1 = L_85;
		G_B35_2 = L_85;
		if (L_86)
		{
			G_B36_0 = ((int32_t)17);
			G_B36_1 = L_85;
			G_B36_2 = L_85;
			goto IL_024a;
		}
	}
	{
		IntPtr_t L_87 = { (void*)Lexer_State18_m4036_MethodInfo_var };
		StateHandler_t769 * L_88 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_88, NULL, L_87, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache11_31 = L_88;
		G_B36_0 = G_B35_0;
		G_B36_1 = G_B35_1;
		G_B36_2 = G_B35_2;
	}

IL_024a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_89 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache11_31;
		NullCheck(G_B36_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B36_1, G_B36_0);
		ArrayElementTypeCheck (G_B36_1, L_89);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B36_1, G_B36_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_89;
		StateHandlerU5BU5D_t770* L_90 = G_B36_2;
		StateHandler_t769 * L_91 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache12_32;
		G_B37_0 = ((int32_t)18);
		G_B37_1 = L_90;
		G_B37_2 = L_90;
		if (L_91)
		{
			G_B38_0 = ((int32_t)18);
			G_B38_1 = L_90;
			G_B38_2 = L_90;
			goto IL_026b;
		}
	}
	{
		IntPtr_t L_92 = { (void*)Lexer_State19_m4037_MethodInfo_var };
		StateHandler_t769 * L_93 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_93, NULL, L_92, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache12_32 = L_93;
		G_B38_0 = G_B37_0;
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
	}

IL_026b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_94 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache12_32;
		NullCheck(G_B38_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B38_1, G_B38_0);
		ArrayElementTypeCheck (G_B38_1, L_94);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B38_1, G_B38_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_94;
		StateHandlerU5BU5D_t770* L_95 = G_B38_2;
		StateHandler_t769 * L_96 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache13_33;
		G_B39_0 = ((int32_t)19);
		G_B39_1 = L_95;
		G_B39_2 = L_95;
		if (L_96)
		{
			G_B40_0 = ((int32_t)19);
			G_B40_1 = L_95;
			G_B40_2 = L_95;
			goto IL_028c;
		}
	}
	{
		IntPtr_t L_97 = { (void*)Lexer_State20_m4038_MethodInfo_var };
		StateHandler_t769 * L_98 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_98, NULL, L_97, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache13_33 = L_98;
		G_B40_0 = G_B39_0;
		G_B40_1 = G_B39_1;
		G_B40_2 = G_B39_2;
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_99 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache13_33;
		NullCheck(G_B40_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B40_1, G_B40_0);
		ArrayElementTypeCheck (G_B40_1, L_99);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B40_1, G_B40_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_99;
		StateHandlerU5BU5D_t770* L_100 = G_B40_2;
		StateHandler_t769 * L_101 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache14_34;
		G_B41_0 = ((int32_t)20);
		G_B41_1 = L_100;
		G_B41_2 = L_100;
		if (L_101)
		{
			G_B42_0 = ((int32_t)20);
			G_B42_1 = L_100;
			G_B42_2 = L_100;
			goto IL_02ad;
		}
	}
	{
		IntPtr_t L_102 = { (void*)Lexer_State21_m4039_MethodInfo_var };
		StateHandler_t769 * L_103 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_103, NULL, L_102, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache14_34 = L_103;
		G_B42_0 = G_B41_0;
		G_B42_1 = G_B41_1;
		G_B42_2 = G_B41_2;
	}

IL_02ad:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_104 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache14_34;
		NullCheck(G_B42_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B42_1, G_B42_0);
		ArrayElementTypeCheck (G_B42_1, L_104);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B42_1, G_B42_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_104;
		StateHandlerU5BU5D_t770* L_105 = G_B42_2;
		StateHandler_t769 * L_106 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache15_35;
		G_B43_0 = ((int32_t)21);
		G_B43_1 = L_105;
		G_B43_2 = L_105;
		if (L_106)
		{
			G_B44_0 = ((int32_t)21);
			G_B44_1 = L_105;
			G_B44_2 = L_105;
			goto IL_02ce;
		}
	}
	{
		IntPtr_t L_107 = { (void*)Lexer_State22_m4040_MethodInfo_var };
		StateHandler_t769 * L_108 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_108, NULL, L_107, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache15_35 = L_108;
		G_B44_0 = G_B43_0;
		G_B44_1 = G_B43_1;
		G_B44_2 = G_B43_2;
	}

IL_02ce:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_109 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache15_35;
		NullCheck(G_B44_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B44_1, G_B44_0);
		ArrayElementTypeCheck (G_B44_1, L_109);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B44_1, G_B44_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_109;
		StateHandlerU5BU5D_t770* L_110 = G_B44_2;
		StateHandler_t769 * L_111 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache16_36;
		G_B45_0 = ((int32_t)22);
		G_B45_1 = L_110;
		G_B45_2 = L_110;
		if (L_111)
		{
			G_B46_0 = ((int32_t)22);
			G_B46_1 = L_110;
			G_B46_2 = L_110;
			goto IL_02ef;
		}
	}
	{
		IntPtr_t L_112 = { (void*)Lexer_State23_m4041_MethodInfo_var };
		StateHandler_t769 * L_113 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_113, NULL, L_112, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache16_36 = L_113;
		G_B46_0 = G_B45_0;
		G_B46_1 = G_B45_1;
		G_B46_2 = G_B45_2;
	}

IL_02ef:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_114 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache16_36;
		NullCheck(G_B46_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B46_1, G_B46_0);
		ArrayElementTypeCheck (G_B46_1, L_114);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B46_1, G_B46_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_114;
		StateHandlerU5BU5D_t770* L_115 = G_B46_2;
		StateHandler_t769 * L_116 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache17_37;
		G_B47_0 = ((int32_t)23);
		G_B47_1 = L_115;
		G_B47_2 = L_115;
		if (L_116)
		{
			G_B48_0 = ((int32_t)23);
			G_B48_1 = L_115;
			G_B48_2 = L_115;
			goto IL_0310;
		}
	}
	{
		IntPtr_t L_117 = { (void*)Lexer_State24_m4042_MethodInfo_var };
		StateHandler_t769 * L_118 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_118, NULL, L_117, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache17_37 = L_118;
		G_B48_0 = G_B47_0;
		G_B48_1 = G_B47_1;
		G_B48_2 = G_B47_2;
	}

IL_0310:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_119 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache17_37;
		NullCheck(G_B48_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B48_1, G_B48_0);
		ArrayElementTypeCheck (G_B48_1, L_119);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B48_1, G_B48_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_119;
		StateHandlerU5BU5D_t770* L_120 = G_B48_2;
		StateHandler_t769 * L_121 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache18_38;
		G_B49_0 = ((int32_t)24);
		G_B49_1 = L_120;
		G_B49_2 = L_120;
		if (L_121)
		{
			G_B50_0 = ((int32_t)24);
			G_B50_1 = L_120;
			G_B50_2 = L_120;
			goto IL_0331;
		}
	}
	{
		IntPtr_t L_122 = { (void*)Lexer_State25_m4043_MethodInfo_var };
		StateHandler_t769 * L_123 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_123, NULL, L_122, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache18_38 = L_123;
		G_B50_0 = G_B49_0;
		G_B50_1 = G_B49_1;
		G_B50_2 = G_B49_2;
	}

IL_0331:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_124 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache18_38;
		NullCheck(G_B50_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B50_1, G_B50_0);
		ArrayElementTypeCheck (G_B50_1, L_124);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B50_1, G_B50_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_124;
		StateHandlerU5BU5D_t770* L_125 = G_B50_2;
		StateHandler_t769 * L_126 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache19_39;
		G_B51_0 = ((int32_t)25);
		G_B51_1 = L_125;
		G_B51_2 = L_125;
		if (L_126)
		{
			G_B52_0 = ((int32_t)25);
			G_B52_1 = L_125;
			G_B52_2 = L_125;
			goto IL_0352;
		}
	}
	{
		IntPtr_t L_127 = { (void*)Lexer_State26_m4044_MethodInfo_var };
		StateHandler_t769 * L_128 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_128, NULL, L_127, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache19_39 = L_128;
		G_B52_0 = G_B51_0;
		G_B52_1 = G_B51_1;
		G_B52_2 = G_B51_2;
	}

IL_0352:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_129 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache19_39;
		NullCheck(G_B52_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B52_1, G_B52_0);
		ArrayElementTypeCheck (G_B52_1, L_129);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B52_1, G_B52_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_129;
		StateHandlerU5BU5D_t770* L_130 = G_B52_2;
		StateHandler_t769 * L_131 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache1A_40;
		G_B53_0 = ((int32_t)26);
		G_B53_1 = L_130;
		G_B53_2 = L_130;
		if (L_131)
		{
			G_B54_0 = ((int32_t)26);
			G_B54_1 = L_130;
			G_B54_2 = L_130;
			goto IL_0373;
		}
	}
	{
		IntPtr_t L_132 = { (void*)Lexer_State27_m4045_MethodInfo_var };
		StateHandler_t769 * L_133 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_133, NULL, L_132, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache1A_40 = L_133;
		G_B54_0 = G_B53_0;
		G_B54_1 = G_B53_1;
		G_B54_2 = G_B53_2;
	}

IL_0373:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_134 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache1A_40;
		NullCheck(G_B54_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B54_1, G_B54_0);
		ArrayElementTypeCheck (G_B54_1, L_134);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B54_1, G_B54_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_134;
		StateHandlerU5BU5D_t770* L_135 = G_B54_2;
		StateHandler_t769 * L_136 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache1B_41;
		G_B55_0 = ((int32_t)27);
		G_B55_1 = L_135;
		G_B55_2 = L_135;
		if (L_136)
		{
			G_B56_0 = ((int32_t)27);
			G_B56_1 = L_135;
			G_B56_2 = L_135;
			goto IL_0394;
		}
	}
	{
		IntPtr_t L_137 = { (void*)Lexer_State28_m4046_MethodInfo_var };
		StateHandler_t769 * L_138 = (StateHandler_t769 *)il2cpp_codegen_object_new (StateHandler_t769_il2cpp_TypeInfo_var);
		StateHandler__ctor_m4007(L_138, NULL, L_137, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache1B_41 = L_138;
		G_B56_0 = G_B55_0;
		G_B56_1 = G_B55_1;
		G_B56_2 = G_B55_2;
	}

IL_0394:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandler_t769 * L_139 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__mgU24cache1B_41;
		NullCheck(G_B56_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B56_1, G_B56_0);
		ArrayElementTypeCheck (G_B56_1, L_139);
		*((StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(G_B56_1, G_B56_0, sizeof(StateHandler_t769 *))) = (StateHandler_t769 *)L_139;
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___fsm_handler_table_1 = G_B56_2;
		Int32U5BU5D_t61* L_140 = ((Int32U5BU5D_t61*)SZArrayNew(Int32U5BU5D_t61_il2cpp_TypeInfo_var, ((int32_t)28)));
		RuntimeHelpers_InitializeArray_m883(NULL /*static, unused*/, (Array_t *)(Array_t *)L_140, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t774____U24fieldU2DC_12_FieldInfo_var), /*hidden argument*/NULL);
		((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___fsm_return_table_0 = L_140;
		return;
	}
}
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" uint16_t Lexer_ProcessEscChar_m4018 (Object_t * __this /* static, unused */, int32_t ___esc_char, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___esc_char;
		if (((int32_t)((int32_t)L_0-(int32_t)((int32_t)114))) == 0)
		{
			goto IL_005f;
		}
		if (((int32_t)((int32_t)L_0-(int32_t)((int32_t)114))) == 1)
		{
			goto IL_0015;
		}
		if (((int32_t)((int32_t)L_0-(int32_t)((int32_t)114))) == 2)
		{
			goto IL_005c;
		}
	}

IL_0015:
	{
		int32_t L_1 = ___esc_char;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)34))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_2 = ___esc_char;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)39))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_3 = ___esc_char;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)47))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = ___esc_char;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_5 = ___esc_char;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)98))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_6 = ___esc_char;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)102))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_7 = ___esc_char;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110))))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0067;
	}

IL_0052:
	{
		int32_t L_8 = ___esc_char;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		uint16_t L_9 = Convert_ToChar_m4115(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0059:
	{
		return ((int32_t)10);
	}

IL_005c:
	{
		return ((int32_t)9);
	}

IL_005f:
	{
		return ((int32_t)13);
	}

IL_0062:
	{
		return 8;
	}

IL_0064:
	{
		return ((int32_t)12);
	}

IL_0067:
	{
		return ((int32_t)63);
	}
}
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C" bool Lexer_State1_m4019 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_01eb;
	}

IL_0005:
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___input_char_7);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_003b;
		}
	}
	{
		FsmContext_t768 * L_3 = ___ctx;
		NullCheck(L_3);
		Lexer_t760 * L_4 = (L_3->___L_2);
		NullCheck(L_4);
		int32_t L_5 = (L_4->___input_char_7);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0040;
		}
	}
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		Lexer_t760 * L_7 = (L_6->___L_2);
		NullCheck(L_7);
		int32_t L_8 = (L_7->___input_char_7);
		if ((((int32_t)L_8) > ((int32_t)((int32_t)13))))
		{
			goto IL_0040;
		}
	}

IL_003b:
	{
		goto IL_01eb;
	}

IL_0040:
	{
		FsmContext_t768 * L_9 = ___ctx;
		NullCheck(L_9);
		Lexer_t760 * L_10 = (L_9->___L_2);
		NullCheck(L_10);
		int32_t L_11 = (L_10->___input_char_7);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)49))))
		{
			goto IL_008a;
		}
	}
	{
		FsmContext_t768 * L_12 = ___ctx;
		NullCheck(L_12);
		Lexer_t760 * L_13 = (L_12->___L_2);
		NullCheck(L_13);
		int32_t L_14 = (L_13->___input_char_7);
		if ((((int32_t)L_14) > ((int32_t)((int32_t)57))))
		{
			goto IL_008a;
		}
	}
	{
		FsmContext_t768 * L_15 = ___ctx;
		NullCheck(L_15);
		Lexer_t760 * L_16 = (L_15->___L_2);
		NullCheck(L_16);
		StringBuilder_t440 * L_17 = (L_16->___string_buffer_10);
		FsmContext_t768 * L_18 = ___ctx;
		NullCheck(L_18);
		Lexer_t760 * L_19 = (L_18->___L_2);
		NullCheck(L_19);
		int32_t L_20 = (L_19->___input_char_7);
		NullCheck(L_17);
		StringBuilder_Append_m4116(L_17, (((int32_t)((uint16_t)L_20))), /*hidden argument*/NULL);
		FsmContext_t768 * L_21 = ___ctx;
		NullCheck(L_21);
		L_21->___NextState_1 = 3;
		return 1;
	}

IL_008a:
	{
		FsmContext_t768 * L_22 = ___ctx;
		NullCheck(L_22);
		Lexer_t760 * L_23 = (L_22->___L_2);
		NullCheck(L_23);
		int32_t L_24 = (L_23->___input_char_7);
		V_0 = L_24;
		int32_t L_25 = V_0;
		if (((int32_t)((int32_t)L_25-(int32_t)((int32_t)44))) == 0)
		{
			goto IL_0123;
		}
		if (((int32_t)((int32_t)L_25-(int32_t)((int32_t)44))) == 1)
		{
			goto IL_0133;
		}
		if (((int32_t)((int32_t)L_25-(int32_t)((int32_t)44))) == 2)
		{
			goto IL_00b3;
		}
		if (((int32_t)((int32_t)L_25-(int32_t)((int32_t)44))) == 3)
		{
			goto IL_01cd;
		}
		if (((int32_t)((int32_t)L_25-(int32_t)((int32_t)44))) == 4)
		{
			goto IL_0159;
		}
	}

IL_00b3:
	{
		int32_t L_26 = V_0;
		if (((int32_t)((int32_t)L_26-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_0123;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_0123;
		}
	}

IL_00c8:
	{
		int32_t L_27 = V_0;
		if (((int32_t)((int32_t)L_27-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_0123;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00dd;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_0123;
		}
	}

IL_00dd:
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)39))))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)58))))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)102))))
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)110))))
		{
			goto IL_0189;
		}
	}
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)116))))
		{
			goto IL_0193;
		}
	}
	{
		goto IL_01e9;
	}

IL_0112:
	{
		FsmContext_t768 * L_34 = ___ctx;
		NullCheck(L_34);
		L_34->___NextState_1 = ((int32_t)19);
		FsmContext_t768 * L_35 = ___ctx;
		NullCheck(L_35);
		L_35->___Return_0 = 1;
		return 1;
	}

IL_0123:
	{
		FsmContext_t768 * L_36 = ___ctx;
		NullCheck(L_36);
		L_36->___NextState_1 = 1;
		FsmContext_t768 * L_37 = ___ctx;
		NullCheck(L_37);
		L_37->___Return_0 = 1;
		return 1;
	}

IL_0133:
	{
		FsmContext_t768 * L_38 = ___ctx;
		NullCheck(L_38);
		Lexer_t760 * L_39 = (L_38->___L_2);
		NullCheck(L_39);
		StringBuilder_t440 * L_40 = (L_39->___string_buffer_10);
		FsmContext_t768 * L_41 = ___ctx;
		NullCheck(L_41);
		Lexer_t760 * L_42 = (L_41->___L_2);
		NullCheck(L_42);
		int32_t L_43 = (L_42->___input_char_7);
		NullCheck(L_40);
		StringBuilder_Append_m4116(L_40, (((int32_t)((uint16_t)L_43))), /*hidden argument*/NULL);
		FsmContext_t768 * L_44 = ___ctx;
		NullCheck(L_44);
		L_44->___NextState_1 = 2;
		return 1;
	}

IL_0159:
	{
		FsmContext_t768 * L_45 = ___ctx;
		NullCheck(L_45);
		Lexer_t760 * L_46 = (L_45->___L_2);
		NullCheck(L_46);
		StringBuilder_t440 * L_47 = (L_46->___string_buffer_10);
		FsmContext_t768 * L_48 = ___ctx;
		NullCheck(L_48);
		Lexer_t760 * L_49 = (L_48->___L_2);
		NullCheck(L_49);
		int32_t L_50 = (L_49->___input_char_7);
		NullCheck(L_47);
		StringBuilder_Append_m4116(L_47, (((int32_t)((uint16_t)L_50))), /*hidden argument*/NULL);
		FsmContext_t768 * L_51 = ___ctx;
		NullCheck(L_51);
		L_51->___NextState_1 = 4;
		return 1;
	}

IL_017f:
	{
		FsmContext_t768 * L_52 = ___ctx;
		NullCheck(L_52);
		L_52->___NextState_1 = ((int32_t)12);
		return 1;
	}

IL_0189:
	{
		FsmContext_t768 * L_53 = ___ctx;
		NullCheck(L_53);
		L_53->___NextState_1 = ((int32_t)16);
		return 1;
	}

IL_0193:
	{
		FsmContext_t768 * L_54 = ___ctx;
		NullCheck(L_54);
		L_54->___NextState_1 = ((int32_t)9);
		return 1;
	}

IL_019d:
	{
		FsmContext_t768 * L_55 = ___ctx;
		NullCheck(L_55);
		Lexer_t760 * L_56 = (L_55->___L_2);
		NullCheck(L_56);
		bool L_57 = (L_56->___allow_single_quoted_strings_3);
		if (L_57)
		{
			goto IL_01af;
		}
	}
	{
		return 0;
	}

IL_01af:
	{
		FsmContext_t768 * L_58 = ___ctx;
		NullCheck(L_58);
		Lexer_t760 * L_59 = (L_58->___L_2);
		NullCheck(L_59);
		L_59->___input_char_7 = ((int32_t)34);
		FsmContext_t768 * L_60 = ___ctx;
		NullCheck(L_60);
		L_60->___NextState_1 = ((int32_t)23);
		FsmContext_t768 * L_61 = ___ctx;
		NullCheck(L_61);
		L_61->___Return_0 = 1;
		return 1;
	}

IL_01cd:
	{
		FsmContext_t768 * L_62 = ___ctx;
		NullCheck(L_62);
		Lexer_t760 * L_63 = (L_62->___L_2);
		NullCheck(L_63);
		bool L_64 = (L_63->___allow_comments_2);
		if (L_64)
		{
			goto IL_01df;
		}
	}
	{
		return 0;
	}

IL_01df:
	{
		FsmContext_t768 * L_65 = ___ctx;
		NullCheck(L_65);
		L_65->___NextState_1 = ((int32_t)25);
		return 1;
	}

IL_01e9:
	{
		return 0;
	}

IL_01eb:
	{
		FsmContext_t768 * L_66 = ___ctx;
		NullCheck(L_66);
		Lexer_t760 * L_67 = (L_66->___L_2);
		NullCheck(L_67);
		bool L_68 = Lexer_GetChar_m4047(L_67, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C" bool Lexer_State2_m4020 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)49))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t768 * L_5 = ___ctx;
		NullCheck(L_5);
		Lexer_t760 * L_6 = (L_5->___L_2);
		NullCheck(L_6);
		int32_t L_7 = (L_6->___input_char_7);
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t768 * L_8 = ___ctx;
		NullCheck(L_8);
		Lexer_t760 * L_9 = (L_8->___L_2);
		NullCheck(L_9);
		StringBuilder_t440 * L_10 = (L_9->___string_buffer_10);
		FsmContext_t768 * L_11 = ___ctx;
		NullCheck(L_11);
		Lexer_t760 * L_12 = (L_11->___L_2);
		NullCheck(L_12);
		int32_t L_13 = (L_12->___input_char_7);
		NullCheck(L_10);
		StringBuilder_Append_m4116(L_10, (((int32_t)((uint16_t)L_13))), /*hidden argument*/NULL);
		FsmContext_t768 * L_14 = ___ctx;
		NullCheck(L_14);
		L_14->___NextState_1 = 3;
		return 1;
	}

IL_0056:
	{
		FsmContext_t768 * L_15 = ___ctx;
		NullCheck(L_15);
		Lexer_t760 * L_16 = (L_15->___L_2);
		NullCheck(L_16);
		int32_t L_17 = (L_16->___input_char_7);
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)48))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0095;
	}

IL_006f:
	{
		FsmContext_t768 * L_19 = ___ctx;
		NullCheck(L_19);
		Lexer_t760 * L_20 = (L_19->___L_2);
		NullCheck(L_20);
		StringBuilder_t440 * L_21 = (L_20->___string_buffer_10);
		FsmContext_t768 * L_22 = ___ctx;
		NullCheck(L_22);
		Lexer_t760 * L_23 = (L_22->___L_2);
		NullCheck(L_23);
		int32_t L_24 = (L_23->___input_char_7);
		NullCheck(L_21);
		StringBuilder_Append_m4116(L_21, (((int32_t)((uint16_t)L_24))), /*hidden argument*/NULL);
		FsmContext_t768 * L_25 = ___ctx;
		NullCheck(L_25);
		L_25->___NextState_1 = 4;
		return 1;
	}

IL_0095:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C" bool Lexer_State3_m4021 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0140;
	}

IL_0005:
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___input_char_7);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t768 * L_3 = ___ctx;
		NullCheck(L_3);
		Lexer_t760 * L_4 = (L_3->___L_2);
		NullCheck(L_4);
		int32_t L_5 = (L_4->___input_char_7);
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		Lexer_t760 * L_7 = (L_6->___L_2);
		NullCheck(L_7);
		StringBuilder_t440 * L_8 = (L_7->___string_buffer_10);
		FsmContext_t768 * L_9 = ___ctx;
		NullCheck(L_9);
		Lexer_t760 * L_10 = (L_9->___L_2);
		NullCheck(L_10);
		int32_t L_11 = (L_10->___input_char_7);
		NullCheck(L_8);
		StringBuilder_Append_m4116(L_8, (((int32_t)((uint16_t)L_11))), /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_004b:
	{
		FsmContext_t768 * L_12 = ___ctx;
		NullCheck(L_12);
		Lexer_t760 * L_13 = (L_12->___L_2);
		NullCheck(L_13);
		int32_t L_14 = (L_13->___input_char_7);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t768 * L_15 = ___ctx;
		NullCheck(L_15);
		Lexer_t760 * L_16 = (L_15->___L_2);
		NullCheck(L_16);
		int32_t L_17 = (L_16->___input_char_7);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t768 * L_18 = ___ctx;
		NullCheck(L_18);
		Lexer_t760 * L_19 = (L_18->___L_2);
		NullCheck(L_19);
		int32_t L_20 = (L_19->___input_char_7);
		if ((((int32_t)L_20) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t768 * L_21 = ___ctx;
		NullCheck(L_21);
		L_21->___Return_0 = 1;
		FsmContext_t768 * L_22 = ___ctx;
		NullCheck(L_22);
		L_22->___NextState_1 = 1;
		return 1;
	}

IL_0091:
	{
		FsmContext_t768 * L_23 = ___ctx;
		NullCheck(L_23);
		Lexer_t760 * L_24 = (L_23->___L_2);
		NullCheck(L_24);
		int32_t L_25 = (L_24->___input_char_7);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (((int32_t)((int32_t)L_26-(int32_t)((int32_t)44))) == 0)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)((int32_t)44))) == 1)
		{
			goto IL_00b2;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)((int32_t)44))) == 2)
		{
			goto IL_00f2;
		}
	}

IL_00b2:
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)69))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)101))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)125))))
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_013e;
	}

IL_00d7:
	{
		FsmContext_t768 * L_31 = ___ctx;
		NullCheck(L_31);
		Lexer_t760 * L_32 = (L_31->___L_2);
		NullCheck(L_32);
		Lexer_UngetChar_m4050(L_32, /*hidden argument*/NULL);
		FsmContext_t768 * L_33 = ___ctx;
		NullCheck(L_33);
		L_33->___Return_0 = 1;
		FsmContext_t768 * L_34 = ___ctx;
		NullCheck(L_34);
		L_34->___NextState_1 = 1;
		return 1;
	}

IL_00f2:
	{
		FsmContext_t768 * L_35 = ___ctx;
		NullCheck(L_35);
		Lexer_t760 * L_36 = (L_35->___L_2);
		NullCheck(L_36);
		StringBuilder_t440 * L_37 = (L_36->___string_buffer_10);
		FsmContext_t768 * L_38 = ___ctx;
		NullCheck(L_38);
		Lexer_t760 * L_39 = (L_38->___L_2);
		NullCheck(L_39);
		int32_t L_40 = (L_39->___input_char_7);
		NullCheck(L_37);
		StringBuilder_Append_m4116(L_37, (((int32_t)((uint16_t)L_40))), /*hidden argument*/NULL);
		FsmContext_t768 * L_41 = ___ctx;
		NullCheck(L_41);
		L_41->___NextState_1 = 5;
		return 1;
	}

IL_0118:
	{
		FsmContext_t768 * L_42 = ___ctx;
		NullCheck(L_42);
		Lexer_t760 * L_43 = (L_42->___L_2);
		NullCheck(L_43);
		StringBuilder_t440 * L_44 = (L_43->___string_buffer_10);
		FsmContext_t768 * L_45 = ___ctx;
		NullCheck(L_45);
		Lexer_t760 * L_46 = (L_45->___L_2);
		NullCheck(L_46);
		int32_t L_47 = (L_46->___input_char_7);
		NullCheck(L_44);
		StringBuilder_Append_m4116(L_44, (((int32_t)((uint16_t)L_47))), /*hidden argument*/NULL);
		FsmContext_t768 * L_48 = ___ctx;
		NullCheck(L_48);
		L_48->___NextState_1 = 7;
		return 1;
	}

IL_013e:
	{
		return 0;
	}

IL_0140:
	{
		FsmContext_t768 * L_49 = ___ctx;
		NullCheck(L_49);
		Lexer_t760 * L_50 = (L_49->___L_2);
		NullCheck(L_50);
		bool L_51 = Lexer_GetChar_m4047(L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C" bool Lexer_State4_m4022 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t768 * L_5 = ___ctx;
		NullCheck(L_5);
		Lexer_t760 * L_6 = (L_5->___L_2);
		NullCheck(L_6);
		int32_t L_7 = (L_6->___input_char_7);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)9))))
		{
			goto IL_0052;
		}
	}
	{
		FsmContext_t768 * L_8 = ___ctx;
		NullCheck(L_8);
		Lexer_t760 * L_9 = (L_8->___L_2);
		NullCheck(L_9);
		int32_t L_10 = (L_9->___input_char_7);
		if ((((int32_t)L_10) > ((int32_t)((int32_t)13))))
		{
			goto IL_0052;
		}
	}

IL_0042:
	{
		FsmContext_t768 * L_11 = ___ctx;
		NullCheck(L_11);
		L_11->___Return_0 = 1;
		FsmContext_t768 * L_12 = ___ctx;
		NullCheck(L_12);
		L_12->___NextState_1 = 1;
		return 1;
	}

IL_0052:
	{
		FsmContext_t768 * L_13 = ___ctx;
		NullCheck(L_13);
		Lexer_t760 * L_14 = (L_13->___L_2);
		NullCheck(L_14);
		int32_t L_15 = (L_14->___input_char_7);
		V_0 = L_15;
		int32_t L_16 = V_0;
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)44))) == 0)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)44))) == 1)
		{
			goto IL_0073;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)44))) == 2)
		{
			goto IL_00b3;
		}
	}

IL_0073:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)69))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)93))))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)101))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)125))))
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00ff;
	}

IL_0098:
	{
		FsmContext_t768 * L_21 = ___ctx;
		NullCheck(L_21);
		Lexer_t760 * L_22 = (L_21->___L_2);
		NullCheck(L_22);
		Lexer_UngetChar_m4050(L_22, /*hidden argument*/NULL);
		FsmContext_t768 * L_23 = ___ctx;
		NullCheck(L_23);
		L_23->___Return_0 = 1;
		FsmContext_t768 * L_24 = ___ctx;
		NullCheck(L_24);
		L_24->___NextState_1 = 1;
		return 1;
	}

IL_00b3:
	{
		FsmContext_t768 * L_25 = ___ctx;
		NullCheck(L_25);
		Lexer_t760 * L_26 = (L_25->___L_2);
		NullCheck(L_26);
		StringBuilder_t440 * L_27 = (L_26->___string_buffer_10);
		FsmContext_t768 * L_28 = ___ctx;
		NullCheck(L_28);
		Lexer_t760 * L_29 = (L_28->___L_2);
		NullCheck(L_29);
		int32_t L_30 = (L_29->___input_char_7);
		NullCheck(L_27);
		StringBuilder_Append_m4116(L_27, (((int32_t)((uint16_t)L_30))), /*hidden argument*/NULL);
		FsmContext_t768 * L_31 = ___ctx;
		NullCheck(L_31);
		L_31->___NextState_1 = 5;
		return 1;
	}

IL_00d9:
	{
		FsmContext_t768 * L_32 = ___ctx;
		NullCheck(L_32);
		Lexer_t760 * L_33 = (L_32->___L_2);
		NullCheck(L_33);
		StringBuilder_t440 * L_34 = (L_33->___string_buffer_10);
		FsmContext_t768 * L_35 = ___ctx;
		NullCheck(L_35);
		Lexer_t760 * L_36 = (L_35->___L_2);
		NullCheck(L_36);
		int32_t L_37 = (L_36->___input_char_7);
		NullCheck(L_34);
		StringBuilder_Append_m4116(L_34, (((int32_t)((uint16_t)L_37))), /*hidden argument*/NULL);
		FsmContext_t768 * L_38 = ___ctx;
		NullCheck(L_38);
		L_38->___NextState_1 = 7;
		return 1;
	}

IL_00ff:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C" bool Lexer_State5_m4023 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t768 * L_5 = ___ctx;
		NullCheck(L_5);
		Lexer_t760 * L_6 = (L_5->___L_2);
		NullCheck(L_6);
		int32_t L_7 = (L_6->___input_char_7);
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t768 * L_8 = ___ctx;
		NullCheck(L_8);
		Lexer_t760 * L_9 = (L_8->___L_2);
		NullCheck(L_9);
		StringBuilder_t440 * L_10 = (L_9->___string_buffer_10);
		FsmContext_t768 * L_11 = ___ctx;
		NullCheck(L_11);
		Lexer_t760 * L_12 = (L_11->___L_2);
		NullCheck(L_12);
		int32_t L_13 = (L_12->___input_char_7);
		NullCheck(L_10);
		StringBuilder_Append_m4116(L_10, (((int32_t)((uint16_t)L_13))), /*hidden argument*/NULL);
		FsmContext_t768 * L_14 = ___ctx;
		NullCheck(L_14);
		L_14->___NextState_1 = 6;
		return 1;
	}

IL_0056:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C" bool Lexer_State6_m4024 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_010d;
	}

IL_0005:
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___input_char_7);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t768 * L_3 = ___ctx;
		NullCheck(L_3);
		Lexer_t760 * L_4 = (L_3->___L_2);
		NullCheck(L_4);
		int32_t L_5 = (L_4->___input_char_7);
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		Lexer_t760 * L_7 = (L_6->___L_2);
		NullCheck(L_7);
		StringBuilder_t440 * L_8 = (L_7->___string_buffer_10);
		FsmContext_t768 * L_9 = ___ctx;
		NullCheck(L_9);
		Lexer_t760 * L_10 = (L_9->___L_2);
		NullCheck(L_10);
		int32_t L_11 = (L_10->___input_char_7);
		NullCheck(L_8);
		StringBuilder_Append_m4116(L_8, (((int32_t)((uint16_t)L_11))), /*hidden argument*/NULL);
		goto IL_010d;
	}

IL_004b:
	{
		FsmContext_t768 * L_12 = ___ctx;
		NullCheck(L_12);
		Lexer_t760 * L_13 = (L_12->___L_2);
		NullCheck(L_13);
		int32_t L_14 = (L_13->___input_char_7);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t768 * L_15 = ___ctx;
		NullCheck(L_15);
		Lexer_t760 * L_16 = (L_15->___L_2);
		NullCheck(L_16);
		int32_t L_17 = (L_16->___input_char_7);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t768 * L_18 = ___ctx;
		NullCheck(L_18);
		Lexer_t760 * L_19 = (L_18->___L_2);
		NullCheck(L_19);
		int32_t L_20 = (L_19->___input_char_7);
		if ((((int32_t)L_20) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t768 * L_21 = ___ctx;
		NullCheck(L_21);
		L_21->___Return_0 = 1;
		FsmContext_t768 * L_22 = ___ctx;
		NullCheck(L_22);
		L_22->___NextState_1 = 1;
		return 1;
	}

IL_0091:
	{
		FsmContext_t768 * L_23 = ___ctx;
		NullCheck(L_23);
		Lexer_t760 * L_24 = (L_23->___L_2);
		NullCheck(L_24);
		int32_t L_25 = (L_24->___input_char_7);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)69))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)101))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)125))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_010b;
	}

IL_00ca:
	{
		FsmContext_t768 * L_31 = ___ctx;
		NullCheck(L_31);
		Lexer_t760 * L_32 = (L_31->___L_2);
		NullCheck(L_32);
		Lexer_UngetChar_m4050(L_32, /*hidden argument*/NULL);
		FsmContext_t768 * L_33 = ___ctx;
		NullCheck(L_33);
		L_33->___Return_0 = 1;
		FsmContext_t768 * L_34 = ___ctx;
		NullCheck(L_34);
		L_34->___NextState_1 = 1;
		return 1;
	}

IL_00e5:
	{
		FsmContext_t768 * L_35 = ___ctx;
		NullCheck(L_35);
		Lexer_t760 * L_36 = (L_35->___L_2);
		NullCheck(L_36);
		StringBuilder_t440 * L_37 = (L_36->___string_buffer_10);
		FsmContext_t768 * L_38 = ___ctx;
		NullCheck(L_38);
		Lexer_t760 * L_39 = (L_38->___L_2);
		NullCheck(L_39);
		int32_t L_40 = (L_39->___input_char_7);
		NullCheck(L_37);
		StringBuilder_Append_m4116(L_37, (((int32_t)((uint16_t)L_40))), /*hidden argument*/NULL);
		FsmContext_t768 * L_41 = ___ctx;
		NullCheck(L_41);
		L_41->___NextState_1 = 7;
		return 1;
	}

IL_010b:
	{
		return 0;
	}

IL_010d:
	{
		FsmContext_t768 * L_42 = ___ctx;
		NullCheck(L_42);
		Lexer_t760 * L_43 = (L_42->___L_2);
		NullCheck(L_43);
		bool L_44 = Lexer_GetChar_m4047(L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C" bool Lexer_State7_m4025 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t768 * L_5 = ___ctx;
		NullCheck(L_5);
		Lexer_t760 * L_6 = (L_5->___L_2);
		NullCheck(L_6);
		int32_t L_7 = (L_6->___input_char_7);
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t768 * L_8 = ___ctx;
		NullCheck(L_8);
		Lexer_t760 * L_9 = (L_8->___L_2);
		NullCheck(L_9);
		StringBuilder_t440 * L_10 = (L_9->___string_buffer_10);
		FsmContext_t768 * L_11 = ___ctx;
		NullCheck(L_11);
		Lexer_t760 * L_12 = (L_11->___L_2);
		NullCheck(L_12);
		int32_t L_13 = (L_12->___input_char_7);
		NullCheck(L_10);
		StringBuilder_Append_m4116(L_10, (((int32_t)((uint16_t)L_13))), /*hidden argument*/NULL);
		FsmContext_t768 * L_14 = ___ctx;
		NullCheck(L_14);
		L_14->___NextState_1 = 8;
		return 1;
	}

IL_0056:
	{
		FsmContext_t768 * L_15 = ___ctx;
		NullCheck(L_15);
		Lexer_t760 * L_16 = (L_15->___L_2);
		NullCheck(L_16);
		int32_t L_17 = (L_16->___input_char_7);
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)43))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)45))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_009d;
	}

IL_0077:
	{
		FsmContext_t768 * L_20 = ___ctx;
		NullCheck(L_20);
		Lexer_t760 * L_21 = (L_20->___L_2);
		NullCheck(L_21);
		StringBuilder_t440 * L_22 = (L_21->___string_buffer_10);
		FsmContext_t768 * L_23 = ___ctx;
		NullCheck(L_23);
		Lexer_t760 * L_24 = (L_23->___L_2);
		NullCheck(L_24);
		int32_t L_25 = (L_24->___input_char_7);
		NullCheck(L_22);
		StringBuilder_Append_m4116(L_22, (((int32_t)((uint16_t)L_25))), /*hidden argument*/NULL);
		FsmContext_t768 * L_26 = ___ctx;
		NullCheck(L_26);
		L_26->___NextState_1 = 8;
		return 1;
	}

IL_009d:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C" bool Lexer_State8_m4026 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_00d7;
	}

IL_0005:
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___input_char_7);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t768 * L_3 = ___ctx;
		NullCheck(L_3);
		Lexer_t760 * L_4 = (L_3->___L_2);
		NullCheck(L_4);
		int32_t L_5 = (L_4->___input_char_7);
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		Lexer_t760 * L_7 = (L_6->___L_2);
		NullCheck(L_7);
		StringBuilder_t440 * L_8 = (L_7->___string_buffer_10);
		FsmContext_t768 * L_9 = ___ctx;
		NullCheck(L_9);
		Lexer_t760 * L_10 = (L_9->___L_2);
		NullCheck(L_10);
		int32_t L_11 = (L_10->___input_char_7);
		NullCheck(L_8);
		StringBuilder_Append_m4116(L_8, (((int32_t)((uint16_t)L_11))), /*hidden argument*/NULL);
		goto IL_00d7;
	}

IL_004b:
	{
		FsmContext_t768 * L_12 = ___ctx;
		NullCheck(L_12);
		Lexer_t760 * L_13 = (L_12->___L_2);
		NullCheck(L_13);
		int32_t L_14 = (L_13->___input_char_7);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t768 * L_15 = ___ctx;
		NullCheck(L_15);
		Lexer_t760 * L_16 = (L_15->___L_2);
		NullCheck(L_16);
		int32_t L_17 = (L_16->___input_char_7);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t768 * L_18 = ___ctx;
		NullCheck(L_18);
		Lexer_t760 * L_19 = (L_18->___L_2);
		NullCheck(L_19);
		int32_t L_20 = (L_19->___input_char_7);
		if ((((int32_t)L_20) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t768 * L_21 = ___ctx;
		NullCheck(L_21);
		L_21->___Return_0 = 1;
		FsmContext_t768 * L_22 = ___ctx;
		NullCheck(L_22);
		L_22->___NextState_1 = 1;
		return 1;
	}

IL_0091:
	{
		FsmContext_t768 * L_23 = ___ctx;
		NullCheck(L_23);
		Lexer_t760 * L_24 = (L_23->___L_2);
		NullCheck(L_24);
		int32_t L_25 = (L_24->___input_char_7);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)125))))
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00d5;
	}

IL_00ba:
	{
		FsmContext_t768 * L_29 = ___ctx;
		NullCheck(L_29);
		Lexer_t760 * L_30 = (L_29->___L_2);
		NullCheck(L_30);
		Lexer_UngetChar_m4050(L_30, /*hidden argument*/NULL);
		FsmContext_t768 * L_31 = ___ctx;
		NullCheck(L_31);
		L_31->___Return_0 = 1;
		FsmContext_t768 * L_32 = ___ctx;
		NullCheck(L_32);
		L_32->___NextState_1 = 1;
		return 1;
	}

IL_00d5:
	{
		return 0;
	}

IL_00d7:
	{
		FsmContext_t768 * L_33 = ___ctx;
		NullCheck(L_33);
		Lexer_t760 * L_34 = (L_33->___L_2);
		NullCheck(L_34);
		bool L_35 = Lexer_GetChar_m4047(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C" bool Lexer_State9_m4027 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)114))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)10);
		return 1;
	}

IL_002f:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C" bool Lexer_State10_m4028 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)117))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)11);
		return 1;
	}

IL_002f:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C" bool Lexer_State11_m4029 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)101))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___Return_0 = 1;
		FsmContext_t768 * L_7 = ___ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		return 1;
	}

IL_0035:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C" bool Lexer_State12_m4030 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)97))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)13);
		return 1;
	}

IL_002f:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C" bool Lexer_State13_m4031 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)14);
		return 1;
	}

IL_002f:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C" bool Lexer_State14_m4032 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)115))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)15);
		return 1;
	}

IL_002f:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C" bool Lexer_State15_m4033 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)101))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___Return_0 = 1;
		FsmContext_t768 * L_7 = ___ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		return 1;
	}

IL_0035:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C" bool Lexer_State16_m4034 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)117))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)17);
		return 1;
	}

IL_002f:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C" bool Lexer_State17_m4035 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)18);
		return 1;
	}

IL_002f:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C" bool Lexer_State18_m4036 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___Return_0 = 1;
		FsmContext_t768 * L_7 = ___ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		return 1;
	}

IL_0035:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C" bool Lexer_State19_m4037 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0076;
	}

IL_0005:
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___input_char_7);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_0054;
	}

IL_0026:
	{
		FsmContext_t768 * L_5 = ___ctx;
		NullCheck(L_5);
		Lexer_t760 * L_6 = (L_5->___L_2);
		NullCheck(L_6);
		Lexer_UngetChar_m4050(L_6, /*hidden argument*/NULL);
		FsmContext_t768 * L_7 = ___ctx;
		NullCheck(L_7);
		L_7->___Return_0 = 1;
		FsmContext_t768 * L_8 = ___ctx;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)20);
		return 1;
	}

IL_0042:
	{
		FsmContext_t768 * L_9 = ___ctx;
		NullCheck(L_9);
		L_9->___StateStack_3 = ((int32_t)19);
		FsmContext_t768 * L_10 = ___ctx;
		NullCheck(L_10);
		L_10->___NextState_1 = ((int32_t)21);
		return 1;
	}

IL_0054:
	{
		FsmContext_t768 * L_11 = ___ctx;
		NullCheck(L_11);
		Lexer_t760 * L_12 = (L_11->___L_2);
		NullCheck(L_12);
		StringBuilder_t440 * L_13 = (L_12->___string_buffer_10);
		FsmContext_t768 * L_14 = ___ctx;
		NullCheck(L_14);
		Lexer_t760 * L_15 = (L_14->___L_2);
		NullCheck(L_15);
		int32_t L_16 = (L_15->___input_char_7);
		NullCheck(L_13);
		StringBuilder_Append_m4116(L_13, (((int32_t)((uint16_t)L_16))), /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_0076:
	{
		FsmContext_t768 * L_17 = ___ctx;
		NullCheck(L_17);
		Lexer_t760 * L_18 = (L_17->___L_2);
		NullCheck(L_18);
		bool L_19 = Lexer_GetChar_m4047(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C" bool Lexer_State20_m4038 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___Return_0 = 1;
		FsmContext_t768 * L_7 = ___ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		return 1;
	}

IL_0035:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern TypeInfo* Lexer_t760_il2cpp_TypeInfo_var;
extern "C" bool Lexer_State21_m4039 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Lexer_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)114))) == 0)
		{
			goto IL_0078;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)114))) == 1)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)114))) == 2)
		{
			goto IL_0078;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)114))) == 3)
		{
			goto IL_006e;
		}
	}

IL_0031:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)39))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)47))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)98))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)102))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)110))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_00a7;
	}

IL_006e:
	{
		FsmContext_t768 * L_13 = ___ctx;
		NullCheck(L_13);
		L_13->___NextState_1 = ((int32_t)22);
		return 1;
	}

IL_0078:
	{
		FsmContext_t768 * L_14 = ___ctx;
		NullCheck(L_14);
		Lexer_t760 * L_15 = (L_14->___L_2);
		NullCheck(L_15);
		StringBuilder_t440 * L_16 = (L_15->___string_buffer_10);
		FsmContext_t768 * L_17 = ___ctx;
		NullCheck(L_17);
		Lexer_t760 * L_18 = (L_17->___L_2);
		NullCheck(L_18);
		int32_t L_19 = (L_18->___input_char_7);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		uint16_t L_20 = Lexer_ProcessEscChar_m4018(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m4116(L_16, L_20, /*hidden argument*/NULL);
		FsmContext_t768 * L_21 = ___ctx;
		FsmContext_t768 * L_22 = ___ctx;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___StateStack_3);
		NullCheck(L_21);
		L_21->___NextState_1 = L_23;
		return 1;
	}

IL_00a7:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern TypeInfo* Lexer_t760_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t709_il2cpp_TypeInfo_var;
extern "C" bool Lexer_State22_m4040 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Lexer_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		Convert_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)4096);
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		L_1->___unichar_13 = 0;
		goto IL_00ef;
	}

IL_0019:
	{
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_003d;
		}
	}
	{
		FsmContext_t768 * L_5 = ___ctx;
		NullCheck(L_5);
		Lexer_t760 * L_6 = (L_5->___L_2);
		NullCheck(L_6);
		int32_t L_7 = (L_6->___input_char_7);
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0085;
		}
	}

IL_003d:
	{
		FsmContext_t768 * L_8 = ___ctx;
		NullCheck(L_8);
		Lexer_t760 * L_9 = (L_8->___L_2);
		NullCheck(L_9);
		int32_t L_10 = (L_9->___input_char_7);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_0061;
		}
	}
	{
		FsmContext_t768 * L_11 = ___ctx;
		NullCheck(L_11);
		Lexer_t760 * L_12 = (L_11->___L_2);
		NullCheck(L_12);
		int32_t L_13 = (L_12->___input_char_7);
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0085;
		}
	}

IL_0061:
	{
		FsmContext_t768 * L_14 = ___ctx;
		NullCheck(L_14);
		Lexer_t760 * L_15 = (L_14->___L_2);
		NullCheck(L_15);
		int32_t L_16 = (L_15->___input_char_7);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00ed;
		}
	}
	{
		FsmContext_t768 * L_17 = ___ctx;
		NullCheck(L_17);
		Lexer_t760 * L_18 = (L_17->___L_2);
		NullCheck(L_18);
		int32_t L_19 = (L_18->___input_char_7);
		if ((((int32_t)L_19) > ((int32_t)((int32_t)102))))
		{
			goto IL_00ed;
		}
	}

IL_0085:
	{
		FsmContext_t768 * L_20 = ___ctx;
		NullCheck(L_20);
		Lexer_t760 * L_21 = (L_20->___L_2);
		Lexer_t760 * L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___unichar_13);
		FsmContext_t768 * L_24 = ___ctx;
		NullCheck(L_24);
		Lexer_t760 * L_25 = (L_24->___L_2);
		NullCheck(L_25);
		int32_t L_26 = (L_25->___input_char_7);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		int32_t L_27 = Lexer_HexValue_m4016(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		NullCheck(L_22);
		L_22->___unichar_13 = ((int32_t)((int32_t)L_23+(int32_t)((int32_t)((int32_t)L_27*(int32_t)L_28))));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_1;
		V_1 = ((int32_t)((int32_t)L_30/(int32_t)((int32_t)16)));
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_00e8;
		}
	}
	{
		FsmContext_t768 * L_32 = ___ctx;
		NullCheck(L_32);
		Lexer_t760 * L_33 = (L_32->___L_2);
		NullCheck(L_33);
		StringBuilder_t440 * L_34 = (L_33->___string_buffer_10);
		FsmContext_t768 * L_35 = ___ctx;
		NullCheck(L_35);
		Lexer_t760 * L_36 = (L_35->___L_2);
		NullCheck(L_36);
		int32_t L_37 = (L_36->___unichar_13);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t709_il2cpp_TypeInfo_var);
		uint16_t L_38 = Convert_ToChar_m4115(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_Append_m4116(L_34, L_38, /*hidden argument*/NULL);
		FsmContext_t768 * L_39 = ___ctx;
		FsmContext_t768 * L_40 = ___ctx;
		NullCheck(L_40);
		int32_t L_41 = (L_40->___StateStack_3);
		NullCheck(L_39);
		L_39->___NextState_1 = L_41;
		return 1;
	}

IL_00e8:
	{
		goto IL_00ef;
	}

IL_00ed:
	{
		return 0;
	}

IL_00ef:
	{
		FsmContext_t768 * L_42 = ___ctx;
		NullCheck(L_42);
		Lexer_t760 * L_43 = (L_42->___L_2);
		NullCheck(L_43);
		bool L_44 = Lexer_GetChar_m4047(L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0019;
		}
	}
	{
		return 1;
	}
}
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C" bool Lexer_State23_m4041 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0076;
	}

IL_0005:
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___input_char_7);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_0054;
	}

IL_0026:
	{
		FsmContext_t768 * L_5 = ___ctx;
		NullCheck(L_5);
		Lexer_t760 * L_6 = (L_5->___L_2);
		NullCheck(L_6);
		Lexer_UngetChar_m4050(L_6, /*hidden argument*/NULL);
		FsmContext_t768 * L_7 = ___ctx;
		NullCheck(L_7);
		L_7->___Return_0 = 1;
		FsmContext_t768 * L_8 = ___ctx;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)24);
		return 1;
	}

IL_0042:
	{
		FsmContext_t768 * L_9 = ___ctx;
		NullCheck(L_9);
		L_9->___StateStack_3 = ((int32_t)23);
		FsmContext_t768 * L_10 = ___ctx;
		NullCheck(L_10);
		L_10->___NextState_1 = ((int32_t)21);
		return 1;
	}

IL_0054:
	{
		FsmContext_t768 * L_11 = ___ctx;
		NullCheck(L_11);
		Lexer_t760 * L_12 = (L_11->___L_2);
		NullCheck(L_12);
		StringBuilder_t440 * L_13 = (L_12->___string_buffer_10);
		FsmContext_t768 * L_14 = ___ctx;
		NullCheck(L_14);
		Lexer_t760 * L_15 = (L_14->___L_2);
		NullCheck(L_15);
		int32_t L_16 = (L_15->___input_char_7);
		NullCheck(L_13);
		StringBuilder_Append_m4116(L_13, (((int32_t)((uint16_t)L_16))), /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_0076:
	{
		FsmContext_t768 * L_17 = ___ctx;
		NullCheck(L_17);
		Lexer_t760 * L_18 = (L_17->___L_2);
		NullCheck(L_18);
		bool L_19 = Lexer_GetChar_m4047(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C" bool Lexer_State24_m4042 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0042;
	}

IL_0025:
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		Lexer_t760 * L_7 = (L_6->___L_2);
		NullCheck(L_7);
		L_7->___input_char_7 = ((int32_t)34);
		FsmContext_t768 * L_8 = ___ctx;
		NullCheck(L_8);
		L_8->___Return_0 = 1;
		FsmContext_t768 * L_9 = ___ctx;
		NullCheck(L_9);
		L_9->___NextState_1 = 1;
		return 1;
	}

IL_0042:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C" bool Lexer_State25_m4043 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		Lexer_GetChar_m4047(L_1, /*hidden argument*/NULL);
		FsmContext_t768 * L_2 = ___ctx;
		NullCheck(L_2);
		Lexer_t760 * L_3 = (L_2->___L_2);
		NullCheck(L_3);
		int32_t L_4 = (L_3->___input_char_7);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)42))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)47))))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_0041;
	}

IL_002d:
	{
		FsmContext_t768 * L_7 = ___ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)27);
		return 1;
	}

IL_0037:
	{
		FsmContext_t768 * L_8 = ___ctx;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)26);
		return 1;
	}

IL_0041:
	{
		return 0;
	}
}
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C" bool Lexer_State26_m4044 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	{
		goto IL_0020;
	}

IL_0005:
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___input_char_7);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0020;
		}
	}
	{
		FsmContext_t768 * L_3 = ___ctx;
		NullCheck(L_3);
		L_3->___NextState_1 = 1;
		return 1;
	}

IL_0020:
	{
		FsmContext_t768 * L_4 = ___ctx;
		NullCheck(L_4);
		Lexer_t760 * L_5 = (L_4->___L_2);
		NullCheck(L_5);
		bool L_6 = Lexer_GetChar_m4047(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C" bool Lexer_State27_m4045 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	{
		goto IL_0021;
	}

IL_0005:
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___input_char_7);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0021;
		}
	}
	{
		FsmContext_t768 * L_3 = ___ctx;
		NullCheck(L_3);
		L_3->___NextState_1 = ((int32_t)28);
		return 1;
	}

IL_0021:
	{
		FsmContext_t768 * L_4 = ___ctx;
		NullCheck(L_4);
		Lexer_t760 * L_5 = (L_4->___L_2);
		NullCheck(L_5);
		bool L_6 = Lexer_GetChar_m4047(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C" bool Lexer_State28_m4046 (Object_t * __this /* static, unused */, FsmContext_t768 * ___ctx, const MethodInfo* method)
{
	{
		goto IL_0041;
	}

IL_0005:
	{
		FsmContext_t768 * L_0 = ___ctx;
		NullCheck(L_0);
		Lexer_t760 * L_1 = (L_0->___L_2);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___input_char_7);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0041;
	}

IL_001c:
	{
		FsmContext_t768 * L_3 = ___ctx;
		NullCheck(L_3);
		Lexer_t760 * L_4 = (L_3->___L_2);
		NullCheck(L_4);
		int32_t L_5 = (L_4->___input_char_7);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0037;
		}
	}
	{
		FsmContext_t768 * L_6 = ___ctx;
		NullCheck(L_6);
		L_6->___NextState_1 = 1;
		return 1;
	}

IL_0037:
	{
		FsmContext_t768 * L_7 = ___ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)27);
		return 1;
	}

IL_0041:
	{
		FsmContext_t768 * L_8 = ___ctx;
		NullCheck(L_8);
		Lexer_t760 * L_9 = (L_8->___L_2);
		NullCheck(L_9);
		bool L_10 = Lexer_GetChar_m4047(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
// System.Boolean LitJson.Lexer::GetChar()
extern "C" bool Lexer_GetChar_m4047 (Lexer_t760 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Lexer_NextChar_m4048(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->___input_char_7 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		return 1;
	}

IL_0017:
	{
		__this->___end_of_input_4 = 1;
		return 0;
	}
}
// System.Int32 LitJson.Lexer::NextChar()
extern "C" int32_t Lexer_NextChar_m4048 (Lexer_t760 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___input_buffer_6);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = (__this->___input_buffer_6);
		V_0 = L_1;
		__this->___input_buffer_6 = 0;
		int32_t L_2 = V_0;
		return L_2;
	}

IL_001b:
	{
		TextReader_t761 * L_3 = (__this->___reader_8);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.Lexer::NextToken()
extern TypeInfo* Lexer_t760_il2cpp_TypeInfo_var;
extern TypeInfo* JsonException_t739_il2cpp_TypeInfo_var;
extern "C" bool Lexer_NextToken_m4049 (Lexer_t760 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Lexer_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		JsonException_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	StateHandler_t769 * V_0 = {0};
	{
		FsmContext_t768 * L_0 = (__this->___fsm_context_5);
		NullCheck(L_0);
		L_0->___Return_0 = 0;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		StateHandlerU5BU5D_t770* L_1 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___fsm_handler_table_1;
		int32_t L_2 = (__this->___state_9);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		V_0 = (*(StateHandler_t769 **)(StateHandler_t769 **)SZArrayLdElema(L_1, L_3, sizeof(StateHandler_t769 *)));
		StateHandler_t769 * L_4 = V_0;
		FsmContext_t768 * L_5 = (__this->___fsm_context_5);
		NullCheck(L_4);
		bool L_6 = StateHandler_Invoke_m4008(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_7 = (__this->___input_char_7);
		JsonException_t739 * L_8 = (JsonException_t739 *)il2cpp_codegen_object_new (JsonException_t739_il2cpp_TypeInfo_var);
		JsonException__ctor_m3936(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0038:
	{
		bool L_9 = (__this->___end_of_input_4);
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		return 0;
	}

IL_0045:
	{
		FsmContext_t768 * L_10 = (__this->___fsm_context_5);
		NullCheck(L_10);
		bool L_11 = (L_10->___Return_0);
		if (!L_11)
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t440 * L_12 = (__this->___string_buffer_10);
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		__this->___string_value_11 = L_13;
		StringBuilder_t440 * L_14 = (__this->___string_buffer_10);
		StringBuilder_t440 * L_15 = (__this->___string_buffer_10);
		NullCheck(L_15);
		int32_t L_16 = StringBuilder_get_Length_m4117(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		StringBuilder_Remove_m4118(L_14, 0, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t760_il2cpp_TypeInfo_var);
		Int32U5BU5D_t61* L_17 = ((Lexer_t760_StaticFields*)Lexer_t760_il2cpp_TypeInfo_var->static_fields)->___fsm_return_table_0;
		int32_t L_18 = (__this->___state_9);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)((int32_t)L_18-(int32_t)1)));
		int32_t L_19 = ((int32_t)((int32_t)L_18-(int32_t)1));
		__this->___token_12 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_17, L_19, sizeof(int32_t)));
		int32_t L_20 = (__this->___token_12);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)65542)))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_21 = (__this->___input_char_7);
		__this->___token_12 = L_21;
	}

IL_00ae:
	{
		FsmContext_t768 * L_22 = (__this->___fsm_context_5);
		NullCheck(L_22);
		int32_t L_23 = (L_22->___NextState_1);
		__this->___state_9 = L_23;
		return 1;
	}

IL_00c1:
	{
		FsmContext_t768 * L_24 = (__this->___fsm_context_5);
		NullCheck(L_24);
		int32_t L_25 = (L_24->___NextState_1);
		__this->___state_9 = L_25;
		goto IL_000c;
	}
}
// System.Void LitJson.Lexer::UngetChar()
extern "C" void Lexer_UngetChar_m4050 (Lexer_t760 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___input_char_7);
		__this->___input_buffer_6 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
