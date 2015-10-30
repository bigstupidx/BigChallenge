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

// System.Text.UTF32Encoding
struct UTF32Encoding_t1559;
// System.Char[]
struct CharU5BU5D_t218;
// System.Byte[]
struct ByteU5BU5D_t644;
// System.Text.Decoder
struct Decoder_t1179;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UTF32Encoding::.ctor()
extern "C" void UTF32Encoding__ctor_m9429 (UTF32Encoding_t1559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UTF32Encoding__ctor_m9430 (UTF32Encoding_t1559 * __this, bool ___bigEndian, bool ___byteOrderMark, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern "C" void UTF32Encoding__ctor_m9431 (UTF32Encoding_t1559 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidCharacters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UTF32Encoding_GetByteCount_m9432 (UTF32Encoding_t1559 * __this, CharU5BU5D_t218* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m9433 (UTF32Encoding_t1559 * __this, CharU5BU5D_t218* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t644* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UTF32Encoding_GetCharCount_m9434 (UTF32Encoding_t1559 * __this, ByteU5BU5D_t644* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF32Encoding_GetChars_m9435 (UTF32Encoding_t1559 * __this, ByteU5BU5D_t644* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t218* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t UTF32Encoding_GetMaxByteCount_m9436 (UTF32Encoding_t1559 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t UTF32Encoding_GetMaxCharCount_m9437 (UTF32Encoding_t1559 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF32Encoding::GetDecoder()
extern "C" Decoder_t1179 * UTF32Encoding_GetDecoder_m9438 (UTF32Encoding_t1559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF32Encoding::GetPreamble()
extern "C" ByteU5BU5D_t644* UTF32Encoding_GetPreamble_m9439 (UTF32Encoding_t1559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF32Encoding::Equals(System.Object)
extern "C" bool UTF32Encoding_Equals_m9440 (UTF32Encoding_t1559 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetHashCode()
extern "C" int32_t UTF32Encoding_GetHashCode_m9441 (UTF32Encoding_t1559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t UTF32Encoding_GetByteCount_m9442 (UTF32Encoding_t1559 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.String)
extern "C" int32_t UTF32Encoding_GetByteCount_m9443 (UTF32Encoding_t1559 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m9444 (UTF32Encoding_t1559 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m9445 (UTF32Encoding_t1559 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t644* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF32Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UTF32Encoding_GetString_m9446 (UTF32Encoding_t1559 * __this, ByteU5BU5D_t644* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
