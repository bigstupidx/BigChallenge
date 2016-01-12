#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.Decoder
struct Decoder_t1300;
// System.Text.DecoderFallback
struct DecoderFallback_t1696;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1697;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m10292 (Decoder_t1300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m10293 (Decoder_t1300 * __this, DecoderFallback_t1696 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1697 * Decoder_get_FallbackBuffer_m10294 (Decoder_t1300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
