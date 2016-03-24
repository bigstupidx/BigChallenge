#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// GameBehavior
struct GameBehavior_t1830462596;
// UnityEngine.Canvas
struct Canvas_t3534013893;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AutoScroll
struct  AutoScroll_t1595100540  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.RectTransform AutoScroll::content
	RectTransform_t3317474837 * ___content_2;
	// System.Single AutoScroll::timer
	float ___timer_3;
	// System.Single AutoScroll::speed
	float ___speed_4;
	// System.Boolean AutoScroll::enableScroll
	bool ___enableScroll_5;
	// System.Single AutoScroll::distanceToScroll
	float ___distanceToScroll_6;
	// GameBehavior AutoScroll::behave
	GameBehavior_t1830462596 * ___behave_7;
	// UnityEngine.Canvas AutoScroll::canvas
	Canvas_t3534013893 * ___canvas_8;
	// System.Single AutoScroll::distanceScrollable
	float ___distanceScrollable_9;
	// UnityEngine.RectTransform AutoScroll::canvasRect
	RectTransform_t3317474837 * ___canvasRect_10;
	// System.Single AutoScroll::initialContentPosition
	float ___initialContentPosition_11;

public:
	inline static int32_t get_offset_of_content_2() { return static_cast<int32_t>(offsetof(AutoScroll_t1595100540, ___content_2)); }
	inline RectTransform_t3317474837 * get_content_2() const { return ___content_2; }
	inline RectTransform_t3317474837 ** get_address_of_content_2() { return &___content_2; }
	inline void set_content_2(RectTransform_t3317474837 * value)
	{
		___content_2 = value;
		Il2CppCodeGenWriteBarrier(&___content_2, value);
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(AutoScroll_t1595100540, ___timer_3)); }
	inline float get_timer_3() const { return ___timer_3; }
	inline float* get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(float value)
	{
		___timer_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(AutoScroll_t1595100540, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_enableScroll_5() { return static_cast<int32_t>(offsetof(AutoScroll_t1595100540, ___enableScroll_5)); }
	inline bool get_enableScroll_5() const { return ___enableScroll_5; }
	inline bool* get_address_of_enableScroll_5() { return &___enableScroll_5; }
	inline void set_enableScroll_5(bool value)
	{
		___enableScroll_5 = value;
	}

	inline static int32_t get_offset_of_distanceToScroll_6() { return static_cast<int32_t>(offsetof(AutoScroll_t1595100540, ___distanceToScroll_6)); }
	inline float get_distanceToScroll_6() const { return ___distanceToScroll_6; }
	inline float* get_address_of_distanceToScroll_6() { return &___distanceToScroll_6; }
	inline void set_distanceToScroll_6(float value)
	{
		___distanceToScroll_6 = value;
	}

	inline static int32_t get_offset_of_behave_7() { return static_cast<int32_t>(offsetof(AutoScroll_t1595100540, ___behave_7)); }
	inline GameBehavior_t1830462596 * get_behave_7() const { return ___behave_7; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_7() { return &___behave_7; }
	inline void set_behave_7(GameBehavior_t1830462596 * value)
	{
		___behave_7 = value;
		Il2CppCodeGenWriteBarrier(&___behave_7, value);
	}

	inline static int32_t get_offset_of_canvas_8() { return static_cast<int32_t>(offsetof(AutoScroll_t1595100540, ___canvas_8)); }
	inline Canvas_t3534013893 * get_canvas_8() const { return ___canvas_8; }
	inline Canvas_t3534013893 ** get_address_of_canvas_8() { return &___canvas_8; }
	inline void set_canvas_8(Canvas_t3534013893 * value)
	{
		___canvas_8 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_8, value);
	}

	inline static int32_t get_offset_of_distanceScrollable_9() { return static_cast<int32_t>(offsetof(AutoScroll_t1595100540, ___distanceScrollable_9)); }
	inline float get_distanceScrollable_9() const { return ___distanceScrollable_9; }
	inline float* get_address_of_distanceScrollable_9() { return &___distanceScrollable_9; }
	inline void set_distanceScrollable_9(float value)
	{
		___distanceScrollable_9 = value;
	}

	inline static int32_t get_offset_of_canvasRect_10() { return static_cast<int32_t>(offsetof(AutoScroll_t1595100540, ___canvasRect_10)); }
	inline RectTransform_t3317474837 * get_canvasRect_10() const { return ___canvasRect_10; }
	inline RectTransform_t3317474837 ** get_address_of_canvasRect_10() { return &___canvasRect_10; }
	inline void set_canvasRect_10(RectTransform_t3317474837 * value)
	{
		___canvasRect_10 = value;
		Il2CppCodeGenWriteBarrier(&___canvasRect_10, value);
	}

	inline static int32_t get_offset_of_initialContentPosition_11() { return static_cast<int32_t>(offsetof(AutoScroll_t1595100540, ___initialContentPosition_11)); }
	inline float get_initialContentPosition_11() const { return ___initialContentPosition_11; }
	inline float* get_address_of_initialContentPosition_11() { return &___initialContentPosition_11; }
	inline void set_initialContentPosition_11(float value)
	{
		___initialContentPosition_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
