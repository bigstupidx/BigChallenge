#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Menu
struct Menu_t2394495;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t503173063;
// GameBehavior
struct GameBehavior_t1830462596;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HUDGame
struct  HUDGame_t1974244713  : public MonoBehaviour_t3012272455
{
public:
	// Menu HUDGame::currentMenu
	Menu_t2394495 * ___currentMenu_2;
	// UnityEngine.GameObject HUDGame::health
	GameObject_t4012695102 * ___health_3;
	// UnityEngine.GameObject HUDGame::xp
	GameObject_t4012695102 * ___xp_4;
	// UnityEngine.GameObject HUDGame::lvlUp
	GameObject_t4012695102 * ___lvlUp_5;
	// UnityEngine.GameObject HUDGame::ammo
	GameObject_t4012695102 * ___ammo_6;
	// UnityEngine.Sprite[] HUDGame::images
	SpriteU5BU5D_t503173063* ___images_7;
	// UnityEngine.GameObject HUDGame::ammoImage
	GameObject_t4012695102 * ___ammoImage_8;
	// GameBehavior HUDGame::behave
	GameBehavior_t1830462596 * ___behave_10;

public:
	inline static int32_t get_offset_of_currentMenu_2() { return static_cast<int32_t>(offsetof(HUDGame_t1974244713, ___currentMenu_2)); }
	inline Menu_t2394495 * get_currentMenu_2() const { return ___currentMenu_2; }
	inline Menu_t2394495 ** get_address_of_currentMenu_2() { return &___currentMenu_2; }
	inline void set_currentMenu_2(Menu_t2394495 * value)
	{
		___currentMenu_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentMenu_2, value);
	}

	inline static int32_t get_offset_of_health_3() { return static_cast<int32_t>(offsetof(HUDGame_t1974244713, ___health_3)); }
	inline GameObject_t4012695102 * get_health_3() const { return ___health_3; }
	inline GameObject_t4012695102 ** get_address_of_health_3() { return &___health_3; }
	inline void set_health_3(GameObject_t4012695102 * value)
	{
		___health_3 = value;
		Il2CppCodeGenWriteBarrier(&___health_3, value);
	}

	inline static int32_t get_offset_of_xp_4() { return static_cast<int32_t>(offsetof(HUDGame_t1974244713, ___xp_4)); }
	inline GameObject_t4012695102 * get_xp_4() const { return ___xp_4; }
	inline GameObject_t4012695102 ** get_address_of_xp_4() { return &___xp_4; }
	inline void set_xp_4(GameObject_t4012695102 * value)
	{
		___xp_4 = value;
		Il2CppCodeGenWriteBarrier(&___xp_4, value);
	}

	inline static int32_t get_offset_of_lvlUp_5() { return static_cast<int32_t>(offsetof(HUDGame_t1974244713, ___lvlUp_5)); }
	inline GameObject_t4012695102 * get_lvlUp_5() const { return ___lvlUp_5; }
	inline GameObject_t4012695102 ** get_address_of_lvlUp_5() { return &___lvlUp_5; }
	inline void set_lvlUp_5(GameObject_t4012695102 * value)
	{
		___lvlUp_5 = value;
		Il2CppCodeGenWriteBarrier(&___lvlUp_5, value);
	}

	inline static int32_t get_offset_of_ammo_6() { return static_cast<int32_t>(offsetof(HUDGame_t1974244713, ___ammo_6)); }
	inline GameObject_t4012695102 * get_ammo_6() const { return ___ammo_6; }
	inline GameObject_t4012695102 ** get_address_of_ammo_6() { return &___ammo_6; }
	inline void set_ammo_6(GameObject_t4012695102 * value)
	{
		___ammo_6 = value;
		Il2CppCodeGenWriteBarrier(&___ammo_6, value);
	}

	inline static int32_t get_offset_of_images_7() { return static_cast<int32_t>(offsetof(HUDGame_t1974244713, ___images_7)); }
	inline SpriteU5BU5D_t503173063* get_images_7() const { return ___images_7; }
	inline SpriteU5BU5D_t503173063** get_address_of_images_7() { return &___images_7; }
	inline void set_images_7(SpriteU5BU5D_t503173063* value)
	{
		___images_7 = value;
		Il2CppCodeGenWriteBarrier(&___images_7, value);
	}

	inline static int32_t get_offset_of_ammoImage_8() { return static_cast<int32_t>(offsetof(HUDGame_t1974244713, ___ammoImage_8)); }
	inline GameObject_t4012695102 * get_ammoImage_8() const { return ___ammoImage_8; }
	inline GameObject_t4012695102 ** get_address_of_ammoImage_8() { return &___ammoImage_8; }
	inline void set_ammoImage_8(GameObject_t4012695102 * value)
	{
		___ammoImage_8 = value;
		Il2CppCodeGenWriteBarrier(&___ammoImage_8, value);
	}

	inline static int32_t get_offset_of_behave_10() { return static_cast<int32_t>(offsetof(HUDGame_t1974244713, ___behave_10)); }
	inline GameBehavior_t1830462596 * get_behave_10() const { return ___behave_10; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_10() { return &___behave_10; }
	inline void set_behave_10(GameBehavior_t1830462596 * value)
	{
		___behave_10 = value;
		Il2CppCodeGenWriteBarrier(&___behave_10, value);
	}
};

struct HUDGame_t1974244713_StaticFields
{
public:
	// System.Boolean HUDGame::isPaused
	bool ___isPaused_9;

public:
	inline static int32_t get_offset_of_isPaused_9() { return static_cast<int32_t>(offsetof(HUDGame_t1974244713_StaticFields, ___isPaused_9)); }
	inline bool get_isPaused_9() const { return ___isPaused_9; }
	inline bool* get_address_of_isPaused_9() { return &___isPaused_9; }
	inline void set_isPaused_9(bool value)
	{
		___isPaused_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
