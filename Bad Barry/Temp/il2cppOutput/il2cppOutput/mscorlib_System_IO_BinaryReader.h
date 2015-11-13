#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t851;
// System.Text.Encoding
struct Encoding_t906;
// System.Byte[]
struct ByteU5BU5D_t740;
// System.Text.Decoder
struct Decoder_t1258;
// System.Char[]
struct CharU5BU5D_t239;

#include "mscorlib_System_Object.h"

// System.IO.BinaryReader
struct  BinaryReader_t1257  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t851 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t906 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t740* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t1258 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t239* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;
};
