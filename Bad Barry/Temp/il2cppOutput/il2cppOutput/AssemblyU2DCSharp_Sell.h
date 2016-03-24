#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t71;
// Item
struct Item_t86;
// UnityEngine.UI.Button
struct Button_t67;
// UnityEngine.GameObject
struct GameObject_t13;
// Inventory
struct Inventory_t78;
// GameBehavior
struct GameBehavior_t4;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Sell
struct  Sell_t119  : public MonoBehaviour_t2
{
	// Item Sell::item
	Item_t86 * ___item_3;
	// System.Int32 Sell::coin
	int32_t ___coin_4;
	// UnityEngine.UI.Button Sell::button
	Button_t67 * ___button_5;
	// UnityEngine.GameObject Sell::CoinsPanel
	GameObject_t13 * ___CoinsPanel_6;
	// Inventory Sell::inv
	Inventory_t78 * ___inv_7;
	// System.Boolean Sell::buttonActivate
	bool ___buttonActivate_8;
	// GameBehavior Sell::behave
	GameBehavior_t4 * ___behave_9;
	// UnityEngine.GameObject Sell::soldImage
	GameObject_t13 * ___soldImage_10;
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
	GameObject_t13 * ___leftBuyArrow_17;
	// UnityEngine.GameObject Sell::rightBuyArrow
	GameObject_t13 * ___rightBuyArrow_18;
	// UnityEngine.GameObject Sell::storeCanvasTutorial
	GameObject_t13 * ___storeCanvasTutorial_19;
	// UnityEngine.GameObject Sell::storeCanvasPanel
	GameObject_t13 * ___storeCanvasPanel_20;
	// UnityEngine.GameObject Sell::backArrow
	GameObject_t13 * ___backArrow_21;
	// UnityEngine.GameObject Sell::canvasText
	GameObject_t13 * ___canvasText_22;
	// UnityEngine.GameObject Sell::endTutoText
	GameObject_t13 * ___endTutoText_23;
	// UnityEngine.GameObject Sell::endTutoPanel
	GameObject_t13 * ___endTutoPanel_24;
	// UnityEngine.GameObject Sell::backButton
	GameObject_t13 * ___backButton_25;
};
struct Sell_t119_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Sell::stringList
	Dictionary_2_t71 * ___stringList_2;
};
