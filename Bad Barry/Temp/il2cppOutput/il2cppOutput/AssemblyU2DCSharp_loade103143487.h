#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loade
struct  loade_t103143487  : public MonoBehaviour_t3012272455
{
public:
	// System.String loade::scene
	String_t* ___scene_2;
	// System.String[] loade::texts
	StringU5BU5D_t2956870243* ___texts_3;
	// UnityEngine.UI.Text loade::loadingText
	Text_t3286458198 * ___loadingText_4;
	// UnityEngine.UI.Text loade::tip
	Text_t3286458198 * ___tip_5;
	// System.Boolean loade::tapToPlay
	bool ___tapToPlay_6;
	// UnityEngine.GameObject loade::barry
	GameObject_t4012695102 * ___barry_7;
	// UnityEngine.GameObject loade::canvas
	GameObject_t4012695102 * ___canvas_8;
	// System.Boolean loade::missions
	bool ___missions_9;

public:
	inline static int32_t get_offset_of_scene_2() { return static_cast<int32_t>(offsetof(loade_t103143487, ___scene_2)); }
	inline String_t* get_scene_2() const { return ___scene_2; }
	inline String_t** get_address_of_scene_2() { return &___scene_2; }
	inline void set_scene_2(String_t* value)
	{
		___scene_2 = value;
		Il2CppCodeGenWriteBarrier(&___scene_2, value);
	}

	inline static int32_t get_offset_of_texts_3() { return static_cast<int32_t>(offsetof(loade_t103143487, ___texts_3)); }
	inline StringU5BU5D_t2956870243* get_texts_3() const { return ___texts_3; }
	inline StringU5BU5D_t2956870243** get_address_of_texts_3() { return &___texts_3; }
	inline void set_texts_3(StringU5BU5D_t2956870243* value)
	{
		___texts_3 = value;
		Il2CppCodeGenWriteBarrier(&___texts_3, value);
	}

	inline static int32_t get_offset_of_loadingText_4() { return static_cast<int32_t>(offsetof(loade_t103143487, ___loadingText_4)); }
	inline Text_t3286458198 * get_loadingText_4() const { return ___loadingText_4; }
	inline Text_t3286458198 ** get_address_of_loadingText_4() { return &___loadingText_4; }
	inline void set_loadingText_4(Text_t3286458198 * value)
	{
		___loadingText_4 = value;
		Il2CppCodeGenWriteBarrier(&___loadingText_4, value);
	}

	inline static int32_t get_offset_of_tip_5() { return static_cast<int32_t>(offsetof(loade_t103143487, ___tip_5)); }
	inline Text_t3286458198 * get_tip_5() const { return ___tip_5; }
	inline Text_t3286458198 ** get_address_of_tip_5() { return &___tip_5; }
	inline void set_tip_5(Text_t3286458198 * value)
	{
		___tip_5 = value;
		Il2CppCodeGenWriteBarrier(&___tip_5, value);
	}

	inline static int32_t get_offset_of_tapToPlay_6() { return static_cast<int32_t>(offsetof(loade_t103143487, ___tapToPlay_6)); }
	inline bool get_tapToPlay_6() const { return ___tapToPlay_6; }
	inline bool* get_address_of_tapToPlay_6() { return &___tapToPlay_6; }
	inline void set_tapToPlay_6(bool value)
	{
		___tapToPlay_6 = value;
	}

	inline static int32_t get_offset_of_barry_7() { return static_cast<int32_t>(offsetof(loade_t103143487, ___barry_7)); }
	inline GameObject_t4012695102 * get_barry_7() const { return ___barry_7; }
	inline GameObject_t4012695102 ** get_address_of_barry_7() { return &___barry_7; }
	inline void set_barry_7(GameObject_t4012695102 * value)
	{
		___barry_7 = value;
		Il2CppCodeGenWriteBarrier(&___barry_7, value);
	}

	inline static int32_t get_offset_of_canvas_8() { return static_cast<int32_t>(offsetof(loade_t103143487, ___canvas_8)); }
	inline GameObject_t4012695102 * get_canvas_8() const { return ___canvas_8; }
	inline GameObject_t4012695102 ** get_address_of_canvas_8() { return &___canvas_8; }
	inline void set_canvas_8(GameObject_t4012695102 * value)
	{
		___canvas_8 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_8, value);
	}

	inline static int32_t get_offset_of_missions_9() { return static_cast<int32_t>(offsetof(loade_t103143487, ___missions_9)); }
	inline bool get_missions_9() const { return ___missions_9; }
	inline bool* get_address_of_missions_9() { return &___missions_9; }
	inline void set_missions_9(bool value)
	{
		___missions_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
