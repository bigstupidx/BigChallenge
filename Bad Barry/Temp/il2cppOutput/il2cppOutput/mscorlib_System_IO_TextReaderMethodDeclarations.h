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

// System.IO.TextReader
struct TextReader_t684;
// System.Char[]
struct CharU5BU5D_t239;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.TextReader::.ctor()
extern "C" void TextReader__ctor_m7938 (TextReader_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::.cctor()
extern "C" void TextReader__cctor_m7939 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Close()
extern "C" void TextReader_Close_m7940 (TextReader_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
extern "C" void TextReader_Dispose_m7941 (TextReader_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose(System.Boolean)
extern "C" void TextReader_Dispose_m7942 (TextReader_t684 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Peek()
extern "C" int32_t TextReader_Peek_m7943 (TextReader_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read()
extern "C" int32_t TextReader_Read_m7944 (TextReader_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t TextReader_Read_m7945 (TextReader_t684 * __this, CharU5BU5D_t239* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadLine()
extern "C" String_t* TextReader_ReadLine_m7946 (TextReader_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadToEnd()
extern "C" String_t* TextReader_ReadToEnd_m7947 (TextReader_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
extern "C" TextReader_t684 * TextReader_Synchronized_m7948 (Object_t * __this /* static, unused */, TextReader_t684 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
