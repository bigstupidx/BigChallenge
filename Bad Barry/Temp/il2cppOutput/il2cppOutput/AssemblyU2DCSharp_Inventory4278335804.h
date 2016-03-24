#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t1830462596;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// ItemDatabase
struct ItemDatabase_t2582217166;
// System.Collections.Generic.List`1<Item>
struct List_1_t799248428;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t4084811832;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Inventory
struct  Inventory_t4278335804  : public MonoBehaviour_t3012272455
{
public:
	// GameBehavior Inventory::behave
	GameBehavior_t1830462596 * ___behave_2;
	// UnityEngine.GameObject Inventory::missionButton
	GameObject_t4012695102 * ___missionButton_3;
	// UnityEngine.GameObject Inventory::inventoryPanel
	GameObject_t4012695102 * ___inventoryPanel_4;
	// UnityEngine.GameObject Inventory::slotPanel
	GameObject_t4012695102 * ___slotPanel_5;
	// UnityEngine.GameObject Inventory::slotPanel2
	GameObject_t4012695102 * ___slotPanel2_6;
	// ItemDatabase Inventory::database
	ItemDatabase_t2582217166 * ___database_7;
	// UnityEngine.GameObject Inventory::inventorySlot
	GameObject_t4012695102 * ___inventorySlot_8;
	// UnityEngine.GameObject Inventory::inventoryItem
	GameObject_t4012695102 * ___inventoryItem_9;
	// System.Int32 Inventory::slotAmount
	int32_t ___slotAmount_10;
	// System.Collections.Generic.List`1<Item> Inventory::items
	List_1_t799248428 * ___items_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slots
	List_1_t514686775 * ___slots_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::itemsList
	List_1_t514686775 * ___itemsList_13;
	// System.Int32 Inventory::slotAmount2
	int32_t ___slotAmount2_14;
	// System.Collections.Generic.List`1<Item> Inventory::items2
	List_1_t799248428 * ___items2_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slots2
	List_1_t514686775 * ___slots2_16;
	// UnityEngine.UI.GridLayoutGroup Inventory::gridLayoutGroup
	GridLayoutGroup_t4084811832 * ___gridLayoutGroup_17;
	// System.Boolean Inventory::slots2Completed
	bool ___slots2Completed_18;
	// UnityEngine.GameObject Inventory::buttonBack
	GameObject_t4012695102 * ___buttonBack_19;
	// UnityEngine.GameObject Inventory::canvasTutorial
	GameObject_t4012695102 * ___canvasTutorial_20;
	// UnityEngine.GameObject Inventory::tutorialText
	GameObject_t4012695102 * ___tutorialText_21;
	// UnityEngine.GameObject Inventory::backArrow
	GameObject_t4012695102 * ___backArrow_22;
	// System.Boolean Inventory::teste
	bool ___teste_23;
	// System.Boolean Inventory::teste2
	bool ___teste2_24;

public:
	inline static int32_t get_offset_of_behave_2() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___behave_2)); }
	inline GameBehavior_t1830462596 * get_behave_2() const { return ___behave_2; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_2() { return &___behave_2; }
	inline void set_behave_2(GameBehavior_t1830462596 * value)
	{
		___behave_2 = value;
		Il2CppCodeGenWriteBarrier(&___behave_2, value);
	}

	inline static int32_t get_offset_of_missionButton_3() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___missionButton_3)); }
	inline GameObject_t4012695102 * get_missionButton_3() const { return ___missionButton_3; }
	inline GameObject_t4012695102 ** get_address_of_missionButton_3() { return &___missionButton_3; }
	inline void set_missionButton_3(GameObject_t4012695102 * value)
	{
		___missionButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___missionButton_3, value);
	}

	inline static int32_t get_offset_of_inventoryPanel_4() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___inventoryPanel_4)); }
	inline GameObject_t4012695102 * get_inventoryPanel_4() const { return ___inventoryPanel_4; }
	inline GameObject_t4012695102 ** get_address_of_inventoryPanel_4() { return &___inventoryPanel_4; }
	inline void set_inventoryPanel_4(GameObject_t4012695102 * value)
	{
		___inventoryPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___inventoryPanel_4, value);
	}

	inline static int32_t get_offset_of_slotPanel_5() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___slotPanel_5)); }
	inline GameObject_t4012695102 * get_slotPanel_5() const { return ___slotPanel_5; }
	inline GameObject_t4012695102 ** get_address_of_slotPanel_5() { return &___slotPanel_5; }
	inline void set_slotPanel_5(GameObject_t4012695102 * value)
	{
		___slotPanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___slotPanel_5, value);
	}

	inline static int32_t get_offset_of_slotPanel2_6() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___slotPanel2_6)); }
	inline GameObject_t4012695102 * get_slotPanel2_6() const { return ___slotPanel2_6; }
	inline GameObject_t4012695102 ** get_address_of_slotPanel2_6() { return &___slotPanel2_6; }
	inline void set_slotPanel2_6(GameObject_t4012695102 * value)
	{
		___slotPanel2_6 = value;
		Il2CppCodeGenWriteBarrier(&___slotPanel2_6, value);
	}

	inline static int32_t get_offset_of_database_7() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___database_7)); }
	inline ItemDatabase_t2582217166 * get_database_7() const { return ___database_7; }
	inline ItemDatabase_t2582217166 ** get_address_of_database_7() { return &___database_7; }
	inline void set_database_7(ItemDatabase_t2582217166 * value)
	{
		___database_7 = value;
		Il2CppCodeGenWriteBarrier(&___database_7, value);
	}

	inline static int32_t get_offset_of_inventorySlot_8() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___inventorySlot_8)); }
	inline GameObject_t4012695102 * get_inventorySlot_8() const { return ___inventorySlot_8; }
	inline GameObject_t4012695102 ** get_address_of_inventorySlot_8() { return &___inventorySlot_8; }
	inline void set_inventorySlot_8(GameObject_t4012695102 * value)
	{
		___inventorySlot_8 = value;
		Il2CppCodeGenWriteBarrier(&___inventorySlot_8, value);
	}

	inline static int32_t get_offset_of_inventoryItem_9() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___inventoryItem_9)); }
	inline GameObject_t4012695102 * get_inventoryItem_9() const { return ___inventoryItem_9; }
	inline GameObject_t4012695102 ** get_address_of_inventoryItem_9() { return &___inventoryItem_9; }
	inline void set_inventoryItem_9(GameObject_t4012695102 * value)
	{
		___inventoryItem_9 = value;
		Il2CppCodeGenWriteBarrier(&___inventoryItem_9, value);
	}

	inline static int32_t get_offset_of_slotAmount_10() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___slotAmount_10)); }
	inline int32_t get_slotAmount_10() const { return ___slotAmount_10; }
	inline int32_t* get_address_of_slotAmount_10() { return &___slotAmount_10; }
	inline void set_slotAmount_10(int32_t value)
	{
		___slotAmount_10 = value;
	}

	inline static int32_t get_offset_of_items_11() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___items_11)); }
	inline List_1_t799248428 * get_items_11() const { return ___items_11; }
	inline List_1_t799248428 ** get_address_of_items_11() { return &___items_11; }
	inline void set_items_11(List_1_t799248428 * value)
	{
		___items_11 = value;
		Il2CppCodeGenWriteBarrier(&___items_11, value);
	}

	inline static int32_t get_offset_of_slots_12() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___slots_12)); }
	inline List_1_t514686775 * get_slots_12() const { return ___slots_12; }
	inline List_1_t514686775 ** get_address_of_slots_12() { return &___slots_12; }
	inline void set_slots_12(List_1_t514686775 * value)
	{
		___slots_12 = value;
		Il2CppCodeGenWriteBarrier(&___slots_12, value);
	}

	inline static int32_t get_offset_of_itemsList_13() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___itemsList_13)); }
	inline List_1_t514686775 * get_itemsList_13() const { return ___itemsList_13; }
	inline List_1_t514686775 ** get_address_of_itemsList_13() { return &___itemsList_13; }
	inline void set_itemsList_13(List_1_t514686775 * value)
	{
		___itemsList_13 = value;
		Il2CppCodeGenWriteBarrier(&___itemsList_13, value);
	}

	inline static int32_t get_offset_of_slotAmount2_14() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___slotAmount2_14)); }
	inline int32_t get_slotAmount2_14() const { return ___slotAmount2_14; }
	inline int32_t* get_address_of_slotAmount2_14() { return &___slotAmount2_14; }
	inline void set_slotAmount2_14(int32_t value)
	{
		___slotAmount2_14 = value;
	}

	inline static int32_t get_offset_of_items2_15() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___items2_15)); }
	inline List_1_t799248428 * get_items2_15() const { return ___items2_15; }
	inline List_1_t799248428 ** get_address_of_items2_15() { return &___items2_15; }
	inline void set_items2_15(List_1_t799248428 * value)
	{
		___items2_15 = value;
		Il2CppCodeGenWriteBarrier(&___items2_15, value);
	}

	inline static int32_t get_offset_of_slots2_16() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___slots2_16)); }
	inline List_1_t514686775 * get_slots2_16() const { return ___slots2_16; }
	inline List_1_t514686775 ** get_address_of_slots2_16() { return &___slots2_16; }
	inline void set_slots2_16(List_1_t514686775 * value)
	{
		___slots2_16 = value;
		Il2CppCodeGenWriteBarrier(&___slots2_16, value);
	}

	inline static int32_t get_offset_of_gridLayoutGroup_17() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___gridLayoutGroup_17)); }
	inline GridLayoutGroup_t4084811832 * get_gridLayoutGroup_17() const { return ___gridLayoutGroup_17; }
	inline GridLayoutGroup_t4084811832 ** get_address_of_gridLayoutGroup_17() { return &___gridLayoutGroup_17; }
	inline void set_gridLayoutGroup_17(GridLayoutGroup_t4084811832 * value)
	{
		___gridLayoutGroup_17 = value;
		Il2CppCodeGenWriteBarrier(&___gridLayoutGroup_17, value);
	}

	inline static int32_t get_offset_of_slots2Completed_18() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___slots2Completed_18)); }
	inline bool get_slots2Completed_18() const { return ___slots2Completed_18; }
	inline bool* get_address_of_slots2Completed_18() { return &___slots2Completed_18; }
	inline void set_slots2Completed_18(bool value)
	{
		___slots2Completed_18 = value;
	}

	inline static int32_t get_offset_of_buttonBack_19() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___buttonBack_19)); }
	inline GameObject_t4012695102 * get_buttonBack_19() const { return ___buttonBack_19; }
	inline GameObject_t4012695102 ** get_address_of_buttonBack_19() { return &___buttonBack_19; }
	inline void set_buttonBack_19(GameObject_t4012695102 * value)
	{
		___buttonBack_19 = value;
		Il2CppCodeGenWriteBarrier(&___buttonBack_19, value);
	}

	inline static int32_t get_offset_of_canvasTutorial_20() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___canvasTutorial_20)); }
	inline GameObject_t4012695102 * get_canvasTutorial_20() const { return ___canvasTutorial_20; }
	inline GameObject_t4012695102 ** get_address_of_canvasTutorial_20() { return &___canvasTutorial_20; }
	inline void set_canvasTutorial_20(GameObject_t4012695102 * value)
	{
		___canvasTutorial_20 = value;
		Il2CppCodeGenWriteBarrier(&___canvasTutorial_20, value);
	}

	inline static int32_t get_offset_of_tutorialText_21() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___tutorialText_21)); }
	inline GameObject_t4012695102 * get_tutorialText_21() const { return ___tutorialText_21; }
	inline GameObject_t4012695102 ** get_address_of_tutorialText_21() { return &___tutorialText_21; }
	inline void set_tutorialText_21(GameObject_t4012695102 * value)
	{
		___tutorialText_21 = value;
		Il2CppCodeGenWriteBarrier(&___tutorialText_21, value);
	}

	inline static int32_t get_offset_of_backArrow_22() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___backArrow_22)); }
	inline GameObject_t4012695102 * get_backArrow_22() const { return ___backArrow_22; }
	inline GameObject_t4012695102 ** get_address_of_backArrow_22() { return &___backArrow_22; }
	inline void set_backArrow_22(GameObject_t4012695102 * value)
	{
		___backArrow_22 = value;
		Il2CppCodeGenWriteBarrier(&___backArrow_22, value);
	}

	inline static int32_t get_offset_of_teste_23() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___teste_23)); }
	inline bool get_teste_23() const { return ___teste_23; }
	inline bool* get_address_of_teste_23() { return &___teste_23; }
	inline void set_teste_23(bool value)
	{
		___teste_23 = value;
	}

	inline static int32_t get_offset_of_teste2_24() { return static_cast<int32_t>(offsetof(Inventory_t4278335804, ___teste2_24)); }
	inline bool get_teste2_24() const { return ___teste2_24; }
	inline bool* get_address_of_teste2_24() { return &___teste2_24; }
	inline void set_teste2_24(bool value)
	{
		___teste2_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
