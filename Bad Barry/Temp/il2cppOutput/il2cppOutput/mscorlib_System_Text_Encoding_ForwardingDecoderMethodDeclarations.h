﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.Encoding/ForwardingDecoder
struct ForwardingDecoder_t1653;
// System.Text.Encoding
struct Encoding_t925;
// System.Byte[]
struct ByteU5BU5D_t759;
// System.Char[]
struct CharU5BU5D_t261;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Encoding/ForwardingDecoder::.ctor(System.Text.Encoding)
extern "C" void ForwardingDecoder__ctor_m9843 (ForwardingDecoder_t1653 * __this, Encoding_t925 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding/ForwardingDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ForwardingDecoder_GetChars_m9844 (ForwardingDecoder_t1653 * __this, ByteU5BU5D_t759* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t261* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;