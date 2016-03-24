#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ListBox
struct ListBox_t1846591533;
// Item
struct Item_t2289459;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ListBox
struct  ListBox_t1846591533  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 ListBox::listBoxID
	int32_t ___listBoxID_3;
	// Item ListBox::content
	Item_t2289459 * ___content_4;
	// UnityEngine.UI.Image ListBox::contentImage
	Image_t3354615620 * ___contentImage_5;
	// UnityEngine.UI.Text ListBox::contentTitle
	Text_t3286458198 * ___contentTitle_6;
	// UnityEngine.UI.Text ListBox::contentPrice
	Text_t3286458198 * ___contentPrice_7;
	// UnityEngine.UI.Text ListBox::contentDetails
	Text_t3286458198 * ___contentDetails_8;
	// ListBox ListBox::lastListBox
	ListBox_t1846591533 * ___lastListBox_9;
	// ListBox ListBox::nextListBox
	ListBox_t1846591533 * ___nextListBox_10;
	// UnityEngine.Animator ListBox::animator
	Animator_t792326996 * ___animator_11;
	// System.Int32 ListBox::numOfListBox
	int32_t ___numOfListBox_12;
	// System.Int32 ListBox::contentID
	int32_t ___contentID_13;
	// System.Boolean ListBox::isTouchingDevice
	bool ___isTouchingDevice_14;
	// UnityEngine.Vector2 ListBox::maxWorldPos
	Vector2_t3525329788  ___maxWorldPos_15;
	// System.Single ListBox::unitWorldPosY
	float ___unitWorldPosY_16;
	// System.Single ListBox::lowerBoundWorldPosY
	float ___lowerBoundWorldPosY_17;
	// System.Single ListBox::upperBoundWorldPosY
	float ___upperBoundWorldPosY_18;
	// System.Single ListBox::rangeBoundWorldPosY
	float ___rangeBoundWorldPosY_19;
	// UnityEngine.Vector3 ListBox::slidingWorldPos
	Vector3_t3525329789  ___slidingWorldPos_20;
	// UnityEngine.Vector3 ListBox::slidingWorldPosLeft
	Vector3_t3525329789  ___slidingWorldPosLeft_21;
	// UnityEngine.Vector3 ListBox::originalLocalScale
	Vector3_t3525329789  ___originalLocalScale_22;
	// System.Boolean ListBox::keepSliding
	bool ___keepSliding_23;
	// System.Int32 ListBox::slidingFrames
	int32_t ___slidingFrames_24;
	// System.Int32 ListBox::bulletsAux
	int32_t ___bulletsAux_25;

public:
	inline static int32_t get_offset_of_listBoxID_3() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___listBoxID_3)); }
	inline int32_t get_listBoxID_3() const { return ___listBoxID_3; }
	inline int32_t* get_address_of_listBoxID_3() { return &___listBoxID_3; }
	inline void set_listBoxID_3(int32_t value)
	{
		___listBoxID_3 = value;
	}

	inline static int32_t get_offset_of_content_4() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___content_4)); }
	inline Item_t2289459 * get_content_4() const { return ___content_4; }
	inline Item_t2289459 ** get_address_of_content_4() { return &___content_4; }
	inline void set_content_4(Item_t2289459 * value)
	{
		___content_4 = value;
		Il2CppCodeGenWriteBarrier(&___content_4, value);
	}

	inline static int32_t get_offset_of_contentImage_5() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___contentImage_5)); }
	inline Image_t3354615620 * get_contentImage_5() const { return ___contentImage_5; }
	inline Image_t3354615620 ** get_address_of_contentImage_5() { return &___contentImage_5; }
	inline void set_contentImage_5(Image_t3354615620 * value)
	{
		___contentImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___contentImage_5, value);
	}

	inline static int32_t get_offset_of_contentTitle_6() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___contentTitle_6)); }
	inline Text_t3286458198 * get_contentTitle_6() const { return ___contentTitle_6; }
	inline Text_t3286458198 ** get_address_of_contentTitle_6() { return &___contentTitle_6; }
	inline void set_contentTitle_6(Text_t3286458198 * value)
	{
		___contentTitle_6 = value;
		Il2CppCodeGenWriteBarrier(&___contentTitle_6, value);
	}

	inline static int32_t get_offset_of_contentPrice_7() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___contentPrice_7)); }
	inline Text_t3286458198 * get_contentPrice_7() const { return ___contentPrice_7; }
	inline Text_t3286458198 ** get_address_of_contentPrice_7() { return &___contentPrice_7; }
	inline void set_contentPrice_7(Text_t3286458198 * value)
	{
		___contentPrice_7 = value;
		Il2CppCodeGenWriteBarrier(&___contentPrice_7, value);
	}

	inline static int32_t get_offset_of_contentDetails_8() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___contentDetails_8)); }
	inline Text_t3286458198 * get_contentDetails_8() const { return ___contentDetails_8; }
	inline Text_t3286458198 ** get_address_of_contentDetails_8() { return &___contentDetails_8; }
	inline void set_contentDetails_8(Text_t3286458198 * value)
	{
		___contentDetails_8 = value;
		Il2CppCodeGenWriteBarrier(&___contentDetails_8, value);
	}

	inline static int32_t get_offset_of_lastListBox_9() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___lastListBox_9)); }
	inline ListBox_t1846591533 * get_lastListBox_9() const { return ___lastListBox_9; }
	inline ListBox_t1846591533 ** get_address_of_lastListBox_9() { return &___lastListBox_9; }
	inline void set_lastListBox_9(ListBox_t1846591533 * value)
	{
		___lastListBox_9 = value;
		Il2CppCodeGenWriteBarrier(&___lastListBox_9, value);
	}

	inline static int32_t get_offset_of_nextListBox_10() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___nextListBox_10)); }
	inline ListBox_t1846591533 * get_nextListBox_10() const { return ___nextListBox_10; }
	inline ListBox_t1846591533 ** get_address_of_nextListBox_10() { return &___nextListBox_10; }
	inline void set_nextListBox_10(ListBox_t1846591533 * value)
	{
		___nextListBox_10 = value;
		Il2CppCodeGenWriteBarrier(&___nextListBox_10, value);
	}

	inline static int32_t get_offset_of_animator_11() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___animator_11)); }
	inline Animator_t792326996 * get_animator_11() const { return ___animator_11; }
	inline Animator_t792326996 ** get_address_of_animator_11() { return &___animator_11; }
	inline void set_animator_11(Animator_t792326996 * value)
	{
		___animator_11 = value;
		Il2CppCodeGenWriteBarrier(&___animator_11, value);
	}

	inline static int32_t get_offset_of_numOfListBox_12() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___numOfListBox_12)); }
	inline int32_t get_numOfListBox_12() const { return ___numOfListBox_12; }
	inline int32_t* get_address_of_numOfListBox_12() { return &___numOfListBox_12; }
	inline void set_numOfListBox_12(int32_t value)
	{
		___numOfListBox_12 = value;
	}

	inline static int32_t get_offset_of_contentID_13() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___contentID_13)); }
	inline int32_t get_contentID_13() const { return ___contentID_13; }
	inline int32_t* get_address_of_contentID_13() { return &___contentID_13; }
	inline void set_contentID_13(int32_t value)
	{
		___contentID_13 = value;
	}

	inline static int32_t get_offset_of_isTouchingDevice_14() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___isTouchingDevice_14)); }
	inline bool get_isTouchingDevice_14() const { return ___isTouchingDevice_14; }
	inline bool* get_address_of_isTouchingDevice_14() { return &___isTouchingDevice_14; }
	inline void set_isTouchingDevice_14(bool value)
	{
		___isTouchingDevice_14 = value;
	}

	inline static int32_t get_offset_of_maxWorldPos_15() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___maxWorldPos_15)); }
	inline Vector2_t3525329788  get_maxWorldPos_15() const { return ___maxWorldPos_15; }
	inline Vector2_t3525329788 * get_address_of_maxWorldPos_15() { return &___maxWorldPos_15; }
	inline void set_maxWorldPos_15(Vector2_t3525329788  value)
	{
		___maxWorldPos_15 = value;
	}

	inline static int32_t get_offset_of_unitWorldPosY_16() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___unitWorldPosY_16)); }
	inline float get_unitWorldPosY_16() const { return ___unitWorldPosY_16; }
	inline float* get_address_of_unitWorldPosY_16() { return &___unitWorldPosY_16; }
	inline void set_unitWorldPosY_16(float value)
	{
		___unitWorldPosY_16 = value;
	}

	inline static int32_t get_offset_of_lowerBoundWorldPosY_17() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___lowerBoundWorldPosY_17)); }
	inline float get_lowerBoundWorldPosY_17() const { return ___lowerBoundWorldPosY_17; }
	inline float* get_address_of_lowerBoundWorldPosY_17() { return &___lowerBoundWorldPosY_17; }
	inline void set_lowerBoundWorldPosY_17(float value)
	{
		___lowerBoundWorldPosY_17 = value;
	}

	inline static int32_t get_offset_of_upperBoundWorldPosY_18() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___upperBoundWorldPosY_18)); }
	inline float get_upperBoundWorldPosY_18() const { return ___upperBoundWorldPosY_18; }
	inline float* get_address_of_upperBoundWorldPosY_18() { return &___upperBoundWorldPosY_18; }
	inline void set_upperBoundWorldPosY_18(float value)
	{
		___upperBoundWorldPosY_18 = value;
	}

	inline static int32_t get_offset_of_rangeBoundWorldPosY_19() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___rangeBoundWorldPosY_19)); }
	inline float get_rangeBoundWorldPosY_19() const { return ___rangeBoundWorldPosY_19; }
	inline float* get_address_of_rangeBoundWorldPosY_19() { return &___rangeBoundWorldPosY_19; }
	inline void set_rangeBoundWorldPosY_19(float value)
	{
		___rangeBoundWorldPosY_19 = value;
	}

	inline static int32_t get_offset_of_slidingWorldPos_20() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___slidingWorldPos_20)); }
	inline Vector3_t3525329789  get_slidingWorldPos_20() const { return ___slidingWorldPos_20; }
	inline Vector3_t3525329789 * get_address_of_slidingWorldPos_20() { return &___slidingWorldPos_20; }
	inline void set_slidingWorldPos_20(Vector3_t3525329789  value)
	{
		___slidingWorldPos_20 = value;
	}

	inline static int32_t get_offset_of_slidingWorldPosLeft_21() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___slidingWorldPosLeft_21)); }
	inline Vector3_t3525329789  get_slidingWorldPosLeft_21() const { return ___slidingWorldPosLeft_21; }
	inline Vector3_t3525329789 * get_address_of_slidingWorldPosLeft_21() { return &___slidingWorldPosLeft_21; }
	inline void set_slidingWorldPosLeft_21(Vector3_t3525329789  value)
	{
		___slidingWorldPosLeft_21 = value;
	}

	inline static int32_t get_offset_of_originalLocalScale_22() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___originalLocalScale_22)); }
	inline Vector3_t3525329789  get_originalLocalScale_22() const { return ___originalLocalScale_22; }
	inline Vector3_t3525329789 * get_address_of_originalLocalScale_22() { return &___originalLocalScale_22; }
	inline void set_originalLocalScale_22(Vector3_t3525329789  value)
	{
		___originalLocalScale_22 = value;
	}

	inline static int32_t get_offset_of_keepSliding_23() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___keepSliding_23)); }
	inline bool get_keepSliding_23() const { return ___keepSliding_23; }
	inline bool* get_address_of_keepSliding_23() { return &___keepSliding_23; }
	inline void set_keepSliding_23(bool value)
	{
		___keepSliding_23 = value;
	}

	inline static int32_t get_offset_of_slidingFrames_24() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___slidingFrames_24)); }
	inline int32_t get_slidingFrames_24() const { return ___slidingFrames_24; }
	inline int32_t* get_address_of_slidingFrames_24() { return &___slidingFrames_24; }
	inline void set_slidingFrames_24(int32_t value)
	{
		___slidingFrames_24 = value;
	}

	inline static int32_t get_offset_of_bulletsAux_25() { return static_cast<int32_t>(offsetof(ListBox_t1846591533, ___bulletsAux_25)); }
	inline int32_t get_bulletsAux_25() const { return ___bulletsAux_25; }
	inline int32_t* get_address_of_bulletsAux_25() { return &___bulletsAux_25; }
	inline void set_bulletsAux_25(int32_t value)
	{
		___bulletsAux_25 = value;
	}
};

struct ListBox_t1846591533_StaticFields
{
public:
	// ListBox ListBox::Instance
	ListBox_t1846591533 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(ListBox_t1846591533_StaticFields, ___Instance_2)); }
	inline ListBox_t1846591533 * get_Instance_2() const { return ___Instance_2; }
	inline ListBox_t1846591533 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(ListBox_t1846591533 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
