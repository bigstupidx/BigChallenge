#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ListPositionCtrl
struct ListPositionCtrl_t1746427666;
// ListBox[]
struct ListBoxU5BU5D_t1508040832;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t729687770;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ListPositionCtrl
struct  ListPositionCtrl_t1746427666  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean ListPositionCtrl::controlByButton
	bool ___controlByButton_3;
	// System.Boolean ListPositionCtrl::alignToCenter
	bool ___alignToCenter_4;
	// ListBox[] ListPositionCtrl::listBoxes
	ListBoxU5BU5D_t1508040832* ___listBoxes_5;
	// System.Single ListPositionCtrl::centerPosY
	float ___centerPosY_6;
	// System.Int32 ListPositionCtrl::selectedID
	int32_t ___selectedID_7;
	// UnityEngine.UI.Button[] ListPositionCtrl::buttons
	ButtonU5BU5D_t729687770* ___buttons_8;
	// System.Single ListPositionCtrl::divideFactor
	float ___divideFactor_9;
	// System.Int32 ListPositionCtrl::slidingFrames
	int32_t ___slidingFrames_10;
	// System.Single ListPositionCtrl::slidingFactor
	float ___slidingFactor_11;
	// System.Single ListPositionCtrl::x_pivot
	float ___x_pivot_12;
	// System.Single ListPositionCtrl::angularity
	float ___angularity_13;
	// System.Single ListPositionCtrl::scaleFactor
	float ___scaleFactor_14;
	// System.Boolean ListPositionCtrl::isTouchingDevice
	bool ___isTouchingDevice_15;
	// UnityEngine.Vector3 ListPositionCtrl::lastInputWorldPos
	Vector3_t3525329789  ___lastInputWorldPos_16;
	// UnityEngine.Vector3 ListPositionCtrl::currentInputWorldPos
	Vector3_t3525329789  ___currentInputWorldPos_17;
	// UnityEngine.Vector3 ListPositionCtrl::deltaInputWorldPos
	Vector3_t3525329789  ___deltaInputWorldPos_18;
	// System.Single ListPositionCtrl::maior
	float ___maior_19;

public:
	inline static int32_t get_offset_of_controlByButton_3() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___controlByButton_3)); }
	inline bool get_controlByButton_3() const { return ___controlByButton_3; }
	inline bool* get_address_of_controlByButton_3() { return &___controlByButton_3; }
	inline void set_controlByButton_3(bool value)
	{
		___controlByButton_3 = value;
	}

	inline static int32_t get_offset_of_alignToCenter_4() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___alignToCenter_4)); }
	inline bool get_alignToCenter_4() const { return ___alignToCenter_4; }
	inline bool* get_address_of_alignToCenter_4() { return &___alignToCenter_4; }
	inline void set_alignToCenter_4(bool value)
	{
		___alignToCenter_4 = value;
	}

	inline static int32_t get_offset_of_listBoxes_5() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___listBoxes_5)); }
	inline ListBoxU5BU5D_t1508040832* get_listBoxes_5() const { return ___listBoxes_5; }
	inline ListBoxU5BU5D_t1508040832** get_address_of_listBoxes_5() { return &___listBoxes_5; }
	inline void set_listBoxes_5(ListBoxU5BU5D_t1508040832* value)
	{
		___listBoxes_5 = value;
		Il2CppCodeGenWriteBarrier(&___listBoxes_5, value);
	}

	inline static int32_t get_offset_of_centerPosY_6() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___centerPosY_6)); }
	inline float get_centerPosY_6() const { return ___centerPosY_6; }
	inline float* get_address_of_centerPosY_6() { return &___centerPosY_6; }
	inline void set_centerPosY_6(float value)
	{
		___centerPosY_6 = value;
	}

	inline static int32_t get_offset_of_selectedID_7() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___selectedID_7)); }
	inline int32_t get_selectedID_7() const { return ___selectedID_7; }
	inline int32_t* get_address_of_selectedID_7() { return &___selectedID_7; }
	inline void set_selectedID_7(int32_t value)
	{
		___selectedID_7 = value;
	}

	inline static int32_t get_offset_of_buttons_8() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___buttons_8)); }
	inline ButtonU5BU5D_t729687770* get_buttons_8() const { return ___buttons_8; }
	inline ButtonU5BU5D_t729687770** get_address_of_buttons_8() { return &___buttons_8; }
	inline void set_buttons_8(ButtonU5BU5D_t729687770* value)
	{
		___buttons_8 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_8, value);
	}

	inline static int32_t get_offset_of_divideFactor_9() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___divideFactor_9)); }
	inline float get_divideFactor_9() const { return ___divideFactor_9; }
	inline float* get_address_of_divideFactor_9() { return &___divideFactor_9; }
	inline void set_divideFactor_9(float value)
	{
		___divideFactor_9 = value;
	}

	inline static int32_t get_offset_of_slidingFrames_10() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___slidingFrames_10)); }
	inline int32_t get_slidingFrames_10() const { return ___slidingFrames_10; }
	inline int32_t* get_address_of_slidingFrames_10() { return &___slidingFrames_10; }
	inline void set_slidingFrames_10(int32_t value)
	{
		___slidingFrames_10 = value;
	}

	inline static int32_t get_offset_of_slidingFactor_11() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___slidingFactor_11)); }
	inline float get_slidingFactor_11() const { return ___slidingFactor_11; }
	inline float* get_address_of_slidingFactor_11() { return &___slidingFactor_11; }
	inline void set_slidingFactor_11(float value)
	{
		___slidingFactor_11 = value;
	}

	inline static int32_t get_offset_of_x_pivot_12() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___x_pivot_12)); }
	inline float get_x_pivot_12() const { return ___x_pivot_12; }
	inline float* get_address_of_x_pivot_12() { return &___x_pivot_12; }
	inline void set_x_pivot_12(float value)
	{
		___x_pivot_12 = value;
	}

	inline static int32_t get_offset_of_angularity_13() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___angularity_13)); }
	inline float get_angularity_13() const { return ___angularity_13; }
	inline float* get_address_of_angularity_13() { return &___angularity_13; }
	inline void set_angularity_13(float value)
	{
		___angularity_13 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_14() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___scaleFactor_14)); }
	inline float get_scaleFactor_14() const { return ___scaleFactor_14; }
	inline float* get_address_of_scaleFactor_14() { return &___scaleFactor_14; }
	inline void set_scaleFactor_14(float value)
	{
		___scaleFactor_14 = value;
	}

	inline static int32_t get_offset_of_isTouchingDevice_15() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___isTouchingDevice_15)); }
	inline bool get_isTouchingDevice_15() const { return ___isTouchingDevice_15; }
	inline bool* get_address_of_isTouchingDevice_15() { return &___isTouchingDevice_15; }
	inline void set_isTouchingDevice_15(bool value)
	{
		___isTouchingDevice_15 = value;
	}

	inline static int32_t get_offset_of_lastInputWorldPos_16() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___lastInputWorldPos_16)); }
	inline Vector3_t3525329789  get_lastInputWorldPos_16() const { return ___lastInputWorldPos_16; }
	inline Vector3_t3525329789 * get_address_of_lastInputWorldPos_16() { return &___lastInputWorldPos_16; }
	inline void set_lastInputWorldPos_16(Vector3_t3525329789  value)
	{
		___lastInputWorldPos_16 = value;
	}

	inline static int32_t get_offset_of_currentInputWorldPos_17() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___currentInputWorldPos_17)); }
	inline Vector3_t3525329789  get_currentInputWorldPos_17() const { return ___currentInputWorldPos_17; }
	inline Vector3_t3525329789 * get_address_of_currentInputWorldPos_17() { return &___currentInputWorldPos_17; }
	inline void set_currentInputWorldPos_17(Vector3_t3525329789  value)
	{
		___currentInputWorldPos_17 = value;
	}

	inline static int32_t get_offset_of_deltaInputWorldPos_18() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___deltaInputWorldPos_18)); }
	inline Vector3_t3525329789  get_deltaInputWorldPos_18() const { return ___deltaInputWorldPos_18; }
	inline Vector3_t3525329789 * get_address_of_deltaInputWorldPos_18() { return &___deltaInputWorldPos_18; }
	inline void set_deltaInputWorldPos_18(Vector3_t3525329789  value)
	{
		___deltaInputWorldPos_18 = value;
	}

	inline static int32_t get_offset_of_maior_19() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666, ___maior_19)); }
	inline float get_maior_19() const { return ___maior_19; }
	inline float* get_address_of_maior_19() { return &___maior_19; }
	inline void set_maior_19(float value)
	{
		___maior_19 = value;
	}
};

struct ListPositionCtrl_t1746427666_StaticFields
{
public:
	// ListPositionCtrl ListPositionCtrl::Instance
	ListPositionCtrl_t1746427666 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(ListPositionCtrl_t1746427666_StaticFields, ___Instance_2)); }
	inline ListPositionCtrl_t1746427666 * get_Instance_2() const { return ___Instance_2; }
	inline ListPositionCtrl_t1746427666 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(ListPositionCtrl_t1746427666 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
