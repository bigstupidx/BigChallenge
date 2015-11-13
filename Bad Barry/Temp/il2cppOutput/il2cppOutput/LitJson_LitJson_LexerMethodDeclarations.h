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
struct Lexer_t683;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t684;
// LitJson.FsmContext
struct FsmContext_t691;

#include "codegen/il2cpp-codegen.h"

// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C" bool Lexer_get_EndOfInput_m3599 (Lexer_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
extern "C" int32_t Lexer_get_Token_m3600 (Lexer_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
extern "C" String_t* Lexer_get_StringValue_m3601 (Lexer_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.cctor()
extern "C" void Lexer__cctor_m3602 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C" void Lexer__ctor_m3603 (Lexer_t683 * __this, TextReader_t684 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C" int32_t Lexer_HexValue_m3604 (Object_t * __this /* static, unused */, int32_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C" void Lexer_PopulateFsmTables_m3605 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C" uint16_t Lexer_ProcessEscChar_m3606 (Object_t * __this /* static, unused */, int32_t ___esc_char, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C" bool Lexer_State1_m3607 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C" bool Lexer_State2_m3608 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C" bool Lexer_State3_m3609 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C" bool Lexer_State4_m3610 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C" bool Lexer_State5_m3611 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C" bool Lexer_State6_m3612 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C" bool Lexer_State7_m3613 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C" bool Lexer_State8_m3614 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C" bool Lexer_State9_m3615 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C" bool Lexer_State10_m3616 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C" bool Lexer_State11_m3617 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C" bool Lexer_State12_m3618 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C" bool Lexer_State13_m3619 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C" bool Lexer_State14_m3620 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C" bool Lexer_State15_m3621 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C" bool Lexer_State16_m3622 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C" bool Lexer_State17_m3623 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C" bool Lexer_State18_m3624 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C" bool Lexer_State19_m3625 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C" bool Lexer_State20_m3626 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C" bool Lexer_State21_m3627 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C" bool Lexer_State22_m3628 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C" bool Lexer_State23_m3629 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C" bool Lexer_State24_m3630 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C" bool Lexer_State25_m3631 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C" bool Lexer_State26_m3632 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C" bool Lexer_State27_m3633 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C" bool Lexer_State28_m3634 (Object_t * __this /* static, unused */, FsmContext_t691 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
extern "C" bool Lexer_GetChar_m3635 (Lexer_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
extern "C" int32_t Lexer_NextChar_m3636 (Lexer_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
extern "C" bool Lexer_NextToken_m3637 (Lexer_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
extern "C" void Lexer_UngetChar_m3638 (Lexer_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
