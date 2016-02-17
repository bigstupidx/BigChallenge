#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityStandardAssets.ImageEffects.Blur
struct Blur_t1;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.RenderTexture
struct RenderTexture_t5;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffecMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "mscorlib_System_Single.h"
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Material.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "UnityEngine_UnityEngine_Shader.h"
#include "UnityEngine_UnityEngine_HideFlags.h"
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Behaviour.h"
#include "UnityEngine_UnityEngine_RenderTexture.h"
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Texture.h"
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.ImageEffects.Blur::.ctor()
extern "C" void Blur__ctor_m0 (Blur_t1 * __this, const MethodInfo* method)
{
	{
		__this->___iterations_2 = 3;
		__this->___blurSpread_3 = (0.6f);
		MonoBehaviour__ctor_m8(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::.cctor()
extern "C" void Blur__cctor_m1 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::get_material()
extern TypeInfo* Blur_t1_il2cpp_TypeInfo_var;
extern TypeInfo* Material_t4_il2cpp_TypeInfo_var;
extern "C" Material_t4 * Blur_get_material_m2 (Blur_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Blur_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Material_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Blur_t1_il2cpp_TypeInfo_var);
		Material_t4 * L_0 = ((Blur_t1_StaticFields*)Blur_t1_il2cpp_TypeInfo_var->static_fields)->___m_Material_5;
		bool L_1 = Object_op_Equality_m9(NULL /*static, unused*/, L_0, (Object_t6 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Shader_t3 * L_2 = (__this->___blurShader_4);
		Material_t4 * L_3 = (Material_t4 *)il2cpp_codegen_object_new (Material_t4_il2cpp_TypeInfo_var);
		Material__ctor_m10(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Blur_t1_il2cpp_TypeInfo_var);
		((Blur_t1_StaticFields*)Blur_t1_il2cpp_TypeInfo_var->static_fields)->___m_Material_5 = L_3;
		Material_t4 * L_4 = ((Blur_t1_StaticFields*)Blur_t1_il2cpp_TypeInfo_var->static_fields)->___m_Material_5;
		NullCheck(L_4);
		Object_set_hideFlags_m11(L_4, ((int32_t)52), /*hidden argument*/NULL);
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Blur_t1_il2cpp_TypeInfo_var);
		Material_t4 * L_5 = ((Blur_t1_StaticFields*)Blur_t1_il2cpp_TypeInfo_var->static_fields)->___m_Material_5;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::OnDisable()
extern TypeInfo* Blur_t1_il2cpp_TypeInfo_var;
extern "C" void Blur_OnDisable_m3 (Blur_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Blur_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Blur_t1_il2cpp_TypeInfo_var);
		Material_t4 * L_0 = ((Blur_t1_StaticFields*)Blur_t1_il2cpp_TypeInfo_var->static_fields)->___m_Material_5;
		bool L_1 = Object_op_Implicit_m12(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Blur_t1_il2cpp_TypeInfo_var);
		Material_t4 * L_2 = ((Blur_t1_StaticFields*)Blur_t1_il2cpp_TypeInfo_var->static_fields)->___m_Material_5;
		Object_DestroyImmediate_m13(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::Start()
extern "C" void Blur_Start_m4 (Blur_t1 * __this, const MethodInfo* method)
{
	{
		bool L_0 = SystemInfo_get_supportsImageEffects_m14(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Behaviour_set_enabled_m15(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		Shader_t3 * L_1 = (__this->___blurShader_4);
		bool L_2 = Object_op_Implicit_m12(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		Material_t4 * L_3 = Blur_get_material_m2(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Shader_t3 * L_4 = Material_get_shader_m16(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = Shader_get_isSupported_m17(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}

IL_0037:
	{
		Behaviour_set_enabled_m15(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_003f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern TypeInfo* Vector2U5BU5D_t7_il2cpp_TypeInfo_var;
extern "C" void Blur_FourTapCone_m5 (Blur_t1 * __this, RenderTexture_t5 * ___source, RenderTexture_t5 * ___dest, int32_t ___iteration, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2U5BU5D_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___iteration;
		float L_1 = (__this->___blurSpread_3);
		V_0 = ((float)((float)(0.5f)+(float)((float)((float)(((float)((float)L_0)))*(float)L_1))));
		RenderTexture_t5 * L_2 = ___source;
		RenderTexture_t5 * L_3 = ___dest;
		Material_t4 * L_4 = Blur_get_material_m2(__this, /*hidden argument*/NULL);
		Vector2U5BU5D_t7* L_5 = ((Vector2U5BU5D_t7*)SZArrayNew(Vector2U5BU5D_t7_il2cpp_TypeInfo_var, 4));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		float L_6 = V_0;
		float L_7 = V_0;
		Vector2_t8  L_8 = {0};
		Vector2__ctor_m18(&L_8, ((-L_6)), ((-L_7)), /*hidden argument*/NULL);
		(*(Vector2_t8 *)((Vector2_t8 *)(Vector2_t8 *)SZArrayLdElema(L_5, 0, sizeof(Vector2_t8 )))) = L_8;
		Vector2U5BU5D_t7* L_9 = L_5;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		float L_10 = V_0;
		float L_11 = V_0;
		Vector2_t8  L_12 = {0};
		Vector2__ctor_m18(&L_12, ((-L_10)), L_11, /*hidden argument*/NULL);
		(*(Vector2_t8 *)((Vector2_t8 *)(Vector2_t8 *)SZArrayLdElema(L_9, 1, sizeof(Vector2_t8 )))) = L_12;
		Vector2U5BU5D_t7* L_13 = L_9;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 2);
		float L_14 = V_0;
		float L_15 = V_0;
		Vector2_t8  L_16 = {0};
		Vector2__ctor_m18(&L_16, L_14, L_15, /*hidden argument*/NULL);
		(*(Vector2_t8 *)((Vector2_t8 *)(Vector2_t8 *)SZArrayLdElema(L_13, 2, sizeof(Vector2_t8 )))) = L_16;
		Vector2U5BU5D_t7* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 3);
		float L_18 = V_0;
		float L_19 = V_0;
		Vector2_t8  L_20 = {0};
		Vector2__ctor_m18(&L_20, L_18, ((-L_19)), /*hidden argument*/NULL);
		(*(Vector2_t8 *)((Vector2_t8 *)(Vector2_t8 *)SZArrayLdElema(L_17, 3, sizeof(Vector2_t8 )))) = L_20;
		Graphics_BlitMultiTap_m19(NULL /*static, unused*/, L_2, L_3, L_4, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern TypeInfo* Vector2U5BU5D_t7_il2cpp_TypeInfo_var;
extern "C" void Blur_DownSample4x_m6 (Blur_t1 * __this, RenderTexture_t5 * ___source, RenderTexture_t5 * ___dest, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2U5BU5D_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		RenderTexture_t5 * L_0 = ___source;
		RenderTexture_t5 * L_1 = ___dest;
		Material_t4 * L_2 = Blur_get_material_m2(__this, /*hidden argument*/NULL);
		Vector2U5BU5D_t7* L_3 = ((Vector2U5BU5D_t7*)SZArrayNew(Vector2U5BU5D_t7_il2cpp_TypeInfo_var, 4));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		float L_4 = V_0;
		float L_5 = V_0;
		Vector2_t8  L_6 = {0};
		Vector2__ctor_m18(&L_6, ((-L_4)), ((-L_5)), /*hidden argument*/NULL);
		(*(Vector2_t8 *)((Vector2_t8 *)(Vector2_t8 *)SZArrayLdElema(L_3, 0, sizeof(Vector2_t8 )))) = L_6;
		Vector2U5BU5D_t7* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		float L_8 = V_0;
		float L_9 = V_0;
		Vector2_t8  L_10 = {0};
		Vector2__ctor_m18(&L_10, ((-L_8)), L_9, /*hidden argument*/NULL);
		(*(Vector2_t8 *)((Vector2_t8 *)(Vector2_t8 *)SZArrayLdElema(L_7, 1, sizeof(Vector2_t8 )))) = L_10;
		Vector2U5BU5D_t7* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		float L_12 = V_0;
		float L_13 = V_0;
		Vector2_t8  L_14 = {0};
		Vector2__ctor_m18(&L_14, L_12, L_13, /*hidden argument*/NULL);
		(*(Vector2_t8 *)((Vector2_t8 *)(Vector2_t8 *)SZArrayLdElema(L_11, 2, sizeof(Vector2_t8 )))) = L_14;
		Vector2U5BU5D_t7* L_15 = L_11;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 3);
		float L_16 = V_0;
		float L_17 = V_0;
		Vector2_t8  L_18 = {0};
		Vector2__ctor_m18(&L_18, L_16, ((-L_17)), /*hidden argument*/NULL);
		(*(Vector2_t8 *)((Vector2_t8 *)(Vector2_t8 *)SZArrayLdElema(L_15, 3, sizeof(Vector2_t8 )))) = L_18;
		Graphics_BlitMultiTap_m19(NULL /*static, unused*/, L_0, L_1, L_2, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Blur_OnRenderImage_m7 (Blur_t1 * __this, RenderTexture_t5 * ___source, RenderTexture_t5 * ___destination, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_t5 * V_2 = {0};
	int32_t V_3 = 0;
	RenderTexture_t5 * V_4 = {0};
	{
		RenderTexture_t5 * L_0 = ___source;
		NullCheck(L_0);
		int32_t L_1 = RenderTexture_get_width_m20(L_0, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1/(int32_t)4));
		RenderTexture_t5 * L_2 = ___source;
		NullCheck(L_2);
		int32_t L_3 = RenderTexture_get_height_m21(L_2, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_3/(int32_t)4));
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		RenderTexture_t5 * L_6 = RenderTexture_GetTemporary_m22(NULL /*static, unused*/, L_4, L_5, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		RenderTexture_t5 * L_7 = ___source;
		RenderTexture_t5 * L_8 = V_2;
		Blur_DownSample4x_m6(__this, L_7, L_8, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_004b;
	}

IL_002a:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		RenderTexture_t5 * L_11 = RenderTexture_GetTemporary_m22(NULL /*static, unused*/, L_9, L_10, 0, /*hidden argument*/NULL);
		V_4 = L_11;
		RenderTexture_t5 * L_12 = V_2;
		RenderTexture_t5 * L_13 = V_4;
		int32_t L_14 = V_3;
		Blur_FourTapCone_m5(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		RenderTexture_t5 * L_15 = V_2;
		RenderTexture_ReleaseTemporary_m23(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		RenderTexture_t5 * L_16 = V_4;
		V_2 = L_16;
		int32_t L_17 = V_3;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = (__this->___iterations_2);
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_002a;
		}
	}
	{
		RenderTexture_t5 * L_20 = V_2;
		RenderTexture_t5 * L_21 = ___destination;
		Graphics_Blit_m24(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		RenderTexture_t5 * L_22 = V_2;
		RenderTexture_ReleaseTemporary_m23(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
