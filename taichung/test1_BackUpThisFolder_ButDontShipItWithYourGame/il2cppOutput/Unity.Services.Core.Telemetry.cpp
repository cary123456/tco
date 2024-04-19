#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_t8FD5C7F0C22A371C71196C9A42D80E0E47EAC1C8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Unity.Services.Core.Telemetry.Internal.Diagnostics
struct Diagnostics_t24C9DED6F621BBF7D712D62FD3776D29B3CE5012;
// Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory
struct DiagnosticsFactory_tD2C64CDF0CC356965DB1993359515DC82D715CF2;
// Unity.Services.Core.Telemetry.Internal.IDiagnostics
struct IDiagnostics_tC5C252A201DC608FD4FA8B95CB546ACE5400345E;
// Unity.Services.Core.Telemetry.Internal.IMetrics
struct IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5;
// Unity.Services.Core.Telemetry.Internal.Metrics
struct Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1;
// Unity.Services.Core.Telemetry.Internal.MetricsFactory
struct MetricsFactory_tFED08C34B8CB569B801796787E82F2818606FA05;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* Diagnostics_t24C9DED6F621BBF7D712D62FD3776D29B3CE5012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA8E35B180310D6046FB6F4D10E1B4A172B9C0215 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// Unity.Services.Core.Telemetry.Internal.Diagnostics
struct Diagnostics_t24C9DED6F621BBF7D712D62FD3776D29B3CE5012  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Diagnostics::<PackageTags>k__BackingField
	RuntimeObject* ___U3CPackageTagsU3Ek__BackingField_0;
};

// Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory
struct DiagnosticsFactory_tD2C64CDF0CC356965DB1993359515DC82D715CF2  : public RuntimeObject
{
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::<CommonTags>k__BackingField
	RuntimeObject* ___U3CCommonTagsU3Ek__BackingField_0;
};

// Unity.Services.Core.Telemetry.Internal.Metrics
struct Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Metrics::<PackageTags>k__BackingField
	RuntimeObject* ___U3CPackageTagsU3Ek__BackingField_0;
};

// Unity.Services.Core.Telemetry.Internal.MetricsFactory
struct MetricsFactory_tFED08C34B8CB569B801796787E82F2818606FA05  : public RuntimeObject
{
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.MetricsFactory::<CommonTags>k__BackingField
	RuntimeObject* ___U3CCommonTagsU3Ek__BackingField_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Telemetry.Internal.Diagnostics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics__ctor_m2CF108329965DFBA2D13399A65E9D5D47BF63BD8 (Diagnostics_t24C9DED6F621BBF7D712D62FD3776D29B3CE5012* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Telemetry.Internal.Metrics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metrics__ctor_m6318435D0C0C0AD81ABC2B7D542FE92D7B5C7D79 (Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Telemetry.Internal.Diagnostics::SendDiagnostic(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SendDiagnostic_mF569E18F0662E882CD37D4BC894BC085CB222D08 (Diagnostics_t24C9DED6F621BBF7D712D62FD3776D29B3CE5012* __this, String_t* ___name0, String_t* ___message1, RuntimeObject* ___tags2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.Diagnostics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics__ctor_m2CF108329965DFBA2D13399A65E9D5D47BF63BD8 (Diagnostics_t24C9DED6F621BBF7D712D62FD3776D29B3CE5012* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal IDictionary<string, string> PackageTags { get; } = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___U3CPackageTagsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPackageTagsU3Ek__BackingField_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::get_CommonTags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsFactory_get_CommonTags_mA08B1FB6FCB5AB504EF2ED3C2ED27EF41C442B7C (DiagnosticsFactory_tD2C64CDF0CC356965DB1993359515DC82D715CF2* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyDictionary<string, string> CommonTags { get; } = new Dictionary<string, string>();
		RuntimeObject* L_0 = __this->___U3CCommonTagsU3Ek__BackingField_0;
		return L_0;
	}
}
// Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsFactory_Create_mE152323E55C07B54470CB90071252FF5F24A138B (DiagnosticsFactory_tD2C64CDF0CC356965DB1993359515DC82D715CF2* __this, String_t* ___packageName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Diagnostics_t24C9DED6F621BBF7D712D62FD3776D29B3CE5012_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Diagnostics();
		Diagnostics_t24C9DED6F621BBF7D712D62FD3776D29B3CE5012* L_0 = (Diagnostics_t24C9DED6F621BBF7D712D62FD3776D29B3CE5012*)il2cpp_codegen_object_new(Diagnostics_t24C9DED6F621BBF7D712D62FD3776D29B3CE5012_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Diagnostics__ctor_m2CF108329965DFBA2D13399A65E9D5D47BF63BD8(L_0, NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsFactory__ctor_m6AFD4725FFA4F4054B13917A376B8BE059AF4D27 (DiagnosticsFactory_tD2C64CDF0CC356965DB1993359515DC82D715CF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IReadOnlyDictionary<string, string> CommonTags { get; } = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___U3CCommonTagsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCommonTagsU3Ek__BackingField_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Telemetry.Internal.Metrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendGaugeMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric_m44A74F915A2C4302A6BF07BE010D16D9793D7BE6 (Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1* __this, String_t* ___name0, double ___value1, RuntimeObject* ___tags2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.Metrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric_mA7EB1B96D0F7E39A951A68AF58BF6A455E27C9ED (Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1* __this, String_t* ___name0, double ___time1, RuntimeObject* ___tags2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.Metrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric_m3698244EA67D8736E51D84935E05E2DEB290C6A8 (Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1* __this, String_t* ___name0, double ___value1, RuntimeObject* ___tags2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.Metrics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metrics__ctor_m6318435D0C0C0AD81ABC2B7D542FE92D7B5C7D79 (Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal IDictionary<string, string> PackageTags { get; } = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___U3CPackageTagsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPackageTagsU3Ek__BackingField_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.MetricsFactory::get_CommonTags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsFactory_get_CommonTags_m8B0B37504BB0C83E60181E6C273B5710E595B37E (MetricsFactory_tFED08C34B8CB569B801796787E82F2818606FA05* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyDictionary<string, string> CommonTags { get; } = new Dictionary<string, string>();
		RuntimeObject* L_0 = __this->___U3CCommonTagsU3Ek__BackingField_0;
		return L_0;
	}
}
// Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.MetricsFactory::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsFactory_Create_m6DCE478FE70DE3D0533A150550812CE038D8CD46 (MetricsFactory_tFED08C34B8CB569B801796787E82F2818606FA05* __this, String_t* ___packageName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Metrics();
		Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1* L_0 = (Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1*)il2cpp_codegen_object_new(Metrics_t64BEB1BA35E4B6D2D709508D665841289875F1D1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Metrics__ctor_m6318435D0C0C0AD81ABC2B7D542FE92D7B5C7D79(L_0, NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.MetricsFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricsFactory__ctor_mD15F90B2C781DE2B48F41556FECEFAB2347AFC0C (MetricsFactory_tFED08C34B8CB569B801796787E82F2818606FA05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IReadOnlyDictionary<string, string> CommonTags { get; } = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___U3CCommonTagsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCommonTagsU3Ek__BackingField_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
