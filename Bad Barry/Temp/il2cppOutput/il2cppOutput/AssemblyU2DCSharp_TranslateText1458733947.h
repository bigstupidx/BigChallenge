#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TranslateText
struct  TranslateText_t1458733947  : public MonoBehaviour_t3012272455
{
public:
	// System.String TranslateText::text
	String_t* ___text_3;

public:
	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(TranslateText_t1458733947, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}
};

struct TranslateText_t1458733947_StaticFields
{
public:
	// UnityEngine.UI.Text TranslateText::textComponent
	Text_t3286458198 * ___textComponent_2;
	// UnityEngine.UI.Image TranslateText::imageComponent
	Image_t3354615620 * ___imageComponent_4;

public:
	inline static int32_t get_offset_of_textComponent_2() { return static_cast<int32_t>(offsetof(TranslateText_t1458733947_StaticFields, ___textComponent_2)); }
	inline Text_t3286458198 * get_textComponent_2() const { return ___textComponent_2; }
	inline Text_t3286458198 ** get_address_of_textComponent_2() { return &___textComponent_2; }
	inline void set_textComponent_2(Text_t3286458198 * value)
	{
		___textComponent_2 = value;
		Il2CppCodeGenWriteBarrier(&___textComponent_2, value);
	}

	inline static int32_t get_offset_of_imageComponent_4() { return static_cast<int32_t>(offsetof(TranslateText_t1458733947_StaticFields, ___imageComponent_4)); }
	inline Image_t3354615620 * get_imageComponent_4() const { return ___imageComponent_4; }
	inline Image_t3354615620 ** get_address_of_imageComponent_4() { return &___imageComponent_4; }
	inline void set_imageComponent_4(Image_t3354615620 * value)
	{
		___imageComponent_4 = value;
		Il2CppCodeGenWriteBarrier(&___imageComponent_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
