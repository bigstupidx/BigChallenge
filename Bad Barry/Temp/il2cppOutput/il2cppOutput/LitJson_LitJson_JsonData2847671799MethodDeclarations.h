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

// LitJson.JsonData
struct JsonData_t2847671799;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Array
struct Il2CppArray;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.Collections.IList
struct IList_t1612618265;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "LitJson_LitJson_JsonData2847671799.h"
#include "mscorlib_System_Array2840145358.h"
#include "LitJson_LitJson_JsonType2848171399.h"

// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
extern "C"  int32_t JsonData_System_Collections_ICollection_get_Count_m3055399888 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool JsonData_System_Collections_ICollection_get_IsSynchronized_m856228537 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * JsonData_System_Collections_ICollection_get_SyncRoot_m620571225 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
extern "C"  bool JsonData_System_Collections_IList_get_IsFixedSize_m824924018 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
extern "C"  bool JsonData_System_Collections_IList_get_IsReadOnly_m2143187271 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * JsonData_System_Collections_IDictionary_get_Item_m2993080477 (JsonData_t2847671799 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void JsonData_System_Collections_IDictionary_set_Item_m1606342530 (JsonData_t2847671799 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * JsonData_System_Collections_IList_get_Item_m434104736 (JsonData_t2847671799 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void JsonData_System_Collections_IList_set_Item_m1995460215 (JsonData_t2847671799 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::get_Count()
extern "C"  int32_t JsonData_get_Count_m412158079 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
extern "C"  JsonData_t2847671799 * JsonData_get_Item_m4009629743 (JsonData_t2847671799 * __this, String_t* ___prop_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
extern "C"  void JsonData_set_Item_m3307919212 (JsonData_t2847671799 * __this, String_t* ___prop_name, JsonData_t2847671799 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
extern "C"  JsonData_t2847671799 * JsonData_get_Item_m253158020 (JsonData_t2847671799 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
extern "C"  void JsonData_set_Item_m1400309003 (JsonData_t2847671799 * __this, int32_t ___index, JsonData_t2847671799 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor()
extern "C"  void JsonData__ctor_m593542539 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Object)
extern "C"  void JsonData__ctor_m2642779625 (JsonData_t2847671799 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  bool JsonData_op_Explicit_m2595162308 (Il2CppObject * __this /* static, unused */, JsonData_t2847671799 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  int32_t JsonData_op_Explicit_m2826628586 (Il2CppObject * __this /* static, unused */, JsonData_t2847671799 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void JsonData_System_Collections_ICollection_CopyTo_m1119522329 (JsonData_t2847671799 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void JsonData_System_Collections_IDictionary_Add_m4028317071 (JsonData_t2847671799 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool JsonData_System_Collections_IDictionary_Contains_m750892667 (JsonData_t2847671799 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * JsonData_System_Collections_IDictionary_GetEnumerator_m2594797152 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void JsonData_System_Collections_IDictionary_Remove_m1606718912 (JsonData_t2847671799 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * JsonData_System_Collections_IEnumerable_GetEnumerator_m1548196424 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetBoolean_m1679717379 (JsonData_t2847671799 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetDouble_m3476916179 (JsonData_t2847671799 * __this, double ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetInt_m1914934244 (JsonData_t2847671799 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetLong_m4039470284 (JsonData_t2847671799 * __this, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetString_m2410757971 (JsonData_t2847671799 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
extern "C"  int32_t JsonData_System_Collections_IList_Add_m442784041 (JsonData_t2847671799 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
extern "C"  void JsonData_System_Collections_IList_Clear_m308166951 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
extern "C"  bool JsonData_System_Collections_IList_Contains_m1115183555 (JsonData_t2847671799 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t JsonData_System_Collections_IList_IndexOf_m3759264513 (JsonData_t2847671799 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void JsonData_System_Collections_IList_Insert_m2705345184 (JsonData_t2847671799 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
extern "C"  void JsonData_System_Collections_IList_Remove_m1238276744 (JsonData_t2847671799 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void JsonData_System_Collections_IList_RemoveAt_m1317229104 (JsonData_t2847671799 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
extern "C"  Il2CppObject * JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m282942264 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
extern "C"  Il2CppObject * JsonData_EnsureCollection_m467105989 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
extern "C"  Il2CppObject * JsonData_EnsureDictionary_m4167775685 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList LitJson.JsonData::EnsureList()
extern "C"  Il2CppObject * JsonData_EnsureList_m2914899205 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
extern "C"  JsonData_t2847671799 * JsonData_ToJsonData_m3725295152 (JsonData_t2847671799 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::Add(System.Object)
extern "C"  int32_t JsonData_Add_m2309120602 (JsonData_t2847671799 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
extern "C"  bool JsonData_Equals_m1775900429 (JsonData_t2847671799 * __this, JsonData_t2847671799 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
extern "C"  void JsonData_SetJsonType_m2477325084 (JsonData_t2847671799 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToString()
extern "C"  String_t* JsonData_ToString_m537105832 (JsonData_t2847671799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
