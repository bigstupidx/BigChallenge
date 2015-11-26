#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1_159;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t5_21;
// LitJson.FsmContext
struct FsmContext_t5_19;
// System.IO.TextReader
struct TextReader_t1_143;
// System.Text.StringBuilder
struct StringBuilder_t1_144;
// System.String
struct String_t;
// LitJson.Lexer/StateHandler
struct StateHandler_t5_20;

#include "mscorlib_System_Object.h"

// LitJson.Lexer
struct  Lexer_t5_16  : public Object_t
{
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t5_19 * ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_t1_143 * ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t1_144 * ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;
};
struct Lexer_t5_16_StaticFields{
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t1_159* ___fsm_return_table_0;
	// LitJson.Lexer/StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_t5_21* ___fsm_handler_table_1;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache0
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache0_14;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache1_15;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache2
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache2_16;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache3
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache3_17;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache4
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache4_18;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache5
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache5_19;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache6
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache6_20;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache7
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache7_21;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache8
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache8_22;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache9
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache9_23;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheA
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cacheA_24;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheB
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cacheB_25;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheC
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cacheC_26;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheD
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cacheD_27;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheE
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cacheE_28;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheF
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cacheF_29;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache10
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache10_30;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache11
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache11_31;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache12
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache12_32;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache13
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache13_33;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache14
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache14_34;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache15
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache15_35;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache16
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache16_36;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache17
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache17_37;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache18
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache18_38;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache19
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache19_39;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1A
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache1A_40;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1B
	StateHandler_t5_20 * ___U3CU3Ef__mgU24cache1B_41;
};
