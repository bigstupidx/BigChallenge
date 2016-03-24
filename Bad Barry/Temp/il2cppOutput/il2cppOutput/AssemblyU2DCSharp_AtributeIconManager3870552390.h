#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t503173063;
// UnityEngine.UI.Image
struct Image_t3354615620;
// GameBehavior
struct GameBehavior_t1830462596;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AtributeIconManager
struct  AtributeIconManager_t3870552390  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Sprite[] AtributeIconManager::sprites
	SpriteU5BU5D_t503173063* ___sprites_2;
	// UnityEngine.UI.Image AtributeIconManager::atributeImage
	Image_t3354615620 * ___atributeImage_3;
	// GameBehavior AtributeIconManager::behave
	GameBehavior_t1830462596 * ___behave_4;

public:
	inline static int32_t get_offset_of_sprites_2() { return static_cast<int32_t>(offsetof(AtributeIconManager_t3870552390, ___sprites_2)); }
	inline SpriteU5BU5D_t503173063* get_sprites_2() const { return ___sprites_2; }
	inline SpriteU5BU5D_t503173063** get_address_of_sprites_2() { return &___sprites_2; }
	inline void set_sprites_2(SpriteU5BU5D_t503173063* value)
	{
		___sprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_2, value);
	}

	inline static int32_t get_offset_of_atributeImage_3() { return static_cast<int32_t>(offsetof(AtributeIconManager_t3870552390, ___atributeImage_3)); }
	inline Image_t3354615620 * get_atributeImage_3() const { return ___atributeImage_3; }
	inline Image_t3354615620 ** get_address_of_atributeImage_3() { return &___atributeImage_3; }
	inline void set_atributeImage_3(Image_t3354615620 * value)
	{
		___atributeImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___atributeImage_3, value);
	}

	inline static int32_t get_offset_of_behave_4() { return static_cast<int32_t>(offsetof(AtributeIconManager_t3870552390, ___behave_4)); }
	inline GameBehavior_t1830462596 * get_behave_4() const { return ___behave_4; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_4() { return &___behave_4; }
	inline void set_behave_4(GameBehavior_t1830462596 * value)
	{
		___behave_4 = value;
		Il2CppCodeGenWriteBarrier(&___behave_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
