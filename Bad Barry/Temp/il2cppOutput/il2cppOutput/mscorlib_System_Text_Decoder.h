#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.DecoderFallback
struct DecoderFallback_t1723;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1724;

#include "mscorlib_System_Object.h"

// System.Text.Decoder
struct  Decoder_t1327  : public Object_t
{
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t1723 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t1724 * ___fallback_buffer_1;
};
