#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3411951076;
// LitJson.WriterContext
struct WriterContext_t3079472833;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t1354911572;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.IO.TextWriter
struct TextWriter_t1689927879;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonWriter
struct  JsonWriter_t3021344960  : public Il2CppObject
{
public:
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t3079472833 * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t1354911572 * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t3416858730* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t3822575854 * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t1689927879 * ___writer_10;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(JsonWriter_t3021344960, ___context_1)); }
	inline WriterContext_t3079472833 * get_context_1() const { return ___context_1; }
	inline WriterContext_t3079472833 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(WriterContext_t3079472833 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier(&___context_1, value);
	}

	inline static int32_t get_offset_of_ctx_stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t3021344960, ___ctx_stack_2)); }
	inline Stack_1_t1354911572 * get_ctx_stack_2() const { return ___ctx_stack_2; }
	inline Stack_1_t1354911572 ** get_address_of_ctx_stack_2() { return &___ctx_stack_2; }
	inline void set_ctx_stack_2(Stack_1_t1354911572 * value)
	{
		___ctx_stack_2 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_stack_2, value);
	}

	inline static int32_t get_offset_of_has_reached_end_3() { return static_cast<int32_t>(offsetof(JsonWriter_t3021344960, ___has_reached_end_3)); }
	inline bool get_has_reached_end_3() const { return ___has_reached_end_3; }
	inline bool* get_address_of_has_reached_end_3() { return &___has_reached_end_3; }
	inline void set_has_reached_end_3(bool value)
	{
		___has_reached_end_3 = value;
	}

	inline static int32_t get_offset_of_hex_seq_4() { return static_cast<int32_t>(offsetof(JsonWriter_t3021344960, ___hex_seq_4)); }
	inline CharU5BU5D_t3416858730* get_hex_seq_4() const { return ___hex_seq_4; }
	inline CharU5BU5D_t3416858730** get_address_of_hex_seq_4() { return &___hex_seq_4; }
	inline void set_hex_seq_4(CharU5BU5D_t3416858730* value)
	{
		___hex_seq_4 = value;
		Il2CppCodeGenWriteBarrier(&___hex_seq_4, value);
	}

	inline static int32_t get_offset_of_indentation_5() { return static_cast<int32_t>(offsetof(JsonWriter_t3021344960, ___indentation_5)); }
	inline int32_t get_indentation_5() const { return ___indentation_5; }
	inline int32_t* get_address_of_indentation_5() { return &___indentation_5; }
	inline void set_indentation_5(int32_t value)
	{
		___indentation_5 = value;
	}

	inline static int32_t get_offset_of_indent_value_6() { return static_cast<int32_t>(offsetof(JsonWriter_t3021344960, ___indent_value_6)); }
	inline int32_t get_indent_value_6() const { return ___indent_value_6; }
	inline int32_t* get_address_of_indent_value_6() { return &___indent_value_6; }
	inline void set_indent_value_6(int32_t value)
	{
		___indent_value_6 = value;
	}

	inline static int32_t get_offset_of_inst_string_builder_7() { return static_cast<int32_t>(offsetof(JsonWriter_t3021344960, ___inst_string_builder_7)); }
	inline StringBuilder_t3822575854 * get_inst_string_builder_7() const { return ___inst_string_builder_7; }
	inline StringBuilder_t3822575854 ** get_address_of_inst_string_builder_7() { return &___inst_string_builder_7; }
	inline void set_inst_string_builder_7(StringBuilder_t3822575854 * value)
	{
		___inst_string_builder_7 = value;
		Il2CppCodeGenWriteBarrier(&___inst_string_builder_7, value);
	}

	inline static int32_t get_offset_of_pretty_print_8() { return static_cast<int32_t>(offsetof(JsonWriter_t3021344960, ___pretty_print_8)); }
	inline bool get_pretty_print_8() const { return ___pretty_print_8; }
	inline bool* get_address_of_pretty_print_8() { return &___pretty_print_8; }
	inline void set_pretty_print_8(bool value)
	{
		___pretty_print_8 = value;
	}

	inline static int32_t get_offset_of_validate_9() { return static_cast<int32_t>(offsetof(JsonWriter_t3021344960, ___validate_9)); }
	inline bool get_validate_9() const { return ___validate_9; }
	inline bool* get_address_of_validate_9() { return &___validate_9; }
	inline void set_validate_9(bool value)
	{
		___validate_9 = value;
	}

	inline static int32_t get_offset_of_writer_10() { return static_cast<int32_t>(offsetof(JsonWriter_t3021344960, ___writer_10)); }
	inline TextWriter_t1689927879 * get_writer_10() const { return ___writer_10; }
	inline TextWriter_t1689927879 ** get_address_of_writer_10() { return &___writer_10; }
	inline void set_writer_10(TextWriter_t1689927879 * value)
	{
		___writer_10 = value;
		Il2CppCodeGenWriteBarrier(&___writer_10, value);
	}
};

struct JsonWriter_t3021344960_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t3411951076 * ___number_format_0;

public:
	inline static int32_t get_offset_of_number_format_0() { return static_cast<int32_t>(offsetof(JsonWriter_t3021344960_StaticFields, ___number_format_0)); }
	inline NumberFormatInfo_t3411951076 * get_number_format_0() const { return ___number_format_0; }
	inline NumberFormatInfo_t3411951076 ** get_address_of_number_format_0() { return &___number_format_0; }
	inline void set_number_format_0(NumberFormatInfo_t3411951076 * value)
	{
		___number_format_0 = value;
		Il2CppCodeGenWriteBarrier(&___number_format_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
