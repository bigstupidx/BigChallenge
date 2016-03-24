#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2223784725;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FadeSprite
struct  FadeSprite_t13620353  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean FadeSprite::m_startsVisible
	bool ___m_startsVisible_2;
	// System.Boolean FadeSprite::m_fadeOnAwake
	bool ___m_fadeOnAwake_3;
	// System.Boolean FadeSprite::m_continuous
	bool ___m_continuous_4;
	// System.Single FadeSprite::m_fadeSpeed
	float ___m_fadeSpeed_5;
	// System.Single FadeSprite::m_minAlpha
	float ___m_minAlpha_6;
	// System.Single FadeSprite::m_maxAlpha
	float ___m_maxAlpha_7;
	// UnityEngine.SpriteRenderer FadeSprite::m_sprite
	SpriteRenderer_t2223784725 * ___m_sprite_8;

public:
	inline static int32_t get_offset_of_m_startsVisible_2() { return static_cast<int32_t>(offsetof(FadeSprite_t13620353, ___m_startsVisible_2)); }
	inline bool get_m_startsVisible_2() const { return ___m_startsVisible_2; }
	inline bool* get_address_of_m_startsVisible_2() { return &___m_startsVisible_2; }
	inline void set_m_startsVisible_2(bool value)
	{
		___m_startsVisible_2 = value;
	}

	inline static int32_t get_offset_of_m_fadeOnAwake_3() { return static_cast<int32_t>(offsetof(FadeSprite_t13620353, ___m_fadeOnAwake_3)); }
	inline bool get_m_fadeOnAwake_3() const { return ___m_fadeOnAwake_3; }
	inline bool* get_address_of_m_fadeOnAwake_3() { return &___m_fadeOnAwake_3; }
	inline void set_m_fadeOnAwake_3(bool value)
	{
		___m_fadeOnAwake_3 = value;
	}

	inline static int32_t get_offset_of_m_continuous_4() { return static_cast<int32_t>(offsetof(FadeSprite_t13620353, ___m_continuous_4)); }
	inline bool get_m_continuous_4() const { return ___m_continuous_4; }
	inline bool* get_address_of_m_continuous_4() { return &___m_continuous_4; }
	inline void set_m_continuous_4(bool value)
	{
		___m_continuous_4 = value;
	}

	inline static int32_t get_offset_of_m_fadeSpeed_5() { return static_cast<int32_t>(offsetof(FadeSprite_t13620353, ___m_fadeSpeed_5)); }
	inline float get_m_fadeSpeed_5() const { return ___m_fadeSpeed_5; }
	inline float* get_address_of_m_fadeSpeed_5() { return &___m_fadeSpeed_5; }
	inline void set_m_fadeSpeed_5(float value)
	{
		___m_fadeSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_minAlpha_6() { return static_cast<int32_t>(offsetof(FadeSprite_t13620353, ___m_minAlpha_6)); }
	inline float get_m_minAlpha_6() const { return ___m_minAlpha_6; }
	inline float* get_address_of_m_minAlpha_6() { return &___m_minAlpha_6; }
	inline void set_m_minAlpha_6(float value)
	{
		___m_minAlpha_6 = value;
	}

	inline static int32_t get_offset_of_m_maxAlpha_7() { return static_cast<int32_t>(offsetof(FadeSprite_t13620353, ___m_maxAlpha_7)); }
	inline float get_m_maxAlpha_7() const { return ___m_maxAlpha_7; }
	inline float* get_address_of_m_maxAlpha_7() { return &___m_maxAlpha_7; }
	inline void set_m_maxAlpha_7(float value)
	{
		___m_maxAlpha_7 = value;
	}

	inline static int32_t get_offset_of_m_sprite_8() { return static_cast<int32_t>(offsetof(FadeSprite_t13620353, ___m_sprite_8)); }
	inline SpriteRenderer_t2223784725 * get_m_sprite_8() const { return ___m_sprite_8; }
	inline SpriteRenderer_t2223784725 ** get_address_of_m_sprite_8() { return &___m_sprite_8; }
	inline void set_m_sprite_8(SpriteRenderer_t2223784725 * value)
	{
		___m_sprite_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_sprite_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
