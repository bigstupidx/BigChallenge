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
struct Lexer_t702;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t703;
// LitJson.FsmContext
struct FsmContext_t710;

#include "codegen/il2cpp-codegen.h"

// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C" bool Lexer_get_EndOfInput_m3674 (Lexer_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
extern "C" int32_t Lexer_get_Token_m3675 (Lexer_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
extern "C" String_t* Lexer_get_StringValue_m3676 (Lexer_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.cctor()
extern "C" void Lexer__cctor_m3677 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C" void Lexer__ctor_m3678 (Lexer_t702 * __this, TextReader_t703 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C" int32_t Lexer_HexValue_m3679 (Object_t * __this /* static, unused */, int32_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C" void Lexer_PopulateFsmTables_m3680 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C" uint16_t Lexer_ProcessEscChar_m3681 (Object_t * __this /* static, unused */, int32_t ___esc_char, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C" bool Lexer_State1_m3682 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C" bool Lexer_State2_m3683 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C" bool Lexer_State3_m3684 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C" bool Lexer_State4_m3685 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C" bool Lexer_State5_m3686 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C" bool Lexer_State6_m3687 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C" bool Lexer_State7_m3688 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C" bool Lexer_State8_m3689 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C" bool Lexer_State9_m3690 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C" bool Lexer_State10_m3691 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C" bool Lexer_State11_m3692 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C" bool Lexer_State12_m3693 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C" bool Lexer_State13_m3694 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C" bool Lexer_State14_m3695 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C" bool Lexer_State15_m3696 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C" bool Lexer_State16_m3697 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C" bool Lexer_State17_m3698 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C" bool Lexer_State18_m3699 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C" bool Lexer_State19_m3700 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C" bool Lexer_State20_m3701 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C" bool Lexer_State21_m3702 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C" bool Lexer_State22_m3703 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C" bool Lexer_State23_m3704 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C" bool Lexer_State24_m3705 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C" bool Lexer_State25_m3706 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C" bool Lexer_State26_m3707 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C" bool Lexer_State27_m3708 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C" bool Lexer_State28_m3709 (Object_t * __this /* static, unused */, FsmContext_t710 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
extern "C" bool Lexer_GetChar_m3710 (Lexer_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
extern "C" int32_t Lexer_NextChar_m3711 (Lexer_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
extern "C" bool Lexer_NextToken_m3712 (Lexer_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
extern "C" void Lexer_UngetChar_m3713 (Lexer_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
