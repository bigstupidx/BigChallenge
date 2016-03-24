#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_SystemLanguage1674836756.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LanguageDictionary
struct  LanguageDictionary_t30363182  : public Il2CppObject
{
public:

public:
};

struct LanguageDictionary_t30363182_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> LanguageDictionary::stringList
	Dictionary_2_t2606186806 * ___stringList_0;
	// UnityEngine.SystemLanguage LanguageDictionary::language
	int32_t ___language_1;

public:
	inline static int32_t get_offset_of_stringList_0() { return static_cast<int32_t>(offsetof(LanguageDictionary_t30363182_StaticFields, ___stringList_0)); }
	inline Dictionary_2_t2606186806 * get_stringList_0() const { return ___stringList_0; }
	inline Dictionary_2_t2606186806 ** get_address_of_stringList_0() { return &___stringList_0; }
	inline void set_stringList_0(Dictionary_2_t2606186806 * value)
	{
		___stringList_0 = value;
		Il2CppCodeGenWriteBarrier(&___stringList_0, value);
	}

	inline static int32_t get_offset_of_language_1() { return static_cast<int32_t>(offsetof(LanguageDictionary_t30363182_StaticFields, ___language_1)); }
	inline int32_t get_language_1() const { return ___language_1; }
	inline int32_t* get_address_of_language_1() { return &___language_1; }
	inline void set_language_1(int32_t value)
	{
		___language_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
