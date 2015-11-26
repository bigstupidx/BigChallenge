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

// LitJson.Lexer
struct Lexer_t5_16;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1_143;
// LitJson.FsmContext
struct FsmContext_t5_19;

#include "codegen/il2cpp-codegen.h"

// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C" bool Lexer_get_EndOfInput_m5_129 (Lexer_t5_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
extern "C" int32_t Lexer_get_Token_m5_130 (Lexer_t5_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
extern "C" String_t* Lexer_get_StringValue_m5_131 (Lexer_t5_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.cctor()
extern "C" void Lexer__cctor_m5_132 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C" void Lexer__ctor_m5_133 (Lexer_t5_16 * __this, TextReader_t1_143 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C" int32_t Lexer_HexValue_m5_134 (Object_t * __this /* static, unused */, int32_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C" void Lexer_PopulateFsmTables_m5_135 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C" uint16_t Lexer_ProcessEscChar_m5_136 (Object_t * __this /* static, unused */, int32_t ___esc_char, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C" bool Lexer_State1_m5_137 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C" bool Lexer_State2_m5_138 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C" bool Lexer_State3_m5_139 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C" bool Lexer_State4_m5_140 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C" bool Lexer_State5_m5_141 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C" bool Lexer_State6_m5_142 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C" bool Lexer_State7_m5_143 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C" bool Lexer_State8_m5_144 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C" bool Lexer_State9_m5_145 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C" bool Lexer_State10_m5_146 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C" bool Lexer_State11_m5_147 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C" bool Lexer_State12_m5_148 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C" bool Lexer_State13_m5_149 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C" bool Lexer_State14_m5_150 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C" bool Lexer_State15_m5_151 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C" bool Lexer_State16_m5_152 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C" bool Lexer_State17_m5_153 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C" bool Lexer_State18_m5_154 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C" bool Lexer_State19_m5_155 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C" bool Lexer_State20_m5_156 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C" bool Lexer_State21_m5_157 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C" bool Lexer_State22_m5_158 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C" bool Lexer_State23_m5_159 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C" bool Lexer_State24_m5_160 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C" bool Lexer_State25_m5_161 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C" bool Lexer_State26_m5_162 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C" bool Lexer_State27_m5_163 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C" bool Lexer_State28_m5_164 (Object_t * __this /* static, unused */, FsmContext_t5_19 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
extern "C" bool Lexer_GetChar_m5_165 (Lexer_t5_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
extern "C" int32_t Lexer_NextChar_m5_166 (Lexer_t5_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
extern "C" bool Lexer_NextToken_m5_167 (Lexer_t5_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
extern "C" void Lexer_UngetChar_m5_168 (Lexer_t5_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
