#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.CanvasGroup
struct CanvasGroup_t1295922228;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu
struct  Menu_t2394495  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Animator Menu::animator
	Animator_t792326996 * ___animator_2;
	// UnityEngine.CanvasGroup Menu::canvasGroup
	CanvasGroup_t1295922228 * ___canvasGroup_3;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(Menu_t2394495, ___animator_2)); }
	inline Animator_t792326996 * get_animator_2() const { return ___animator_2; }
	inline Animator_t792326996 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t792326996 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_canvasGroup_3() { return static_cast<int32_t>(offsetof(Menu_t2394495, ___canvasGroup_3)); }
	inline CanvasGroup_t1295922228 * get_canvasGroup_3() const { return ___canvasGroup_3; }
	inline CanvasGroup_t1295922228 ** get_address_of_canvasGroup_3() { return &___canvasGroup_3; }
	inline void set_canvasGroup_3(CanvasGroup_t1295922228 * value)
	{
		___canvasGroup_3 = value;
		Il2CppCodeGenWriteBarrier(&___canvasGroup_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
