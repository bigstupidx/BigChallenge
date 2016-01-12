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

// System.Security.SecurityElement
struct SecurityElement_t1247;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t868;
// System.Collections.ArrayList
struct ArrayList_t803;
// System.Text.StringBuilder
struct StringBuilder_t393;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t1684;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.SecurityElement::.ctor(System.String)
extern "C" void SecurityElement__ctor_m10226 (SecurityElement_t1247 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
extern "C" void SecurityElement__ctor_m10227 (SecurityElement_t1247 * __this, String_t* ___tag, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
extern "C" void SecurityElement__cctor_m10228 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Security.SecurityElement::get_Attributes()
extern "C" Hashtable_t868 * SecurityElement_get_Attributes_m10229 (SecurityElement_t1247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
extern "C" ArrayList_t803 * SecurityElement_get_Children_m10230 (SecurityElement_t1247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
extern "C" String_t* SecurityElement_get_Tag_m10231 (SecurityElement_t1247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Text()
extern "C" String_t* SecurityElement_get_Text_m10232 (SecurityElement_t1247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
extern "C" void SecurityElement_set_Text_m10233 (SecurityElement_t1247 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
extern "C" void SecurityElement_AddAttribute_m10234 (SecurityElement_t1247 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
extern "C" void SecurityElement_AddChild_m10235 (SecurityElement_t1247 * __this, SecurityElement_t1247 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
extern "C" String_t* SecurityElement_Escape_m10236 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
extern "C" String_t* SecurityElement_Unescape_m10237 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::FromString(System.String)
extern "C" SecurityElement_t1247 * SecurityElement_FromString_m10238 (Object_t * __this /* static, unused */, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
extern "C" bool SecurityElement_IsValidAttributeName_m10239 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
extern "C" bool SecurityElement_IsValidAttributeValue_m10240 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
extern "C" bool SecurityElement_IsValidTag_m10241 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
extern "C" bool SecurityElement_IsValidText_m10242 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
extern "C" SecurityElement_t1247 * SecurityElement_SearchForChildByTag_m10243 (SecurityElement_t1247 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
extern "C" String_t* SecurityElement_ToString_m10244 (SecurityElement_t1247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
extern "C" void SecurityElement_ToXml_m10245 (SecurityElement_t1247 * __this, StringBuilder_t393 ** ___s, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
extern "C" SecurityAttribute_t1684 * SecurityElement_GetAttribute_m10246 (SecurityElement_t1247 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
