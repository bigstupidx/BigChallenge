﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t913;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t324;

#include "mscorlib_System_Object.h"

// Microsoft.Win32.KeyHandler
struct  KeyHandler_t1228  : public Object_t
{
	// System.String Microsoft.Win32.KeyHandler::Dir
	String_t* ___Dir_2;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::values
	Hashtable_t913 * ___values_3;
	// System.String Microsoft.Win32.KeyHandler::file
	String_t* ___file_4;
	// System.Boolean Microsoft.Win32.KeyHandler::dirty
	bool ___dirty_5;
};
struct KeyHandler_t1228_StaticFields{
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::key_to_handler
	Hashtable_t913 * ___key_to_handler_0;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::dir_to_handler
	Hashtable_t913 * ___dir_to_handler_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Microsoft.Win32.KeyHandler::<>f__switch$map1
	Dictionary_2_t324 * ___U3CU3Ef__switchU24map1_6;
};