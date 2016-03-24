#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicFunctions
struct  MusicFunctions_t1604984598  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource MusicFunctions::music
	AudioSource_t3628549054 * ___music_2;
	// System.Single MusicFunctions::minVolume
	float ___minVolume_3;
	// System.Boolean MusicFunctions::fade
	bool ___fade_4;
	// System.Single MusicFunctions::fadeTime
	float ___fadeTime_5;
	// System.Single MusicFunctions::decrease
	float ___decrease_6;

public:
	inline static int32_t get_offset_of_music_2() { return static_cast<int32_t>(offsetof(MusicFunctions_t1604984598, ___music_2)); }
	inline AudioSource_t3628549054 * get_music_2() const { return ___music_2; }
	inline AudioSource_t3628549054 ** get_address_of_music_2() { return &___music_2; }
	inline void set_music_2(AudioSource_t3628549054 * value)
	{
		___music_2 = value;
		Il2CppCodeGenWriteBarrier(&___music_2, value);
	}

	inline static int32_t get_offset_of_minVolume_3() { return static_cast<int32_t>(offsetof(MusicFunctions_t1604984598, ___minVolume_3)); }
	inline float get_minVolume_3() const { return ___minVolume_3; }
	inline float* get_address_of_minVolume_3() { return &___minVolume_3; }
	inline void set_minVolume_3(float value)
	{
		___minVolume_3 = value;
	}

	inline static int32_t get_offset_of_fade_4() { return static_cast<int32_t>(offsetof(MusicFunctions_t1604984598, ___fade_4)); }
	inline bool get_fade_4() const { return ___fade_4; }
	inline bool* get_address_of_fade_4() { return &___fade_4; }
	inline void set_fade_4(bool value)
	{
		___fade_4 = value;
	}

	inline static int32_t get_offset_of_fadeTime_5() { return static_cast<int32_t>(offsetof(MusicFunctions_t1604984598, ___fadeTime_5)); }
	inline float get_fadeTime_5() const { return ___fadeTime_5; }
	inline float* get_address_of_fadeTime_5() { return &___fadeTime_5; }
	inline void set_fadeTime_5(float value)
	{
		___fadeTime_5 = value;
	}

	inline static int32_t get_offset_of_decrease_6() { return static_cast<int32_t>(offsetof(MusicFunctions_t1604984598, ___decrease_6)); }
	inline float get_decrease_6() const { return ___decrease_6; }
	inline float* get_address_of_decrease_6() { return &___decrease_6; }
	inline void set_decrease_6(float value)
	{
		___decrease_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
