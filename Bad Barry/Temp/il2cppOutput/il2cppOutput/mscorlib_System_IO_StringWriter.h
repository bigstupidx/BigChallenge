#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t1_144;

#include "mscorlib_System_IO_TextWriter.h"

// System.IO.StringWriter
struct  StringWriter_t1_254  : public TextWriter_t1_252
{
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t1_144 * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;
};
