#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextReader
struct TextReader_t716;

#include "mscorlib_System_IO_TextReader.h"

// System.IO.SynchronizedReader
struct  SynchronizedReader_t1320  : public TextReader_t716
{
	// System.IO.TextReader System.IO.SynchronizedReader::reader
	TextReader_t716 * ___reader_1;
};
