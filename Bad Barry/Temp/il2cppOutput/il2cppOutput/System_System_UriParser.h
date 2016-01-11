#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t868;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t678;

#include "mscorlib_System_Object.h"

// System.UriParser
struct  UriParser_t1113  : public Object_t
{
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name_2;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port_3;
};
struct UriParser_t1113_StaticFields{
	// System.Object System.UriParser::lock_object
	Object_t * ___lock_object_0;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_t868 * ___table_1;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t678 * ___uri_regex_4;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t678 * ___auth_regex_5;
};
