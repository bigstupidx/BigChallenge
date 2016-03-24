#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Tiled2Unity.TileAnimator/Frame>
struct List_1_t865098310;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TileAnimator
struct  TileAnimator_t334402968  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<Tiled2Unity.TileAnimator/Frame> Tiled2Unity.TileAnimator::frames
	List_1_t865098310 * ___frames_2;
	// System.Int32 Tiled2Unity.TileAnimator::currentFrameIndex
	int32_t ___currentFrameIndex_3;

public:
	inline static int32_t get_offset_of_frames_2() { return static_cast<int32_t>(offsetof(TileAnimator_t334402968, ___frames_2)); }
	inline List_1_t865098310 * get_frames_2() const { return ___frames_2; }
	inline List_1_t865098310 ** get_address_of_frames_2() { return &___frames_2; }
	inline void set_frames_2(List_1_t865098310 * value)
	{
		___frames_2 = value;
		Il2CppCodeGenWriteBarrier(&___frames_2, value);
	}

	inline static int32_t get_offset_of_currentFrameIndex_3() { return static_cast<int32_t>(offsetof(TileAnimator_t334402968, ___currentFrameIndex_3)); }
	inline int32_t get_currentFrameIndex_3() const { return ___currentFrameIndex_3; }
	inline int32_t* get_address_of_currentFrameIndex_3() { return &___currentFrameIndex_3; }
	inline void set_currentFrameIndex_3(int32_t value)
	{
		___currentFrameIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
