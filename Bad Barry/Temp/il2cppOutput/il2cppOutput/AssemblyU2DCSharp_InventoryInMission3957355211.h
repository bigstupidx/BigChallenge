#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ItemData>
struct List_1_t2038637174;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2279835437;
// System.String
struct String_t;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InventoryInMission
struct  InventoryInMission_t3957355211  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<ItemData> InventoryInMission::inventoryItems
	List_1_t2038637174 * ___inventoryItems_2;
	// UnityEngine.UI.Image[] InventoryInMission::itemsInGame
	ImageU5BU5D_t2279835437* ___itemsInGame_3;
	// System.String InventoryInMission::count
	String_t* ___count_4;
	// UnityEngine.RectTransform InventoryInMission::imageRect
	RectTransform_t3317474837 * ___imageRect_5;
	// System.Single InventoryInMission::imageWidth
	float ___imageWidth_6;
	// UnityEngine.GameObject InventoryInMission::imageSlot1
	GameObject_t4012695102 * ___imageSlot1_7;
	// UnityEngine.GameObject InventoryInMission::imageSlot2
	GameObject_t4012695102 * ___imageSlot2_8;
	// UnityEngine.GameObject InventoryInMission::imageSlot3
	GameObject_t4012695102 * ___imageSlot3_9;
	// UnityEngine.GameObject InventoryInMission::amount1
	GameObject_t4012695102 * ___amount1_10;
	// UnityEngine.GameObject InventoryInMission::amount2
	GameObject_t4012695102 * ___amount2_11;
	// UnityEngine.GameObject InventoryInMission::amount3
	GameObject_t4012695102 * ___amount3_12;

public:
	inline static int32_t get_offset_of_inventoryItems_2() { return static_cast<int32_t>(offsetof(InventoryInMission_t3957355211, ___inventoryItems_2)); }
	inline List_1_t2038637174 * get_inventoryItems_2() const { return ___inventoryItems_2; }
	inline List_1_t2038637174 ** get_address_of_inventoryItems_2() { return &___inventoryItems_2; }
	inline void set_inventoryItems_2(List_1_t2038637174 * value)
	{
		___inventoryItems_2 = value;
		Il2CppCodeGenWriteBarrier(&___inventoryItems_2, value);
	}

	inline static int32_t get_offset_of_itemsInGame_3() { return static_cast<int32_t>(offsetof(InventoryInMission_t3957355211, ___itemsInGame_3)); }
	inline ImageU5BU5D_t2279835437* get_itemsInGame_3() const { return ___itemsInGame_3; }
	inline ImageU5BU5D_t2279835437** get_address_of_itemsInGame_3() { return &___itemsInGame_3; }
	inline void set_itemsInGame_3(ImageU5BU5D_t2279835437* value)
	{
		___itemsInGame_3 = value;
		Il2CppCodeGenWriteBarrier(&___itemsInGame_3, value);
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(InventoryInMission_t3957355211, ___count_4)); }
	inline String_t* get_count_4() const { return ___count_4; }
	inline String_t** get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(String_t* value)
	{
		___count_4 = value;
		Il2CppCodeGenWriteBarrier(&___count_4, value);
	}

	inline static int32_t get_offset_of_imageRect_5() { return static_cast<int32_t>(offsetof(InventoryInMission_t3957355211, ___imageRect_5)); }
	inline RectTransform_t3317474837 * get_imageRect_5() const { return ___imageRect_5; }
	inline RectTransform_t3317474837 ** get_address_of_imageRect_5() { return &___imageRect_5; }
	inline void set_imageRect_5(RectTransform_t3317474837 * value)
	{
		___imageRect_5 = value;
		Il2CppCodeGenWriteBarrier(&___imageRect_5, value);
	}

	inline static int32_t get_offset_of_imageWidth_6() { return static_cast<int32_t>(offsetof(InventoryInMission_t3957355211, ___imageWidth_6)); }
	inline float get_imageWidth_6() const { return ___imageWidth_6; }
	inline float* get_address_of_imageWidth_6() { return &___imageWidth_6; }
	inline void set_imageWidth_6(float value)
	{
		___imageWidth_6 = value;
	}

	inline static int32_t get_offset_of_imageSlot1_7() { return static_cast<int32_t>(offsetof(InventoryInMission_t3957355211, ___imageSlot1_7)); }
	inline GameObject_t4012695102 * get_imageSlot1_7() const { return ___imageSlot1_7; }
	inline GameObject_t4012695102 ** get_address_of_imageSlot1_7() { return &___imageSlot1_7; }
	inline void set_imageSlot1_7(GameObject_t4012695102 * value)
	{
		___imageSlot1_7 = value;
		Il2CppCodeGenWriteBarrier(&___imageSlot1_7, value);
	}

	inline static int32_t get_offset_of_imageSlot2_8() { return static_cast<int32_t>(offsetof(InventoryInMission_t3957355211, ___imageSlot2_8)); }
	inline GameObject_t4012695102 * get_imageSlot2_8() const { return ___imageSlot2_8; }
	inline GameObject_t4012695102 ** get_address_of_imageSlot2_8() { return &___imageSlot2_8; }
	inline void set_imageSlot2_8(GameObject_t4012695102 * value)
	{
		___imageSlot2_8 = value;
		Il2CppCodeGenWriteBarrier(&___imageSlot2_8, value);
	}

	inline static int32_t get_offset_of_imageSlot3_9() { return static_cast<int32_t>(offsetof(InventoryInMission_t3957355211, ___imageSlot3_9)); }
	inline GameObject_t4012695102 * get_imageSlot3_9() const { return ___imageSlot3_9; }
	inline GameObject_t4012695102 ** get_address_of_imageSlot3_9() { return &___imageSlot3_9; }
	inline void set_imageSlot3_9(GameObject_t4012695102 * value)
	{
		___imageSlot3_9 = value;
		Il2CppCodeGenWriteBarrier(&___imageSlot3_9, value);
	}

	inline static int32_t get_offset_of_amount1_10() { return static_cast<int32_t>(offsetof(InventoryInMission_t3957355211, ___amount1_10)); }
	inline GameObject_t4012695102 * get_amount1_10() const { return ___amount1_10; }
	inline GameObject_t4012695102 ** get_address_of_amount1_10() { return &___amount1_10; }
	inline void set_amount1_10(GameObject_t4012695102 * value)
	{
		___amount1_10 = value;
		Il2CppCodeGenWriteBarrier(&___amount1_10, value);
	}

	inline static int32_t get_offset_of_amount2_11() { return static_cast<int32_t>(offsetof(InventoryInMission_t3957355211, ___amount2_11)); }
	inline GameObject_t4012695102 * get_amount2_11() const { return ___amount2_11; }
	inline GameObject_t4012695102 ** get_address_of_amount2_11() { return &___amount2_11; }
	inline void set_amount2_11(GameObject_t4012695102 * value)
	{
		___amount2_11 = value;
		Il2CppCodeGenWriteBarrier(&___amount2_11, value);
	}

	inline static int32_t get_offset_of_amount3_12() { return static_cast<int32_t>(offsetof(InventoryInMission_t3957355211, ___amount3_12)); }
	inline GameObject_t4012695102 * get_amount3_12() const { return ___amount3_12; }
	inline GameObject_t4012695102 ** get_address_of_amount3_12() { return &___amount3_12; }
	inline void set_amount3_12(GameObject_t4012695102 * value)
	{
		___amount3_12 = value;
		Il2CppCodeGenWriteBarrier(&___amount3_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
