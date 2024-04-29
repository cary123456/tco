#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t815A43BFBA64EC1F9F92AD042622E80EED65712E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>
struct Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>
struct Dictionary_2_t17FA99183E9D8EE37CED1732C9C4B6F25FE14B00;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t98F67E85D63B9861BE87D18EF2AEE6BC078DC067;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Qos.Http.IDeserializable>
struct Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>
struct Func_1_t951450D17F31277D24526D3476548479EA423E04;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>
struct Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>,System.String>
struct Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,Unity.Services.Qos.Http.IDeserializable>
struct Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B;
// System.Func`2<System.Collections.Generic.List`1<System.Object>,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>
struct Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55;
// System.Func`2<System.Object,Unity.Services.Qos.Http.IDeserializable>
struct Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Boolean>
struct IDictionary_2_t82577BC504E853384F0E2CEB9AC076A543599C23;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>>
struct IEnumerable_1_tD1C6F697DB43B121B60D1B0D07A56EA43995E0EB;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>
struct IEnumerable_1_t01785BC3740B685371AE750109DBBCB84B546BC6;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<System.Object>>
struct IEnumerable_1_t411113C7F99EB07001B7B09E0ECA58EA6561E3BC;
// System.Collections.Generic.IEnumerable`1<Unity.Services.Qos.Http.IDeserializable>
struct IEnumerable_1_tAA1A991319FDAB507C0779C040AABAE8BF63F2E4;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tDBA96AAC21C7C21D26B68A9F19E6AE4E015D2316;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t106D4C1340745E38431865BBEA6AE170A4713431;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Boolean>
struct KeyCollection_t9EF74C041A3EBB05C9706A36D5D7777041582F26;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>
struct KeyCollection_t6A1E8B6F37E66D5DBB17C4C29D85A19232BDAB92;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Object>>
struct KeyCollection_t75F8B6F496D51CA6BD1317579256775F37402E90;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Services.Qos.Http.IDeserializable>
struct KeyCollection_tD35BDC1A89C6A17FE7136C7754C01BB2A825776D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>
struct List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>
struct List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9;
// System.Collections.Generic.List`1<Unity.Services.Qos.ErrorMitigation.ExceptionPredicate>
struct List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441;
// System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>
struct List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C;
// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>
struct List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t58901670B7FA44803364AA3059A3F981A991011A;
// System.Collections.Generic.List`1<Unity.Services.Qos.Http.JsonObject>
struct List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// Unity.Services.Qos.Response`1<System.Object>
struct Response_1_t67079F6E4F63FACFADE6AE83B5E8C8249BB3895D;
// Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>
struct Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA;
// Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>
struct Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B;
// System.Threading.Tasks.TaskCompletionSource`1<Unity.Services.Qos.Http.HttpClientResponse>
struct TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>>
struct TaskFactory_1_tCB05B346FFED792C471009D0682D2430C7402052;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>>
struct TaskFactory_1_t5C27AFC5FF18A8157417D28A03395CD1A71D9DD0;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>
struct TaskFactory_1_tBF850CB9D8916971A5570977F0C8FB7816E76250;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Qos.Http.HttpClientResponse>
struct TaskFactory_1_t77018BDA91AB0465CE4EBA777535BF2683707236;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.Task`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>>
struct Task_1_t3ACB2F1474F202DC1D1177836C7669963263F595;
// System.Threading.Tasks.Task`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>>
struct Task_1_tDAC25724227FDF2BAD68608CF2408FED59281FA0;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>
struct Task_1_tFD4D83E09A0B2DA998E9E2957AD742748E683BC3;
// System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>
struct Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>
struct ValueCollection_tD1BDCB78C7798257BAE7A6161EB6F235999D6CBA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>
struct ValueCollection_tF06E6C85F1F5244958EB5306841E9A0749F9183B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Object>>
struct ValueCollection_tA75E65303A02F28ACADBA3D5619220CA79EA6538;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Services.Qos.Http.IDeserializable>
struct ValueCollection_tAED95ABB3760E590A144E6BCD54E4C7758ED30D1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Boolean>[]
struct EntryU5BU5D_t8E6FFD94702C3993BEFE09EF18EADDFFE97A7797;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>[]
struct EntryU5BU5D_t7149165989419F2E2984BA5D3BE713CC9F9CD6CA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Object>>[]
struct EntryU5BU5D_tA20D52D4C7470968926346F8583C94BECFE0E144;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Services.Qos.Http.IDeserializable>[]
struct EntryU5BU5D_t3D49652BE77D500110A873CDFA4B6A81D845A7F6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92;
// System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>[]
struct List_1U5BU5D_t74B261FD1828780CA1DD6FF2E67CAFE10032249D;
// System.Collections.Generic.List`1<System.Object>[]
struct List_1U5BU5D_tB40362575E2E5EBEFC13C380165A5E7D845985F0;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Unity.Services.Qos.ErrorMitigation.ExceptionPredicate[]
struct ExceptionPredicateU5BU5D_tDE49151A8BECA117407FE3AB2F0FBC1D5AFA54B5;
// Unity.Services.Qos.Http.IDeserializable[]
struct IDeserializableU5BU5D_t3079519A8D0EFD091C9C4A713EEB3A6B900F36A5;
// UnityEngine.Networking.IMultipartFormSection[]
struct IMultipartFormSectionU5BU5D_t665EF3A0485239BDC58B5C8934196EF568AF2EC3;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E;
// Unity.Services.Qos.Http.JsonObject[]
struct JsonObjectU5BU5D_tE501D31F62BF56308B46A0690EE84003E7DEBD84;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Unity.Services.Qos.Http.BaseApiClient
struct BaseApiClient_tB66E602A31C006C82CE3B68569B79BB3F1029657;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Unity.Services.Qos.Configuration
struct Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// Unity.Services.Qos.ErrorMitigation.ExceptionPredicate
struct ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// Unity.Services.Qos.QosDiscovery.GetServersRequest
struct GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A;
// Unity.Services.Qos.QosDiscovery.GetServiceServersRequest
struct GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Unity.Services.Qos.Http.HttpClient
struct HttpClient_t33C65C4AD210DC5BA7E9DA2E12485D3F71D25E02;
// Unity.Services.Qos.Http.HttpClientResponse
struct HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5;
// Unity.Services.Qos.Http.HttpException
struct HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E;
// Unity.Services.Authentication.Internal.IAccessToken
struct IAccessToken_t8A8955010FD3200218D16D50699C60F922877720;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// Unity.Services.Qos.Http.IDeserializable
struct IDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Unity.Services.Qos.Http.IHttpClient
struct IHttpClient_t8663A7C7502C10C91F3F08F4781480090C10C0B5;
// UnityEngine.Networking.IMultipartFormSection
struct IMultipartFormSection_tE1168E22BCEDEA1E27862494E225B2E7B4C56BDF;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Newtonsoft.Json.Linq.JArray
struct JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// Unity.Services.Qos.Http.JsonObject
struct JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6;
// Unity.Services.Qos.Http.JsonObjectCollectionConverter
struct JsonObjectCollectionConverter_tF92B2E8F1BD0F1957E81E30EB77D5AFB80BE01EB;
// Unity.Services.Qos.Http.JsonObjectConverter
struct JsonObjectConverter_t0BB57AC3C22D0CC9C0EB390FA84472ABE9C7A873;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Networking.MultipartFormFileSection
struct MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD;
// Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest
struct QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66;
// Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient
struct QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11;
// Unity.Services.Qos.Models.QosServersList
struct QosServersList_t72F7A682056C825F0F93D9C47BC8536EF0650A23;
// Unity.Services.Qos.Models.QosServersResponseBody
struct QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE;
// Unity.Services.Qos.Models.QosServiceServersList
struct QosServiceServersList_t23E98A2F526DF577081813318A6D8DED35508DB3;
// Unity.Services.Qos.Models.QosServiceServersResponseBody
struct QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// Unity.Services.Qos.Http.ResponseDeserializationException
struct ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC;
// Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig
struct RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86;
// Unity.Services.Qos.ErrorMitigation.RetryPolicyProvider
struct RetryPolicyProvider_tF2CA7CE7115C87D73B2EDE3E0788DB5F68C97C6A;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig
struct StatusCodePolicyConfig_tFD3280C6F240EE942B600E35BEE1E6FB08908B67;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c
struct U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B;
// Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c
struct U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9;
// Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E;
// Unity.Services.Qos.Http.JsonObject/<>c
struct U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Unity.Services.Qos.Http.UnityWebRequestHelpers/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EngineStateHelper_t111E9015912A912511CB9A457EDE85BDF822F702_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t951450D17F31277D24526D3476548479EA423E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAccessToken_t8A8955010FD3200218D16D50699C60F922877720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t907A7898CAA81078DDC73DD3DE5963D881290CB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t82577BC504E853384F0E2CEB9AC076A543599C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHttpClient_t8663A7C7502C10C91F3F08F4781480090C10C0B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOneOf_tED528A9650C56E6514B4BB58A8C668FCF149CB74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadHelper_tF58404F9CCFE15FDEE933550EA8A3361070265CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral10582F33BEC60F8D94857543561434810C767C0E;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92;
IL2CPP_EXTERN_C String_t* _stringLiteral1E21F4B49768AD7D30A7C5FD56FEA14D5B05B1DA;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral22A32FA91466F5B534952F7DED80422026DEB4A5;
IL2CPP_EXTERN_C String_t* _stringLiteral304C866293B303A238BCAF995158C2759D5D4D43;
IL2CPP_EXTERN_C String_t* _stringLiteral33367E1D9E43F13640226E397C761CCF888E328A;
IL2CPP_EXTERN_C String_t* _stringLiteral354F14B133FA2E772AC9587C76169889CF8F1991;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral37CFF4443C0C75F552D0FFE853490A4ECEEE7B2F;
IL2CPP_EXTERN_C String_t* _stringLiteral3E43A0EBC9A4E28C8F5511B105EFCCCDAF11029C;
IL2CPP_EXTERN_C String_t* _stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E;
IL2CPP_EXTERN_C String_t* _stringLiteral50863FE64FB84E5522BDDE89CF1B95FBD9FEBDCA;
IL2CPP_EXTERN_C String_t* _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral62EA7B89319D021FF6C2C425E7E16557C7EFC940;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral66824423E27E7D4D24A1701DAD42F495A795841C;
IL2CPP_EXTERN_C String_t* _stringLiteral6EAC4E24F681728C8817F751199A34963F88B4FD;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4F2A0469E8D46CDAE4CE79C4C4756DBACE8064;
IL2CPP_EXTERN_C String_t* _stringLiteral87A2FD6A7D5D2E3EB03CB60BF4EB21F706F6BA57;
IL2CPP_EXTERN_C String_t* _stringLiteral8AA961E914CD1D587EB94CC5E82EFA76731DF41B;
IL2CPP_EXTERN_C String_t* _stringLiteral8C4247F9B0FD56B2749513C5AD9B83832F156D7E;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E2A0AF17AD799ECD9CA025D599F108129A8D1AA;
IL2CPP_EXTERN_C String_t* _stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89;
IL2CPP_EXTERN_C String_t* _stringLiteralA13BD92D1C37D8A9D5F5B55BE8AF29125142F2D1;
IL2CPP_EXTERN_C String_t* _stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B7E2C1230709693F958484EC1F795412676C76;
IL2CPP_EXTERN_C String_t* _stringLiteralBB5ABC7585284D49A008F7DEC5A45F30C022133A;
IL2CPP_EXTERN_C String_t* _stringLiteralC100E808C118A6CE135012FEB647C51CFB84C6A3;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC;
IL2CPP_EXTERN_C String_t* _stringLiteralC9E4A16C4AD972E8CC593A8BC4AEACF815369120;
IL2CPP_EXTERN_C String_t* _stringLiteralD8C2748ABEB1645A125600047214EE807656EF2D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA;
IL2CPP_EXTERN_C String_t* _stringLiteralFD1A4077A7A9AD01BCF1543EE9486F76123440B9;
IL2CPP_EXTERN_C String_t* _stringLiteralFF422A9E006CB794118A967A65E02B9FA07C4F6D;
IL2CPP_EXTERN_C const RuntimeMethod* AotHelper_EnsureType_TisJsonObjectConverter_t0BB57AC3C22D0CC9C0EB390FA84472ABE9C7A873_m768B3036F9C0932800F2472FB9B384873025789F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AotHelper_EnsureType_TisStringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_m6A1C428F1F47D693B537597E785391C4D42AD480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_mF8AD6F564DD51AEA9D2D6CD7ECFE8A31545EE3FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_m550F0210FF879BBF4E22ABE2DF80DC07249743D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m77D18E22AA6D471141095F5302AD9BACB47AC0F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_m9443C407EC7015A44B06EA97DC277F470D9C9B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m76BB59C5C5476A8F6D4ECA2D8E9F6D148EC13FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m568941266A566D96A1396704C4A64B3ADC24A1EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m5C6EF0B97EFADD2880D3947358ADDAB528720B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mD5A04E574FE664D9918FF1C3C6AAA1DBBE11F734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m17572A422367948A382BFB373E011DCEBEB87E39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m2FC346572D039DA3CBB73AFFC2B910E70CF39262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF500757A92D9F1CA48520A84B4B9F32DD4F21C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m9AABACC42B99194379BAB0A826F92FE82DF5F435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mA5C55821BD5C6765B11AFD769FA6470580EAB7C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB1FD7B73A2BD32C9A1D26D70A27946A969EEF919_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m22CE53F12FF052326897A6609302F1F59FA297F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m852ADB46FE5DF211160BF3ECF7672DA583B17848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mF03FB15AE5F9AE900B341B8483F2BE171C32FAEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m4B159563B13DD8CCFC8E378E7931A07144458CB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_mD80C3BBA3B50FF4776CCA5479A7E23F1C2879373_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m7BFAFB5D23664699CEC44FB5FF8483497DCF3430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m4E061BCB3FB3B70CD161C7A3B81875F04C517265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m6C572AEC622690B0E34441E35D2CA89382C87EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mF5A71A7C5A0AA70BEA3D2F332FC21402C62A7AB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC2E112E191D945753C30F6A2475DDB865FD83097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisList_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m8FC8204DEBAD4AAED4C0327277514E568E26969F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m0D851A1D31C1915CA07C148BCBB29A2AFCFF9650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisKeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C_TisString_t_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m3E4D5611E86BEEB27DD3CD4468097B67013B0A64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisKeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_TisString_t_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m628658841285AC5A2C0B9277D9D1FD7A5DCA6EB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_mD111F15C37C3A57CB6D0EF159CA51540E1DAB0B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m8831DA1E9C436D3CE993739A17B27EF2081E6B52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0EF1A45F39403236FB75AA53B486D867FAF78A30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3C7002DF0ACF05A9221C488830D89DAC953B2BDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD1918F475F32024210E8963E8995BC61E2F43431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonObjectCollectionConverter_CanConvert_m9F453A4A348437B2B5618A247200576E41304278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonObjectConverter_CanConvert_m671986316D3626EE88F9D7F3FE6FE85F217DCDD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonObject_GetAsString_m8CAC654D2EBE92E309029903CE9BC57DBB9BE8F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonObject_ValidateObject_TisRuntimeObject_m570FDFC8E0E8157D0D05F29DC01FE6245CB0A7B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerialization_Serialize_TisRuntimeObject_m1E934D667AAE730925B6D8B2D08093F6E8E688F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m013CA52885A4357DB3C5ECEFC57E30CE6ED29021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9C6326BFB9569F4BBCA997EDCA12C152F30B27A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0499D398C4B70F6FA2E03470CBD963831A828A73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAA4B557F5B553DC336237C09E82AE5227D5308DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2D5B5F64ED6D4A0F92AFF82FCDEA5F27DB2A5483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m10949E5F0414D437B55DF28DC852BE50BC6EAC29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6D3A5AC423F5E385FB834AD564859D597583ABF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDF5066667A655423592B530B6698BEAD701666E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseHandler_CreateHttpException_m48860939F71126F5AC48218C48CA033069D606F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseHandler_CreateOneOfException_m997402BEBF88FA749E79E2FED79A3FEAFCE53AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseHandler_HandleAsyncResponse_TisQosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE_m5F3F872A89E3D482CB1B0B28197640CA6C081B10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseHandler_HandleAsyncResponse_TisQosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B_mA85DE7FFE9DFD39CA8463DFCA9141B4F97AEA14A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseHandler_HandleAsyncResponse_mF85227D729EBBB63B3F269D558F28D7B3477CB31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseHandler_TryDeserializeResponse_m8B10BE8FAD4A565918C93EBDAF0369E4486AE8D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Response_1__ctor_m9C3D06050E8C1DB07635DFB2085B0CBB5F0C5FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Response_1__ctor_mD83291E65D9472F21EA8CD0AA3D87E974B9CB0EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mDC79D5C0C0C04C17BA5981590E024B8482994BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mEFFE04FBAFA4052E44F00F8DC3F35323AA96F442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m4496D5582DBD92427C481B4E5A09A866B91EB216_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m12B57FB786578D8E9D8F3341F925D7AC8C7AC307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m623F91A3182487708395470B5EADAFE5232CDD7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_StartNew_TisTask_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9_m6DD844F4B1EC627E0DF2DF98605FAAA3490D8818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m3943D3360E5E23B9A4BB692F1E1B927BB580F4C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__6_0_mB1313A28830B6C3CAE5DF771A6C6ECEDC7D7C02A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_0_m60FE2F5EAD4ECFBA1C02A6952221555AE509592D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_1_mB2A2EE2C3DBFC2B40A4A32A42A185B84AC697994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_0_m4BC198652ECFBE3189EE4EBCD1145D07F39E523C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_1_m07B1EE8451E25AFA2279A63E4BC8FD9DB9E23EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_0_mF8021649DCE28882A3B6F7A03143BC97393E8139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_1_m23599E62ED6614FFA53D2428BFDE56B40DAEF2B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__12_0_m4A470291528DAE7018FFABAA6458453A635C09E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__12_1_mD40DBC98B5AB7B82BE1D71AD704F7EB0079F3A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__7_0_mDF3BC19C96293831FC8ACA1C245D272CC33625A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_m57EB7F27B683B8FEE80D26546C11F61A1718DF66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CCreateWebRequestAsyncU3Eb__0_m60FFFB8FFEF5B2CE8600E447B80C6E6DB0BF40B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HttpException_1_tC5D4A5D8C6C96BC6F58AA1D96E6B4B12B1DCEF96_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOneOf_tED528A9650C56E6514B4BB58A8C668FCF149CB74_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>
struct Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8E6FFD94702C3993BEFE09EF18EADDFFE97A7797* ____entries_1;
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
	KeyCollection_t9EF74C041A3EBB05C9706A36D5D7777041582F26* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD1BDCB78C7798257BAE7A6161EB6F235999D6CBA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>
struct Dictionary_2_t17FA99183E9D8EE37CED1732C9C4B6F25FE14B00  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7149165989419F2E2984BA5D3BE713CC9F9CD6CA* ____entries_1;
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
	KeyCollection_t6A1E8B6F37E66D5DBB17C4C29D85A19232BDAB92* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF06E6C85F1F5244958EB5306841E9A0749F9183B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t98F67E85D63B9861BE87D18EF2AEE6BC078DC067  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA20D52D4C7470968926346F8583C94BECFE0E144* ____entries_1;
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
	KeyCollection_t75F8B6F496D51CA6BD1317579256775F37402E90* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA75E65303A02F28ACADBA3D5619220CA79EA6538* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Qos.Http.IDeserializable>
struct Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3D49652BE77D500110A873CDFA4B6A81D845A7F6* ____entries_1;
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
	KeyCollection_tD35BDC1A89C6A17FE7136C7754C01BB2A825776D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAED95ABB3760E590A144E6BCD54E4C7758ED30D1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92* ____entries_1;
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
	KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>
struct List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t74B261FD1828780CA1DD6FF2E67CAFE10032249D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_t74B261FD1828780CA1DD6FF2E67CAFE10032249D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>
struct List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_tB40362575E2E5EBEFC13C380165A5E7D845985F0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_tB40362575E2E5EBEFC13C380165A5E7D845985F0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Services.Qos.ErrorMitigation.ExceptionPredicate>
struct List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExceptionPredicateU5BU5D_tDE49151A8BECA117407FE3AB2F0FBC1D5AFA54B5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExceptionPredicateU5BU5D_tDE49151A8BECA117407FE3AB2F0FBC1D5AFA54B5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>
struct List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IDeserializableU5BU5D_t3079519A8D0EFD091C9C4A713EEB3A6B900F36A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IDeserializableU5BU5D_t3079519A8D0EFD091C9C4A713EEB3A6B900F36A5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>
struct List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMultipartFormSectionU5BU5D_t665EF3A0485239BDC58B5C8934196EF568AF2EC3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMultipartFormSectionU5BU5D_t665EF3A0485239BDC58B5C8934196EF568AF2EC3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Services.Qos.Http.JsonObject>
struct List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonObjectU5BU5D_tE501D31F62BF56308B46A0690EE84003E7DEBD84* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonObjectU5BU5D_tE501D31F62BF56308B46A0690EE84003E7DEBD84* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Threading.Tasks.TaskCompletionSource`1<Unity.Services.Qos.Http.HttpClientResponse>
struct TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};
struct Il2CppArrayBounds;

// Unity.Services.Qos.Helpers.AsyncOpRetry
struct AsyncOpRetry_t4D65C13DB72191A93322D1462FFAAC8405E78446  : public RuntimeObject
{
};

// Unity.Services.Qos.Http.BaseApiClient
struct BaseApiClient_tB66E602A31C006C82CE3B68569B79BB3F1029657  : public RuntimeObject
{
	// Unity.Services.Qos.Http.IHttpClient Unity.Services.Qos.Http.BaseApiClient::HttpClient
	RuntimeObject* ___HttpClient_0;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Unity.Services.Qos.Scheduler.EngineStateHelper
struct EngineStateHelper_t111E9015912A912511CB9A457EDE85BDF822F702  : public RuntimeObject
{
};

struct EngineStateHelper_t111E9015912A912511CB9A457EDE85BDF822F702_StaticFields
{
	// System.Boolean Unity.Services.Qos.Scheduler.EngineStateHelper::IsPlaying
	bool ___IsPlaying_0;
};

// Unity.Services.Qos.Http.HttpClient
struct HttpClient_t33C65C4AD210DC5BA7E9DA2E12485D3F71D25E02  : public RuntimeObject
{
};

// Unity.Services.Qos.Http.HttpClientResponse
struct HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Http.HttpClientResponse::<Headers>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CHeadersU3Ek__BackingField_0;
	// System.Int64 Unity.Services.Qos.Http.HttpClientResponse::<StatusCode>k__BackingField
	int64_t ___U3CStatusCodeU3Ek__BackingField_1;
	// System.Boolean Unity.Services.Qos.Http.HttpClientResponse::<IsHttpError>k__BackingField
	bool ___U3CIsHttpErrorU3Ek__BackingField_2;
	// System.Boolean Unity.Services.Qos.Http.HttpClientResponse::<IsNetworkError>k__BackingField
	bool ___U3CIsNetworkErrorU3Ek__BackingField_3;
	// System.Byte[] Unity.Services.Qos.Http.HttpClientResponse::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_4;
	// System.String Unity.Services.Qos.Http.HttpClientResponse::<ErrorMessage>k__BackingField
	String_t* ___U3CErrorMessageU3Ek__BackingField_5;
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_14;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// Unity.Services.Qos.Http.JsonHelpers
struct JsonHelpers_tB1BD044EDC655EB17A2E69A0BA10581E047A77D8  : public RuntimeObject
{
};

// Unity.Services.Qos.Http.JsonObject
struct JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6  : public RuntimeObject
{
	// System.Object Unity.Services.Qos.Http.JsonObject::obj
	RuntimeObject* ___obj_0;
};

// Unity.Services.Qos.QosDiscovery.JsonSerialization
struct JsonSerialization_tE96CFBBB634E2189EFDA795DB3515327B92C4563  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Networking.MultipartFormFileSection
struct MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB  : public RuntimeObject
{
	// System.String UnityEngine.Networking.MultipartFormFileSection::name
	String_t* ___name_0;
	// System.Byte[] UnityEngine.Networking.MultipartFormFileSection::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_1;
	// System.String UnityEngine.Networking.MultipartFormFileSection::file
	String_t* ___file_2;
	// System.String UnityEngine.Networking.MultipartFormFileSection::content
	String_t* ___content_3;
};

// Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest
struct QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66  : public RuntimeObject
{
};

struct QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_StaticFields
{
	// System.Text.RegularExpressions.Regex Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::JsonRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___JsonRegex_0;
};

// Unity.Services.Qos.Models.QosServersResponseBody
struct QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE  : public RuntimeObject
{
	// Unity.Services.Qos.Models.QosServersList Unity.Services.Qos.Models.QosServersResponseBody::<Data>k__BackingField
	QosServersList_t72F7A682056C825F0F93D9C47BC8536EF0650A23* ___U3CDataU3Ek__BackingField_0;
};

// Unity.Services.Qos.Models.QosServiceServersResponseBody
struct QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B  : public RuntimeObject
{
	// Unity.Services.Qos.Models.QosServiceServersList Unity.Services.Qos.Models.QosServiceServersResponseBody::<Data>k__BackingField
	QosServiceServersList_t23E98A2F526DF577081813318A6D8DED35508DB3* ___U3CDataU3Ek__BackingField_0;
};

// Unity.Services.Qos.Response
struct Response_tED09A2076AA8C92E78644D690D96E3DE2BF4A278  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Response::<Headers>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CHeadersU3Ek__BackingField_0;
	// System.Int64 Unity.Services.Qos.Response::<Status>k__BackingField
	int64_t ___U3CStatusU3Ek__BackingField_1;
};

// Unity.Services.Qos.Http.ResponseHandler
struct ResponseHandler_tD4DBC1459BA04C4B702EEA98B7227435FE2D54AD  : public RuntimeObject
{
};

// Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig
struct RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86  : public RuntimeObject
{
	// System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::_jitterMagnitude
	float ____jitterMagnitude_0;
	// System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::_delayScale
	float ____delayScale_1;
	// System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::_maxDelayTime
	float ____maxDelayTime_2;
	// System.Collections.Generic.List`1<Unity.Services.Qos.ErrorMitigation.ExceptionPredicate> Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::_exceptionsToHandle
	List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441* ____exceptionsToHandle_3;
	// System.UInt32 Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::<MaxRetries>k__BackingField
	uint32_t ___U3CMaxRetriesU3Ek__BackingField_4;
};

// Unity.Services.Qos.ErrorMitigation.RetryPolicyProvider
struct RetryPolicyProvider_tF2CA7CE7115C87D73B2EDE3E0788DB5F68C97C6A  : public RuntimeObject
{
};

// Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig
struct StatusCodePolicyConfig_tFD3280C6F240EE942B600E35BEE1E6FB08908B67  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.Int64,System.Boolean> Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig::_statusCodesToHandleDict
	RuntimeObject* ____statusCodesToHandleDict_0;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;
};

struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t815A43BFBA64EC1F9F92AD042622E80EED65712E* ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_4;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_5;
};

// Unity.Services.Qos.Scheduler.ThreadHelper
struct ThreadHelper_tF58404F9CCFE15FDEE933550EA8A3361070265CB  : public RuntimeObject
{
};

struct ThreadHelper_tF58404F9CCFE15FDEE933550EA8A3361070265CB_StaticFields
{
	// System.Threading.SynchronizationContext Unity.Services.Qos.Scheduler.ThreadHelper::_unitySynchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____unitySynchronizationContext_0;
	// System.Threading.Tasks.TaskScheduler Unity.Services.Qos.Scheduler.ThreadHelper::_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ____taskScheduler_1;
	// System.Int32 Unity.Services.Qos.Scheduler.ThreadHelper::_mainThreadId
	int32_t ____mainThreadId_2;
};

// Unity.Services.Qos.Http.UnityWebRequestHelpers
struct UnityWebRequestHelpers_t2930065086A97730BEE41696710603F6C8D85C0D  : public RuntimeObject
{
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c
struct U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B  : public RuntimeObject
{
};

struct U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_StaticFields
{
	// Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c::<>9
	U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B* ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c::<>9__7_0
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___U3CU3E9__7_0_1;
};

// Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c
struct U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9  : public RuntimeObject
{
};

struct U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_StaticFields
{
	// Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::<>9
	U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9* ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::<>9__12_0
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___U3CU3E9__12_0_1;
	// System.Func`2<System.String,System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::<>9__12_1
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___U3CU3E9__12_1_2;
};

// Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E  : public RuntimeObject
{
	// System.String Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::boundary
	String_t* ___boundary_0;
	// System.String Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::url
	String_t* ___url_1;
	// System.String Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::method
	String_t* ___method_2;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::headers
	RuntimeObject* ___headers_3;
	// System.Int32 Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::requestTimeout
	int32_t ___requestTimeout_4;
	// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection> Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::body
	List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* ___body_5;
	// Unity.Services.Qos.Http.HttpClient Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::<>4__this
	HttpClient_t33C65C4AD210DC5BA7E9DA2E12485D3F71D25E02* ___U3CU3E4__this_6;
};

// Unity.Services.Qos.Http.JsonObject/<>c
struct U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F  : public RuntimeObject
{
};

struct U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields
{
	// Unity.Services.Qos.Http.JsonObject/<>c Unity.Services.Qos.Http.JsonObject/<>c::<>9
	U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* ___U3CU3E9_0;
	// System.Func`2<System.Object,Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject/<>c::<>9__6_0
	Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* ___U3CU3E9__6_0_1;
	// System.Func`2<System.Object,Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject/<>c::<>9__7_1
	Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* ___U3CU3E9__7_1_2;
	// System.Func`2<System.Collections.Generic.List`1<System.Object>,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>> Unity.Services.Qos.Http.JsonObject/<>c::<>9__7_0
	Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55* ___U3CU3E9__7_0_3;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String> Unity.Services.Qos.Http.JsonObject/<>c::<>9__8_0
	Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* ___U3CU3E9__8_0_4;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject/<>c::<>9__8_1
	Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9* ___U3CU3E9__8_1_5;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>,System.String> Unity.Services.Qos.Http.JsonObject/<>c::<>9__9_0
	Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398* ___U3CU3E9__9_0_6;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>> Unity.Services.Qos.Http.JsonObject/<>c::<>9__9_1
	Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317* ___U3CU3E9__9_1_7;
};

// Unity.Services.Qos.Http.UnityWebRequestHelpers/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.UnityWebRequestHelpers/<>c__DisplayClass0_0::tcs
	TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754* ___tcs_0;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Qos.ErrorMitigation.ExceptionPredicate>
struct Enumerator_t60A0FF928BC8D610C88D9B2149E5D3592DF538FF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
struct Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>
struct KeyValuePair_2_tB238689916B08B0CFF54232EB53E746022CA86A2 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>
struct KeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>
struct Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA  : public Response_tED09A2076AA8C92E78644D690D96E3DE2BF4A278
{
	// T Unity.Services.Qos.Response`1::<Result>k__BackingField
	QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE* ___U3CResultU3Ek__BackingField_2;
};

// Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>
struct Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B  : public Response_tED09A2076AA8C92E78644D690D96E3DE2BF4A278
{
	// T Unity.Services.Qos.Response`1::<Result>k__BackingField
	QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B* ___U3CResultU3Ek__BackingField_2;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>
struct TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tFD4D83E09A0B2DA998E9E2957AD742748E683BC3* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse>
struct TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>>
struct Task_1_t3ACB2F1474F202DC1D1177836C7669963263F595  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA* ___m_result_38;
};

struct Task_1_t3ACB2F1474F202DC1D1177836C7669963263F595_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tCB05B346FFED792C471009D0682D2430C7402052* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>>
struct Task_1_tDAC25724227FDF2BAD68608CF2408FED59281FA0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B* ___m_result_38;
};

struct Task_1_tDAC25724227FDF2BAD68608CF2408FED59281FA0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t5C27AFC5FF18A8157417D28A03395CD1A71D9DD0* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>
struct Task_1_tFD4D83E09A0B2DA998E9E2957AD742748E683BC3  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* ___m_result_38;
};

struct Task_1_tFD4D83E09A0B2DA998E9E2957AD742748E683BC3_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tBF850CB9D8916971A5570977F0C8FB7816E76250* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>
struct Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___m_result_38;
};

struct Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t77018BDA91AB0465CE4EBA777535BF2683707236* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_39;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// Unity.Services.Qos.QosDiscovery.GetServersRequest
struct GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A  : public QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66
{
	// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServersRequest::<Region>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CRegionU3Ek__BackingField_1;
	// System.String Unity.Services.Qos.QosDiscovery.GetServersRequest::<Service>k__BackingField
	String_t* ___U3CServiceU3Ek__BackingField_2;
	// System.String Unity.Services.Qos.QosDiscovery.GetServersRequest::PathAndQueryParams
	String_t* ___PathAndQueryParams_3;
};

// Unity.Services.Qos.QosDiscovery.GetServiceServersRequest
struct GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6  : public QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66
{
	// System.String Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::<ServiceId>k__BackingField
	String_t* ___U3CServiceIdU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::<Region>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CRegionU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::<Fleet>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CFleetU3Ek__BackingField_5;
	// System.String Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::PathAndQueryParams
	String_t* ___PathAndQueryParams_6;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701* ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;
};

// Unity.Services.Qos.Http.JsonObjectCollectionConverter
struct JsonObjectCollectionConverter_tF92B2E8F1BD0F1957E81E30EB77D5AFB80BE01EB  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Unity.Services.Qos.Http.JsonObjectConverter
struct JsonObjectConverter_t0BB57AC3C22D0CC9C0EB390FA84472ABE9C7A873  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};

struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_StaticFields
{
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters_0;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient
struct QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11  : public BaseApiClient_tB66E602A31C006C82CE3B68569B79BB3F1029657
{
	// Unity.Services.Authentication.Internal.IAccessToken Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::_accessToken
	RuntimeObject* ____accessToken_1;
	// Unity.Services.Qos.Configuration Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::_configuration
	Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ____configuration_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>>
struct AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3ACB2F1474F202DC1D1177836C7669963263F595* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3ACB2F1474F202DC1D1177836C7669963263F595* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>>
struct AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tDAC25724227FDF2BAD68608CF2408FED59281FA0* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tDAC25724227FDF2BAD68608CF2408FED59281FA0* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse>
struct AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Unity.Services.Qos.Configuration
struct Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC  : public RuntimeObject
{
	// System.String Unity.Services.Qos.Configuration::BasePath
	String_t* ___BasePath_0;
	// System.Nullable`1<System.Int32> Unity.Services.Qos.Configuration::RequestTimeout
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___RequestTimeout_1;
	// System.Nullable`1<System.Int32> Unity.Services.Qos.Configuration::NumberOfRetries
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___NumberOfRetries_2;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Qos.Configuration::Headers
	RuntimeObject* ___Headers_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_8;
	// System.String System.IO.FileStream::name
	String_t* ___name_9;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_10;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_11;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_12;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_13;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_14;
	// System.Boolean System.IO.FileStream::async
	bool ___async_15;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_16;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_17;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_18;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_19;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_20;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_21;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_22;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_6;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_7;
};

// Newtonsoft.Json.Linq.JArray
struct JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_t58901670B7FA44803364AA3059A3F981A991011A* ____values_20;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_20;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_21;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD* ___PropertyChanging_22;
};

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59  : public RuntimeObject
{
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Newtonsoft.Json.TypeNameAssemblyFormatHandling Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89* ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___Error_30;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_13;
};

struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTemplate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTemplate_1;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// Unity.Services.Qos.Http.HttpException
struct HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E  : public Exception_t
{
	// Unity.Services.Qos.Http.HttpClientResponse Unity.Services.Qos.Http.HttpException::Response
	HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___Response_18;
};

// Newtonsoft.Json.JsonException
struct JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD  : public Exception_t
{
};

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_22;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_23;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_24;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_25;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_26;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_27;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_28;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_29;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_30;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_31;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_32;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_33;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_34;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F ____typeNameAssemblyFormatHandling_35;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ____defaultValueHandling_36;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 ____preserveReferencesHandling_37;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ____nullValueHandling_38;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ____objectCreationHandling_39;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 ____missingMemberHandling_40;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ____referenceLoopHandling_41;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A ____context_42;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 ____constructorHandling_43;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ____typeNameHandling_44;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE ____metadataPropertyHandling_45;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_46;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_47;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_48;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2* ___U3CReferenceResolverProviderU3Ek__BackingField_49;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_50;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_51;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___U3CErrorU3Ek__BackingField_52;
};

struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_StaticFields
{
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___DefaultContext_9;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___DefaultCulture_18;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Services.Qos.Http.ResponseDeserializationException
struct ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC  : public Exception_t
{
	// Unity.Services.Qos.Http.HttpClientResponse Unity.Services.Qos.Http.ResponseDeserializationException::response
	HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response_18;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5
struct U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F 
{
	// System.Int32 Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E ___U3CU3Et__builder_1;
	// System.String Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::boundary
	String_t* ___boundary_2;
	// System.String Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::url
	String_t* ___url_3;
	// System.String Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::method
	String_t* ___method_4;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::headers
	RuntimeObject* ___headers_5;
	// System.Int32 Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::requestTimeout
	int32_t ___requestTimeout_6;
	// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection> Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::body
	List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* ___body_7;
	// Unity.Services.Qos.Http.HttpClient Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::<>4__this
	HttpClient_t33C65C4AD210DC5BA7E9DA2E12485D3F71D25E02* ___U3CU3E4__this_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>> Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::<>u__1
	TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1 ___U3CU3Eu__1_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::<>u__2
	TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 ___U3CU3Eu__2_10;
};

// Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7
struct U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB 
{
	// System.Int32 Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>> Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C ___U3CU3Et__builder_1;
	// Unity.Services.Qos.Configuration Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::operationConfiguration
	Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___operationConfiguration_2;
	// Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::<>4__this
	QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* ___U3CU3E4__this_3;
	// Unity.Services.Qos.QosDiscovery.GetServersRequest Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::request
	GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* ___request_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::<statusCodeToTypeMap>5__2
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ___U3CstatusCodeToTypeMapU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::<>u__1
	TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 ___U3CU3Eu__1_6;
};

// Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8
struct U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD 
{
	// System.Int32 Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>> Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394 ___U3CU3Et__builder_1;
	// Unity.Services.Qos.Configuration Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::operationConfiguration
	Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___operationConfiguration_2;
	// Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::<>4__this
	QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* ___U3CU3E4__this_3;
	// Unity.Services.Qos.QosDiscovery.GetServiceServersRequest Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::request
	GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* ___request_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::<statusCodeToTypeMap>5__2
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ___U3CstatusCodeToTypeMapU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::<>u__1
	TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 ___U3CU3Eu__1_6;
};

// Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d
struct U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C 
{
	// System.Int32 Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E ___U3CU3Et__builder_1;
	// Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0 Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::<>4__this
	U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::<>u__1
	TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 ___U3CU3Eu__1_3;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>
struct Func_1_t951450D17F31277D24526D3476548479EA423E04  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>
struct Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>,System.String>
struct Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,Unity.Services.Qos.Http.IDeserializable>
struct Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.List`1<System.Object>,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>
struct Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,Unity.Services.Qos.Http.IDeserializable>
struct Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Unity.Services.Qos.ErrorMitigation.ExceptionPredicate
struct ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_18;
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_19;
	// System.String Newtonsoft.Json.JsonReaderException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_20;
};

// System.MemberAccessException
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.MissingMemberException
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211  : public MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC
{
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_18;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_19;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Signature_20;
};

// System.MissingFieldException
struct MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C  : public MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E  : public RuntimeArray
{
	ALIGN_FIELD (8) JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* m_Items[1];

	inline JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m9185E64B7E352D5D720FB0D866DF43E256850966_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m64D98C94A102461E2EDB9CDDFF7A3567E867C1E7_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<System.Object>(System.Func`1<TResult>,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskFactory_StartNew_TisRuntimeObject_m14FDB1694FEE097B11C3119BD89F3C350F7DE51B_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___function0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, int32_t ___creationOptions2, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler3, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_m202BD388B61E516551BF19EC81001A7FCF1101F7_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Utilities.AotHelper::EnsureType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AotHelper_EnsureType_TisRuntimeObject_m8D3D63845F34DADDDC746C0C444E40309347F992_gshared (const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* Enumerable_ToDictionary_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_TisRuntimeObject_mFAD38355767A6BC98DB0AF76ADAB9AEDE1A401CB_gshared (RuntimeObject* ___source0, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___keySelector1, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___elementSelector2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.Http.JsonObject::ValidateObject<System.Object>(T,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* JsonObject_ValidateObject_TisRuntimeObject_m570FDFC8E0E8157D0D05F29DC01FE6245CB0A7B7_gshared (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* __this, RuntimeObject* ___objectToCheck0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___errors1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E_gshared (KeyValuePair_2_tB238689916B08B0CFF54232EB53E746022CA86A2* __this, int64_t ___key0, bool ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC2E112E191D945753C30F6A2475DDB865FD83097_gshared (Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6_gshared (Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF* __this, int64_t ___key0, bool ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Byte[] Unity.Services.Qos.QosDiscovery.JsonSerialization::Serialize<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* JsonSerialization_Serialize_TisRuntimeObject_m1E934D667AAE730925B6D8B2D08093F6E8E688F8_gshared (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m7AD0ADA5A36E34B0AACB7503DC9974E826ECBE7D_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_m1DF00A84FD89E01C914CB043B242D56424B99730_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD* ___stateMachine0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m8AC5C5A843C17B2AED328C9A6D732C3C3070B2F6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB* ___stateMachine1, const RuntimeMethod* method) ;
// T Unity.Services.Qos.Http.ResponseHandler::HandleAsyncResponse<System.Object>(Unity.Services.Qos.Http.HttpClientResponse,System.Collections.Generic.Dictionary`2<System.String,System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResponseHandler_HandleAsyncResponse_TisRuntimeObject_m19EEB367ADCFA0A0A6EBC7BE2F306CF1F30DFA3C_gshared (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ___statusCodeToTypeMap1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.Response`1<System.Object>::.ctor(Unity.Services.Qos.Http.HttpClientResponse,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response_1__ctor_mCC5FAAFF87982FB84137E5952D0F1290DF6DBB11_gshared (Response_1_t67079F6E4F63FACFADE6AE83B5E8C8249BB3895D* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___httpResponse0, RuntimeObject* ___result1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_m2BD9C9B4C90E3814F6E9DD0BCB0EE91CD62FECD8_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD* ___stateMachine1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse>::Create()
inline AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E AsyncTaskMethodBuilder_1_Create_m568941266A566D96A1396704C4A64B3ADC24A1EA (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse>::Start<Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m7BFAFB5D23664699CEC44FB5FF8483497DCF3430 (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* __this, U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E*, U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m9185E64B7E352D5D720FB0D866DF43E256850966_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse>::get_Task()
inline Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* AsyncTaskMethodBuilder_1_get_Task_mF5A71A7C5A0AA70BEA3D2F332FC21402C62A7AB9 (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* (*) (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Default_mB48FC92A61D1153AC33C2C59F01D7266DF7D155C (const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.UnityWebRequest::GenerateBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UnityWebRequest_GenerateBoundary_mD854316C5BAE94BF1B09607A36F112D343208241 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest Unity.Services.Qos.Http.HttpClient::SetupMultipartRequest(UnityEngine.Networking.UnityWebRequest,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* HttpClient_SetupMultipartRequest_m942E9984424A47309D6CEC78FA2B679EEB0D3D90 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* ___multipartFormSections1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Qos.Http.HttpClient::SendWebRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* HttpClient_SendWebRequest_m2D838D76A68C3AAB0F5EE58D82D10860B61C2B8B (HttpClient_t33C65C4AD210DC5BA7E9DA2E12485D3F71D25E02* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.UnityWebRequestHelpers::GetAwaiter(UnityEngine.Networking.UnityWebRequestAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 UnityWebRequestHelpers_GetAwaiter_mFE3CEA3273241928556A3EE6EB2D699C01EF52F7 (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___asyncOp0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E (TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse>,Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m76BB59C5C5476A8F6D4ECA2D8E9F6D148EC13FF2 (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* __this, TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5* ___awaiter0, U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E*, TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5*, U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m64D98C94A102461E2EDB9CDDFF7A3567E867C1E7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse>::GetResult()
inline HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516 (TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5* __this, const RuntimeMethod* method)
{
	return ((  HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* (*) (TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m17572A422367948A382BFB373E011DCEBEB87E39 (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mA5C55821BD5C6765B11AFD769FA6470580EAB7C9 (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E*, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_m23D59D187639AD9FB641F234939B5834BA628FBE (U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m22CE53F12FF052326897A6609302F1F59FA297F3 (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m1D240B358D2D64F67840B533CE4F00CAAC6C2EE0 (U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m40692977886B6F2A77F04D996EF600E964D2DD63 (U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m6AF38DBC9D609C6BF3D7D36F10099569197EE7E8 (Func_1_t951450D17F31277D24526D3476548479EA423E04* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t951450D17F31277D24526D3476548479EA423E04*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler Unity.Services.Qos.Scheduler.ThreadHelper::get_TaskScheduler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ThreadHelper_get_TaskScheduler_mE4BB459B45461BD9314E69B218A9D3F021E98672_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>(System.Func`1<TResult>,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
inline Task_1_tFD4D83E09A0B2DA998E9E2957AD742748E683BC3* TaskFactory_StartNew_TisTask_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9_m6DD844F4B1EC627E0DF2DF98605FAAA3490D8818 (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_t951450D17F31277D24526D3476548479EA423E04* ___function0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, int32_t ___creationOptions2, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler3, const RuntimeMethod* method)
{
	return ((  Task_1_tFD4D83E09A0B2DA998E9E2957AD742748E683BC3* (*) (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*, Func_1_t951450D17F31277D24526D3476548479EA423E04*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))TaskFactory_StartNew_TisRuntimeObject_m14FDB1694FEE097B11C3119BD89F3C350F7DE51B_gshared)(__this, ___function0, ___cancellationToken1, ___creationOptions2, ___scheduler3, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>::GetAwaiter()
inline TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1 Task_1_GetAwaiter_m3943D3360E5E23B9A4BB692F1E1B927BB580F4C4 (Task_1_tFD4D83E09A0B2DA998E9E2957AD742748E683BC3* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1 (*) (Task_1_tFD4D83E09A0B2DA998E9E2957AD742748E683BC3*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mEFFE04FBAFA4052E44F00F8DC3F35323AA96F442 (TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>,Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_mF8AD6F564DD51AEA9D2D6CD7ECFE8A31545EE3FD (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* __this, TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1* ___awaiter0, U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E*, TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1*, U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_m202BD388B61E516551BF19EC81001A7FCF1101F7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>>::GetResult()
inline Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* TaskAwaiter_1_GetResult_mDC79D5C0C0C04C17BA5981590E024B8482994BEC (TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* (*) (TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse>::GetAwaiter()
inline TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9 (Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 (*) (Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Http.HttpClientResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse>,Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_m550F0210FF879BBF4E22ABE2DF80DC07249743D1 (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* __this, TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5* ___awaiter0, U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E*, TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5*, U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_m202BD388B61E516551BF19EC81001A7FCF1101F7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m015F1DB907416B26A58B29B6D045A71BD6A02A43 (U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m7C97C2175057580CDD241D026CC3BE392DD81D93 (U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Int64 Unity.Services.Qos.Http.HttpClientResponse::get_StatusCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t HttpClientResponse_get_StatusCode_mC8A80B746A2F6E82F65517C3AB4C479784B55998_inline (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Qos.Http.HttpClientResponse::get_ErrorMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HttpClientResponse_get_ErrorMessage_mC9BA60D07DC70CF2BAA92C4C256BDF5CB74F326B_inline (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Utilities.AotHelper::EnsureType<Newtonsoft.Json.Converters.StringEnumConverter>()
inline void AotHelper_EnsureType_TisStringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_m6A1C428F1F47D693B537597E785391C4D42AD480 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))AotHelper_EnsureType_TisRuntimeObject_m8D3D63845F34DADDDC746C0C444E40309347F992_gshared)(method);
}
// System.Void Newtonsoft.Json.Utilities.AotHelper::EnsureType<Unity.Services.Qos.Http.JsonObjectConverter>()
inline void AotHelper_EnsureType_TisJsonObjectConverter_t0BB57AC3C22D0CC9C0EB390FA84472ABE9C7A873_m768B3036F9C0932800F2472FB9B384873025789F (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))AotHelper_EnsureType_TisRuntimeObject_m8D3D63845F34DADDDC746C0C444E40309347F992_gshared)(method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.Http.JsonObject::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419 (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,Unity.Services.Qos.Http.IDeserializable>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m25BE0B588CCAED3F3DE12C4E84005EF20DFF8B4C (Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,Unity.Services.Qos.Http.IDeserializable>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m0D851A1D31C1915CA07C148BCBB29A2AFCFF9650 (RuntimeObject* ___source0, Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Unity.Services.Qos.Http.IDeserializable>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* Enumerable_ToList_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_mD111F15C37C3A57CB6D0EF159CA51540E1DAB0B4 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Func`2<System.Collections.Generic.List`1<System.Object>,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m039215FB177F032011EC38FDC00F60FEEC9BF9CC (Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Collections.Generic.List`1<System.Object>,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisList_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m8FC8204DEBAD4AAED4C0327277514E568E26969F (RuntimeObject* ___source0, Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313* Enumerable_ToList_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m8831DA1E9C436D3CE993739A17B27EF2081E6B52 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4F049E2C488DF6CAE688DA027C6FC95F6174AC4C (Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,Unity.Services.Qos.Http.IDeserializable>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m679AFFD09EC2F1B6E3330FA91AA670246F61771A (Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String,Unity.Services.Qos.Http.IDeserializable>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
inline Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF* Enumerable_ToDictionary_TisKeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_TisString_t_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m628658841285AC5A2C0B9277D9D1FD7A5DCA6EB0 (RuntimeObject* ___source0, Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* ___keySelector1, Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9* ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF* (*) (RuntimeObject*, Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B*, Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9*, const RuntimeMethod*))Enumerable_ToDictionary_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_TisRuntimeObject_mFAD38355767A6BC98DB0AF76ADAB9AEDE1A401CB_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBBCB2C4390040071351394228DA494BDF3DD2A31 (Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6F0739CEBA8C24F372EB2E66FF8C1DE5433F32E3 (Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>,System.String,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
inline Dictionary_2_t17FA99183E9D8EE37CED1732C9C4B6F25FE14B00* Enumerable_ToDictionary_TisKeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C_TisString_t_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m3E4D5611E86BEEB27DD3CD4468097B67013B0A64 (RuntimeObject* ___source0, Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398* ___keySelector1, Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317* ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t17FA99183E9D8EE37CED1732C9C4B6F25FE14B00* (*) (RuntimeObject*, Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398*, Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317*, const RuntimeMethod*))Enumerable_ToDictionary_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_TisRuntimeObject_mFAD38355767A6BC98DB0AF76ADAB9AEDE1A401CB_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.Http.JsonObject::ValidateObject<System.Object>(T,System.Collections.Generic.List`1<System.String>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* JsonObject_ValidateObject_TisRuntimeObject_m570FDFC8E0E8157D0D05F29DC01FE6245CB0A7B7 (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* __this, RuntimeObject* ___objectToCheck0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___errors1, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*, RuntimeObject*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))JsonObject_ValidateObject_TisRuntimeObject_m570FDFC8E0E8157D0D05F29DC01FE6245CB0A7B7_gshared)(__this, ___objectToCheck0, ___errors1, method);
}
// System.Void Unity.Services.Qos.Http.JsonObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5448ADC46B780675F047487C7C9E796EE4F5905B (U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m013CA52885A4357DB3C5ECEFC57E30CE6ED29021_inline (KeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>::get_Value()
inline List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* KeyValuePair_2_get_Value_m9C6326BFB9569F4BBCA997EDCA12C152F30B27A0_inline (KeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C* __this, const RuntimeMethod* method)
{
	return ((  List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* (*) (KeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* JsonObject_GetNewJsonObjectResponse_m8D76EA8B41E5F473B50DC4D576EBCA781E0F8526 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___o0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JToken_FromObject_m4C7363BA06BC38D5F21C29B2352E5521F6D541ED (RuntimeObject* ___o0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Newtonsoft.Json.JsonConverter>()
inline JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_inline (const RuntimeMethod* method)
{
	return ((  JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Load_m44DE042F4F4752D15D54259823A74B609650E9EF (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* JArray_Load_mE90CEEC0A22EBC876F7D7E239A0E096E4691C807 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Services.Qos.Http.JsonObject>::.ctor()
inline void List_1__ctor_mDF5066667A655423592B530B6698BEAD701666E6 (List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Qos.Http.JsonObject>::Add(T)
inline void List_1_Add_mAA4B557F5B553DC336237C09E82AE5227D5308DA_inline (List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02* __this, JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02*, JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>::.ctor()
inline void List_1__ctor_m10949E5F0414D437B55DF28DC852BE50BC6EAC29 (List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>::Add(T)
inline void List_1_Add_m0499D398C4B70F6FA2E03470CBD963831A828A73_inline (List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_MissingMemberHandling(Newtonsoft.Json.MissingMemberHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_MissingMemberHandling_mD0C7EE2F78B48F00E8304E9D6B25CF96550769F0 (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_ReferenceLoopHandling(Newtonsoft.Json.ReferenceLoopHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_ReferenceLoopHandling_m813030F79F8DFFFA2C0C63A5C1C4D2348488CC94 (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] Unity.Services.Qos.Http.HttpClientResponse::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HttpClientResponse_get_Data_mB0A3BB94BF7CE548D1464659194CA4E9557E09DE_inline (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Qos.Http.ResponseHandler::GetDeserializedJson(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseHandler_GetDeserializedJson_m677949D173DF6A65ADDAB1AD7FD2B972F3598C08 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String,System.Type,Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_m8601FB6D35A0E41575940296CCCFD27B97EA97A2 (String_t* ___value0, Type_t* ___type1, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___settings2, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(Unity.Services.Qos.Http.HttpClientResponse,System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___httpClientResponse0, Exception_t* ___inner1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Item(TKey)
inline Type_t* Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Qos.Http.HttpClientResponse::get_IsHttpError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpClientResponse_get_IsHttpError_m6DCA23589DA544E4E462A755FA5E781206995A3B_inline (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Qos.Http.HttpClientResponse::get_IsNetworkError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpClientResponse_get_IsNetworkError_m3C3F6623CBFEFED95570B0EC1677CA7E31C9DAE0_inline (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) ;
// Unity.Services.Qos.Http.HttpException Unity.Services.Qos.Http.ResponseHandler::CreateOneOfException(Unity.Services.Qos.Http.HttpClientResponse,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* ResponseHandler_CreateOneOfException_m997402BEBF88FA749E79E2FED79A3FEAFCE53AC7 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, Type_t* ___responseType1, const RuntimeMethod* method) ;
// Unity.Services.Qos.Http.HttpException Unity.Services.Qos.Http.ResponseHandler::CreateHttpException(Unity.Services.Qos.Http.HttpClientResponse,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* ResponseHandler_CreateHttpException_m48860939F71126F5AC48218C48CA033069D606F8 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, Type_t* ___responseType1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.Http.HttpException::.ctor(Unity.Services.Qos.Http.HttpClientResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpException__ctor_m4927A27335A8E59162013A85EF8972D88AA0754C (HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, const RuntimeMethod* method) ;
// System.Object Unity.Services.Qos.Http.ResponseHandler::TryDeserializeResponse(Unity.Services.Qos.Http.HttpClientResponse,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResponseHandler_TryDeserializeResponse_m8B10BE8FAD4A565918C93EBDAF0369E4486AE8D4 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(Unity.Services.Qos.Http.HttpClientResponse,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseDeserializationException__ctor_m6B1A5AAC07DBF1DE306A000ECF99CE9648615C1B (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___httpClientResponse0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6 (Type_t* ___type0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.Http.UnityWebRequestHelpers/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m1A61824C8360274E7FD6DBB60E9D9060BB60DD89 (U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.Services.Qos.Http.HttpClientResponse>::.ctor()
inline void TaskCompletionSource_1__ctor_m12B57FB786578D8E9D8F3341F925D7AC8C7AC307 (TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Unity.Services.Qos.Http.HttpClientResponse>::get_Task()
inline Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* TaskCompletionSource_1_get_Task_m623F91A3182487708395470B5EADAFE5232CDD7C_inline (TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* (*) (TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::get_webRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UnityWebRequest_GetResponseHeaders_m67147A5D3FF83FD75071AA42F4890439DA2092DF (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.Http.HttpClientResponse::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int64,System.Boolean,System.Boolean,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClientResponse__ctor_mD1FC246D901ACC12807D2B5C1DB39B038622A4E0 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers0, int64_t ___statusCode1, bool ___isHttpError2, bool ___isNetworkError3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data4, String_t* ___errorMessage5, const RuntimeMethod* method) ;
// Unity.Services.Qos.Http.HttpClientResponse Unity.Services.Qos.Http.UnityWebRequestHelpers::CreateHttpClientResponse(UnityEngine.Networking.UnityWebRequestAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* UnityWebRequestHelpers_CreateHttpClientResponse_m83A8F9B40812C3017F91315CC83DEA0BE3D74123 (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___unityResponse0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.Services.Qos.Http.HttpClientResponse>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m4496D5582DBD92427C481B4E5A09A866B91EB216 (TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754*, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___result0, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Qos.ErrorMitigation.ExceptionPredicate>::GetEnumerator()
inline Enumerator_t60A0FF928BC8D610C88D9B2149E5D3592DF538FF List_1_GetEnumerator_m2D5B5F64ED6D4A0F92AFF82FCDEA5F27DB2A5483 (List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t60A0FF928BC8D610C88D9B2149E5D3592DF538FF (*) (List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Services.Qos.ErrorMitigation.ExceptionPredicate>::Dispose()
inline void Enumerator_Dispose_m0EF1A45F39403236FB75AA53B486D867FAF78A30 (Enumerator_t60A0FF928BC8D610C88D9B2149E5D3592DF538FF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t60A0FF928BC8D610C88D9B2149E5D3592DF538FF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Qos.ErrorMitigation.ExceptionPredicate>::get_Current()
inline ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* Enumerator_get_Current_mD1918F475F32024210E8963E8995BC61E2F43431_inline (Enumerator_t60A0FF928BC8D610C88D9B2149E5D3592DF538FF* __this, const RuntimeMethod* method)
{
	return ((  ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* (*) (Enumerator_t60A0FF928BC8D610C88D9B2149E5D3592DF538FF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Exception Unity.Services.Qos.ErrorMitigation.ExceptionPredicate::Invoke(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_inline (ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Qos.ErrorMitigation.ExceptionPredicate>::MoveNext()
inline bool Enumerator_MoveNext_m3C7002DF0ACF05A9221C488830D89DAC953B2BDE (Enumerator_t60A0FF928BC8D610C88D9B2149E5D3592DF538FF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t60A0FF928BC8D610C88D9B2149E5D3592DF538FF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Qos.ErrorMitigation.ExceptionPredicate>::.ctor()
inline void List_1__ctor_m6D3A5AC423F5E385FB834AD564859D597583ABF6 (List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E (KeyValuePair_2_tB238689916B08B0CFF54232EB53E746022CA86A2* __this, int64_t ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tB238689916B08B0CFF54232EB53E746022CA86A2*, int64_t, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_mC2E112E191D945753C30F6A2475DDB865FD83097 (Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF*, const RuntimeMethod*))Dictionary_2__ctor_mC2E112E191D945753C30F6A2475DDB865FD83097_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6 (Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF* __this, int64_t ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF*, int64_t, bool, const RuntimeMethod*))Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
inline Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22 (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 (*) (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::get_Current()
inline String_t* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283 (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Void System.IO.Stream::CopyTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination0, const RuntimeMethod* method) ;
// System.Byte[] Unity.Services.Qos.QosDiscovery.JsonSerialization::Serialize<System.Object>(T)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* JsonSerialization_Serialize_TisRuntimeObject_m1E934D667AAE730925B6D8B2D08093F6E8E688F8 (RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (RuntimeObject*, const RuntimeMethod*))JsonSerialization_Serialize_TisRuntimeObject_m1E934D667AAE730925B6D8B2D08093F6E8E688F8_gshared)(___obj0, method);
}
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.Byte[] Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::ConstructBody(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* QosDiscoveryApiBaseRequest_ConstructBody_m7F185A28CF2CCE8BC8E0CBCB25D6AEFEDE0126D0 (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.String Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QosDiscoveryApiBaseRequest_GetFileName_m060FEF2B62E15D45760509984E2ABD20FF41FC2A (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.MultipartFormFileSection::.ctor(System.String,System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipartFormFileSection__ctor_m5F1D762C8E510D725DB8451A9083748A3B7798DA (MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB* __this, String_t* ___name0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, String_t* ___fileName2, String_t* ___contentType3, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QosDiscoveryApiBaseRequest__ctor_m9122E977B93327ACE35337EA6E107C8EBC1C4A6A (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServersRequest::get_Region()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* GetServersRequest_get_Region_m49F11E7EA0533CD65FB26FBE102104D2338AC934_inline (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814 (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6 (RuntimeObject* ___source0, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.String,System.Collections.Generic.List`1<System.String>,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m56323A5B31B725034B0CA9AE992F7FB2946AE2FD (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___queryParams0, String_t* ___key1, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___values2, String_t* ___style3, bool ___explode4, const RuntimeMethod* method) ;
// System.String Unity.Services.Qos.QosDiscovery.GetServersRequest::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GetServersRequest_get_Service_mD27F2D2FFD7924C9681C2116EFAFD03E77F59FEA_inline (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m37EBFF6DDCA6400B0C77F2CABAB42FDFA86B5A97 (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___queryParams0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.String Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateAcceptHeader(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QosDiscoveryApiBaseRequest_GenerateAcceptHeader_m8393B909E55846FC30E166C3ED7E52CBFA9CFD2F (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___accepts0, const RuntimeMethod* method) ;
// System.String Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateContentTypeHeader(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QosDiscoveryApiBaseRequest_GenerateContentTypeHeader_m8578BC7C80BEA3C4919B898356FC5A205B59DCE7 (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___contentTypes0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8002077DF6C1A68B5F9A799915DA6F1B9DC5B2FA (U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::get_Region()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* GetServiceServersRequest_get_Region_mA65DEA51BD0E77B107EFC7A6A65230E065DC9170_inline (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::get_Fleet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* GetServiceServersRequest_get_Fleet_mD6D5C2DA0516EF331104C353AF62138C36824108_inline (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA0E1961AA9DCAB1B69E085A4F8C7AB6CDBB8E19D (U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.Void Unity.Services.Qos.Configuration::.ctor(System.String,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_mFF1BCF6303D8E5E362C3655F302DD9E8870BCD33 (Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* __this, String_t* ___basePath0, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___requestTimeout1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___numRetries2, RuntimeObject* ___headers3, const RuntimeMethod* method) ;
// Unity.Services.Qos.Configuration Unity.Services.Qos.Configuration::MergeConfigurations(Unity.Services.Qos.Configuration,Unity.Services.Qos.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* Configuration_MergeConfigurations_m10AD4EC118B0BF363E4C1993A490032DC0CE981D (Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___a0, Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___b1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Qos.Http.BaseApiClient::.ctor(Unity.Services.Qos.Http.IHttpClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseApiClient__ctor_m99B4C250174C7CCEF6640C19E082E9FEF4DF0F99 (BaseApiClient_tB66E602A31C006C82CE3B68569B79BB3F1029657* __this, RuntimeObject* ___httpClient0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>>::Create()
inline AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C AsyncTaskMethodBuilder_1_Create_m5C6EF0B97EFADD2880D3947358ADDAB528720B84 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>>::Start<Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m4B159563B13DD8CCFC8E378E7931A07144458CB5 (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* __this, U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C*, U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m7AD0ADA5A36E34B0AACB7503DC9974E826ECBE7D_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>>::get_Task()
inline Task_1_t3ACB2F1474F202DC1D1177836C7669963263F595* AsyncTaskMethodBuilder_1_get_Task_m4E061BCB3FB3B70CD161C7A3B81875F04C517265 (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3ACB2F1474F202DC1D1177836C7669963263F595* (*) (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>>::Create()
inline AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394 AsyncTaskMethodBuilder_1_Create_mD5A04E574FE664D9918FF1C3C6AAA1DBBE11F734 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>>::Start<Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_mD80C3BBA3B50FF4776CCA5479A7E23F1C2879373 (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* __this, U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394*, U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_m1DF00A84FD89E01C914CB043B242D56424B99730_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>>::get_Task()
inline Task_1_tDAC25724227FDF2BAD68608CF2408FED59281FA0* AsyncTaskMethodBuilder_1_get_Task_m6C572AEC622690B0E34441E35D2CA89382C87EB3 (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tDAC25724227FDF2BAD68608CF2408FED59281FA0* (*) (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
inline void Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::Add(TKey,TValue)
inline void Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, Type_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, Type_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// Unity.Services.Qos.Configuration Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* QosDiscoveryApiClient_get_Configuration_mA8F6B3F90810410D20D6420909967781E524A3FE (QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Qos.QosDiscovery.GetServersRequest::ConstructUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GetServersRequest_ConstructUrl_m34E2AC5428BA279F3BF7001DB96FA0702B9D44C2 (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, String_t* ___requestBasePath0, const RuntimeMethod* method) ;
// System.Byte[] Unity.Services.Qos.QosDiscovery.GetServersRequest::ConstructBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetServersRequest_ConstructBody_mCDAF08BF135ED626205192361C7757197C162166 (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.QosDiscovery.GetServersRequest::ConstructHeaders(Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Qos.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* GetServersRequest_ConstructHeaders_m8CE30E99E33DDE136776B5830F2FCBF91C0B426A (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, RuntimeObject* ___accessToken0, Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___operationConfiguration1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse>,Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m77D18E22AA6D471141095F5302AD9BACB47AC0F4 (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* __this, TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5* ___awaiter0, U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C*, TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5*, U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m8AC5C5A843C17B2AED328C9A6D732C3C3070B2F6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Unity.Services.Qos.Http.ResponseHandler::HandleAsyncResponse<Unity.Services.Qos.Models.QosServersResponseBody>(Unity.Services.Qos.Http.HttpClientResponse,System.Collections.Generic.Dictionary`2<System.String,System.Type>)
inline QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE* ResponseHandler_HandleAsyncResponse_TisQosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE_m5F3F872A89E3D482CB1B0B28197640CA6C081B10 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ___statusCodeToTypeMap1, const RuntimeMethod* method)
{
	return ((  QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE* (*) (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5*, Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, const RuntimeMethod*))ResponseHandler_HandleAsyncResponse_TisRuntimeObject_m19EEB367ADCFA0A0A6EBC7BE2F306CF1F30DFA3C_gshared)(___response0, ___statusCodeToTypeMap1, method);
}
// System.Void Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>::.ctor(Unity.Services.Qos.Http.HttpClientResponse,T)
inline void Response_1__ctor_mD83291E65D9472F21EA8CD0AA3D87E974B9CB0EC (Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___httpResponse0, QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE* ___result1, const RuntimeMethod* method)
{
	((  void (*) (Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA*, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5*, QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE*, const RuntimeMethod*))Response_1__ctor_mCC5FAAFF87982FB84137E5952D0F1290DF6DBB11_gshared)(__this, ___httpResponse0, ___result1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m2FC346572D039DA3CBB73AFFC2B910E70CF39262 (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m9AABACC42B99194379BAB0A826F92FE82DF5F435 (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* __this, Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C*, Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServersAsyncU3Ed__7_MoveNext_m7D03C073B6C99374D7B4ED833585D6041991DB07 (U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m852ADB46FE5DF211160BF3ECF7672DA583B17848 (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServersAsyncU3Ed__7_SetStateMachine_m1A5B420B9D92DA3196FDD52C3069A8DBDCFFD6D8 (U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.String Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::ConstructUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GetServiceServersRequest_ConstructUrl_m56EB2029452920997532C4C0204869F8602C268E (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, String_t* ___requestBasePath0, const RuntimeMethod* method) ;
// System.Byte[] Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::ConstructBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetServiceServersRequest_ConstructBody_m6ABA128A6D362022654EF883080C72B44C1137D1 (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::ConstructHeaders(Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Qos.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* GetServiceServersRequest_ConstructHeaders_mFD5284F54B2E2B35E84A72C5C79E87B1EB9F3BBB (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, RuntimeObject* ___accessToken0, Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___operationConfiguration1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse>,Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_m9443C407EC7015A44B06EA97DC277F470D9C9B3B (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* __this, TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5* ___awaiter0, U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394*, TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5*, U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_m2BD9C9B4C90E3814F6E9DD0BCB0EE91CD62FECD8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Unity.Services.Qos.Http.ResponseHandler::HandleAsyncResponse<Unity.Services.Qos.Models.QosServiceServersResponseBody>(Unity.Services.Qos.Http.HttpClientResponse,System.Collections.Generic.Dictionary`2<System.String,System.Type>)
inline QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B* ResponseHandler_HandleAsyncResponse_TisQosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B_mA85DE7FFE9DFD39CA8463DFCA9141B4F97AEA14A (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ___statusCodeToTypeMap1, const RuntimeMethod* method)
{
	return ((  QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B* (*) (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5*, Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, const RuntimeMethod*))ResponseHandler_HandleAsyncResponse_TisRuntimeObject_m19EEB367ADCFA0A0A6EBC7BE2F306CF1F30DFA3C_gshared)(___response0, ___statusCodeToTypeMap1, method);
}
// System.Void Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>::.ctor(Unity.Services.Qos.Http.HttpClientResponse,T)
inline void Response_1__ctor_m9C3D06050E8C1DB07635DFB2085B0CBB5F0C5FC8 (Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___httpResponse0, QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B* ___result1, const RuntimeMethod* method)
{
	((  void (*) (Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B*, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5*, QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B*, const RuntimeMethod*))Response_1__ctor_mCC5FAAFF87982FB84137E5952D0F1290DF6DBB11_gshared)(__this, ___httpResponse0, ___result1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF500757A92D9F1CA48520A84B4B9F32DD4F21C91 (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mB1FD7B73A2BD32C9A1D26D70A27946A969EEF919 (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* __this, Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394*, Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServiceServersAsyncU3Ed__8_MoveNext_m1DF537C8115BFD4B2074AD9259AC233224A7AF07 (U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mF03FB15AE5F9AE900B341B8483F2BE171C32FAEE (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServiceServersAsyncU3Ed__8_SetStateMachine_m1657475A462E8CB67A32F4351AEA052DB67B218E (U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m40692977886B6F2A77F04D996EF600E964D2DD63 (U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::<CreateWebRequestAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* U3CU3Ec__DisplayClass5_0_U3CCreateWebRequestAsyncU3Eb__0_m60FFFB8FFEF5B2CE8600E447B80C6E6DB0BF40B0 (U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m568941266A566D96A1396704C4A64B3ADC24A1EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m7BFAFB5D23664699CEC44FB5FF8483497DCF3430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mF5A71A7C5A0AA70BEA3D2F332FC21402C62A7AB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m568941266A566D96A1396704C4A64B3ADC24A1EA(AsyncTaskMethodBuilder_1_Create_m568941266A566D96A1396704C4A64B3ADC24A1EA_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m7BFAFB5D23664699CEC44FB5FF8483497DCF3430(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m7BFAFB5D23664699CEC44FB5FF8483497DCF3430_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_mF5A71A7C5A0AA70BEA3D2F332FC21402C62A7AB9(L_2, AsyncTaskMethodBuilder_1_get_Task_mF5A71A7C5A0AA70BEA3D2F332FC21402C62A7AB9_RuntimeMethod_var);
		return L_3;
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
// System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_m23D59D187639AD9FB641F234939B5834BA628FBE (U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m76BB59C5C5476A8F6D4ECA2D8E9F6D148EC13FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA5C55821BD5C6765B11AFD769FA6470580EAB7C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* V_1 = NULL;
	HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_6;
	memset((&V_6), 0, sizeof(V_6));
	TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B5_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00fb_1;
			}
		}
		{
			// byte[] boundaryBytes = string.IsNullOrEmpty(boundary)
			//     ? UnityWebRequest.GenerateBoundary()
			//     : Encoding.Default.GetBytes(boundary);
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4 = L_3->___boundary_0;
			bool L_5;
			L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
			if (L_5)
			{
				goto IL_0033_1;
			}
		}
		{
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
			L_6 = Encoding_get_Default_mB48FC92A61D1153AC33C2C59F01D7266DF7D155C(NULL);
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = L_7->___boundary_0;
			NullCheck(L_6);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
			L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_8);
			G_B5_0 = L_9;
			goto IL_0038_1;
		}

IL_0033_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
			L_10 = UnityWebRequest_GenerateBoundary_mD854316C5BAE94BF1B09607A36F112D343208241(NULL);
			G_B5_0 = L_10;
		}

IL_0038_1:
		{
			V_3 = G_B5_0;
			// var request = new UnityWebRequest(url, method);
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_11 = V_1;
			NullCheck(L_11);
			String_t* L_12 = L_11->___url_1;
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_13 = V_1;
			NullCheck(L_13);
			String_t* L_14 = L_13->___method_2;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
			NullCheck(L_15);
			UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_15, L_12, L_14, NULL);
			V_4 = L_15;
			// foreach (var header in headers)
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_16 = V_1;
			NullCheck(L_16);
			RuntimeObject* L_17 = L_16->___headers_3;
			NullCheck(L_17);
			RuntimeObject* L_18;
			L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_17);
			V_5 = L_18;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0084_1:
				{// begin finally (depth: 2)
					{
						int32_t L_19 = V_0;
						if ((((int32_t)L_19) >= ((int32_t)0)))
						{
							goto IL_0093_1;
						}
					}
					{
						RuntimeObject* L_20 = V_5;
						if (!L_20)
						{
							goto IL_0093_1;
						}
					}
					{
						RuntimeObject* L_21 = V_5;
						NullCheck(L_21);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_21);
					}

IL_0093_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0079_2;
				}

IL_005b_2:
				{
					// foreach (var header in headers)
					RuntimeObject* L_22 = V_5;
					NullCheck(L_22);
					KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_23;
					L_23 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_22);
					V_6 = L_23;
					// request.SetRequestHeader(header.Key, header.Value);
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = V_4;
					String_t* L_25;
					L_25 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_6), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
					String_t* L_26;
					L_26 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_6), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
					NullCheck(L_24);
					UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_24, L_25, L_26, NULL);
				}

IL_0079_2:
				{
					// foreach (var header in headers)
					RuntimeObject* L_27 = V_5;
					NullCheck(L_27);
					bool L_28;
					L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_27);
					if (L_28)
					{
						goto IL_005b_2;
					}
				}
				{
					goto IL_0094_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0094_1:
		{
			// request.timeout = requestTimeout;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29 = V_4;
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_30 = V_1;
			NullCheck(L_30);
			int32_t L_31 = L_30->___requestTimeout_4;
			NullCheck(L_29);
			UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_29, L_31, NULL);
			// request = SetupMultipartRequest(request, body, boundaryBytes);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_32 = V_4;
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_33 = V_1;
			NullCheck(L_33);
			List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_34 = L_33->___body_5;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_3;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_36;
			L_36 = HttpClient_SetupMultipartRequest_m942E9984424A47309D6CEC78FA2B679EEB0D3D90(L_32, L_34, L_35, NULL);
			V_4 = L_36;
			// request.downloadHandler = new DownloadHandlerBuffer();
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_37 = V_4;
			DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_38 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
			NullCheck(L_38);
			DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_38, NULL);
			NullCheck(L_37);
			UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_37, L_38, NULL);
			// return await SendWebRequest(request);
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_39 = V_1;
			NullCheck(L_39);
			HttpClient_t33C65C4AD210DC5BA7E9DA2E12485D3F71D25E02* L_40 = L_39->___U3CU3E4__this_6;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_41 = V_4;
			NullCheck(L_40);
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_42;
			L_42 = HttpClient_SendWebRequest_m2D838D76A68C3AAB0F5EE58D82D10860B61C2B8B(L_40, L_41, NULL);
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_43;
			L_43 = UnityWebRequestHelpers_GetAwaiter_mFE3CEA3273241928556A3EE6EB2D699C01EF52F7(L_42, NULL);
			V_7 = L_43;
			bool L_44;
			L_44 = TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E((&V_7), TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E_RuntimeMethod_var);
			if (L_44)
			{
				goto IL_0118_1;
			}
		}
		{
			int32_t L_45 = 0;
			V_0 = L_45;
			__this->___U3CU3E1__state_0 = L_45;
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_46 = V_7;
			__this->___U3CU3Eu__1_3 = L_46;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* L_47 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m76BB59C5C5476A8F6D4ECA2D8E9F6D148EC13FF2(L_47, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C_m76BB59C5C5476A8F6D4ECA2D8E9F6D148EC13FF2_RuntimeMethod_var);
			goto IL_014f;
		}

IL_00fb_1:
		{
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_48 = __this->___U3CU3Eu__1_3;
			V_7 = L_48;
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5* L_49 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_49, sizeof(TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5));
			int32_t L_50 = (-1);
			V_0 = L_50;
			__this->___U3CU3E1__state_0 = L_50;
		}

IL_0118_1:
		{
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_51;
			L_51 = TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516((&V_7), TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516_RuntimeMethod_var);
			V_2 = L_51;
			goto IL_013b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0122;
		}
		throw e;
	}

CATCH_0122:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* L_52 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_53 = V_8;
		AsyncTaskMethodBuilder_1_SetException_m17572A422367948A382BFB373E011DCEBEB87E39(L_52, L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m17572A422367948A382BFB373E011DCEBEB87E39_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_014f;
	}// end catch (depth: 1)

IL_013b:
	{
		// }, CancellationToken.None, TaskCreationOptions.None,
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* L_54 = (&__this->___U3CU3Et__builder_1);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_55 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mA5C55821BD5C6765B11AFD769FA6470580EAB7C9(L_54, L_55, AsyncTaskMethodBuilder_1_SetResult_mA5C55821BD5C6765B11AFD769FA6470580EAB7C9_RuntimeMethod_var);
	}

IL_014f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_m23D59D187639AD9FB641F234939B5834BA628FBE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C*>(__this + _offset);
	U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_m23D59D187639AD9FB641F234939B5834BA628FBE(_thisAdjusted, method);
}
// System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m1D240B358D2D64F67840B533CE4F00CAAC6C2EE0 (U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m22CE53F12FF052326897A6609302F1F59FA297F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m22CE53F12FF052326897A6609302F1F59FA297F3(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m22CE53F12FF052326897A6609302F1F59FA297F3_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m1D240B358D2D64F67840B533CE4F00CAAC6C2EE0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_tBEFCED2478D49F74ECFCDEB9D67AB61C0462A94C*>(__this + _offset);
	U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m1D240B358D2D64F67840B533CE4F00CAAC6C2EE0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m015F1DB907416B26A58B29B6D045A71BD6A02A43 (U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_mF8AD6F564DD51AEA9D2D6CD7ECFE8A31545EE3FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_m550F0210FF879BBF4E22ABE2DF80DC07249743D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA5C55821BD5C6765B11AFD769FA6470580EAB7C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t951450D17F31277D24526D3476548479EA423E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mDC79D5C0C0C04C17BA5981590E024B8482994BEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEFFE04FBAFA4052E44F00F8DC3F35323AA96F442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskFactory_StartNew_TisTask_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9_m6DD844F4B1EC627E0DF2DF98605FAAA3490D8818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m3943D3360E5E23B9A4BB692F1E1B927BB580F4C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CCreateWebRequestAsyncU3Eb__0_m60FFFB8FFEF5B2CE8600E447B80C6E6DB0BF40B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* V_1 = NULL;
	U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* V_2 = NULL;
	TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00c1_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0115_1;
			}
		}
		{
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_3 = (U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass5_0__ctor_m40692977886B6F2A77F04D996EF600E964D2DD63(L_3, NULL);
			V_2 = L_3;
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_4 = V_2;
			String_t* L_5 = __this->___boundary_2;
			NullCheck(L_4);
			L_4->___boundary_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___boundary_0), (void*)L_5);
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_6 = V_2;
			String_t* L_7 = __this->___url_3;
			NullCheck(L_6);
			L_6->___url_1 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&L_6->___url_1), (void*)L_7);
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_8 = V_2;
			String_t* L_9 = __this->___method_4;
			NullCheck(L_8);
			L_8->___method_2 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&L_8->___method_2), (void*)L_9);
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_10 = V_2;
			RuntimeObject* L_11 = __this->___headers_5;
			NullCheck(L_10);
			L_10->___headers_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&L_10->___headers_3), (void*)L_11);
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_12 = V_2;
			int32_t L_13 = __this->___requestTimeout_6;
			NullCheck(L_12);
			L_12->___requestTimeout_4 = L_13;
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_14 = V_2;
			List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_15 = __this->___body_7;
			NullCheck(L_14);
			L_14->___body_5 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&L_14->___body_5), (void*)L_15);
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_16 = V_2;
			HttpClient_t33C65C4AD210DC5BA7E9DA2E12485D3F71D25E02* L_17 = __this->___U3CU3E4__this_8;
			NullCheck(L_16);
			L_16->___U3CU3E4__this_6 = L_17;
			Il2CppCodeGenWriteBarrier((void**)(&L_16->___U3CU3E4__this_6), (void*)L_17);
			// var result = await await Task.Factory.StartNew(async () =>
			//     {
			//         byte[] boundaryBytes = string.IsNullOrEmpty(boundary)
			//             ? UnityWebRequest.GenerateBoundary()
			//             : Encoding.Default.GetBytes(boundary);
			//         var request = new UnityWebRequest(url, method);
			// 
			//         foreach (var header in headers)
			//         {
			//             request.SetRequestHeader(header.Key, header.Value);
			//         }
			// 
			//         request.timeout = requestTimeout;
			//         request = SetupMultipartRequest(request, body, boundaryBytes);
			//         request.downloadHandler = new DownloadHandlerBuffer();
			// 
			//         return await SendWebRequest(request);
			//     }, CancellationToken.None, TaskCreationOptions.None,
			//     Scheduler.ThreadHelper.TaskScheduler);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_18;
			L_18 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
			U3CU3Ec__DisplayClass5_0_tBCA6B671573DEF00CD15C161137E2826BD15042E* L_19 = V_2;
			Func_1_t951450D17F31277D24526D3476548479EA423E04* L_20 = (Func_1_t951450D17F31277D24526D3476548479EA423E04*)il2cpp_codegen_object_new(Func_1_t951450D17F31277D24526D3476548479EA423E04_il2cpp_TypeInfo_var);
			NullCheck(L_20);
			Func_1__ctor_m6AF38DBC9D609C6BF3D7D36F10099569197EE7E8(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CCreateWebRequestAsyncU3Eb__0_m60FFFB8FFEF5B2CE8600E447B80C6E6DB0BF40B0_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_21;
			L_21 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
			TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_22;
			L_22 = ThreadHelper_get_TaskScheduler_mE4BB459B45461BD9314E69B218A9D3F021E98672_inline(NULL);
			NullCheck(L_18);
			Task_1_tFD4D83E09A0B2DA998E9E2957AD742748E683BC3* L_23;
			L_23 = TaskFactory_StartNew_TisTask_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9_m6DD844F4B1EC627E0DF2DF98605FAAA3490D8818(L_18, L_20, L_21, 0, L_22, TaskFactory_StartNew_TisTask_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9_m6DD844F4B1EC627E0DF2DF98605FAAA3490D8818_RuntimeMethod_var);
			NullCheck(L_23);
			TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1 L_24;
			L_24 = Task_1_GetAwaiter_m3943D3360E5E23B9A4BB692F1E1B927BB580F4C4(L_23, Task_1_GetAwaiter_m3943D3360E5E23B9A4BB692F1E1B927BB580F4C4_RuntimeMethod_var);
			V_3 = L_24;
			bool L_25;
			L_25 = TaskAwaiter_1_get_IsCompleted_mEFFE04FBAFA4052E44F00F8DC3F35323AA96F442((&V_3), TaskAwaiter_1_get_IsCompleted_mEFFE04FBAFA4052E44F00F8DC3F35323AA96F442_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00dd_1;
			}
		}
		{
			int32_t L_26 = 0;
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
			TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1 L_27 = V_3;
			__this->___U3CU3Eu__1_9 = L_27;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* L_28 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_mF8AD6F564DD51AEA9D2D6CD7ECFE8A31545EE3FD(L_28, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_mF8AD6F564DD51AEA9D2D6CD7ECFE8A31545EE3FD_RuntimeMethod_var);
			goto IL_0169;
		}

IL_00c1_1:
		{
			TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1 L_29 = __this->___U3CU3Eu__1_9;
			V_3 = L_29;
			TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1* L_30 = (&__this->___U3CU3Eu__1_9);
			il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_1_t37EC27AA58021553FF8951310BD167BB7000B5C1));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
		}

IL_00dd_1:
		{
			Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* L_32;
			L_32 = TaskAwaiter_1_GetResult_mDC79D5C0C0C04C17BA5981590E024B8482994BEC((&V_3), TaskAwaiter_1_GetResult_mDC79D5C0C0C04C17BA5981590E024B8482994BEC_RuntimeMethod_var);
			NullCheck(L_32);
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_33;
			L_33 = Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9(L_32, Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9_RuntimeMethod_var);
			V_4 = L_33;
			bool L_34;
			L_34 = TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E((&V_4), TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_0132_1;
			}
		}
		{
			int32_t L_35 = 1;
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_36 = V_4;
			__this->___U3CU3Eu__2_10 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_10))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* L_37 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_m550F0210FF879BBF4E22ABE2DF80DC07249743D1(L_37, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F_m550F0210FF879BBF4E22ABE2DF80DC07249743D1_RuntimeMethod_var);
			goto IL_0169;
		}

IL_0115_1:
		{
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_38 = __this->___U3CU3Eu__2_10;
			V_4 = L_38;
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5* L_39 = (&__this->___U3CU3Eu__2_10);
			il2cpp_codegen_initobj(L_39, sizeof(TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
		}

IL_0132_1:
		{
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_41;
			L_41 = TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516((&V_4), TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516_RuntimeMethod_var);
			// return result;
			V_1 = L_41;
			goto IL_0155;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013c;
		}
		throw e;
	}

CATCH_013c:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* L_42 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_43 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m17572A422367948A382BFB373E011DCEBEB87E39(L_42, L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m17572A422367948A382BFB373E011DCEBEB87E39_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0169;
	}// end catch (depth: 1)

IL_0155:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* L_44 = (&__this->___U3CU3Et__builder_1);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_45 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mA5C55821BD5C6765B11AFD769FA6470580EAB7C9(L_44, L_45, AsyncTaskMethodBuilder_1_SetResult_mA5C55821BD5C6765B11AFD769FA6470580EAB7C9_RuntimeMethod_var);
	}

IL_0169:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m015F1DB907416B26A58B29B6D045A71BD6A02A43_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F*>(__this + _offset);
	U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m015F1DB907416B26A58B29B6D045A71BD6A02A43(_thisAdjusted, method);
}
// System.Void Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m7C97C2175057580CDD241D026CC3BE392DD81D93 (U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m22CE53F12FF052326897A6609302F1F59FA297F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t407957A2F4FD9D0A272035DD4C2D3F67FE10AB6E* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m22CE53F12FF052326897A6609302F1F59FA297F3(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m22CE53F12FF052326897A6609302F1F59FA297F3_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m7C97C2175057580CDD241D026CC3BE392DD81D93_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCreateWebRequestAsyncU3Ed__5_tA77D014B1E570E006E424FD46449DD2C654E199F*>(__this + _offset);
	U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m7C97C2175057580CDD241D026CC3BE392DD81D93(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Qos.Http.HttpClientResponse::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int64,System.Boolean,System.Boolean,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClientResponse__ctor_mD1FC246D901ACC12807D2B5C1DB39B038622A4E0 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers0, int64_t ___statusCode1, bool ___isHttpError2, bool ___isNetworkError3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data4, String_t* ___errorMessage5, const RuntimeMethod* method) 
{
	{
		// public HttpClientResponse(Dictionary<string, string> headers, long statusCode, bool isHttpError, bool isNetworkError, byte[] data, string errorMessage)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Headers = headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___headers0;
		__this->___U3CHeadersU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeadersU3Ek__BackingField_0), (void*)L_0);
		// StatusCode = statusCode;
		int64_t L_1 = ___statusCode1;
		__this->___U3CStatusCodeU3Ek__BackingField_1 = L_1;
		// IsHttpError = isHttpError;
		bool L_2 = ___isHttpError2;
		__this->___U3CIsHttpErrorU3Ek__BackingField_2 = L_2;
		// IsNetworkError = isNetworkError;
		bool L_3 = ___isNetworkError3;
		__this->___U3CIsNetworkErrorU3Ek__BackingField_3 = L_3;
		// Data = data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___data4;
		__this->___U3CDataU3Ek__BackingField_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_4);
		// ErrorMessage = errorMessage;
		String_t* L_5 = ___errorMessage5;
		__this->___U3CErrorMessageU3Ek__BackingField_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorMessageU3Ek__BackingField_5), (void*)L_5);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Http.HttpClientResponse::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* HttpClientResponse_get_Headers_mF870416900DD323B636429C079B0BCAE39AEA2AA (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> Headers { get; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CHeadersU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Int64 Unity.Services.Qos.Http.HttpClientResponse::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HttpClientResponse_get_StatusCode_mC8A80B746A2F6E82F65517C3AB4C479784B55998 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) 
{
	{
		// public long StatusCode { get; }
		int64_t L_0 = __this->___U3CStatusCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean Unity.Services.Qos.Http.HttpClientResponse::get_IsHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpClientResponse_get_IsHttpError_m6DCA23589DA544E4E462A755FA5E781206995A3B (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsHttpError { get; }
		bool L_0 = __this->___U3CIsHttpErrorU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Boolean Unity.Services.Qos.Http.HttpClientResponse::get_IsNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpClientResponse_get_IsNetworkError_m3C3F6623CBFEFED95570B0EC1677CA7E31C9DAE0 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsNetworkError { get; }
		bool L_0 = __this->___U3CIsNetworkErrorU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Byte[] Unity.Services.Qos.Http.HttpClientResponse::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HttpClientResponse_get_Data_mB0A3BB94BF7CE548D1464659194CA4E9557E09DE (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get;}
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String Unity.Services.Qos.Http.HttpClientResponse::get_ErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpClientResponse_get_ErrorMessage_mC9BA60D07DC70CF2BAA92C4C256BDF5CB74F326B (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) 
{
	{
		// public string ErrorMessage { get; }
		String_t* L_0 = __this->___U3CErrorMessageU3Ek__BackingField_5;
		return L_0;
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
// System.Void Unity.Services.Qos.Http.HttpException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpException__ctor_mCC244F8536EC09FF5682C779CE590A4CCC92083A (HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HttpException() : base()
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Qos.Http.HttpException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpException__ctor_mB86916F592FA13816761064DA3D9F23C54ACB6F3 (HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HttpException(string message) : base(message)
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Qos.Http.HttpException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpException__ctor_m776EE74F052257E8AE9ABCF9C16CBF5774673578 (HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HttpException(string message, Exception inner) : base(message, inner)
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Qos.Http.HttpException::.ctor(Unity.Services.Qos.Http.HttpClientResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpException__ctor_m4927A27335A8E59162013A85EF8972D88AA0754C (HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62EA7B89319D021FF6C2C425E7E16557C7EFC940);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HttpException(HttpClientResponse response) : base($"({response.StatusCode}) {response.ErrorMessage}")
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_0 = ___response0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = HttpClientResponse_get_StatusCode_mC8A80B746A2F6E82F65517C3AB4C479784B55998_inline(L_0, NULL);
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_4 = ___response0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = HttpClientResponse_get_ErrorMessage_mC9BA60D07DC70CF2BAA92C4C256BDF5CB74F326B_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral62EA7B89319D021FF6C2C425E7E16557C7EFC940, L_3, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_6, NULL);
		// Response = response;
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_7 = ___response0;
		__this->___Response_18 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Response_18), (void*)L_7);
		// }
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
// System.Void Unity.Services.Qos.Http.JsonHelpers::RegisterTypesForAOT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHelpers_RegisterTypesForAOT_m974460CCF262A51C0C6A1A6DC8A5DD8C0E65BDB5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AotHelper_EnsureType_TisJsonObjectConverter_t0BB57AC3C22D0CC9C0EB390FA84472ABE9C7A873_m768B3036F9C0932800F2472FB9B384873025789F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AotHelper_EnsureType_TisStringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_m6A1C428F1F47D693B537597E785391C4D42AD480_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AotHelper.EnsureType<StringEnumConverter>();
		il2cpp_codegen_runtime_class_init_inline(AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674_il2cpp_TypeInfo_var);
		AotHelper_EnsureType_TisStringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_m6A1C428F1F47D693B537597E785391C4D42AD480(AotHelper_EnsureType_TisStringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_m6A1C428F1F47D693B537597E785391C4D42AD480_RuntimeMethod_var);
		// AotHelper.EnsureType<JsonObjectConverter>();
		AotHelper_EnsureType_TisJsonObjectConverter_t0BB57AC3C22D0CC9C0EB390FA84472ABE9C7A873_m768B3036F9C0932800F2472FB9B384873025789F(AotHelper_EnsureType_TisJsonObjectConverter_t0BB57AC3C22D0CC9C0EB390FA84472ABE9C7A873_m768B3036F9C0932800F2472FB9B384873025789F_RuntimeMethod_var);
		// }
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
// System.Void Unity.Services.Qos.Http.JsonObject::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419 (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		// internal JsonObject(object obj)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.obj = obj;
		RuntimeObject* L_0 = ___obj0;
		__this->___obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___obj_0), (void*)L_0);
		// }
		return;
	}
}
// System.String Unity.Services.Qos.Http.JsonObject::GetAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonObject_GetAsString_m8CAC654D2EBE92E309029903CE9BC57DBB9BE8F3 (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (obj == null)
			RuntimeObject* L_0 = __this->___obj_0;
			if (L_0)
			{
				goto IL_0010_1;
			}
		}
		{
			// return "";
			V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			goto IL_0054;
		}

IL_0010_1:
		{
			// if (obj.GetType() == typeof(String))
			RuntimeObject* L_1 = __this->___obj_0;
			NullCheck(L_1);
			Type_t* L_2;
			L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_4;
			L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
			bool L_5;
			L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
			if (!L_5)
			{
				goto IL_003a_1;
			}
		}
		{
			// return obj.ToString();
			RuntimeObject* L_6 = __this->___obj_0;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
			V_0 = L_7;
			goto IL_0054;
		}

IL_003a_1:
		{
			// return JsonConvert.SerializeObject(obj);
			RuntimeObject* L_8 = __this->___obj_0;
			il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
			String_t* L_9;
			L_9 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_8, NULL);
			V_0 = L_9;
			goto IL_0054;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0048;
		}
		throw e;
	}

CATCH_0048:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// throw new InvalidOperationException("Failed to convert JsonObject to string.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E2A0AF17AD799ECD9CA025D599F108129A8D1AA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonObject_GetAsString_m8CAC654D2EBE92E309029903CE9BC57DBB9BE8F3_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0054:
	{
		// }
		String_t* L_11 = V_0;
		return L_11;
	}
}
// Unity.Services.Qos.Http.IDeserializable Unity.Services.Qos.Http.JsonObject::GetNewJsonObjectResponse(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_GetNewJsonObjectResponse_m8F3EA16DA039644571EC1B22802101DDFF779488 (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (IDeserializable) new JsonObject(o);
		RuntimeObject* L_0 = ___o0;
		JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_1 = (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*)il2cpp_codegen_object_new(JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* JsonObject_GetNewJsonObjectResponse_m8D76EA8B41E5F473B50DC4D576EBCA781E0F8526 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m0D851A1D31C1915CA07C148BCBB29A2AFCFF9650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_mD111F15C37C3A57CB6D0EF159CA51540E1DAB0B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__6_0_mB1313A28830B6C3CAE5DF771A6C6ECEDC7D7C02A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* G_B4_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* G_B4_1 = NULL;
	Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* G_B3_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* G_B3_1 = NULL;
	{
		// if (o == null) {
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___o0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C*)NULL;
	}

IL_0005:
	{
		// return o.Select(v => (IDeserializable) new JsonObject(v)).ToList();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = ___o0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* L_2 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = L_1;
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = L_1;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* L_4 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* L_5 = (Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853*)il2cpp_codegen_object_new(Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m25BE0B588CCAED3F3DE12C4E84005EF20DFF8B4C(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__6_0_mB1313A28830B6C3CAE5DF771A6C6ECEDC7D7C02A_RuntimeMethod_var), NULL);
		Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* L_6 = L_5;
		((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_6);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
	}

IL_0025:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisRuntimeObject_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m0D851A1D31C1915CA07C148BCBB29A2AFCFF9650(G_B4_1, G_B4_0, Enumerable_Select_TisRuntimeObject_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m0D851A1D31C1915CA07C148BCBB29A2AFCFF9650_RuntimeMethod_var);
		List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* L_8;
		L_8 = Enumerable_ToList_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_mD111F15C37C3A57CB6D0EF159CA51540E1DAB0B4(L_7, Enumerable_ToList_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_mD111F15C37C3A57CB6D0EF159CA51540E1DAB0B4_RuntimeMethod_var);
		return L_8;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>> Unity.Services.Qos.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313* JsonObject_GetNewJsonObjectResponse_m7CDA73322474896572A97C6EE5B169DE6ECE6598 (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisList_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m8FC8204DEBAD4AAED4C0327277514E568E26969F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m8831DA1E9C436D3CE993739A17B27EF2081E6B52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_0_m60FE2F5EAD4ECFBA1C02A6952221555AE509592D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55* G_B4_0 = NULL;
	List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* G_B4_1 = NULL;
	Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55* G_B3_0 = NULL;
	List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* G_B3_1 = NULL;
	{
		// if (o == null) {
		List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* L_0 = ___o0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313*)NULL;
	}

IL_0005:
	{
		// return o.Select(l => l.Select(v => v == null ? null : (IDeserializable) new JsonObject(v)).ToList()).ToList();
		List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* L_1 = ___o0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55* L_2 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_3;
		Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = L_1;
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = L_1;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* L_4 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55* L_5 = (Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55*)il2cpp_codegen_object_new(Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m039215FB177F032011EC38FDC00F60FEEC9BF9CC(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_0_m60FE2F5EAD4ECFBA1C02A6952221555AE509592D_RuntimeMethod_var), NULL);
		Func_2_t0D3BFAFFBECF8A93C63E780CF6C007B0F2D20B55* L_6 = L_5;
		((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_3), (void*)L_6);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
	}

IL_0025:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisList_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m8FC8204DEBAD4AAED4C0327277514E568E26969F(G_B4_1, G_B4_0, Enumerable_Select_TisList_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m8FC8204DEBAD4AAED4C0327277514E568E26969F_RuntimeMethod_var);
		List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313* L_8;
		L_8 = Enumerable_ToList_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m8831DA1E9C436D3CE993739A17B27EF2081E6B52(L_7, Enumerable_ToList_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m8831DA1E9C436D3CE993739A17B27EF2081E6B52_RuntimeMethod_var);
		return L_8;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF* JsonObject_GetNewJsonObjectResponse_m120AE5571C8A5AB895A4ECF9B56C27EA7F91C115 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisKeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_TisString_t_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m628658841285AC5A2C0B9277D9D1FD7A5DCA6EB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_0_m4BC198652ECFBE3189EE4EBCD1145D07F39E523C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_1_m07B1EE8451E25AFA2279A63E4BC8FD9DB9E23EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* G_B4_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* G_B4_1 = NULL;
	Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* G_B3_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* G_B3_1 = NULL;
	Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9* G_B6_0 = NULL;
	Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* G_B6_1 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* G_B6_2 = NULL;
	Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9* G_B5_0 = NULL;
	Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* G_B5_1 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* G_B5_2 = NULL;
	{
		// if (o == null) {
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___o0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF*)NULL;
	}

IL_0005:
	{
		// return o.ToDictionary(kv => kv.Key, kv => (IDeserializable) new JsonObject(kv.Value));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___o0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* L_2 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_4;
		Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = L_1;
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = L_1;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* L_4 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* L_5 = (Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B*)il2cpp_codegen_object_new(Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m4F049E2C488DF6CAE688DA027C6FC95F6174AC4C(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_0_m4BC198652ECFBE3189EE4EBCD1145D07F39E523C_RuntimeMethod_var), NULL);
		Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* L_6 = L_5;
		((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_4), (void*)L_6);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
	}

IL_0025:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9* L_7 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_5;
		Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9* L_8 = L_7;
		G_B5_0 = L_8;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		if (L_8)
		{
			G_B6_0 = L_8;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* L_9 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9* L_10 = (Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9*)il2cpp_codegen_object_new(Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m679AFFD09EC2F1B6E3330FA91AA670246F61771A(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_1_m07B1EE8451E25AFA2279A63E4BC8FD9DB9E23EA7_RuntimeMethod_var), NULL);
		Func_2_t549C42B41C14BEBE99F5905228C5DA4006CF92C9* L_11 = L_10;
		((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_5), (void*)L_11);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0044:
	{
		Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF* L_12;
		L_12 = Enumerable_ToDictionary_TisKeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_TisString_t_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m628658841285AC5A2C0B9277D9D1FD7A5DCA6EB0(G_B6_2, G_B6_1, G_B6_0, Enumerable_ToDictionary_TisKeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_TisString_t_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m628658841285AC5A2C0B9277D9D1FD7A5DCA6EB0_RuntimeMethod_var);
		return L_12;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>> Unity.Services.Qos.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t17FA99183E9D8EE37CED1732C9C4B6F25FE14B00* JsonObject_GetNewJsonObjectResponse_mA200A82FD2A69D59C88D2EAD6AC95AE9116441DB (Dictionary_2_t98F67E85D63B9861BE87D18EF2AEE6BC078DC067* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisKeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C_TisString_t_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m3E4D5611E86BEEB27DD3CD4468097B67013B0A64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_0_mF8021649DCE28882A3B6F7A03143BC97393E8139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_1_m23599E62ED6614FFA53D2428BFDE56B40DAEF2B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398* G_B4_0 = NULL;
	Dictionary_2_t98F67E85D63B9861BE87D18EF2AEE6BC078DC067* G_B4_1 = NULL;
	Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398* G_B3_0 = NULL;
	Dictionary_2_t98F67E85D63B9861BE87D18EF2AEE6BC078DC067* G_B3_1 = NULL;
	Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317* G_B6_0 = NULL;
	Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398* G_B6_1 = NULL;
	Dictionary_2_t98F67E85D63B9861BE87D18EF2AEE6BC078DC067* G_B6_2 = NULL;
	Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317* G_B5_0 = NULL;
	Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398* G_B5_1 = NULL;
	Dictionary_2_t98F67E85D63B9861BE87D18EF2AEE6BC078DC067* G_B5_2 = NULL;
	{
		// if (o == null) {
		Dictionary_2_t98F67E85D63B9861BE87D18EF2AEE6BC078DC067* L_0 = ___o0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (Dictionary_2_t17FA99183E9D8EE37CED1732C9C4B6F25FE14B00*)NULL;
	}

IL_0005:
	{
		// return o.ToDictionary(kv => kv.Key, kv => GetNewJsonObjectResponse(kv.Value));
		Dictionary_2_t98F67E85D63B9861BE87D18EF2AEE6BC078DC067* L_1 = ___o0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398* L_2 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_6;
		Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = L_1;
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = L_1;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* L_4 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398* L_5 = (Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398*)il2cpp_codegen_object_new(Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mBBCB2C4390040071351394228DA494BDF3DD2A31(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_0_mF8021649DCE28882A3B6F7A03143BC97393E8139_RuntimeMethod_var), NULL);
		Func_2_tEED63335B20AD9587C01CA6994AAC5C004611398* L_6 = L_5;
		((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_6), (void*)L_6);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
	}

IL_0025:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317* L_7 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_7;
		Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317* L_8 = L_7;
		G_B5_0 = L_8;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		if (L_8)
		{
			G_B6_0 = L_8;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* L_9 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317* L_10 = (Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317*)il2cpp_codegen_object_new(Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m6F0739CEBA8C24F372EB2E66FF8C1DE5433F32E3(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_1_m23599E62ED6614FFA53D2428BFDE56B40DAEF2B7_RuntimeMethod_var), NULL);
		Func_2_tF0F5A02316E0BB4BA01D7C5084A9F65496C9B317* L_11 = L_10;
		((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_7), (void*)L_11);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0044:
	{
		Dictionary_2_t17FA99183E9D8EE37CED1732C9C4B6F25FE14B00* L_12;
		L_12 = Enumerable_ToDictionary_TisKeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C_TisString_t_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m3E4D5611E86BEEB27DD3CD4468097B67013B0A64(G_B6_2, G_B6_1, G_B6_0, Enumerable_ToDictionary_TisKeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C_TisString_t_TisList_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_m3E4D5611E86BEEB27DD3CD4468097B67013B0A64_RuntimeMethod_var);
		return L_12;
	}
}
// System.Void Unity.Services.Qos.Http.JsonObject::ValidateValue(System.Object,System.String,System.String,System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_ValidateValue_m3D015321ABD5AE6AED7B475B6D3C34F0BCE63D80 (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* __this, RuntimeObject* ___value0, String_t* ___objectName1, String_t* ___memberType2, String_t* ___memberName3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___errors4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_ValidateObject_TisRuntimeObject_m570FDFC8E0E8157D0D05F29DC01FE6245CB0A7B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10582F33BEC60F8D94857543561434810C767C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7E2C1230709693F958484EC1F795412676C76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9E4A16C4AD972E8CC593A8BC4AEACF815369120);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(value is ValueType) && !(value is string))
		RuntimeObject* L_0 = ___value0;
		if (((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)IsInstClass((RuntimeObject*)L_0, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		// if (value is JObject)
		RuntimeObject* L_2 = ___value0;
		if (!((JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)IsInstClass((RuntimeObject*)L_2, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// errors.Add(
		//     $"{memberType}: \"{memberName}\" on Type: \"{objectName}\" must not be of type `object` or `dynamic`");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___errors4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___memberType2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralB4B7E2C1230709693F958484EC1F795412676C76);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB4B7E2C1230709693F958484EC1F795412676C76);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___memberName3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral10582F33BEC60F8D94857543561434810C767C0E);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral10582F33BEC60F8D94857543561434810C767C0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12 = ___objectName1;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralC9E4A16C4AD972E8CC593A8BC4AEACF815369120);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC9E4A16C4AD972E8CC593A8BC4AEACF815369120);
		String_t* L_14;
		L_14 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		return;
	}

IL_0050:
	{
		// ValidateObject(value, errors);
		RuntimeObject* L_15 = ___value0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = ___errors4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17;
		L_17 = JsonObject_ValidateObject_TisRuntimeObject_m570FDFC8E0E8157D0D05F29DC01FE6245CB0A7B7(__this, L_15, L_16, JsonObject_ValidateObject_TisRuntimeObject_m570FDFC8E0E8157D0D05F29DC01FE6245CB0A7B7_RuntimeMethod_var);
	}

IL_005a:
	{
		// }
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
// System.Void Unity.Services.Qos.Http.JsonObject/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1F5508EE17758D4288653D1DFEE9A14F4C7BC87C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* L_0 = (U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F*)il2cpp_codegen_object_new(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5448ADC46B780675F047487C7C9E796EE4F5905B(L_0, NULL);
		((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Qos.Http.JsonObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5448ADC46B780675F047487C7C9E796EE4F5905B (U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Unity.Services.Qos.Http.IDeserializable Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__6_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__6_0_mB1313A28830B6C3CAE5DF771A6C6ECEDC7D7C02A (U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* __this, RuntimeObject* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return o.Select(v => (IDeserializable) new JsonObject(v)).ToList();
		RuntimeObject* L_0 = ___v0;
		JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_1 = (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*)il2cpp_codegen_object_new(JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__7_0(System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_0_m60FE2F5EAD4ECFBA1C02A6952221555AE509592D (U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___l0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m0D851A1D31C1915CA07C148BCBB29A2AFCFF9650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_mD111F15C37C3A57CB6D0EF159CA51540E1DAB0B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_1_mB2A2EE2C3DBFC2B40A4A32A42A185B84AC697994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* G_B2_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* G_B2_1 = NULL;
	Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* G_B1_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* G_B1_1 = NULL;
	{
		// return o.Select(l => l.Select(v => v == null ? null : (IDeserializable) new JsonObject(v)).ToList()).ToList();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___l0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* L_1 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2;
		Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var);
		U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* L_3 = ((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* L_4 = (Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853*)il2cpp_codegen_object_new(Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m25BE0B588CCAED3F3DE12C4E84005EF20DFF8B4C(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_1_mB2A2EE2C3DBFC2B40A4A32A42A185B84AC697994_RuntimeMethod_var), NULL);
		Func_2_tB8D3F4F79768A32CDF942C6F93328AF15089C853* L_5 = L_4;
		((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisRuntimeObject_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m0D851A1D31C1915CA07C148BCBB29A2AFCFF9650(G_B2_1, G_B2_0, Enumerable_Select_TisRuntimeObject_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_m0D851A1D31C1915CA07C148BCBB29A2AFCFF9650_RuntimeMethod_var);
		List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* L_7;
		L_7 = Enumerable_ToList_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_mD111F15C37C3A57CB6D0EF159CA51540E1DAB0B4(L_6, Enumerable_ToList_TisIDeserializable_tEDE824DBE70B15BF4AD9E4A5E7BC0028BC3C792B_mD111F15C37C3A57CB6D0EF159CA51540E1DAB0B4_RuntimeMethod_var);
		return L_7;
	}
}
// Unity.Services.Qos.Http.IDeserializable Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__7_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_1_mB2A2EE2C3DBFC2B40A4A32A42A185B84AC697994 (U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* __this, RuntimeObject* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return o.Select(l => l.Select(v => v == null ? null : (IDeserializable) new JsonObject(v)).ToList()).ToList();
		RuntimeObject* L_0 = ___v0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeObject* L_1 = ___v0;
		JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_2 = (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*)il2cpp_codegen_object_new(JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419(L_2, L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_000c:
	{
		return (RuntimeObject*)NULL;
	}
}
// System.String Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__8_0(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_0_m4BC198652ECFBE3189EE4EBCD1145D07F39E523C (U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* __this, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___kv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return o.ToDictionary(kv => kv.Key, kv => (IDeserializable) new JsonObject(kv.Value));
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&___kv0), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		return L_0;
	}
}
// Unity.Services.Qos.Http.IDeserializable Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__8_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_1_m07B1EE8451E25AFA2279A63E4BC8FD9DB9E23EA7 (U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* __this, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___kv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return o.ToDictionary(kv => kv.Key, kv => (IDeserializable) new JsonObject(kv.Value));
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&___kv0), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_1 = (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*)il2cpp_codegen_object_new(JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419(L_1, L_0, NULL);
		return L_1;
	}
}
// System.String Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__9_0(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_0_mF8021649DCE28882A3B6F7A03143BC97393E8139 (U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* __this, KeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C ___kv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m013CA52885A4357DB3C5ECEFC57E30CE6ED29021_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return o.ToDictionary(kv => kv.Key, kv => GetNewJsonObjectResponse(kv.Value));
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m013CA52885A4357DB3C5ECEFC57E30CE6ED29021_inline((&___kv0), KeyValuePair_2_get_Key_m013CA52885A4357DB3C5ECEFC57E30CE6ED29021_RuntimeMethod_var);
		return L_0;
	}
}
// System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__9_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_1_m23599E62ED6614FFA53D2428BFDE56B40DAEF2B7 (U3CU3Ec_t44D5455B0BACD95FF29C725F0EE30599A9CE2C2F* __this, KeyValuePair_2_t06B7A84C0CEF1673FA8D1C870C2E16670C5C233C ___kv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9C6326BFB9569F4BBCA997EDCA12C152F30B27A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return o.ToDictionary(kv => kv.Key, kv => GetNewJsonObjectResponse(kv.Value));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0;
		L_0 = KeyValuePair_2_get_Value_m9C6326BFB9569F4BBCA997EDCA12C152F30B27A0_inline((&___kv0), KeyValuePair_2_get_Value_m9C6326BFB9569F4BBCA997EDCA12C152F30B27A0_RuntimeMethod_var);
		List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* L_1;
		L_1 = JsonObject_GetNewJsonObjectResponse_m8D76EA8B41E5F473B50DC4D576EBCA781E0F8526(L_0, NULL);
		return L_1;
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
// System.Void Unity.Services.Qos.Http.JsonObjectConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObjectConverter_WriteJson_m4443914EDF2F50BD076694458FA416DD5E820385 (JsonObjectConverter_t0BB57AC3C22D0CC9C0EB390FA84472ABE9C7A873* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* V_0 = NULL;
	{
		// JsonObject jobj = (JsonObject) value;
		RuntimeObject* L_0 = ___value1;
		V_0 = ((JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*)CastclassClass((RuntimeObject*)L_0, JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var));
		// if (jobj.obj == null)
		JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_1 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___obj_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// writer.WriteNull();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_3 = ___writer0;
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(82 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, L_3);
		// return;
		return;
	}

IL_0016:
	{
		// JToken t = JToken.FromObject(jobj.obj);
		JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___obj_0;
		il2cpp_codegen_runtime_class_init_inline(JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_6;
		L_6 = JToken_FromObject_m4C7363BA06BC38D5F21C29B2352E5521F6D541ED(L_5, NULL);
		// t.WriteTo(writer);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_7 = ___writer0;
		JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* L_8;
		L_8 = Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_inline(Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualActionInvoker2< JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3*, JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* >::Invoke(24 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, L_6, L_7, L_8);
		// }
		return;
	}
}
// System.Object Unity.Services.Qos.Http.JsonObjectConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObjectConverter_ReadJson_m15F9F7E014B8BDC97D20CBAC668D406681702479 (JsonObjectConverter_t0BB57AC3C22D0CC9C0EB390FA84472ABE9C7A873* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if(reader.TokenType != JsonToken.Null)
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_003c;
		}
	}
	{
		// if (reader.Value != null)
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_2 = ___reader0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_2);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return new JsonObject(reader.Value);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_4 = ___reader0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_4);
		JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_6 = (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*)il2cpp_codegen_object_new(JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419(L_6, L_5, NULL);
		return L_6;
	}

IL_001e:
	{
	}
	try
	{// begin try (depth: 1)
		// var jsonObject = JObject.Load(reader);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_7 = ___reader0;
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_8;
		L_8 = JObject_Load_m44DE042F4F4752D15D54259823A74B609650E9EF(L_7, NULL);
		// return new JsonObject(jsonObject);
		JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_9 = (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*)il2cpp_codegen_object_new(JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419(L_9, L_8, NULL);
		V_0 = L_9;
		goto IL_0043;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		throw e;
	}

CATCH_002d:
	{// begin catch(Newtonsoft.Json.JsonReaderException)
		// catch (JsonReaderException)
		// var jsonArray = JArray.Load(reader);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_10 = ___reader0;
		JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_11;
		L_11 = JArray_Load_mE90CEEC0A22EBC876F7D7E239A0E096E4691C807(L_10, NULL);
		// return new JsonObject(jsonArray);
		JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_12 = (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419(L_12, L_11, NULL);
		V_0 = L_12;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0043;
	}// end catch (depth: 1)

IL_003c:
	{
		// return new JsonObject(null);
		JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_13 = (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*)il2cpp_codegen_object_new(JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419(L_13, NULL, NULL);
		return L_13;
	}

IL_0043:
	{
		// }
		RuntimeObject* L_14 = V_0;
		return L_14;
	}
}
// System.Boolean Unity.Services.Qos.Http.JsonObjectConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonObjectConverter_CanConvert_m671986316D3626EE88F9D7F3FE6FE85F217DCDD9 (JsonObjectConverter_t0BB57AC3C22D0CC9C0EB390FA84472ABE9C7A873* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonObjectConverter_CanConvert_m671986316D3626EE88F9D7F3FE6FE85F217DCDD9_RuntimeMethod_var)));
	}
}
// System.Void Unity.Services.Qos.Http.JsonObjectConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObjectConverter__ctor_m3590310A54D23B98456D5A20348876A06E517477 (JsonObjectConverter_t0BB57AC3C22D0CC9C0EB390FA84472ABE9C7A873* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Unity.Services.Qos.Http.JsonObjectCollectionConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObjectCollectionConverter_WriteJson_m3FECF9626F197BA2591A9E0854BF77BD30148522 (JsonObjectCollectionConverter_tF92B2E8F1BD0F1957E81E30EB77D5AFB80BE01EB* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		// var jobjCollection = value;
		RuntimeObject* L_0 = ___value1;
		V_0 = L_0;
		// var type = value.GetType();
		RuntimeObject* L_1 = ___value1;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		V_1 = L_2;
		// if (type == typeof(Dictionary<string, IDeserializable>))
		Type_t* L_3 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		// jobjCollection = (Dictionary<string, IDeserializable>) value;
		RuntimeObject* L_7 = ___value1;
		V_0 = ((Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF*)CastclassClass((RuntimeObject*)L_7, Dictionary_2_t06AC590DC4995A9257E9643BD5BF7FA05C4851BF_il2cpp_TypeInfo_var));
		goto IL_0058;
	}

IL_0024:
	{
		// else if (type == typeof(List<IDeserializable>))
		Type_t* L_8 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		// jobjCollection = (List<IDeserializable>) value;
		RuntimeObject* L_12 = ___value1;
		V_0 = ((List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C*)CastclassClass((RuntimeObject*)L_12, List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_il2cpp_TypeInfo_var));
		goto IL_0058;
	}

IL_003f:
	{
		// else if (type == typeof(List<List<IDeserializable>>))
		Type_t* L_13 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0058;
		}
	}
	{
		// jobjCollection = (List<List<IDeserializable>>) value;
		RuntimeObject* L_17 = ___value1;
		V_0 = ((List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313*)CastclassClass((RuntimeObject*)L_17, List_1_tF18DEBF9A91D7FB90736F675CD6855D431AE9313_il2cpp_TypeInfo_var));
	}

IL_0058:
	{
		// if (jobjCollection == null)
		RuntimeObject* L_18 = V_0;
		if (L_18)
		{
			goto IL_0062;
		}
	}
	{
		// writer.WriteNull();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_19 = ___writer0;
		NullCheck(L_19);
		VirtualActionInvoker0::Invoke(82 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, L_19);
		// return;
		return;
	}

IL_0062:
	{
		// JToken t = JToken.FromObject(jobjCollection);
		RuntimeObject* L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_21;
		L_21 = JToken_FromObject_m4C7363BA06BC38D5F21C29B2352E5521F6D541ED(L_20, NULL);
		// t.WriteTo(writer);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_22 = ___writer0;
		JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* L_23;
		L_23 = Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_inline(Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_RuntimeMethod_var);
		NullCheck(L_21);
		VirtualActionInvoker2< JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3*, JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* >::Invoke(24 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, L_21, L_22, L_23);
		// }
		return;
	}
}
// System.Object Unity.Services.Qos.Http.JsonObjectCollectionConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObjectCollectionConverter_ReadJson_m95329F3C50B8AC6CC4CE8AB2A886B256E488B083 (JsonObjectCollectionConverter_tF92B2E8F1BD0F1957E81E30EB77D5AFB80BE01EB* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAA4B557F5B553DC336237C09E82AE5227D5308DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDF5066667A655423592B530B6698BEAD701666E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02* V_0 = NULL;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		// if(reader.TokenType != JsonToken.Null)
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_0052;
		}
	}
	{
		// var objects = (List<object>) reader.Value;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_2 = ___reader0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_2);
		// var result = new List<JsonObject>();
		List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02* L_4 = (List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02*)il2cpp_codegen_object_new(List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mDF5066667A655423592B530B6698BEAD701666E6(L_4, List_1__ctor_mDF5066667A655423592B530B6698BEAD701666E6_RuntimeMethod_var);
		V_0 = L_4;
		// foreach (object o in objects)
		NullCheck(((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)CastclassClass((RuntimeObject*)L_3, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var)));
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_5;
		L_5 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)CastclassClass((RuntimeObject*)L_3, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var)), List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_1), Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_0023_1:
			{
				// foreach (object o in objects)
				RuntimeObject* L_6;
				L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_1), Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
				V_2 = L_6;
				// result.Add(new JsonObject(o));
				List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02* L_7 = V_0;
				RuntimeObject* L_8 = V_2;
				JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_9 = (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*)il2cpp_codegen_object_new(JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419(L_9, L_8, NULL);
				NullCheck(L_7);
				List_1_Add_mAA4B557F5B553DC336237C09E82AE5227D5308DA_inline(L_7, L_9, List_1_Add_mAA4B557F5B553DC336237C09E82AE5227D5308DA_RuntimeMethod_var);
			}

IL_0037_1:
			{
				// foreach (object o in objects)
				bool L_10;
				L_10 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_1), Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// return result;
		List_1_t6049CEDCA1EDF2C17E74FF378C556DDB19EC0A02* L_11 = V_0;
		return L_11;
	}

IL_0052:
	{
		// return null;
		return NULL;
	}
}
// System.Boolean Unity.Services.Qos.Http.JsonObjectCollectionConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonObjectCollectionConverter_CanConvert_m9F453A4A348437B2B5618A247200576E41304278 (JsonObjectCollectionConverter_tF92B2E8F1BD0F1957E81E30EB77D5AFB80BE01EB* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonObjectCollectionConverter_CanConvert_m9F453A4A348437B2B5618A247200576E41304278_RuntimeMethod_var)));
	}
}
// System.Void Unity.Services.Qos.Http.JsonObjectCollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObjectCollectionConverter__ctor_m6ED8E494AC12D73951068CBA1CD779FF166DB9FA (JsonObjectCollectionConverter_tF92B2E8F1BD0F1957E81E30EB77D5AFB80BE01EB* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseDeserializationException__ctor_mBB646EAD382A7D28AC499D61C855E3D206D23ED6 (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ResponseDeserializationException() : base()
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseDeserializationException__ctor_m704DEEF38F300A4921D3EDD6C564761DFE661C53 (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ResponseDeserializationException(string message) : base (message)
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseDeserializationException__ctor_mE6E1AB43F6B88301B5245AB34E1098448BC0554A (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* __this, Exception_t* ___inner0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResponseDeserializationException(Exception inner, string message) : base(message, inner)
		String_t* L_0 = ___message1;
		Exception_t* L_1 = ___inner0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(Unity.Services.Qos.Http.HttpClientResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseDeserializationException__ctor_m1DE598AF93250D2B52554D9769AC6800E23B124D (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___httpClientResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB5ABC7585284D49A008F7DEC5A45F30C022133A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ResponseDeserializationException(HttpClientResponse httpClientResponse) : base(
		//     "Unable to Deserialize Http Client Response")
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, _stringLiteralBB5ABC7585284D49A008F7DEC5A45F30C022133A, NULL);
		// response = httpClientResponse;
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_0 = ___httpClientResponse0;
		__this->___response_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___response_18), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(Unity.Services.Qos.Http.HttpClientResponse,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseDeserializationException__ctor_m6B1A5AAC07DBF1DE306A000ECF99CE9648615C1B (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___httpClientResponse0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ResponseDeserializationException(HttpClientResponse httpClientResponse, string message) : base(
		//     message)
		String_t* L_0 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// response = httpClientResponse;
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_1 = ___httpClientResponse0;
		__this->___response_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___response_18), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(Unity.Services.Qos.Http.HttpClientResponse,System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* __this, HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___httpClientResponse0, Exception_t* ___inner1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ResponseDeserializationException(HttpClientResponse httpClientResponse, Exception inner, string message) : base(
		//     message, inner)
		String_t* L_0 = ___message2;
		Exception_t* L_1 = ___inner1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// this.response = httpClientResponse;
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_2 = ___httpClientResponse0;
		__this->___response_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___response_18), (void*)L_2);
		// }
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
// System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.ResponseHandler::DeserializeListOfJsonObjects(System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* ResponseHandler_DeserializeListOfJsonObjects_m72969E19863FA285545CF4D8031AF7F4470DD3B3 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___objectList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0499D398C4B70F6FA2E03470CBD963831A828A73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m10949E5F0414D437B55DF28DC852BE50BC6EAC29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* V_0 = NULL;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		// List<IDeserializable> jsonObjectList = new List<IDeserializable>();
		List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* L_0 = (List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C*)il2cpp_codegen_object_new(List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m10949E5F0414D437B55DF28DC852BE50BC6EAC29(L_0, List_1__ctor_m10949E5F0414D437B55DF28DC852BE50BC6EAC29_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var o in objectList)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = ___objectList0;
		NullCheck(L_1);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_2;
		L_2 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_1, List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_1), Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_000f_1:
			{
				// foreach (var o in objectList)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_1), Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
				V_2 = L_3;
				// jsonObjectList.Add(new JsonObject(o));
				List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* L_4 = V_0;
				RuntimeObject* L_5 = V_2;
				JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6* L_6 = (JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6*)il2cpp_codegen_object_new(JsonObject_t7ACD98B06A7641ED2A7ADD299FB88A05043A22F6_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419(L_6, L_5, NULL);
				NullCheck(L_4);
				List_1_Add_m0499D398C4B70F6FA2E03470CBD963831A828A73_inline(L_4, L_6, List_1_Add_m0499D398C4B70F6FA2E03470CBD963831A828A73_RuntimeMethod_var);
			}

IL_0023_1:
			{
				// foreach (var o in objectList)
				bool L_7;
				L_7 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_1), Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// return (List<IDeserializable>) (object) jsonObjectList;
		List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C* L_8 = V_0;
		return ((List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C*)CastclassClass((RuntimeObject*)L_8, List_1_tC33AB3174C82AA93B031BDEDAB2D56A9B501299C_il2cpp_TypeInfo_var));
	}
}
// System.Object Unity.Services.Qos.Http.ResponseHandler::TryDeserializeResponse(Unity.Services.Qos.Http.HttpClientResponse,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResponseHandler_TryDeserializeResponse_m8B10BE8FAD4A565918C93EBDAF0369E4486AE8D4 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var settings = new JsonSerializerSettings
		// {
		//     MissingMemberHandling = Newtonsoft.Json.MissingMemberHandling.Ignore,
		//     ReferenceLoopHandling = Newtonsoft.Json.ReferenceLoopHandling.Ignore
		// };
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_0 = (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)il2cpp_codegen_object_new(JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F(L_0, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1 = L_0;
		NullCheck(L_1);
		JsonSerializerSettings_set_MissingMemberHandling_mD0C7EE2F78B48F00E8304E9D6B25CF96550769F0(L_1, 0, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_2 = L_1;
		NullCheck(L_2);
		JsonSerializerSettings_set_ReferenceLoopHandling_m813030F79F8DFFFA2C0C63A5C1C4D2348488CC94(L_2, 1, NULL);
		V_0 = L_2;
	}
	try
	{// begin try (depth: 1)
		// return JsonConvert.DeserializeObject(GetDeserializedJson(response.Data), type, settings);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_3 = ___response0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HttpClientResponse_get_Data_mB0A3BB94BF7CE548D1464659194CA4E9557E09DE_inline(L_3, NULL);
		String_t* L_5;
		L_5 = ResponseHandler_GetDeserializedJson_m677949D173DF6A65ADDAB1AD7FD2B972F3598C08(L_4, NULL);
		Type_t* L_6 = ___type1;
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = JsonConvert_DeserializeObject_m8601FB6D35A0E41575940296CCCFD27B97EA97A2(L_5, L_6, L_7, NULL);
		V_1 = L_8;
		goto IL_0038;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{// begin catch(System.Exception)
		// catch(Exception e)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// throw new ResponseDeserializationException(response, e, e.Message);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_9 = ___response0;
		Exception_t* L_10 = V_2;
		Exception_t* L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_11);
		ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_13 = (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B(L_13, L_9, L_10, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_TryDeserializeResponse_m8B10BE8FAD4A565918C93EBDAF0369E4486AE8D4_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0038:
	{
		// }
		RuntimeObject* L_14 = V_1;
		return L_14;
	}
}
// System.String Unity.Services.Qos.Http.ResponseHandler::GetDeserializedJson(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseHandler_GetDeserializedJson_m677949D173DF6A65ADDAB1AD7FD2B972F3598C08 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	{
		// return Encoding.UTF8.GetString(data);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Unity.Services.Qos.Http.ResponseHandler::HandleAsyncResponse(Unity.Services.Qos.Http.HttpClientResponse,System.Collections.Generic.Dictionary`2<System.String,System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseHandler_HandleAsyncResponse_mF85227D729EBBB63B3F269D558F28D7B3477CB31 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ___statusCodeToTypeMap1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	Type_t* V_1 = NULL;
	{
		// if (statusCodeToTypeMap.ContainsKey(response.StatusCode.ToString()))
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_0 = ___statusCodeToTypeMap1;
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_1 = ___response0;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = HttpClientResponse_get_StatusCode_mC8A80B746A2F6E82F65517C3AB4C479784B55998_inline(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_0), NULL);
		NullCheck(L_0);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933(L_0, L_3, Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0066;
		}
	}
	{
		// Type responseType = statusCodeToTypeMap[response.StatusCode.ToString()];
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_5 = ___statusCodeToTypeMap1;
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_6 = ___response0;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = HttpClientResponse_get_StatusCode_mC8A80B746A2F6E82F65517C3AB4C479784B55998_inline(L_6, NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_0), NULL);
		NullCheck(L_5);
		Type_t* L_9;
		L_9 = Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9(L_5, L_8, Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var);
		V_1 = L_9;
		// if (responseType != null && response.IsHttpError || response.IsNetworkError)
		Type_t* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_10, (Type_t*)NULL, NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_12 = ___response0;
		NullCheck(L_12);
		bool L_13;
		L_13 = HttpClientResponse_get_IsHttpError_m6DCA23589DA544E4E462A755FA5E781206995A3B_inline(L_12, NULL);
		if (L_13)
		{
			goto IL_0044;
		}
	}

IL_003c:
	{
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_14 = ___response0;
		NullCheck(L_14);
		bool L_15;
		L_15 = HttpClientResponse_get_IsNetworkError_m3C3F6623CBFEFED95570B0EC1677CA7E31C9DAE0_inline(L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}

IL_0044:
	{
		// if (typeof(IOneOf).IsAssignableFrom(responseType))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOneOf_tED528A9650C56E6514B4BB58A8C668FCF149CB74_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		Type_t* L_18 = V_1;
		NullCheck(L_17);
		bool L_19;
		L_19 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_17, L_18);
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		// var instance = CreateOneOfException(response, responseType);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_20 = ___response0;
		Type_t* L_21 = V_1;
		HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* L_22;
		L_22 = ResponseHandler_CreateOneOfException_m997402BEBF88FA749E79E2FED79A3FEAFCE53AC7(L_20, L_21, NULL);
		// throw instance;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_HandleAsyncResponse_mF85227D729EBBB63B3F269D558F28D7B3477CB31_RuntimeMethod_var)));
	}

IL_005e:
	{
		// var instance = CreateHttpException(response, responseType);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_23 = ___response0;
		Type_t* L_24 = V_1;
		HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* L_25;
		L_25 = ResponseHandler_CreateHttpException_m48860939F71126F5AC48218C48CA033069D606F8(L_23, L_24, NULL);
		// throw instance;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_HandleAsyncResponse_mF85227D729EBBB63B3F269D558F28D7B3477CB31_RuntimeMethod_var)));
	}

IL_0066:
	{
		// throw new HttpException(response);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_26 = ___response0;
		HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* L_27 = (HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		HttpException__ctor_m4927A27335A8E59162013A85EF8972D88AA0754C(L_27, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_HandleAsyncResponse_mF85227D729EBBB63B3F269D558F28D7B3477CB31_RuntimeMethod_var)));
	}

IL_006d:
	{
		// }
		return;
	}
}
// Unity.Services.Qos.Http.HttpException Unity.Services.Qos.Http.ResponseHandler::CreateOneOfException(Unity.Services.Qos.Http.HttpClientResponse,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* ResponseHandler_CreateOneOfException_m997402BEBF88FA749E79E2FED79A3FEAFCE53AC7 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, Type_t* ___responseType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOneOf_tED528A9650C56E6514B4BB58A8C668FCF149CB74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* V_1 = NULL;
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_2 = NULL;
	MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C* V_3 = NULL;
	ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// var dataObject = ResponseHandler.TryDeserializeResponse(response, responseType);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_0 = ___response0;
		Type_t* L_1 = ___responseType1;
		RuntimeObject* L_2;
		L_2 = ResponseHandler_TryDeserializeResponse_m8B10BE8FAD4A565918C93EBDAF0369E4486AE8D4(L_0, L_1, NULL);
		V_0 = L_2;
		// return CreateHttpException(response, ((IOneOf) dataObject).Type);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_3 = ___response0;
		RuntimeObject* L_4 = V_0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_4, IOneOf_tED528A9650C56E6514B4BB58A8C668FCF149CB74_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* System.Type Unity.Services.Qos.Models.IOneOf::get_Type() */, IOneOf_tED528A9650C56E6514B4BB58A8C668FCF149CB74_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, IOneOf_tED528A9650C56E6514B4BB58A8C668FCF149CB74_il2cpp_TypeInfo_var)));
		HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* L_6;
		L_6 = ResponseHandler_CreateHttpException_m48860939F71126F5AC48218C48CA033069D606F8(L_3, L_5, NULL);
		V_1 = L_6;
		goto IL_0096;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001c;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002b;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0039;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0084;
		}
		throw e;
	}

CATCH_001c:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException e)
		V_2 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));
		// throw new ResponseDeserializationException(response, e, e.Message);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_7 = ___response0;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = V_2;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = V_2;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_9);
		ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_11 = (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B(L_11, L_7, L_8, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_CreateOneOfException_m997402BEBF88FA749E79E2FED79A3FEAFCE53AC7_RuntimeMethod_var)));
	}// end catch (depth: 1)

CATCH_002b:
	{// begin catch(System.MissingFieldException)
		// catch (MissingFieldException e)
		V_3 = ((MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C*)IL2CPP_GET_ACTIVE_EXCEPTION(MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C*));
		// throw new ResponseDeserializationException(response, e,
		//     "Discriminator field not found in the parsed json response.");
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_12 = ___response0;
		MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C* L_13 = V_3;
		ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_14 = (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B(L_14, L_12, L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A4F2A0469E8D46CDAE4CE79C4C4756DBACE8064)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_CreateOneOfException_m997402BEBF88FA749E79E2FED79A3FEAFCE53AC7_RuntimeMethod_var)));
	}// end catch (depth: 1)

CATCH_0039:
	{// begin catch(Unity.Services.Qos.Http.ResponseDeserializationException)
		{
			// catch (ResponseDeserializationException e)
			V_4 = ((ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)IL2CPP_GET_ACTIVE_EXCEPTION(ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*));
			// if (e.InnerException.GetType() == typeof(MissingFieldException))
			ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_15 = V_4;
			NullCheck(L_15);
			Exception_t* L_16;
			L_16 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_15, NULL);
			NullCheck(L_16);
			Type_t* L_17;
			L_17 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_16, NULL);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C_0_0_0_var))) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_19;
			L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
			bool L_20;
			L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
			if (!L_20)
			{
				goto IL_006b;
			}
		}
		{
			// throw new ResponseDeserializationException(response, e.InnerException,
			//     "Discriminator field not found in the parsed json response.");
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_21 = ___response0;
			ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_22 = V_4;
			NullCheck(L_22);
			Exception_t* L_23;
			L_23 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_22, NULL);
			ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_24 = (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)));
			NullCheck(L_24);
			ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B(L_24, L_21, L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A4F2A0469E8D46CDAE4CE79C4C4756DBACE8064)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_CreateOneOfException_m997402BEBF88FA749E79E2FED79A3FEAFCE53AC7_RuntimeMethod_var)));
		}

IL_006b:
		{
			// if (e.response == null)
			ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_25 = V_4;
			NullCheck(L_25);
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_26 = L_25->___response_18;
			if (L_26)
			{
				goto IL_0082;
			}
		}
		{
			// throw new ResponseDeserializationException(response, e.Message);
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_27 = ___response0;
			ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_28 = V_4;
			NullCheck(L_28);
			String_t* L_29;
			L_29 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_28);
			ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_30 = (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)));
			NullCheck(L_30);
			ResponseDeserializationException__ctor_m6B1A5AAC07DBF1DE306A000ECF99CE9648615C1B(L_30, L_27, L_29, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_CreateOneOfException_m997402BEBF88FA749E79E2FED79A3FEAFCE53AC7_RuntimeMethod_var)));
		}

IL_0082:
		{
			// throw;
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
	}// end catch (depth: 1)

CATCH_0084:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// throw new ResponseDeserializationException(response, e, e.Message);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_31 = ___response0;
		Exception_t* L_32 = V_5;
		Exception_t* L_33 = V_5;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_33);
		ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_35 = (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B(L_35, L_31, L_32, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_CreateOneOfException_m997402BEBF88FA749E79E2FED79A3FEAFCE53AC7_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0096:
	{
		// }
		HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* L_36 = V_1;
		return L_36;
	}
}
// Unity.Services.Qos.Http.HttpException Unity.Services.Qos.Http.ResponseHandler::CreateHttpException(Unity.Services.Qos.Http.HttpClientResponse,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* ResponseHandler_CreateHttpException_m48860939F71126F5AC48218C48CA033069D606F8 (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* ___response0, Type_t* ___responseType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpException_1_tC5D4A5D8C6C96BC6F58AA1D96E6B4B12B1DCEF96_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* V_3 = NULL;
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_4 = NULL;
	MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C* V_5 = NULL;
	ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* G_B5_0 = NULL;
	{
		// Type exceptionType = typeof(HttpException<>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (HttpException_1_tC5D4A5D8C6C96BC6F58AA1D96E6B4B12B1DCEF96_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		// var genericException = exceptionType.MakeGenericType(responseType);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Type_t* L_4 = ___responseType1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		NullCheck(L_1);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(129 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_3);
		V_0 = L_5;
	}
	try
	{// begin try (depth: 1)
		{
			// if (responseType == typeof(System.IO.Stream))
			Type_t* L_6 = ___responseType1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			bool L_9;
			L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
			if (!L_9)
			{
				goto IL_0063_1;
			}
		}
		{
			// var streamObject = (object)(response.Data == null ? new MemoryStream() : new MemoryStream(response.Data));
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_10 = ___response0;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = HttpClientResponse_get_Data_mB0A3BB94BF7CE548D1464659194CA4E9557E09DE_inline(L_10, NULL);
			if (!L_11)
			{
				goto IL_0041_1;
			}
		}
		{
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_12 = ___response0;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = HttpClientResponse_get_Data_mB0A3BB94BF7CE548D1464659194CA4E9557E09DE_inline(L_12, NULL);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
			NullCheck(L_14);
			MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_14, L_13, NULL);
			G_B5_0 = L_14;
			goto IL_0046_1;
		}

IL_0041_1:
		{
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
			NullCheck(L_15);
			MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_15, NULL);
			G_B5_0 = L_15;
		}

IL_0046_1:
		{
			V_2 = G_B5_0;
			// var streamObjectInstance = Activator.CreateInstance(genericException, new object[] {response, streamObject});
			Type_t* L_16 = V_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_19 = ___response0;
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_18;
			RuntimeObject* L_21 = V_2;
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, L_21);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_21);
			RuntimeObject* L_22;
			L_22 = Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6(L_16, L_20, NULL);
			// return (HttpException) streamObjectInstance;
			V_3 = ((HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E*)CastclassClass((RuntimeObject*)L_22, HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E_il2cpp_TypeInfo_var));
			goto IL_00d6;
		}

IL_0063_1:
		{
			// var dataObject = ResponseHandler.TryDeserializeResponse(response, responseType);
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_23 = ___response0;
			Type_t* L_24 = ___responseType1;
			RuntimeObject* L_25;
			L_25 = ResponseHandler_TryDeserializeResponse_m8B10BE8FAD4A565918C93EBDAF0369E4486AE8D4(L_23, L_24, NULL);
			V_1 = L_25;
			// var instance = Activator.CreateInstance(genericException, new object[] {response, dataObject});
			Type_t* L_26 = V_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_27;
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_29 = ___response0;
			NullCheck(L_28);
			ArrayElementTypeCheck (L_28, L_29);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_29);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_28;
			RuntimeObject* L_31 = V_1;
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_31);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_31);
			RuntimeObject* L_32;
			L_32 = Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6(L_26, L_30, NULL);
			// return (HttpException) instance;
			V_3 = ((HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E*)CastclassClass((RuntimeObject*)L_32, HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E_il2cpp_TypeInfo_var));
			goto IL_00d6;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0099;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a9;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c4;
		}
		throw e;
	}

CATCH_0087:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException e)
		V_4 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));
		// throw new ResponseDeserializationException(response, e, e.Message);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_33 = ___response0;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_34 = V_4;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_35 = V_4;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_35);
		ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_37 = (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B(L_37, L_33, L_34, L_36, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_CreateHttpException_m48860939F71126F5AC48218C48CA033069D606F8_RuntimeMethod_var)));
	}// end catch (depth: 1)

CATCH_0099:
	{// begin catch(System.MissingFieldException)
		// catch (MissingFieldException e)
		V_5 = ((MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C*)IL2CPP_GET_ACTIVE_EXCEPTION(MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C*));
		// throw new ResponseDeserializationException(response, e,
		//     "Discriminator field not found in the parsed json response.");
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_38 = ___response0;
		MissingFieldException_t251FB3C0B4F3D0C490A9A36B5BF2A1EF1A3D389C* L_39 = V_5;
		ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_40 = (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)));
		NullCheck(L_40);
		ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B(L_40, L_38, L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A4F2A0469E8D46CDAE4CE79C4C4756DBACE8064)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_CreateHttpException_m48860939F71126F5AC48218C48CA033069D606F8_RuntimeMethod_var)));
	}// end catch (depth: 1)

CATCH_00a9:
	{// begin catch(Unity.Services.Qos.Http.ResponseDeserializationException)
		{
			// catch (ResponseDeserializationException e)
			V_6 = ((ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)IL2CPP_GET_ACTIVE_EXCEPTION(ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*));
			// if (e.response == null)
			ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_41 = V_6;
			NullCheck(L_41);
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_42 = L_41->___response_18;
			if (L_42)
			{
				goto IL_00c2;
			}
		}
		{
			// throw new ResponseDeserializationException(response, e.Message);
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_43 = ___response0;
			ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_44 = V_6;
			NullCheck(L_44);
			String_t* L_45;
			L_45 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_44);
			ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_46 = (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)));
			NullCheck(L_46);
			ResponseDeserializationException__ctor_m6B1A5AAC07DBF1DE306A000ECF99CE9648615C1B(L_46, L_43, L_45, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_CreateHttpException_m48860939F71126F5AC48218C48CA033069D606F8_RuntimeMethod_var)));
		}

IL_00c2:
		{
			// throw;
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
	}// end catch (depth: 1)

CATCH_00c4:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// throw new ResponseDeserializationException(response, e, e.Message);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_47 = ___response0;
		Exception_t* L_48 = V_7;
		Exception_t* L_49 = V_7;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_49);
		ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC* L_51 = (ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseDeserializationException_tAF870B3899806E6EE63CAB3CA273A78B8942E2AC_il2cpp_TypeInfo_var)));
		NullCheck(L_51);
		ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B(L_51, L_47, L_48, L_50, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseHandler_CreateHttpException_m48860939F71126F5AC48218C48CA033069D606F8_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_00d6:
	{
		// }
		HttpException_t74BB076DC5C98AC72BDE7C056662FF04865D7D5E* L_52 = V_3;
		return L_52;
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
// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.UnityWebRequestHelpers::GetAwaiter(UnityEngine.Networking.UnityWebRequestAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 UnityWebRequestHelpers_GetAwaiter_mFE3CEA3273241928556A3EE6EB2D699C01EF52F7 (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___asyncOp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m12B57FB786578D8E9D8F3341F925D7AC8C7AC307_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m623F91A3182487708395470B5EADAFE5232CDD7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_m57EB7F27B683B8FEE80D26546C11F61A1718DF66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E* L_0 = (U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m1A61824C8360274E7FD6DBB60E9D9060BB60DD89(L_0, NULL);
		V_0 = L_0;
		// var tcs = new TaskCompletionSource<HttpClientResponse>();
		U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E* L_1 = V_0;
		TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754* L_2 = (TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754*)il2cpp_codegen_object_new(TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TaskCompletionSource_1__ctor_m12B57FB786578D8E9D8F3341F925D7AC8C7AC307(L_2, TaskCompletionSource_1__ctor_m12B57FB786578D8E9D8F3341F925D7AC8C7AC307_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___tcs_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tcs_0), (void*)L_2);
		// asyncOp.completed += obj =>
		// {
		//     var result = CreateHttpClientResponse((UnityWebRequestAsyncOperation) obj);
		//     tcs.SetResult(result);
		// };
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_3 = ___asyncOp0;
		U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E* L_4 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_5 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_m57EB7F27B683B8FEE80D26546C11F61A1718DF66_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_3, L_5, NULL);
		// return tcs.Task.GetAwaiter();
		U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E* L_6 = V_0;
		NullCheck(L_6);
		TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754* L_7 = L_6->___tcs_0;
		NullCheck(L_7);
		Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m623F91A3182487708395470B5EADAFE5232CDD7C_inline(L_7, TaskCompletionSource_1_get_Task_m623F91A3182487708395470B5EADAFE5232CDD7C_RuntimeMethod_var);
		NullCheck(L_8);
		TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_9;
		L_9 = Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9(L_8, Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9_RuntimeMethod_var);
		return L_9;
	}
}
// Unity.Services.Qos.Http.HttpClientResponse Unity.Services.Qos.Http.UnityWebRequestHelpers::CreateHttpClientResponse(UnityEngine.Networking.UnityWebRequestAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* UnityWebRequestHelpers_CreateHttpClientResponse_m83A8F9B40812C3017F91315CC83DEA0BE3D74123 (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___unityResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	{
		// var response = unityResponse.webRequest;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0 = ___unityResponse0;
		NullCheck(L_0);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1;
		L_1 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_0, NULL);
		V_0 = L_1;
		//             var result = new HttpClientResponse(
		//                 response.GetResponseHeaders(),
		//                 response.responseCode,
		// #if UNITY_2020_1_OR_NEWER
		//                 response.result == UnityWebRequest.Result.ProtocolError,
		//                 response.result == UnityWebRequest.Result.ConnectionError,
		// #else
		//                 response.isHttpError,
		//                 response.isNetworkError,
		// #endif
		//                 response.downloadHandler.data,
		//                 response.error);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = V_0;
		NullCheck(L_2);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3;
		L_3 = UnityWebRequest_GetResponseHeaders_m67147A5D3FF83FD75071AA42F4890439DA2092DF(L_2, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_4, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_6, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_8, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = V_0;
		NullCheck(L_10);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_11;
		L_11 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_10, NULL);
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_11, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_13, NULL);
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_15 = (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5*)il2cpp_codegen_object_new(HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		HttpClientResponse__ctor_mD1FC246D901ACC12807D2B5C1DB39B038622A4E0(L_15, L_3, L_5, (bool)((((int32_t)L_7) == ((int32_t)3))? 1 : 0), (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0), L_12, L_14, NULL);
		// return result;
		return L_15;
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
// System.Void Unity.Services.Qos.Http.UnityWebRequestHelpers/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m1A61824C8360274E7FD6DBB60E9D9060BB60DD89 (U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Qos.Http.UnityWebRequestHelpers/<>c__DisplayClass0_0::<GetAwaiter>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_m57EB7F27B683B8FEE80D26546C11F61A1718DF66 (U3CU3Ec__DisplayClass0_0_t3D93F3FC48B68C9D60220715050B6F2EFA48C39E* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m4496D5582DBD92427C481B4E5A09A866B91EB216_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* V_0 = NULL;
	{
		// var result = CreateHttpClientResponse((UnityWebRequestAsyncOperation) obj);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0 = ___obj0;
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_1;
		L_1 = UnityWebRequestHelpers_CreateHttpClientResponse_m83A8F9B40812C3017F91315CC83DEA0BE3D74123(((UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)CastclassClass((RuntimeObject*)L_0, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		// tcs.SetResult(result);
		TaskCompletionSource_1_tBD49D96F1B215700DFAD0B3572D8766995E4C754* L_2 = __this->___tcs_0;
		HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_3 = V_0;
		NullCheck(L_2);
		TaskCompletionSource_1_SetResult_m4496D5582DBD92427C481B4E5A09A866B91EB216(L_2, L_3, TaskCompletionSource_1_SetResult_m4496D5582DBD92427C481B4E5A09A866B91EB216_RuntimeMethod_var);
		// };
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryPolicyProvider__ctor_mC01EBE6E838F689936D7023F85CE73D10FC12B6C (RetryPolicyProvider_tF2CA7CE7115C87D73B2EDE3E0788DB5F68C97C6A* __this, const RuntimeMethod* method) 
{
	{
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
Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_Multicast(ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Exception_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* currentDelegate = reinterpret_cast<ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8*>(delegatesToInvoke[i]);
		typedef Exception_t* (*FunctionPointerType) (RuntimeObject*, Exception_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ex0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenInst(ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method)
{
	NullCheck(___ex0);
	typedef Exception_t* (*FunctionPointerType) (Exception_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ex0, method);
}
Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenStatic(ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method)
{
	typedef Exception_t* (*FunctionPointerType) (Exception_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ex0, method);
}
Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenStaticInvoker(ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Exception_t*, Exception_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___ex0);
}
Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_ClosedStaticInvoker(ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< Exception_t*, RuntimeObject*, Exception_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ex0);
}
Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenVirtual(ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method)
{
	NullCheck(___ex0);
	return VirtualFuncInvoker0< Exception_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___ex0);
}
Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenInterface(ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method)
{
	NullCheck(___ex0);
	return InterfaceFuncInvoker0< Exception_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___ex0);
}
Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenGenericVirtual(ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method)
{
	NullCheck(___ex0);
	return GenericVirtualFuncInvoker0< Exception_t* >::Invoke(method, ___ex0);
}
Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenGenericInterface(ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method)
{
	NullCheck(___ex0);
	return GenericInterfaceFuncInvoker0< Exception_t* >::Invoke(method, ___ex0);
}
// System.Void Unity.Services.Qos.ErrorMitigation.ExceptionPredicate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionPredicate__ctor_mEBD73A879F83A769E88FA53F2478AB16FF945548 (ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_Multicast;
}
// System.Exception Unity.Services.Qos.ErrorMitigation.ExceptionPredicate::Invoke(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1 (ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	typedef Exception_t* (*FunctionPointerType) (RuntimeObject*, Exception_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ex0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Services.Qos.ErrorMitigation.ExceptionPredicate::BeginInvoke(System.Exception,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionPredicate_BeginInvoke_m75CCDEA0FFA54BE270D0C33F444A0C4FBBF5E3C5 (ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ex0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Exception Unity.Services.Qos.ErrorMitigation.ExceptionPredicate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionPredicate_EndInvoke_mACA90E05A18B572833CE0E4AF0A287FE27EABD9F (ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Exception_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::get_MaxRetries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RetryPolicyConfig_get_MaxRetries_m8ADBE52F926D048CD3177430F158BC0B782C47B3 (RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86* __this, const RuntimeMethod* method) 
{
	{
		// public uint MaxRetries { get; set; } = 4;
		uint32_t L_0 = __this->___U3CMaxRetriesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::set_MaxRetries(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryPolicyConfig_set_MaxRetries_mAD9E1F79D057613A72CF718DC59B35A53EC33EC8 (RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public uint MaxRetries { get; set; } = 4;
		uint32_t L_0 = ___value0;
		__this->___U3CMaxRetriesU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::get_JitterMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RetryPolicyConfig_get_JitterMagnitude_m009B8A35391F9C2B887D2ED52654C1744ED29BBA (RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86* __this, const RuntimeMethod* method) 
{
	{
		// get => _jitterMagnitude;
		float L_0 = __this->____jitterMagnitude_0;
		return L_0;
	}
}
// System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::set_JitterMagnitude(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryPolicyConfig_set_JitterMagnitude_m73A48B44DE4B382FEF006B88D8AAFFF9DF8BD2FA (RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _jitterMagnitude = Mathf.Clamp(value, 0.001f, 1.0f);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.00100000005f), (1.0f), NULL);
		__this->____jitterMagnitude_0 = L_1;
		return;
	}
}
// System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::get_DelayScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RetryPolicyConfig_get_DelayScale_m69C435DC21420D3DDCBE7AB13A98007DA4F1061C (RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86* __this, const RuntimeMethod* method) 
{
	{
		// get => _delayScale;
		float L_0 = __this->____delayScale_1;
		return L_0;
	}
}
// System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::set_DelayScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryPolicyConfig_set_DelayScale_mEA74AE600823621A7656E7FE2E7297AF872A17C8 (RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _delayScale = Mathf.Clamp(value, 0.05f, 1.0f);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.0500000007f), (1.0f), NULL);
		__this->____delayScale_1 = L_1;
		return;
	}
}
// System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::get_MaxDelayTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RetryPolicyConfig_get_MaxDelayTime_mAB0296840F96895FDC268227D7F0F6E1E240C44B (RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86* __this, const RuntimeMethod* method) 
{
	{
		// get => _maxDelayTime;
		float L_0 = __this->____maxDelayTime_2;
		return L_0;
	}
}
// System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::set_MaxDelayTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryPolicyConfig_set_MaxDelayTime_mF3D3E6E899CF50C447D119FB57F869E1C4D6B72B (RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _maxDelayTime = Mathf.Clamp(value, 0.1f, 60.0f);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.100000001f), (60.0f), NULL);
		__this->____maxDelayTime_2 = L_1;
		return;
	}
}
// System.Boolean Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::IsHandledException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RetryPolicyConfig_IsHandledException_mE95593C08075731E5DB88224D60F09FC3E9F4DD5 (RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0EF1A45F39403236FB75AA53B486D867FAF78A30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3C7002DF0ACF05A9221C488830D89DAC953B2BDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD1918F475F32024210E8963E8995BC61E2F43431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2D5B5F64ED6D4A0F92AFF82FCDEA5F27DB2A5483_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t60A0FF928BC8D610C88D9B2149E5D3592DF538FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (_exceptionsToHandle != null)
		List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441* L_0 = __this->____exceptionsToHandle_3;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// foreach (var predicate in _exceptionsToHandle)
		List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441* L_1 = __this->____exceptionsToHandle_3;
		NullCheck(L_1);
		Enumerator_t60A0FF928BC8D610C88D9B2149E5D3592DF538FF L_2;
		L_2 = List_1_GetEnumerator_m2D5B5F64ED6D4A0F92AFF82FCDEA5F27DB2A5483(L_1, List_1_GetEnumerator_m2D5B5F64ED6D4A0F92AFF82FCDEA5F27DB2A5483_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0EF1A45F39403236FB75AA53B486D867FAF78A30((&V_0), Enumerator_Dispose_m0EF1A45F39403236FB75AA53B486D867FAF78A30_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_0016_1:
			{
				// foreach (var predicate in _exceptionsToHandle)
				ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* L_3;
				L_3 = Enumerator_get_Current_mD1918F475F32024210E8963E8995BC61E2F43431_inline((&V_0), Enumerator_get_Current_mD1918F475F32024210E8963E8995BC61E2F43431_RuntimeMethod_var);
				// var b = predicate(e);
				Exception_t* L_4 = ___e0;
				NullCheck(L_3);
				Exception_t* L_5;
				L_5 = ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_inline(L_3, L_4, NULL);
				// if (b == e)
				Exception_t* L_6 = ___e0;
				if ((!(((RuntimeObject*)(Exception_t*)L_5) == ((RuntimeObject*)(Exception_t*)L_6))))
				{
					goto IL_002a_1;
				}
			}
			{
				// return true;
				V_1 = (bool)1;
				goto IL_0045;
			}

IL_002a_1:
			{
				// foreach (var predicate in _exceptionsToHandle)
				bool L_7;
				L_7 = Enumerator_MoveNext_m3C7002DF0ACF05A9221C488830D89DAC953B2BDE((&V_0), Enumerator_MoveNext_m3C7002DF0ACF05A9221C488830D89DAC953B2BDE_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// return false;
		return (bool)0;
	}

IL_0045:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryPolicyConfig__ctor_m115BCCCDB4FE026C72F831F7983B994E35A31A2E (RetryPolicyConfig_tA58668C3329D1E6BD937EE679325454BDF86DB86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6D3A5AC423F5E385FB834AD564859D597583ABF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float _jitterMagnitude = 1.0f;
		__this->____jitterMagnitude_0 = (1.0f);
		// float _delayScale = 1.0f;
		__this->____delayScale_1 = (1.0f);
		// float _maxDelayTime = 8.0f;
		__this->____maxDelayTime_2 = (8.0f);
		// List<ExceptionPredicate> _exceptionsToHandle = new List<ExceptionPredicate>();
		List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441* L_0 = (List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441*)il2cpp_codegen_object_new(List_1_tBBFAF91A6ADACD265F072AEBBDCF312385826441_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6D3A5AC423F5E385FB834AD564859D597583ABF6(L_0, List_1__ctor_m6D3A5AC423F5E385FB834AD564859D597583ABF6_RuntimeMethod_var);
		__this->____exceptionsToHandle_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____exceptionsToHandle_3), (void*)L_0);
		// public uint MaxRetries { get; set; } = 4;
		__this->___U3CMaxRetriesU3Ek__BackingField_4 = 4;
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
// System.Void Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig::HandleStatusCode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusCodePolicyConfig_HandleStatusCode_mBA2EBE70DF2505CFD77B9FAA35D7811CF28C6494 (StatusCodePolicyConfig_tFD3280C6F240EE942B600E35BEE1E6FB08908B67* __this, int64_t ___code0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t907A7898CAA81078DDC73DD3DE5963D881290CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t82577BC504E853384F0E2CEB9AC076A543599C23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_statusCodesToHandleDict.ContainsKey(code))
		RuntimeObject* L_0 = __this->____statusCodesToHandleDict_0;
		int64_t L_1 = ___code0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int64_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t82577BC504E853384F0E2CEB9AC076A543599C23_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// _statusCodesToHandleDict[code] = true;
		RuntimeObject* L_3 = __this->____statusCodesToHandleDict_0;
		int64_t L_4 = ___code0;
		NullCheck(L_3);
		InterfaceActionInvoker2< int64_t, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_t82577BC504E853384F0E2CEB9AC076A543599C23_il2cpp_TypeInfo_var, L_3, L_4, (bool)1);
		return;
	}

IL_001c:
	{
		// _statusCodesToHandleDict.Add(new KeyValuePair<long, bool>(code, true));
		RuntimeObject* L_5 = __this->____statusCodesToHandleDict_0;
		int64_t L_6 = ___code0;
		KeyValuePair_2_tB238689916B08B0CFF54232EB53E746022CA86A2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E((&L_7), L_6, (bool)1, /*hidden argument*/KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker1< KeyValuePair_2_tB238689916B08B0CFF54232EB53E746022CA86A2 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::Add(T) */, ICollection_1_t907A7898CAA81078DDC73DD3DE5963D881290CB8_il2cpp_TypeInfo_var, L_5, L_7);
		// }
		return;
	}
}
// System.Void Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig::DontHandleStatusCode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusCodePolicyConfig_DontHandleStatusCode_m0E0A1195CF35B9EB8EAA1701ACF7D5F6C579B27E (StatusCodePolicyConfig_tFD3280C6F240EE942B600E35BEE1E6FB08908B67* __this, int64_t ___code0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t907A7898CAA81078DDC73DD3DE5963D881290CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t82577BC504E853384F0E2CEB9AC076A543599C23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_statusCodesToHandleDict.ContainsKey(code))
		RuntimeObject* L_0 = __this->____statusCodesToHandleDict_0;
		int64_t L_1 = ___code0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int64_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t82577BC504E853384F0E2CEB9AC076A543599C23_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// _statusCodesToHandleDict[code] = false;
		RuntimeObject* L_3 = __this->____statusCodesToHandleDict_0;
		int64_t L_4 = ___code0;
		NullCheck(L_3);
		InterfaceActionInvoker2< int64_t, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_t82577BC504E853384F0E2CEB9AC076A543599C23_il2cpp_TypeInfo_var, L_3, L_4, (bool)0);
		return;
	}

IL_001c:
	{
		// _statusCodesToHandleDict.Add(new KeyValuePair<long, bool>(code, false));
		RuntimeObject* L_5 = __this->____statusCodesToHandleDict_0;
		int64_t L_6 = ___code0;
		KeyValuePair_2_tB238689916B08B0CFF54232EB53E746022CA86A2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E((&L_7), L_6, (bool)0, /*hidden argument*/KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker1< KeyValuePair_2_tB238689916B08B0CFF54232EB53E746022CA86A2 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::Add(T) */, ICollection_1_t907A7898CAA81078DDC73DD3DE5963D881290CB8_il2cpp_TypeInfo_var, L_5, L_7);
		// }
		return;
	}
}
// System.Void Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusCodePolicyConfig_Clear_m78882BAE51B27B9AB1B413AA3BC4C5A0B5DDE04F (StatusCodePolicyConfig_tFD3280C6F240EE942B600E35BEE1E6FB08908B67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t907A7898CAA81078DDC73DD3DE5963D881290CB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _statusCodesToHandleDict.Clear();
		RuntimeObject* L_0 = __this->____statusCodesToHandleDict_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::Clear() */, ICollection_1_t907A7898CAA81078DDC73DD3DE5963D881290CB8_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig::IsHandledStatusCode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StatusCodePolicyConfig_IsHandledStatusCode_mF80289B1A9A355AAC4A484288560214FC97F4A95 (StatusCodePolicyConfig_tFD3280C6F240EE942B600E35BEE1E6FB08908B67* __this, int64_t ___code0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t907A7898CAA81078DDC73DD3DE5963D881290CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _statusCodesToHandleDict.Contains(new KeyValuePair<long, bool>(code, true));
		RuntimeObject* L_0 = __this->____statusCodesToHandleDict_0;
		int64_t L_1 = ___code0;
		KeyValuePair_2_tB238689916B08B0CFF54232EB53E746022CA86A2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E((&L_2), L_1, (bool)1, /*hidden argument*/KeyValuePair_2__ctor_m4D69811DF1F96947FE72B76275A642FD26D84B5E_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tB238689916B08B0CFF54232EB53E746022CA86A2 >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::Contains(T) */, ICollection_1_t907A7898CAA81078DDC73DD3DE5963D881290CB8_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
// System.Void Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusCodePolicyConfig__ctor_m7128CC52883DBD3021F9388A11F15D7F5C8F02D8 (StatusCodePolicyConfig_tFD3280C6F240EE942B600E35BEE1E6FB08908B67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC2E112E191D945753C30F6A2475DDB865FD83097_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IDictionary<long, bool> _statusCodesToHandleDict = new Dictionary<long, bool>()
		// {
		//     {408, true}, // Request Timeout
		//     {429, true}, // Too Many Requests
		//     {502, true}, // Bad Gateway
		//     {503, true}, // Service Unavailable
		//     {504, true}  // Gateway Timeout
		// };
		Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF* L_0 = (Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF*)il2cpp_codegen_object_new(Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC2E112E191D945753C30F6A2475DDB865FD83097(L_0, Dictionary_2__ctor_mC2E112E191D945753C30F6A2475DDB865FD83097_RuntimeMethod_var);
		Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6(L_1, ((int64_t)((int32_t)408)), (bool)1, Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6_RuntimeMethod_var);
		Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6(L_2, ((int64_t)((int32_t)429)), (bool)1, Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6_RuntimeMethod_var);
		Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6(L_3, ((int64_t)((int32_t)502)), (bool)1, Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6_RuntimeMethod_var);
		Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6(L_4, ((int64_t)((int32_t)503)), (bool)1, Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6_RuntimeMethod_var);
		Dictionary_2_tCF06E70C571839D7107A1DCD7514332D33872BFF* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6(L_5, ((int64_t)((int32_t)504)), (bool)1, Dictionary_2_Add_m2FE794EFEAD72A5A0A0C15DC8B4D10002655FAC6_RuntimeMethod_var);
		__this->____statusCodesToHandleDict_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____statusCodesToHandleDict_0), (void*)L_5);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m37EBFF6DDCA6400B0C77F2CABAB42FDFA86B5A97 (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___queryParams0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// key = UnityWebRequest.EscapeURL(key);
		String_t* L_0 = ___key1;
		String_t* L_1;
		L_1 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_0, NULL);
		___key1 = L_1;
		// value = UnityWebRequest.EscapeURL(value);
		String_t* L_2 = ___value2;
		String_t* L_3;
		L_3 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_2, NULL);
		___value2 = L_3;
		// queryParams.Add($"{key}={value}");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___queryParams0;
		String_t* L_5 = ___key1;
		String_t* L_6 = ___value2;
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_5, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, L_6, NULL);
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// return queryParams;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = ___queryParams0;
		return L_8;
	}
}
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.String,System.Collections.Generic.List`1<System.String>,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m56323A5B31B725034B0CA9AE992F7FB2946AE2FD (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___queryParams0, String_t* ___key1, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___values2, String_t* ___style3, bool ___explode4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// if (explode)
		bool L_0 = ___explode4;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		// foreach(var value in values)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ___values2;
		NullCheck(L_1);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_2;
		L_2 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_1, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0031_1;
			}

IL_000d_1:
			{
				// foreach(var value in values)
				String_t* L_3;
				L_3 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				// string escapedValue = UnityWebRequest.EscapeURL(value);
				String_t* L_4;
				L_4 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_3, NULL);
				V_1 = L_4;
				// queryParams.Add($"{UnityWebRequest.EscapeURL(key)}={escapedValue}");
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___queryParams0;
				String_t* L_6 = ___key1;
				String_t* L_7;
				L_7 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_6, NULL);
				String_t* L_8 = V_1;
				String_t* L_9;
				L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_7, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, L_8, NULL);
				NullCheck(L_5);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, L_9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_0031_1:
			{
				// foreach(var value in values)
				bool L_10;
				L_10 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_00ad;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// string paramString = $"{UnityWebRequest.EscapeURL(key)}=";
		String_t* L_11 = ___key1;
		String_t* L_12;
		L_12 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, NULL);
		V_2 = L_13;
		// foreach(var value in values)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = ___values2;
		NullCheck(L_14);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_15;
		L_15 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_14, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0089:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007e_1;
			}

IL_0064_1:
			{
				// foreach(var value in values)
				String_t* L_16;
				L_16 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_3 = L_16;
				// paramString += UnityWebRequest.EscapeURL(value) + ",";
				String_t* L_17 = V_2;
				String_t* L_18 = V_3;
				String_t* L_19;
				L_19 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_18, NULL);
				String_t* L_20;
				L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_17, L_19, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				V_2 = L_20;
			}

IL_007e_1:
			{
				// foreach(var value in values)
				bool L_21;
				L_21 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_0097;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		// paramString = paramString.Remove(paramString.Length - 1);
		String_t* L_22 = V_2;
		String_t* L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_23, NULL);
		NullCheck(L_22);
		String_t* L_25;
		L_25 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_22, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), NULL);
		V_2 = L_25;
		// queryParams.Add(paramString);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = ___queryParams0;
		String_t* L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_26, L_27, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_00ad:
	{
		// return queryParams;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = ___queryParams0;
		return L_28;
	}
}
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m5B6D84BFB04ADAA9739011B69F404C051AB0C1F7 (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___queryParams0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___modelVars1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// foreach(var key in modelVars.Keys)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___modelVars1;
		NullCheck(L_0);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_1;
		L_1 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_0, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_2;
		L_2 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_1, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_0), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a_1;
			}

IL_000e_1:
			{
				// foreach(var key in modelVars.Keys)
				String_t* L_3;
				L_3 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_0), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_1 = L_3;
				// string escapedValue = UnityWebRequest.EscapeURL(modelVars[key]);
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___modelVars1;
				String_t* L_5 = V_1;
				NullCheck(L_4);
				String_t* L_6;
				L_6 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_4, L_5, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				String_t* L_7;
				L_7 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_6, NULL);
				V_2 = L_7;
				// queryParams.Add($"{UnityWebRequest.EscapeURL(key)}={escapedValue}");
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = ___queryParams0;
				String_t* L_9 = V_1;
				String_t* L_10;
				L_10 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_9, NULL);
				String_t* L_11 = V_2;
				String_t* L_12;
				L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_10, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, L_11, NULL);
				NullCheck(L_8);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, L_12, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_003a_1:
			{
				// foreach(var key in modelVars.Keys)
				bool L_13;
				L_13 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_0), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0053;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		// return queryParams;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = ___queryParams0;
		return L_14;
	}
}
// System.String Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GetPathParamString(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QosDiscoveryApiBaseRequest_GetPathParamString_m175BA1D606F251D4F8318DF77732D96F9BCFDC7D (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___pathParam0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// string paramString = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach(var value in pathParam)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___pathParam0;
		NullCheck(L_0);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_1;
		L_1 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_0, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_1), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_000f_1:
			{
				// foreach(var value in pathParam)
				String_t* L_2;
				L_2 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_1), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_2 = L_2;
				// paramString += UnityWebRequest.EscapeURL(value) + ",";
				String_t* L_3 = V_0;
				String_t* L_4 = V_2;
				String_t* L_5;
				L_5 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_4, NULL);
				String_t* L_6;
				L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, L_5, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				V_0 = L_6;
			}

IL_0029_1:
			{
				// foreach(var value in pathParam)
				bool L_7;
				L_7 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_1), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// paramString = paramString.Remove(paramString.Length - 1);
		String_t* L_8 = V_0;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		NullCheck(L_8);
		String_t* L_11;
		L_11 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_8, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), NULL);
		V_0 = L_11;
		// return paramString;
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.Byte[] Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::ConstructBody(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* QosDiscoveryApiBaseRequest_ConstructBody_m7F185A28CF2CCE8BC8E0CBCB25D6AEFEDE0126D0 (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// if (stream != null)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// using (System.IO.MemoryStream ms = new System.IO.MemoryStream())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_1, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0022;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// stream.CopyTo(ms);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___stream0;
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
			NullCheck(L_4);
			Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999(L_4, L_5, NULL);
			// return ms.ToArray();
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = V_0;
			NullCheck(L_6);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_6);
			V_1 = L_7;
			goto IL_0025;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// return null;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0025:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		return L_8;
	}
}
// System.Byte[] Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::ConstructBody(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* QosDiscoveryApiBaseRequest_ConstructBody_mDD86CD521B7A69DA0C57CFFCF5F0AC6CEDB09817 (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	{
		// return System.Text.Encoding.UTF8.GetBytes(s);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Byte[] Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::ConstructBody(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* QosDiscoveryApiBaseRequest_ConstructBody_m916EE630F6706AB71EFDFA875D84FD2684CE2C77 (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerialization_Serialize_TisRuntimeObject_m1E934D667AAE730925B6D8B2D08093F6E8E688F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonSerialization.Serialize(o);
		RuntimeObject* L_0 = ___o0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = JsonSerialization_Serialize_TisRuntimeObject_m1E934D667AAE730925B6D8B2D08093F6E8E688F8(L_0, JsonSerialization_Serialize_TisRuntimeObject_m1E934D667AAE730925B6D8B2D08093F6E8E688F8_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateAcceptHeader(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QosDiscoveryApiBaseRequest_GenerateAcceptHeader_m8393B909E55846FC30E166C3ED7E52CBFA9CFD2F (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___accepts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (accepts.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___accepts0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0006:
	{
		// for (int i = 0; i < accepts.Length; ++i)
		V_0 = 0;
		goto IL_0024;
	}

IL_000a:
	{
		// if (string.Equals(accepts[i], "application/json", System.StringComparison.OrdinalIgnoreCase))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___accepts0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5;
		L_5 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_4, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, 5, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return "application/json";
		return _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
	}

IL_0020:
	{
		// for (int i = 0; i < accepts.Length; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0024:
	{
		// for (int i = 0; i < accepts.Length; ++i)
		int32_t L_7 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___accepts0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// return string.Join(", ", accepts);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ___accepts0;
		String_t* L_10;
		L_10 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_9, NULL);
		return L_10;
	}
}
// System.String Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateContentTypeHeader(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QosDiscoveryApiBaseRequest_GenerateContentTypeHeader_m8578BC7C80BEA3C4919B898356FC5A205B59DCE7 (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___contentTypes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (contentTypes.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___contentTypes0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0006:
	{
		// for(int i = 0; i < contentTypes.Length; ++i)
		V_0 = 0;
		goto IL_002b;
	}

IL_000a:
	{
		// if (!string.IsNullOrWhiteSpace(contentTypes[i]) && JsonRegex.IsMatch(contentTypes[i]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___contentTypes0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5;
		L_5 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_4, NULL);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_6 = ((QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_StaticFields*)il2cpp_codegen_static_fields_for(QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var))->___JsonRegex_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___contentTypes0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		bool L_11;
		L_11 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_6, L_10, NULL);
		if (!L_11)
		{
			goto IL_0027;
		}
	}
	{
		// return contentTypes[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___contentTypes0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return L_15;
	}

IL_0027:
	{
		// for(int i = 0; i < contentTypes.Length; ++i)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_002b:
	{
		// for(int i = 0; i < contentTypes.Length; ++i)
		int32_t L_17 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ___contentTypes0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// return contentTypes[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = ___contentTypes0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		return L_21;
	}
}
// UnityEngine.Networking.IMultipartFormSection Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateMultipartFormFileSection(System.String,System.IO.FileStream,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QosDiscoveryApiBaseRequest_GenerateMultipartFormFileSection_mBBED2819CA892389B78A9DC3D78E90B2DDFBB1F8 (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, String_t* ___paramName0, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___stream1, String_t* ___contentType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new MultipartFormFileSection(paramName, ConstructBody(stream), GetFileName(stream.Name), contentType);
		String_t* L_0 = ___paramName0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = ___stream1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = QosDiscoveryApiBaseRequest_ConstructBody_m7F185A28CF2CCE8BC8E0CBCB25D6AEFEDE0126D0(__this, L_1, NULL);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = ___stream1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(38 /* System.String System.IO.FileStream::get_Name() */, L_3);
		String_t* L_5;
		L_5 = QosDiscoveryApiBaseRequest_GetFileName_m060FEF2B62E15D45760509984E2ABD20FF41FC2A(__this, L_4, NULL);
		String_t* L_6 = ___contentType2;
		MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB* L_7 = (MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB*)il2cpp_codegen_object_new(MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		MultipartFormFileSection__ctor_m5F1D762C8E510D725DB8451A9083748A3B7798DA(L_7, L_0, L_2, L_5, L_6, NULL);
		return L_7;
	}
}
// UnityEngine.Networking.IMultipartFormSection Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateMultipartFormFileSection(System.String,System.IO.Stream,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QosDiscoveryApiBaseRequest_GenerateMultipartFormFileSection_mD0AF281D370DCAA50A68D266A19600CD6A6263BC (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, String_t* ___paramName0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, String_t* ___contentType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new MultipartFormFileSection(paramName, ConstructBody(stream), Guid.NewGuid().ToString(), contentType);
		String_t* L_0 = ___paramName0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = QosDiscoveryApiBaseRequest_ConstructBody_m7F185A28CF2CCE8BC8E0CBCB25D6AEFEDE0126D0(__this, L_1, NULL);
		Guid_t L_3;
		L_3 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		String_t* L_5 = ___contentType2;
		MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB* L_6 = (MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB*)il2cpp_codegen_object_new(MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		MultipartFormFileSection__ctor_m5F1D762C8E510D725DB8451A9083748A3B7798DA(L_6, L_0, L_2, L_4, L_5, NULL);
		return L_6;
	}
}
// System.String Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QosDiscoveryApiBaseRequest_GetFileName_m060FEF2B62E15D45760509984E2ABD20FF41FC2A (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return System.IO.Path.GetFileName(filePath);
		String_t* L_0 = ___filePath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QosDiscoveryApiBaseRequest__ctor_m9122E977B93327ACE35337EA6E107C8EBC1C4A6A (QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QosDiscoveryApiBaseRequest__cctor_mB3CFEAA8095B2C5F15A1F5BAD07BB5EE915B4D99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral304C866293B303A238BCAF995158C2759D5D4D43);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Regex JsonRegex = new Regex(@"application\/json(;\s)?((charset=utf8|q=[0-1]\.\d)(\s)?)*");
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteral304C866293B303A238BCAF995158C2759D5D4D43, NULL);
		((QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_StaticFields*)il2cpp_codegen_static_fields_for(QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var))->___JsonRegex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_StaticFields*)il2cpp_codegen_static_fields_for(QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var))->___JsonRegex_0), (void*)L_0);
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
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServersRequest::get_Region()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* GetServersRequest_get_Region_m49F11E7EA0533CD65FB26FBE102104D2338AC934 (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Region { get; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CRegionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String Unity.Services.Qos.QosDiscovery.GetServersRequest::get_Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GetServersRequest_get_Service_mD27F2D2FFD7924C9681C2116EFAFD03E77F59FEA (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, const RuntimeMethod* method) 
{
	{
		// public string Service { get; }
		String_t* L_0 = __this->___U3CServiceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Qos.QosDiscovery.GetServersRequest::.ctor(System.Collections.Generic.List`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetServersRequest__ctor_m454773232F666315509CCB10A2B5A029BD2CB70D (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___region0, String_t* ___service1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__7_0_mDF3BC19C96293831FC8ACA1C245D272CC33625A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A2FD6A7D5D2E3EB03CB60BF4EB21F706F6BA57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD1A4077A7A9AD01BCF1543EE9486F76123440B9);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B3_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B3_1 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B2_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B2_1 = NULL;
	{
		// public GetServersRequest(List<string> region = default(List<string>), string service = default(string))
		il2cpp_codegen_runtime_class_init_inline(QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var);
		QosDiscoveryApiBaseRequest__ctor_m9122E977B93327ACE35337EA6E107C8EBC1C4A6A(__this, NULL);
		// Region = region;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___region0;
		__this->___U3CRegionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegionU3Ek__BackingField_1), (void*)L_0);
		// Service = service;
		String_t* L_1 = ___service1;
		__this->___U3CServiceU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServiceU3Ek__BackingField_2), (void*)L_1);
		// PathAndQueryParams = $"/v1/servers";
		__this->___PathAndQueryParams_3 = _stringLiteralFD1A4077A7A9AD01BCF1543EE9486F76123440B9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathAndQueryParams_3), (void*)_stringLiteralFD1A4077A7A9AD01BCF1543EE9486F76123440B9);
		// List<string> queryParams = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_2;
		// if(Region != null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3;
		L_3 = GetServersRequest_get_Region_m49F11E7EA0533CD65FB26FBE102104D2338AC934_inline(__this, NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		// var regionStringValues = Region.Select(v => v.ToString()).ToList();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4;
		L_4 = GetServersRequest_get_Region_m49F11E7EA0533CD65FB26FBE102104D2338AC934_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_5 = ((U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_6 = L_5;
		G_B2_0 = L_6;
		G_B2_1 = L_4;
		if (L_6)
		{
			G_B3_0 = L_6;
			G_B3_1 = L_4;
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var);
		U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B* L_7 = ((U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_8 = (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*)il2cpp_codegen_object_new(Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__7_0_mDF3BC19C96293831FC8ACA1C245D272CC33625A9_RuntimeMethod_var), NULL);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_9 = L_8;
		((U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_9);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
	}

IL_0052:
	{
		RuntimeObject* L_10;
		L_10 = Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6(G_B3_1, G_B3_0, Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11;
		L_11 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_10, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		V_1 = L_11;
		// queryParams = AddParamsToQueryParams(queryParams, "region", regionStringValues, "form", true);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m56323A5B31B725034B0CA9AE992F7FB2946AE2FD(__this, L_12, _stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89, L_13, _stringLiteral87A2FD6A7D5D2E3EB03CB60BF4EB21F706F6BA57, (bool)1, NULL);
		V_0 = L_14;
	}

IL_0071:
	{
		// if(!string.IsNullOrEmpty(Service))
		String_t* L_15;
		L_15 = GetServersRequest_get_Service_mD27F2D2FFD7924C9681C2116EFAFD03E77F59FEA_inline(__this, NULL);
		bool L_16;
		L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
		if (L_16)
		{
			goto IL_0091;
		}
	}
	{
		// queryParams = AddParamsToQueryParams(queryParams, "service", Service);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = V_0;
		String_t* L_18;
		L_18 = GetServersRequest_get_Service_mD27F2D2FFD7924C9681C2116EFAFD03E77F59FEA_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19;
		L_19 = QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m37EBFF6DDCA6400B0C77F2CABAB42FDFA86B5A97(__this, L_17, _stringLiteralDD20A4ABE85826C9E1FB7E7CF231364434408BFA, L_18, NULL);
		V_0 = L_19;
	}

IL_0091:
	{
		// if (queryParams.Count > 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_20, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		// PathAndQueryParams = $"{PathAndQueryParams}?{string.Join("&", queryParams)}";
		String_t* L_22 = __this->___PathAndQueryParams_3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = V_0;
		String_t* L_24;
		L_24 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, L_23, NULL);
		String_t* L_25;
		L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_22, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, L_24, NULL);
		__this->___PathAndQueryParams_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathAndQueryParams_3), (void*)L_25);
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.String Unity.Services.Qos.QosDiscovery.GetServersRequest::ConstructUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GetServersRequest_ConstructUrl_m34E2AC5428BA279F3BF7001DB96FA0702B9D44C2 (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, String_t* ___requestBasePath0, const RuntimeMethod* method) 
{
	{
		// return requestBasePath + PathAndQueryParams;
		String_t* L_0 = ___requestBasePath0;
		String_t* L_1 = __this->___PathAndQueryParams_3;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Byte[] Unity.Services.Qos.QosDiscovery.GetServersRequest::ConstructBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetServersRequest_ConstructBody_mCDAF08BF135ED626205192361C7757197C162166 (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.QosDiscovery.GetServersRequest::ConstructHeaders(Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Qos.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* GetServersRequest_ConstructHeaders_m8CE30E99E33DDE136776B5830F2FCBF91C0B426A (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, RuntimeObject* ___accessToken0, Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___operationConfiguration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineStateHelper_t111E9015912A912511CB9A457EDE85BDF822F702_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAccessToken_t8A8955010FD3200218D16D50699C60F922877720_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354F14B133FA2E772AC9587C76169889CF8F1991);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AA961E914CD1D587EB94CC5E82EFA76731DF41B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C4247F9B0FD56B2749513C5AD9B83832F156D7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA13BD92D1C37D8A9D5F5B55BE8AF29125142F2D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_7;
	memset((&V_7), 0, sizeof(V_7));
	String_t* G_B4_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B5_2 = NULL;
	{
		// var headers = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// if(!string.IsNullOrEmpty(accessToken.AccessToken))
		RuntimeObject* L_1 = ___accessToken0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IAccessToken::get_AccessToken() */, IAccessToken_t8A8955010FD3200218D16D50699C60F922877720_il2cpp_TypeInfo_var, L_1);
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// headers.Add("authorization", "Bearer " + accessToken.AccessToken);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = V_0;
		RuntimeObject* L_5 = ___accessToken0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IAccessToken::get_AccessToken() */, IAccessToken_t8A8955010FD3200218D16D50699C60F922877720_il2cpp_TypeInfo_var, L_5);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC, L_6, NULL);
		NullCheck(L_4);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, _stringLiteralA13BD92D1C37D8A9D5F5B55BE8AF29125142F2D1, L_7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_002e:
	{
		// headers.Add("Unity-Client-Version", Application.unityVersion);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = V_0;
		String_t* L_9;
		L_9 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_8);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_8, _stringLiteral354F14B133FA2E772AC9587C76169889CF8F1991, L_9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// headers.Add("Unity-Client-Mode", Scheduler.EngineStateHelper.IsPlaying ? "play" : "edit");
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = V_0;
		bool L_11 = ((EngineStateHelper_t111E9015912A912511CB9A457EDE85BDF822F702_StaticFields*)il2cpp_codegen_static_fields_for(EngineStateHelper_t111E9015912A912511CB9A457EDE85BDF822F702_il2cpp_TypeInfo_var))->___IsPlaying_0;
		G_B3_0 = _stringLiteral8C4247F9B0FD56B2749513C5AD9B83832F156D7E;
		G_B3_1 = L_10;
		if (L_11)
		{
			G_B4_0 = _stringLiteral8C4247F9B0FD56B2749513C5AD9B83832F156D7E;
			G_B4_1 = L_10;
			goto IL_0052;
		}
	}
	{
		G_B5_0 = _stringLiteral8AA961E914CD1D587EB94CC5E82EFA76731DF41B;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0057;
	}

IL_0052:
	{
		G_B5_0 = _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0057:
	{
		NullCheck(G_B5_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(G_B5_2, G_B5_1, G_B5_0, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// string[] contentTypes = {
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_12;
		// string[] accepts = {
		//     "application/json",
		//     "application/problem+json"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
		V_2 = L_15;
		// var acceptHeader = GenerateAcceptHeader(accepts);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_2;
		String_t* L_17;
		L_17 = QosDiscoveryApiBaseRequest_GenerateAcceptHeader_m8393B909E55846FC30E166C3ED7E52CBFA9CFD2F(__this, L_16, NULL);
		V_3 = L_17;
		// if (!string.IsNullOrEmpty(acceptHeader))
		String_t* L_18 = V_3;
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		if (L_19)
		{
			goto IL_0096;
		}
	}
	{
		// headers.Add("Accept", acceptHeader);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = V_0;
		String_t* L_21 = V_3;
		NullCheck(L_20);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_20, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92, L_21, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_0096:
	{
		// var httpMethod = "GET";
		V_4 = _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
		// var contentTypeHeader = GenerateContentTypeHeader(contentTypes);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_1;
		String_t* L_23;
		L_23 = QosDiscoveryApiBaseRequest_GenerateContentTypeHeader_m8578BC7C80BEA3C4919B898356FC5A205B59DCE7(__this, L_22, NULL);
		V_5 = L_23;
		// if (!string.IsNullOrEmpty(contentTypeHeader))
		String_t* L_24 = V_5;
		bool L_25;
		L_25 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_24, NULL);
		if (L_25)
		{
			goto IL_00be;
		}
	}
	{
		// headers.Add("Content-Type", contentTypeHeader);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_26 = V_0;
		String_t* L_27 = V_5;
		NullCheck(L_26);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_26, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_27, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		goto IL_00ea;
	}

IL_00be:
	{
		// else if (httpMethod == "POST" || httpMethod == "PATCH")
		String_t* L_28 = V_4;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		if (L_29)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_30 = V_4;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9, NULL);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}

IL_00da:
	{
		// headers.Add("Content-Type", "application/json");
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_32 = V_0;
		NullCheck(L_32);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_32, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_00ea:
	{
		// if (operationConfiguration != null && operationConfiguration.Headers != null)
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_33 = ___operationConfiguration1;
		if (!L_33)
		{
			goto IL_0138;
		}
	}
	{
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_34 = ___operationConfiguration1;
		NullCheck(L_34);
		RuntimeObject* L_35 = L_34->___Headers_3;
		if (!L_35)
		{
			goto IL_0138;
		}
	}
	{
		// foreach (var pair in operationConfiguration.Headers)
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_36 = ___operationConfiguration1;
		NullCheck(L_36);
		RuntimeObject* L_37 = L_36->___Headers_3;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_37);
		V_6 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_39 = V_6;
					if (!L_39)
					{
						goto IL_0137;
					}
				}
				{
					RuntimeObject* L_40 = V_6;
					NullCheck(L_40);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_40);
				}

IL_0137:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0121_1;
			}

IL_0104_1:
			{
				// foreach (var pair in operationConfiguration.Headers)
				RuntimeObject* L_41 = V_6;
				NullCheck(L_41);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_42;
				L_42 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_41);
				V_7 = L_42;
				// headers[pair.Key] = pair.Value;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_43 = V_0;
				String_t* L_44;
				L_44 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_7), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_45;
				L_45 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_7), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_43);
				Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_43, L_44, L_45, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
			}

IL_0121_1:
			{
				// foreach (var pair in operationConfiguration.Headers)
				RuntimeObject* L_46 = V_6;
				NullCheck(L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_0104_1;
				}
			}
			{
				goto IL_0138;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0138:
	{
		// return headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_48 = V_0;
		return L_48;
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
// System.Void Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9AC91843F1D0511A7FFB24E03AFF31ED8BB08989 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B* L_0 = (U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B*)il2cpp_codegen_object_new(U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8002077DF6C1A68B5F9A799915DA6F1B9DC5B2FA(L_0, NULL);
		((U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8002077DF6C1A68B5F9A799915DA6F1B9DC5B2FA (U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c::<.ctor>b__7_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__7_0_mDF3BC19C96293831FC8ACA1C245D272CC33625A9 (U3CU3Ec_tAF8735E52B6E212EF209806BCEF4C9E2E8AC7A3B* __this, String_t* ___v0, const RuntimeMethod* method) 
{
	{
		// var regionStringValues = Region.Select(v => v.ToString()).ToList();
		String_t* L_0 = ___v0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// System.String Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::get_ServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GetServiceServersRequest_get_ServiceId_mB2C010F176BA4F8D230104593F5B9EEC711B1049 (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, const RuntimeMethod* method) 
{
	{
		// public string ServiceId { get; }
		String_t* L_0 = __this->___U3CServiceIdU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::get_Region()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* GetServiceServersRequest_get_Region_mA65DEA51BD0E77B107EFC7A6A65230E065DC9170 (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Region { get; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CRegionU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::get_Fleet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* GetServiceServersRequest_get_Fleet_mD6D5C2DA0516EF331104C353AF62138C36824108 (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Fleet { get; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CFleetU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::.ctor(System.String,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetServiceServersRequest__ctor_m99AD02EF36C866615FFEE6BD9982DAA47D863E45 (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, String_t* ___serviceId0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___region1, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fleet2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__12_0_m4A470291528DAE7018FFABAA6458453A635C09E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__12_1_mD40DBC98B5AB7B82BE1D71AD704F7EB0079F3A95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22A32FA91466F5B534952F7DED80422026DEB4A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A2FD6A7D5D2E3EB03CB60BF4EB21F706F6BA57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC100E808C118A6CE135012FEB647C51CFB84C6A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8C2748ABEB1645A125600047214EE807656EF2D);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B3_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B3_1 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B2_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B2_1 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B7_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B7_1 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B6_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B6_1 = NULL;
	{
		// public GetServiceServersRequest(string serviceId, List<string> region = default(List<string>), List<string> fleet = default(List<string>))
		il2cpp_codegen_runtime_class_init_inline(QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var);
		QosDiscoveryApiBaseRequest__ctor_m9122E977B93327ACE35337EA6E107C8EBC1C4A6A(__this, NULL);
		// ServiceId = serviceId;
		String_t* L_0 = ___serviceId0;
		__this->___U3CServiceIdU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServiceIdU3Ek__BackingField_3), (void*)L_0);
		// Region = region;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ___region1;
		__this->___U3CRegionU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegionU3Ek__BackingField_4), (void*)L_1);
		// Fleet = fleet;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = ___fleet2;
		__this->___U3CFleetU3Ek__BackingField_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFleetU3Ek__BackingField_5), (void*)L_2);
		// PathAndQueryParams = $"/v1/services/{serviceId}/servers";
		String_t* L_3 = ___serviceId0;
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC100E808C118A6CE135012FEB647C51CFB84C6A3, L_3, _stringLiteral22A32FA91466F5B534952F7DED80422026DEB4A5, NULL);
		__this->___PathAndQueryParams_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathAndQueryParams_6), (void*)L_4);
		// List<string> queryParams = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_5, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_5;
		// if(Region != null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6;
		L_6 = GetServiceServersRequest_get_Region_mA65DEA51BD0E77B107EFC7A6A65230E065DC9170_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_0083;
		}
	}
	{
		// var regionStringValues = Region.Select(v => v.ToString()).ToList();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7;
		L_7 = GetServiceServersRequest_get_Region_mA65DEA51BD0E77B107EFC7A6A65230E065DC9170_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_8 = ((U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_9 = L_8;
		G_B2_0 = L_9;
		G_B2_1 = L_7;
		if (L_9)
		{
			G_B3_0 = L_9;
			G_B3_1 = L_7;
			goto IL_0064;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var);
		U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9* L_10 = ((U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_11 = (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*)il2cpp_codegen_object_new(Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__12_0_m4A470291528DAE7018FFABAA6458453A635C09E1_RuntimeMethod_var), NULL);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_12 = L_11;
		((U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1), (void*)L_12);
		G_B3_0 = L_12;
		G_B3_1 = G_B2_1;
	}

IL_0064:
	{
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6(G_B3_1, G_B3_0, Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_13, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		V_1 = L_14;
		// queryParams = AddParamsToQueryParams(queryParams, "region", regionStringValues, "form", true);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17;
		L_17 = QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m56323A5B31B725034B0CA9AE992F7FB2946AE2FD(__this, L_15, _stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89, L_16, _stringLiteral87A2FD6A7D5D2E3EB03CB60BF4EB21F706F6BA57, (bool)1, NULL);
		V_0 = L_17;
	}

IL_0083:
	{
		// if(Fleet != null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18;
		L_18 = GetServiceServersRequest_get_Fleet_mD6D5C2DA0516EF331104C353AF62138C36824108_inline(__this, NULL);
		if (!L_18)
		{
			goto IL_00cf;
		}
	}
	{
		// var fleetStringValues = Fleet.Select(v => v.ToString()).ToList();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19;
		L_19 = GetServiceServersRequest_get_Fleet_mD6D5C2DA0516EF331104C353AF62138C36824108_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_20 = ((U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var))->___U3CU3E9__12_1_2;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_21 = L_20;
		G_B6_0 = L_21;
		G_B6_1 = L_19;
		if (L_21)
		{
			G_B7_0 = L_21;
			G_B7_1 = L_19;
			goto IL_00b0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var);
		U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9* L_22 = ((U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_23 = (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*)il2cpp_codegen_object_new(Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__12_1_mD40DBC98B5AB7B82BE1D71AD704F7EB0079F3A95_RuntimeMethod_var), NULL);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_24 = L_23;
		((U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var))->___U3CU3E9__12_1_2 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var))->___U3CU3E9__12_1_2), (void*)L_24);
		G_B7_0 = L_24;
		G_B7_1 = G_B6_1;
	}

IL_00b0:
	{
		RuntimeObject* L_25;
		L_25 = Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6(G_B7_1, G_B7_0, Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26;
		L_26 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_25, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		V_2 = L_26;
		// queryParams = AddParamsToQueryParams(queryParams, "fleet", fleetStringValues, "form", true);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = V_2;
		il2cpp_codegen_runtime_class_init_inline(QosDiscoveryApiBaseRequest_tCF4C40173234FF38F4109BF5AC6B20017EAA7F66_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_29;
		L_29 = QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m56323A5B31B725034B0CA9AE992F7FB2946AE2FD(__this, L_27, _stringLiteralD8C2748ABEB1645A125600047214EE807656EF2D, L_28, _stringLiteral87A2FD6A7D5D2E3EB03CB60BF4EB21F706F6BA57, (bool)1, NULL);
		V_0 = L_29;
	}

IL_00cf:
	{
		// if (queryParams.Count > 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_30, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00f9;
		}
	}
	{
		// PathAndQueryParams = $"{PathAndQueryParams}?{string.Join("&", queryParams)}";
		String_t* L_32 = __this->___PathAndQueryParams_6;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_33 = V_0;
		String_t* L_34;
		L_34 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, L_33, NULL);
		String_t* L_35;
		L_35 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_32, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, L_34, NULL);
		__this->___PathAndQueryParams_6 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PathAndQueryParams_6), (void*)L_35);
	}

IL_00f9:
	{
		// }
		return;
	}
}
// System.String Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::ConstructUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GetServiceServersRequest_ConstructUrl_m56EB2029452920997532C4C0204869F8602C268E (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, String_t* ___requestBasePath0, const RuntimeMethod* method) 
{
	{
		// return requestBasePath + PathAndQueryParams;
		String_t* L_0 = ___requestBasePath0;
		String_t* L_1 = __this->___PathAndQueryParams_6;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Byte[] Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::ConstructBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetServiceServersRequest_ConstructBody_m6ABA128A6D362022654EF883080C72B44C1137D1 (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::ConstructHeaders(Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Qos.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* GetServiceServersRequest_ConstructHeaders_mFD5284F54B2E2B35E84A72C5C79E87B1EB9F3BBB (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, RuntimeObject* ___accessToken0, Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___operationConfiguration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineStateHelper_t111E9015912A912511CB9A457EDE85BDF822F702_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAccessToken_t8A8955010FD3200218D16D50699C60F922877720_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354F14B133FA2E772AC9587C76169889CF8F1991);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AA961E914CD1D587EB94CC5E82EFA76731DF41B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C4247F9B0FD56B2749513C5AD9B83832F156D7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA13BD92D1C37D8A9D5F5B55BE8AF29125142F2D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_7;
	memset((&V_7), 0, sizeof(V_7));
	String_t* G_B4_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B5_2 = NULL;
	{
		// var headers = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// if(!string.IsNullOrEmpty(accessToken.AccessToken))
		RuntimeObject* L_1 = ___accessToken0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IAccessToken::get_AccessToken() */, IAccessToken_t8A8955010FD3200218D16D50699C60F922877720_il2cpp_TypeInfo_var, L_1);
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// headers.Add("authorization", "Bearer " + accessToken.AccessToken);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = V_0;
		RuntimeObject* L_5 = ___accessToken0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IAccessToken::get_AccessToken() */, IAccessToken_t8A8955010FD3200218D16D50699C60F922877720_il2cpp_TypeInfo_var, L_5);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC, L_6, NULL);
		NullCheck(L_4);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, _stringLiteralA13BD92D1C37D8A9D5F5B55BE8AF29125142F2D1, L_7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_002e:
	{
		// headers.Add("Unity-Client-Version", Application.unityVersion);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = V_0;
		String_t* L_9;
		L_9 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_8);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_8, _stringLiteral354F14B133FA2E772AC9587C76169889CF8F1991, L_9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// headers.Add("Unity-Client-Mode", Scheduler.EngineStateHelper.IsPlaying ? "play" : "edit");
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = V_0;
		bool L_11 = ((EngineStateHelper_t111E9015912A912511CB9A457EDE85BDF822F702_StaticFields*)il2cpp_codegen_static_fields_for(EngineStateHelper_t111E9015912A912511CB9A457EDE85BDF822F702_il2cpp_TypeInfo_var))->___IsPlaying_0;
		G_B3_0 = _stringLiteral8C4247F9B0FD56B2749513C5AD9B83832F156D7E;
		G_B3_1 = L_10;
		if (L_11)
		{
			G_B4_0 = _stringLiteral8C4247F9B0FD56B2749513C5AD9B83832F156D7E;
			G_B4_1 = L_10;
			goto IL_0052;
		}
	}
	{
		G_B5_0 = _stringLiteral8AA961E914CD1D587EB94CC5E82EFA76731DF41B;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0057;
	}

IL_0052:
	{
		G_B5_0 = _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0057:
	{
		NullCheck(G_B5_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(G_B5_2, G_B5_1, G_B5_0, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// string[] contentTypes = {
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_12;
		// string[] accepts = {
		//     "application/json",
		//     "application/problem+json"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
		V_2 = L_15;
		// var acceptHeader = GenerateAcceptHeader(accepts);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_2;
		String_t* L_17;
		L_17 = QosDiscoveryApiBaseRequest_GenerateAcceptHeader_m8393B909E55846FC30E166C3ED7E52CBFA9CFD2F(__this, L_16, NULL);
		V_3 = L_17;
		// if (!string.IsNullOrEmpty(acceptHeader))
		String_t* L_18 = V_3;
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		if (L_19)
		{
			goto IL_0096;
		}
	}
	{
		// headers.Add("Accept", acceptHeader);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = V_0;
		String_t* L_21 = V_3;
		NullCheck(L_20);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_20, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92, L_21, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_0096:
	{
		// var httpMethod = "GET";
		V_4 = _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
		// var contentTypeHeader = GenerateContentTypeHeader(contentTypes);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_1;
		String_t* L_23;
		L_23 = QosDiscoveryApiBaseRequest_GenerateContentTypeHeader_m8578BC7C80BEA3C4919B898356FC5A205B59DCE7(__this, L_22, NULL);
		V_5 = L_23;
		// if (!string.IsNullOrEmpty(contentTypeHeader))
		String_t* L_24 = V_5;
		bool L_25;
		L_25 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_24, NULL);
		if (L_25)
		{
			goto IL_00be;
		}
	}
	{
		// headers.Add("Content-Type", contentTypeHeader);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_26 = V_0;
		String_t* L_27 = V_5;
		NullCheck(L_26);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_26, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_27, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		goto IL_00ea;
	}

IL_00be:
	{
		// else if (httpMethod == "POST" || httpMethod == "PATCH")
		String_t* L_28 = V_4;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		if (L_29)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_30 = V_4;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9, NULL);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}

IL_00da:
	{
		// headers.Add("Content-Type", "application/json");
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_32 = V_0;
		NullCheck(L_32);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_32, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_00ea:
	{
		// if (operationConfiguration != null && operationConfiguration.Headers != null)
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_33 = ___operationConfiguration1;
		if (!L_33)
		{
			goto IL_0138;
		}
	}
	{
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_34 = ___operationConfiguration1;
		NullCheck(L_34);
		RuntimeObject* L_35 = L_34->___Headers_3;
		if (!L_35)
		{
			goto IL_0138;
		}
	}
	{
		// foreach (var pair in operationConfiguration.Headers)
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_36 = ___operationConfiguration1;
		NullCheck(L_36);
		RuntimeObject* L_37 = L_36->___Headers_3;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_37);
		V_6 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_39 = V_6;
					if (!L_39)
					{
						goto IL_0137;
					}
				}
				{
					RuntimeObject* L_40 = V_6;
					NullCheck(L_40);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_40);
				}

IL_0137:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0121_1;
			}

IL_0104_1:
			{
				// foreach (var pair in operationConfiguration.Headers)
				RuntimeObject* L_41 = V_6;
				NullCheck(L_41);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_42;
				L_42 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_41);
				V_7 = L_42;
				// headers[pair.Key] = pair.Value;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_43 = V_0;
				String_t* L_44;
				L_44 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_7), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_45;
				L_45 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_7), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_43);
				Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_43, L_44, L_45, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
			}

IL_0121_1:
			{
				// foreach (var pair in operationConfiguration.Headers)
				RuntimeObject* L_46 = V_6;
				NullCheck(L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_0104_1;
				}
			}
			{
				goto IL_0138;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0138:
	{
		// return headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_48 = V_0;
		return L_48;
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
// System.Void Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6691682EB45489044420524E55EE6A428C485087 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9* L_0 = (U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9*)il2cpp_codegen_object_new(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA0E1961AA9DCAB1B69E085A4F8C7AB6CDBB8E19D(L_0, NULL);
		((U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA0E1961AA9DCAB1B69E085A4F8C7AB6CDBB8E19D (U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::<.ctor>b__12_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__12_0_m4A470291528DAE7018FFABAA6458453A635C09E1 (U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9* __this, String_t* ___v0, const RuntimeMethod* method) 
{
	{
		// var regionStringValues = Region.Select(v => v.ToString()).ToList();
		String_t* L_0 = ___v0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.String Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::<.ctor>b__12_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__12_1_mD40DBC98B5AB7B82BE1D71AD704F7EB0079F3A95 (U3CU3Ec_t1E96B32F78BF5B056C87E436C54FC7D9064C69C9* __this, String_t* ___v0, const RuntimeMethod* method) 
{
	{
		// var fleetStringValues = Fleet.Select(v => v.ToString()).ToList();
		String_t* L_0 = ___v0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// Unity.Services.Qos.Configuration Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* QosDiscoveryApiClient_get_Configuration_mA8F6B3F90810410D20D6420909967781E524A3FE (QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33367E1D9E43F13640226E397C761CCF888E328A);
		s_Il2CppMethodInitialized = true;
	}
	Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* V_0 = NULL;
	{
		// Configuration globalConfiguration = new Configuration("https://qos-discovery.services.api.unity.com", 10, 4, null);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_0), ((int32_t)10), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_1), 4, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_2 = (Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC*)il2cpp_codegen_object_new(Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Configuration__ctor_mFF1BCF6303D8E5E362C3655F302DD9E8870BCD33(L_2, _stringLiteral33367E1D9E43F13640226E397C761CCF888E328A, L_0, L_1, (RuntimeObject*)NULL, NULL);
		V_0 = L_2;
		// return Configuration.MergeConfigurations(_configuration, globalConfiguration);
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_3 = __this->____configuration_3;
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_4 = V_0;
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_5;
		L_5 = Configuration_MergeConfigurations_m10AD4EC118B0BF363E4C1993A490032DC0CE981D(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::set_Configuration(Unity.Services.Qos.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QosDiscoveryApiClient_set_Configuration_m98B22FA0BDAE4468C4E4B505D0AC6D4448CDFAA5 (QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* __this, Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _configuration = value; }
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_0 = ___value0;
		__this->____configuration_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____configuration_3), (void*)L_0);
		// set { _configuration = value; }
		return;
	}
}
// System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::.ctor(Unity.Services.Qos.Http.IHttpClient,Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Qos.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QosDiscoveryApiClient__ctor_mAC0DD995EBE1EE7C9B7BF1D376B15451A3322D11 (QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* __this, RuntimeObject* ___httpClient0, RuntimeObject* ___accessToken1, Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___configuration2, const RuntimeMethod* method) 
{
	{
		// Configuration configuration = null) : base(httpClient)
		RuntimeObject* L_0 = ___httpClient0;
		BaseApiClient__ctor_m99B4C250174C7CCEF6640C19E082E9FEF4DF0F99(__this, L_0, NULL);
		// _configuration = configuration;
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_1 = ___configuration2;
		__this->____configuration_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____configuration_3), (void*)L_1);
		// _accessToken = accessToken;
		RuntimeObject* L_2 = ___accessToken1;
		__this->____accessToken_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____accessToken_1), (void*)L_2);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>> Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::GetServersAsync(Unity.Services.Qos.QosDiscovery.GetServersRequest,Unity.Services.Qos.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3ACB2F1474F202DC1D1177836C7669963263F595* QosDiscoveryApiClient_GetServersAsync_m0ED9B245DB1571CD45BFF48C6A1968C44D2B545B (QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* __this, GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* ___request0, Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___operationConfiguration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m5C6EF0B97EFADD2880D3947358ADDAB528720B84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m4B159563B13DD8CCFC8E378E7931A07144458CB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m4E061BCB3FB3B70CD161C7A3B81875F04C517265_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m5C6EF0B97EFADD2880D3947358ADDAB528720B84(AsyncTaskMethodBuilder_1_Create_m5C6EF0B97EFADD2880D3947358ADDAB528720B84_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* L_1 = ___request0;
		(&V_0)->___request_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___request_4), (void*)L_1);
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_2 = ___operationConfiguration1;
		(&V_0)->___operationConfiguration_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___operationConfiguration_2), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m4B159563B13DD8CCFC8E378E7931A07144458CB5(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m4B159563B13DD8CCFC8E378E7931A07144458CB5_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3ACB2F1474F202DC1D1177836C7669963263F595* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m4E061BCB3FB3B70CD161C7A3B81875F04C517265(L_4, AsyncTaskMethodBuilder_1_get_Task_m4E061BCB3FB3B70CD161C7A3B81875F04C517265_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>> Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::GetServiceServersAsync(Unity.Services.Qos.QosDiscovery.GetServiceServersRequest,Unity.Services.Qos.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDAC25724227FDF2BAD68608CF2408FED59281FA0* QosDiscoveryApiClient_GetServiceServersAsync_m6F125DB6FD01515D93A29D2187C190D536BF28CA (QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* __this, GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* ___request0, Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* ___operationConfiguration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mD5A04E574FE664D9918FF1C3C6AAA1DBBE11F734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_mD80C3BBA3B50FF4776CCA5479A7E23F1C2879373_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m6C572AEC622690B0E34441E35D2CA89382C87EB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mD5A04E574FE664D9918FF1C3C6AAA1DBBE11F734(AsyncTaskMethodBuilder_1_Create_mD5A04E574FE664D9918FF1C3C6AAA1DBBE11F734_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* L_1 = ___request0;
		(&V_0)->___request_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___request_4), (void*)L_1);
		Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_2 = ___operationConfiguration1;
		(&V_0)->___operationConfiguration_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___operationConfiguration_2), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_mD80C3BBA3B50FF4776CCA5479A7E23F1C2879373(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_mD80C3BBA3B50FF4776CCA5479A7E23F1C2879373_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tDAC25724227FDF2BAD68608CF2408FED59281FA0* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m6C572AEC622690B0E34441E35D2CA89382C87EB3(L_4, AsyncTaskMethodBuilder_1_get_Task_m6C572AEC622690B0E34441E35D2CA89382C87EB3_RuntimeMethod_var);
		return L_5;
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
// System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServersAsyncU3Ed__7_MoveNext_m7D03C073B6C99374D7B4ED833585D6041991DB07 (U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m77D18E22AA6D471141095F5302AD9BACB47AC0F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m9AABACC42B99194379BAB0A826F92FE82DF5F435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHttpClient_t8663A7C7502C10C91F3F08F4781480090C10C0B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseHandler_HandleAsyncResponse_TisQosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE_m5F3F872A89E3D482CB1B0B28197640CA6C081B10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Response_1__ctor_mD83291E65D9472F21EA8CD0AA3D87E974B9CB0EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E21F4B49768AD7D30A7C5FD56FEA14D5B05B1DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37CFF4443C0C75F552D0FFE853490A4ECEEE7B2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E43A0EBC9A4E28C8F5511B105EFCCCDAF11029C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50863FE64FB84E5522BDDE89CF1B95FBD9FEBDCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66824423E27E7D4D24A1701DAD42F495A795841C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EAC4E24F681728C8817F751199A34963F88B4FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF422A9E006CB794118A967A65E02B9FA07C4F6D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* V_1 = NULL;
	Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA* V_2 = NULL;
	Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* V_3 = NULL;
	QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE* V_4 = NULL;
	TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B4_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	RuntimeObject* G_B4_4 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	RuntimeObject* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B5_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	RuntimeObject* G_B5_5 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_014f_1;
			}
		}
		{
			// var statusCodeToTypeMap = new Dictionary<string, System.Type>() { {"200", typeof(Models.QosServersResponseBody)   },{"400", typeof(Models.ErrorResponseBody)   },{"401", typeof(Models.ErrorResponseBody)   },{"403", typeof(Models.ErrorResponseBody)   },{"429", typeof(Models.ErrorResponseBody)   },{"500", typeof(Models.ErrorResponseBody)   },{"503", typeof(Models.ErrorResponseBody)   } };
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_3 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)il2cpp_codegen_object_new(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428(L_3, Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_4 = L_3;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_6;
			L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
			NullCheck(L_4);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_4, _stringLiteralFF422A9E006CB794118A967A65E02B9FA07C4F6D, L_6, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_7 = L_4;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_9;
			L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
			NullCheck(L_7);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_7, _stringLiteral1E21F4B49768AD7D30A7C5FD56FEA14D5B05B1DA, L_9, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_10 = L_7;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_12;
			L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
			NullCheck(L_10);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_10, _stringLiteral37CFF4443C0C75F552D0FFE853490A4ECEEE7B2F, L_12, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_13 = L_10;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_15;
			L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
			NullCheck(L_13);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_13, _stringLiteral3E43A0EBC9A4E28C8F5511B105EFCCCDAF11029C, L_15, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_16 = L_13;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_18;
			L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
			NullCheck(L_16);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_16, _stringLiteral6EAC4E24F681728C8817F751199A34963F88B4FD, L_18, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_19 = L_16;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_21;
			L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
			NullCheck(L_19);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_19, _stringLiteral50863FE64FB84E5522BDDE89CF1B95FBD9FEBDCA, L_21, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_22 = L_19;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_24;
			L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
			NullCheck(L_22);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_22, _stringLiteral66824423E27E7D4D24A1701DAD42F495A795841C, L_24, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			__this->___U3CstatusCodeToTypeMapU3E5__2_5 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstatusCodeToTypeMapU3E5__2_5), (void*)L_22);
			// var finalConfiguration = Configuration.MergeConfigurations(operationConfiguration, Configuration);
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_25 = __this->___operationConfiguration_2;
			QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* L_26 = V_1;
			NullCheck(L_26);
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_27;
			L_27 = QosDiscoveryApiClient_get_Configuration_mA8F6B3F90810410D20D6420909967781E524A3FE(L_26, NULL);
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_28;
			L_28 = Configuration_MergeConfigurations_m10AD4EC118B0BF363E4C1993A490032DC0CE981D(L_25, L_27, NULL);
			V_3 = L_28;
			// var response = await HttpClient.MakeRequestAsync("GET",
			//     request.ConstructUrl(finalConfiguration.BasePath),
			//     request.ConstructBody(),
			//     request.ConstructHeaders(_accessToken, finalConfiguration),
			//     finalConfiguration.RequestTimeout ?? _baseTimeout);
			QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* L_29 = V_1;
			NullCheck(L_29);
			RuntimeObject* L_30 = ((BaseApiClient_tB66E602A31C006C82CE3B68569B79BB3F1029657*)L_29)->___HttpClient_0;
			GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* L_31 = __this->___request_4;
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_32 = V_3;
			NullCheck(L_32);
			String_t* L_33 = L_32->___BasePath_0;
			NullCheck(L_31);
			String_t* L_34;
			L_34 = GetServersRequest_ConstructUrl_m34E2AC5428BA279F3BF7001DB96FA0702B9D44C2(L_31, L_33, NULL);
			GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* L_35 = __this->___request_4;
			NullCheck(L_35);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
			L_36 = GetServersRequest_ConstructBody_mCDAF08BF135ED626205192361C7757197C162166(L_35, NULL);
			GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* L_37 = __this->___request_4;
			QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* L_38 = V_1;
			NullCheck(L_38);
			RuntimeObject* L_39 = L_38->____accessToken_1;
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_40 = V_3;
			NullCheck(L_37);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_41;
			L_41 = GetServersRequest_ConstructHeaders_m8CE30E99E33DDE136776B5830F2FCBF91C0B426A(L_37, L_39, L_40, NULL);
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_42 = V_3;
			NullCheck(L_42);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_43 = L_42->___RequestTimeout_1;
			V_6 = L_43;
			bool L_44;
			L_44 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_6), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
			G_B3_0 = L_41;
			G_B3_1 = L_36;
			G_B3_2 = L_34;
			G_B3_3 = _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
			G_B3_4 = L_30;
			if (L_44)
			{
				G_B4_0 = L_41;
				G_B4_1 = L_36;
				G_B4_2 = L_34;
				G_B4_3 = _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
				G_B4_4 = L_30;
				goto IL_0112_1;
			}
		}
		{
			G_B5_0 = ((int32_t)10);
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			G_B5_3 = G_B3_2;
			G_B5_4 = G_B3_3;
			G_B5_5 = G_B3_4;
			goto IL_0119_1;
		}

IL_0112_1:
		{
			int32_t L_45;
			L_45 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_6), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
			G_B5_0 = L_45;
			G_B5_1 = G_B4_0;
			G_B5_2 = G_B4_1;
			G_B5_3 = G_B4_2;
			G_B5_4 = G_B4_3;
			G_B5_5 = G_B4_4;
		}

IL_0119_1:
		{
			NullCheck(G_B5_5);
			Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* L_46;
			L_46 = InterfaceFuncInvoker5< Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9*, String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, int32_t >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.IHttpClient::MakeRequestAsync(System.String,System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32) */, IHttpClient_t8663A7C7502C10C91F3F08F4781480090C10C0B5_il2cpp_TypeInfo_var, G_B5_5, G_B5_4, G_B5_3, G_B5_2, G_B5_1, G_B5_0);
			NullCheck(L_46);
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_47;
			L_47 = Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9(L_46, Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9_RuntimeMethod_var);
			V_5 = L_47;
			bool L_48;
			L_48 = TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E((&V_5), TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E_RuntimeMethod_var);
			if (L_48)
			{
				goto IL_016c_1;
			}
		}
		{
			int32_t L_49 = 0;
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_50 = V_5;
			__this->___U3CU3Eu__1_6 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* L_51 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m77D18E22AA6D471141095F5302AD9BACB47AC0F4(L_51, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB_m77D18E22AA6D471141095F5302AD9BACB47AC0F4_RuntimeMethod_var);
			goto IL_01c6;
		}

IL_014f_1:
		{
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_52 = __this->___U3CU3Eu__1_6;
			V_5 = L_52;
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5* L_53 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_53, sizeof(TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state_0 = L_54;
		}

IL_016c_1:
		{
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_55;
			L_55 = TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516((&V_5), TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516_RuntimeMethod_var);
			// var handledResponse = ResponseHandler.HandleAsyncResponse<Models.QosServersResponseBody>(response, statusCodeToTypeMap);
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_56 = L_55;
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_57 = __this->___U3CstatusCodeToTypeMapU3E5__2_5;
			QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE* L_58;
			L_58 = ResponseHandler_HandleAsyncResponse_TisQosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE_m5F3F872A89E3D482CB1B0B28197640CA6C081B10(L_56, L_57, ResponseHandler_HandleAsyncResponse_TisQosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE_m5F3F872A89E3D482CB1B0B28197640CA6C081B10_RuntimeMethod_var);
			V_4 = L_58;
			// return new Response<Models.QosServersResponseBody>(response, handledResponse);
			QosServersResponseBody_t182A18B2B86B1E1DAAEBEA7D2E57692228D0F8CE* L_59 = V_4;
			Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA* L_60 = (Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA*)il2cpp_codegen_object_new(Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA_il2cpp_TypeInfo_var);
			NullCheck(L_60);
			Response_1__ctor_mD83291E65D9472F21EA8CD0AA3D87E974B9CB0EC(L_60, L_56, L_59, Response_1__ctor_mD83291E65D9472F21EA8CD0AA3D87E974B9CB0EC_RuntimeMethod_var);
			V_2 = L_60;
			goto IL_01ab;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_018b;
		}
		throw e;
	}

CATCH_018b:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CstatusCodeToTypeMapU3E5__2_5 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstatusCodeToTypeMapU3E5__2_5), (void*)(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)NULL);
		AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* L_61 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_62 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m2FC346572D039DA3CBB73AFFC2B910E70CF39262(L_61, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m2FC346572D039DA3CBB73AFFC2B910E70CF39262_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01c6;
	}// end catch (depth: 1)

IL_01ab:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CstatusCodeToTypeMapU3E5__2_5 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstatusCodeToTypeMapU3E5__2_5), (void*)(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)NULL);
		AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* L_63 = (&__this->___U3CU3Et__builder_1);
		Response_1_t48C8DDEF4712E1CE837837B6DB6B5AABC66E6CFA* L_64 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m9AABACC42B99194379BAB0A826F92FE82DF5F435(L_63, L_64, AsyncTaskMethodBuilder_1_SetResult_m9AABACC42B99194379BAB0A826F92FE82DF5F435_RuntimeMethod_var);
	}

IL_01c6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetServersAsyncU3Ed__7_MoveNext_m7D03C073B6C99374D7B4ED833585D6041991DB07_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB*>(__this + _offset);
	U3CGetServersAsyncU3Ed__7_MoveNext_m7D03C073B6C99374D7B4ED833585D6041991DB07(_thisAdjusted, method);
}
// System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServersAsyncU3Ed__7_SetStateMachine_m1A5B420B9D92DA3196FDD52C3069A8DBDCFFD6D8 (U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m852ADB46FE5DF211160BF3ECF7672DA583B17848_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t4804D51B22C23FD8B8277339874DAEFA02C9EB1C* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m852ADB46FE5DF211160BF3ECF7672DA583B17848(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m852ADB46FE5DF211160BF3ECF7672DA583B17848_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetServersAsyncU3Ed__7_SetStateMachine_m1A5B420B9D92DA3196FDD52C3069A8DBDCFFD6D8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetServersAsyncU3Ed__7_t045663250138C46DF9CECB16FDB726B8C8A6C7FB*>(__this + _offset);
	U3CGetServersAsyncU3Ed__7_SetStateMachine_m1A5B420B9D92DA3196FDD52C3069A8DBDCFFD6D8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServiceServersAsyncU3Ed__8_MoveNext_m1DF537C8115BFD4B2074AD9259AC233224A7AF07 (U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_m9443C407EC7015A44B06EA97DC277F470D9C9B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB1FD7B73A2BD32C9A1D26D70A27946A969EEF919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHttpClient_t8663A7C7502C10C91F3F08F4781480090C10C0B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseHandler_HandleAsyncResponse_TisQosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B_mA85DE7FFE9DFD39CA8463DFCA9141B4F97AEA14A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Response_1__ctor_m9C3D06050E8C1DB07635DFB2085B0CBB5F0C5FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E21F4B49768AD7D30A7C5FD56FEA14D5B05B1DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37CFF4443C0C75F552D0FFE853490A4ECEEE7B2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E43A0EBC9A4E28C8F5511B105EFCCCDAF11029C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50863FE64FB84E5522BDDE89CF1B95FBD9FEBDCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66824423E27E7D4D24A1701DAD42F495A795841C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EAC4E24F681728C8817F751199A34963F88B4FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF422A9E006CB794118A967A65E02B9FA07C4F6D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* V_1 = NULL;
	Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B* V_2 = NULL;
	Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* V_3 = NULL;
	QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B* V_4 = NULL;
	TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B4_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	RuntimeObject* G_B4_4 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	RuntimeObject* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B5_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	RuntimeObject* G_B5_5 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_014f_1;
			}
		}
		{
			// var statusCodeToTypeMap = new Dictionary<string, System.Type>() { {"200", typeof(Models.QosServiceServersResponseBody)   },{"400", typeof(Models.ErrorResponseBody)   },{"401", typeof(Models.ErrorResponseBody)   },{"403", typeof(Models.ErrorResponseBody)   },{"429", typeof(Models.ErrorResponseBody)   },{"500", typeof(Models.ErrorResponseBody)   },{"503", typeof(Models.ErrorResponseBody)   } };
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_3 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)il2cpp_codegen_object_new(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428(L_3, Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_4 = L_3;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_6;
			L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
			NullCheck(L_4);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_4, _stringLiteralFF422A9E006CB794118A967A65E02B9FA07C4F6D, L_6, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_7 = L_4;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_9;
			L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
			NullCheck(L_7);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_7, _stringLiteral1E21F4B49768AD7D30A7C5FD56FEA14D5B05B1DA, L_9, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_10 = L_7;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_12;
			L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
			NullCheck(L_10);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_10, _stringLiteral37CFF4443C0C75F552D0FFE853490A4ECEEE7B2F, L_12, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_13 = L_10;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_15;
			L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
			NullCheck(L_13);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_13, _stringLiteral3E43A0EBC9A4E28C8F5511B105EFCCCDAF11029C, L_15, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_16 = L_13;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_18;
			L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
			NullCheck(L_16);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_16, _stringLiteral6EAC4E24F681728C8817F751199A34963F88B4FD, L_18, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_19 = L_16;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_21;
			L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
			NullCheck(L_19);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_19, _stringLiteral50863FE64FB84E5522BDDE89CF1B95FBD9FEBDCA, L_21, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_22 = L_19;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ErrorResponseBody_t7A9A20340573A34229715E5BF42946BFA0252216_0_0_0_var) };
			Type_t* L_24;
			L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
			NullCheck(L_22);
			Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887(L_22, _stringLiteral66824423E27E7D4D24A1701DAD42F495A795841C, L_24, Dictionary_2_Add_m71BE3D798D6EC6F9B3BEF764C46AA0E005F49887_RuntimeMethod_var);
			__this->___U3CstatusCodeToTypeMapU3E5__2_5 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstatusCodeToTypeMapU3E5__2_5), (void*)L_22);
			// var finalConfiguration = Configuration.MergeConfigurations(operationConfiguration, Configuration);
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_25 = __this->___operationConfiguration_2;
			QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* L_26 = V_1;
			NullCheck(L_26);
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_27;
			L_27 = QosDiscoveryApiClient_get_Configuration_mA8F6B3F90810410D20D6420909967781E524A3FE(L_26, NULL);
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_28;
			L_28 = Configuration_MergeConfigurations_m10AD4EC118B0BF363E4C1993A490032DC0CE981D(L_25, L_27, NULL);
			V_3 = L_28;
			// var response = await HttpClient.MakeRequestAsync("GET",
			//     request.ConstructUrl(finalConfiguration.BasePath),
			//     request.ConstructBody(),
			//     request.ConstructHeaders(_accessToken, finalConfiguration),
			//     finalConfiguration.RequestTimeout ?? _baseTimeout);
			QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* L_29 = V_1;
			NullCheck(L_29);
			RuntimeObject* L_30 = ((BaseApiClient_tB66E602A31C006C82CE3B68569B79BB3F1029657*)L_29)->___HttpClient_0;
			GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* L_31 = __this->___request_4;
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_32 = V_3;
			NullCheck(L_32);
			String_t* L_33 = L_32->___BasePath_0;
			NullCheck(L_31);
			String_t* L_34;
			L_34 = GetServiceServersRequest_ConstructUrl_m56EB2029452920997532C4C0204869F8602C268E(L_31, L_33, NULL);
			GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* L_35 = __this->___request_4;
			NullCheck(L_35);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
			L_36 = GetServiceServersRequest_ConstructBody_m6ABA128A6D362022654EF883080C72B44C1137D1(L_35, NULL);
			GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* L_37 = __this->___request_4;
			QosDiscoveryApiClient_t4862222F27B4F9502B67CF03256E32C8D7CB5D11* L_38 = V_1;
			NullCheck(L_38);
			RuntimeObject* L_39 = L_38->____accessToken_1;
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_40 = V_3;
			NullCheck(L_37);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_41;
			L_41 = GetServiceServersRequest_ConstructHeaders_mFD5284F54B2E2B35E84A72C5C79E87B1EB9F3BBB(L_37, L_39, L_40, NULL);
			Configuration_tA51F8073135AB7EBB0399F926FA5C42D1CF999DC* L_42 = V_3;
			NullCheck(L_42);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_43 = L_42->___RequestTimeout_1;
			V_6 = L_43;
			bool L_44;
			L_44 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_6), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
			G_B3_0 = L_41;
			G_B3_1 = L_36;
			G_B3_2 = L_34;
			G_B3_3 = _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
			G_B3_4 = L_30;
			if (L_44)
			{
				G_B4_0 = L_41;
				G_B4_1 = L_36;
				G_B4_2 = L_34;
				G_B4_3 = _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
				G_B4_4 = L_30;
				goto IL_0112_1;
			}
		}
		{
			G_B5_0 = ((int32_t)10);
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			G_B5_3 = G_B3_2;
			G_B5_4 = G_B3_3;
			G_B5_5 = G_B3_4;
			goto IL_0119_1;
		}

IL_0112_1:
		{
			int32_t L_45;
			L_45 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_6), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
			G_B5_0 = L_45;
			G_B5_1 = G_B4_0;
			G_B5_2 = G_B4_1;
			G_B5_3 = G_B4_2;
			G_B5_4 = G_B4_3;
			G_B5_5 = G_B4_4;
		}

IL_0119_1:
		{
			NullCheck(G_B5_5);
			Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9* L_46;
			L_46 = InterfaceFuncInvoker5< Task_1_tF6629688545A28BF7E92F5D42ABABC826D0C79D9*, String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, int32_t >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.IHttpClient::MakeRequestAsync(System.String,System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32) */, IHttpClient_t8663A7C7502C10C91F3F08F4781480090C10C0B5_il2cpp_TypeInfo_var, G_B5_5, G_B5_4, G_B5_3, G_B5_2, G_B5_1, G_B5_0);
			NullCheck(L_46);
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_47;
			L_47 = Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9(L_46, Task_1_GetAwaiter_m38D5F434B2FA5B1A3C16B4A4DA8F6C0E7471F0B9_RuntimeMethod_var);
			V_5 = L_47;
			bool L_48;
			L_48 = TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E((&V_5), TaskAwaiter_1_get_IsCompleted_m1B15F36E7838C9E25ECE7A30ADB1CC1B4F6D925E_RuntimeMethod_var);
			if (L_48)
			{
				goto IL_016c_1;
			}
		}
		{
			int32_t L_49 = 0;
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_50 = V_5;
			__this->___U3CU3Eu__1_6 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* L_51 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_m9443C407EC7015A44B06EA97DC277F470D9C9B3B(L_51, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5_TisU3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD_m9443C407EC7015A44B06EA97DC277F470D9C9B3B_RuntimeMethod_var);
			goto IL_01c6;
		}

IL_014f_1:
		{
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5 L_52 = __this->___U3CU3Eu__1_6;
			V_5 = L_52;
			TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5* L_53 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_53, sizeof(TaskAwaiter_1_t9FC51538154C38A6323BF4F36C1482D276A4DDD5));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state_0 = L_54;
		}

IL_016c_1:
		{
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_55;
			L_55 = TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516((&V_5), TaskAwaiter_1_GetResult_m171C64685E0C5BABA3B642C7D5EFB0386995A516_RuntimeMethod_var);
			// var handledResponse = ResponseHandler.HandleAsyncResponse<Models.QosServiceServersResponseBody>(response, statusCodeToTypeMap);
			HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* L_56 = L_55;
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_57 = __this->___U3CstatusCodeToTypeMapU3E5__2_5;
			QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B* L_58;
			L_58 = ResponseHandler_HandleAsyncResponse_TisQosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B_mA85DE7FFE9DFD39CA8463DFCA9141B4F97AEA14A(L_56, L_57, ResponseHandler_HandleAsyncResponse_TisQosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B_mA85DE7FFE9DFD39CA8463DFCA9141B4F97AEA14A_RuntimeMethod_var);
			V_4 = L_58;
			// return new Response<Models.QosServiceServersResponseBody>(response, handledResponse);
			QosServiceServersResponseBody_tC8825C5246203AD733E8F238BFE41E76E32D582B* L_59 = V_4;
			Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B* L_60 = (Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B*)il2cpp_codegen_object_new(Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B_il2cpp_TypeInfo_var);
			NullCheck(L_60);
			Response_1__ctor_m9C3D06050E8C1DB07635DFB2085B0CBB5F0C5FC8(L_60, L_56, L_59, Response_1__ctor_m9C3D06050E8C1DB07635DFB2085B0CBB5F0C5FC8_RuntimeMethod_var);
			V_2 = L_60;
			goto IL_01ab;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_018b;
		}
		throw e;
	}

CATCH_018b:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CstatusCodeToTypeMapU3E5__2_5 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstatusCodeToTypeMapU3E5__2_5), (void*)(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)NULL);
		AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* L_61 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_62 = V_7;
		AsyncTaskMethodBuilder_1_SetException_mF500757A92D9F1CA48520A84B4B9F32DD4F21C91(L_61, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF500757A92D9F1CA48520A84B4B9F32DD4F21C91_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01c6;
	}// end catch (depth: 1)

IL_01ab:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CstatusCodeToTypeMapU3E5__2_5 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstatusCodeToTypeMapU3E5__2_5), (void*)(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)NULL);
		AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* L_63 = (&__this->___U3CU3Et__builder_1);
		Response_1_t6CBD565DA6FB121320570C997933C523F1E5360B* L_64 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB1FD7B73A2BD32C9A1D26D70A27946A969EEF919(L_63, L_64, AsyncTaskMethodBuilder_1_SetResult_mB1FD7B73A2BD32C9A1D26D70A27946A969EEF919_RuntimeMethod_var);
	}

IL_01c6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetServiceServersAsyncU3Ed__8_MoveNext_m1DF537C8115BFD4B2074AD9259AC233224A7AF07_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD*>(__this + _offset);
	U3CGetServiceServersAsyncU3Ed__8_MoveNext_m1DF537C8115BFD4B2074AD9259AC233224A7AF07(_thisAdjusted, method);
}
// System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetServiceServersAsyncU3Ed__8_SetStateMachine_m1657475A462E8CB67A32F4351AEA052DB67B218E (U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mF03FB15AE5F9AE900B341B8483F2BE171C32FAEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tAD760382EB7C98F2EEB5C8EDDA1461EEC619B394* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mF03FB15AE5F9AE900B341B8483F2BE171C32FAEE(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mF03FB15AE5F9AE900B341B8483F2BE171C32FAEE_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetServiceServersAsyncU3Ed__8_SetStateMachine_m1657475A462E8CB67A32F4351AEA052DB67B218E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetServiceServersAsyncU3Ed__8_tA27C303BD1523EAC580BE6A9906552B5463FEFFD*>(__this + _offset);
	U3CGetServiceServersAsyncU3Ed__8_SetStateMachine_m1657475A462E8CB67A32F4351AEA052DB67B218E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CFactoryU3Ek__BackingField_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ThreadHelper_get_TaskScheduler_mE4BB459B45461BD9314E69B218A9D3F021E98672_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadHelper_tF58404F9CCFE15FDEE933550EA8A3361070265CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static System.Threading.Tasks.TaskScheduler TaskScheduler => _taskScheduler;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((ThreadHelper_tF58404F9CCFE15FDEE933550EA8A3361070265CB_StaticFields*)il2cpp_codegen_static_fields_for(ThreadHelper_tF58404F9CCFE15FDEE933550EA8A3361070265CB_il2cpp_TypeInfo_var))->____taskScheduler_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t HttpClientResponse_get_StatusCode_mC8A80B746A2F6E82F65517C3AB4C479784B55998_inline (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) 
{
	{
		// public long StatusCode { get; }
		int64_t L_0 = __this->___U3CStatusCodeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HttpClientResponse_get_ErrorMessage_mC9BA60D07DC70CF2BAA92C4C256BDF5CB74F326B_inline (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) 
{
	{
		// public string ErrorMessage { get; }
		String_t* L_0 = __this->___U3CErrorMessageU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HttpClientResponse_get_Data_mB0A3BB94BF7CE548D1464659194CA4E9557E09DE_inline (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get;}
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpClientResponse_get_IsHttpError_m6DCA23589DA544E4E462A755FA5E781206995A3B_inline (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsHttpError { get; }
		bool L_0 = __this->___U3CIsHttpErrorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpClientResponse_get_IsNetworkError_m3C3F6623CBFEFED95570B0EC1677CA7E31C9DAE0_inline (HttpClientResponse_tBCF4C3C18FED540C76B60400A62394ADC67AD3B5* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsNetworkError { get; }
		bool L_0 = __this->___U3CIsNetworkErrorU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) 
{
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1_inline (ExceptionPredicate_t30F51CC0641028390A8F2FF44F22CB6A6D06ADA8* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	typedef Exception_t* (*FunctionPointerType) (RuntimeObject*, Exception_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ex0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* GetServersRequest_get_Region_m49F11E7EA0533CD65FB26FBE102104D2338AC934_inline (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Region { get; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CRegionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GetServersRequest_get_Service_mD27F2D2FFD7924C9681C2116EFAFD03E77F59FEA_inline (GetServersRequest_tD0ACADC81DCE39A8910F3EF37389B610DEDA5D7A* __this, const RuntimeMethod* method) 
{
	{
		// public string Service { get; }
		String_t* L_0 = __this->___U3CServiceU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* GetServiceServersRequest_get_Region_mA65DEA51BD0E77B107EFC7A6A65230E065DC9170_inline (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Region { get; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CRegionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* GetServiceServersRequest_get_Fleet_mD6D5C2DA0516EF331104C353AF62138C36824108_inline (GetServiceServersRequest_t06D34EDD6E905F2C25AFD43CBD559598DD5E7AB6* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Fleet { get; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CFleetU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
