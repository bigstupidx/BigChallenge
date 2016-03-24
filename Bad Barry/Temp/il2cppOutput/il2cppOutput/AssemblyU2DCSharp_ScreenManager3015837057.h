#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FadeSprite
struct FadeSprite_t13620353;
// GameBehavior
struct GameBehavior_t1830462596;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenManager
struct  ScreenManager_t3015837057  : public MonoBehaviour_t3012272455
{
public:
	// FadeSprite ScreenManager::m_blackScreenCover
	FadeSprite_t13620353 * ___m_blackScreenCover_2;
	// System.Single ScreenManager::m_minDuration
	float ___m_minDuration_3;
	// System.Boolean ScreenManager::attributesClicked
	bool ___attributesClicked_4;
	// GameBehavior ScreenManager::behave
	GameBehavior_t1830462596 * ___behave_5;

public:
	inline static int32_t get_offset_of_m_blackScreenCover_2() { return static_cast<int32_t>(offsetof(ScreenManager_t3015837057, ___m_blackScreenCover_2)); }
	inline FadeSprite_t13620353 * get_m_blackScreenCover_2() const { return ___m_blackScreenCover_2; }
	inline FadeSprite_t13620353 ** get_address_of_m_blackScreenCover_2() { return &___m_blackScreenCover_2; }
	inline void set_m_blackScreenCover_2(FadeSprite_t13620353 * value)
	{
		___m_blackScreenCover_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_blackScreenCover_2, value);
	}

	inline static int32_t get_offset_of_m_minDuration_3() { return static_cast<int32_t>(offsetof(ScreenManager_t3015837057, ___m_minDuration_3)); }
	inline float get_m_minDuration_3() const { return ___m_minDuration_3; }
	inline float* get_address_of_m_minDuration_3() { return &___m_minDuration_3; }
	inline void set_m_minDuration_3(float value)
	{
		___m_minDuration_3 = value;
	}

	inline static int32_t get_offset_of_attributesClicked_4() { return static_cast<int32_t>(offsetof(ScreenManager_t3015837057, ___attributesClicked_4)); }
	inline bool get_attributesClicked_4() const { return ___attributesClicked_4; }
	inline bool* get_address_of_attributesClicked_4() { return &___attributesClicked_4; }
	inline void set_attributesClicked_4(bool value)
	{
		___attributesClicked_4 = value;
	}

	inline static int32_t get_offset_of_behave_5() { return static_cast<int32_t>(offsetof(ScreenManager_t3015837057, ___behave_5)); }
	inline GameBehavior_t1830462596 * get_behave_5() const { return ___behave_5; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_5() { return &___behave_5; }
	inline void set_behave_5(GameBehavior_t1830462596 * value)
	{
		___behave_5 = value;
		Il2CppCodeGenWriteBarrier(&___behave_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
