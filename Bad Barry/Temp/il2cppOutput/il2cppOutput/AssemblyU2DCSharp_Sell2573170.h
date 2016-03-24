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
// Item
struct Item_t2289459;
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Inventory
struct Inventory_t4278335804;
// GameBehavior
struct GameBehavior_t1830462596;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sell
struct  Sell_t2573170  : public MonoBehaviour_t3012272455
{
public:
	// Item Sell::item
	Item_t2289459 * ___item_3;
	// System.Int32 Sell::coin
	int32_t ___coin_4;
	// UnityEngine.UI.Button Sell::button
	Button_t990034267 * ___button_5;
	// UnityEngine.GameObject Sell::CoinsPanel
	GameObject_t4012695102 * ___CoinsPanel_6;
	// Inventory Sell::inv
	Inventory_t4278335804 * ___inv_7;
	// System.Boolean Sell::buttonActivate
	bool ___buttonActivate_8;
	// GameBehavior Sell::behave
	GameBehavior_t1830462596 * ___behave_9;
	// UnityEngine.GameObject Sell::soldImage
	GameObject_t4012695102 * ___soldImage_10;
	// System.Boolean Sell::activeBlink
	bool ___activeBlink_11;
	// System.Boolean Sell::blinkMessage
	bool ___blinkMessage_12;
	// System.Boolean Sell::pistolPurchased
	bool ___pistolPurchased_13;
	// System.Boolean Sell::watersPurchased
	bool ___watersPurchased_14;
	// System.Int32 Sell::indexToBuy
	int32_t ___indexToBuy_15;
	// System.Int32 Sell::waterCount
	int32_t ___waterCount_16;
	// UnityEngine.GameObject Sell::leftBuyArrow
	GameObject_t4012695102 * ___leftBuyArrow_17;
	// UnityEngine.GameObject Sell::rightBuyArrow
	GameObject_t4012695102 * ___rightBuyArrow_18;
	// UnityEngine.GameObject Sell::storeCanvasTutorial
	GameObject_t4012695102 * ___storeCanvasTutorial_19;
	// UnityEngine.GameObject Sell::storeCanvasPanel
	GameObject_t4012695102 * ___storeCanvasPanel_20;
	// UnityEngine.GameObject Sell::backArrow
	GameObject_t4012695102 * ___backArrow_21;
	// UnityEngine.GameObject Sell::canvasText
	GameObject_t4012695102 * ___canvasText_22;
	// UnityEngine.GameObject Sell::endTutoText
	GameObject_t4012695102 * ___endTutoText_23;
	// UnityEngine.GameObject Sell::endTutoPanel
	GameObject_t4012695102 * ___endTutoPanel_24;
	// UnityEngine.GameObject Sell::backButton
	GameObject_t4012695102 * ___backButton_25;

public:
	inline static int32_t get_offset_of_item_3() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___item_3)); }
	inline Item_t2289459 * get_item_3() const { return ___item_3; }
	inline Item_t2289459 ** get_address_of_item_3() { return &___item_3; }
	inline void set_item_3(Item_t2289459 * value)
	{
		___item_3 = value;
		Il2CppCodeGenWriteBarrier(&___item_3, value);
	}

	inline static int32_t get_offset_of_coin_4() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___coin_4)); }
	inline int32_t get_coin_4() const { return ___coin_4; }
	inline int32_t* get_address_of_coin_4() { return &___coin_4; }
	inline void set_coin_4(int32_t value)
	{
		___coin_4 = value;
	}

	inline static int32_t get_offset_of_button_5() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___button_5)); }
	inline Button_t990034267 * get_button_5() const { return ___button_5; }
	inline Button_t990034267 ** get_address_of_button_5() { return &___button_5; }
	inline void set_button_5(Button_t990034267 * value)
	{
		___button_5 = value;
		Il2CppCodeGenWriteBarrier(&___button_5, value);
	}

	inline static int32_t get_offset_of_CoinsPanel_6() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___CoinsPanel_6)); }
	inline GameObject_t4012695102 * get_CoinsPanel_6() const { return ___CoinsPanel_6; }
	inline GameObject_t4012695102 ** get_address_of_CoinsPanel_6() { return &___CoinsPanel_6; }
	inline void set_CoinsPanel_6(GameObject_t4012695102 * value)
	{
		___CoinsPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___CoinsPanel_6, value);
	}

	inline static int32_t get_offset_of_inv_7() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___inv_7)); }
	inline Inventory_t4278335804 * get_inv_7() const { return ___inv_7; }
	inline Inventory_t4278335804 ** get_address_of_inv_7() { return &___inv_7; }
	inline void set_inv_7(Inventory_t4278335804 * value)
	{
		___inv_7 = value;
		Il2CppCodeGenWriteBarrier(&___inv_7, value);
	}

	inline static int32_t get_offset_of_buttonActivate_8() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___buttonActivate_8)); }
	inline bool get_buttonActivate_8() const { return ___buttonActivate_8; }
	inline bool* get_address_of_buttonActivate_8() { return &___buttonActivate_8; }
	inline void set_buttonActivate_8(bool value)
	{
		___buttonActivate_8 = value;
	}

	inline static int32_t get_offset_of_behave_9() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___behave_9)); }
	inline GameBehavior_t1830462596 * get_behave_9() const { return ___behave_9; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_9() { return &___behave_9; }
	inline void set_behave_9(GameBehavior_t1830462596 * value)
	{
		___behave_9 = value;
		Il2CppCodeGenWriteBarrier(&___behave_9, value);
	}

	inline static int32_t get_offset_of_soldImage_10() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___soldImage_10)); }
	inline GameObject_t4012695102 * get_soldImage_10() const { return ___soldImage_10; }
	inline GameObject_t4012695102 ** get_address_of_soldImage_10() { return &___soldImage_10; }
	inline void set_soldImage_10(GameObject_t4012695102 * value)
	{
		___soldImage_10 = value;
		Il2CppCodeGenWriteBarrier(&___soldImage_10, value);
	}

	inline static int32_t get_offset_of_activeBlink_11() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___activeBlink_11)); }
	inline bool get_activeBlink_11() const { return ___activeBlink_11; }
	inline bool* get_address_of_activeBlink_11() { return &___activeBlink_11; }
	inline void set_activeBlink_11(bool value)
	{
		___activeBlink_11 = value;
	}

	inline static int32_t get_offset_of_blinkMessage_12() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___blinkMessage_12)); }
	inline bool get_blinkMessage_12() const { return ___blinkMessage_12; }
	inline bool* get_address_of_blinkMessage_12() { return &___blinkMessage_12; }
	inline void set_blinkMessage_12(bool value)
	{
		___blinkMessage_12 = value;
	}

	inline static int32_t get_offset_of_pistolPurchased_13() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___pistolPurchased_13)); }
	inline bool get_pistolPurchased_13() const { return ___pistolPurchased_13; }
	inline bool* get_address_of_pistolPurchased_13() { return &___pistolPurchased_13; }
	inline void set_pistolPurchased_13(bool value)
	{
		___pistolPurchased_13 = value;
	}

	inline static int32_t get_offset_of_watersPurchased_14() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___watersPurchased_14)); }
	inline bool get_watersPurchased_14() const { return ___watersPurchased_14; }
	inline bool* get_address_of_watersPurchased_14() { return &___watersPurchased_14; }
	inline void set_watersPurchased_14(bool value)
	{
		___watersPurchased_14 = value;
	}

	inline static int32_t get_offset_of_indexToBuy_15() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___indexToBuy_15)); }
	inline int32_t get_indexToBuy_15() const { return ___indexToBuy_15; }
	inline int32_t* get_address_of_indexToBuy_15() { return &___indexToBuy_15; }
	inline void set_indexToBuy_15(int32_t value)
	{
		___indexToBuy_15 = value;
	}

	inline static int32_t get_offset_of_waterCount_16() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___waterCount_16)); }
	inline int32_t get_waterCount_16() const { return ___waterCount_16; }
	inline int32_t* get_address_of_waterCount_16() { return &___waterCount_16; }
	inline void set_waterCount_16(int32_t value)
	{
		___waterCount_16 = value;
	}

	inline static int32_t get_offset_of_leftBuyArrow_17() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___leftBuyArrow_17)); }
	inline GameObject_t4012695102 * get_leftBuyArrow_17() const { return ___leftBuyArrow_17; }
	inline GameObject_t4012695102 ** get_address_of_leftBuyArrow_17() { return &___leftBuyArrow_17; }
	inline void set_leftBuyArrow_17(GameObject_t4012695102 * value)
	{
		___leftBuyArrow_17 = value;
		Il2CppCodeGenWriteBarrier(&___leftBuyArrow_17, value);
	}

	inline static int32_t get_offset_of_rightBuyArrow_18() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___rightBuyArrow_18)); }
	inline GameObject_t4012695102 * get_rightBuyArrow_18() const { return ___rightBuyArrow_18; }
	inline GameObject_t4012695102 ** get_address_of_rightBuyArrow_18() { return &___rightBuyArrow_18; }
	inline void set_rightBuyArrow_18(GameObject_t4012695102 * value)
	{
		___rightBuyArrow_18 = value;
		Il2CppCodeGenWriteBarrier(&___rightBuyArrow_18, value);
	}

	inline static int32_t get_offset_of_storeCanvasTutorial_19() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___storeCanvasTutorial_19)); }
	inline GameObject_t4012695102 * get_storeCanvasTutorial_19() const { return ___storeCanvasTutorial_19; }
	inline GameObject_t4012695102 ** get_address_of_storeCanvasTutorial_19() { return &___storeCanvasTutorial_19; }
	inline void set_storeCanvasTutorial_19(GameObject_t4012695102 * value)
	{
		___storeCanvasTutorial_19 = value;
		Il2CppCodeGenWriteBarrier(&___storeCanvasTutorial_19, value);
	}

	inline static int32_t get_offset_of_storeCanvasPanel_20() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___storeCanvasPanel_20)); }
	inline GameObject_t4012695102 * get_storeCanvasPanel_20() const { return ___storeCanvasPanel_20; }
	inline GameObject_t4012695102 ** get_address_of_storeCanvasPanel_20() { return &___storeCanvasPanel_20; }
	inline void set_storeCanvasPanel_20(GameObject_t4012695102 * value)
	{
		___storeCanvasPanel_20 = value;
		Il2CppCodeGenWriteBarrier(&___storeCanvasPanel_20, value);
	}

	inline static int32_t get_offset_of_backArrow_21() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___backArrow_21)); }
	inline GameObject_t4012695102 * get_backArrow_21() const { return ___backArrow_21; }
	inline GameObject_t4012695102 ** get_address_of_backArrow_21() { return &___backArrow_21; }
	inline void set_backArrow_21(GameObject_t4012695102 * value)
	{
		___backArrow_21 = value;
		Il2CppCodeGenWriteBarrier(&___backArrow_21, value);
	}

	inline static int32_t get_offset_of_canvasText_22() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___canvasText_22)); }
	inline GameObject_t4012695102 * get_canvasText_22() const { return ___canvasText_22; }
	inline GameObject_t4012695102 ** get_address_of_canvasText_22() { return &___canvasText_22; }
	inline void set_canvasText_22(GameObject_t4012695102 * value)
	{
		___canvasText_22 = value;
		Il2CppCodeGenWriteBarrier(&___canvasText_22, value);
	}

	inline static int32_t get_offset_of_endTutoText_23() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___endTutoText_23)); }
	inline GameObject_t4012695102 * get_endTutoText_23() const { return ___endTutoText_23; }
	inline GameObject_t4012695102 ** get_address_of_endTutoText_23() { return &___endTutoText_23; }
	inline void set_endTutoText_23(GameObject_t4012695102 * value)
	{
		___endTutoText_23 = value;
		Il2CppCodeGenWriteBarrier(&___endTutoText_23, value);
	}

	inline static int32_t get_offset_of_endTutoPanel_24() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___endTutoPanel_24)); }
	inline GameObject_t4012695102 * get_endTutoPanel_24() const { return ___endTutoPanel_24; }
	inline GameObject_t4012695102 ** get_address_of_endTutoPanel_24() { return &___endTutoPanel_24; }
	inline void set_endTutoPanel_24(GameObject_t4012695102 * value)
	{
		___endTutoPanel_24 = value;
		Il2CppCodeGenWriteBarrier(&___endTutoPanel_24, value);
	}

	inline static int32_t get_offset_of_backButton_25() { return static_cast<int32_t>(offsetof(Sell_t2573170, ___backButton_25)); }
	inline GameObject_t4012695102 * get_backButton_25() const { return ___backButton_25; }
	inline GameObject_t4012695102 ** get_address_of_backButton_25() { return &___backButton_25; }
	inline void set_backButton_25(GameObject_t4012695102 * value)
	{
		___backButton_25 = value;
		Il2CppCodeGenWriteBarrier(&___backButton_25, value);
	}
};

struct Sell_t2573170_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Sell::stringList
	Dictionary_2_t2606186806 * ___stringList_2;

public:
	inline static int32_t get_offset_of_stringList_2() { return static_cast<int32_t>(offsetof(Sell_t2573170_StaticFields, ___stringList_2)); }
	inline Dictionary_2_t2606186806 * get_stringList_2() const { return ___stringList_2; }
	inline Dictionary_2_t2606186806 ** get_address_of_stringList_2() { return &___stringList_2; }
	inline void set_stringList_2(Dictionary_2_t2606186806 * value)
	{
		___stringList_2 = value;
		Il2CppCodeGenWriteBarrier(&___stringList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
