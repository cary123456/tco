#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.Services.Authentication.ProfileEventArgs>
struct Action_1_t211056316F21C506A70C119B6DFC60079C04E01F;
// System.Action`1<Unity.Services.Core.RequestFailedException>
struct Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState>
struct Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537;
// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>
struct Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<Unity.Services.Authentication.ExternalIdentity,System.Boolean>
struct Func_2_tF1A3CF1FD4E05A03E8BD9749B7FFA5CB5EF63C96;
// System.Func`2<Unity.Services.Authentication.Identity,System.Boolean>
struct Func_2_tD767167733C46D4FDC8AFD23616D4D56100D1379;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerable`1<Unity.Services.Authentication.ExternalIdentity>
struct IEnumerable_1_t41B89EEF7E425B844FDE357D6BAD2A8318AF6E74;
// System.Collections.Generic.IEnumerable`1<Unity.Services.Authentication.Identity>
struct IEnumerable_1_t02571348AF4B261B364BD1CB656A373CC55548EF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity>
struct List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356;
// System.Collections.Generic.List`1<Unity.Services.Authentication.Identity>
struct List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<Unity.Services.Authentication.Identity>
struct Predicate_1_t4BBF8DE16E02FEEB9FE9EC49F8614C8D90FB8E4B;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Authentication.LinkResponse>
struct TaskFactory_1_tDE77931C580B0D024637C0350B9D53F1E8870B5A;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Authentication.PlayerInfo>
struct TaskFactory_1_t8E3F13A083E0F6C3F6D318E78F94BD7E31C67ED2;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Authentication.PlayerInfoResponse>
struct TaskFactory_1_t759661C223D45F412AA8A7D87727D5AC1D7C1F43;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Authentication.SignInResponse>
struct TaskFactory_1_t04EECEA335453F4EA391D508998281328AB75390;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Authentication.UnlinkResponse>
struct TaskFactory_1_t50597DE47B9F8ED25487126D85178B5E205B7844;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Authentication.WellKnownKeysResponse>
struct TaskFactory_1_t4C81F086555D4994056FF34E0BCB7865F52A1189;
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.LinkResponse>
struct Task_1_t9E83749FC41A9417AE7750D513EAF8D13F206641;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.PlayerInfo>
struct Task_1_t21DAACEAA1083EAA8F411BB4BB8B70E2F7806104;
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.PlayerInfoResponse>
struct Task_1_tBDE11C6723E9E78F3C214C00A13E580F96A87EB7;
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>
struct Task_1_tAF51175714E424A84783635B14DBF49E6F558D42;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.UnlinkResponse>
struct Task_1_tCF64ADEDCC5E52FD1B2D04A05A32E30D604CBFAC;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.WellKnownKeysResponse>
struct Task_1_tA10499A2609A86CF8EDB1C3D8BA6CF2911B896E5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Unity.Services.Authentication.ExternalIdentity[]
struct ExternalIdentityU5BU5D_t99ED49F7278B910B9B04E2F51815130033CAE72C;
// Unity.Services.Authentication.Identity[]
struct IdentityU5BU5D_t8B40949539FAAA2AD416EFCD70BA5121B9CCF846;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3;
// Unity.Services.Authentication.WellKnownKey[]
struct WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273;
// Unity.Services.Authentication.AccessToken
struct AccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2;
// Unity.Services.Authentication.AccessTokenComponent
struct AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2;
// Unity.Services.Authentication.AccessTokenExtraClaims
struct AccessTokenExtraClaims_tF775770014EAE151A0DC61549E18AFB6BF292F6C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Unity.Services.Authentication.AuthenticationCache
struct AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C;
// Unity.Services.Authentication.AuthenticationErrorResponse
struct AuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60;
// Unity.Services.Authentication.AuthenticationException
struct AuthenticationException_tB035991B8F9E6DDB3E6EF7D5829B4C7E4E677FB3;
// Unity.Services.Authentication.AuthenticationMetrics
struct AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A;
// Unity.Services.Authentication.AuthenticationNetworkClient
struct AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8;
// Unity.Services.Authentication.AuthenticationPackageInitializer
struct AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E;
// Unity.Services.Authentication.AuthenticationServiceInternal
struct AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B;
// Unity.Services.Authentication.AuthenticationSettings
struct AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947;
// Unity.Services.Authentication.BaseJwt
struct BaseJwt_tE235418FE84895C61012E458A93D98F334B1F8EF;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Unity.Services.Authentication.Models.Compatibility
struct Compatibility_tD9AEEA2924AC3C375D9E8712E711C8FDF85AC04E;
// Unity.Services.Authentication.Utilities.Compatibility
struct Compatibility_tFA1E59ED80B83C1E7B88589F69BBA1039539E520;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA;
// Unity.Services.Authentication.DateTimeWrapper
struct DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA;
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
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Unity.Services.Authentication.EnvironmentIdComponent
struct EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Exception
struct Exception_t;
// Unity.Services.Authentication.ExternalIdentity
struct ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// Unity.Services.Authentication.Internal.IAccessToken
struct IAccessToken_t8A8955010FD3200218D16D50699C60F922877720;
// Unity.Services.Core.Scheduler.Internal.IActionScheduler
struct IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Unity.Services.Authentication.IAuthenticationCache
struct IAuthenticationCache_t9AB026335B4412D5E4CC8BEF043B65C1AE27059A;
// Unity.Services.Authentication.IAuthenticationMetrics
struct IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D;
// Unity.Services.Authentication.IAuthenticationNetworkClient
struct IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D;
// Unity.Services.Authentication.IAuthenticationService
struct IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737;
// Unity.Services.Authentication.IAuthenticationSettings
struct IAuthenticationSettings_t8C46CC09B2615A65D1B87C8AD71C7637C3767233;
// Unity.Services.Core.Configuration.Internal.ICloudProjectId
struct ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7;
// Unity.Services.Authentication.IDateTimeWrapper
struct IDateTimeWrapper_t9D19ED0EA87A563F521F9ACE1DB65E2DBF015957;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Services.Authentication.Internal.IEnvironmentId
struct IEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F;
// Unity.Services.Core.Environments.Internal.IEnvironments
struct IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7;
// Unity.Services.Authentication.IJwtDecoder
struct IJwtDecoder_tF19E685470959229CAE1602E09CC93F130442E47;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// Unity.Services.Core.Telemetry.Internal.IMetrics
struct IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5;
// Unity.Services.Core.Telemetry.Internal.IMetricsFactory
struct IMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F;
// Unity.Services.Authentication.INetworkConfiguration
struct INetworkConfiguration_t696DBB208D0022D357D3014820A8201E6809C5E6;
// Unity.Services.Authentication.INetworkHandler
struct INetworkHandler_t4EBC714C09E2887EE735E96833BD11B3AAA02389;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2;
// Unity.Services.Authentication.Internal.IPlayerId
struct IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913;
// Unity.Services.Authentication.IProfile
struct IProfile_t0DC486F874AA0450CBE9E4F75A5733093B2E76E7;
// Unity.Services.Core.Configuration.Internal.IProjectConfiguration
struct IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2;
// Unity.Services.Core.Internal.IServiceRegistry
struct IServiceRegistry_tDC19B8061DEB2308A93ABB6466DD33837E3FB1BC;
// Unity.Services.Authentication.Identity
struct Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A;
// Unity.Services.Authentication.JwtDecoder
struct JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6;
// Unity.Services.Authentication.LinkOptions
struct LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72;
// Unity.Services.Authentication.LinkResponse
struct LinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906;
// Unity.Services.Authentication.LinkWithExternalTokenRequest
struct LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Services.Authentication.NetworkConfiguration
struct NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4;
// Unity.Services.Authentication.NetworkHandler
struct NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360;
// Unity.Services.Authentication.PlayerIdComponent
struct PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19;
// Unity.Services.Authentication.PlayerInfo
struct PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF;
// Unity.Services.Authentication.PlayerInfoResponse
struct PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0;
// Unity.Services.Authentication.ProfileComponent
struct ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3;
// Unity.Services.Authentication.ProfileEventArgs
struct ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26;
// System.Security.Cryptography.RSA
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001;
// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t3B1E70B8DA929C184C7599B50FB8DD4BF5CA7CB3;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00;
// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631;
// Unity.Services.Authentication.SessionTokenComponent
struct SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612;
// Unity.Services.Authentication.SessionTokenRequest
struct SessionTokenRequest_t9C89923BD817D8F5D559572738BC39BC3E12ADFB;
// Unity.Services.Authentication.SignInOptions
struct SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291;
// Unity.Services.Authentication.SignInResponse
struct SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47;
// Unity.Services.Authentication.SignInWithExternalTokenRequest
struct SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// Unity.Services.Authentication.UnlinkRequest
struct UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D;
// Unity.Services.Authentication.UnlinkResponse
struct UnlinkResponse_t80C024EBE33CD7796AF31678A9E1B74310470A42;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// Unity.Services.Authentication.User
struct User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Services.Authentication.WebRequest
struct WebRequest_tE5622473581945D112800D97E1EB0E04D900D707;
// Unity.Services.Authentication.WebRequestException
struct WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF;
// Unity.Services.Authentication.WellKnownKey
struct WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC;
// Unity.Services.Authentication.WellKnownKeysComponent
struct WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB;
// Unity.Services.Authentication.WellKnownKeysResponse
struct WellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53;
// Unity.Services.Authentication.AuthenticationServiceInternal/<>c
struct U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A;
// Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass75_0
struct U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243;
// Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass97_0
struct U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9;
// Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass98_0
struct U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12;
// Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D;
// Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Unity.Services.Authentication.WebRequest/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6;

IL2CPP_EXTERN_C RuntimeClass* AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t211056316F21C506A70C119B6DFC60079C04E01F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationException_tB035991B8F9E6DDB3E6EF7D5829B4C7E4E677FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD767167733C46D4FDC8AFD23616D4D56100D1379_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF1A3CF1FD4E05A03E8BD9749B7FFA5CB5EF63C96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationCache_t9AB026335B4412D5E4CC8BEF043B65C1AE27059A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationSettings_t8C46CC09B2615A65D1B87C8AD71C7637C3767233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDateTimeWrapper_t9D19ED0EA87A563F521F9ACE1DB65E2DBF015957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetworkConfiguration_t696DBB208D0022D357D3014820A8201E6809C5E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetworkHandler_t4EBC714C09E2887EE735E96833BD11B3AAA02389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProfile_t0DC486F874AA0450CBE9E4F75A5733093B2E76E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t4BBF8DE16E02FEEB9FE9EC49F8614C8D90FB8E4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSAPKCS1SignatureDeformatter_t3B1E70B8DA929C184C7599B50FB8DD4BF5CA7CB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionTokenRequest_t9C89923BD817D8F5D559572738BC39BC3E12ADFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestVerb_tF2538FF3DD3CADBFB3C11AB85E1B78F8B837EFA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequest_tE5622473581945D112800D97E1EB0E04D900D707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral069E76898DCED02EA1198EDF60D34460ED12B74D;
IL2CPP_EXTERN_C String_t* _stringLiteral08236C3D0BD231A7F99CFFF73121864DE711C7AF;
IL2CPP_EXTERN_C String_t* _stringLiteral0BBA17F9025B4E06EB9B984A9380348ECAAA27E7;
IL2CPP_EXTERN_C String_t* _stringLiteral0D0D6E0FD7AC9D830E7B2E7079C8B6D3B7FD573E;
IL2CPP_EXTERN_C String_t* _stringLiteral10E85A1C982FD89AD3C7F21301C7CEF7FA7E7CEC;
IL2CPP_EXTERN_C String_t* _stringLiteral13AA05127DC343690A4511AFDB16512FF022B039;
IL2CPP_EXTERN_C String_t* _stringLiteral141957AF910C5B886304F115D2479EA72DD92035;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AA156A3CC61BE3445EF580D2A5FB14EA4CE8;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
IL2CPP_EXTERN_C String_t* _stringLiteral2754A23125BBA5ED316F9C07A3E818C3D63239F1;
IL2CPP_EXTERN_C String_t* _stringLiteral296A65E2A28A506DAA998C4B70E93737444F0726;
IL2CPP_EXTERN_C String_t* _stringLiteral3588789C48AB78DB91B054AB1061B98B63526313;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC88D38D30295ACC007AF41EA6369A9C7D096CB;
IL2CPP_EXTERN_C String_t* _stringLiteral3F356137CA88ED48EB67D737BE3B186689AF3BDA;
IL2CPP_EXTERN_C String_t* _stringLiteral4511699820F543B7439635CD03C9DF85473764E4;
IL2CPP_EXTERN_C String_t* _stringLiteral4BE0C724DF0778AB44291FE22681FE3735239D7F;
IL2CPP_EXTERN_C String_t* _stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37;
IL2CPP_EXTERN_C String_t* _stringLiteral5007D8D0381075039AADFA5A7B7117BF4299AF46;
IL2CPP_EXTERN_C String_t* _stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF;
IL2CPP_EXTERN_C String_t* _stringLiteral564C592A83288CFC0A06F4F169F973D869F140D9;
IL2CPP_EXTERN_C String_t* _stringLiteral5775BF2C56072AD72272B41D66428F6603BBBF52;
IL2CPP_EXTERN_C String_t* _stringLiteral5A5357BFF4777961C0ED9DFB11AC98AFAF29AF93;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral64F0B93C5B7055DDA721986BA7566D27276D2FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral6682BD0725A4AB34573ADAA351C3058894511A91;
IL2CPP_EXTERN_C String_t* _stringLiteral6B0916E2982DC623EA98A7E9D62E6EF0E2312106;
IL2CPP_EXTERN_C String_t* _stringLiteral6E9F41A081334E4B02281220D1D08BE13787C133;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral717C4F750DC4509915CB09BBCF378D5BCAAE0384;
IL2CPP_EXTERN_C String_t* _stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5;
IL2CPP_EXTERN_C String_t* _stringLiteral77B5A95080D1AC66E0C734381A240DBAF39BB2C9;
IL2CPP_EXTERN_C String_t* _stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF;
IL2CPP_EXTERN_C String_t* _stringLiteral84A9978B59FFBFBE63AC70C74158A9EC795C97E2;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9118BD0CAA037C7CB5A295148D715E5D7BB54A65;
IL2CPP_EXTERN_C String_t* _stringLiteral9349ADD882729BE53E1C4DE12028C63CA62FB09D;
IL2CPP_EXTERN_C String_t* _stringLiteral98DC5CC9FB1CF6E407FEE201642AC8D774BB85CB;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteral9D8209EB4C6E9DAA475A67D53CE5B15D8209D862;
IL2CPP_EXTERN_C String_t* _stringLiteral9F1462AD691582C705B8D80B37739368463E0FE1;
IL2CPP_EXTERN_C String_t* _stringLiteralA10AB45BB9FF2F4B6907E5D38143D5D5AA7ED62E;
IL2CPP_EXTERN_C String_t* _stringLiteralA1D894129428D97A82105EA53B4459C27A9AF712;
IL2CPP_EXTERN_C String_t* _stringLiteralA25CBED3DFB739A64F6004FF039EB7CA4D744F80;
IL2CPP_EXTERN_C String_t* _stringLiteralA6E95469377CE29950B6E671AF6618E8518383E4;
IL2CPP_EXTERN_C String_t* _stringLiteralA807D779356BF929984FEEF020A8F304C0825CD2;
IL2CPP_EXTERN_C String_t* _stringLiteralAA77D5693A0F444FC4C8236C0AEED70B164CFF58;
IL2CPP_EXTERN_C String_t* _stringLiteralAD2602465D20536036625524AF1C558FA78A80ED;
IL2CPP_EXTERN_C String_t* _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990;
IL2CPP_EXTERN_C String_t* _stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89;
IL2CPP_EXTERN_C String_t* _stringLiteralB94C40AE44D0691F7FCE589508D96B9A91E098C2;
IL2CPP_EXTERN_C String_t* _stringLiteralBBD2C55ACA8C0FD25D369CC2C0AF8112C364CDCE;
IL2CPP_EXTERN_C String_t* _stringLiteralBF572CA10517B5259B757A364DD3507DF49F7DD3;
IL2CPP_EXTERN_C String_t* _stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC;
IL2CPP_EXTERN_C String_t* _stringLiteralC36D2F78E29E9D66D4CD31ECC1B896992ED4C2B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCB7FE37709A3E5F9D994BF275861CD32D78CD778;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA99DC082690D52234645F88C722A5B296B811B;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18F10F0051A587D2304B049AACABD345111C9E;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB5ADD24A8B3212AEDF863D68D2927C47646EE2;
IL2CPP_EXTERN_C String_t* _stringLiteralD0135F76E285AE1930AF69DEBEFAFB813DE53F08;
IL2CPP_EXTERN_C String_t* _stringLiteralD1CDA7DDA0CE92EAD8BFF309B8D1AF87CE4872B9;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB3E69FC55ED8847330589BDD84FCE65D9533F9;
IL2CPP_EXTERN_C String_t* _stringLiteralE226315A889E342809A09A15505207F9977AF600;
IL2CPP_EXTERN_C String_t* _stringLiteralE4EF956D8605C91DE8D8A5036BA8A8E5C713A5CC;
IL2CPP_EXTERN_C String_t* _stringLiteralE5ADCF3FED825951408599CB8341DA473933C86B;
IL2CPP_EXTERN_C String_t* _stringLiteralECFDE2983A6856B5CACDDC405CED9C5C735543F1;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF67B63DDDBE53FE39B3D99C2D009C6DF09C38E70;
IL2CPP_EXTERN_C String_t* _stringLiteralFA8AA2AB44804D79187FCFFF99D1CAC43C6E8B5F;
IL2CPP_EXTERN_C String_t* _stringLiteralFDDEE3EA3FCE79DBEAF010D60B12A635E292209E;
IL2CPP_EXTERN_C String_t* _stringLiteralFF3F6295AAF48AC44EE111E7233767AD6B03E6C8;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_m42F558F962C27B8DAF3B01C3420D51B75F3FD765_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m3B201A12EB2219BB0A173006EE63A9B6E246EA5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m546F35E194510D73D5248D5DDC4D1B870F696A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m817589C18F4DB722F550FC51D945886BFDFF1209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m51F1971DB8396E427D87E22C5D95CDCB4AF2F05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_mBD41A694EEF9D7926A01145A2486BA19E72FDCA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m28A51CC5C3936DE084776A7B6C2EA27A66E8E44E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m319A5913E6473C203A1572A5D921188B5A3B1AC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_mE85FE900DE708EBB35DD55A0AB1D094B2FB95503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mA88565A9568103B70BF3AE0136FC07B953E612EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mFC148A0816C9699FFF908CE824D2FA4EFE47947C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_m9C707562CC77D30B0E2AFDBF3945CA53BA99F0AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_m93FF5531F817E0F4C1C4DBF3CAE66F5EBEA0E20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mF813EEFD6E75C66C16FAC9EF4F7C989219D67B9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_mADF80608E3A9D685AB8AB78D160E81B7EFCCE298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_m6B01815C9ABE00AB7E4E02B151A0150A40D613C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_m44C076FE6E399D9BEA929054566B1562F21B542A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mC98A209C02DCC6A42893CE31542167CDB6F5BB81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_mE735C9DF1B1F955105A16E05113F327B19D7EDF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m5620F32435B96B0412BB65811A7435D953C6C857_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationServiceInternal_ClearSessionToken_mEA69C75EA48AA816E80655FAF60D15BFAB520956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationServiceInternal_CompleteSignIn_m05519A7D98EC9B8FB6D2EF043A033FBF0D6885A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationServiceInternal_ExecuteScheduledExpiration_m295051F90C97683E17AEB33E12FF0C251E0AD287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationServiceInternal_ExecuteScheduledRefresh_m3F20BC22FE9891DB8DA89EDD005EA697F28E53D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationServiceInternal_SwitchProfile_mF20971349EFB7A009768687FD8377C6C509749FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationServiceInternal_U3C_ctorU3Eb__74_0_m5C8D958BB2C8579912768519C87AD5500DBE7C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mC48AD060A6B3F5E06A2B4AE04C71F0DD05DBAABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_mAAAC4DFCA0707823134A60AAD6883345738C8543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m93F4FBA0C705D7D86490EBD4E70005983E16BFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m04C4A9BE5DBB1E12902078344F685C8FC3023713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mE4D416BE760057F83FE86BA2FEF5753E1B44BE69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mECC41FF178AE8A222AB01DA1F1A412D237C5CB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_m9825DA2F6B0AE6ECF9D7DBCA69BF1EFBADFFA5FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterPackage_TisAuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E_m7F81ECFF18FBDFC0E59A8302DC62E3B420173E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m96E3BC38CB35E7DE66A2138E255D9138290E0719_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_mBAC1AE4D552B9514846F66FBAF9F7B888E3B402F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m76EE03A1259101C248F840059C28D021440190D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25_mC1EB28532368E7BFC761E3A566F6279A7214811B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisIdentity_t0F2459F648B93A730762B444F9012ECFA8BF709F_m3C3A6A66D0A19368E1F7600F0A6FE9E323764CB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3540617D9DC43EFFDC7576E40499E7BC05FD5204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m61D9CCC795FD3F00C81876C20B1F743A88B03626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m88D481EC5337BA28A20D03A8690115ED857E212F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJwtDecoder_Decode_TisAccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2_mD58CBC228355996B39EE665EDE151FEDC492C843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkHandler_GetAsync_TisPlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0_m9ABB549F75353E21648FB8FDB54A1B6974AFBD0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkHandler_GetAsync_TisWellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53_m1258C9130EE1E1A59653DFF7ED6E8971762A0FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkHandler_PostAsync_TisLinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906_mC45FE1F6571B930FDF21D85EF2CA76B370DF1088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkHandler_PostAsync_TisSignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47_m24508BC04ADFECCFF57679DA455DD86E0A9438AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkHandler_PostAsync_TisSignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47_mAB6175AF963442741838135C703AE5FA0F837B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkHandler_PostAsync_TisUnlinkResponse_t80C024EBE33CD7796AF31678A9E1B74310470A42_m686DE02A43DF9DD33EDDBC6D5F7DB27629A9F033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisAuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60_mC35D891E227932756452089D21C8A47B2D0D97B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCD00F1B7ADB5DD51ECCF4368FC3C7BC19F82C26D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m8071673D592663097502C753907516AD8D21F3CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_m92FB9A5AD00EC600689E7639649C657D914201A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m52F4A975C42915C5DC0F4F7EEFB18E946C395DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m59F70C7F70B91733E854738A7782BB43B9A0545C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m5E3DB01E1F090BC3BE1E239557E9ACD2DBD96A98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m900445EF0BA9E193D971D03872CB6EAE688522F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB50DCCDA4AF1B47C765FBC38635CC69FAE15A956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mED34CE99F995342158E9B5A58FBEAD45336BE646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m09490AAD567DF934ADF2040B170E30400A812858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m237D08FD16AABB0A8D004C66AED4AF6325CD2BE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m5A140255D9EF944711E5BBE52CE37C01759B5A7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m7D1C4A1DF6B50479DAD3A2260984FBCE5A5A09B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mB3586BFE7B513E23F4EAFB9DB6E1C957803B123B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m020FD194A6421B6AB9EDCC03AE5F3D5F718AF4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m15484C5037E3A72ABF3CFF89CDFCDB5D8A9166E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m4249DDE868F4CDBDEB096D1418125B6D8C4555C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m99798B036655C6194E8363799F40F122CBCD0376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mFCA9B7DC93BA8A14B4354C3CE210F8480CC96A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeleteAccountAsyncU3Ed__91_MoveNext_mBFB546084A963A7FFBBC86310CCBEB20C7969F84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetPlayerInfoAsyncU3Ed__95_MoveNext_m644A27C23CE923268CAC21DBE4DCB7AF26C62EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHandleSignInRequestAsyncU3Ed__101_MoveNext_m0A9FB37866BC38785342FA62F2DF3BB9E6DCFF6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLinkWithExternalTokenAsyncU3Ed__98_MoveNext_m32C2F9FE4AB15AC512136C3C1D79FBDAE6D9CD37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCompleteSignInU3Eb__103_0_mB59CBC57A89EB9A3DB6948232CB5F3444573652D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CSendAttemptAsyncU3Eb__0_m96DAC543113DCBB315F5BD4F982DD9FCF8D81743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CGetIdentityIdU3Eb__0_m7E498EA635AE41B50A6BCB9E5129B4AF61B89DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CRemoveIdentityU3Eb__0_mCC93078F1D4B8792356033544EE0AC40C88EEB38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass75_0_U3CSignInAnonymouslyAsyncU3Eb__0_m440B2B066D68CEB79DEB3DEB75153F922A64C4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass97_0_U3CSignInWithExternalTokenAsyncU3Eb__0_m07A4442E08A0997C3275D7786DCBEC910A631001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass98_0_U3CLinkWithExternalTokenAsyncU3Eb__0_mA5F5E10E43D4894EC3FC94CD4C0716BB9CB8ECB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUnlinkExternalTokenAsyncU3Ed__99_MoveNext_m719C5850F8239F8A7F87F9785F4B8FC2E0801647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequest_Build_mB8DB21CB3B5CE2CDF55E5EB82DAB28EC8084C966_RuntimeMethod_var;
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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3;
struct WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2AF2223AD514DA27E9C59F48F3CCB2A9083DB62A 
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

// System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity>
struct List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExternalIdentityU5BU5D_t99ED49F7278B910B9B04E2F51815130033CAE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExternalIdentityU5BU5D_t99ED49F7278B910B9B04E2F51815130033CAE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Services.Authentication.Identity>
struct List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IdentityU5BU5D_t8B40949539FAAA2AD416EFCD70BA5121B9CCF846* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IdentityU5BU5D_t8B40949539FAAA2AD416EFCD70BA5121B9CCF846* ___s_emptyArray_5;
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

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ____task_0;
};

// Unity.Services.Authentication.AccessTokenExtraClaims
struct AccessTokenExtraClaims_tF775770014EAE151A0DC61549E18AFB6BF292F6C  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_1;
};

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct AsymmetricSignatureDeformatter_tBB96AAAC1F942F159021BF6815E4E9ED0AEB1F3B  : public RuntimeObject
{
};

// Unity.Services.Authentication.AuthenticationCache
struct AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C  : public RuntimeObject
{
	// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Authentication.AuthenticationCache::m_CloudProjectId
	RuntimeObject* ___m_CloudProjectId_0;
	// Unity.Services.Authentication.IProfile Unity.Services.Authentication.AuthenticationCache::m_Profile
	RuntimeObject* ___m_Profile_1;
};

// Unity.Services.Authentication.AuthenticationErrorCodes
struct AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1  : public RuntimeObject
{
};

struct AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields
{
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::MinValue
	int32_t ___MinValue_0;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::ClientInvalidUserState
	int32_t ___ClientInvalidUserState_1;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::ClientNoActiveSession
	int32_t ___ClientNoActiveSession_2;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::InvalidParameters
	int32_t ___InvalidParameters_3;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::AccountAlreadyLinked
	int32_t ___AccountAlreadyLinked_4;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::AccountLinkLimitExceeded
	int32_t ___AccountLinkLimitExceeded_5;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::ClientUnlinkExternalIdNotFound
	int32_t ___ClientUnlinkExternalIdNotFound_6;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::ClientInvalidProfile
	int32_t ___ClientInvalidProfile_7;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::InvalidSessionToken
	int32_t ___InvalidSessionToken_8;
};

// Unity.Services.Authentication.AuthenticationErrorResponse
struct AuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.AuthenticationErrorResponse::Title
	String_t* ___Title_0;
	// System.String Unity.Services.Authentication.AuthenticationErrorResponse::Detail
	String_t* ___Detail_1;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorResponse::Status
	int32_t ___Status_2;
};

// Unity.Services.Authentication.AuthenticationExtensions
struct AuthenticationExtensions_tE6527AC3EDC8459E7A5533CCE066C9F1C38DE7BC  : public RuntimeObject
{
};

// Unity.Services.Authentication.AuthenticationMetrics
struct AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A  : public RuntimeObject
{
	// Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Authentication.AuthenticationMetrics::m_Metrics
	RuntimeObject* ___m_Metrics_6;
};

// Unity.Services.Authentication.AuthenticationNetworkClient
struct AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8  : public RuntimeObject
{
	// Unity.Services.Authentication.AccessTokenComponent Unity.Services.Authentication.AuthenticationNetworkClient::<AccessTokenComponent>k__BackingField
	AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* ___U3CAccessTokenComponentU3Ek__BackingField_7;
	// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Authentication.AuthenticationNetworkClient::<CloudProjectIdComponent>k__BackingField
	RuntimeObject* ___U3CCloudProjectIdComponentU3Ek__BackingField_8;
	// Unity.Services.Core.Environments.Internal.IEnvironments Unity.Services.Authentication.AuthenticationNetworkClient::<EnvironmentComponent>k__BackingField
	RuntimeObject* ___U3CEnvironmentComponentU3Ek__BackingField_9;
	// Unity.Services.Authentication.INetworkHandler Unity.Services.Authentication.AuthenticationNetworkClient::<NetworkHandler>k__BackingField
	RuntimeObject* ___U3CNetworkHandlerU3Ek__BackingField_10;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_WellKnownUrl
	String_t* ___m_WellKnownUrl_11;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_AnonymousUrl
	String_t* ___m_AnonymousUrl_12;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_SessionTokenUrl
	String_t* ___m_SessionTokenUrl_13;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_ExternalTokenUrl
	String_t* ___m_ExternalTokenUrl_14;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_LinkExternalTokenUrl
	String_t* ___m_LinkExternalTokenUrl_15;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_UnlinkExternalTokenUrl
	String_t* ___m_UnlinkExternalTokenUrl_16;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_UsersUrl
	String_t* ___m_UsersUrl_17;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::m_CommonHeaders
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_CommonHeaders_18;
};

// Unity.Services.Authentication.AuthenticationPackageInitializer
struct AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E  : public RuntimeObject
{
};

// Unity.Services.Authentication.AuthenticationService
struct AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34  : public RuntimeObject
{
};

struct AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_StaticFields
{
	// Unity.Services.Authentication.IAuthenticationService Unity.Services.Authentication.AuthenticationService::s_Instance
	RuntimeObject* ___s_Instance_0;
};

// Unity.Services.Authentication.AuthenticationSettings
struct AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947  : public RuntimeObject
{
	// System.Int32 Unity.Services.Authentication.AuthenticationSettings::<AccessTokenRefreshBuffer>k__BackingField
	int32_t ___U3CAccessTokenRefreshBufferU3Ek__BackingField_3;
	// System.Int32 Unity.Services.Authentication.AuthenticationSettings::<AccessTokenExpiryBuffer>k__BackingField
	int32_t ___U3CAccessTokenExpiryBufferU3Ek__BackingField_4;
	// System.Int32 Unity.Services.Authentication.AuthenticationSettings::<RefreshAttemptFrequency>k__BackingField
	int32_t ___U3CRefreshAttemptFrequencyU3Ek__BackingField_5;
};

// Unity.Services.Authentication.BaseJwt
struct BaseJwt_tE235418FE84895C61012E458A93D98F334B1F8EF  : public RuntimeObject
{
	// System.Int32 Unity.Services.Authentication.BaseJwt::ExpirationTimeUnix
	int32_t ___ExpirationTimeUnix_0;
	// System.Int32 Unity.Services.Authentication.BaseJwt::IssuedAtTimeUnix
	int32_t ___IssuedAtTimeUnix_1;
	// System.Int32 Unity.Services.Authentication.BaseJwt::NotBeforeTimeUnix
	int32_t ___NotBeforeTimeUnix_2;
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// Unity.Services.Authentication.Models.Compatibility
struct Compatibility_tD9AEEA2924AC3C375D9E8712E711C8FDF85AC04E  : public RuntimeObject
{
};

// Unity.Services.Authentication.Utilities.Compatibility
struct Compatibility_tFA1E59ED80B83C1E7B88589F69BBA1039539E520  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA  : public RuntimeObject
{
	// System.String Unity.Services.Core.Internal.CoreRegistry::<InstanceId>k__BackingField
	String_t* ___U3CInstanceIdU3Ek__BackingField_1;
	// Unity.Services.Core.ServicesType Unity.Services.Core.Internal.CoreRegistry::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.CoreRegistry::<Options>k__BackingField
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___U3COptionsU3Ek__BackingField_3;
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::<PackageRegistry>k__BackingField
	RuntimeObject* ___U3CPackageRegistryU3Ek__BackingField_4;
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::<ComponentRegistry>k__BackingField
	RuntimeObject* ___U3CComponentRegistryU3Ek__BackingField_5;
	// Unity.Services.Core.Internal.IServiceRegistry Unity.Services.Core.Internal.CoreRegistry::<ServiceRegistry>k__BackingField
	RuntimeObject* ___U3CServiceRegistryU3Ek__BackingField_6;
};

struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields
{
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::<Instance>k__BackingField
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___U3CInstanceU3Ek__BackingField_0;
};

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};

struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;
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

// Unity.Services.Authentication.EnvironmentIdComponent
struct EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.EnvironmentIdComponent::<EnvironmentId>k__BackingField
	String_t* ___U3CEnvironmentIdU3Ek__BackingField_0;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Unity.Services.Authentication.ExternalIdentity
struct ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.ExternalIdentity::ProviderId
	String_t* ___ProviderId_0;
	// System.String Unity.Services.Authentication.ExternalIdentity::ExternalId
	String_t* ___ExternalId_1;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// Unity.Services.Authentication.HttpUtilities
struct HttpUtilities_t90C860DD4E66406616C61C748595044E8898499D  : public RuntimeObject
{
};

// Unity.Services.Authentication.IdProviderKeys
struct IdProviderKeys_t80E54719D3F62CA53BA2D73D121BB93901404C33  : public RuntimeObject
{
};

// Unity.Services.Authentication.Identity
struct Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.Identity::TypeId
	String_t* ___TypeId_0;
	// System.String Unity.Services.Authentication.Identity::UserId
	String_t* ___UserId_1;
};

// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::<Values>k__BackingField
	RuntimeObject* ___U3CValuesU3Ek__BackingField_0;
};

// Unity.Services.Authentication.LinkOptions
struct LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72  : public RuntimeObject
{
	// System.Boolean Unity.Services.Authentication.LinkOptions::<ForceLink>k__BackingField
	bool ___U3CForceLinkU3Ek__BackingField_0;
};

// Unity.Services.Authentication.LinkResponse
struct LinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906  : public RuntimeObject
{
	// Unity.Services.Authentication.User Unity.Services.Authentication.LinkResponse::User
	User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* ___User_0;
};

// Unity.Services.Authentication.LinkWithExternalTokenRequest
struct LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.LinkWithExternalTokenRequest::IdProvider
	String_t* ___IdProvider_0;
	// System.String Unity.Services.Authentication.LinkWithExternalTokenRequest::Token
	String_t* ___Token_1;
	// System.Boolean Unity.Services.Authentication.LinkWithExternalTokenRequest::ForceLink
	bool ___ForceLink_2;
};

// Unity.Services.Authentication.Logger
struct Logger_t7FA0C9BA18B03A8D9343D9501FAF52781F6866E0  : public RuntimeObject
{
};

// Unity.Services.Authentication.NetworkConfiguration
struct NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4  : public RuntimeObject
{
	// System.Int32 Unity.Services.Authentication.NetworkConfiguration::<Retries>k__BackingField
	int32_t ___U3CRetriesU3Ek__BackingField_2;
	// System.Int32 Unity.Services.Authentication.NetworkConfiguration::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_3;
};

// Unity.Services.Authentication.NetworkHandler
struct NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360  : public RuntimeObject
{
	// Unity.Services.Authentication.INetworkConfiguration Unity.Services.Authentication.NetworkHandler::<Configuration>k__BackingField
	RuntimeObject* ___U3CConfigurationU3Ek__BackingField_0;
};

// Unity.Services.Authentication.PlayerIdComponent
struct PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19  : public RuntimeObject
{
	// System.Action`1<System.String> Unity.Services.Authentication.PlayerIdComponent::PlayerIdChanged
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___PlayerIdChanged_1;
	// Unity.Services.Authentication.IAuthenticationCache Unity.Services.Authentication.PlayerIdComponent::m_Cache
	RuntimeObject* ___m_Cache_2;
};

// Unity.Services.Authentication.PlayerInfoResponse
struct PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.PlayerInfoResponse::Id
	String_t* ___Id_0;
	// System.String Unity.Services.Authentication.PlayerInfoResponse::CreatedAt
	String_t* ___CreatedAt_1;
	// System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity> Unity.Services.Authentication.PlayerInfoResponse::ExternalIds
	List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* ___ExternalIds_2;
};

// Unity.Services.Authentication.ProfileComponent
struct ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3  : public RuntimeObject
{
	// System.Action`1<Unity.Services.Authentication.ProfileEventArgs> Unity.Services.Authentication.ProfileComponent::ProfileChange
	Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* ___ProfileChange_0;
	// System.String Unity.Services.Authentication.ProfileComponent::_current
	String_t* ____current_1;
};

// Unity.Services.Authentication.SessionTokenComponent
struct SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612  : public RuntimeObject
{
	// Unity.Services.Authentication.IAuthenticationCache Unity.Services.Authentication.SessionTokenComponent::m_Cache
	RuntimeObject* ___m_Cache_1;
};

// Unity.Services.Authentication.SessionTokenRequest
struct SessionTokenRequest_t9C89923BD817D8F5D559572738BC39BC3E12ADFB  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.SessionTokenRequest::SessionToken
	String_t* ___SessionToken_0;
};

// Unity.Services.Authentication.SignInOptions
struct SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291  : public RuntimeObject
{
	// System.Boolean Unity.Services.Authentication.SignInOptions::<CreateAccount>k__BackingField
	bool ___U3CCreateAccountU3Ek__BackingField_0;
};

// Unity.Services.Authentication.SignInResponse
struct SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.SignInResponse::UserId
	String_t* ___UserId_0;
	// System.String Unity.Services.Authentication.SignInResponse::IdToken
	String_t* ___IdToken_1;
	// System.String Unity.Services.Authentication.SignInResponse::SessionToken
	String_t* ___SessionToken_2;
	// System.Int32 Unity.Services.Authentication.SignInResponse::ExpiresIn
	int32_t ___ExpiresIn_3;
	// Unity.Services.Authentication.User Unity.Services.Authentication.SignInResponse::User
	User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* ___User_4;
};

// Unity.Services.Authentication.SignInWithExternalTokenRequest
struct SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.SignInWithExternalTokenRequest::IdProvider
	String_t* ___IdProvider_0;
	// System.String Unity.Services.Authentication.SignInWithExternalTokenRequest::Token
	String_t* ___Token_1;
	// System.Boolean Unity.Services.Authentication.SignInWithExternalTokenRequest::SignInOnly
	bool ___SignInOnly_2;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// Unity.Services.Authentication.UnlinkRequest
struct UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.UnlinkRequest::IdProvider
	String_t* ___IdProvider_0;
	// System.String Unity.Services.Authentication.UnlinkRequest::ExternalId
	String_t* ___ExternalId_1;
};

// Unity.Services.Authentication.UnlinkResponse
struct UnlinkResponse_t80C024EBE33CD7796AF31678A9E1B74310470A42  : public RuntimeObject
{
	// Unity.Services.Authentication.User Unity.Services.Authentication.UnlinkResponse::User
	User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* ___User_0;
};

// Unity.Services.Authentication.User
struct User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.User::Id
	String_t* ___Id_0;
	// System.String Unity.Services.Authentication.User::CreatedAt
	String_t* ___CreatedAt_1;
	// System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity> Unity.Services.Authentication.User::ExternalIds
	List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* ___ExternalIds_2;
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

// Unity.Services.Authentication.WebRequest
struct WebRequest_tE5622473581945D112800D97E1EB0E04D900D707  : public RuntimeObject
{
	// Unity.Services.Authentication.WebRequestVerb Unity.Services.Authentication.WebRequest::m_Verb
	int32_t ___m_Verb_0;
	// System.String Unity.Services.Authentication.WebRequest::m_Url
	String_t* ___m_Url_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Authentication.WebRequest::m_Headers
	RuntimeObject* ___m_Headers_2;
	// System.String Unity.Services.Authentication.WebRequest::m_Payload
	String_t* ___m_Payload_3;
	// System.String Unity.Services.Authentication.WebRequest::m_PayloadContentType
	String_t* ___m_PayloadContentType_4;
	// Unity.Services.Authentication.INetworkConfiguration Unity.Services.Authentication.WebRequest::<Configuration>k__BackingField
	RuntimeObject* ___U3CConfigurationU3Ek__BackingField_5;
	// System.Int32 Unity.Services.Authentication.WebRequest::<Retries>k__BackingField
	int32_t ___U3CRetriesU3Ek__BackingField_6;
};

// Unity.Services.Authentication.WellKnownKey
struct WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.WellKnownKey::Use
	String_t* ___Use_0;
	// System.String Unity.Services.Authentication.WellKnownKey::KeyType
	String_t* ___KeyType_1;
	// System.String Unity.Services.Authentication.WellKnownKey::KeyId
	String_t* ___KeyId_2;
	// System.String Unity.Services.Authentication.WellKnownKey::Algorithm
	String_t* ___Algorithm_3;
	// System.String Unity.Services.Authentication.WellKnownKey::N
	String_t* ___N_4;
	// System.String Unity.Services.Authentication.WellKnownKey::E
	String_t* ___E_5;
};

// Unity.Services.Authentication.WellKnownKeysComponent
struct WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB  : public RuntimeObject
{
	// Unity.Services.Authentication.WellKnownKey[] Unity.Services.Authentication.WellKnownKeysComponent::<Keys>k__BackingField
	WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* ___U3CKeysU3Ek__BackingField_0;
};

// Unity.Services.Authentication.WellKnownKeysResponse
struct WellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53  : public RuntimeObject
{
	// Unity.Services.Authentication.WellKnownKey[] Unity.Services.Authentication.WellKnownKeysResponse::Keys
	WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* ___Keys_0;
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

// Unity.Services.Authentication.AuthenticationServiceInternal/<>c
struct U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A  : public RuntimeObject
{
};

struct U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_StaticFields
{
	// Unity.Services.Authentication.AuthenticationServiceInternal/<>c Unity.Services.Authentication.AuthenticationServiceInternal/<>c::<>9
	U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A* ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> Unity.Services.Authentication.AuthenticationServiceInternal/<>c::<>9__103_0
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__103_0_1;
};

// Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass75_0
struct U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243  : public RuntimeObject
{
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass75_0::<>4__this
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* ___U3CU3E4__this_0;
	// System.String Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass75_0::sessionToken
	String_t* ___sessionToken_1;
};

// Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass97_0
struct U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9  : public RuntimeObject
{
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass97_0::<>4__this
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* ___U3CU3E4__this_0;
	// System.String Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass97_0::idProvider
	String_t* ___idProvider_1;
	// Unity.Services.Authentication.SignInWithExternalTokenRequest Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass97_0::request
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* ___request_2;
};

// Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass98_0
struct U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12  : public RuntimeObject
{
	// Unity.Services.Authentication.LinkWithExternalTokenRequest Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass98_0::request
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* ___request_0;
};

// Unity.Services.Authentication.NetworkHandler/ContentType
struct ContentType_t89F0EEDD9421B105931E30A394AB63FEFA4C0B8E  : public RuntimeObject
{
};

// Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass17_0::typeId
	String_t* ___typeId_0;
};

// Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass19_0::typeId
	String_t* ___typeId_0;
};

// Unity.Services.Authentication.WebRequest/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6  : public RuntimeObject
{
	// Unity.Services.Authentication.WebRequest Unity.Services.Authentication.WebRequest/<>c__DisplayClass15_0::<>4__this
	WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.String> Unity.Services.Authentication.WebRequest/<>c__DisplayClass15_0::tcs
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* ___tcs_1;
	// UnityEngine.Networking.UnityWebRequest Unity.Services.Authentication.WebRequest/<>c__DisplayClass15_0::request
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request_2;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Authentication.ExternalIdentity>
struct Enumerator_tC97273875AC63C7CA57A10E9BEEF62AD638E6E3A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* ____current_3;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
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

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.LinkResponse>
struct TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t9E83749FC41A9417AE7750D513EAF8D13F206641* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.PlayerInfoResponse>
struct TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tBDE11C6723E9E78F3C214C00A13E580F96A87EB7* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse>
struct TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.UnlinkResponse>
struct TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tCF64ADEDCC5E52FD1B2D04A05A32E30D604CBFAC* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.WellKnownKeysResponse>
struct TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA10499A2609A86CF8EDB1C3D8BA6CF2911B896E5* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Unity.Services.Authentication.LinkResponse>
struct Task_1_t9E83749FC41A9417AE7750D513EAF8D13F206641  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	LinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906* ___m_result_38;
};

struct Task_1_t9E83749FC41A9417AE7750D513EAF8D13F206641_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tDE77931C580B0D024637C0350B9D53F1E8870B5A* ___s_defaultFactory_39;
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

// System.Threading.Tasks.Task`1<Unity.Services.Authentication.PlayerInfo>
struct Task_1_t21DAACEAA1083EAA8F411BB4BB8B70E2F7806104  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* ___m_result_38;
};

struct Task_1_t21DAACEAA1083EAA8F411BB4BB8B70E2F7806104_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t8E3F13A083E0F6C3F6D318E78F94BD7E31C67ED2* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Unity.Services.Authentication.PlayerInfoResponse>
struct Task_1_tBDE11C6723E9E78F3C214C00A13E580F96A87EB7  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* ___m_result_38;
};

struct Task_1_tBDE11C6723E9E78F3C214C00A13E580F96A87EB7_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t759661C223D45F412AA8A7D87727D5AC1D7C1F43* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>
struct Task_1_tAF51175714E424A84783635B14DBF49E6F558D42  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* ___m_result_38;
};

struct Task_1_tAF51175714E424A84783635B14DBF49E6F558D42_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t04EECEA335453F4EA391D508998281328AB75390* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Unity.Services.Authentication.UnlinkResponse>
struct Task_1_tCF64ADEDCC5E52FD1B2D04A05A32E30D604CBFAC  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	UnlinkResponse_t80C024EBE33CD7796AF31678A9E1B74310470A42* ___m_result_38;
};

struct Task_1_tCF64ADEDCC5E52FD1B2D04A05A32E30D604CBFAC_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t50597DE47B9F8ED25487126D85178B5E205B7844* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Unity.Services.Authentication.WellKnownKeysResponse>
struct Task_1_tA10499A2609A86CF8EDB1C3D8BA6CF2911B896E5  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	WellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53* ___m_result_38;
};

struct Task_1_tA10499A2609A86CF8EDB1C3D8BA6CF2911B896E5_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t4C81F086555D4994056FF34E0BCB7865F52A1189* ___s_defaultFactory_39;
};

// Unity.Services.Authentication.AccessToken
struct AccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2  : public BaseJwt_tE235418FE84895C61012E458A93D98F334B1F8EF
{
	// System.String[] Unity.Services.Authentication.AccessToken::Audience
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Audience_3;
	// System.String Unity.Services.Authentication.AccessToken::ClientId
	String_t* ___ClientId_4;
	// Unity.Services.Authentication.AccessTokenExtraClaims Unity.Services.Authentication.AccessToken::Extra
	AccessTokenExtraClaims_tF775770014EAE151A0DC61549E18AFB6BF292F6C* ___Extra_5;
	// System.String Unity.Services.Authentication.AccessToken::Issuer
	String_t* ___Issuer_6;
	// System.String Unity.Services.Authentication.AccessToken::JwtId
	String_t* ___JwtId_7;
	// System.String Unity.Services.Authentication.AccessToken::ProjectId
	String_t* ___ProjectId_8;
	// System.String[] Unity.Services.Authentication.AccessToken::Scope
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Scope_9;
	// System.String Unity.Services.Authentication.AccessToken::Subject
	String_t* ___Subject_10;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistration::m_Registry
	RuntimeObject* ___m_Registry_0;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistration::m_PackageHash
	int32_t ___m_PackageHash_1;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
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

// Unity.Services.Authentication.ProfileEventArgs
struct ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String Unity.Services.Authentication.ProfileEventArgs::<Profile>k__BackingField
	String_t* ___U3CProfileU3Ek__BackingField_1;
};

// System.Security.Cryptography.RSA
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t3B1E70B8DA929C184C7599B50FB8DD4BF5CA7CB3  : public AsymmetricSignatureDeformatter_tBB96AAAC1F942F159021BF6815E4E9ED0AEB1F3B
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;
};

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF 
{
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Exponent_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Modulus_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Q_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DP_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InverseQ_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___D_7;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};

// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.PlayerInfo>
struct AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t21DAACEAA1083EAA8F411BB4BB8B70E2F7806104* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t21DAACEAA1083EAA8F411BB4BB8B70E2F7806104* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
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

// Unity.Services.Authentication.AuthenticationServiceInternal
struct AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B  : public RuntimeObject
{
	// System.Action`1<Unity.Services.Core.RequestFailedException> Unity.Services.Authentication.AuthenticationServiceInternal::SignInFailed
	Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* ___SignInFailed_1;
	// System.Action Unity.Services.Authentication.AuthenticationServiceInternal::SignedIn
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___SignedIn_2;
	// System.Action Unity.Services.Authentication.AuthenticationServiceInternal::SignedOut
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___SignedOut_3;
	// System.Action Unity.Services.Authentication.AuthenticationServiceInternal::Expired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Expired_4;
	// Unity.Services.Authentication.PlayerInfo Unity.Services.Authentication.AuthenticationServiceInternal::<PlayerInfo>k__BackingField
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* ___U3CPlayerInfoU3Ek__BackingField_5;
	// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::<ExpirationActionId>k__BackingField
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CExpirationActionIdU3Ek__BackingField_6;
	// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::<RefreshActionId>k__BackingField
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CRefreshActionIdU3Ek__BackingField_7;
	// Unity.Services.Authentication.AccessTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::<AccessTokenComponent>k__BackingField
	AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* ___U3CAccessTokenComponentU3Ek__BackingField_8;
	// Unity.Services.Authentication.EnvironmentIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::<EnvironmentIdComponent>k__BackingField
	EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* ___U3CEnvironmentIdComponentU3Ek__BackingField_9;
	// Unity.Services.Authentication.PlayerIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::<PlayerIdComponent>k__BackingField
	PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* ___U3CPlayerIdComponentU3Ek__BackingField_10;
	// Unity.Services.Authentication.SessionTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::<SessionTokenComponent>k__BackingField
	SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* ___U3CSessionTokenComponentU3Ek__BackingField_11;
	// Unity.Services.Authentication.WellKnownKeysComponent Unity.Services.Authentication.AuthenticationServiceInternal::<WellKnownKeysComponent>k__BackingField
	WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* ___U3CWellKnownKeysComponentU3Ek__BackingField_12;
	// Unity.Services.Authentication.AuthenticationState Unity.Services.Authentication.AuthenticationServiceInternal::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_13;
	// Unity.Services.Authentication.IAuthenticationSettings Unity.Services.Authentication.AuthenticationServiceInternal::<Settings>k__BackingField
	RuntimeObject* ___U3CSettingsU3Ek__BackingField_14;
	// Unity.Services.Authentication.IAuthenticationNetworkClient Unity.Services.Authentication.AuthenticationServiceInternal::<NetworkClient>k__BackingField
	RuntimeObject* ___U3CNetworkClientU3Ek__BackingField_15;
	// Unity.Services.Authentication.IProfile Unity.Services.Authentication.AuthenticationServiceInternal::m_Profile
	RuntimeObject* ___m_Profile_16;
	// Unity.Services.Authentication.IJwtDecoder Unity.Services.Authentication.AuthenticationServiceInternal::m_JwtDecoder
	RuntimeObject* ___m_JwtDecoder_17;
	// Unity.Services.Authentication.IAuthenticationCache Unity.Services.Authentication.AuthenticationServiceInternal::m_Cache
	RuntimeObject* ___m_Cache_18;
	// Unity.Services.Core.Scheduler.Internal.IActionScheduler Unity.Services.Authentication.AuthenticationServiceInternal::m_Scheduler
	RuntimeObject* ___m_Scheduler_19;
	// Unity.Services.Authentication.IDateTimeWrapper Unity.Services.Authentication.AuthenticationServiceInternal::m_DateTime
	RuntimeObject* ___m_DateTime_20;
	// Unity.Services.Authentication.IAuthenticationMetrics Unity.Services.Authentication.AuthenticationServiceInternal::m_Metrics
	RuntimeObject* ___m_Metrics_21;
	// System.Action`2<Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState> Unity.Services.Authentication.AuthenticationServiceInternal::StateChanged
	Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* ___StateChanged_22;
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

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
};

// Unity.Services.Authentication.DateTimeWrapper
struct DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA  : public RuntimeObject
{
};

struct DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA_StaticFields
{
	// System.DateTime Unity.Services.Authentication.DateTimeWrapper::k_UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___k_UnixEpoch_0;
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

// Unity.Services.Authentication.JwtDecoder
struct JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484  : public RuntimeObject
{
	// Unity.Services.Authentication.IDateTimeWrapper Unity.Services.Authentication.JwtDecoder::m_DateTime
	RuntimeObject* ___m_DateTime_2;
};

struct JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484_StaticFields
{
	// System.DateTime Unity.Services.Authentication.JwtDecoder::k_UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___k_UnixEpoch_0;
	// System.Char[] Unity.Services.Authentication.JwtDecoder::k_JwtSeparator
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_JwtSeparator_1;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t897B29EF76C459408E11A42680C942716D809001* ___rsa_8;
};

struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_StaticFields
{
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;
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

// Unity.Services.Authentication.AccessTokenComponent
struct AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.AccessTokenComponent::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_0;
	// System.Nullable`1<System.DateTime> Unity.Services.Authentication.AccessTokenComponent::<ExpiryTime>k__BackingField
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___U3CExpiryTimeU3Ek__BackingField_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
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

// Newtonsoft.Json.JsonException
struct JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD  : public Exception_t
{
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

// Unity.Services.Authentication.PlayerInfo
struct PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.PlayerInfo::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.Nullable`1<System.DateTime> Unity.Services.Authentication.PlayerInfo::<CreatedAt>k__BackingField
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___U3CCreatedAtU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<Unity.Services.Authentication.Identity> Unity.Services.Authentication.PlayerInfo::<Identities>k__BackingField
	List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* ___U3CIdentitiesU3Ek__BackingField_2;
};

// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00  : public Exception_t
{
	// System.Int32 Unity.Services.Core.RequestFailedException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// Unity.Services.Authentication.WebRequestException
struct WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF  : public Exception_t
{
	// System.Boolean Unity.Services.Authentication.WebRequestException::<NetworkError>k__BackingField
	bool ___U3CNetworkErrorU3Ek__BackingField_18;
	// System.Boolean Unity.Services.Authentication.WebRequestException::<DeserializationError>k__BackingField
	bool ___U3CDeserializationErrorU3Ek__BackingField_19;
	// System.Boolean Unity.Services.Authentication.WebRequestException::<ServerError>k__BackingField
	bool ___U3CServerErrorU3Ek__BackingField_20;
	// System.Int64 Unity.Services.Authentication.WebRequestException::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_21;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Authentication.WebRequestException::<ResponseHeaders>k__BackingField
	RuntimeObject* ___U3CResponseHeadersU3Ek__BackingField_22;
};

// Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95
struct U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A 
{
	// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.PlayerInfo> Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95::<>t__builder
	AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018 ___U3CU3Et__builder_1;
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95::<>4__this
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.PlayerInfoResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95::<>u__1
	TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E ___U3CU3Eu__1_3;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.Services.Authentication.ProfileEventArgs>
struct Action_1_t211056316F21C506A70C119B6DFC60079C04E01F  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.Services.Core.RequestFailedException>
struct Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`2<Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState>
struct Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2  : public MulticastDelegate_t
{
};

// System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>
struct Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Authentication.ExternalIdentity,System.Boolean>
struct Func_2_tF1A3CF1FD4E05A03E8BD9749B7FFA5CB5EF63C96  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Authentication.Identity,System.Boolean>
struct Func_2_tD767167733C46D4FDC8AFD23616D4D56100D1379  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D  : public MulticastDelegate_t
{
};

// System.Predicate`1<Unity.Services.Authentication.Identity>
struct Predicate_1_t4BBF8DE16E02FEEB9FE9EC49F8614C8D90FB8E4B  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Unity.Services.Authentication.AuthenticationException
struct AuthenticationException_tB035991B8F9E6DDB3E6EF7D5829B4C7E4E677FB3  : public RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00
{
};

// Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91
struct U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8 
{
	// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91::<>4__this
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96
struct U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730 
{
	// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96::<>4__this
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.WellKnownKeysResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96::<>u__1
	TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4 ___U3CU3Eu__1_3;
};

// Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101
struct U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159 
{
	// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::<>4__this
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* ___U3CU3E4__this_2;
	// System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>> Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::signInRequest
	Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B* ___signInRequest_3;
	// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::enableRefresh
	bool ___enableRefresh_4;
	// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::<signinRequestTask>5__2
	Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* ___U3CsigninRequestTaskU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::<>u__2
	TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 ___U3CU3Eu__2_7;
};

// Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98
struct U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC 
{
	// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Authentication.LinkWithExternalTokenRequest Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98::request
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* ___request_2;
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98::<>4__this
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* ___U3CU3E4__this_3;
	// System.String Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98::idProvider
	String_t* ___idProvider_4;
	// Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass98_0 Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98::<>8__1
	U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12* ___U3CU3E8__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.LinkResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98::<>u__1
	TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45 ___U3CU3Eu__1_6;
};

// Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102
struct U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE 
{
	// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102::<>4__this
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* ___U3CU3E4__this_2;
	// System.String Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102::sessionToken
	String_t* ___sessionToken_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102::<>u__1
	TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 ___U3CU3Eu__1_4;
};

// Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99
struct U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7 
{
	// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99::<>4__this
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* ___U3CU3E4__this_2;
	// System.String Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99::idProvider
	String_t* ___idProvider_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.UnlinkResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99::<>u__1
	TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6 ___U3CU3Eu__1_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Services.Authentication.WellKnownKey[]
struct WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273  : public RuntimeArray
{
	ALIGN_FIELD (8) WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* m_Items[1];

	inline WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* m_Items[1];

	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_mADF80608E3A9D685AB8AB78D160E81B7EFCCE298_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_m0063002821DF16495DCC440FB0ECE49350A9F264_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_m6B01815C9ABE00AB7E4E02B151A0150A40D613C6_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mC98A209C02DCC6A42893CE31542167CDB6F5BB81_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m5620F32435B96B0412BB65811A7435D953C6C857_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_m44C076FE6E399D9BEA929054566B1562F21B542A_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_mE735C9DF1B1F955105A16E05113F327B19D7EDF5_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.DateTime>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Int32Enum>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mF6BE8B768C3DA33BE3281D8F143C0FB02E720366_gshared_inline (Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_m93FF5531F817E0F4C1C4DBF3CAE66F5EBEA0E20F_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8* ___stateMachine1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_m40AF5496984AC73A87F637C73EAF98B467E4EA87_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_mB2F763855F302ADFA6F2208694C2027AF5CAC9BF_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mBCA98A655054AF24D5471CBECE97BC64C228C776_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m33800696D3FC2457E92DFE64C922BDAC77BF18B3_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mF813EEFD6E75C66C16FAC9EF4F7C989219D67B9C_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_m65004A2D71118C73C857EE9EDA00C4AD662B2C52_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_m4D4FC3712C4962D0250FE91814C42CEFF7B36845_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE* ___stateMachine1, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<System.Object>(TComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<System.Object>(TPackage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisRuntimeObject_m5DF8BA5ABD5476A91872308A910C81D92F1FC6DD_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___package0, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_m7DB7E6251CB92C741F7E081E2ECAA06FF79E212F_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;

// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// Unity.Services.Authentication.AuthenticationState Unity.Services.Authentication.AuthenticationServiceInternal::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.SessionTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_SessionTokenComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.SessionTokenComponent::get_SessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionTokenComponent_get_SessionToken_mFCD6A8E0CAC451180203F6D1F56C9EEBBF61DAFA (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// Unity.Services.Authentication.AccessTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_AccessTokenComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* AuthenticationServiceInternal_get_AccessTokenComponent_mA3669DE89749DFCFA04AE2A4DB47505AD55D248E_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AccessTokenComponent::get_AccessToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessTokenComponent_get_AccessToken_m70FC319ED7E39A53D5C17E775FD052D466F29ED8_inline (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.PlayerIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_PlayerIdComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* AuthenticationServiceInternal_get_PlayerIdComponent_mCB05A130C555F6DF00E4CBCD63A86DAACF9DF743_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.PlayerIdComponent::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerIdComponent_get_PlayerId_m3B26D7263EE5FF703A96397CA7F8359EFC2B3E63 (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_NetworkClient(Unity.Services.Authentication.IAuthenticationNetworkClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_NetworkClient_mAB5EE732963B22FE8D779546E8D7F00300BD6937_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_State(Unity.Services.Authentication.AuthenticationState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_State_mBE3362F5E6AAA06DA3D0D9CFA6CE38C5A5991FA1_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::MigrateCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_MigrateCache_mF2F36D8CA3F887DAAF9E3374A6DFCBF488958FAB (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::add_Expired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_add_Expired_m4897ECD3442AE5D00E39DF27CF8DDEF296AEE8B7 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass75_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0__ctor_m44EA04EE3D00C72C090EA74FED8E837477FDA4E4 (U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal::get_SessionTokenExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationServiceInternal_get_SessionTokenExists_mA2B8C4F770CF9D4D080D829C768885A1486D3F03 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientSessionTokenNotExistsException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationServiceInternal_BuildClientSessionTokenNotExistsException_mA320063CFD01D9F47CDD6CC2E9FF6132254A3345 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::SendSignInFailedEvent(Unity.Services.Core.RequestFailedException,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_SendSignInFailedEvent_mAC3544A54E02CF24D377A1DCC62FAB1288D360CD (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* ___exception0, bool ___forceSignOut1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_FromException_m7E03FBDDCA95F6577A18B1D1F708738734F63195 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m0398A1CA520FA7EAC7A83EF5F0F69F25581817FD (Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::HandleSignInRequestAsync(System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_HandleSignInRequestAsync_m3423F29240C8B4EBB2298864A1FEF3309298EE7D (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B* ___signInRequest0, bool ___enableRefresh1, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Authentication.SignInOptions::get_CreateAccount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SignInOptions_get_CreateAccount_m487DE1145466E4820534680E55CD209335908E02_inline (SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.IAuthenticationNetworkClient Unity.Services.Authentication.AuthenticationServiceInternal::get_NetworkClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientInvalidStateException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationServiceInternal_BuildClientInvalidStateException_mCE5ABCF38E7335CDF489B59B28413F031D52FCB7 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.SignInWithExternalTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInWithExternalTokenRequest__ctor_mBF7A476AF9D85BEDA4DD76A7DC5108A7BC74E82C (SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::SignInWithExternalTokenAsync(System.String,Unity.Services.Authentication.SignInWithExternalTokenRequest,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_SignInWithExternalTokenAsync_m821E9C1642EB0B5F30F6B58675E835275F38DD3C (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___idProvider0, SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* ___request1, bool ___enableRefresh2, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.LinkWithExternalTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkWithExternalTokenRequest__ctor_mC926C1E239309874F3E8594862352CD189407CE5 (LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Authentication.LinkOptions::get_ForceLink()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LinkOptions_get_ForceLink_m7091635AF7588667BF843D8AAFFBBDE3B4D3426F_inline (LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::LinkWithExternalTokenAsync(System.String,Unity.Services.Authentication.LinkWithExternalTokenRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_LinkWithExternalTokenAsync_mADEE06BFC252587421B771D9148D64AEEF3AE182 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___idProvider0, LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* ___request1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::UnlinkExternalTokenAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_UnlinkExternalTokenAsync_m5C2F9AC1CF447733FC51EE6BCA54C79910B5DF53 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___idProvider0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_mADF80608E3A9D685AB8AB78D160E81B7EFCCE298 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_mADF80608E3A9D685AB8AB78D160E81B7EFCCE298_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AccessTokenComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent_Clear_mEDC9FC08D14A8270968A106A7D72C43686DDD5F6 (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_PlayerInfo(Unity.Services.Authentication.PlayerInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_PlayerInfo_m7A68E82BD9D316E342DF5E3AECAF108EDD238EF4_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.SessionTokenComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_Clear_m8C8411835ADD425D4A042F2345BCCB60FD2B6351 (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.PlayerIdComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_Clear_m438DBB045CB0417378B50D1B5A1E5F2DD4FCFE4B (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CancelScheduledRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CancelScheduledRefresh_m0B29DB4688BAC73FE422A438F3E0F3497EACEFAC (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CancelScheduledExpiration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CancelScheduledExpiration_m557C0FF13043CED6124ED31DA2B58E6CB6C63481 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ChangeState(Unity.Services.Authentication.AuthenticationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ChangeState_m91558470DA842D246FA2DC42F92E8602E719A61F (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, int32_t ___newState0, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientInvalidProfileException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationServiceInternal_BuildClientInvalidProfileException_m30726F6D4F817B2231A5BC942B23EA4EEE073BC9 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.PlayerInfo>::Create()
inline AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018 AsyncTaskMethodBuilder_1_Create_m3B201A12EB2219BB0A173006EE63A9B6E246EA5B (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.PlayerInfo>::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_mBD41A694EEF9D7926A01145A2486BA19E72FDCA0 (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* __this, U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018*, U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_m0063002821DF16495DCC440FB0ECE49350A9F264_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.PlayerInfo>::get_Task()
inline Task_1_t21DAACEAA1083EAA8F411BB4BB8B70E2F7806104* AsyncTaskMethodBuilder_1_get_Task_m28A51CC5C3936DE084776A7B6C2EA27A66E8E44E (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t21DAACEAA1083EAA8F411BB4BB8B70E2F7806104* (*) (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_m6B01815C9ABE00AB7E4E02B151A0150A40D613C6 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_m6B01815C9ABE00AB7E4E02B151A0150A40D613C6_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass97_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass97_0__ctor_m26863091C75F9C18120797E2DBE8DDE1763AF4F4 (U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mC98A209C02DCC6A42893CE31542167CDB6F5BB81 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mC98A209C02DCC6A42893CE31542167CDB6F5BB81_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m5620F32435B96B0412BB65811A7435D953C6C857 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m5620F32435B96B0412BB65811A7435D953C6C857_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal::get_IsSignedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationServiceInternal_get_IsSignedIn_mCF8CDE17E3B5F2ACDCF556705C025DA48D5671FB (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::StartRefreshAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_StartRefreshAsync_mF7C17957ABBFE3DF4F5537880B7B4D4EBB9F56EC (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___sessionToken0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_m44C076FE6E399D9BEA929054566B1562F21B542A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_m44C076FE6E399D9BEA929054566B1562F21B542A_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_mE735C9DF1B1F955105A16E05113F327B19D7EDF5 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_mE735C9DF1B1F955105A16E05113F327B19D7EDF5_gshared)(__this, ___stateMachine0, method);
}
// Unity.Services.Authentication.WellKnownKeysComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_WellKnownKeysComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* AuthenticationServiceInternal_get_WellKnownKeysComponent_m7E533682E0EAD28DE9C952619AC74462C9C2CAAB_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.WellKnownKey[] Unity.Services.Authentication.WellKnownKeysComponent::get_Keys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* WellKnownKeysComponent_get_Keys_mE745732161F364314842C6DBC5B2D79A4D98656F_inline (WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationException::Create(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0 (int32_t ___errorCode0, String_t* ___message1, Exception_t* ___innerException2, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AccessTokenComponent::set_AccessToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessTokenComponent_set_AccessToken_m63F73183C53D3469EC2E8C6FD1862976D52916E8_inline (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Unity.Services.Authentication.EnvironmentIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_EnvironmentIdComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* AuthenticationServiceInternal_get_EnvironmentIdComponent_m195E0AFCC08E96FB3FB53F3258BF6FBB3B75036A_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184 (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline String_t* Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74 (RuntimeObject* ___source0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___predicate1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.EnvironmentIdComponent::set_EnvironmentId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnvironmentIdComponent_set_EnvironmentId_m530BC338835B82D9D4401F7FF7E23F36321F4808_inline (EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m1BEC1A7D6AC5383CCFC5186FA247449D0311F9CF (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, String_t* ___playerId0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(Unity.Services.Authentication.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m06C393A2C3EA9D14D3AD4BC996ADBD76BE07B97E (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* ___user0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.PlayerIdComponent::set_PlayerId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_set_PlayerId_mA274F8E83C33A5479A2AD42F3DDBF79E1DFE8EBC (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.SessionTokenComponent::set_SessionToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_set_SessionToken_m169A99C88E662C238FE756FBD44AC46C3C8D2904 (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Unity.Services.Authentication.IAuthenticationSettings Unity.Services.Authentication.AuthenticationServiceInternal::get_Settings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_Settings_mC9B9A3983876B35F9926EDE4132C902A6B3B9968_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
inline void Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_gshared)(__this, ___value0, method);
}
// System.Void Unity.Services.Authentication.AccessTokenComponent::set_ExpiryTime(System.Nullable`1<System.DateTime>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessTokenComponent_set_ExpiryTime_mCC7F031ADF1682401F64DF064612034E37A503B6_inline (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ScheduleRefresh(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ScheduleRefresh_mD999E01866FCCBAD4554819092ED652F12138760 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, double ___delay0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ScheduleExpiration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ScheduleExpiration_m80E7EB6B01CACC101D8E850F8E3FAD80F4AC1847 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, double ___delay0, const RuntimeMethod* method) ;
// System.Nullable`1<System.DateTime> Unity.Services.Authentication.AccessTokenComponent::get_ExpiryTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC AccessTokenComponent_get_ExpiryTime_mD432CAD7F2F305A36AA717226C651F4A67F420A6_inline (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.DateTime>::GetValueOrDefault()
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_gshared_inline)(__this, method);
}
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_LessThan_m2A02FFF5F35E33417FB32CB9F948769CA15AED17 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t21, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, int64_t, const RuntimeMethod*))Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared)(__this, ___value0, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_RefreshActionId(System.Nullable`1<System.Int64>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_RefreshActionId_mBF2A7072312F301BBC125EDFD4FDBF6A55FB7460_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_ExpirationActionId(System.Nullable`1<System.Int64>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_ExpirationActionId_m99D9F7A20AF618C1C9E9A35F879EA553648CD7D8_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::RefreshAccessTokenAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_RefreshAccessTokenAsync_m03EB449C187B6B0C62E0BAE40E38E96990FFC1BF (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::Expire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_Expire_m8C6099E18DC51230DE98008291F7C59CE4956593 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::get_RefreshActionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 AuthenticationServiceInternal_get_RefreshActionId_mE26972CCF62B936620DFDD885C954E1307AACACC_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int64>::get_Value()
inline int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared)(__this, method);
}
// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::get_ExpirationActionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 AuthenticationServiceInternal_get_ExpirationActionId_mBF3F9F53133B98D62D753B9CF11D561CC7809519_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.SessionTokenComponent::Migrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_Migrate_m270AD9D9556543733F170747713346F076210D86 (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::HandleStateChanged(Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_HandleStateChanged_mA91EB55BD7CB58B1D54CE9AFBF300671A11E5082 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method) ;
// System.Void System.Action`2<Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState>::Invoke(T1,T2)
inline void Action_2_Invoke_m5990E16EB63DD4F10939145AD950E5D0FB683630_inline (Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537*, int32_t, int32_t, const RuntimeMethod*))Action_2_Invoke_mF6BE8B768C3DA33BE3281D8F143C0FB02E720366_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Services.Core.RequestFailedException>::Invoke(T)
inline void Action_1_Invoke_mC5DAA9EF72C51CDD3FB0A88D333E75CD14ECC367_inline (Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* __this, RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860*, RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::SignOut(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_SignOut_m57F1EDE2B4ED5BAD2B115CC8706318E39848D18F (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, bool ___clearCredentials0, const RuntimeMethod* method) ;
// System.Int64 Unity.Services.Authentication.WebRequestException::get_ResponseCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t WebRequestException_get_ResponseCode_mD02CB7727ACF1A6EA570F1DDE88E544D54734F93_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Logger::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogError_m698CECF45EB6570E4C933F9EE19A5D85A9E09B34 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Authentication.WebRequestException::get_NetworkError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRequestException_get_NetworkError_m9819D76C20F277A2C1867EC658AAFBC8451CB39E_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Unity.Services.Authentication.AuthenticationErrorResponse>(System.String)
inline AuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60* JsonConvert_DeserializeObject_TisAuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60_mC35D891E227932756452089D21C8A47B2D0D97B7 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  AuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___value0, method);
}
// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal::MapErrorCodes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationServiceInternal_MapErrorCodes_m1FE3B73A74418ED6D15F6D340D6476224E748F38 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___serverErrorTitle0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal::get_IsAuthorized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationServiceInternal_get_IsAuthorized_m617D4F6C205F90145F46BA9C4069B3B9BC87CD8D (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AuthenticationServiceInternal::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationServiceInternal_get_PlayerId_mA599BD2E88C01DD4168B1A49BC193BF76CD471AA (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_m93FF5531F817E0F4C1C4DBF3CAE66F5EBEA0E20F (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_m93FF5531F817E0F4C1C4DBF3CAE66F5EBEA0E20F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildServerException(Unity.Services.Authentication.WebRequestException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationServiceInternal_BuildServerException_m147620948CDE089B104498197F891D221C9272AD (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAccountAsyncU3Ed__91_MoveNext_mBFB546084A963A7FFBBC86310CCBEB20C7969F84 (U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAccountAsyncU3Ed__91_SetStateMachine_mFBD67131B35BFCDBFA117489192CDEB08477BFA9 (U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Authentication.PlayerInfoResponse>::GetAwaiter()
inline TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E Task_1_GetAwaiter_m99798B036655C6194E8363799F40F122CBCD0376 (Task_1_tBDE11C6723E9E78F3C214C00A13E580F96A87EB7* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E (*) (Task_1_tBDE11C6723E9E78F3C214C00A13E580F96A87EB7*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.PlayerInfoResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m5A140255D9EF944711E5BBE52CE37C01759B5A7D (TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.PlayerInfo>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.PlayerInfoResponse>,Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_m42F558F962C27B8DAF3B01C3420D51B75F3FD765 (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* __this, TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E* ___awaiter0, U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018*, TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E*, U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_m40AF5496984AC73A87F637C73EAF98B467E4EA87_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.PlayerInfoResponse>::GetResult()
inline PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* TaskAwaiter_1_GetResult_mB50DCCDA4AF1B47C765FBC38635CC69FAE15A956 (TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E* __this, const RuntimeMethod* method)
{
	return ((  PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* (*) (TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(Unity.Services.Authentication.PlayerInfoResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m31B8A4058024774C355A60CC1DD3AB0D045B97EF (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* ___response0, const RuntimeMethod* method) ;
// Unity.Services.Authentication.PlayerInfo Unity.Services.Authentication.AuthenticationServiceInternal::get_PlayerInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* AuthenticationServiceInternal_get_PlayerInfo_m8B26511EDAA52A7C50EE4EFEBB5C31D6E904985A_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.PlayerInfo>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m546F35E194510D73D5248D5DDC4D1B870F696A6C (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.PlayerInfo>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m817589C18F4DB722F550FC51D945886BFDFF1209 (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* __this, PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018*, PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPlayerInfoAsyncU3Ed__95_MoveNext_m644A27C23CE923268CAC21DBE4DCB7AF26C62EB3 (U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.PlayerInfo>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m51F1971DB8396E427D87E22C5D95CDCB4AF2F05E (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPlayerInfoAsyncU3Ed__95_SetStateMachine_mECDB27CE7CE15B3230E25263EA03AC5FCBEC2FB9 (U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Authentication.WellKnownKeysResponse>::GetAwaiter()
inline TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4 Task_1_GetAwaiter_m4249DDE868F4CDBDEB096D1418125B6D8C4555C3 (Task_1_tA10499A2609A86CF8EDB1C3D8BA6CF2911B896E5* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4 (*) (Task_1_tA10499A2609A86CF8EDB1C3D8BA6CF2911B896E5*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.WellKnownKeysResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m09490AAD567DF934ADF2040B170E30400A812858 (TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.WellKnownKeysResponse>,Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_mE85FE900DE708EBB35DD55A0AB1D094B2FB95503 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4* ___awaiter0, U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4*, U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_mB2F763855F302ADFA6F2208694C2027AF5CAC9BF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.WellKnownKeysResponse>::GetResult()
inline WellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53* TaskAwaiter_1_GetResult_m5E3DB01E1F090BC3BE1E239557E9ACD2DBD96A98 (TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4* __this, const RuntimeMethod* method)
{
	return ((  WellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53* (*) (TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.WellKnownKeysComponent::set_Keys(Unity.Services.Authentication.WellKnownKey[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WellKnownKeysComponent_set_Keys_mD3986F1B3657510DB66DC2063261248E8A289621_inline (WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* __this, WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetWellKnownKeysAsyncU3Ed__96_MoveNext_mB53C5184808E3A67315CFE2A881C41F63D45D755 (U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetWellKnownKeysAsyncU3Ed__96_SetStateMachine_m401DEA2E35A5A8AD22790E51C1BA979E5A868EE9 (U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass98_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass98_0__ctor_m260B7B6416667E4FB6CB584B3454009CE533B2D2 (U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Authentication.LinkResponse>::GetAwaiter()
inline TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45 Task_1_GetAwaiter_m15484C5037E3A72ABF3CFF89CDFCDB5D8A9166E3 (Task_1_t9E83749FC41A9417AE7750D513EAF8D13F206641* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45 (*) (Task_1_t9E83749FC41A9417AE7750D513EAF8D13F206641*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.LinkResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mB3586BFE7B513E23F4EAFB9DB6E1C957803B123B (TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.LinkResponse>,Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mA88565A9568103B70BF3AE0136FC07B953E612EA (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45* ___awaiter0, U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45*, U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mBCA98A655054AF24D5471CBECE97BC64C228C776_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.LinkResponse>::GetResult()
inline LinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906* TaskAwaiter_1_GetResult_mED34CE99F995342158E9B5A58FBEAD45336BE646 (TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45* __this, const RuntimeMethod* method)
{
	return ((  LinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906* (*) (TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Func`2<Unity.Services.Authentication.ExternalIdentity,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF05FCD40134A5F6CDF00C19FC30588153F5A51B5 (Func_2_tF1A3CF1FD4E05A03E8BD9749B7FFA5CB5EF63C96* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF1A3CF1FD4E05A03E8BD9749B7FFA5CB5EF63C96*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<Unity.Services.Authentication.ExternalIdentity>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* Enumerable_FirstOrDefault_TisExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25_mC1EB28532368E7BFC761E3A566F6279A7214811B (RuntimeObject* ___source0, Func_2_tF1A3CF1FD4E05A03E8BD9749B7FFA5CB5EF63C96* ___predicate1, const RuntimeMethod* method)
{
	return ((  ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* (*) (RuntimeObject*, Func_2_tF1A3CF1FD4E05A03E8BD9749B7FFA5CB5EF63C96*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Void Unity.Services.Authentication.PlayerInfo::AddExternalIdentity(Unity.Services.Authentication.ExternalIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_AddExternalIdentity_m6B4B832732C54847BB5531DCB5E852072273DFE5 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* ___externalId0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLinkWithExternalTokenAsyncU3Ed__98_MoveNext_m32C2F9FE4AB15AC512136C3C1D79FBDAE6D9CD37 (U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLinkWithExternalTokenAsyncU3Ed__98_SetStateMachine_m8E5940E2BA29F3289922DC0604B31E42ABFEE04E (U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.PlayerInfo::GetIdentityId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_GetIdentityId_m4B4287BCFE22426C6D9AECAAE6CF963F667DBAB3 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, String_t* ___typeId0, const RuntimeMethod* method) ;
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientUnlinkExternalIdNotFoundException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationServiceInternal_BuildClientUnlinkExternalIdNotFoundException_m53B5D0A42848382EA5BF2E678A081E8B6334E239 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.UnlinkRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkRequest__ctor_mC6DF0262CCE41490C8119C09876F9E281BBEEBA6 (UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Authentication.UnlinkResponse>::GetAwaiter()
inline TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6 Task_1_GetAwaiter_mFCA9B7DC93BA8A14B4354C3CE210F8480CC96A62 (Task_1_tCF64ADEDCC5E52FD1B2D04A05A32E30D604CBFAC* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6 (*) (Task_1_tCF64ADEDCC5E52FD1B2D04A05A32E30D604CBFAC*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.UnlinkResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m237D08FD16AABB0A8D004C66AED4AF6325CD2BE9 (TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.UnlinkResponse>,Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m319A5913E6473C203A1572A5D921188B5A3B1AC0 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6* ___awaiter0, U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6*, U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m33800696D3FC2457E92DFE64C922BDAC77BF18B3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.UnlinkResponse>::GetResult()
inline UnlinkResponse_t80C024EBE33CD7796AF31678A9E1B74310470A42* TaskAwaiter_1_GetResult_m900445EF0BA9E193D971D03872CB6EAE688522F0 (TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6* __this, const RuntimeMethod* method)
{
	return ((  UnlinkResponse_t80C024EBE33CD7796AF31678A9E1B74310470A42* (*) (TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.PlayerInfo::RemoveIdentity(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_RemoveIdentity_mABDE25201FB941363381B3487969ACE5709AA4A7 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, String_t* ___typeId0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnlinkExternalTokenAsyncU3Ed__99_MoveNext_m719C5850F8239F8A7F87F9785F4B8FC2E0801647 (U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnlinkExternalTokenAsyncU3Ed__99_SetStateMachine_m6DCDC75DD4273640A2853A4DB273A161D28F5A05 (U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::GetWellKnownKeysAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_GetWellKnownKeysAsync_mD0C8F37924E1F10A4F59FC7106BBCF25040708BF (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>::Invoke()
inline Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* Func_1_Invoke_mFF276BF575B9BDA6F482AC987ECD7CDA99442D4A_inline (Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* (*) (Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Threading.Tasks.Task[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_WhenAll_mF5EC0950A443287DF9B67B00EF56977149429342 (TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* ___tasks0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mF813EEFD6E75C66C16FAC9EF4F7C989219D67B9C (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mF813EEFD6E75C66C16FAC9EF4F7C989219D67B9C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>::GetAwaiter()
inline TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 Task_1_GetAwaiter_m020FD194A6421B6AB9EDCC03AE5F3D5F718AF4BA (Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 (*) (Task_1_tAF51175714E424A84783635B14DBF49E6F558D42*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m7D1C4A1DF6B50479DAD3A2260984FBCE5A5A09B1 (TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse>,Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mFC148A0816C9699FFF908CE824D2FA4EFE47947C (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1* ___awaiter0, U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1*, U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_m65004A2D71118C73C857EE9EDA00C4AD662B2C52_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse>::GetResult()
inline SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* TaskAwaiter_1_GetResult_m59F70C7F70B91733E854738A7782BB43B9A0545C (TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1* __this, const RuntimeMethod* method)
{
	return ((  SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* (*) (TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CompleteSignIn(Unity.Services.Authentication.SignInResponse,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CompleteSignIn_m05519A7D98EC9B8FB6D2EF043A033FBF0D6885A9 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* ___response0, bool ___enableRefresh1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleSignInRequestAsyncU3Ed__101_MoveNext_m0A9FB37866BC38785342FA62F2DF3BB9E6DCFF6C (U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleSignInRequestAsyncU3Ed__101_SetStateMachine_m4186F382E4C30AD2013874C7D49E9996C70A26A8 (U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse>,Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_m9C707562CC77D30B0E2AFDBF3945CA53BA99F0AD (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1* ___awaiter0, U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1*, U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_m4D4FC3712C4962D0250FE91814C42CEFF7B36845_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Unity.Services.Authentication.Logger::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogWarning_mE0A74606514DA618868A2737BAD77E6DF440F00E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRefreshAsyncU3Ed__102_MoveNext_mBA169FB498C658D4D093C193627F9041C8D3A955 (U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRefreshAsyncU3Ed__102_SetStateMachine_m0781EA7007B0C14964B851D614A0091BC938AB53 (U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE9B682B809A0D474148BA6C0C48D2E67E07FF863 (U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Unity.Services.Core.InitializationOptions Unity.Services.Core.InitializationOptions::SetOption(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationSettings__ctor_mBE5C222CEFEA863FD12B1EF18D0ACF22A31EFEBD (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Scheduler.Internal.IActionScheduler>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mECC41FF178AE8A222AB01DA1F1A412D237C5CB87 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.ProfileComponent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileComponent__ctor_mB0A553E4B5E2EC2427A916389729ECC35CEFE38A (ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* __this, String_t* ___profile0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.DateTimeWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeWrapper__ctor_m37E5923227D3D90D57C8F5A5DB8B0D4E23F127FE (DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA* __this, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Telemetry.Internal.IMetricsFactory>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_m9825DA2F6B0AE6ECF9D7DBCA69BF1EFBADFFA5FB (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::.ctor(Unity.Services.Core.Telemetry.Internal.IMetricsFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics__ctor_m1E94E3FA297755A05C3862DE285B69D6E47DF47B (AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A* __this, RuntimeObject* ___metricsFactory0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.JwtDecoder::.ctor(Unity.Services.Authentication.IDateTimeWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JwtDecoder__ctor_m3CD5BE203E408B34A7133383E858E37F5C288375 (JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* __this, RuntimeObject* ___dateTime0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationCache::.ctor(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Authentication.IProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCache__ctor_mA3284BC025D6C4BD635EE4864ED05324E7CBC517 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, RuntimeObject* ___cloudProjectId0, RuntimeObject* ___profile1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AccessTokenComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent__ctor_m844A2F62FDA9BF6E1E44A8193FF75DC0C6E1CEC4 (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.EnvironmentIdComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentIdComponent__ctor_m4DF99AC648D90C616999D41F6869CB2786F59B0D (EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.PlayerIdComponent::.ctor(Unity.Services.Authentication.IAuthenticationCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent__ctor_m61FB3E8D7DA71282C77AECA611588B55287C2869 (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, RuntimeObject* ___cache0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.SessionTokenComponent::.ctor(Unity.Services.Authentication.IAuthenticationCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent__ctor_mFAB481325A4F94D2F55985E75E44CEBA50878CAD (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, RuntimeObject* ___cache0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.WellKnownKeysComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WellKnownKeysComponent__ctor_mDF82AD77E6093388027339255F70598AFD01CA51 (WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.NetworkHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkHandler__ctor_mD7E4C7A769EA5CAA763BF06289A0B5C223D88503 (NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AuthenticationPackageInitializer::GetHost(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationPackageInitializer_GetHost_mF1395BCCEC3453DB252830DB158D63F3426C66C4 (AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E* __this, RuntimeObject* ___projectConfiguration0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationNetworkClient::.ctor(System.String,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments,Unity.Services.Authentication.INetworkHandler,Unity.Services.Authentication.AccessTokenComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationNetworkClient__ctor_m2E1563DC14B43DFEE03BBDC785B27047ED816EE4 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, String_t* ___host0, RuntimeObject* ___cloudProjectId1, RuntimeObject* ___environment2, RuntimeObject* ___networkHandler3, AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* ___accessToken4, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::.ctor(Unity.Services.Authentication.IAuthenticationSettings,Unity.Services.Authentication.IAuthenticationNetworkClient,Unity.Services.Authentication.IProfile,Unity.Services.Authentication.IJwtDecoder,Unity.Services.Authentication.IAuthenticationCache,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Authentication.IDateTimeWrapper,Unity.Services.Authentication.IAuthenticationMetrics,Unity.Services.Authentication.AccessTokenComponent,Unity.Services.Authentication.EnvironmentIdComponent,Unity.Services.Authentication.PlayerIdComponent,Unity.Services.Authentication.SessionTokenComponent,Unity.Services.Authentication.WellKnownKeysComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal__ctor_m836DECD9A0E12F0C35F0CBD3FAFC90D317FABF3C (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, RuntimeObject* ___settings0, RuntimeObject* ___networkClient1, RuntimeObject* ___profile2, RuntimeObject* ___jwtDecoder3, RuntimeObject* ___cache4, RuntimeObject* ___scheduler5, RuntimeObject* ___dateTime6, RuntimeObject* ___metrics7, AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* ___accessToken8, EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* ___environmentId9, PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* ___playerId10, SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* ___sessionToken11, WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* ___wellKnownKeys12, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationService::set_Instance(Unity.Services.Authentication.IAuthenticationService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationService_set_Instance_mF6E5CECFA4F9F11AD6628770749F28B73904F1F3_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Authentication.Internal.IAccessToken>(TComponent)
inline void CoreRegistry_RegisterServiceComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m96E3BC38CB35E7DE66A2138E255D9138290E0719 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Authentication.Internal.IEnvironmentId>(TComponent)
inline void CoreRegistry_RegisterServiceComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_mBAC1AE4D552B9514846F66FBAF9F7B888E3B402F (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Authentication.Internal.IPlayerId>(TComponent)
inline void CoreRegistry_RegisterServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m76EE03A1259101C248F840059C28D021440190D3 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared)(__this, ___component0, method);
}
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline (const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationPackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationPackageInitializer__ctor_m7CCECFA94D25D61294F3A9A2FCEB6CCA2B401130 (AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Unity.Services.Authentication.AuthenticationPackageInitializer>(TPackage)
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisAuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E_m7F81ECFF18FBDFC0E59A8302DC62E3B420173E7A (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E* ___package0, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E*, const RuntimeMethod*))CoreRegistry_RegisterPackage_TisRuntimeObject_m5DF8BA5ABD5476A91872308A910C81D92F1FC6DD_gshared)(__this, ___package0, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Scheduler.Internal.IActionScheduler>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mC48AD060A6B3F5E06A2B4AE04C71F0DD05DBAABD (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Telemetry.Internal.IMetricsFactory>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_mAAAC4DFCA0707823134A60AAD6883345738C8543 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Authentication.Internal.IPlayerId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mE4D416BE760057F83FE86BA2FEF5753E1B44BE69 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Authentication.Internal.IAccessToken>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m93F4FBA0C705D7D86490EBD4E70005983E16BFA0 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Authentication.Internal.IEnvironmentId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m04C4A9BE5DBB1E12902078344F685C8FC3023713 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared)(__this, method);
}
// System.Void Unity.Services.Core.RequestFailedException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, int32_t ___errorCode0, String_t* ___message1, Exception_t* ___innerException2, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationException__ctor_mE85564838F285C5EB1D1B7B417BC3A2E8D3FE3CF (AuthenticationException_tB035991B8F9E6DDB3E6EF7D5829B4C7E4E677FB3* __this, int32_t ___errorCode0, String_t* ___message1, Exception_t* ___innerException2, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.PlayerIdComponent::GetPlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerIdComponent_GetPlayerId_mDD6103F18860BEF427C8B046F136F145EB1FF058 (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.PlayerIdComponent::SetPlayerId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_SetPlayerId_m48E64CCB35B3A4B741BFE9E72EB8D5FA449D1358 (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, String_t* ___playerId0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Unity.Services.Authentication.ProfileComponent::SetProfile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileComponent_SetProfile_m910DD105C52B8FB3E06F437F6D7E723904696F98 (ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* __this, String_t* ___profile0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.ProfileEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileEventArgs__ctor_m709F0824F5FA1A5EDDD6DE495047A2B322DEF7FF (ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26* __this, String_t* ___profile0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Services.Authentication.ProfileEventArgs>::Invoke(T)
inline void Action_1_Invoke_m5D63BF6B78E032F8411B13CA40F2CB069E7D525B_inline (Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* __this, ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t211056316F21C506A70C119B6DFC60079C04E01F*, ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.SessionTokenComponent::GetSessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionTokenComponent_GetSessionToken_mDF23709AAD37F4EA8AEB0B25CFD43FD8D754DE71 (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.SessionTokenComponent::SetSessionToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_SetSessionToken_m4F627C53F670EA1FF1EC3568BDDE5551A2C41F78 (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, String_t* ___sessionToken0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Services.Authentication.Identity>::.ctor()
inline void List_1__ctor_m52F4A975C42915C5DC0F4F7EEFB18E946C395DF1 (List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(System.String,System.String,System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m82E4FCEF734B43BD5988F0FAF5B7165D3B159474 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, String_t* ___playerId0, String_t* ___createdAt1, List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* ___externalIdentities2, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___s0, double* ___result1, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity>::GetEnumerator()
inline Enumerator_tC97273875AC63C7CA57A10E9BEEF62AD638E6E3A List_1_GetEnumerator_m8071673D592663097502C753907516AD8D21F3CE (List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC97273875AC63C7CA57A10E9BEEF62AD638E6E3A (*) (List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Services.Authentication.ExternalIdentity>::Dispose()
inline void Enumerator_Dispose_m3540617D9DC43EFFDC7576E40499E7BC05FD5204 (Enumerator_tC97273875AC63C7CA57A10E9BEEF62AD638E6E3A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC97273875AC63C7CA57A10E9BEEF62AD638E6E3A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Authentication.ExternalIdentity>::get_Current()
inline ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* Enumerator_get_Current_m88D481EC5337BA28A20D03A8690115ED857E212F_inline (Enumerator_tC97273875AC63C7CA57A10E9BEEF62AD638E6E3A* __this, const RuntimeMethod* method)
{
	return ((  ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* (*) (Enumerator_tC97273875AC63C7CA57A10E9BEEF62AD638E6E3A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Unity.Services.Authentication.Identity> Unity.Services.Authentication.PlayerInfo::get_Identities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* PlayerInfo_get_Identities_m8C89A941C76178DFECACF3C3D64219DC2AFA1F35_inline (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Identity::.ctor(Unity.Services.Authentication.ExternalIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Identity__ctor_m10262663AE817B6356F47E13E30762275291B9E4 (Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* __this, ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* ___externalIdentity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Services.Authentication.Identity>::Add(T)
inline void List_1_Add_mCD00F1B7ADB5DD51ECCF4368FC3C7BC19F82C26D_inline (List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* __this, Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA*, Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Authentication.ExternalIdentity>::MoveNext()
inline bool Enumerator_MoveNext_m61D9CCC795FD3F00C81876C20B1F743A88B03626 (Enumerator_tC97273875AC63C7CA57A10E9BEEF62AD638E6E3A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC97273875AC63C7CA57A10E9BEEF62AD638E6E3A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mCFEF8D3C5C0557DE0C910014E591EB07698114D6 (U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.Services.Authentication.Identity,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9A7FCECEA113DE472C150B3DF9ACB921124266AB (Func_2_tD767167733C46D4FDC8AFD23616D4D56100D1379* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD767167733C46D4FDC8AFD23616D4D56100D1379*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<Unity.Services.Authentication.Identity>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* Enumerable_FirstOrDefault_TisIdentity_t0F2459F648B93A730762B444F9012ECFA8BF709F_m3C3A6A66D0A19368E1F7600F0A6FE9E323764CB7 (RuntimeObject* ___source0, Func_2_tD767167733C46D4FDC8AFD23616D4D56100D1379* ___predicate1, const RuntimeMethod* method)
{
	return ((  Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* (*) (RuntimeObject*, Func_2_tD767167733C46D4FDC8AFD23616D4D56100D1379*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Void Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m419725C446AA5A7EC1B72EBE95744DC40AC76888 (U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Unity.Services.Authentication.Identity>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m169E146A08B48566155C432B0FD8BF87828B7456 (Predicate_1_t4BBF8DE16E02FEEB9FE9EC49F8614C8D90FB8E4B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t4BBF8DE16E02FEEB9FE9EC49F8614C8D90FB8E4B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Unity.Services.Authentication.Identity>::RemoveAll(System.Predicate`1<T>)
inline int32_t List_1_RemoveAll_m92FB9A5AD00EC600689E7639649C657D914201A1 (List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* __this, Predicate_1_t4BBF8DE16E02FEEB9FE9EC49F8614C8D90FB8E4B* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA*, Predicate_1_t4BBF8DE16E02FEEB9FE9EC49F8614C8D90FB8E4B*, const RuntimeMethod*))List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared)(__this, ___match0, method);
}
// System.Void Unity.Services.Authentication.BaseJwt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseJwt__ctor_mCAAFF2897EB3B166CF374F97F0EA9848AC0B2073 (BaseJwt_tE235418FE84895C61012E458A93D98F334B1F8EF* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.DateTime> Unity.Services.Authentication.BaseJwt::ConvertTimestamp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC BaseJwt_ConvertTimestamp_m0CA39A85EE115193D6FF8EF9B14FED7F17BCDD85 (BaseJwt_tE235418FE84895C61012E458A93D98F334B1F8EF* __this, int32_t ___timestamp0, const RuntimeMethod* method) ;
// System.DateTimeOffset System.DateTimeOffset::FromUnixTimeSeconds(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 DateTimeOffset_FromUnixTimeSeconds_mE1FA5E04CCCE8A0E8903C9DACC64526C721C0A47 (int64_t ___seconds0, const RuntimeMethod* method) ;
// System.DateTime System.DateTimeOffset::get_DateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_AccessTokenRefreshBuffer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenRefreshBuffer_m96B86C124804197F12B701796CDCE4E9D0443CEE_inline (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_AccessTokenExpiryBuffer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenExpiryBuffer_m14A6389F6D9EDCE2FCD222C890ECC7F88861A64A_inline (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_RefreshAttemptFrequency(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_RefreshAttemptFrequency_mBAF4610491BF821F84D042A0007A28460623B0D2_inline (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Unity.Services.Authentication.AccessTokenComponent Unity.Services.Authentication.AuthenticationNetworkClient::get_AccessTokenComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* AuthenticationNetworkClient_get_AccessTokenComponent_mF10749E4B898F6824B849C31705952DC23C64D86_inline (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Environments.Internal.IEnvironments Unity.Services.Authentication.AuthenticationNetworkClient::get_EnvironmentComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_EnvironmentComponent_m6B9DEC5E341192134461AFD8BBABA9AB17A7FB26_inline (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Authentication.AuthenticationNetworkClient::get_CloudProjectIdComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_CloudProjectIdComponent_mCAE38C64A9FF5A052B1DB965CDD698AECC90C03F_inline (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// Unity.Services.Authentication.INetworkHandler Unity.Services.Authentication.AuthenticationNetworkClient::get_NetworkHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_NetworkHandler_mE8F20F2BF21EDA4B878917EACD2A3A736DBD8571_inline (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::GetCommonHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* AuthenticationNetworkClient_GetCommonHeaders_mA91AF9F13338A7B915A99B61CC71874D75CB1C2F (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::WithEnvironment(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* AuthenticationNetworkClient_WithEnvironment_m9B313EFCA29F2D7457AE5029FA31443331CC5AFC (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.SessionTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenRequest__ctor_mBD8FDC3B255BDF93CD9BBE4153C4E286EF579660 (SessionTokenRequest_t9C89923BD817D8F5D559572738BC39BC3E12ADFB* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::WithAccessToken(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* AuthenticationNetworkClient_WithAccessToken_m38CB5FDE79922715525D88352E9E78BBBBA01683 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers0, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AuthenticationNetworkClient::CreateUserRequestUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationNetworkClient_CreateUserRequestUrl_m1E91DDCE4598C1ACA91E3888755CE123F07DEFDA (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, String_t* ___user0, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AuthenticationNetworkClient::get_AccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationNetworkClient_get_AccessToken_m42B6AD48F27F4C586708E4DC9E2A64FE08656F1D (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AuthenticationNetworkClient::get_EnvironmentId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationNetworkClient_get_EnvironmentId_m1EB18E103C62D193B5F698F30D79F03AB5A26FE2 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared)(__this, ___dictionary0, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.HttpUtilities::UnescapeUrlString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpUtilities_UnescapeUrlString_m15F54F47563D19CC8FC5D176CE501DACB7A78941 (String_t* ___urlString0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String Unity.Services.Authentication.HttpUtilities::EscapeUrlString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpUtilities_EscapeUrlString_mE97CA952E1525FFFAFC9D292A05E2DE07F94DE51 (String_t* ___rawString0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.String System.Uri::EscapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_m844D0FB6899488BDEBAF160B23397CD7ED8CA2DF (String_t* ___stringToEscape0, const RuntimeMethod* method) ;
// System.String System.Uri::UnescapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_UnescapeDataString_m095AF55EE0F237A44FC8A53D2EE6FA66A567634D (String_t* ___stringToUnescape0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.NetworkConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfiguration__ctor_m61201E2D6FA572D1B8990CFBB621A1777AA7FDE1 (NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.INetworkConfiguration Unity.Services.Authentication.NetworkHandler::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NetworkHandler_get_Configuration_m855B12C42C43AC5FEEDCD2536822705243B7B5A4_inline (NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.WebRequest::.ctor(Unity.Services.Authentication.INetworkConfiguration,Unity.Services.Authentication.WebRequestVerb,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest__ctor_m7E4F164BD970CD891671BF8F682EE7D2C5BC4B7D (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, RuntimeObject* ___configuration0, int32_t ___verb1, String_t* ___url2, RuntimeObject* ___headers3, String_t* ___payload4, String_t* ___payloadContentType5, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Authentication.WebRequest::SendAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebRequest_SendAsync_mDBF29413F7446A8D9F6747C3AB89EAB5A6442C25 (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Authentication.WebRequest::SendAttemptAsync(System.Threading.Tasks.TaskCompletionSource`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* WebRequest_SendAttemptAsync_m72854F7D88560AC76FB8DC4B73B38E72ACE360D6 (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* ___tcs0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.WebRequest/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m08C6AA29486BA58F7E252E1F3050DEC2A5CAC79D (U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest Unity.Services.Authentication.WebRequest::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* WebRequest_Build_mB8DB21CB3B5CE2CDF55E5EB82DAB28EC8084C966 (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_SetException_m7DB7E6251CB92C741F7E081E2ECAA06FF79E212F_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_mB8907F79799A156087D46500958E06FEEEC509DB (String_t* ___uri0, String_t* ___postData1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86 (String_t* ___uri0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Delete_mB86F20E8BF883C7F5831ED29A9ADF2A54E7F7021 (String_t* ___uri0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// Unity.Services.Authentication.INetworkConfiguration Unity.Services.Authentication.WebRequest::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WebRequest_get_Configuration_m17287B94E87EE12E6579C0D303BE14DD94639C5E_inline (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Services.Authentication.WebRequest::get_Retries()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRequest_get_Retries_m54A5EACF6AA10F0FC5E72D5E21068C894943BB4A_inline (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.WebRequest::set_Retries(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequest_set_Retries_mCFCC8E23AAEAD4F2836F22F645DD14F6A7AEE31A_inline (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.WebRequestException::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Int64,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException__ctor_m34FFE6C71B787343A350711B8D33CDCDE89589CA (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, bool ___isNetworkError0, bool ___isServerError1, bool ___isDeserializationError2, int64_t ___responseCode3, String_t* ___errorMessage4, RuntimeObject* ___responseHeaders5, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, String_t*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___result0, method);
}
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Authentication.WebRequest::RequestHasNetworkError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequest_RequestHasNetworkError_mB4FF69EB4F14B80019B012FAD35BAB9B15ACFDBF (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Authentication.WebRequest::RequestHasServerError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequest_RequestHasServerError_m9D4204864901403DE7FA88503084221260926F98 (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UnityWebRequest_GetResponseHeaders_m67147A5D3FF83FD75071AA42F4890439DA2092DF (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.WebRequest::RequestCompleted(System.Threading.Tasks.TaskCompletionSource`1<System.String>,System.Int64,System.Boolean,System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_RequestCompleted_m0AB8EBFFF83D11CBF3F6CD7A075871944575A0C4 (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* ___tcs0, int64_t ___responseCode1, bool ___isNetworkError2, bool ___isServerError3, String_t* ___errorText4, String_t* ___bodyText5, RuntimeObject* ___headers6, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.WebRequestException::set_NetworkError(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_NetworkError_m2C115303197F2E683B07471C5A2883AE3B03F603_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.WebRequestException::set_ServerError(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ServerError_m25C30AEFD94AA6B869D353E784AC51E740A924E5_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.WebRequestException::set_DeserializationError(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_DeserializationError_mA826E42FBC5FD3D20CBECCA8A3299E5858688D4E_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.WebRequestException::set_ResponseCode(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseCode_mD5CBAF8670FE2515209045C9677CE5150DD380D7_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.WebRequestException::set_ResponseHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseHeaders_m413A013D40F846EE08E7959D4C226D571E48F03F_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AuthenticationCache::get_CloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_CloudProjectId_mB6305CFC987BED1721E733186A2115952C1A64B6 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AuthenticationCache::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_Profile_m3DFBA91E989329B137E0FD376D7775462B5C1CCA (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AuthenticationCache::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_GetKey_m6F463861D10E9CF5ACE173652DB24C1CC2A59CB3 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30 (String_t* ___key0, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AuthenticationCache::GetOldKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_GetOldKey_m7895B910BC29C8A7C1B8D4EDF735490D43092A09 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AuthenticationCache::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_Prefix_mDDC3F137BB4B91509ADC0A923F420FBF98BC1553 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.AuthenticationCache::get_OldPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_OldPrefix_mF88F8AC4CAF17786D4AC7403EA00343CCFE5004B (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method) ;
// Unity.Services.Authentication.WellKnownKey Unity.Services.Authentication.JwtDecoder::GetKey(System.String,Unity.Services.Authentication.WellKnownKey[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* JwtDecoder_GetKey_mBBEF6B8F9FB03D659E20760D3F12E185DA4EFAE5 (JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* __this, String_t* ___keyId0, WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* ___keys1, const RuntimeMethod* method) ;
// System.Byte[] Unity.Services.Authentication.JwtDecoder::Base64UrlDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* JwtDecoder_Base64UrlDecode_m4FAC88A6795B97AF79655B79A4C8BF70242DD7B9 (JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Authentication.JwtDecoder::Verify(System.String,System.String,System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JwtDecoder_Verify_mC246A9384C12081B0A751AC932DC0203B7999CF9 (JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* __this, String_t* ___header0, String_t* ___payload1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___modulus3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___exponent4, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_mE4BC404364B89F41C863EC3860ED4B9D7DD7A06F (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAPKCS1SignatureDeformatter__ctor_m791E4894429FB7772E9A930C4A8B10C47A07293F (RSAPKCS1SignatureDeformatter_t3B1E70B8DA929C184C7599B50FB8DD4BF5CA7CB3* __this, AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* ___key0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) ;
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
// System.Void Unity.Services.Authentication.AuthenticationErrorCodes::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationErrorCodes__cctor_m6745DB9DF5D40FEED6DC259B6362EDB627D6FF69 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int MinValue = 10000;
		((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___MinValue_0 = ((int32_t)10000);
		// public static readonly int ClientInvalidUserState = 10000;
		((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___ClientInvalidUserState_1 = ((int32_t)10000);
		// public static readonly int ClientNoActiveSession = 10001;
		((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___ClientNoActiveSession_2 = ((int32_t)10001);
		// public static readonly int InvalidParameters = 10002;
		((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___InvalidParameters_3 = ((int32_t)10002);
		// public static readonly int AccountAlreadyLinked = 10003;
		((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___AccountAlreadyLinked_4 = ((int32_t)10003);
		// public static readonly int AccountLinkLimitExceeded = 10004;
		((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___AccountLinkLimitExceeded_5 = ((int32_t)10004);
		// public static readonly int ClientUnlinkExternalIdNotFound = 10005;
		((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___ClientUnlinkExternalIdNotFound_6 = ((int32_t)10005);
		// public static readonly int ClientInvalidProfile = 10006;
		((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___ClientInvalidProfile_7 = ((int32_t)10006);
		// public static readonly int InvalidSessionToken = 10007;
		((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___InvalidSessionToken_8 = ((int32_t)10007);
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
// Unity.Services.Authentication.IAuthenticationService Unity.Services.Authentication.AuthenticationService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Instance == null)
		RuntimeObject* L_0 = ((AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_il2cpp_TypeInfo_var))->___s_Instance_0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new ServicesInitializationException("Singleton is not initialized. " +
		//     "Please call UnityServices.InitializeAsync() to initialize.");
		ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_1 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral564C592A83288CFC0A06F4F169F973D869F140D9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1_RuntimeMethod_var)));
	}

IL_0012:
	{
		// return s_Instance;
		RuntimeObject* L_2 = ((AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_il2cpp_TypeInfo_var))->___s_Instance_0;
		return L_2;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationService::set_Instance(Unity.Services.Authentication.IAuthenticationService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService_set_Instance_mF6E5CECFA4F9F11AD6628770749F28B73904F1F3 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal set => s_Instance = value;
		RuntimeObject* L_0 = ___value0;
		((AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_il2cpp_TypeInfo_var))->___s_Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_il2cpp_TypeInfo_var))->___s_Instance_0), (void*)L_0);
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
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::add_SignInFailed(System.Action`1<Unity.Services.Core.RequestFailedException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_add_SignInFailed_m9260DB451A02F56C93A92418596B2D7A79EC8B01 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* V_0 = NULL;
	Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* V_1 = NULL;
	Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* V_2 = NULL;
	{
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_0 = __this->___SignInFailed_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_1 = V_0;
		V_1 = L_1;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_2 = V_1;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860*)Castclass((RuntimeObject*)L_4, Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860_il2cpp_TypeInfo_var));
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860** L_5 = (&__this->___SignInFailed_1);
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_6 = V_2;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_7 = V_1;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_9 = V_0;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860*)L_9) == ((RuntimeObject*)(Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::remove_SignInFailed(System.Action`1<Unity.Services.Core.RequestFailedException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_remove_SignInFailed_m11D5F7E981019A03E7A4161F8DDA9376FC24BD82 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* V_0 = NULL;
	Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* V_1 = NULL;
	Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* V_2 = NULL;
	{
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_0 = __this->___SignInFailed_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_1 = V_0;
		V_1 = L_1;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_2 = V_1;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860*)Castclass((RuntimeObject*)L_4, Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860_il2cpp_TypeInfo_var));
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860** L_5 = (&__this->___SignInFailed_1);
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_6 = V_2;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_7 = V_1;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_9 = V_0;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860*)L_9) == ((RuntimeObject*)(Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::add_SignedIn(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_add_SignedIn_mEF92B74D192609D12FC1D4C4A876FE386705AD8C (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___SignedIn_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___SignedIn_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::remove_SignedIn(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_remove_SignedIn_m379A905529DB2306A0067247A896348CC44024D3 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___SignedIn_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___SignedIn_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::add_SignedOut(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_add_SignedOut_mCCEB16EC3898F15248866478B3F87355F3C780E7 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___SignedOut_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___SignedOut_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::remove_SignedOut(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_remove_SignedOut_m4455B51ED0B978C1E0F244F12260549C1387A74B (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___SignedOut_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___SignedOut_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::add_Expired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_add_Expired_m4897ECD3442AE5D00E39DF27CF8DDEF296AEE8B7 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Expired_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Expired_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::remove_Expired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_remove_Expired_m001910109FB6E37D1AB589FD76A4C893380D896F (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Expired_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Expired_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal::get_IsSignedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationServiceInternal_get_IsSignedIn_mCF8CDE17E3B5F2ACDCF556705C025DA48D5671FB (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// State == AuthenticationState.Authorized ||
		// State == AuthenticationState.Refreshing ||
		// State == AuthenticationState.Expired;
		int32_t L_0;
		L_0 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1;
		L_1 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2;
		L_2 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)4))? 1 : 0);
	}

IL_001c:
	{
		return (bool)1;
	}
}
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal::get_IsAuthorized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationServiceInternal_get_IsAuthorized_m617D4F6C205F90145F46BA9C4069B3B9BC87CD8D (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// State == AuthenticationState.Authorized ||
		// State == AuthenticationState.Refreshing;
		int32_t L_0;
		L_0 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1;
		L_1 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal::get_IsExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationServiceInternal_get_IsExpired_m28F19D8E8DC230C7A898E1FC87E4681C1BA86EB0 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsExpired => State == AuthenticationState.Expired;
		int32_t L_0;
		L_0 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
	}
}
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal::get_SessionTokenExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationServiceInternal_get_SessionTokenExists_mA2B8C4F770CF9D4D080D829C768885A1486D3F03 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// public bool SessionTokenExists => !string.IsNullOrEmpty(SessionTokenComponent.SessionToken);
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_0;
		L_0 = AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = SessionTokenComponent_get_SessionToken_mFCD6A8E0CAC451180203F6D1F56C9EEBBF61DAFA(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Unity.Services.Authentication.AuthenticationServiceInternal::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationServiceInternal_get_Profile_m57B6553E0E1ED1628AEE6211632DBA79E1D22503 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProfile_t0DC486F874AA0450CBE9E4F75A5733093B2E76E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Profile => m_Profile.Current;
		RuntimeObject* L_0 = __this->___m_Profile_16;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Unity.Services.Authentication.IProfile::get_Current() */, IProfile_t0DC486F874AA0450CBE9E4F75A5733093B2E76E7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String Unity.Services.Authentication.AuthenticationServiceInternal::get_AccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationServiceInternal_get_AccessToken_m7B4AC5988045E8F833AE7E31782030743B96E8F2 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// public string AccessToken => AccessTokenComponent.AccessToken;
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_0;
		L_0 = AuthenticationServiceInternal_get_AccessTokenComponent_mA3669DE89749DFCFA04AE2A4DB47505AD55D248E_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = AccessTokenComponent_get_AccessToken_m70FC319ED7E39A53D5C17E775FD052D466F29ED8_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Unity.Services.Authentication.AuthenticationServiceInternal::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationServiceInternal_get_PlayerId_mA599BD2E88C01DD4168B1A49BC193BF76CD471AA (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// public string PlayerId => PlayerIdComponent.PlayerId;
		PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* L_0;
		L_0 = AuthenticationServiceInternal_get_PlayerIdComponent_mCB05A130C555F6DF00E4CBCD63A86DAACF9DF743_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = PlayerIdComponent_get_PlayerId_m3B26D7263EE5FF703A96397CA7F8359EFC2B3E63(L_0, NULL);
		return L_1;
	}
}
// Unity.Services.Authentication.PlayerInfo Unity.Services.Authentication.AuthenticationServiceInternal::get_PlayerInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* AuthenticationServiceInternal_get_PlayerInfo_m8B26511EDAA52A7C50EE4EFEBB5C31D6E904985A (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// public PlayerInfo PlayerInfo { get; internal set; }
		PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_0 = __this->___U3CPlayerInfoU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_PlayerInfo(Unity.Services.Authentication.PlayerInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_PlayerInfo_m7A68E82BD9D316E342DF5E3AECAF108EDD238EF4 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* ___value0, const RuntimeMethod* method) 
{
	{
		// public PlayerInfo PlayerInfo { get; internal set; }
		PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_0 = ___value0;
		__this->___U3CPlayerInfoU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerInfoU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::get_ExpirationActionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 AuthenticationServiceInternal_get_ExpirationActionId_mBF3F9F53133B98D62D753B9CF11D561CC7809519 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal long? ExpirationActionId { get; set; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->___U3CExpirationActionIdU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_ExpirationActionId(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_ExpirationActionId_m99D9F7A20AF618C1C9E9A35F879EA553648CD7D8 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___value0, const RuntimeMethod* method) 
{
	{
		// internal long? ExpirationActionId { get; set; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = ___value0;
		__this->___U3CExpirationActionIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::get_RefreshActionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 AuthenticationServiceInternal_get_RefreshActionId_mE26972CCF62B936620DFDD885C954E1307AACACC (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal long? RefreshActionId { get; set; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->___U3CRefreshActionIdU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_RefreshActionId(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_RefreshActionId_mBF2A7072312F301BBC125EDFD4FDBF6A55FB7460 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___value0, const RuntimeMethod* method) 
{
	{
		// internal long? RefreshActionId { get; set; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = ___value0;
		__this->___U3CRefreshActionIdU3Ek__BackingField_7 = L_0;
		return;
	}
}
// Unity.Services.Authentication.AccessTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_AccessTokenComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* AuthenticationServiceInternal_get_AccessTokenComponent_mA3669DE89749DFCFA04AE2A4DB47505AD55D248E (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal AccessTokenComponent AccessTokenComponent { get; }
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_0 = __this->___U3CAccessTokenComponentU3Ek__BackingField_8;
		return L_0;
	}
}
// Unity.Services.Authentication.EnvironmentIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_EnvironmentIdComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* AuthenticationServiceInternal_get_EnvironmentIdComponent_m195E0AFCC08E96FB3FB53F3258BF6FBB3B75036A (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal EnvironmentIdComponent EnvironmentIdComponent { get; }
		EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* L_0 = __this->___U3CEnvironmentIdComponentU3Ek__BackingField_9;
		return L_0;
	}
}
// Unity.Services.Authentication.PlayerIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_PlayerIdComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* AuthenticationServiceInternal_get_PlayerIdComponent_mCB05A130C555F6DF00E4CBCD63A86DAACF9DF743 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal PlayerIdComponent PlayerIdComponent { get; }
		PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* L_0 = __this->___U3CPlayerIdComponentU3Ek__BackingField_10;
		return L_0;
	}
}
// Unity.Services.Authentication.SessionTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_SessionTokenComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal SessionTokenComponent SessionTokenComponent { get; }
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_0 = __this->___U3CSessionTokenComponentU3Ek__BackingField_11;
		return L_0;
	}
}
// Unity.Services.Authentication.WellKnownKeysComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_WellKnownKeysComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* AuthenticationServiceInternal_get_WellKnownKeysComponent_m7E533682E0EAD28DE9C952619AC74462C9C2CAAB (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal WellKnownKeysComponent WellKnownKeysComponent { get; }
		WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* L_0 = __this->___U3CWellKnownKeysComponentU3Ek__BackingField_12;
		return L_0;
	}
}
// Unity.Services.Authentication.AuthenticationState Unity.Services.Authentication.AuthenticationServiceInternal::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal AuthenticationState State { get; set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_State(Unity.Services.Authentication.AuthenticationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_State_mBE3362F5E6AAA06DA3D0D9CFA6CE38C5A5991FA1 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal AuthenticationState State { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_13 = L_0;
		return;
	}
}
// Unity.Services.Authentication.IAuthenticationSettings Unity.Services.Authentication.AuthenticationServiceInternal::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_Settings_mC9B9A3983876B35F9926EDE4132C902A6B3B9968 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal IAuthenticationSettings Settings { get; }
		RuntimeObject* L_0 = __this->___U3CSettingsU3Ek__BackingField_14;
		return L_0;
	}
}
// Unity.Services.Authentication.IAuthenticationNetworkClient Unity.Services.Authentication.AuthenticationServiceInternal::get_NetworkClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal IAuthenticationNetworkClient NetworkClient { get; set; }
		RuntimeObject* L_0 = __this->___U3CNetworkClientU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_NetworkClient(Unity.Services.Authentication.IAuthenticationNetworkClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_NetworkClient_mAB5EE732963B22FE8D779546E8D7F00300BD6937 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// internal IAuthenticationNetworkClient NetworkClient { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CNetworkClientU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNetworkClientU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::add_StateChanged(System.Action`2<Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_add_StateChanged_mBE274D0D90C92E68F11E4CB76F1B6A0CBA92D51E (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* V_0 = NULL;
	Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* V_1 = NULL;
	Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* V_2 = NULL;
	{
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_0 = __this->___StateChanged_22;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_1 = V_0;
		V_1 = L_1;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_2 = V_1;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537*)Castclass((RuntimeObject*)L_4, Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537_il2cpp_TypeInfo_var));
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537** L_5 = (&__this->___StateChanged_22);
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_6 = V_2;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_7 = V_1;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_9 = V_0;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537*)L_9) == ((RuntimeObject*)(Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::remove_StateChanged(System.Action`2<Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_remove_StateChanged_m9358488CEDD7D856B563EB07592DBFFCE6644000 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* V_0 = NULL;
	Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* V_1 = NULL;
	Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* V_2 = NULL;
	{
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_0 = __this->___StateChanged_22;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_1 = V_0;
		V_1 = L_1;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_2 = V_1;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537*)Castclass((RuntimeObject*)L_4, Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537_il2cpp_TypeInfo_var));
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537** L_5 = (&__this->___StateChanged_22);
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_6 = V_2;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_7 = V_1;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_9 = V_0;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537*)L_9) == ((RuntimeObject*)(Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::.ctor(Unity.Services.Authentication.IAuthenticationSettings,Unity.Services.Authentication.IAuthenticationNetworkClient,Unity.Services.Authentication.IProfile,Unity.Services.Authentication.IJwtDecoder,Unity.Services.Authentication.IAuthenticationCache,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Authentication.IDateTimeWrapper,Unity.Services.Authentication.IAuthenticationMetrics,Unity.Services.Authentication.AccessTokenComponent,Unity.Services.Authentication.EnvironmentIdComponent,Unity.Services.Authentication.PlayerIdComponent,Unity.Services.Authentication.SessionTokenComponent,Unity.Services.Authentication.WellKnownKeysComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal__ctor_m836DECD9A0E12F0C35F0CBD3FAFC90D317FABF3C (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, RuntimeObject* ___settings0, RuntimeObject* ___networkClient1, RuntimeObject* ___profile2, RuntimeObject* ___jwtDecoder3, RuntimeObject* ___cache4, RuntimeObject* ___scheduler5, RuntimeObject* ___dateTime6, RuntimeObject* ___metrics7, AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* ___accessToken8, EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* ___environmentId9, PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* ___playerId10, SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* ___sessionToken11, WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* ___wellKnownKeys12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationServiceInternal_U3C_ctorU3Eb__74_0_m5C8D958BB2C8579912768519C87AD5500DBE7C44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AuthenticationServiceInternal(IAuthenticationSettings settings,
		//                                        IAuthenticationNetworkClient networkClient,
		//                                        IProfile profile,
		//                                        IJwtDecoder jwtDecoder,
		//                                        IAuthenticationCache cache,
		//                                        IActionScheduler scheduler,
		//                                        IDateTimeWrapper dateTime,
		//                                        IAuthenticationMetrics metrics,
		//                                        AccessTokenComponent accessToken,
		//                                        EnvironmentIdComponent environmentId,
		//                                        PlayerIdComponent playerId,
		//                                        SessionTokenComponent sessionToken,
		//                                        WellKnownKeysComponent wellKnownKeys)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Settings = settings;
		RuntimeObject* L_0 = ___settings0;
		__this->___U3CSettingsU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSettingsU3Ek__BackingField_14), (void*)L_0);
		// NetworkClient = networkClient;
		RuntimeObject* L_1 = ___networkClient1;
		AuthenticationServiceInternal_set_NetworkClient_mAB5EE732963B22FE8D779546E8D7F00300BD6937_inline(__this, L_1, NULL);
		// m_Profile = profile;
		RuntimeObject* L_2 = ___profile2;
		__this->___m_Profile_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Profile_16), (void*)L_2);
		// m_JwtDecoder = jwtDecoder;
		RuntimeObject* L_3 = ___jwtDecoder3;
		__this->___m_JwtDecoder_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_JwtDecoder_17), (void*)L_3);
		// m_Cache = cache;
		RuntimeObject* L_4 = ___cache4;
		__this->___m_Cache_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cache_18), (void*)L_4);
		// m_Scheduler = scheduler;
		RuntimeObject* L_5 = ___scheduler5;
		__this->___m_Scheduler_19 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Scheduler_19), (void*)L_5);
		// m_DateTime = dateTime;
		RuntimeObject* L_6 = ___dateTime6;
		__this->___m_DateTime_20 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DateTime_20), (void*)L_6);
		// m_Metrics = metrics;
		RuntimeObject* L_7 = ___metrics7;
		__this->___m_Metrics_21 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Metrics_21), (void*)L_7);
		// AccessTokenComponent = accessToken;
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_8 = ___accessToken8;
		__this->___U3CAccessTokenComponentU3Ek__BackingField_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessTokenComponentU3Ek__BackingField_8), (void*)L_8);
		// EnvironmentIdComponent = environmentId;
		EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* L_9 = ___environmentId9;
		__this->___U3CEnvironmentIdComponentU3Ek__BackingField_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnvironmentIdComponentU3Ek__BackingField_9), (void*)L_9);
		// PlayerIdComponent = playerId;
		PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* L_10 = ___playerId10;
		__this->___U3CPlayerIdComponentU3Ek__BackingField_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerIdComponentU3Ek__BackingField_10), (void*)L_10);
		// SessionTokenComponent = sessionToken;
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_11 = ___sessionToken11;
		__this->___U3CSessionTokenComponentU3Ek__BackingField_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionTokenComponentU3Ek__BackingField_11), (void*)L_11);
		// WellKnownKeysComponent = wellKnownKeys;
		WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* L_12 = ___wellKnownKeys12;
		__this->___U3CWellKnownKeysComponentU3Ek__BackingField_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWellKnownKeysComponentU3Ek__BackingField_12), (void*)L_12);
		// State = AuthenticationState.SignedOut;
		AuthenticationServiceInternal_set_State_mBE3362F5E6AAA06DA3D0D9CFA6CE38C5A5991FA1_inline(__this, 0, NULL);
		// MigrateCache();
		AuthenticationServiceInternal_MigrateCache_mF2F36D8CA3F887DAAF9E3374A6DFCBF488958FAB(__this, NULL);
		// Expired += () => m_Metrics.SendExpiredSessionMetric();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, __this, (intptr_t)((void*)AuthenticationServiceInternal_U3C_ctorU3Eb__74_0_m5C8D958BB2C8579912768519C87AD5500DBE7C44_RuntimeMethod_var), NULL);
		AuthenticationServiceInternal_add_Expired_m4897ECD3442AE5D00E39DF27CF8DDEF296AEE8B7(__this, L_13, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::SignInAnonymouslyAsync(Unity.Services.Authentication.SignInOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_SignInAnonymouslyAsync_m4BAC03BBA2966C917F39B2B934E904A1AF56C0BE (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass75_0_U3CSignInAnonymouslyAsyncU3Eb__0_m440B2B066D68CEB79DEB3DEB75153F922A64C4C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243* V_0 = NULL;
	RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* V_1 = NULL;
	RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* V_2 = NULL;
	RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* V_3 = NULL;
	int32_t G_B9_0 = 0;
	{
		U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243* L_0 = (U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass75_0__ctor_m44EA04EE3D00C72C090EA74FED8E837477FDA4E4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// if (State == AuthenticationState.SignedOut || State == AuthenticationState.Expired)
		int32_t L_2;
		L_2 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3;
		L_3 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_00af;
		}
	}

IL_0021:
	{
		// if (SessionTokenExists)
		bool L_4;
		L_4 = AuthenticationServiceInternal_get_SessionTokenExists_mA2B8C4F770CF9D4D080D829C768885A1486D3F03(__this, NULL);
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		// var sessionToken = SessionTokenComponent.SessionToken;
		U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243* L_5 = V_0;
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_6;
		L_6 = AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046_inline(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = SessionTokenComponent_get_SessionToken_mFCD6A8E0CAC451180203F6D1F56C9EEBBF61DAFA(L_6, NULL);
		NullCheck(L_5);
		L_5->___sessionToken_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___sessionToken_1), (void*)L_7);
		// if (string.IsNullOrEmpty(sessionToken))
		U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___sessionToken_1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (!L_10)
		{
			goto IL_005d;
		}
	}
	{
		// var exception = BuildClientSessionTokenNotExistsException();
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_11;
		L_11 = AuthenticationServiceInternal_BuildClientSessionTokenNotExistsException_mA320063CFD01D9F47CDD6CC2E9FF6132254A3345(__this, NULL);
		V_1 = L_11;
		// SendSignInFailedEvent(exception, true);
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_12 = V_1;
		AuthenticationServiceInternal_SendSignInFailedEvent_mAC3544A54E02CF24D377A1DCC62FAB1288D360CD(__this, L_12, (bool)1, NULL);
		// return Task.FromException(exception);
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14;
		L_14 = Task_FromException_m7E03FBDDCA95F6577A18B1D1F708738734F63195(L_13, NULL);
		return L_14;
	}

IL_005d:
	{
		// return HandleSignInRequestAsync(() => NetworkClient.SignInWithSessionTokenAsync(sessionToken));
		U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243* L_15 = V_0;
		Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B* L_16 = (Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B*)il2cpp_codegen_object_new(Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_1__ctor_m0398A1CA520FA7EAC7A83EF5F0F69F25581817FD(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass75_0_U3CSignInAnonymouslyAsyncU3Eb__0_m440B2B066D68CEB79DEB3DEB75153F922A64C4C6_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_17;
		L_17 = AuthenticationServiceInternal_HandleSignInRequestAsync_m3423F29240C8B4EBB2298864A1FEF3309298EE7D(__this, L_16, (bool)1, NULL);
		return L_17;
	}

IL_0071:
	{
		// if (options?.CreateAccount ?? true)
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_18 = ___options0;
		if (L_18)
		{
			goto IL_0077;
		}
	}
	{
		G_B9_0 = 1;
		goto IL_007d;
	}

IL_0077:
	{
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_19 = ___options0;
		NullCheck(L_19);
		bool L_20;
		L_20 = SignInOptions_get_CreateAccount_m487DE1145466E4820534680E55CD209335908E02_inline(L_19, NULL);
		G_B9_0 = ((int32_t)(L_20));
	}

IL_007d:
	{
		if (!G_B9_0)
		{
			goto IL_0099;
		}
	}
	{
		// return HandleSignInRequestAsync(NetworkClient.SignInAnonymouslyAsync);
		RuntimeObject* L_21;
		L_21 = AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A_inline(__this, NULL);
		RuntimeObject* L_22 = L_21;
		Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B* L_23 = (Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B*)il2cpp_codegen_object_new(Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Func_1__ctor_m0398A1CA520FA7EAC7A83EF5F0F69F25581817FD(L_23, L_22, (intptr_t)((void*)GetInterfaceMethodInfo(L_22, 1, IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var)), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_24;
		L_24 = AuthenticationServiceInternal_HandleSignInRequestAsync_m3423F29240C8B4EBB2298864A1FEF3309298EE7D(__this, L_23, (bool)1, NULL);
		return L_24;
	}

IL_0099:
	{
		// var exception = BuildClientSessionTokenNotExistsException();
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_25;
		L_25 = AuthenticationServiceInternal_BuildClientSessionTokenNotExistsException_mA320063CFD01D9F47CDD6CC2E9FF6132254A3345(__this, NULL);
		V_2 = L_25;
		// SendSignInFailedEvent(exception, true);
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_26 = V_2;
		AuthenticationServiceInternal_SendSignInFailedEvent_mAC3544A54E02CF24D377A1DCC62FAB1288D360CD(__this, L_26, (bool)1, NULL);
		// return Task.FromException(exception);
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_27 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_28;
		L_28 = Task_FromException_m7E03FBDDCA95F6577A18B1D1F708738734F63195(L_27, NULL);
		return L_28;
	}

IL_00af:
	{
		// var exception = BuildClientInvalidStateException();
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_29;
		L_29 = AuthenticationServiceInternal_BuildClientInvalidStateException_mCE5ABCF38E7335CDF489B59B28413F031D52FCB7(__this, NULL);
		V_3 = L_29;
		// SendSignInFailedEvent(exception, false);
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_30 = V_3;
		AuthenticationServiceInternal_SendSignInFailedEvent_mAC3544A54E02CF24D377A1DCC62FAB1288D360CD(__this, L_30, (bool)0, NULL);
		// return Task.FromException(exception);
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_31 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_32;
		L_32 = Task_FromException_m7E03FBDDCA95F6577A18B1D1F708738734F63195(L_31, NULL);
		return L_32;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::SignInWithAppleAsync(System.String,Unity.Services.Authentication.SignInOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_SignInWithAppleAsync_m9438959DDE9EA79980705E87D4C9A582261E7928 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___idToken0, SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3588789C48AB78DB91B054AB1061B98B63526313);
		s_Il2CppMethodInitialized = true;
	}
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B2_0 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B2_3 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B1_0 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B3_1 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B3_4 = NULL;
	{
		// return SignInWithExternalTokenAsync(IdProviderKeys.Apple, new SignInWithExternalTokenRequest
		// {
		//     IdProvider = IdProviderKeys.Apple,
		//     Token = idToken,
		//     SignInOnly = !options?.CreateAccount ?? false
		// });
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_0 = (SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055*)il2cpp_codegen_object_new(SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SignInWithExternalTokenRequest__ctor_mBF7A476AF9D85BEDA4DD76A7DC5108A7BC74E82C(L_0, NULL);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_1 = L_0;
		NullCheck(L_1);
		L_1->___IdProvider_0 = _stringLiteral3588789C48AB78DB91B054AB1061B98B63526313;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___IdProvider_0), (void*)_stringLiteral3588789C48AB78DB91B054AB1061B98B63526313);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_2 = L_1;
		String_t* L_3 = ___idToken0;
		NullCheck(L_2);
		L_2->___Token_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Token_1), (void*)L_3);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_4 = L_2;
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_5 = ___options1;
		G_B1_0 = L_4;
		G_B1_1 = L_4;
		G_B1_2 = _stringLiteral3588789C48AB78DB91B054AB1061B98B63526313;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_4;
			G_B2_2 = _stringLiteral3588789C48AB78DB91B054AB1061B98B63526313;
			G_B2_3 = __this;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002d;
	}

IL_0024:
	{
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = SignInOptions_get_CreateAccount_m487DE1145466E4820534680E55CD209335908E02_inline(L_6, NULL);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___SignInOnly_2 = (bool)G_B3_0;
		NullCheck(G_B3_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = AuthenticationServiceInternal_SignInWithExternalTokenAsync_m821E9C1642EB0B5F30F6B58675E835275F38DD3C(G_B3_4, G_B3_3, G_B3_2, (bool)1, NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::LinkWithAppleAsync(System.String,Unity.Services.Authentication.LinkOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_LinkWithAppleAsync_m79812F4B8E123CA37B4F9ACD7091724C27AB8DC7 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___idToken0, LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3588789C48AB78DB91B054AB1061B98B63526313);
		s_Il2CppMethodInitialized = true;
	}
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B2_0 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B2_3 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B1_0 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B3_1 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B3_4 = NULL;
	{
		// return LinkWithExternalTokenAsync(IdProviderKeys.Apple, new LinkWithExternalTokenRequest
		// {
		//     IdProvider = IdProviderKeys.Apple,
		//     Token = idToken,
		//     ForceLink = options?.ForceLink ?? false
		// });
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_0 = (LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3*)il2cpp_codegen_object_new(LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkWithExternalTokenRequest__ctor_mC926C1E239309874F3E8594862352CD189407CE5(L_0, NULL);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___IdProvider_0 = _stringLiteral3588789C48AB78DB91B054AB1061B98B63526313;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___IdProvider_0), (void*)_stringLiteral3588789C48AB78DB91B054AB1061B98B63526313);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_2 = L_1;
		String_t* L_3 = ___idToken0;
		NullCheck(L_2);
		L_2->___Token_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Token_1), (void*)L_3);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_4 = L_2;
		LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* L_5 = ___options1;
		G_B1_0 = L_4;
		G_B1_1 = L_4;
		G_B1_2 = _stringLiteral3588789C48AB78DB91B054AB1061B98B63526313;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_4;
			G_B2_2 = _stringLiteral3588789C48AB78DB91B054AB1061B98B63526313;
			G_B2_3 = __this;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0024:
	{
		LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = LinkOptions_get_ForceLink_m7091635AF7588667BF843D8AAFFBBDE3B4D3426F_inline(L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		G_B3_1->___ForceLink_2 = (bool)G_B3_0;
		NullCheck(G_B3_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = AuthenticationServiceInternal_LinkWithExternalTokenAsync_mADEE06BFC252587421B771D9148D64AEEF3AE182(G_B3_4, G_B3_3, G_B3_2, NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::UnlinkAppleAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_UnlinkAppleAsync_m0BB7B1F4D85E74B4740D8978F2A645BF70A2565E (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3588789C48AB78DB91B054AB1061B98B63526313);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnlinkExternalTokenAsync(IdProviderKeys.Apple);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = AuthenticationServiceInternal_UnlinkExternalTokenAsync_m5C2F9AC1CF447733FC51EE6BCA54C79910B5DF53(__this, _stringLiteral3588789C48AB78DB91B054AB1061B98B63526313, NULL);
		return L_0;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::SignInWithGoogleAsync(System.String,Unity.Services.Authentication.SignInOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_SignInWithGoogleAsync_mB7ADE93702AA18F34566D4780F64DDDCDF3E4EBE (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___idToken0, SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89);
		s_Il2CppMethodInitialized = true;
	}
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B2_0 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B2_3 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B1_0 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B3_1 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B3_4 = NULL;
	{
		// return SignInWithExternalTokenAsync(IdProviderKeys.Google, new SignInWithExternalTokenRequest
		// {
		//     IdProvider = IdProviderKeys.Google,
		//     Token = idToken,
		//     SignInOnly = !options?.CreateAccount ?? false
		// });
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_0 = (SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055*)il2cpp_codegen_object_new(SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SignInWithExternalTokenRequest__ctor_mBF7A476AF9D85BEDA4DD76A7DC5108A7BC74E82C(L_0, NULL);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_1 = L_0;
		NullCheck(L_1);
		L_1->___IdProvider_0 = _stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___IdProvider_0), (void*)_stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_2 = L_1;
		String_t* L_3 = ___idToken0;
		NullCheck(L_2);
		L_2->___Token_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Token_1), (void*)L_3);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_4 = L_2;
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_5 = ___options1;
		G_B1_0 = L_4;
		G_B1_1 = L_4;
		G_B1_2 = _stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_4;
			G_B2_2 = _stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89;
			G_B2_3 = __this;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002d;
	}

IL_0024:
	{
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = SignInOptions_get_CreateAccount_m487DE1145466E4820534680E55CD209335908E02_inline(L_6, NULL);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___SignInOnly_2 = (bool)G_B3_0;
		NullCheck(G_B3_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = AuthenticationServiceInternal_SignInWithExternalTokenAsync_m821E9C1642EB0B5F30F6B58675E835275F38DD3C(G_B3_4, G_B3_3, G_B3_2, (bool)1, NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::LinkWithGoogleAsync(System.String,Unity.Services.Authentication.LinkOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_LinkWithGoogleAsync_m9322A07ED46D38662C2DE33860EB3781021219AC (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___idToken0, LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89);
		s_Il2CppMethodInitialized = true;
	}
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B2_0 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B2_3 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B1_0 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B3_1 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B3_4 = NULL;
	{
		// return LinkWithExternalTokenAsync(IdProviderKeys.Google, new LinkWithExternalTokenRequest
		// {
		//     IdProvider = IdProviderKeys.Google,
		//     Token = idToken,
		//     ForceLink = options?.ForceLink ?? false
		// });
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_0 = (LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3*)il2cpp_codegen_object_new(LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkWithExternalTokenRequest__ctor_mC926C1E239309874F3E8594862352CD189407CE5(L_0, NULL);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___IdProvider_0 = _stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___IdProvider_0), (void*)_stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_2 = L_1;
		String_t* L_3 = ___idToken0;
		NullCheck(L_2);
		L_2->___Token_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Token_1), (void*)L_3);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_4 = L_2;
		LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* L_5 = ___options1;
		G_B1_0 = L_4;
		G_B1_1 = L_4;
		G_B1_2 = _stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_4;
			G_B2_2 = _stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89;
			G_B2_3 = __this;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0024:
	{
		LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = LinkOptions_get_ForceLink_m7091635AF7588667BF843D8AAFFBBDE3B4D3426F_inline(L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		G_B3_1->___ForceLink_2 = (bool)G_B3_0;
		NullCheck(G_B3_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = AuthenticationServiceInternal_LinkWithExternalTokenAsync_mADEE06BFC252587421B771D9148D64AEEF3AE182(G_B3_4, G_B3_3, G_B3_2, NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::UnlinkGoogleAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_UnlinkGoogleAsync_m683BE3D579149A80CEE804CA2BC44E79795D9660 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnlinkExternalTokenAsync(IdProviderKeys.Google);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = AuthenticationServiceInternal_UnlinkExternalTokenAsync_m5C2F9AC1CF447733FC51EE6BCA54C79910B5DF53(__this, _stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89, NULL);
		return L_0;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::SignInWithGooglePlayGamesAsync(System.String,Unity.Services.Authentication.SignInOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_SignInWithGooglePlayGamesAsync_mA4C432134C661EFAC1F39B58B1E6CB2C223AFAFE (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___authCode0, SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5);
		s_Il2CppMethodInitialized = true;
	}
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B2_0 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B2_3 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B1_0 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B3_1 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B3_4 = NULL;
	{
		// return SignInWithExternalTokenAsync(IdProviderKeys.GooglePlayGames, new SignInWithExternalTokenRequest
		// {
		//     IdProvider = IdProviderKeys.GooglePlayGames,
		//     Token = authCode,
		//     SignInOnly = !options?.CreateAccount ?? false
		// });
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_0 = (SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055*)il2cpp_codegen_object_new(SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SignInWithExternalTokenRequest__ctor_mBF7A476AF9D85BEDA4DD76A7DC5108A7BC74E82C(L_0, NULL);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_1 = L_0;
		NullCheck(L_1);
		L_1->___IdProvider_0 = _stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___IdProvider_0), (void*)_stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_2 = L_1;
		String_t* L_3 = ___authCode0;
		NullCheck(L_2);
		L_2->___Token_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Token_1), (void*)L_3);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_4 = L_2;
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_5 = ___options1;
		G_B1_0 = L_4;
		G_B1_1 = L_4;
		G_B1_2 = _stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_4;
			G_B2_2 = _stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5;
			G_B2_3 = __this;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002d;
	}

IL_0024:
	{
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = SignInOptions_get_CreateAccount_m487DE1145466E4820534680E55CD209335908E02_inline(L_6, NULL);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___SignInOnly_2 = (bool)G_B3_0;
		NullCheck(G_B3_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = AuthenticationServiceInternal_SignInWithExternalTokenAsync_m821E9C1642EB0B5F30F6B58675E835275F38DD3C(G_B3_4, G_B3_3, G_B3_2, (bool)1, NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::LinkWithGooglePlayGamesAsync(System.String,Unity.Services.Authentication.LinkOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_LinkWithGooglePlayGamesAsync_mB06D2C704996E57BD3C7931DC47C98C82F07AC82 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___authCode0, LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5);
		s_Il2CppMethodInitialized = true;
	}
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B2_0 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B2_3 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B1_0 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B3_1 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B3_4 = NULL;
	{
		// return LinkWithExternalTokenAsync(IdProviderKeys.GooglePlayGames, new LinkWithExternalTokenRequest
		// {
		//     IdProvider = IdProviderKeys.GooglePlayGames,
		//     Token = authCode,
		//     ForceLink = options?.ForceLink ?? false
		// });
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_0 = (LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3*)il2cpp_codegen_object_new(LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkWithExternalTokenRequest__ctor_mC926C1E239309874F3E8594862352CD189407CE5(L_0, NULL);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___IdProvider_0 = _stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___IdProvider_0), (void*)_stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_2 = L_1;
		String_t* L_3 = ___authCode0;
		NullCheck(L_2);
		L_2->___Token_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Token_1), (void*)L_3);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_4 = L_2;
		LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* L_5 = ___options1;
		G_B1_0 = L_4;
		G_B1_1 = L_4;
		G_B1_2 = _stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_4;
			G_B2_2 = _stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5;
			G_B2_3 = __this;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0024:
	{
		LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = LinkOptions_get_ForceLink_m7091635AF7588667BF843D8AAFFBBDE3B4D3426F_inline(L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		G_B3_1->___ForceLink_2 = (bool)G_B3_0;
		NullCheck(G_B3_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = AuthenticationServiceInternal_LinkWithExternalTokenAsync_mADEE06BFC252587421B771D9148D64AEEF3AE182(G_B3_4, G_B3_3, G_B3_2, NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::UnlinkGooglePlayGamesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_UnlinkGooglePlayGamesAsync_m996F398C7E64BC86BA301F52F8BE02F4F1FA1728 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnlinkExternalTokenAsync(IdProviderKeys.GooglePlayGames);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = AuthenticationServiceInternal_UnlinkExternalTokenAsync_m5C2F9AC1CF447733FC51EE6BCA54C79910B5DF53(__this, _stringLiteral74DBB1FA384F71D25680C4252B306407F63815A5, NULL);
		return L_0;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::SignInWithFacebookAsync(System.String,Unity.Services.Authentication.SignInOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_SignInWithFacebookAsync_m1A8CF00A875AAA4BEE722EFED56A6DA75F6A8723 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___accessToken0, SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37);
		s_Il2CppMethodInitialized = true;
	}
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B2_0 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B2_3 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B1_0 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B3_1 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B3_4 = NULL;
	{
		// return SignInWithExternalTokenAsync(IdProviderKeys.Facebook, new SignInWithExternalTokenRequest
		// {
		//     IdProvider = IdProviderKeys.Facebook,
		//     Token = accessToken,
		//     SignInOnly = !options?.CreateAccount ?? false
		// });
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_0 = (SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055*)il2cpp_codegen_object_new(SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SignInWithExternalTokenRequest__ctor_mBF7A476AF9D85BEDA4DD76A7DC5108A7BC74E82C(L_0, NULL);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_1 = L_0;
		NullCheck(L_1);
		L_1->___IdProvider_0 = _stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___IdProvider_0), (void*)_stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_2 = L_1;
		String_t* L_3 = ___accessToken0;
		NullCheck(L_2);
		L_2->___Token_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Token_1), (void*)L_3);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_4 = L_2;
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_5 = ___options1;
		G_B1_0 = L_4;
		G_B1_1 = L_4;
		G_B1_2 = _stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_4;
			G_B2_2 = _stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37;
			G_B2_3 = __this;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002d;
	}

IL_0024:
	{
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = SignInOptions_get_CreateAccount_m487DE1145466E4820534680E55CD209335908E02_inline(L_6, NULL);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___SignInOnly_2 = (bool)G_B3_0;
		NullCheck(G_B3_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = AuthenticationServiceInternal_SignInWithExternalTokenAsync_m821E9C1642EB0B5F30F6B58675E835275F38DD3C(G_B3_4, G_B3_3, G_B3_2, (bool)1, NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::LinkWithFacebookAsync(System.String,Unity.Services.Authentication.LinkOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_LinkWithFacebookAsync_m9CF62A069FA85C851F146BACFF78DD9242E3D822 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___accessToken0, LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37);
		s_Il2CppMethodInitialized = true;
	}
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B2_0 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B2_3 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B1_0 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B3_1 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B3_4 = NULL;
	{
		// return LinkWithExternalTokenAsync(IdProviderKeys.Facebook, new LinkWithExternalTokenRequest
		// {
		//     IdProvider = IdProviderKeys.Facebook,
		//     Token = accessToken,
		//     ForceLink = options?.ForceLink ?? false
		// });
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_0 = (LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3*)il2cpp_codegen_object_new(LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkWithExternalTokenRequest__ctor_mC926C1E239309874F3E8594862352CD189407CE5(L_0, NULL);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___IdProvider_0 = _stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___IdProvider_0), (void*)_stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_2 = L_1;
		String_t* L_3 = ___accessToken0;
		NullCheck(L_2);
		L_2->___Token_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Token_1), (void*)L_3);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_4 = L_2;
		LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* L_5 = ___options1;
		G_B1_0 = L_4;
		G_B1_1 = L_4;
		G_B1_2 = _stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_4;
			G_B2_2 = _stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37;
			G_B2_3 = __this;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0024:
	{
		LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = LinkOptions_get_ForceLink_m7091635AF7588667BF843D8AAFFBBDE3B4D3426F_inline(L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		G_B3_1->___ForceLink_2 = (bool)G_B3_0;
		NullCheck(G_B3_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = AuthenticationServiceInternal_LinkWithExternalTokenAsync_mADEE06BFC252587421B771D9148D64AEEF3AE182(G_B3_4, G_B3_3, G_B3_2, NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::UnlinkFacebookAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_UnlinkFacebookAsync_m9338E359D55A2F7C7D360756C5F0BDA69E8CEA68 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnlinkExternalTokenAsync(IdProviderKeys.Facebook);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = AuthenticationServiceInternal_UnlinkExternalTokenAsync_m5C2F9AC1CF447733FC51EE6BCA54C79910B5DF53(__this, _stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37, NULL);
		return L_0;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::SignInWithSteamAsync(System.String,Unity.Services.Authentication.SignInOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_SignInWithSteamAsync_m38ECA4D8B9C2882D1CEA57641C6226DBEFD68719 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___sessionTicket0, SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF);
		s_Il2CppMethodInitialized = true;
	}
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B2_0 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B2_3 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B1_0 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B3_1 = NULL;
	SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B3_4 = NULL;
	{
		// return SignInWithExternalTokenAsync(IdProviderKeys.Steam, new SignInWithExternalTokenRequest
		// {
		//     IdProvider = IdProviderKeys.Steam,
		//     Token = sessionTicket,
		//     SignInOnly = !options?.CreateAccount ?? false
		// });
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_0 = (SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055*)il2cpp_codegen_object_new(SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SignInWithExternalTokenRequest__ctor_mBF7A476AF9D85BEDA4DD76A7DC5108A7BC74E82C(L_0, NULL);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_1 = L_0;
		NullCheck(L_1);
		L_1->___IdProvider_0 = _stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___IdProvider_0), (void*)_stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_2 = L_1;
		String_t* L_3 = ___sessionTicket0;
		NullCheck(L_2);
		L_2->___Token_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Token_1), (void*)L_3);
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_4 = L_2;
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_5 = ___options1;
		G_B1_0 = L_4;
		G_B1_1 = L_4;
		G_B1_2 = _stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_4;
			G_B2_2 = _stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF;
			G_B2_3 = __this;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002d;
	}

IL_0024:
	{
		SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = SignInOptions_get_CreateAccount_m487DE1145466E4820534680E55CD209335908E02_inline(L_6, NULL);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___SignInOnly_2 = (bool)G_B3_0;
		NullCheck(G_B3_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = AuthenticationServiceInternal_SignInWithExternalTokenAsync_m821E9C1642EB0B5F30F6B58675E835275F38DD3C(G_B3_4, G_B3_3, G_B3_2, (bool)1, NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::LinkWithSteamAsync(System.String,Unity.Services.Authentication.LinkOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_LinkWithSteamAsync_m35E08ECD20157F5BFFCBDAE974C19ABB9A8A2AF1 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___sessionTicket0, LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF);
		s_Il2CppMethodInitialized = true;
	}
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B2_0 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B2_3 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B1_0 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B3_1 = NULL;
	LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B3_4 = NULL;
	{
		// return LinkWithExternalTokenAsync(IdProviderKeys.Steam, new LinkWithExternalTokenRequest
		// {
		//     IdProvider = IdProviderKeys.Steam,
		//     Token = sessionTicket,
		//     ForceLink = options?.ForceLink ?? false
		// });
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_0 = (LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3*)il2cpp_codegen_object_new(LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkWithExternalTokenRequest__ctor_mC926C1E239309874F3E8594862352CD189407CE5(L_0, NULL);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___IdProvider_0 = _stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___IdProvider_0), (void*)_stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_2 = L_1;
		String_t* L_3 = ___sessionTicket0;
		NullCheck(L_2);
		L_2->___Token_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Token_1), (void*)L_3);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_4 = L_2;
		LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* L_5 = ___options1;
		G_B1_0 = L_4;
		G_B1_1 = L_4;
		G_B1_2 = _stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_4;
			G_B2_2 = _stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF;
			G_B2_3 = __this;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0024:
	{
		LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = LinkOptions_get_ForceLink_m7091635AF7588667BF843D8AAFFBBDE3B4D3426F_inline(L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		G_B3_1->___ForceLink_2 = (bool)G_B3_0;
		NullCheck(G_B3_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = AuthenticationServiceInternal_LinkWithExternalTokenAsync_mADEE06BFC252587421B771D9148D64AEEF3AE182(G_B3_4, G_B3_3, G_B3_2, NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::UnlinkSteamAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_UnlinkSteamAsync_m1A9027DF204C5483D17F7E9409D235B39939EE91 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnlinkExternalTokenAsync(IdProviderKeys.Steam);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = AuthenticationServiceInternal_UnlinkExternalTokenAsync_m5C2F9AC1CF447733FC51EE6BCA54C79910B5DF53(__this, _stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF, NULL);
		return L_0;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::DeleteAccountAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_DeleteAccountAsync_mF911D9854C8197F76E1BFFF384AF7F218312A751 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_mADF80608E3A9D685AB8AB78D160E81B7EFCCE298_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_mADF80608E3A9D685AB8AB78D160E81B7EFCCE298(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_mADF80608E3A9D685AB8AB78D160E81B7EFCCE298_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::SignOut(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_SignOut_m57F1EDE2B4ED5BAD2B115CC8706318E39848D18F (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, bool ___clearCredentials0, const RuntimeMethod* method) 
{
	{
		// AccessTokenComponent.Clear();
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_0;
		L_0 = AuthenticationServiceInternal_get_AccessTokenComponent_mA3669DE89749DFCFA04AE2A4DB47505AD55D248E_inline(__this, NULL);
		NullCheck(L_0);
		AccessTokenComponent_Clear_mEDC9FC08D14A8270968A106A7D72C43686DDD5F6(L_0, NULL);
		// PlayerInfo = null;
		AuthenticationServiceInternal_set_PlayerInfo_m7A68E82BD9D316E342DF5E3AECAF108EDD238EF4_inline(__this, (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF*)NULL, NULL);
		// if (clearCredentials)
		bool L_1 = ___clearCredentials0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// SessionTokenComponent.Clear();
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_2;
		L_2 = AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046_inline(__this, NULL);
		NullCheck(L_2);
		SessionTokenComponent_Clear_m8C8411835ADD425D4A042F2345BCCB60FD2B6351(L_2, NULL);
		// PlayerIdComponent.Clear();
		PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* L_3;
		L_3 = AuthenticationServiceInternal_get_PlayerIdComponent_mCB05A130C555F6DF00E4CBCD63A86DAACF9DF743_inline(__this, NULL);
		NullCheck(L_3);
		PlayerIdComponent_Clear_m438DBB045CB0417378B50D1B5A1E5F2DD4FCFE4B(L_3, NULL);
	}

IL_002b:
	{
		// CancelScheduledRefresh();
		AuthenticationServiceInternal_CancelScheduledRefresh_m0B29DB4688BAC73FE422A438F3E0F3497EACEFAC(__this, NULL);
		// CancelScheduledExpiration();
		AuthenticationServiceInternal_CancelScheduledExpiration_m557C0FF13043CED6124ED31DA2B58E6CB6C63481(__this, NULL);
		// ChangeState(AuthenticationState.SignedOut);
		AuthenticationServiceInternal_ChangeState_m91558470DA842D246FA2DC42F92E8602E719A61F(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::SwitchProfile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_SwitchProfile_mF20971349EFB7A009768687FD8377C6C509749FE (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___profile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProfile_t0DC486F874AA0450CBE9E4F75A5733093B2E76E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBD2C55ACA8C0FD25D369CC2C0AF8112C364CDCE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (State == AuthenticationState.SignedOut)
		int32_t L_0;
		L_0 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		// if (!string.IsNullOrEmpty(profile) && Regex.Match(profile, k_ProfileRegex).Success)
		String_t* L_1 = ___profile0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3 = ___profile0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_4;
		L_4 = Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972(L_3, _stringLiteralBBD2C55ACA8C0FD25D369CC2C0AF8112C364CDCE, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// m_Profile.Current = profile;
		RuntimeObject* L_6 = __this->___m_Profile_16;
		String_t* L_7 = ___profile0;
		NullCheck(L_6);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Unity.Services.Authentication.IProfile::set_Current(System.String) */, IProfile_t0DC486F874AA0450CBE9E4F75A5733093B2E76E7_il2cpp_TypeInfo_var, L_6, L_7);
		return;
	}

IL_002f:
	{
		// throw BuildClientInvalidProfileException();
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_8;
		L_8 = AuthenticationServiceInternal_BuildClientInvalidProfileException_m30726F6D4F817B2231A5BC942B23EA4EEE073BC9(__this, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationServiceInternal_SwitchProfile_mF20971349EFB7A009768687FD8377C6C509749FE_RuntimeMethod_var)));
	}

IL_0036:
	{
		// throw BuildClientInvalidStateException();
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_9;
		L_9 = AuthenticationServiceInternal_BuildClientInvalidStateException_mCE5ABCF38E7335CDF489B59B28413F031D52FCB7(__this, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationServiceInternal_SwitchProfile_mF20971349EFB7A009768687FD8377C6C509749FE_RuntimeMethod_var)));
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ClearSessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ClearSessionToken_mEA69C75EA48AA816E80655FAF60D15BFAB520956 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// if (State == AuthenticationState.SignedOut)
		int32_t L_0;
		L_0 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// SessionTokenComponent.Clear();
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_1;
		L_1 = AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046_inline(__this, NULL);
		NullCheck(L_1);
		SessionTokenComponent_Clear_m8C8411835ADD425D4A042F2345BCCB60FD2B6351(L_1, NULL);
		return;
	}

IL_0014:
	{
		// throw BuildClientInvalidStateException();
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_2;
		L_2 = AuthenticationServiceInternal_BuildClientInvalidStateException_mCE5ABCF38E7335CDF489B59B28413F031D52FCB7(__this, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationServiceInternal_ClearSessionToken_mEA69C75EA48AA816E80655FAF60D15BFAB520956_RuntimeMethod_var)));
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.PlayerInfo> Unity.Services.Authentication.AuthenticationServiceInternal::GetPlayerInfoAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t21DAACEAA1083EAA8F411BB4BB8B70E2F7806104* AuthenticationServiceInternal_GetPlayerInfoAsync_m56A32EE64505A5AA2F7E920F02C062F99BFFC5F2 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m3B201A12EB2219BB0A173006EE63A9B6E246EA5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_mBD41A694EEF9D7926A01145A2486BA19E72FDCA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m28A51CC5C3936DE084776A7B6C2EA27A66E8E44E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m3B201A12EB2219BB0A173006EE63A9B6E246EA5B(AsyncTaskMethodBuilder_1_Create_m3B201A12EB2219BB0A173006EE63A9B6E246EA5B_RuntimeMethod_var);
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
		AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_mBD41A694EEF9D7926A01145A2486BA19E72FDCA0(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_mBD41A694EEF9D7926A01145A2486BA19E72FDCA0_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t21DAACEAA1083EAA8F411BB4BB8B70E2F7806104* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m28A51CC5C3936DE084776A7B6C2EA27A66E8E44E(L_2, AsyncTaskMethodBuilder_1_get_Task_m28A51CC5C3936DE084776A7B6C2EA27A66E8E44E_RuntimeMethod_var);
		return L_3;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::GetWellKnownKeysAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_GetWellKnownKeysAsync_mD0C8F37924E1F10A4F59FC7106BBCF25040708BF (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_m6B01815C9ABE00AB7E4E02B151A0150A40D613C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_m6B01815C9ABE00AB7E4E02B151A0150A40D613C6(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_m6B01815C9ABE00AB7E4E02B151A0150A40D613C6_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::SignInWithExternalTokenAsync(System.String,Unity.Services.Authentication.SignInWithExternalTokenRequest,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_SignInWithExternalTokenAsync_m821E9C1642EB0B5F30F6B58675E835275F38DD3C (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___idProvider0, SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* ___request1, bool ___enableRefresh2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass97_0_U3CSignInWithExternalTokenAsyncU3Eb__0_m07A4442E08A0997C3275D7786DCBEC910A631001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9* V_0 = NULL;
	RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9* L_0 = (U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass97_0__ctor_m26863091C75F9C18120797E2DBE8DDE1763AF4F4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9* L_2 = V_0;
		String_t* L_3 = ___idProvider0;
		NullCheck(L_2);
		L_2->___idProvider_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___idProvider_1), (void*)L_3);
		U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9* L_4 = V_0;
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_5 = ___request1;
		NullCheck(L_4);
		L_4->___request_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___request_2), (void*)L_5);
		// if (State == AuthenticationState.SignedOut || State == AuthenticationState.Expired)
		int32_t L_6;
		L_6 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7;
		L_7 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)4))))
		{
			goto IL_0040;
		}
	}

IL_002c:
	{
		// return HandleSignInRequestAsync(() => NetworkClient.SignInWithExternalTokenAsync(idProvider, request), enableRefresh);
		U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9* L_8 = V_0;
		Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B* L_9 = (Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B*)il2cpp_codegen_object_new(Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_1__ctor_m0398A1CA520FA7EAC7A83EF5F0F69F25581817FD(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass97_0_U3CSignInWithExternalTokenAsyncU3Eb__0_m07A4442E08A0997C3275D7786DCBEC910A631001_RuntimeMethod_var), NULL);
		bool L_10 = ___enableRefresh2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
		L_11 = AuthenticationServiceInternal_HandleSignInRequestAsync_m3423F29240C8B4EBB2298864A1FEF3309298EE7D(__this, L_9, L_10, NULL);
		return L_11;
	}

IL_0040:
	{
		// var exception = BuildClientInvalidStateException();
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_12;
		L_12 = AuthenticationServiceInternal_BuildClientInvalidStateException_mCE5ABCF38E7335CDF489B59B28413F031D52FCB7(__this, NULL);
		V_1 = L_12;
		// SendSignInFailedEvent(exception, false);
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_13 = V_1;
		AuthenticationServiceInternal_SendSignInFailedEvent_mAC3544A54E02CF24D377A1DCC62FAB1288D360CD(__this, L_13, (bool)0, NULL);
		// return Task.FromException(exception);
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_15;
		L_15 = Task_FromException_m7E03FBDDCA95F6577A18B1D1F708738734F63195(L_14, NULL);
		return L_15;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::LinkWithExternalTokenAsync(System.String,Unity.Services.Authentication.LinkWithExternalTokenRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_LinkWithExternalTokenAsync_mADEE06BFC252587421B771D9148D64AEEF3AE182 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___idProvider0, LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* ___request1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mC98A209C02DCC6A42893CE31542167CDB6F5BB81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		String_t* L_1 = ___idProvider0;
		(&V_0)->___idProvider_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___idProvider_4), (void*)L_1);
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_2 = ___request1;
		(&V_0)->___request_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___request_2), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mC98A209C02DCC6A42893CE31542167CDB6F5BB81(L_3, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mC98A209C02DCC6A42893CE31542167CDB6F5BB81_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_4, NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::UnlinkExternalTokenAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_UnlinkExternalTokenAsync_m5C2F9AC1CF447733FC51EE6BCA54C79910B5DF53 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___idProvider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m5620F32435B96B0412BB65811A7435D953C6C857_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___idProvider0;
		(&V_0)->___idProvider_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___idProvider_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m5620F32435B96B0412BB65811A7435D953C6C857(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m5620F32435B96B0412BB65811A7435D953C6C857_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::RefreshAccessTokenAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_RefreshAccessTokenAsync_m03EB449C187B6B0C62E0BAE40E38E96990FFC1BF (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (IsSignedIn)
		bool L_0;
		L_0 = AuthenticationServiceInternal_get_IsSignedIn_mCF8CDE17E3B5F2ACDCF556705C025DA48D5671FB(__this, NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// if (State == AuthenticationState.Expired)
		int32_t L_1;
		L_1 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0017;
		}
	}
	{
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_2;
	}

IL_0017:
	{
		// var sessionToken = SessionTokenComponent.SessionToken;
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_3;
		L_3 = AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046_inline(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = SessionTokenComponent_get_SessionToken_mFCD6A8E0CAC451180203F6D1F56C9EEBBF61DAFA(L_3, NULL);
		V_0 = L_4;
		// if (string.IsNullOrEmpty(sessionToken))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_7;
	}

IL_0031:
	{
		// return StartRefreshAsync(sessionToken);
		String_t* L_8 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = AuthenticationServiceInternal_StartRefreshAsync_mF7C17957ABBFE3DF4F5537880B7B4D4EBB9F56EC(__this, L_8, NULL);
		return L_9;
	}

IL_0039:
	{
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
		L_10 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_10;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::HandleSignInRequestAsync(System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_HandleSignInRequestAsync_m3423F29240C8B4EBB2298864A1FEF3309298EE7D (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B* ___signInRequest0, bool ___enableRefresh1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_m44C076FE6E399D9BEA929054566B1562F21B542A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B* L_1 = ___signInRequest0;
		(&V_0)->___signInRequest_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___signInRequest_3), (void*)L_1);
		bool L_2 = ___enableRefresh1;
		(&V_0)->___enableRefresh_4 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_m44C076FE6E399D9BEA929054566B1562F21B542A(L_3, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_m44C076FE6E399D9BEA929054566B1562F21B542A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_4, NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::StartRefreshAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationServiceInternal_StartRefreshAsync_mF7C17957ABBFE3DF4F5537880B7B4D4EBB9F56EC (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___sessionToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_mE735C9DF1B1F955105A16E05113F327B19D7EDF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___sessionToken0;
		(&V_0)->___sessionToken_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___sessionToken_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_mE735C9DF1B1F955105A16E05113F327B19D7EDF5(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_mE735C9DF1B1F955105A16E05113F327B19D7EDF5_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CompleteSignIn(Unity.Services.Authentication.SignInResponse,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CompleteSignIn_m05519A7D98EC9B8FB6D2EF043A033FBF0D6885A9 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* ___response0, bool ___enableRefresh1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationSettings_t8C46CC09B2615A65D1B87C8AD71C7637C3767233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDateTimeWrapper_t9D19ED0EA87A563F521F9ACE1DB65E2DBF015957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJwtDecoder_Decode_TisAccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2_mD58CBC228355996B39EE665EDE151FEDC492C843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCompleteSignInU3Eb__103_0_mB59CBC57A89EB9A3DB6948232CB5F3444573652D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B8_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_1 = NULL;
	EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* G_B8_2 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B7_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_1 = NULL;
	EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* G_B7_2 = NULL;
	String_t* G_B10_0 = NULL;
	EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* G_B10_1 = NULL;
	String_t* G_B9_0 = NULL;
	EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* G_B9_1 = NULL;
	String_t* G_B11_0 = NULL;
	EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* G_B11_1 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B14_0 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B13_0 = NULL;
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* G_B15_0 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* G_B15_1 = NULL;
	try
	{// begin try (depth: 1)
		{
			// var accessTokenDecoded = m_JwtDecoder.Decode<AccessToken>(response.IdToken, WellKnownKeysComponent?.Keys);
			RuntimeObject* L_0 = __this->___m_JwtDecoder_17;
			SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_1 = ___response0;
			NullCheck(L_1);
			String_t* L_2 = L_1->___IdToken_1;
			WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* L_3;
			L_3 = AuthenticationServiceInternal_get_WellKnownKeysComponent_m7E533682E0EAD28DE9C952619AC74462C9C2CAAB_inline(__this, NULL);
			WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* L_4 = L_3;
			G_B1_0 = L_4;
			G_B1_1 = L_2;
			G_B1_2 = L_0;
			if (L_4)
			{
				G_B2_0 = L_4;
				G_B2_1 = L_2;
				G_B2_2 = L_0;
				goto IL_0019_1;
			}
		}
		{
			G_B3_0 = ((WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273*)(NULL));
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			goto IL_001e_1;
		}

IL_0019_1:
		{
			NullCheck(G_B2_0);
			WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* L_5;
			L_5 = WellKnownKeysComponent_get_Keys_mE745732161F364314842C6DBC5B2D79A4D98656F_inline(G_B2_0, NULL);
			G_B3_0 = L_5;
			G_B3_1 = G_B2_1;
			G_B3_2 = G_B2_2;
		}

IL_001e_1:
		{
			NullCheck(G_B3_2);
			AccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2* L_6;
			L_6 = GenericInterfaceFuncInvoker2< AccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2*, String_t*, WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* >::Invoke(IJwtDecoder_Decode_TisAccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2_mD58CBC228355996B39EE665EDE151FEDC492C843_RuntimeMethod_var, G_B3_2, G_B3_1, G_B3_0);
			V_0 = L_6;
			// if (accessTokenDecoded == null)
			AccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2* L_7 = V_0;
			if (L_7)
			{
				goto IL_0035_1;
			}
		}
		{
			// throw AuthenticationException.Create(CommonErrorCodes.InvalidToken, "Failed to decode and verify access token.");
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_8;
			L_8 = AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0(((int32_t)51), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral069E76898DCED02EA1198EDF60D34460ED12B74D)), (Exception_t*)NULL, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationServiceInternal_CompleteSignIn_m05519A7D98EC9B8FB6D2EF043A033FBF0D6885A9_RuntimeMethod_var)));
		}

IL_0035_1:
		{
			// AccessTokenComponent.AccessToken = response.IdToken;
			AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_9;
			L_9 = AuthenticationServiceInternal_get_AccessTokenComponent_mA3669DE89749DFCFA04AE2A4DB47505AD55D248E_inline(__this, NULL);
			SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_10 = ___response0;
			NullCheck(L_10);
			String_t* L_11 = L_10->___IdToken_1;
			NullCheck(L_9);
			AccessTokenComponent_set_AccessToken_m63F73183C53D3469EC2E8C6FD1862976D52916E8_inline(L_9, L_11, NULL);
			// if (accessTokenDecoded.Audience != null)
			AccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2* L_12 = V_0;
			NullCheck(L_12);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12->___Audience_3;
			if (!L_13)
			{
				goto IL_0090_1;
			}
		}
		{
			// EnvironmentIdComponent.EnvironmentId = accessTokenDecoded.Audience.FirstOrDefault(s => s.StartsWith("envId:"))?.Substring(6);
			EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* L_14;
			L_14 = AuthenticationServiceInternal_get_EnvironmentIdComponent_m195E0AFCC08E96FB3FB53F3258BF6FBB3B75036A_inline(__this, NULL);
			AccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2* L_15 = V_0;
			NullCheck(L_15);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15->___Audience_3;
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var);
			Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_17 = ((U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var))->___U3CU3E9__103_0_1;
			Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_18 = L_17;
			G_B7_0 = L_18;
			G_B7_1 = L_16;
			G_B7_2 = L_14;
			if (L_18)
			{
				G_B8_0 = L_18;
				G_B8_1 = L_16;
				G_B8_2 = L_14;
				goto IL_0079_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var);
			U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A* L_19 = ((U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_20 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
			NullCheck(L_20);
			Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_20, L_19, (intptr_t)((void*)U3CU3Ec_U3CCompleteSignInU3Eb__103_0_mB59CBC57A89EB9A3DB6948232CB5F3444573652D_RuntimeMethod_var), NULL);
			Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_21 = L_20;
			((U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var))->___U3CU3E9__103_0_1 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var))->___U3CU3E9__103_0_1), (void*)L_21);
			G_B8_0 = L_21;
			G_B8_1 = G_B7_1;
			G_B8_2 = G_B7_2;
		}

IL_0079_1:
		{
			String_t* L_22;
			L_22 = Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74((RuntimeObject*)G_B8_1, G_B8_0, Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74_RuntimeMethod_var);
			String_t* L_23 = L_22;
			G_B9_0 = L_23;
			G_B9_1 = G_B8_2;
			if (L_23)
			{
				G_B10_0 = L_23;
				G_B10_1 = G_B8_2;
				goto IL_0085_1;
			}
		}
		{
			G_B11_0 = ((String_t*)(NULL));
			G_B11_1 = G_B9_1;
			goto IL_008b_1;
		}

IL_0085_1:
		{
			NullCheck(G_B10_0);
			String_t* L_24;
			L_24 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(G_B10_0, 6, NULL);
			G_B11_0 = L_24;
			G_B11_1 = G_B10_1;
		}

IL_008b_1:
		{
			NullCheck(G_B11_1);
			EnvironmentIdComponent_set_EnvironmentId_m530BC338835B82D9D4401F7FF7E23F36321F4808_inline(G_B11_1, G_B11_0, NULL);
		}

IL_0090_1:
		{
			// PlayerInfo = response.User != null ? new PlayerInfo(response.User) : new PlayerInfo(response.UserId);
			SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_25 = ___response0;
			NullCheck(L_25);
			User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* L_26 = L_25->___User_4;
			G_B13_0 = __this;
			if (L_26)
			{
				G_B14_0 = __this;
				goto IL_00a6_1;
			}
		}
		{
			SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_27 = ___response0;
			NullCheck(L_27);
			String_t* L_28 = L_27->___UserId_0;
			PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_29 = (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF*)il2cpp_codegen_object_new(PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF_il2cpp_TypeInfo_var);
			NullCheck(L_29);
			PlayerInfo__ctor_m1BEC1A7D6AC5383CCFC5186FA247449D0311F9CF(L_29, L_28, NULL);
			G_B15_0 = L_29;
			G_B15_1 = G_B13_0;
			goto IL_00b1_1;
		}

IL_00a6_1:
		{
			SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_30 = ___response0;
			NullCheck(L_30);
			User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* L_31 = L_30->___User_4;
			PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_32 = (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF*)il2cpp_codegen_object_new(PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF_il2cpp_TypeInfo_var);
			NullCheck(L_32);
			PlayerInfo__ctor_m06C393A2C3EA9D14D3AD4BC996ADBD76BE07B97E(L_32, L_31, NULL);
			G_B15_0 = L_32;
			G_B15_1 = G_B14_0;
		}

IL_00b1_1:
		{
			NullCheck(G_B15_1);
			AuthenticationServiceInternal_set_PlayerInfo_m7A68E82BD9D316E342DF5E3AECAF108EDD238EF4_inline(G_B15_1, G_B15_0, NULL);
			// PlayerIdComponent.PlayerId = response.UserId;
			PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* L_33;
			L_33 = AuthenticationServiceInternal_get_PlayerIdComponent_mCB05A130C555F6DF00E4CBCD63A86DAACF9DF743_inline(__this, NULL);
			SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_34 = ___response0;
			NullCheck(L_34);
			String_t* L_35 = L_34->___UserId_0;
			NullCheck(L_33);
			PlayerIdComponent_set_PlayerId_mA274F8E83C33A5479A2AD42F3DDBF79E1DFE8EBC(L_33, L_35, NULL);
			// SessionTokenComponent.SessionToken = response.SessionToken;
			SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_36;
			L_36 = AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046_inline(__this, NULL);
			SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_37 = ___response0;
			NullCheck(L_37);
			String_t* L_38 = L_37->___SessionToken_2;
			NullCheck(L_36);
			SessionTokenComponent_set_SessionToken_m169A99C88E662C238FE756FBD44AC46C3C8D2904(L_36, L_38, NULL);
			// var refreshTime = response.ExpiresIn - Settings.AccessTokenRefreshBuffer;
			SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_39 = ___response0;
			NullCheck(L_39);
			int32_t L_40 = L_39->___ExpiresIn_3;
			RuntimeObject* L_41;
			L_41 = AuthenticationServiceInternal_get_Settings_mC9B9A3983876B35F9926EDE4132C902A6B3B9968_inline(__this, NULL);
			NullCheck(L_41);
			int32_t L_42;
			L_42 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Services.Authentication.IAuthenticationSettings::get_AccessTokenRefreshBuffer() */, IAuthenticationSettings_t8C46CC09B2615A65D1B87C8AD71C7637C3767233_il2cpp_TypeInfo_var, L_41);
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_40, L_42));
			// var expiryTime = response.ExpiresIn - Settings.AccessTokenExpiryBuffer;
			SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_43 = ___response0;
			NullCheck(L_43);
			int32_t L_44 = L_43->___ExpiresIn_3;
			RuntimeObject* L_45;
			L_45 = AuthenticationServiceInternal_get_Settings_mC9B9A3983876B35F9926EDE4132C902A6B3B9968_inline(__this, NULL);
			NullCheck(L_45);
			int32_t L_46;
			L_46 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.Services.Authentication.IAuthenticationSettings::get_AccessTokenExpiryBuffer() */, IAuthenticationSettings_t8C46CC09B2615A65D1B87C8AD71C7637C3767233_il2cpp_TypeInfo_var, L_45);
			V_2 = ((int32_t)il2cpp_codegen_subtract(L_44, L_46));
			// AccessTokenComponent.ExpiryTime = m_DateTime.UtcNow.AddSeconds(expiryTime);
			AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_47;
			L_47 = AuthenticationServiceInternal_get_AccessTokenComponent_mA3669DE89749DFCFA04AE2A4DB47505AD55D248E_inline(__this, NULL);
			RuntimeObject* L_48 = __this->___m_DateTime_20;
			NullCheck(L_48);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_49;
			L_49 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(1 /* System.DateTime Unity.Services.Authentication.IDateTimeWrapper::get_UtcNow() */, IDateTimeWrapper_t9D19ED0EA87A563F521F9ACE1DB65E2DBF015957_il2cpp_TypeInfo_var, L_48);
			V_3 = L_49;
			int32_t L_50 = V_2;
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_51;
			L_51 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_3), ((double)L_50), NULL);
			Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_52;
			memset((&L_52), 0, sizeof(L_52));
			Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF((&L_52), L_51, /*hidden argument*/Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
			NullCheck(L_47);
			AccessTokenComponent_set_ExpiryTime_mCC7F031ADF1682401F64DF064612034E37A503B6_inline(L_47, L_52, NULL);
			// if (enableRefresh)
			bool L_53 = ___enableRefresh1;
			if (!L_53)
			{
				goto IL_012e_1;
			}
		}
		{
			// ScheduleRefresh(refreshTime);
			int32_t L_54 = V_1;
			AuthenticationServiceInternal_ScheduleRefresh_mD999E01866FCCBAD4554819092ED652F12138760(__this, ((double)L_54), NULL);
		}

IL_012e_1:
		{
			// ScheduleExpiration(expiryTime);
			int32_t L_55 = V_2;
			AuthenticationServiceInternal_ScheduleExpiration_m80E7EB6B01CACC101D8E850F8E3FAD80F4AC1847(__this, ((double)L_55), NULL);
			// ChangeState(AuthenticationState.Authorized);
			AuthenticationServiceInternal_ChangeState_m91558470DA842D246FA2DC42F92E8602E719A61F(__this, 2, NULL);
			// }
			goto IL_0152;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationException_tB035991B8F9E6DDB3E6EF7D5829B4C7E4E677FB3_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013f;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0142;
		}
		throw e;
	}

CATCH_013f:
	{// begin catch(Unity.Services.Authentication.AuthenticationException)
		// catch (AuthenticationException)
		// throw;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

CATCH_0142:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// throw AuthenticationException.Create(CommonErrorCodes.Unknown, "Unknown error completing sign-in.", e);
		Exception_t* L_56 = V_4;
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_57;
		L_57 = AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0(0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF67B63DDDBE53FE39B3D99C2D009C6DF09C38E70)), L_56, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationServiceInternal_CompleteSignIn_m05519A7D98EC9B8FB6D2EF043A033FBF0D6885A9_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0152:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ScheduleRefresh(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ScheduleRefresh_mD999E01866FCCBAD4554819092ED652F12138760 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, double ___delay0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationServiceInternal_ExecuteScheduledRefresh_m3F20BC22FE9891DB8DA89EDD005EA697F28E53D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDateTimeWrapper_t9D19ED0EA87A563F521F9ACE1DB65E2DBF015957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		// CancelScheduledRefresh();
		AuthenticationServiceInternal_CancelScheduledRefresh_m0B29DB4688BAC73FE422A438F3E0F3497EACEFAC(__this, NULL);
		// if (m_DateTime.UtcNow.AddSeconds(delay) < AccessTokenComponent.ExpiryTime)
		RuntimeObject* L_0 = __this->___m_DateTime_20;
		NullCheck(L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(1 /* System.DateTime Unity.Services.Authentication.IDateTimeWrapper::get_UtcNow() */, IDateTimeWrapper_t9D19ED0EA87A563F521F9ACE1DB65E2DBF015957_il2cpp_TypeInfo_var, L_0);
		V_2 = L_1;
		double L_2 = ___delay0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_2), L_2, NULL);
		V_0 = L_3;
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_4;
		L_4 = AuthenticationServiceInternal_get_AccessTokenComponent_mA3669DE89749DFCFA04AE2A4DB47505AD55D248E_inline(__this, NULL);
		NullCheck(L_4);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_5;
		L_5 = AccessTokenComponent_get_ExpiryTime_mD432CAD7F2F305A36AA717226C651F4A67F420A6_inline(L_4, NULL);
		V_1 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&V_1), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0040;
	}

IL_0033:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = V_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_inline((&V_1), Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = DateTime_op_LessThan_m2A02FFF5F35E33417FB32CB9F948769CA15AED17(L_7, L_8, NULL);
		G_B3_0 = ((int32_t)(L_9));
	}

IL_0040:
	{
		if (!G_B3_0)
		{
			goto IL_0065;
		}
	}
	{
		// RefreshActionId = m_Scheduler.ScheduleAction(ExecuteScheduledRefresh, delay);
		RuntimeObject* L_10 = __this->___m_Scheduler_19;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, __this, (intptr_t)((void*)AuthenticationServiceInternal_ExecuteScheduledRefresh_m3F20BC22FE9891DB8DA89EDD005EA697F28E53D5_RuntimeMethod_var), NULL);
		double L_12 = ___delay0;
		NullCheck(L_10);
		int64_t L_13;
		L_13 = InterfaceFuncInvoker2< int64_t, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, double >::Invoke(0 /* System.Int64 Unity.Services.Core.Scheduler.Internal.IActionScheduler::ScheduleAction(System.Action,System.Double) */, IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_14), L_13, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		AuthenticationServiceInternal_set_RefreshActionId_mBF2A7072312F301BBC125EDFD4FDBF6A55FB7460_inline(__this, L_14, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ScheduleExpiration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ScheduleExpiration_m80E7EB6B01CACC101D8E850F8E3FAD80F4AC1847 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, double ___delay0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationServiceInternal_ExecuteScheduledExpiration_m295051F90C97683E17AEB33E12FF0C251E0AD287_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CancelScheduledExpiration();
		AuthenticationServiceInternal_CancelScheduledExpiration_m557C0FF13043CED6124ED31DA2B58E6CB6C63481(__this, NULL);
		// ExpirationActionId = m_Scheduler.ScheduleAction(ExecuteScheduledExpiration, delay);
		RuntimeObject* L_0 = __this->___m_Scheduler_19;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)AuthenticationServiceInternal_ExecuteScheduledExpiration_m295051F90C97683E17AEB33E12FF0C251E0AD287_RuntimeMethod_var), NULL);
		double L_2 = ___delay0;
		NullCheck(L_0);
		int64_t L_3;
		L_3 = InterfaceFuncInvoker2< int64_t, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, double >::Invoke(0 /* System.Int64 Unity.Services.Core.Scheduler.Internal.IActionScheduler::ScheduleAction(System.Action,System.Double) */, IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		AuthenticationServiceInternal_set_ExpirationActionId_m99D9F7A20AF618C1C9E9A35F879EA553648CD7D8_inline(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ExecuteScheduledRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ExecuteScheduledRefresh_m3F20BC22FE9891DB8DA89EDD005EA697F28E53D5 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RefreshActionId = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = V_0;
		AuthenticationServiceInternal_set_RefreshActionId_mBF2A7072312F301BBC125EDFD4FDBF6A55FB7460_inline(__this, L_0, NULL);
		// RefreshAccessTokenAsync();
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = AuthenticationServiceInternal_RefreshAccessTokenAsync_m03EB449C187B6B0C62E0BAE40E38E96990FFC1BF(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ExecuteScheduledExpiration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ExecuteScheduledExpiration_m295051F90C97683E17AEB33E12FF0C251E0AD287 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ExpirationActionId = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = V_0;
		AuthenticationServiceInternal_set_ExpirationActionId_m99D9F7A20AF618C1C9E9A35F879EA553648CD7D8_inline(__this, L_0, NULL);
		// Expire();
		AuthenticationServiceInternal_Expire_m8C6099E18DC51230DE98008291F7C59CE4956593(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CancelScheduledRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CancelScheduledRefresh_m0B29DB4688BAC73FE422A438F3E0F3497EACEFAC (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (RefreshActionId.HasValue)
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0;
		L_0 = AuthenticationServiceInternal_get_RefreshActionId_mE26972CCF62B936620DFDD885C954E1307AACACC_inline(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_0), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// m_Scheduler.CancelAction(RefreshActionId.Value);
		RuntimeObject* L_2 = __this->___m_Scheduler_19;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
		L_3 = AuthenticationServiceInternal_get_RefreshActionId_mE26972CCF62B936620DFDD885C954E1307AACACC_inline(__this, NULL);
		V_0 = L_3;
		int64_t L_4;
		L_4 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&V_0), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< int64_t >::Invoke(1 /* System.Void Unity.Services.Core.Scheduler.Internal.IActionScheduler::CancelAction(System.Int64) */, IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_il2cpp_TypeInfo_var, L_2, L_4);
		// RefreshActionId = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_5 = V_0;
		AuthenticationServiceInternal_set_RefreshActionId_mBF2A7072312F301BBC125EDFD4FDBF6A55FB7460_inline(__this, L_5, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CancelScheduledExpiration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CancelScheduledExpiration_m557C0FF13043CED6124ED31DA2B58E6CB6C63481 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (ExpirationActionId.HasValue)
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0;
		L_0 = AuthenticationServiceInternal_get_ExpirationActionId_mBF3F9F53133B98D62D753B9CF11D561CC7809519_inline(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_0), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// m_Scheduler.CancelAction(ExpirationActionId.Value);
		RuntimeObject* L_2 = __this->___m_Scheduler_19;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
		L_3 = AuthenticationServiceInternal_get_ExpirationActionId_mBF3F9F53133B98D62D753B9CF11D561CC7809519_inline(__this, NULL);
		V_0 = L_3;
		int64_t L_4;
		L_4 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&V_0), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< int64_t >::Invoke(1 /* System.Void Unity.Services.Core.Scheduler.Internal.IActionScheduler::CancelAction(System.Int64) */, IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_il2cpp_TypeInfo_var, L_2, L_4);
		// ExpirationActionId = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_5 = V_0;
		AuthenticationServiceInternal_set_ExpirationActionId_m99D9F7A20AF618C1C9E9A35F879EA553648CD7D8_inline(__this, L_5, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::Expire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_Expire_m8C6099E18DC51230DE98008291F7C59CE4956593 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// AccessTokenComponent.Clear();
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_0;
		L_0 = AuthenticationServiceInternal_get_AccessTokenComponent_mA3669DE89749DFCFA04AE2A4DB47505AD55D248E_inline(__this, NULL);
		NullCheck(L_0);
		AccessTokenComponent_Clear_mEDC9FC08D14A8270968A106A7D72C43686DDD5F6(L_0, NULL);
		// CancelScheduledRefresh();
		AuthenticationServiceInternal_CancelScheduledRefresh_m0B29DB4688BAC73FE422A438F3E0F3497EACEFAC(__this, NULL);
		// CancelScheduledExpiration();
		AuthenticationServiceInternal_CancelScheduledExpiration_m557C0FF13043CED6124ED31DA2B58E6CB6C63481(__this, NULL);
		// ChangeState(AuthenticationState.Expired);
		AuthenticationServiceInternal_ChangeState_m91558470DA842D246FA2DC42F92E8602E719A61F(__this, 4, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::MigrateCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_MigrateCache_mF2F36D8CA3F887DAAF9E3374A6DFCBF488958FAB (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// SessionTokenComponent.Migrate();
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_0;
		L_0 = AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046_inline(__this, NULL);
		NullCheck(L_0);
		SessionTokenComponent_Migrate_m270AD9D9556543733F170747713346F076210D86(L_0, NULL);
		// }
		goto IL_0014;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000d;
		}
		throw e;
	}

CATCH_000d:
	{// begin catch(System.Exception)
		// Debug.LogException(e);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0014;
	}// end catch (depth: 1)

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ChangeState(Unity.Services.Authentication.AuthenticationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ChangeState_m91558470DA842D246FA2DC42F92E8602E719A61F (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, int32_t ___newState0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (State == newState)
		int32_t L_0;
		L_0 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		int32_t L_1 = ___newState0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// var oldState = State;
		int32_t L_2;
		L_2 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		V_0 = L_2;
		// State = newState;
		int32_t L_3 = ___newState0;
		AuthenticationServiceInternal_set_State_mBE3362F5E6AAA06DA3D0D9CFA6CE38C5A5991FA1_inline(__this, L_3, NULL);
		// HandleStateChanged(oldState, newState);
		int32_t L_4 = V_0;
		int32_t L_5 = ___newState0;
		AuthenticationServiceInternal_HandleStateChanged_mA91EB55BD7CB58B1D54CE9AFBF300671A11E5082(__this, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::HandleStateChanged(Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_HandleStateChanged_mA91EB55BD7CB58B1D54CE9AFBF300671A11E5082 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method) 
{
	Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* G_B2_0 = NULL;
	Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* G_B1_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B8_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B7_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B12_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B11_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B15_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B14_0 = NULL;
	{
		// StateChanged?.Invoke(oldState, newState);
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_0 = __this->___StateChanged_22;
		Action_2_t3885175063AC85E130D1D84F533BDC9D6727A537* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		int32_t L_2 = ___oldState0;
		int32_t L_3 = ___newState1;
		NullCheck(G_B2_0);
		Action_2_Invoke_m5990E16EB63DD4F10939145AD950E5D0FB683630_inline(G_B2_0, L_2, L_3, NULL);
	}

IL_0013:
	{
		int32_t L_4 = ___newState1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0068;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_0068;
			}
			case 4:
			{
				goto IL_0058;
			}
		}
	}
	{
		return;
	}

IL_002e:
	{
		// if (oldState != AuthenticationState.Refreshing)
		int32_t L_5 = ___oldState0;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_0068;
		}
	}
	{
		// SignedIn?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = __this->___SignedIn_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = L_6;
		G_B7_0 = L_7;
		if (L_7)
		{
			G_B8_0 = L_7;
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		NullCheck(G_B8_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B8_0, NULL);
		// break;
		return;
	}

IL_0043:
	{
		// if (oldState != AuthenticationState.SigningIn)
		int32_t L_8 = ___oldState0;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0068;
		}
	}
	{
		// SignedOut?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = __this->___SignedOut_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = L_9;
		G_B11_0 = L_10;
		if (L_10)
		{
			G_B12_0 = L_10;
			goto IL_0052;
		}
	}
	{
		return;
	}

IL_0052:
	{
		NullCheck(G_B12_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B12_0, NULL);
		// break;
		return;
	}

IL_0058:
	{
		// Expired?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = __this->___Expired_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = L_11;
		G_B14_0 = L_12;
		if (L_12)
		{
			G_B15_0 = L_12;
			goto IL_0063;
		}
	}
	{
		return;
	}

IL_0063:
	{
		NullCheck(G_B15_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B15_0, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::SendSignInFailedEvent(Unity.Services.Core.RequestFailedException,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_SendSignInFailedEvent_mAC3544A54E02CF24D377A1DCC62FAB1288D360CD (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* ___exception0, bool ___forceSignOut1, const RuntimeMethod* method) 
{
	Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* G_B2_0 = NULL;
	Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* G_B1_0 = NULL;
	{
		// SignInFailed?.Invoke(exception);
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_0 = __this->___SignInFailed_1;
		Action_1_tBF3D0A2B57171A142B7E5430B25E9CFF5F30B860* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_2 = ___exception0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mC5DAA9EF72C51CDD3FB0A88D333E75CD14ECC367_inline(G_B2_0, L_2, NULL);
	}

IL_0012:
	{
		// if (forceSignOut)
		bool L_3 = ___forceSignOut1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// SignOut();
		AuthenticationServiceInternal_SignOut_m57F1EDE2B4ED5BAD2B115CC8706318E39848D18F(__this, (bool)0, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientInvalidStateException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationServiceInternal_BuildClientInvalidStateException_mCE5ABCF38E7335CDF489B59B28413F031D52FCB7 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13AA05127DC343690A4511AFDB16512FF022B039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA25CBED3DFB739A64F6004FF039EB7CA4D744F80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6E95469377CE29950B6E671AF6618E8518383E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA807D779356BF929984FEEF020A8F304C0825CD2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var errorMessage = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		// switch (State)
		int32_t L_1;
		L_1 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(__this, NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0039;
			}
			case 3:
			{
				goto IL_0039;
			}
			case 4:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0047;
	}

IL_0029:
	{
		// errorMessage = "Invalid state for this operation. The player is signed out.";
		V_0 = _stringLiteralA25CBED3DFB739A64F6004FF039EB7CA4D744F80;
		// break;
		goto IL_0047;
	}

IL_0031:
	{
		// errorMessage = "Invalid state for this operation. The player is already signing in.";
		V_0 = _stringLiteral13AA05127DC343690A4511AFDB16512FF022B039;
		// break;
		goto IL_0047;
	}

IL_0039:
	{
		// errorMessage = "Invalid state for this operation. The player is already signed in.";
		V_0 = _stringLiteralA6E95469377CE29950B6E671AF6618E8518383E4;
		// break;
		goto IL_0047;
	}

IL_0041:
	{
		// errorMessage = "Invalid state for this operation. The player session has expired.";
		V_0 = _stringLiteralA807D779356BF929984FEEF020A8F304C0825CD2;
	}

IL_0047:
	{
		// m_Metrics.SendClientInvalidStateExceptionMetric();
		RuntimeObject* L_3 = __this->___m_Metrics_21;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Unity.Services.Authentication.IAuthenticationMetrics::SendClientInvalidStateExceptionMetric() */, IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D_il2cpp_TypeInfo_var, L_3);
		// return AuthenticationException.Create(AuthenticationErrorCodes.ClientInvalidUserState, errorMessage);
		il2cpp_codegen_runtime_class_init_inline(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		int32_t L_4 = ((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___ClientInvalidUserState_1;
		String_t* L_5 = V_0;
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_6;
		L_6 = AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0(L_4, L_5, (Exception_t*)NULL, NULL);
		return L_6;
	}
}
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientInvalidProfileException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationServiceInternal_BuildClientInvalidProfileException_m30726F6D4F817B2231A5BC942B23EA4EEE073BC9 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5775BF2C56072AD72272B41D66428F6603BBBF52);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AuthenticationException.Create(AuthenticationErrorCodes.ClientInvalidProfile, "Invalid profile name. The profile may only contain alphanumeric values, '-', '_', and must be no longer than 30 characters.");
		il2cpp_codegen_runtime_class_init_inline(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___ClientInvalidProfile_7;
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_1;
		L_1 = AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0(L_0, _stringLiteral5775BF2C56072AD72272B41D66428F6603BBBF52, (Exception_t*)NULL, NULL);
		return L_1;
	}
}
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientUnlinkExternalIdNotFoundException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationServiceInternal_BuildClientUnlinkExternalIdNotFoundException_m53B5D0A42848382EA5BF2E678A081E8B6334E239 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18F10F0051A587D2304B049AACABD345111C9E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendUnlinkExternalIdNotFoundExceptionMetric();
		RuntimeObject* L_0 = __this->___m_Metrics_21;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Authentication.IAuthenticationMetrics::SendUnlinkExternalIdNotFoundExceptionMetric() */, IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D_il2cpp_TypeInfo_var, L_0);
		// return AuthenticationException.Create(AuthenticationErrorCodes.ClientUnlinkExternalIdNotFound, "No external id was found to unlink from the provider. Use GetPlayerInfoAsync to load the linked external ids.");
		il2cpp_codegen_runtime_class_init_inline(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		int32_t L_1 = ((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___ClientUnlinkExternalIdNotFound_6;
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_2;
		L_2 = AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0(L_1, _stringLiteralCE18F10F0051A587D2304B049AACABD345111C9E, (Exception_t*)NULL, NULL);
		return L_2;
	}
}
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientSessionTokenNotExistsException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationServiceInternal_BuildClientSessionTokenNotExistsException_mA320063CFD01D9F47CDD6CC2E9FF6132254A3345 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9118BD0CAA037C7CB5A295148D715E5D7BB54A65);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendClientSessionTokenNotExistsExceptionMetric();
		RuntimeObject* L_0 = __this->___m_Metrics_21;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Unity.Services.Authentication.IAuthenticationMetrics::SendClientSessionTokenNotExistsExceptionMetric() */, IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D_il2cpp_TypeInfo_var, L_0);
		// SessionTokenComponent.Clear();
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_1;
		L_1 = AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046_inline(__this, NULL);
		NullCheck(L_1);
		SessionTokenComponent_Clear_m8C8411835ADD425D4A042F2345BCCB60FD2B6351(L_1, NULL);
		// return AuthenticationException.Create(AuthenticationErrorCodes.ClientNoActiveSession, "There is no cached session token.");
		il2cpp_codegen_runtime_class_init_inline(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		int32_t L_2 = ((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___ClientNoActiveSession_2;
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_3;
		L_3 = AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0(L_2, _stringLiteral9118BD0CAA037C7CB5A295148D715E5D7BB54A65, (Exception_t*)NULL, NULL);
		return L_3;
	}
}
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildServerException(Unity.Services.Authentication.WebRequestException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationServiceInternal_BuildServerException_m147620948CDE089B104498197F891D221C9272AD (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisAuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60_mC35D891E227932756452089D21C8A47B2D0D97B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A5357BFF4777961C0ED9DFB11AC98AFAF29AF93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5ADCF3FED825951408599CB8341DA473933C86B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF3F6295AAF48AC44EE111E7233767AD6B03E6C8);
		s_Il2CppMethodInitialized = true;
	}
	AuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60* V_0 = NULL;
	RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* V_1 = NULL;
	JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// Logger.LogError($"Request failed: {exception.ResponseCode}, {exception.Message}");
		WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_0 = ___exception0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = WebRequestException_get_ResponseCode_mD02CB7727ACF1A6EA570F1DDE88E544D54734F93_inline(L_0, NULL);
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_4 = ___exception0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral5A5357BFF4777961C0ED9DFB11AC98AFAF29AF93, L_3, L_5, NULL);
		Logger_LogError_m698CECF45EB6570E4C933F9EE19A5D85A9E09B34(L_6, NULL);
		// if (exception.NetworkError)
		WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_7 = ___exception0;
		NullCheck(L_7);
		bool L_8;
		L_8 = WebRequestException_get_NetworkError_m9819D76C20F277A2C1867EC658AAFBC8451CB39E_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// m_Metrics.SendNetworkErrorMetric();
		RuntimeObject* L_9 = __this->___m_Metrics_21;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.Services.Authentication.IAuthenticationMetrics::SendNetworkErrorMetric() */, IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D_il2cpp_TypeInfo_var, L_9);
		// return AuthenticationException.Create(CommonErrorCodes.TransportError, $"Network Error: {exception.Message}", exception);
		WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_10 = ___exception0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFF3F6295AAF48AC44EE111E7233767AD6B03E6C8, L_11, NULL);
		WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_13 = ___exception0;
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_14;
		L_14 = AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0(1, L_12, L_13, NULL);
		return L_14;
	}

IL_004b:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// var errorResponse = JsonConvert.DeserializeObject<AuthenticationErrorResponse>(exception.Message);
			WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_15 = ___exception0;
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
			il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
			AuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60* L_17;
			L_17 = JsonConvert_DeserializeObject_TisAuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60_mC35D891E227932756452089D21C8A47B2D0D97B7(L_16, JsonConvert_DeserializeObject_TisAuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60_mC35D891E227932756452089D21C8A47B2D0D97B7_RuntimeMethod_var);
			V_0 = L_17;
			// var errorCode = MapErrorCodes(errorResponse.Title);
			AuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60* L_18 = V_0;
			NullCheck(L_18);
			String_t* L_19 = L_18->___Title_0;
			int32_t L_20;
			L_20 = AuthenticationServiceInternal_MapErrorCodes_m1FE3B73A74418ED6D15F6D340D6476224E748F38(__this, L_19, NULL);
			// if (errorCode == AuthenticationErrorCodes.InvalidSessionToken)
			int32_t L_21 = L_20;
			il2cpp_codegen_runtime_class_init_inline(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
			int32_t L_22 = ((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___InvalidSessionToken_8;
			G_B4_0 = L_21;
			if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
			{
				G_B5_0 = L_21;
				goto IL_0081_1;
			}
		}
		{
			// SessionTokenComponent.Clear();
			SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_23;
			L_23 = AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046_inline(__this, NULL);
			NullCheck(L_23);
			SessionTokenComponent_Clear_m8C8411835ADD425D4A042F2345BCCB60FD2B6351(L_23, NULL);
			// Logger.LogError($"The session token is invalid and has been cleared. The associated account is no longer accessible through this login method.");
			Logger_LogError_m698CECF45EB6570E4C933F9EE19A5D85A9E09B34(_stringLiteralE5ADCF3FED825951408599CB8341DA473933C86B, NULL);
			G_B5_0 = G_B4_0;
		}

IL_0081_1:
		{
			// return AuthenticationException.Create(errorCode, errorResponse.Detail, exception);
			AuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60* L_24 = V_0;
			NullCheck(L_24);
			String_t* L_25 = L_24->___Detail_1;
			WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_26 = ___exception0;
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_27;
			L_27 = AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0(G_B5_0, L_25, L_26, NULL);
			V_1 = L_27;
			goto IL_00b0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0090;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a0;
		}
		throw e;
	}

CATCH_0090:
	{// begin catch(Newtonsoft.Json.JsonException)
		// catch (JsonException e)
		V_2 = ((JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD*)IL2CPP_GET_ACTIVE_EXCEPTION(JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD*));
		// return AuthenticationException.Create(CommonErrorCodes.Unknown, "Failed to deserialize server response.", e);
		JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD* L_28 = V_2;
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_29;
		L_29 = AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0(0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1D894129428D97A82105EA53B4459C27A9AF712)), L_28, NULL);
		V_1 = L_29;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b0;
	}// end catch (depth: 1)

CATCH_00a0:
	{// begin catch(System.Exception)
		// catch (Exception)
		// return AuthenticationException.Create(CommonErrorCodes.Unknown, "Unknown error deserializing server response. ", exception);
		WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_30 = ___exception0;
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_31;
		L_31 = AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0(0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB7FE37709A3E5F9D994BF275861CD32D78CD778)), L_30, NULL);
		V_1 = L_31;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b0;
	}// end catch (depth: 1)

IL_00b0:
	{
		// }
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_32 = V_1;
		return L_32;
	}
}
// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal::MapErrorCodes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationServiceInternal_MapErrorCodes_m1FE3B73A74418ED6D15F6D340D6476224E748F38 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, String_t* ___serverErrorTitle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2754A23125BBA5ED316F9C07A3E818C3D63239F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F356137CA88ED48EB67D737BE3B186689AF3BDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5007D8D0381075039AADFA5A7B7117BF4299AF46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6682BD0725A4AB34573ADAA351C3058894511A91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F1462AD691582C705B8D80B37739368463E0FE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEB5ADD24A8B3212AEDF863D68D2927C47646EE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___serverErrorTitle0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral5007D8D0381075039AADFA5A7B7117BF4299AF46, NULL);
		if (L_1)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_2 = ___serverErrorTitle0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral2754A23125BBA5ED316F9C07A3E818C3D63239F1, NULL);
		if (L_3)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_4 = ___serverErrorTitle0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralCEB5ADD24A8B3212AEDF863D68D2927C47646EE2, NULL);
		if (L_5)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_6 = ___serverErrorTitle0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral9F1462AD691582C705B8D80B37739368463E0FE1, NULL);
		if (L_7)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_8 = ___serverErrorTitle0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral6682BD0725A4AB34573ADAA351C3058894511A91, NULL);
		if (L_9)
		{
			goto IL_0068;
		}
	}
	{
		String_t* L_10 = ___serverErrorTitle0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral3F356137CA88ED48EB67D737BE3B186689AF3BDA, NULL);
		if (L_11)
		{
			goto IL_006e;
		}
	}
	{
		goto IL_0071;
	}

IL_0050:
	{
		// return AuthenticationErrorCodes.AccountAlreadyLinked;
		il2cpp_codegen_runtime_class_init_inline(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		int32_t L_12 = ((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___AccountAlreadyLinked_4;
		return L_12;
	}

IL_0056:
	{
		// return AuthenticationErrorCodes.AccountLinkLimitExceeded;
		il2cpp_codegen_runtime_class_init_inline(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		int32_t L_13 = ((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___AccountLinkLimitExceeded_5;
		return L_13;
	}

IL_005c:
	{
		// return AuthenticationErrorCodes.InvalidParameters;
		il2cpp_codegen_runtime_class_init_inline(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		int32_t L_14 = ((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___InvalidParameters_3;
		return L_14;
	}

IL_0062:
	{
		// return AuthenticationErrorCodes.InvalidSessionToken;
		il2cpp_codegen_runtime_class_init_inline(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		int32_t L_15 = ((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___InvalidSessionToken_8;
		return L_15;
	}

IL_0068:
	{
		// return AuthenticationErrorCodes.InvalidParameters;
		il2cpp_codegen_runtime_class_init_inline(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		int32_t L_16 = ((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___InvalidParameters_3;
		return L_16;
	}

IL_006e:
	{
		// return CommonErrorCodes.InvalidToken;
		return ((int32_t)51);
	}

IL_0071:
	{
		// return CommonErrorCodes.Unknown;
		return 0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::<.ctor>b__74_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_U3C_ctorU3Eb__74_0_m5C8D958BB2C8579912768519C87AD5500DBE7C44 (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Expired += () => m_Metrics.SendExpiredSessionMetric();
		RuntimeObject* L_0 = __this->___m_Metrics_21;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Unity.Services.Authentication.IAuthenticationMetrics::SendExpiredSessionMetric() */, IAuthenticationMetrics_t7C18797DD32F1441CBA5F83187727A2A37ACE28D_il2cpp_TypeInfo_var, L_0);
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
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass75_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0__ctor_m44EA04EE3D00C72C090EA74FED8E837477FDA4E4 (U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass75_0::<SignInAnonymouslyAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* U3CU3Ec__DisplayClass75_0_U3CSignInAnonymouslyAsyncU3Eb__0_m440B2B066D68CEB79DEB3DEB75153F922A64C4C6 (U3CU3Ec__DisplayClass75_0_tA4B711A594275BD6EE5325A3F812DF91828C0243* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return HandleSignInRequestAsync(() => NetworkClient.SignInWithSessionTokenAsync(sessionToken));
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A_inline(L_0, NULL);
		String_t* L_2 = __this->___sessionToken_1;
		NullCheck(L_1);
		Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* L_3;
		L_3 = InterfaceFuncInvoker1< Task_1_tAF51175714E424A84783635B14DBF49E6F558D42*, String_t* >::Invoke(2 /* System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.IAuthenticationNetworkClient::SignInWithSessionTokenAsync(System.String) */, IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAccountAsyncU3Ed__91_MoveNext_mBFB546084A963A7FFBBC86310CCBEB20C7969F84 (U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_m93FF5531F817E0F4C1C4DBF3CAE66F5EBEA0E20F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0019_1;
			}
		}
		{
			// if (IsAuthorized)
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_3 = V_1;
			NullCheck(L_3);
			bool L_4;
			L_4 = AuthenticationServiceInternal_get_IsAuthorized_m617D4F6C205F90145F46BA9C4069B3B9BC87CD8D(L_3, NULL);
			if (!L_4)
			{
				goto IL_0092_1;
			}
		}

IL_0019_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_005d_2;
				}
			}
			{
				// await NetworkClient.DeleteAccountAsync(PlayerId);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_6 = V_1;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A_inline(L_6, NULL);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_8 = V_1;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = AuthenticationServiceInternal_get_PlayerId_mA599BD2E88C01DD4168B1A49BC193BF76CD471AA(L_8, NULL);
				NullCheck(L_7);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
				L_10 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, String_t* >::Invoke(7 /* System.Threading.Tasks.Task Unity.Services.Authentication.IAuthenticationNetworkClient::DeleteAccountAsync(System.String) */, IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var, L_7, L_9);
				NullCheck(L_10);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11;
				L_11 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_10, NULL);
				V_2 = L_11;
				bool L_12;
				L_12 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
				if (L_12)
				{
					goto IL_0079_2;
				}
			}
			{
				int32_t L_13 = 0;
				V_0 = L_13;
				__this->___U3CU3E1__state_0 = L_13;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = V_2;
				__this->___U3CU3Eu__1_3 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_15 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_m93FF5531F817E0F4C1C4DBF3CAE66F5EBEA0E20F(L_15, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8_m93FF5531F817E0F4C1C4DBF3CAE66F5EBEA0E20F_RuntimeMethod_var);
				goto IL_00c7;
			}

IL_005d_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_16 = __this->___U3CU3Eu__1_3;
				V_2 = L_16;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_17 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_18 = (-1);
				V_0 = L_18;
				__this->___U3CU3E1__state_0 = L_18;
			}

IL_0079_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
				// SignOut(true);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_19 = V_1;
				NullCheck(L_19);
				AuthenticationServiceInternal_SignOut_m57F1EDE2B4ED5BAD2B115CC8706318E39848D18F(L_19, (bool)1, NULL);
				// }
				goto IL_0099_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0089_1;
			}
			throw e;
		}

CATCH_0089_1:
		{// begin catch(Unity.Services.Authentication.WebRequestException)
			// catch (WebRequestException e)
			V_3 = ((WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF*)IL2CPP_GET_ACTIVE_EXCEPTION(WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF*));
			// throw BuildServerException(e);
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_20 = V_1;
			WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_21 = V_3;
			NullCheck(L_20);
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_22;
			L_22 = AuthenticationServiceInternal_BuildServerException_m147620948CDE089B104498197F891D221C9272AD(L_20, L_21, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeleteAccountAsyncU3Ed__91_MoveNext_mBFB546084A963A7FFBBC86310CCBEB20C7969F84_RuntimeMethod_var)));
		}// end catch (depth: 2)

IL_0092_1:
		{
			// throw BuildClientInvalidStateException();
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_23 = V_1;
			NullCheck(L_23);
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_24;
			L_24 = AuthenticationServiceInternal_BuildClientInvalidStateException_mCE5ABCF38E7335CDF489B59B28413F031D52FCB7(L_23, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeleteAccountAsyncU3Ed__91_MoveNext_mBFB546084A963A7FFBBC86310CCBEB20C7969F84_RuntimeMethod_var)));
		}

IL_0099_1:
		{
			goto IL_00b4;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009b;
		}
		throw e;
	}

CATCH_009b:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_25 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_26 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_25, L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c7;
	}// end catch (depth: 1)

IL_00b4:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_27, NULL);
	}

IL_00c7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeleteAccountAsyncU3Ed__91_MoveNext_mBFB546084A963A7FFBBC86310CCBEB20C7969F84_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8*>(__this + _offset);
	U3CDeleteAccountAsyncU3Ed__91_MoveNext_mBFB546084A963A7FFBBC86310CCBEB20C7969F84(_thisAdjusted, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<DeleteAccountAsync>d__91::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAccountAsyncU3Ed__91_SetStateMachine_mFBD67131B35BFCDBFA117489192CDEB08477BFA9 (U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeleteAccountAsyncU3Ed__91_SetStateMachine_mFBD67131B35BFCDBFA117489192CDEB08477BFA9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDeleteAccountAsyncU3Ed__91_t56D7E6E4EC6C3350BD0F3E7BA45C63E5520492F8*>(__this + _offset);
	U3CDeleteAccountAsyncU3Ed__91_SetStateMachine_mFBD67131B35BFCDBFA117489192CDEB08477BFA9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPlayerInfoAsyncU3Ed__95_MoveNext_m644A27C23CE923268CAC21DBE4DCB7AF26C62EB3 (U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_m42F558F962C27B8DAF3B01C3420D51B75F3FD765_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m817589C18F4DB722F550FC51D945886BFDFF1209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB50DCCDA4AF1B47C765FBC38635CC69FAE15A956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m5A140255D9EF944711E5BBE52CE37C01759B5A7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m99798B036655C6194E8363799F40F122CBCD0376_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* V_1 = NULL;
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* V_2 = NULL;
	PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* V_3 = NULL;
	TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E V_4;
	memset((&V_4), 0, sizeof(V_4));
	WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_001c_1;
			}
		}
		{
			// if (IsAuthorized)
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_3 = V_1;
			NullCheck(L_3);
			bool L_4;
			L_4 = AuthenticationServiceInternal_get_IsAuthorized_m617D4F6C205F90145F46BA9C4069B3B9BC87CD8D(L_3, NULL);
			if (!L_4)
			{
				goto IL_00a7_1;
			}
		}

IL_001c_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0062_2;
				}
			}
			{
				// var response = await NetworkClient.GetPlayerInfoAsync(PlayerId);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_6 = V_1;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A_inline(L_6, NULL);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_8 = V_1;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = AuthenticationServiceInternal_get_PlayerId_mA599BD2E88C01DD4168B1A49BC193BF76CD471AA(L_8, NULL);
				NullCheck(L_7);
				Task_1_tBDE11C6723E9E78F3C214C00A13E580F96A87EB7* L_10;
				L_10 = InterfaceFuncInvoker1< Task_1_tBDE11C6723E9E78F3C214C00A13E580F96A87EB7*, String_t* >::Invoke(6 /* System.Threading.Tasks.Task`1<Unity.Services.Authentication.PlayerInfoResponse> Unity.Services.Authentication.IAuthenticationNetworkClient::GetPlayerInfoAsync(System.String) */, IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var, L_7, L_9);
				NullCheck(L_10);
				TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E L_11;
				L_11 = Task_1_GetAwaiter_m99798B036655C6194E8363799F40F122CBCD0376(L_10, Task_1_GetAwaiter_m99798B036655C6194E8363799F40F122CBCD0376_RuntimeMethod_var);
				V_4 = L_11;
				bool L_12;
				L_12 = TaskAwaiter_1_get_IsCompleted_m5A140255D9EF944711E5BBE52CE37C01759B5A7D((&V_4), TaskAwaiter_1_get_IsCompleted_m5A140255D9EF944711E5BBE52CE37C01759B5A7D_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_007f_2;
				}
			}
			{
				int32_t L_13 = 0;
				V_0 = L_13;
				__this->___U3CU3E1__state_0 = L_13;
				TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E L_14 = V_4;
				__this->___U3CU3Eu__1_3 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* L_15 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_m42F558F962C27B8DAF3B01C3420D51B75F3FD765(L_15, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E_TisU3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A_m42F558F962C27B8DAF3B01C3420D51B75F3FD765_RuntimeMethod_var);
				goto IL_00db;
			}

IL_0062_2:
			{
				TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E L_16 = __this->___U3CU3Eu__1_3;
				V_4 = L_16;
				TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E* L_17 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_tB1395CBE747FE0A9726BC0DC5542F6B98EE6696E));
				int32_t L_18 = (-1);
				V_0 = L_18;
				__this->___U3CU3E1__state_0 = L_18;
			}

IL_007f_2:
			{
				PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* L_19;
				L_19 = TaskAwaiter_1_GetResult_mB50DCCDA4AF1B47C765FBC38635CC69FAE15A956((&V_4), TaskAwaiter_1_GetResult_mB50DCCDA4AF1B47C765FBC38635CC69FAE15A956_RuntimeMethod_var);
				V_3 = L_19;
				// PlayerInfo = new PlayerInfo(response);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_20 = V_1;
				PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* L_21 = V_3;
				PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_22 = (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF*)il2cpp_codegen_object_new(PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF_il2cpp_TypeInfo_var);
				NullCheck(L_22);
				PlayerInfo__ctor_m31B8A4058024774C355A60CC1DD3AB0D045B97EF(L_22, L_21, NULL);
				NullCheck(L_20);
				AuthenticationServiceInternal_set_PlayerInfo_m7A68E82BD9D316E342DF5E3AECAF108EDD238EF4_inline(L_20, L_22, NULL);
				// return PlayerInfo;
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_23 = V_1;
				NullCheck(L_23);
				PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_24;
				L_24 = AuthenticationServiceInternal_get_PlayerInfo_m8B26511EDAA52A7C50EE4EFEBB5C31D6E904985A_inline(L_23, NULL);
				V_2 = L_24;
				goto IL_00c7;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_009c_1;
			}
			throw e;
		}

CATCH_009c_1:
		{// begin catch(Unity.Services.Authentication.WebRequestException)
			// catch (WebRequestException e)
			V_5 = ((WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF*)IL2CPP_GET_ACTIVE_EXCEPTION(WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF*));
			// throw BuildServerException(e);
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_25 = V_1;
			WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_26 = V_5;
			NullCheck(L_25);
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_27;
			L_27 = AuthenticationServiceInternal_BuildServerException_m147620948CDE089B104498197F891D221C9272AD(L_25, L_26, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetPlayerInfoAsyncU3Ed__95_MoveNext_m644A27C23CE923268CAC21DBE4DCB7AF26C62EB3_RuntimeMethod_var)));
		}// end catch (depth: 2)

IL_00a7_1:
		{
			// throw BuildClientInvalidStateException();
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_28 = V_1;
			NullCheck(L_28);
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_29;
			L_29 = AuthenticationServiceInternal_BuildClientInvalidStateException_mCE5ABCF38E7335CDF489B59B28413F031D52FCB7(L_28, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetPlayerInfoAsyncU3Ed__95_MoveNext_m644A27C23CE923268CAC21DBE4DCB7AF26C62EB3_RuntimeMethod_var)));
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ae;
		}
		throw e;
	}

CATCH_00ae:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* L_30 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_31 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m546F35E194510D73D5248D5DDC4D1B870F696A6C(L_30, L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m546F35E194510D73D5248D5DDC4D1B870F696A6C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00db;
	}// end catch (depth: 1)

IL_00c7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* L_32 = (&__this->___U3CU3Et__builder_1);
		PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_33 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m817589C18F4DB722F550FC51D945886BFDFF1209(L_32, L_33, AsyncTaskMethodBuilder_1_SetResult_m817589C18F4DB722F550FC51D945886BFDFF1209_RuntimeMethod_var);
	}

IL_00db:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetPlayerInfoAsyncU3Ed__95_MoveNext_m644A27C23CE923268CAC21DBE4DCB7AF26C62EB3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A*>(__this + _offset);
	U3CGetPlayerInfoAsyncU3Ed__95_MoveNext_m644A27C23CE923268CAC21DBE4DCB7AF26C62EB3(_thisAdjusted, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetPlayerInfoAsync>d__95::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPlayerInfoAsyncU3Ed__95_SetStateMachine_mECDB27CE7CE15B3230E25263EA03AC5FCBEC2FB9 (U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m51F1971DB8396E427D87E22C5D95CDCB4AF2F05E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t4A4F5E7EF2D2A989214BC93C3AB80BE1169DE018* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m51F1971DB8396E427D87E22C5D95CDCB4AF2F05E(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m51F1971DB8396E427D87E22C5D95CDCB4AF2F05E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetPlayerInfoAsyncU3Ed__95_SetStateMachine_mECDB27CE7CE15B3230E25263EA03AC5FCBEC2FB9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetPlayerInfoAsyncU3Ed__95_t456528B59FB5E0D542E0439DBBF9FB478B4EEE6A*>(__this + _offset);
	U3CGetPlayerInfoAsyncU3Ed__95_SetStateMachine_mECDB27CE7CE15B3230E25263EA03AC5FCBEC2FB9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetWellKnownKeysAsyncU3Ed__96_MoveNext_mB53C5184808E3A67315CFE2A881C41F63D45D755 (U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_mE85FE900DE708EBB35DD55A0AB1D094B2FB95503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5E3DB01E1F090BC3BE1E239557E9ACD2DBD96A98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m09490AAD567DF934ADF2040B170E30400A812858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m4249DDE868F4CDBDEB096D1418125B6D8C4555C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* V_1 = NULL;
	WellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53* V_2 = NULL;
	TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004b_1;
			}
		}
		{
			// var response = await NetworkClient.GetWellKnownKeysAsync();
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A_inline(L_3, NULL);
			NullCheck(L_4);
			Task_1_tA10499A2609A86CF8EDB1C3D8BA6CF2911B896E5* L_5;
			L_5 = InterfaceFuncInvoker0< Task_1_tA10499A2609A86CF8EDB1C3D8BA6CF2911B896E5* >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Authentication.WellKnownKeysResponse> Unity.Services.Authentication.IAuthenticationNetworkClient::GetWellKnownKeysAsync() */, IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var, L_4);
			NullCheck(L_5);
			TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4 L_6;
			L_6 = Task_1_GetAwaiter_m4249DDE868F4CDBDEB096D1418125B6D8C4555C3(L_5, Task_1_GetAwaiter_m4249DDE868F4CDBDEB096D1418125B6D8C4555C3_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_m09490AAD567DF934ADF2040B170E30400A812858((&V_3), TaskAwaiter_1_get_IsCompleted_m09490AAD567DF934ADF2040B170E30400A812858_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0067_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4 L_9 = V_3;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_mE85FE900DE708EBB35DD55A0AB1D094B2FB95503(L_10, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4_TisU3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730_mE85FE900DE708EBB35DD55A0AB1D094B2FB95503_RuntimeMethod_var);
			goto IL_00ae;
		}

IL_004b_1:
		{
			TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4 L_11 = __this->___U3CU3Eu__1_3;
			V_3 = L_11;
			TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t28E7D4879EDD6A1598386132977029BCA96353E4));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0067_1:
		{
			WellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53* L_14;
			L_14 = TaskAwaiter_1_GetResult_m5E3DB01E1F090BC3BE1E239557E9ACD2DBD96A98((&V_3), TaskAwaiter_1_GetResult_m5E3DB01E1F090BC3BE1E239557E9ACD2DBD96A98_RuntimeMethod_var);
			V_2 = L_14;
			// WellKnownKeysComponent.Keys = response.Keys;
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_15 = V_1;
			NullCheck(L_15);
			WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* L_16;
			L_16 = AuthenticationServiceInternal_get_WellKnownKeysComponent_m7E533682E0EAD28DE9C952619AC74462C9C2CAAB_inline(L_15, NULL);
			WellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53* L_17 = V_2;
			NullCheck(L_17);
			WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* L_18 = L_17->___Keys_0;
			NullCheck(L_16);
			WellKnownKeysComponent_set_Keys_mD3986F1B3657510DB66DC2063261248E8A289621_inline(L_16, L_18, NULL);
			goto IL_009b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0082;
		}
		throw e;
	}

CATCH_0082:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_19, L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ae;
	}// end catch (depth: 1)

IL_009b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_21 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_21, NULL);
	}

IL_00ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetWellKnownKeysAsyncU3Ed__96_MoveNext_mB53C5184808E3A67315CFE2A881C41F63D45D755_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730*>(__this + _offset);
	U3CGetWellKnownKeysAsyncU3Ed__96_MoveNext_mB53C5184808E3A67315CFE2A881C41F63D45D755(_thisAdjusted, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__96::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetWellKnownKeysAsyncU3Ed__96_SetStateMachine_m401DEA2E35A5A8AD22790E51C1BA979E5A868EE9 (U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetWellKnownKeysAsyncU3Ed__96_SetStateMachine_m401DEA2E35A5A8AD22790E51C1BA979E5A868EE9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetWellKnownKeysAsyncU3Ed__96_t4FD4D0608D034B2EF99F8F7D2758CFAAC6D5C730*>(__this + _offset);
	U3CGetWellKnownKeysAsyncU3Ed__96_SetStateMachine_m401DEA2E35A5A8AD22790E51C1BA979E5A868EE9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass97_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass97_0__ctor_m26863091C75F9C18120797E2DBE8DDE1763AF4F4 (U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass97_0::<SignInWithExternalTokenAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* U3CU3Ec__DisplayClass97_0_U3CSignInWithExternalTokenAsyncU3Eb__0_m07A4442E08A0997C3275D7786DCBEC910A631001 (U3CU3Ec__DisplayClass97_0_tCC601B743992103CA2D548006F05AD8528C9B9B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return HandleSignInRequestAsync(() => NetworkClient.SignInWithExternalTokenAsync(idProvider, request), enableRefresh);
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A_inline(L_0, NULL);
		String_t* L_2 = __this->___idProvider_1;
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_3 = __this->___request_2;
		NullCheck(L_1);
		Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tAF51175714E424A84783635B14DBF49E6F558D42*, String_t*, SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* >::Invoke(3 /* System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.IAuthenticationNetworkClient::SignInWithExternalTokenAsync(System.String,Unity.Services.Authentication.SignInWithExternalTokenRequest) */, IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return L_4;
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
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass98_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass98_0__ctor_m260B7B6416667E4FB6CB584B3454009CE533B2D2 (U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass98_0::<LinkWithExternalTokenAsync>b__0(Unity.Services.Authentication.ExternalIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass98_0_U3CLinkWithExternalTokenAsyncU3Eb__0_mA5F5E10E43D4894EC3FC94CD4C0716BB9CB8ECB2 (U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12* __this, ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* ___x0, const RuntimeMethod* method) 
{
	{
		// PlayerInfo?.AddExternalIdentity(response.User?.ExternalIds?.FirstOrDefault(x => x.ProviderId == request.IdProvider));
		ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___ProviderId_0;
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_2 = __this->___request_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___IdProvider_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_3, NULL);
		return L_4;
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
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLinkWithExternalTokenAsyncU3Ed__98_MoveNext_m32C2F9FE4AB15AC512136C3C1D79FBDAE6D9CD37 (U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mA88565A9568103B70BF3AE0136FC07B953E612EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25_mC1EB28532368E7BFC761E3A566F6279A7214811B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF1A3CF1FD4E05A03E8BD9749B7FFA5CB5EF63C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mED34CE99F995342158E9B5A58FBEAD45336BE646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mB3586BFE7B513E23F4EAFB9DB6E1C957803B123B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m15484C5037E3A72ABF3CFF89CDFCDB5D8A9166E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass98_0_U3CLinkWithExternalTokenAsyncU3Eb__0_mA5F5E10E43D4894EC3FC94CD4C0716BB9CB8ECB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* V_1 = NULL;
	LinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906* V_2 = NULL;
	TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45 V_3;
	memset((&V_3), 0, sizeof(V_3));
	WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* G_B10_0 = NULL;
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* G_B9_0 = NULL;
	User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* G_B12_0 = NULL;
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* G_B12_1 = NULL;
	User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* G_B11_0 = NULL;
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* G_B11_1 = NULL;
	ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* G_B15_0 = NULL;
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* G_B15_1 = NULL;
	List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* G_B14_0 = NULL;
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* G_B14_1 = NULL;
	List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* G_B13_0 = NULL;
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* G_B13_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0038_1;
			}
		}
		{
			U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12* L_3 = (U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass98_0__ctor_m260B7B6416667E4FB6CB584B3454009CE533B2D2(L_3, NULL);
			__this->___U3CU3E8__1_5 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_3);
			U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12* L_4 = __this->___U3CU3E8__1_5;
			LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_5 = __this->___request_2;
			NullCheck(L_4);
			L_4->___request_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___request_0), (void*)L_5);
			// if (IsAuthorized)
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_6 = V_1;
			NullCheck(L_6);
			bool L_7;
			L_7 = AuthenticationServiceInternal_get_IsAuthorized_m617D4F6C205F90145F46BA9C4069B3B9BC87CD8D(L_6, NULL);
			if (!L_7)
			{
				goto IL_00fb_1;
			}
		}

IL_0038_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_8 = V_0;
				if (!L_8)
				{
					goto IL_008a_2;
				}
			}
			{
				// var response = await NetworkClient.LinkWithExternalTokenAsync(idProvider, request);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_9 = V_1;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A_inline(L_9, NULL);
				String_t* L_11 = __this->___idProvider_4;
				U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12* L_12 = __this->___U3CU3E8__1_5;
				NullCheck(L_12);
				LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_13 = L_12->___request_0;
				NullCheck(L_10);
				Task_1_t9E83749FC41A9417AE7750D513EAF8D13F206641* L_14;
				L_14 = InterfaceFuncInvoker2< Task_1_t9E83749FC41A9417AE7750D513EAF8D13F206641*, String_t*, LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* >::Invoke(4 /* System.Threading.Tasks.Task`1<Unity.Services.Authentication.LinkResponse> Unity.Services.Authentication.IAuthenticationNetworkClient::LinkWithExternalTokenAsync(System.String,Unity.Services.Authentication.LinkWithExternalTokenRequest) */, IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var, L_10, L_11, L_13);
				NullCheck(L_14);
				TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45 L_15;
				L_15 = Task_1_GetAwaiter_m15484C5037E3A72ABF3CFF89CDFCDB5D8A9166E3(L_14, Task_1_GetAwaiter_m15484C5037E3A72ABF3CFF89CDFCDB5D8A9166E3_RuntimeMethod_var);
				V_3 = L_15;
				bool L_16;
				L_16 = TaskAwaiter_1_get_IsCompleted_mB3586BFE7B513E23F4EAFB9DB6E1C957803B123B((&V_3), TaskAwaiter_1_get_IsCompleted_mB3586BFE7B513E23F4EAFB9DB6E1C957803B123B_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00a6_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45 L_18 = V_3;
				__this->___U3CU3Eu__1_6 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mA88565A9568103B70BF3AE0136FC07B953E612EA(L_19, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45_TisU3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC_mA88565A9568103B70BF3AE0136FC07B953E612EA_RuntimeMethod_var);
				goto IL_013e;
			}

IL_008a_2:
			{
				TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45 L_20 = __this->___U3CU3Eu__1_6;
				V_3 = L_20;
				TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45* L_21 = (&__this->___U3CU3Eu__1_6);
				il2cpp_codegen_initobj(L_21, sizeof(TaskAwaiter_1_tDAAE1A6AA430DB762CEC3CB2AC45503B73F52B45));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_00a6_2:
			{
				LinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906* L_23;
				L_23 = TaskAwaiter_1_GetResult_mED34CE99F995342158E9B5A58FBEAD45336BE646((&V_3), TaskAwaiter_1_GetResult_mED34CE99F995342158E9B5A58FBEAD45336BE646_RuntimeMethod_var);
				V_2 = L_23;
				// PlayerInfo?.AddExternalIdentity(response.User?.ExternalIds?.FirstOrDefault(x => x.ProviderId == request.IdProvider));
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_24 = V_1;
				NullCheck(L_24);
				PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_25;
				L_25 = AuthenticationServiceInternal_get_PlayerInfo_m8B26511EDAA52A7C50EE4EFEBB5C31D6E904985A_inline(L_24, NULL);
				PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_26 = L_25;
				G_B9_0 = L_26;
				if (L_26)
				{
					G_B10_0 = L_26;
					goto IL_00ba_2;
				}
			}
			{
				goto IL_00ee_2;
			}

IL_00ba_2:
			{
				LinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906* L_27 = V_2;
				NullCheck(L_27);
				User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* L_28 = L_27->___User_0;
				User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* L_29 = L_28;
				G_B11_0 = L_29;
				G_B11_1 = G_B10_0;
				if (L_29)
				{
					G_B12_0 = L_29;
					G_B12_1 = G_B10_0;
					goto IL_00c7_2;
				}
			}
			{
				G_B15_0 = ((ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25*)(NULL));
				G_B15_1 = G_B11_1;
				goto IL_00e9_2;
			}

IL_00c7_2:
			{
				NullCheck(G_B12_0);
				List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* L_30 = G_B12_0->___ExternalIds_2;
				List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* L_31 = L_30;
				G_B13_0 = L_31;
				G_B13_1 = G_B12_1;
				if (L_31)
				{
					G_B14_0 = L_31;
					G_B14_1 = G_B12_1;
					goto IL_00d3_2;
				}
			}
			{
				G_B15_0 = ((ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25*)(NULL));
				G_B15_1 = G_B13_1;
				goto IL_00e9_2;
			}

IL_00d3_2:
			{
				U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12* L_32 = __this->___U3CU3E8__1_5;
				Func_2_tF1A3CF1FD4E05A03E8BD9749B7FFA5CB5EF63C96* L_33 = (Func_2_tF1A3CF1FD4E05A03E8BD9749B7FFA5CB5EF63C96*)il2cpp_codegen_object_new(Func_2_tF1A3CF1FD4E05A03E8BD9749B7FFA5CB5EF63C96_il2cpp_TypeInfo_var);
				NullCheck(L_33);
				Func_2__ctor_mF05FCD40134A5F6CDF00C19FC30588153F5A51B5(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass98_0_U3CLinkWithExternalTokenAsyncU3Eb__0_mA5F5E10E43D4894EC3FC94CD4C0716BB9CB8ECB2_RuntimeMethod_var), NULL);
				ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* L_34;
				L_34 = Enumerable_FirstOrDefault_TisExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25_mC1EB28532368E7BFC761E3A566F6279A7214811B(G_B14_0, L_33, Enumerable_FirstOrDefault_TisExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25_mC1EB28532368E7BFC761E3A566F6279A7214811B_RuntimeMethod_var);
				G_B15_0 = L_34;
				G_B15_1 = G_B14_1;
			}

IL_00e9_2:
			{
				NullCheck(G_B15_1);
				PlayerInfo_AddExternalIdentity_m6B4B832732C54847BB5531DCB5E852072273DFE5(G_B15_1, G_B15_0, NULL);
			}

IL_00ee_2:
			{
				// }
				goto IL_0102_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00f0_1;
			}
			throw e;
		}

CATCH_00f0_1:
		{// begin catch(Unity.Services.Authentication.WebRequestException)
			// catch (WebRequestException e)
			V_4 = ((WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF*)IL2CPP_GET_ACTIVE_EXCEPTION(WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF*));
			// throw BuildServerException(e);
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_35 = V_1;
			WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_36 = V_4;
			NullCheck(L_35);
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_37;
			L_37 = AuthenticationServiceInternal_BuildServerException_m147620948CDE089B104498197F891D221C9272AD(L_35, L_36, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLinkWithExternalTokenAsyncU3Ed__98_MoveNext_m32C2F9FE4AB15AC512136C3C1D79FBDAE6D9CD37_RuntimeMethod_var)));
		}// end catch (depth: 2)

IL_00fb_1:
		{
			// throw BuildClientInvalidStateException();
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_38 = V_1;
			NullCheck(L_38);
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_39;
			L_39 = AuthenticationServiceInternal_BuildClientInvalidStateException_mCE5ABCF38E7335CDF489B59B28413F031D52FCB7(L_38, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLinkWithExternalTokenAsyncU3Ed__98_MoveNext_m32C2F9FE4AB15AC512136C3C1D79FBDAE6D9CD37_RuntimeMethod_var)));
		}

IL_0102_1:
		{
			goto IL_0124;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_5 = (U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)(U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_40 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_41 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_40, L_41, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_013e;
	}// end catch (depth: 1)

IL_0124:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_5 = (U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)(U3CU3Ec__DisplayClass98_0_tCE2EE54A8D0E7F067C40AF6A20775C3C6AF8AD12*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_42 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_42, NULL);
	}

IL_013e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLinkWithExternalTokenAsyncU3Ed__98_MoveNext_m32C2F9FE4AB15AC512136C3C1D79FBDAE6D9CD37_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC*>(__this + _offset);
	U3CLinkWithExternalTokenAsyncU3Ed__98_MoveNext_m32C2F9FE4AB15AC512136C3C1D79FBDAE6D9CD37(_thisAdjusted, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<LinkWithExternalTokenAsync>d__98::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLinkWithExternalTokenAsyncU3Ed__98_SetStateMachine_m8E5940E2BA29F3289922DC0604B31E42ABFEE04E (U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLinkWithExternalTokenAsyncU3Ed__98_SetStateMachine_m8E5940E2BA29F3289922DC0604B31E42ABFEE04E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLinkWithExternalTokenAsyncU3Ed__98_t38C9F95BB10F34F0363B87AE9E6AD3755EE52AEC*>(__this + _offset);
	U3CLinkWithExternalTokenAsyncU3Ed__98_SetStateMachine_m8E5940E2BA29F3289922DC0604B31E42ABFEE04E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnlinkExternalTokenAsyncU3Ed__99_MoveNext_m719C5850F8239F8A7F87F9785F4B8FC2E0801647 (U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m319A5913E6473C203A1572A5D921188B5A3B1AC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m900445EF0BA9E193D971D03872CB6EAE688522F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m237D08FD16AABB0A8D004C66AED4AF6325CD2BE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mFCA9B7DC93BA8A14B4354C3CE210F8480CC96A62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* G_B5_0 = NULL;
	PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_003f_1;
			}
		}
		{
			// if (IsAuthorized)
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_3 = V_1;
			NullCheck(L_3);
			bool L_4;
			L_4 = AuthenticationServiceInternal_get_IsAuthorized_m617D4F6C205F90145F46BA9C4069B3B9BC87CD8D(L_3, NULL);
			if (!L_4)
			{
				goto IL_00dd_1;
			}
		}
		{
			// var externalId = PlayerInfo?.GetIdentityId(idProvider);
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_5 = V_1;
			NullCheck(L_5);
			PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_6;
			L_6 = AuthenticationServiceInternal_get_PlayerInfo_m8B26511EDAA52A7C50EE4EFEBB5C31D6E904985A_inline(L_5, NULL);
			PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_7 = L_6;
			G_B4_0 = L_7;
			if (L_7)
			{
				G_B5_0 = L_7;
				goto IL_0029_1;
			}
		}
		{
			G_B6_0 = ((String_t*)(NULL));
			goto IL_0034_1;
		}

IL_0029_1:
		{
			String_t* L_8 = __this->___idProvider_3;
			NullCheck(G_B5_0);
			String_t* L_9;
			L_9 = PlayerInfo_GetIdentityId_m4B4287BCFE22426C6D9AECAAE6CF963F667DBAB3(G_B5_0, L_8, NULL);
			G_B6_0 = L_9;
		}

IL_0034_1:
		{
			V_2 = G_B6_0;
			// if (externalId == null)
			String_t* L_10 = V_2;
			if (L_10)
			{
				goto IL_003f_1;
			}
		}
		{
			// throw BuildClientUnlinkExternalIdNotFoundException();
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_11 = V_1;
			NullCheck(L_11);
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_12;
			L_12 = AuthenticationServiceInternal_BuildClientUnlinkExternalIdNotFoundException_m53B5D0A42848382EA5BF2E678A081E8B6334E239(L_11, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUnlinkExternalTokenAsyncU3Ed__99_MoveNext_m719C5850F8239F8A7F87F9785F4B8FC2E0801647_RuntimeMethod_var)));
		}

IL_003f_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_13 = V_0;
				if (!L_13)
				{
					goto IL_009b_2;
				}
			}
			{
				// await NetworkClient.UnlinkExternalTokenAsync(idProvider, new UnlinkRequest
				// {
				//     IdProvider = idProvider,
				//     ExternalId = externalId
				// });
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_14 = V_1;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A_inline(L_14, NULL);
				String_t* L_16 = __this->___idProvider_3;
				UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D* L_17 = (UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D*)il2cpp_codegen_object_new(UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				UnlinkRequest__ctor_mC6DF0262CCE41490C8119C09876F9E281BBEEBA6(L_17, NULL);
				UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D* L_18 = L_17;
				String_t* L_19 = __this->___idProvider_3;
				NullCheck(L_18);
				L_18->___IdProvider_0 = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&L_18->___IdProvider_0), (void*)L_19);
				UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D* L_20 = L_18;
				String_t* L_21 = V_2;
				NullCheck(L_20);
				L_20->___ExternalId_1 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&L_20->___ExternalId_1), (void*)L_21);
				NullCheck(L_15);
				Task_1_tCF64ADEDCC5E52FD1B2D04A05A32E30D604CBFAC* L_22;
				L_22 = InterfaceFuncInvoker2< Task_1_tCF64ADEDCC5E52FD1B2D04A05A32E30D604CBFAC*, String_t*, UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D* >::Invoke(5 /* System.Threading.Tasks.Task`1<Unity.Services.Authentication.UnlinkResponse> Unity.Services.Authentication.IAuthenticationNetworkClient::UnlinkExternalTokenAsync(System.String,Unity.Services.Authentication.UnlinkRequest) */, IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var, L_15, L_16, L_20);
				NullCheck(L_22);
				TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6 L_23;
				L_23 = Task_1_GetAwaiter_mFCA9B7DC93BA8A14B4354C3CE210F8480CC96A62(L_22, Task_1_GetAwaiter_mFCA9B7DC93BA8A14B4354C3CE210F8480CC96A62_RuntimeMethod_var);
				V_3 = L_23;
				bool L_24;
				L_24 = TaskAwaiter_1_get_IsCompleted_m237D08FD16AABB0A8D004C66AED4AF6325CD2BE9((&V_3), TaskAwaiter_1_get_IsCompleted_m237D08FD16AABB0A8D004C66AED4AF6325CD2BE9_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_00b7_2;
				}
			}
			{
				int32_t L_25 = 0;
				V_0 = L_25;
				__this->___U3CU3E1__state_0 = L_25;
				TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6 L_26 = V_3;
				__this->___U3CU3Eu__1_4 = L_26;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m319A5913E6473C203A1572A5D921188B5A3B1AC0(L_27, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6_TisU3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7_m319A5913E6473C203A1572A5D921188B5A3B1AC0_RuntimeMethod_var);
				goto IL_0112;
			}

IL_009b_2:
			{
				TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6 L_28 = __this->___U3CU3Eu__1_4;
				V_3 = L_28;
				TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6* L_29 = (&__this->___U3CU3Eu__1_4);
				il2cpp_codegen_initobj(L_29, sizeof(TaskAwaiter_1_t222C588E03A43C4CE75A218F5EFA42095F656DC6));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
			}

IL_00b7_2:
			{
				UnlinkResponse_t80C024EBE33CD7796AF31678A9E1B74310470A42* L_31;
				L_31 = TaskAwaiter_1_GetResult_m900445EF0BA9E193D971D03872CB6EAE688522F0((&V_3), TaskAwaiter_1_GetResult_m900445EF0BA9E193D971D03872CB6EAE688522F0_RuntimeMethod_var);
				// PlayerInfo.RemoveIdentity(idProvider);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_32 = V_1;
				NullCheck(L_32);
				PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_33;
				L_33 = AuthenticationServiceInternal_get_PlayerInfo_m8B26511EDAA52A7C50EE4EFEBB5C31D6E904985A_inline(L_32, NULL);
				String_t* L_34 = __this->___idProvider_3;
				NullCheck(L_33);
				PlayerInfo_RemoveIdentity_mABDE25201FB941363381B3487969ACE5709AA4A7(L_33, L_34, NULL);
				// }
				goto IL_00e4_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00d2_1;
			}
			throw e;
		}

CATCH_00d2_1:
		{// begin catch(Unity.Services.Authentication.WebRequestException)
			// catch (WebRequestException e)
			V_4 = ((WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF*)IL2CPP_GET_ACTIVE_EXCEPTION(WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF*));
			// throw BuildServerException(e);
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_35 = V_1;
			WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_36 = V_4;
			NullCheck(L_35);
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_37;
			L_37 = AuthenticationServiceInternal_BuildServerException_m147620948CDE089B104498197F891D221C9272AD(L_35, L_36, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUnlinkExternalTokenAsyncU3Ed__99_MoveNext_m719C5850F8239F8A7F87F9785F4B8FC2E0801647_RuntimeMethod_var)));
		}// end catch (depth: 2)

IL_00dd_1:
		{
			// throw BuildClientInvalidStateException();
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_38 = V_1;
			NullCheck(L_38);
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_39;
			L_39 = AuthenticationServiceInternal_BuildClientInvalidStateException_mCE5ABCF38E7335CDF489B59B28413F031D52FCB7(L_38, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUnlinkExternalTokenAsyncU3Ed__99_MoveNext_m719C5850F8239F8A7F87F9785F4B8FC2E0801647_RuntimeMethod_var)));
		}

IL_00e4_1:
		{
			goto IL_00ff;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e6;
		}
		throw e;
	}

CATCH_00e6:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_40 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_41 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_40, L_41, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0112;
	}// end catch (depth: 1)

IL_00ff:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_42 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_42, NULL);
	}

IL_0112:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnlinkExternalTokenAsyncU3Ed__99_MoveNext_m719C5850F8239F8A7F87F9785F4B8FC2E0801647_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7*>(__this + _offset);
	U3CUnlinkExternalTokenAsyncU3Ed__99_MoveNext_m719C5850F8239F8A7F87F9785F4B8FC2E0801647(_thisAdjusted, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<UnlinkExternalTokenAsync>d__99::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnlinkExternalTokenAsyncU3Ed__99_SetStateMachine_m6DCDC75DD4273640A2853A4DB273A161D28F5A05 (U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnlinkExternalTokenAsyncU3Ed__99_SetStateMachine_m6DCDC75DD4273640A2853A4DB273A161D28F5A05_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUnlinkExternalTokenAsyncU3Ed__99_t6F6A2E5367AD39B36D06281F381722A58CFAD6C7*>(__this + _offset);
	U3CUnlinkExternalTokenAsyncU3Ed__99_SetStateMachine_m6DCDC75DD4273640A2853A4DB273A161D28F5A05(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleSignInRequestAsyncU3Ed__101_MoveNext_m0A9FB37866BC38785342FA62F2DF3BB9E6DCFF6C (U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mFC148A0816C9699FFF908CE824D2FA4EFE47947C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mF813EEFD6E75C66C16FAC9EF4F7C989219D67B9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m59F70C7F70B91733E854738A7782BB43B9A0545C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m7D1C4A1DF6B50479DAD3A2260984FBCE5A5A09B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m020FD194A6421B6AB9EDCC03AE5F3D5F718AF4BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* V_1 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* V_4 = NULL;
	TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* V_6 = NULL;
	WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* V_7 = NULL;
	RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* V_8 = NULL;
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B7_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_009d_2;
				}
			}
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_00fa_2;
				}
			}
			{
				// ChangeState(AuthenticationState.SigningIn);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_5 = V_1;
				NullCheck(L_5);
				AuthenticationServiceInternal_ChangeState_m91558470DA842D246FA2DC42F92E8602E719A61F(L_5, 1, NULL);
				// var wellKnownKeysTask = WellKnownKeysComponent.Keys == null ? GetWellKnownKeysAsync() : Task.CompletedTask;
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_6 = V_1;
				NullCheck(L_6);
				WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* L_7;
				L_7 = AuthenticationServiceInternal_get_WellKnownKeysComponent_m7E533682E0EAD28DE9C952619AC74462C9C2CAAB_inline(L_6, NULL);
				NullCheck(L_7);
				WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* L_8;
				L_8 = WellKnownKeysComponent_get_Keys_mE745732161F364314842C6DBC5B2D79A4D98656F_inline(L_7, NULL);
				if (!L_8)
				{
					goto IL_003b_2;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
				L_9 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
				G_B7_0 = L_9;
				goto IL_0041_2;
			}

IL_003b_2:
			{
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_10 = V_1;
				NullCheck(L_10);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
				L_11 = AuthenticationServiceInternal_GetWellKnownKeysAsync_mD0C8F37924E1F10A4F59FC7106BBCF25040708BF(L_10, NULL);
				G_B7_0 = L_11;
			}

IL_0041_2:
			{
				V_2 = G_B7_0;
				// var signinRequestTask = signInRequest();
				Func_1_tEB8FCAE28EF35F5203DC58FEEE7791578EB0088B* L_12 = __this->___signInRequest_3;
				NullCheck(L_12);
				Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* L_13;
				L_13 = Func_1_Invoke_mFF276BF575B9BDA6F482AC987ECD7CDA99442D4A_inline(L_12, NULL);
				__this->___U3CsigninRequestTaskU3E5__2_5 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsigninRequestTaskU3E5__2_5), (void*)L_13);
				// await Task.WhenAll(signinRequestTask, wellKnownKeysTask);
				TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_14 = (TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3*)(TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3*)SZArrayNew(TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3_il2cpp_TypeInfo_var, (uint32_t)2);
				TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_15 = L_14;
				Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* L_16 = __this->___U3CsigninRequestTaskU3E5__2_5;
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, L_16);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_16);
				TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_17 = L_15;
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18 = V_2;
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_18);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_18);
				il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_19;
				L_19 = Task_WhenAll_mF5EC0950A443287DF9B67B00EF56977149429342(L_17, NULL);
				NullCheck(L_19);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_20;
				L_20 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_19, NULL);
				V_3 = L_20;
				bool L_21;
				L_21 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
				if (L_21)
				{
					goto IL_00b9_2;
				}
			}
			{
				int32_t L_22 = 0;
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_23 = V_3;
				__this->___U3CU3Eu__1_6 = L_23;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mF813EEFD6E75C66C16FAC9EF4F7C989219D67B9C(L_24, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mF813EEFD6E75C66C16FAC9EF4F7C989219D67B9C_RuntimeMethod_var);
				goto IL_018a;
			}

IL_009d_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_25 = __this->___U3CU3Eu__1_6;
				V_3 = L_25;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_26 = (&__this->___U3CU3Eu__1_6);
				il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_27 = (-1);
				V_0 = L_27;
				__this->___U3CU3E1__state_0 = L_27;
			}

IL_00b9_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
				// CompleteSignIn(await signinRequestTask, enableRefresh);
				Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* L_28 = __this->___U3CsigninRequestTaskU3E5__2_5;
				NullCheck(L_28);
				TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 L_29;
				L_29 = Task_1_GetAwaiter_m020FD194A6421B6AB9EDCC03AE5F3D5F718AF4BA(L_28, Task_1_GetAwaiter_m020FD194A6421B6AB9EDCC03AE5F3D5F718AF4BA_RuntimeMethod_var);
				V_5 = L_29;
				bool L_30;
				L_30 = TaskAwaiter_1_get_IsCompleted_m7D1C4A1DF6B50479DAD3A2260984FBCE5A5A09B1((&V_5), TaskAwaiter_1_get_IsCompleted_m7D1C4A1DF6B50479DAD3A2260984FBCE5A5A09B1_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0117_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 L_32 = V_5;
				__this->___U3CU3Eu__2_7 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_33 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mFC148A0816C9699FFF908CE824D2FA4EFE47947C(L_33, (&V_5), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1_TisU3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159_mFC148A0816C9699FFF908CE824D2FA4EFE47947C_RuntimeMethod_var);
				goto IL_018a;
			}

IL_00fa_2:
			{
				TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 L_34 = __this->___U3CU3Eu__2_7;
				V_5 = L_34;
				TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1* L_35 = (&__this->___U3CU3Eu__2_7);
				il2cpp_codegen_initobj(L_35, sizeof(TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_0117_2:
			{
				SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_37;
				L_37 = TaskAwaiter_1_GetResult_m59F70C7F70B91733E854738A7782BB43B9A0545C((&V_5), TaskAwaiter_1_GetResult_m59F70C7F70B91733E854738A7782BB43B9A0545C_RuntimeMethod_var);
				V_4 = L_37;
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_38 = V_1;
				SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_39 = V_4;
				bool L_40 = __this->___enableRefresh_4;
				NullCheck(L_38);
				AuthenticationServiceInternal_CompleteSignIn_m05519A7D98EC9B8FB6D2EF043A033FBF0D6885A9(L_38, L_39, L_40, NULL);
				// }
				__this->___U3CsigninRequestTaskU3E5__2_5 = (Task_1_tAF51175714E424A84783635B14DBF49E6F558D42*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsigninRequestTaskU3E5__2_5), (void*)(Task_1_tAF51175714E424A84783635B14DBF49E6F558D42*)NULL);
				goto IL_015c_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0137_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0144_1;
			}
			throw e;
		}

CATCH_0137_1:
		{// begin catch(Unity.Services.Core.RequestFailedException)
			// catch (RequestFailedException e)
			V_6 = ((RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00*)IL2CPP_GET_ACTIVE_EXCEPTION(RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00*));
			// SendSignInFailedEvent(e, true);
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_41 = V_1;
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_42 = V_6;
			NullCheck(L_41);
			AuthenticationServiceInternal_SendSignInFailedEvent_mAC3544A54E02CF24D377A1DCC62FAB1288D360CD(L_41, L_42, (bool)1, NULL);
			// throw;
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}// end catch (depth: 2)

CATCH_0144_1:
		{// begin catch(Unity.Services.Authentication.WebRequestException)
			// catch (WebRequestException e)
			V_7 = ((WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF*)IL2CPP_GET_ACTIVE_EXCEPTION(WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF*));
			// var authException = BuildServerException(e);
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_43 = V_1;
			WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_44 = V_7;
			NullCheck(L_43);
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_45;
			L_45 = AuthenticationServiceInternal_BuildServerException_m147620948CDE089B104498197F891D221C9272AD(L_43, L_44, NULL);
			V_8 = L_45;
			// SendSignInFailedEvent(authException, true);
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_46 = V_1;
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_47 = V_8;
			NullCheck(L_46);
			AuthenticationServiceInternal_SendSignInFailedEvent_mAC3544A54E02CF24D377A1DCC62FAB1288D360CD(L_46, L_47, (bool)1, NULL);
			// throw authException;
			RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_48 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHandleSignInRequestAsyncU3Ed__101_MoveNext_m0A9FB37866BC38785342FA62F2DF3BB9E6DCFF6C_RuntimeMethod_var)));
		}// end catch (depth: 2)

IL_015c_1:
		{
			goto IL_0177;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015e;
		}
		throw e;
	}

CATCH_015e:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_49 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_50 = V_9;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_49, L_50, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_018a;
	}// end catch (depth: 1)

IL_0177:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_51 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_51, NULL);
	}

IL_018a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHandleSignInRequestAsyncU3Ed__101_MoveNext_m0A9FB37866BC38785342FA62F2DF3BB9E6DCFF6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159*>(__this + _offset);
	U3CHandleSignInRequestAsyncU3Ed__101_MoveNext_m0A9FB37866BC38785342FA62F2DF3BB9E6DCFF6C(_thisAdjusted, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__101::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleSignInRequestAsyncU3Ed__101_SetStateMachine_m4186F382E4C30AD2013874C7D49E9996C70A26A8 (U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHandleSignInRequestAsyncU3Ed__101_SetStateMachine_m4186F382E4C30AD2013874C7D49E9996C70A26A8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CHandleSignInRequestAsyncU3Ed__101_t3BC47F7F4B9D993A15F77C988E568F9EECA6E159*>(__this + _offset);
	U3CHandleSignInRequestAsyncU3Ed__101_SetStateMachine_m4186F382E4C30AD2013874C7D49E9996C70A26A8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRefreshAsyncU3Ed__102_MoveNext_mBA169FB498C658D4D093C193627F9041C8D3A955 (U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_m9C707562CC77D30B0E2AFDBF3945CA53BA99F0AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m59F70C7F70B91733E854738A7782BB43B9A0545C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m7D1C4A1DF6B50479DAD3A2260984FBCE5A5A09B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m020FD194A6421B6AB9EDCC03AE5F3D5F718AF4BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* V_1 = NULL;
	SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* V_2 = NULL;
	TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0018_1;
			}
		}
		{
			// ChangeState(AuthenticationState.Refreshing);
			AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_3 = V_1;
			NullCheck(L_3);
			AuthenticationServiceInternal_ChangeState_m91558470DA842D246FA2DC42F92E8602E719A61F(L_3, 3, NULL);
		}

IL_0018_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_005f_2;
				}
			}
			{
				// var response = await NetworkClient.SignInWithSessionTokenAsync(sessionToken);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_5 = V_1;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A_inline(L_5, NULL);
				String_t* L_7 = __this->___sessionToken_3;
				NullCheck(L_6);
				Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* L_8;
				L_8 = InterfaceFuncInvoker1< Task_1_tAF51175714E424A84783635B14DBF49E6F558D42*, String_t* >::Invoke(2 /* System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.IAuthenticationNetworkClient::SignInWithSessionTokenAsync(System.String) */, IAuthenticationNetworkClient_tE658B0A498F07181701BE84B065AE424CF9CB86D_il2cpp_TypeInfo_var, L_6, L_7);
				NullCheck(L_8);
				TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 L_9;
				L_9 = Task_1_GetAwaiter_m020FD194A6421B6AB9EDCC03AE5F3D5F718AF4BA(L_8, Task_1_GetAwaiter_m020FD194A6421B6AB9EDCC03AE5F3D5F718AF4BA_RuntimeMethod_var);
				V_3 = L_9;
				bool L_10;
				L_10 = TaskAwaiter_1_get_IsCompleted_m7D1C4A1DF6B50479DAD3A2260984FBCE5A5A09B1((&V_3), TaskAwaiter_1_get_IsCompleted_m7D1C4A1DF6B50479DAD3A2260984FBCE5A5A09B1_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_007b_2;
				}
			}
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->___U3CU3E1__state_0 = L_11;
				TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 L_12 = V_3;
				__this->___U3CU3Eu__1_4 = L_12;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_13 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_m9C707562CC77D30B0E2AFDBF3945CA53BA99F0AD(L_13, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1_TisU3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE_m9C707562CC77D30B0E2AFDBF3945CA53BA99F0AD_RuntimeMethod_var);
				goto IL_0106;
			}

IL_005f_2:
			{
				TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1 L_14 = __this->___U3CU3Eu__1_4;
				V_3 = L_14;
				TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1* L_15 = (&__this->___U3CU3Eu__1_4);
				il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_tDBB2BB9B90F44E22036C41DC69AA572A51695CD1));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
			}

IL_007b_2:
			{
				SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_17;
				L_17 = TaskAwaiter_1_GetResult_m59F70C7F70B91733E854738A7782BB43B9A0545C((&V_3), TaskAwaiter_1_GetResult_m59F70C7F70B91733E854738A7782BB43B9A0545C_RuntimeMethod_var);
				V_2 = L_17;
				// CompleteSignIn(response);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_18 = V_1;
				SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* L_19 = V_2;
				NullCheck(L_18);
				AuthenticationServiceInternal_CompleteSignIn_m05519A7D98EC9B8FB6D2EF043A033FBF0D6885A9(L_18, L_19, (bool)1, NULL);
				// }
				goto IL_00d8_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_008d_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00a9_1;
			}
			throw e;
		}

CATCH_008d_1:
		{// begin catch(Unity.Services.Core.RequestFailedException)
			{
				// catch (RequestFailedException)
				// Logger.LogWarning("The access token is not valid. Retry JWKS and refresh again.");
				Logger_LogWarning_mE0A74606514DA618868A2737BAD77E6DF440F00E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BE0C724DF0778AB44291FE22681FE3735239D7F)), NULL);
				// if (State != AuthenticationState.Expired)
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_20 = V_1;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(L_20, NULL);
				if ((((int32_t)L_21) == ((int32_t)4)))
				{
					goto IL_00a7_1;
				}
			}
			{
				// Expire();
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_22 = V_1;
				NullCheck(L_22);
				AuthenticationServiceInternal_Expire_m8C6099E18DC51230DE98008291F7C59CE4956593(L_22, NULL);
			}

IL_00a7_1:
			{
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00d8_1;
			}
		}// end catch (depth: 2)

CATCH_00a9_1:
		{// begin catch(Unity.Services.Authentication.WebRequestException)
			{
				// catch (WebRequestException)
				// if (State == AuthenticationState.Refreshing)
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_23 = V_1;
				NullCheck(L_23);
				int32_t L_24;
				L_24 = AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline(L_23, NULL);
				if ((!(((uint32_t)L_24) == ((uint32_t)3))))
				{
					goto IL_00d6_1;
				}
			}
			{
				// Logger.LogWarning("Failed to refresh access token due to network error or internal server error, will retry later.");
				Logger_LogWarning_mE0A74606514DA618868A2737BAD77E6DF440F00E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE226315A889E342809A09A15505207F9977AF600)), NULL);
				// ChangeState(AuthenticationState.Authorized);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_25 = V_1;
				NullCheck(L_25);
				AuthenticationServiceInternal_ChangeState_m91558470DA842D246FA2DC42F92E8602E719A61F(L_25, 2, NULL);
				// ScheduleRefresh(Settings.RefreshAttemptFrequency);
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_26 = V_1;
				AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_27 = V_1;
				NullCheck(L_27);
				RuntimeObject* L_28;
				L_28 = AuthenticationServiceInternal_get_Settings_mC9B9A3983876B35F9926EDE4132C902A6B3B9968_inline(L_27, NULL);
				NullCheck(L_28);
				int32_t L_29;
				L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Unity.Services.Authentication.IAuthenticationSettings::get_RefreshAttemptFrequency() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IAuthenticationSettings_t8C46CC09B2615A65D1B87C8AD71C7637C3767233_il2cpp_TypeInfo_var)), L_28);
				NullCheck(L_26);
				AuthenticationServiceInternal_ScheduleRefresh_mD999E01866FCCBAD4554819092ED652F12138760(L_26, ((double)L_29), NULL);
			}

IL_00d6_1:
			{
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00d8_1;
			}
		}// end catch (depth: 2)

IL_00d8_1:
		{
			goto IL_00f3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00da;
		}
		throw e;
	}

CATCH_00da:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_30 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_31 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_30, L_31, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0106;
	}// end catch (depth: 1)

IL_00f3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_32 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_32, NULL);
	}

IL_0106:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRefreshAsyncU3Ed__102_MoveNext_mBA169FB498C658D4D093C193627F9041C8D3A955_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE*>(__this + _offset);
	U3CStartRefreshAsyncU3Ed__102_MoveNext_mBA169FB498C658D4D093C193627F9041C8D3A955(_thisAdjusted, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__102::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRefreshAsyncU3Ed__102_SetStateMachine_m0781EA7007B0C14964B851D614A0091BC938AB53 (U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRefreshAsyncU3Ed__102_SetStateMachine_m0781EA7007B0C14964B851D614A0091BC938AB53_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartRefreshAsyncU3Ed__102_t6255556B4B84F91476789B9DCB7C69E5D7422BFE*>(__this + _offset);
	U3CStartRefreshAsyncU3Ed__102_SetStateMachine_m0781EA7007B0C14964B851D614A0091BC938AB53(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m24D5D6B4E3E581FC2257B3B73EC89F135663E76C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A* L_0 = (U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A*)il2cpp_codegen_object_new(U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE9B682B809A0D474148BA6C0C48D2E67E07FF863(L_0, NULL);
		((U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE9B682B809A0D474148BA6C0C48D2E67E07FF863 (U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal/<>c::<CompleteSignIn>b__103_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCompleteSignInU3Eb__103_0_mB59CBC57A89EB9A3DB6948232CB5F3444573652D (U3CU3Ec_tBA32FF233223B0559CCB3A82EC4FF29EAE862A9A* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC88D38D30295ACC007AF41EA6369A9C7D096CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnvironmentIdComponent.EnvironmentId = accessTokenDecoded.Audience.FirstOrDefault(s => s.StartsWith("envId:"))?.Substring(6);
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteral3EC88D38D30295ACC007AF41EA6369A9C7D096CB, NULL);
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
// Unity.Services.Core.InitializationOptions Unity.Services.Authentication.AuthenticationExtensions::SetProfile(Unity.Services.Core.InitializationOptions,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* AuthenticationExtensions_SetProfile_mD1C151F3937FEC53EBFD94CC4EE91E13DCE5BACA (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options0, String_t* ___profile1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BBA17F9025B4E06EB9B984A9380348ECAAA27E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options.SetOption(ProfileKey, profile);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = ___options0;
		String_t* L_1 = ___profile1;
		NullCheck(L_0);
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_2;
		L_2 = InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1(L_0, _stringLiteral0BBA17F9025B4E06EB9B984A9380348ECAAA27E7, L_1, NULL);
		return L_2;
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
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationPackageInitializer::Initialize(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationPackageInitializer_Initialize_m7203F9CF9F2E4231A87F06FDF19613C853874047 (AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mECC41FF178AE8A222AB01DA1F1A412D237C5CB87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_m9825DA2F6B0AE6ECF9D7DBCA69BF1EFBADFFA5FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m96E3BC38CB35E7DE66A2138E255D9138290E0719_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_mBAC1AE4D552B9514846F66FBAF9F7B888E3B402F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m76EE03A1259101C248F840059C28D021440190D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BBA17F9025B4E06EB9B984A9380348ECAAA27E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* V_4 = NULL;
	DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA* V_5 = NULL;
	AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A* V_6 = NULL;
	JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* V_7 = NULL;
	AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* V_8 = NULL;
	AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* V_9 = NULL;
	EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* V_10 = NULL;
	PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* V_11 = NULL;
	SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* V_12 = NULL;
	WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* V_13 = NULL;
	NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360* V_14 = NULL;
	AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* V_15 = NULL;
	AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* V_16 = NULL;
	{
		// var settings = new AuthenticationSettings();
		AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* L_0 = (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947*)il2cpp_codegen_object_new(AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AuthenticationSettings__ctor_mBE5C222CEFEA863FD12B1EF18D0ACF22A31EFEBD(L_0, NULL);
		// var scheduler = registry.GetServiceComponent<IActionScheduler>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_1 = ___registry0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = CoreRegistry_GetServiceComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mECC41FF178AE8A222AB01DA1F1A412D237C5CB87(L_1, CoreRegistry_GetServiceComponent_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mECC41FF178AE8A222AB01DA1F1A412D237C5CB87_RuntimeMethod_var);
		V_0 = L_2;
		// var environment = registry.GetServiceComponent<IEnvironments>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_3 = ___registry0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF(L_3, CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var);
		V_1 = L_4;
		// var projectId = registry.GetServiceComponent<ICloudProjectId>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_5 = ___registry0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F(L_5, CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var);
		V_2 = L_6;
		// var projectConfiguration = registry.GetServiceComponent<IProjectConfiguration>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_7 = ___registry0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312(L_7, CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var);
		V_3 = L_8;
		// var profile = new ProfileComponent(projectConfiguration.GetString(AuthenticationExtensions.ProfileKey, "default"));
		RuntimeObject* L_9 = V_3;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(3 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_9, _stringLiteral0BBA17F9025B4E06EB9B984A9380348ECAAA27E7, _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* L_11 = (ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3*)il2cpp_codegen_object_new(ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ProfileComponent__ctor_mB0A553E4B5E2EC2427A916389729ECC35CEFE38A(L_11, L_10, NULL);
		V_4 = L_11;
		// var dateTime = new DateTimeWrapper();
		DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA* L_12 = (DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA*)il2cpp_codegen_object_new(DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		DateTimeWrapper__ctor_m37E5923227D3D90D57C8F5A5DB8B0D4E23F127FE(L_12, NULL);
		V_5 = L_12;
		// var metricsFactory = registry.GetServiceComponent<IMetricsFactory>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_13 = ___registry0;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = CoreRegistry_GetServiceComponent_TisIMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_m9825DA2F6B0AE6ECF9D7DBCA69BF1EFBADFFA5FB(L_13, CoreRegistry_GetServiceComponent_TisIMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_m9825DA2F6B0AE6ECF9D7DBCA69BF1EFBADFFA5FB_RuntimeMethod_var);
		// var metrics = new AuthenticationMetrics(metricsFactory);
		AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A* L_15 = (AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A*)il2cpp_codegen_object_new(AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		AuthenticationMetrics__ctor_m1E94E3FA297755A05C3862DE285B69D6E47DF47B(L_15, L_14, NULL);
		V_6 = L_15;
		// var jwtDecoder = new JwtDecoder(dateTime);
		DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA* L_16 = V_5;
		JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* L_17 = (JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484*)il2cpp_codegen_object_new(JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		JwtDecoder__ctor_m3CD5BE203E408B34A7133383E858E37F5C288375(L_17, L_16, NULL);
		V_7 = L_17;
		// var cache = new AuthenticationCache(projectId, profile);
		RuntimeObject* L_18 = V_2;
		ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* L_19 = V_4;
		AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* L_20 = (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C*)il2cpp_codegen_object_new(AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		AuthenticationCache__ctor_mA3284BC025D6C4BD635EE4864ED05324E7CBC517(L_20, L_18, L_19, NULL);
		V_8 = L_20;
		// var accessToken = new AccessTokenComponent();
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_21 = (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2*)il2cpp_codegen_object_new(AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		AccessTokenComponent__ctor_m844A2F62FDA9BF6E1E44A8193FF75DC0C6E1CEC4(L_21, NULL);
		V_9 = L_21;
		// var environmentId = new EnvironmentIdComponent();
		EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* L_22 = (EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8*)il2cpp_codegen_object_new(EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		EnvironmentIdComponent__ctor_m4DF99AC648D90C616999D41F6869CB2786F59B0D(L_22, NULL);
		V_10 = L_22;
		// var playerId = new PlayerIdComponent(cache);
		AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* L_23 = V_8;
		PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* L_24 = (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19*)il2cpp_codegen_object_new(PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		PlayerIdComponent__ctor_m61FB3E8D7DA71282C77AECA611588B55287C2869(L_24, L_23, NULL);
		V_11 = L_24;
		// var sessionToken = new SessionTokenComponent(cache);
		AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* L_25 = V_8;
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_26 = (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612*)il2cpp_codegen_object_new(SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		SessionTokenComponent__ctor_mFAB481325A4F94D2F55985E75E44CEBA50878CAD(L_26, L_25, NULL);
		V_12 = L_26;
		// var wellKnownKeys = new WellKnownKeysComponent();
		WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* L_27 = (WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB*)il2cpp_codegen_object_new(WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		WellKnownKeysComponent__ctor_mDF82AD77E6093388027339255F70598AFD01CA51(L_27, NULL);
		V_13 = L_27;
		// var networkHandler = new NetworkHandler();
		NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360* L_28 = (NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360*)il2cpp_codegen_object_new(NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		NetworkHandler__ctor_mD7E4C7A769EA5CAA763BF06289A0B5C223D88503(L_28, NULL);
		V_14 = L_28;
		// var host = GetHost(projectConfiguration);
		RuntimeObject* L_29 = V_3;
		String_t* L_30;
		L_30 = AuthenticationPackageInitializer_GetHost_mF1395BCCEC3453DB252830DB158D63F3426C66C4(__this, L_29, NULL);
		// var networkClient = new AuthenticationNetworkClient(host,
		//     projectId,
		//     environment,
		//     networkHandler,
		//     accessToken);
		RuntimeObject* L_31 = V_2;
		RuntimeObject* L_32 = V_1;
		NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360* L_33 = V_14;
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_34 = V_9;
		AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* L_35 = (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8*)il2cpp_codegen_object_new(AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		AuthenticationNetworkClient__ctor_m2E1563DC14B43DFEE03BBDC785B27047ED816EE4(L_35, L_30, L_31, L_32, L_33, L_34, NULL);
		V_15 = L_35;
		// var authenticationService = new AuthenticationServiceInternal(
		//     settings,
		//     networkClient,
		//     profile,
		//     jwtDecoder,
		//     cache,
		//     scheduler,
		//     dateTime,
		//     metrics,
		//     accessToken,
		//     environmentId,
		//     playerId,
		//     sessionToken,
		//     wellKnownKeys);
		AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* L_36 = V_15;
		ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* L_37 = V_4;
		JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* L_38 = V_7;
		AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* L_39 = V_8;
		RuntimeObject* L_40 = V_0;
		DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA* L_41 = V_5;
		AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A* L_42 = V_6;
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_43 = V_9;
		EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* L_44 = V_10;
		PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* L_45 = V_11;
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_46 = V_12;
		WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* L_47 = V_13;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_48 = (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B*)il2cpp_codegen_object_new(AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		AuthenticationServiceInternal__ctor_m836DECD9A0E12F0C35F0CBD3FAFC90D317FABF3C(L_48, L_0, L_36, L_37, L_38, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46, L_47, NULL);
		V_16 = L_48;
		// AuthenticationService.Instance = authenticationService;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_49 = V_16;
		AuthenticationService_set_Instance_mF6E5CECFA4F9F11AD6628770749F28B73904F1F3_inline(L_49, NULL);
		// registry.RegisterServiceComponent<IAccessToken>(authenticationService.AccessTokenComponent);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_50 = ___registry0;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_51 = V_16;
		NullCheck(L_51);
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_52;
		L_52 = AuthenticationServiceInternal_get_AccessTokenComponent_mA3669DE89749DFCFA04AE2A4DB47505AD55D248E_inline(L_51, NULL);
		NullCheck(L_50);
		CoreRegistry_RegisterServiceComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m96E3BC38CB35E7DE66A2138E255D9138290E0719(L_50, L_52, CoreRegistry_RegisterServiceComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m96E3BC38CB35E7DE66A2138E255D9138290E0719_RuntimeMethod_var);
		// registry.RegisterServiceComponent<IEnvironmentId>(authenticationService.EnvironmentIdComponent);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_53 = ___registry0;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_54 = V_16;
		NullCheck(L_54);
		EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* L_55;
		L_55 = AuthenticationServiceInternal_get_EnvironmentIdComponent_m195E0AFCC08E96FB3FB53F3258BF6FBB3B75036A_inline(L_54, NULL);
		NullCheck(L_53);
		CoreRegistry_RegisterServiceComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_mBAC1AE4D552B9514846F66FBAF9F7B888E3B402F(L_53, L_55, CoreRegistry_RegisterServiceComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_mBAC1AE4D552B9514846F66FBAF9F7B888E3B402F_RuntimeMethod_var);
		// registry.RegisterServiceComponent<IPlayerId>(authenticationService.PlayerIdComponent);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_56 = ___registry0;
		AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* L_57 = V_16;
		NullCheck(L_57);
		PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* L_58;
		L_58 = AuthenticationServiceInternal_get_PlayerIdComponent_mCB05A130C555F6DF00E4CBCD63A86DAACF9DF743_inline(L_57, NULL);
		NullCheck(L_56);
		CoreRegistry_RegisterServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m76EE03A1259101C248F840059C28D021440190D3(L_56, L_58, CoreRegistry_RegisterServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m76EE03A1259101C248F840059C28D021440190D3_RuntimeMethod_var);
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_59;
		L_59 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_59;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationPackageInitializer::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationPackageInitializer_Register_mFBA2D2FB318E6DBACF9D6CE54C20748A71DBD4E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mC48AD060A6B3F5E06A2B4AE04C71F0DD05DBAABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_mAAAC4DFCA0707823134A60AAD6883345738C8543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m93F4FBA0C705D7D86490EBD4E70005983E16BFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m04C4A9BE5DBB1E12902078344F685C8FC3023713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mE4D416BE760057F83FE86BA2FEF5753E1B44BE69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterPackage_TisAuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E_m7F81ECFF18FBDFC0E59A8302DC62E3B420173E7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CoreRegistry.Instance.RegisterPackage(new AuthenticationPackageInitializer())
		//     .DependsOn<IEnvironments>()
		//     .DependsOn<IActionScheduler>()
		//     .DependsOn<ICloudProjectId>()
		//     .DependsOn<IProjectConfiguration>()
		//     .DependsOn<IMetricsFactory>()
		//     .ProvidesComponent<IPlayerId>()
		//     .ProvidesComponent<IAccessToken>()
		//     .ProvidesComponent<IEnvironmentId>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0;
		L_0 = CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline(NULL);
		AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E* L_1 = (AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E*)il2cpp_codegen_object_new(AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AuthenticationPackageInitializer__ctor_m7CCECFA94D25D61294F3A9A2FCEB6CCA2B401130(L_1, NULL);
		NullCheck(L_0);
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_2;
		L_2 = CoreRegistry_RegisterPackage_TisAuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E_m7F81ECFF18FBDFC0E59A8302DC62E3B420173E7A(L_0, L_1, CoreRegistry_RegisterPackage_TisAuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E_m7F81ECFF18FBDFC0E59A8302DC62E3B420173E7A_RuntimeMethod_var);
		V_0 = L_2;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_3;
		L_3 = CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64((&V_0), CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var);
		V_0 = L_3;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_4;
		L_4 = CoreRegistration_DependsOn_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mC48AD060A6B3F5E06A2B4AE04C71F0DD05DBAABD((&V_0), CoreRegistration_DependsOn_TisIActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1_mC48AD060A6B3F5E06A2B4AE04C71F0DD05DBAABD_RuntimeMethod_var);
		V_0 = L_4;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_5;
		L_5 = CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4((&V_0), CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var);
		V_0 = L_5;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_6;
		L_6 = CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10((&V_0), CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var);
		V_0 = L_6;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_7;
		L_7 = CoreRegistration_DependsOn_TisIMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_mAAAC4DFCA0707823134A60AAD6883345738C8543((&V_0), CoreRegistration_DependsOn_TisIMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_mAAAC4DFCA0707823134A60AAD6883345738C8543_RuntimeMethod_var);
		V_0 = L_7;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_8;
		L_8 = CoreRegistration_ProvidesComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mE4D416BE760057F83FE86BA2FEF5753E1B44BE69((&V_0), CoreRegistration_ProvidesComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mE4D416BE760057F83FE86BA2FEF5753E1B44BE69_RuntimeMethod_var);
		V_0 = L_8;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_9;
		L_9 = CoreRegistration_ProvidesComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m93F4FBA0C705D7D86490EBD4E70005983E16BFA0((&V_0), CoreRegistration_ProvidesComponent_TisIAccessToken_t8A8955010FD3200218D16D50699C60F922877720_m93F4FBA0C705D7D86490EBD4E70005983E16BFA0_RuntimeMethod_var);
		V_0 = L_9;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_10;
		L_10 = CoreRegistration_ProvidesComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m04C4A9BE5DBB1E12902078344F685C8FC3023713((&V_0), CoreRegistration_ProvidesComponent_TisIEnvironmentId_t41F57B8598672793A24D18451997BDAE37C3867F_m04C4A9BE5DBB1E12902078344F685C8FC3023713_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.AuthenticationPackageInitializer::GetHost(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationPackageInitializer_GetHost_mF1395BCCEC3453DB252830DB158D63F3426C66C4 (AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E* __this, RuntimeObject* ___projectConfiguration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E9F41A081334E4B02281220D1D08BE13787C133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral717C4F750DC4509915CB09BBCF378D5BCAAE0384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD2602465D20536036625524AF1C558FA78A80ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECFDE2983A6856B5CACDDC405CED9C5C735543F1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// var cloudEnvironment = projectConfiguration?.GetString(k_CloudEnvironmentKey);
		RuntimeObject* L_0 = ___projectConfiguration0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___projectConfiguration0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(3 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_1, _stringLiteralAD2602465D20536036625524AF1C558FA78A80ED, (String_t*)NULL);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(G_B3_0, _stringLiteral6E9F41A081334E4B02281220D1D08BE13787C133, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return "https://player-auth-stg.services.api.unity.com";
		return _stringLiteral717C4F750DC4509915CB09BBCF378D5BCAAE0384;
	}

IL_0024:
	{
		// return "https://player-auth.services.api.unity.com";
		return _stringLiteralECFDE2983A6856B5CACDDC405CED9C5C735543F1;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationPackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationPackageInitializer__ctor_m7CCECFA94D25D61294F3A9A2FCEB6CCA2B401130 (AuthenticationPackageInitializer_t743FD6E189BC34E026FFE4AC223C6E2446DD615E* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Services.Authentication.AuthenticationException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationException__ctor_mE85564838F285C5EB1D1B7B417BC3A2E8D3FE3CF (AuthenticationException_tB035991B8F9E6DDB3E6EF7D5829B4C7E4E677FB3* __this, int32_t ___errorCode0, String_t* ___message1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	{
		// : base(errorCode, message, innerException)
		int32_t L_0 = ___errorCode0;
		String_t* L_1 = ___message1;
		Exception_t* L_2 = ___innerException2;
		RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationException::Create(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* AuthenticationException_Create_mE1E6C1F3DF918B0DBCD40D720049396EE93093F0 (int32_t ___errorCode0, String_t* ___message1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationException_tB035991B8F9E6DDB3E6EF7D5829B4C7E4E677FB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (errorCode < AuthenticationErrorCodes.MinValue)
		int32_t L_0 = ___errorCode0;
		il2cpp_codegen_runtime_class_init_inline(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var);
		int32_t L_1 = ((AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_tAE30BE90DFBEAE96413E18FF7979FCE49AFB7CF1_il2cpp_TypeInfo_var))->___MinValue_0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		// return new RequestFailedException(errorCode, message, innerException);
		int32_t L_2 = ___errorCode0;
		String_t* L_3 = ___message1;
		Exception_t* L_4 = ___innerException2;
		RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* L_5 = (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00*)il2cpp_codegen_object_new(RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A(L_5, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0011:
	{
		// return new AuthenticationException(errorCode, message, innerException);
		int32_t L_6 = ___errorCode0;
		String_t* L_7 = ___message1;
		Exception_t* L_8 = ___innerException2;
		AuthenticationException_tB035991B8F9E6DDB3E6EF7D5829B4C7E4E677FB3* L_9 = (AuthenticationException_tB035991B8F9E6DDB3E6EF7D5829B4C7E4E677FB3*)il2cpp_codegen_object_new(AuthenticationException_tB035991B8F9E6DDB3E6EF7D5829B4C7E4E677FB3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AuthenticationException__ctor_mE85564838F285C5EB1D1B7B417BC3A2E8D3FE3CF(L_9, L_6, L_7, L_8, NULL);
		return L_9;
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
// System.Void Unity.Services.Authentication.AuthenticationMetrics::.ctor(Unity.Services.Core.Telemetry.Internal.IMetricsFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics__ctor_m1E94E3FA297755A05C3862DE285B69D6E47DF47B (AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A* __this, RuntimeObject* ___metricsFactory0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9349ADD882729BE53E1C4DE12028C63CA62FB09D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AuthenticationMetrics(IMetricsFactory metricsFactory)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Metrics = metricsFactory.Create(AuthenticationPackageName);
		RuntimeObject* L_0 = ___metricsFactory0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.IMetricsFactory::Create(System.String) */, IMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_il2cpp_TypeInfo_var, L_0, _stringLiteral9349ADD882729BE53E1C4DE12028C63CA62FB09D);
		__this->___m_Metrics_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Metrics_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::SendNetworkErrorMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics_SendNetworkErrorMetric_m8F9D0527DD7905C627E4B4E3FCDAFF6E9949238F (AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0135F76E285AE1930AF69DEBEFAFB813DE53F08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendSumMetric(NetworkErrorMetricName);
		RuntimeObject* L_0 = __this->___m_Metrics_6;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(2 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var, L_0, _stringLiteralD0135F76E285AE1930AF69DEBEFAFB813DE53F08, (1.0), (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::SendExpiredSessionMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics_SendExpiredSessionMetric_m3D97D9ED9838EDC6D56428F655EC53D4967C4A2B (AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A9978B59FFBFBE63AC70C74158A9EC795C97E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendSumMetric(ExpiredSessionMetricName);
		RuntimeObject* L_0 = __this->___m_Metrics_6;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(2 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var, L_0, _stringLiteral84A9978B59FFBFBE63AC70C74158A9EC795C97E2, (1.0), (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::SendClientInvalidStateExceptionMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics_SendClientInvalidStateExceptionMetric_m53CC1F526054710E3AF6A3B8C4FC123DADE695CC (AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB3E69FC55ED8847330589BDD84FCE65D9533F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendSumMetric(ClientInvalidStateExceptionMetricName);
		RuntimeObject* L_0 = __this->___m_Metrics_6;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(2 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var, L_0, _stringLiteralDEB3E69FC55ED8847330589BDD84FCE65D9533F9, (1.0), (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::SendUnlinkExternalIdNotFoundExceptionMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics_SendUnlinkExternalIdNotFoundExceptionMetric_m7BC0F6D7EFABB4759E69A0F4CD0E9D1F68D10D10 (AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA8AA2AB44804D79187FCFFF99D1CAC43C6E8B5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendSumMetric(UnlinkExternalIdNotFoundExceptionMetricName);
		RuntimeObject* L_0 = __this->___m_Metrics_6;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(2 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var, L_0, _stringLiteralFA8AA2AB44804D79187FCFFF99D1CAC43C6E8B5F, (1.0), (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::SendClientSessionTokenNotExistsExceptionMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics_SendClientSessionTokenNotExistsExceptionMetric_m933EAFCB74F2516CC50D4B1C7BF6A0437483EA12 (AuthenticationMetrics_tF3A1BA9B8C470621075D7C8ABB7E88587FB38E3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08236C3D0BD231A7F99CFFF73121864DE711C7AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendSumMetric(ClientSessionTokenNotExistsExceptionMetricName);
		RuntimeObject* L_0 = __this->___m_Metrics_6;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(2 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var, L_0, _stringLiteral08236C3D0BD231A7F99CFFF73121864DE711C7AF, (1.0), (RuntimeObject*)NULL);
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
// System.String Unity.Services.Authentication.AccessTokenComponent::get_AccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessTokenComponent_get_AccessToken_m70FC319ED7E39A53D5C17E775FD052D466F29ED8 (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, const RuntimeMethod* method) 
{
	{
		// public string AccessToken { get; internal set; }
		String_t* L_0 = __this->___U3CAccessTokenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AccessTokenComponent::set_AccessToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent_set_AccessToken_m63F73183C53D3469EC2E8C6FD1862976D52916E8 (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string AccessToken { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CAccessTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.DateTime> Unity.Services.Authentication.AccessTokenComponent::get_ExpiryTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC AccessTokenComponent_get_ExpiryTime_mD432CAD7F2F305A36AA717226C651F4A67F420A6 (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? ExpiryTime { get; internal set; }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = __this->___U3CExpiryTimeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AccessTokenComponent::set_ExpiryTime(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent_set_ExpiryTime_mCC7F031ADF1682401F64DF064612034E37A503B6 (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___value0, const RuntimeMethod* method) 
{
	{
		// public DateTime? ExpiryTime { get; internal set; }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = ___value0;
		__this->___U3CExpiryTimeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Unity.Services.Authentication.AccessTokenComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent__ctor_m844A2F62FDA9BF6E1E44A8193FF75DC0C6E1CEC4 (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, const RuntimeMethod* method) 
{
	{
		// internal AccessTokenComponent()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AccessTokenComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent_Clear_mEDC9FC08D14A8270968A106A7D72C43686DDD5F6 (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, const RuntimeMethod* method) 
{
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AccessToken = null;
		AccessTokenComponent_set_AccessToken_m63F73183C53D3469EC2E8C6FD1862976D52916E8_inline(__this, (String_t*)NULL, NULL);
		// ExpiryTime = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = V_0;
		AccessTokenComponent_set_ExpiryTime_mCC7F031ADF1682401F64DF064612034E37A503B6_inline(__this, L_0, NULL);
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
// System.String Unity.Services.Authentication.EnvironmentIdComponent::get_EnvironmentId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnvironmentIdComponent_get_EnvironmentId_m73A4D15D88B632C3EDE3E4CB904896233B08720D (EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* __this, const RuntimeMethod* method) 
{
	{
		// public string EnvironmentId { get; internal set; }
		String_t* L_0 = __this->___U3CEnvironmentIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.EnvironmentIdComponent::set_EnvironmentId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentIdComponent_set_EnvironmentId_m530BC338835B82D9D4401F7FF7E23F36321F4808 (EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string EnvironmentId { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CEnvironmentIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnvironmentIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.EnvironmentIdComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentIdComponent__ctor_m4DF99AC648D90C616999D41F6869CB2786F59B0D (EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* __this, const RuntimeMethod* method) 
{
	{
		// internal EnvironmentIdComponent()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Unity.Services.Authentication.PlayerIdComponent::add_PlayerIdChanged(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_add_PlayerIdChanged_mBA0004B0877D77624016EB806E5721855ACBF3A4 (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___PlayerIdChanged_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___PlayerIdChanged_1);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.PlayerIdComponent::remove_PlayerIdChanged(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_remove_PlayerIdChanged_mC99DA59304B6D42A076C0F355D95A89A4554DB8E (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___PlayerIdChanged_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___PlayerIdChanged_1);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String Unity.Services.Authentication.PlayerIdComponent::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerIdComponent_get_PlayerId_m3B26D7263EE5FF703A96397CA7F8359EFC2B3E63 (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, const RuntimeMethod* method) 
{
	{
		// public string PlayerId { get => GetPlayerId(); internal set => SetPlayerId(value); }
		String_t* L_0;
		L_0 = PlayerIdComponent_GetPlayerId_mDD6103F18860BEF427C8B046F136F145EB1FF058(__this, NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.PlayerIdComponent::set_PlayerId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_set_PlayerId_mA274F8E83C33A5479A2AD42F3DDBF79E1DFE8EBC (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string PlayerId { get => GetPlayerId(); internal set => SetPlayerId(value); }
		String_t* L_0 = ___value0;
		PlayerIdComponent_SetPlayerId_m48E64CCB35B3A4B741BFE9E72EB8D5FA449D1358(__this, L_0, NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.PlayerIdComponent::.ctor(Unity.Services.Authentication.IAuthenticationCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent__ctor_m61FB3E8D7DA71282C77AECA611588B55287C2869 (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, RuntimeObject* ___cache0, const RuntimeMethod* method) 
{
	{
		// internal PlayerIdComponent(IAuthenticationCache cache)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Cache = cache;
		RuntimeObject* L_0 = ___cache0;
		__this->___m_Cache_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cache_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.PlayerIdComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_Clear_m438DBB045CB0417378B50D1B5A1E5F2DD4FCFE4B (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cache.DeleteKey(k_CacheKey);
		RuntimeObject* L_0 = __this->___m_Cache_2;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Unity.Services.Authentication.ICache::DeleteKey(System.String) */, ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var, L_0, _stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF);
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.PlayerIdComponent::GetPlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerIdComponent_GetPlayerId_mDD6103F18860BEF427C8B046F136F145EB1FF058 (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Cache.GetString(k_CacheKey);
		RuntimeObject* L_0 = __this->___m_Cache_2;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Unity.Services.Authentication.ICache::GetString(System.String) */, ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var, L_0, _stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF);
		return L_1;
	}
}
// System.Void Unity.Services.Authentication.PlayerIdComponent::SetPlayerId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_SetPlayerId_m48E64CCB35B3A4B741BFE9E72EB8D5FA449D1358 (PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* __this, String_t* ___playerId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B3_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	{
		// if (PlayerId != playerId)
		String_t* L_0;
		L_0 = PlayerIdComponent_get_PlayerId_m3B26D7263EE5FF703A96397CA7F8359EFC2B3E63(__this, NULL);
		String_t* L_1 = ___playerId0;
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// m_Cache.SetString(k_CacheKey, playerId);
		RuntimeObject* L_3 = __this->___m_Cache_2;
		String_t* L_4 = ___playerId0;
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(2 /* System.Void Unity.Services.Authentication.ICache::SetString(System.String,System.String) */, ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var, L_3, _stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF, L_4);
		// PlayerIdChanged?.Invoke(playerId);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = __this->___PlayerIdChanged_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		String_t* L_7 = ___playerId0;
		NullCheck(G_B3_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B3_0, L_7, NULL);
	}

IL_0030:
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
// System.Void Unity.Services.Authentication.ProfileComponent::add_ProfileChange(System.Action`1<Unity.Services.Authentication.ProfileEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileComponent_add_ProfileChange_mBB42E17051F7D7731D99D43398021F00BE80B7AE (ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* __this, Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t211056316F21C506A70C119B6DFC60079C04E01F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* V_0 = NULL;
	Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* V_1 = NULL;
	Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* V_2 = NULL;
	{
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_0 = __this->___ProfileChange_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_1 = V_0;
		V_1 = L_1;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_2 = V_1;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t211056316F21C506A70C119B6DFC60079C04E01F*)Castclass((RuntimeObject*)L_4, Action_1_t211056316F21C506A70C119B6DFC60079C04E01F_il2cpp_TypeInfo_var));
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F** L_5 = (&__this->___ProfileChange_0);
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_6 = V_2;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_7 = V_1;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t211056316F21C506A70C119B6DFC60079C04E01F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_9 = V_0;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t211056316F21C506A70C119B6DFC60079C04E01F*)L_9) == ((RuntimeObject*)(Action_1_t211056316F21C506A70C119B6DFC60079C04E01F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.ProfileComponent::remove_ProfileChange(System.Action`1<Unity.Services.Authentication.ProfileEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileComponent_remove_ProfileChange_m2E7B0EA9820C27A3B77849FCA757D41A936AA0A5 (ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* __this, Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t211056316F21C506A70C119B6DFC60079C04E01F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* V_0 = NULL;
	Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* V_1 = NULL;
	Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* V_2 = NULL;
	{
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_0 = __this->___ProfileChange_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_1 = V_0;
		V_1 = L_1;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_2 = V_1;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t211056316F21C506A70C119B6DFC60079C04E01F*)Castclass((RuntimeObject*)L_4, Action_1_t211056316F21C506A70C119B6DFC60079C04E01F_il2cpp_TypeInfo_var));
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F** L_5 = (&__this->___ProfileChange_0);
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_6 = V_2;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_7 = V_1;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t211056316F21C506A70C119B6DFC60079C04E01F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_9 = V_0;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t211056316F21C506A70C119B6DFC60079C04E01F*)L_9) == ((RuntimeObject*)(Action_1_t211056316F21C506A70C119B6DFC60079C04E01F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String Unity.Services.Authentication.ProfileComponent::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProfileComponent_get_Current_m940230AD5703C84B0812260EDC717B738CF9BE9B (ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* __this, const RuntimeMethod* method) 
{
	{
		// public string Current { get => _current; set => SetProfile(value); }
		String_t* L_0 = __this->____current_1;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.ProfileComponent::set_Current(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileComponent_set_Current_mA4EF018E3C67F096D95B80ADAE75507CED7C761D (ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Current { get => _current; set => SetProfile(value); }
		String_t* L_0 = ___value0;
		ProfileComponent_SetProfile_m910DD105C52B8FB3E06F437F6D7E723904696F98(__this, L_0, NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.ProfileComponent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileComponent__ctor_mB0A553E4B5E2EC2427A916389729ECC35CEFE38A (ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* __this, String_t* ___profile0, const RuntimeMethod* method) 
{
	{
		// internal ProfileComponent(string profile)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SetProfile(profile);
		String_t* L_0 = ___profile0;
		ProfileComponent_SetProfile_m910DD105C52B8FB3E06F437F6D7E723904696F98(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.ProfileComponent::SetProfile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileComponent_SetProfile_m910DD105C52B8FB3E06F437F6D7E723904696F98 (ProfileComponent_tEB8CB49409DB1946ABD5A858DC493D0248B05FE3* __this, String_t* ___profile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* G_B2_0 = NULL;
	Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* G_B1_0 = NULL;
	{
		// _current = profile;
		String_t* L_0 = ___profile0;
		__this->____current_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)L_0);
		// ProfileChange?.Invoke(new ProfileEventArgs(_current));
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_1 = __this->___ProfileChange_0;
		Action_1_t211056316F21C506A70C119B6DFC60079C04E01F* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		String_t* L_3 = __this->____current_1;
		ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26* L_4 = (ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26*)il2cpp_codegen_object_new(ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ProfileEventArgs__ctor_m709F0824F5FA1A5EDDD6DE495047A2B322DEF7FF(L_4, L_3, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m5D63BF6B78E032F8411B13CA40F2CB069E7D525B_inline(G_B2_0, L_4, NULL);
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
// System.String Unity.Services.Authentication.ProfileEventArgs::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProfileEventArgs_get_Profile_m30FB038C9EBAFBC66AADDCA203B3579DD09AF58E (ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26* __this, const RuntimeMethod* method) 
{
	{
		// public string Profile { get; }
		String_t* L_0 = __this->___U3CProfileU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.ProfileEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileEventArgs__ctor_m709F0824F5FA1A5EDDD6DE495047A2B322DEF7FF (ProfileEventArgs_t18698627B9AC14CEFDA3F304BC78C28CB5F39B26* __this, String_t* ___profile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ProfileEventArgs(string profile)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// Profile = profile;
		String_t* L_0 = ___profile0;
		__this->___U3CProfileU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProfileU3Ek__BackingField_1), (void*)L_0);
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
// System.String Unity.Services.Authentication.SessionTokenComponent::get_SessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionTokenComponent_get_SessionToken_mFCD6A8E0CAC451180203F6D1F56C9EEBBF61DAFA (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, const RuntimeMethod* method) 
{
	{
		// internal string SessionToken { get => GetSessionToken(); set => SetSessionToken(value); }
		String_t* L_0;
		L_0 = SessionTokenComponent_GetSessionToken_mDF23709AAD37F4EA8AEB0B25CFD43FD8D754DE71(__this, NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.SessionTokenComponent::set_SessionToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_set_SessionToken_m169A99C88E662C238FE756FBD44AC46C3C8D2904 (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string SessionToken { get => GetSessionToken(); set => SetSessionToken(value); }
		String_t* L_0 = ___value0;
		SessionTokenComponent_SetSessionToken_m4F627C53F670EA1FF1EC3568BDDE5551A2C41F78(__this, L_0, NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.SessionTokenComponent::.ctor(Unity.Services.Authentication.IAuthenticationCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent__ctor_mFAB481325A4F94D2F55985E75E44CEBA50878CAD (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, RuntimeObject* ___cache0, const RuntimeMethod* method) 
{
	{
		// internal SessionTokenComponent(IAuthenticationCache cache)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Cache = cache;
		RuntimeObject* L_0 = ___cache0;
		__this->___m_Cache_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cache_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.SessionTokenComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_Clear_m8C8411835ADD425D4A042F2345BCCB60FD2B6351 (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cache.DeleteKey(k_CacheKey);
		RuntimeObject* L_0 = __this->___m_Cache_1;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Unity.Services.Authentication.ICache::DeleteKey(System.String) */, ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var, L_0, _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.SessionTokenComponent::Migrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_Migrate_m270AD9D9556543733F170747713346F076210D86 (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationCache_t9AB026335B4412D5E4CC8BEF043B65C1AE27059A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cache.Migrate(k_CacheKey);
		RuntimeObject* L_0 = __this->___m_Cache_1;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Unity.Services.Authentication.IAuthenticationCache::Migrate(System.String) */, IAuthenticationCache_t9AB026335B4412D5E4CC8BEF043B65C1AE27059A_il2cpp_TypeInfo_var, L_0, _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.SessionTokenComponent::GetSessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionTokenComponent_GetSessionToken_mDF23709AAD37F4EA8AEB0B25CFD43FD8D754DE71 (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Cache.GetString(k_CacheKey);
		RuntimeObject* L_0 = __this->___m_Cache_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Unity.Services.Authentication.ICache::GetString(System.String) */, ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var, L_0, _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		return L_1;
	}
}
// System.Void Unity.Services.Authentication.SessionTokenComponent::SetSessionToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_SetSessionToken_m4F627C53F670EA1FF1EC3568BDDE5551A2C41F78 (SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* __this, String_t* ___sessionToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cache.SetString(k_CacheKey, sessionToken);
		RuntimeObject* L_0 = __this->___m_Cache_1;
		String_t* L_1 = ___sessionToken0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(2 /* System.Void Unity.Services.Authentication.ICache::SetString(System.String,System.String) */, ICache_tE4520796153FB515243B44CE8872EB2F24C030A2_il2cpp_TypeInfo_var, L_0, _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990, L_1);
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
// Unity.Services.Authentication.WellKnownKey[] Unity.Services.Authentication.WellKnownKeysComponent::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* WellKnownKeysComponent_get_Keys_mE745732161F364314842C6DBC5B2D79A4D98656F (WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* __this, const RuntimeMethod* method) 
{
	{
		// public WellKnownKey[] Keys { get; internal set; }
		WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* L_0 = __this->___U3CKeysU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.WellKnownKeysComponent::set_Keys(Unity.Services.Authentication.WellKnownKey[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WellKnownKeysComponent_set_Keys_mD3986F1B3657510DB66DC2063261248E8A289621 (WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* __this, WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* ___value0, const RuntimeMethod* method) 
{
	{
		// public WellKnownKey[] Keys { get; internal set; }
		WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* L_0 = ___value0;
		__this->___U3CKeysU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeysU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.WellKnownKeysComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WellKnownKeysComponent__ctor_mDF82AD77E6093388027339255F70598AFD01CA51 (WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* __this, const RuntimeMethod* method) 
{
	{
		// internal WellKnownKeysComponent()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Unity.Services.Authentication.Identity::.ctor(Unity.Services.Authentication.ExternalIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Identity__ctor_m10262663AE817B6356F47E13E30762275291B9E4 (Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* __this, ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* ___externalIdentity0, const RuntimeMethod* method) 
{
	{
		// internal Identity(ExternalIdentity externalIdentity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (externalIdentity != null)
		ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* L_0 = ___externalIdentity0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// TypeId = externalIdentity.ProviderId;
		ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* L_1 = ___externalIdentity0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___ProviderId_0;
		__this->___TypeId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeId_0), (void*)L_2);
		// UserId = externalIdentity.ExternalId;
		ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* L_3 = ___externalIdentity0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___ExternalId_1;
		__this->___UserId_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserId_1), (void*)L_4);
	}

IL_0021:
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
// System.Boolean Unity.Services.Authentication.LinkOptions::get_ForceLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkOptions_get_ForceLink_m7091635AF7588667BF843D8AAFFBBDE3B4D3426F (LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* __this, const RuntimeMethod* method) 
{
	{
		// public bool ForceLink { get; set; }
		bool L_0 = __this->___U3CForceLinkU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.LinkOptions::set_ForceLink(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkOptions_set_ForceLink_m61348BAD6BC1A1E6F436672A5A59C72B062000D4 (LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ForceLink { get; set; }
		bool L_0 = ___value0;
		__this->___U3CForceLinkU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Unity.Services.Authentication.LinkOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkOptions__ctor_mBCD3C4D9B9FA0CAFE026C6E8FB5736945E78CA8A (LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* __this, const RuntimeMethod* method) 
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
// System.String Unity.Services.Authentication.PlayerInfo::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_get_Id_m7C67DE9AAA0A4279DE0F31CF84CE06654F895128 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> Unity.Services.Authentication.PlayerInfo::get_CreatedAt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC PlayerInfo_get_CreatedAt_m230C58465F7610264A3EC31E9EB01D277A6C9183 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? CreatedAt { get; }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = __this->___U3CCreatedAtU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Unity.Services.Authentication.Identity> Unity.Services.Authentication.PlayerInfo::get_Identities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* PlayerInfo_get_Identities_m8C89A941C76178DFECACF3C3D64219DC2AFA1F35 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, const RuntimeMethod* method) 
{
	{
		// public List<Identity> Identities { get; }
		List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* L_0 = __this->___U3CIdentitiesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m1BEC1A7D6AC5383CCFC5186FA247449D0311F9CF (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, String_t* ___playerId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m52F4A975C42915C5DC0F4F7EEFB18E946C395DF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal PlayerInfo(string playerId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Id = playerId;
		String_t* L_0 = ___playerId0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		// Identities = new List<Identity>();
		List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* L_1 = (List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA*)il2cpp_codegen_object_new(List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m52F4A975C42915C5DC0F4F7EEFB18E946C395DF1(L_1, List_1__ctor_m52F4A975C42915C5DC0F4F7EEFB18E946C395DF1_RuntimeMethod_var);
		__this->___U3CIdentitiesU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdentitiesU3Ek__BackingField_2), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(Unity.Services.Authentication.PlayerInfoResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m31B8A4058024774C355A60CC1DD3AB0D045B97EF (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* ___response0, const RuntimeMethod* method) 
{
	{
		// internal PlayerInfo(PlayerInfoResponse response) : this(response.Id, response.CreatedAt, response.ExternalIds)
		PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* L_0 = ___response0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Id_0;
		PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* L_2 = ___response0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___CreatedAt_1;
		PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* L_4 = ___response0;
		NullCheck(L_4);
		List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* L_5 = L_4->___ExternalIds_2;
		PlayerInfo__ctor_m82E4FCEF734B43BD5988F0FAF5B7165D3B159474(__this, L_1, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(Unity.Services.Authentication.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m06C393A2C3EA9D14D3AD4BC996ADBD76BE07B97E (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* ___user0, const RuntimeMethod* method) 
{
	{
		// internal PlayerInfo(User user) : this(user.Id, user.CreatedAt, user.ExternalIds)
		User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* L_0 = ___user0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Id_0;
		User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* L_2 = ___user0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___CreatedAt_1;
		User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* L_4 = ___user0;
		NullCheck(L_4);
		List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* L_5 = L_4->___ExternalIds_2;
		PlayerInfo__ctor_m82E4FCEF734B43BD5988F0FAF5B7165D3B159474(__this, L_1, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(System.String,System.String,System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m82E4FCEF734B43BD5988F0FAF5B7165D3B159474 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, String_t* ___playerId0, String_t* ___createdAt1, List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* ___externalIdentities2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3540617D9DC43EFFDC7576E40499E7BC05FD5204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m61D9CCC795FD3F00C81876C20B1F743A88B03626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m88D481EC5337BA28A20D03A8690115ED857E212F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCD00F1B7ADB5DD51ECCF4368FC3C7BC19F82C26D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8071673D592663097502C753907516AD8D21F3CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m52F4A975C42915C5DC0F4F7EEFB18E946C395DF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tC97273875AC63C7CA57A10E9BEEF62AD638E6E3A V_2;
	memset((&V_2), 0, sizeof(V_2));
	ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* V_3 = NULL;
	{
		// internal PlayerInfo(string playerId, string createdAt, List<ExternalIdentity> externalIdentities)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Id = playerId;
		String_t* L_0 = ___playerId0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		// Identities = new List<Identity>();
		List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* L_1 = (List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA*)il2cpp_codegen_object_new(List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m52F4A975C42915C5DC0F4F7EEFB18E946C395DF1(L_1, List_1__ctor_m52F4A975C42915C5DC0F4F7EEFB18E946C395DF1_RuntimeMethod_var);
		__this->___U3CIdentitiesU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdentitiesU3Ek__BackingField_2), (void*)L_1);
		// if (double.TryParse(createdAt, out var createAtSeconds))
		String_t* L_2 = ___createdAt1;
		bool L_3;
		L_3 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// var epoch = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&V_1), ((int32_t)1970), 1, 1, 0, 0, 0, 1, NULL);
		// CreatedAt = epoch.AddSeconds(createAtSeconds);
		double L_4 = V_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_1), L_4, NULL);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF((&L_6), L_5, /*hidden argument*/Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		__this->___U3CCreatedAtU3Ek__BackingField_1 = L_6;
	}

IL_0047:
	{
		// if (externalIdentities != null)
		List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* L_7 = ___externalIdentities2;
		if (!L_7)
		{
			goto IL_0085;
		}
	}
	{
		// foreach (var externalId in externalIdentities)
		List_1_t3C7C2344A259D7A64FDE2F632547C1BB6607C356* L_8 = ___externalIdentities2;
		NullCheck(L_8);
		Enumerator_tC97273875AC63C7CA57A10E9BEEF62AD638E6E3A L_9;
		L_9 = List_1_GetEnumerator_m8071673D592663097502C753907516AD8D21F3CE(L_8, List_1_GetEnumerator_m8071673D592663097502C753907516AD8D21F3CE_RuntimeMethod_var);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3540617D9DC43EFFDC7576E40499E7BC05FD5204((&V_2), Enumerator_Dispose_m3540617D9DC43EFFDC7576E40499E7BC05FD5204_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006c_1;
			}

IL_0053_1:
			{
				// foreach (var externalId in externalIdentities)
				ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* L_10;
				L_10 = Enumerator_get_Current_m88D481EC5337BA28A20D03A8690115ED857E212F_inline((&V_2), Enumerator_get_Current_m88D481EC5337BA28A20D03A8690115ED857E212F_RuntimeMethod_var);
				V_3 = L_10;
				// Identities.Add(new Identity(externalId));
				List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* L_11;
				L_11 = PlayerInfo_get_Identities_m8C89A941C76178DFECACF3C3D64219DC2AFA1F35_inline(__this, NULL);
				ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* L_12 = V_3;
				Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* L_13 = (Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F*)il2cpp_codegen_object_new(Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				Identity__ctor_m10262663AE817B6356F47E13E30762275291B9E4(L_13, L_12, NULL);
				NullCheck(L_11);
				List_1_Add_mCD00F1B7ADB5DD51ECCF4368FC3C7BC19F82C26D_inline(L_11, L_13, List_1_Add_mCD00F1B7ADB5DD51ECCF4368FC3C7BC19F82C26D_RuntimeMethod_var);
			}

IL_006c_1:
			{
				// foreach (var externalId in externalIdentities)
				bool L_14;
				L_14 = Enumerator_MoveNext_m61D9CCC795FD3F00C81876C20B1F743A88B03626((&V_2), Enumerator_MoveNext_m61D9CCC795FD3F00C81876C20B1F743A88B03626_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_0085;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.PlayerInfo::GetFacebookId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_GetFacebookId_mD30CE77CD155D7B40BD42A1A9F89230958CC7142 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetIdentityId(IdProviderKeys.Facebook);
		String_t* L_0;
		L_0 = PlayerInfo_GetIdentityId_m4B4287BCFE22426C6D9AECAAE6CF963F667DBAB3(__this, _stringLiteral4D5367EBDE22F22AB910D2E11BF07B236BD5EB37, NULL);
		return L_0;
	}
}
// System.String Unity.Services.Authentication.PlayerInfo::GetSteamId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_GetSteamId_mE30170BB7BA2EBAEEFDD89F167715E5845B9C257 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetIdentityId(IdProviderKeys.Steam);
		String_t* L_0;
		L_0 = PlayerInfo_GetIdentityId_m4B4287BCFE22426C6D9AECAAE6CF963F667DBAB3(__this, _stringLiteral550BDD0FDB52916B1F38EF82E2C5D1473B9113CF, NULL);
		return L_0;
	}
}
// System.String Unity.Services.Authentication.PlayerInfo::GetGoogleId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_GetGoogleId_m3734711ED1EBBDB3B7BAB994C6312B74CD19B1A6 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetIdentityId(IdProviderKeys.Google);
		String_t* L_0;
		L_0 = PlayerInfo_GetIdentityId_m4B4287BCFE22426C6D9AECAAE6CF963F667DBAB3(__this, _stringLiteralAFA0228517D559C72225EDC64521ED7E04459E89, NULL);
		return L_0;
	}
}
// System.String Unity.Services.Authentication.PlayerInfo::GetAppleId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_GetAppleId_mD530450984BED0A1E90B524AC0E59818DF717048 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3588789C48AB78DB91B054AB1061B98B63526313);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetIdentityId(IdProviderKeys.Apple);
		String_t* L_0;
		L_0 = PlayerInfo_GetIdentityId_m4B4287BCFE22426C6D9AECAAE6CF963F667DBAB3(__this, _stringLiteral3588789C48AB78DB91B054AB1061B98B63526313, NULL);
		return L_0;
	}
}
// System.String Unity.Services.Authentication.PlayerInfo::GetIdentityId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_GetIdentityId_m4B4287BCFE22426C6D9AECAAE6CF963F667DBAB3 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, String_t* ___typeId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIdentity_t0F2459F648B93A730762B444F9012ECFA8BF709F_m3C3A6A66D0A19368E1F7600F0A6FE9E323764CB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD767167733C46D4FDC8AFD23616D4D56100D1379_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CGetIdentityIdU3Eb__0_m7E498EA635AE41B50A6BCB9E5129B4AF61B89DA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D* V_0 = NULL;
	List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* G_B2_0 = NULL;
	List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* G_B1_0 = NULL;
	Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* G_B4_0 = NULL;
	Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* G_B3_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D* L_0 = (U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass17_0__ctor_mCFEF8D3C5C0557DE0C910014E591EB07698114D6(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D* L_1 = V_0;
		String_t* L_2 = ___typeId0;
		NullCheck(L_1);
		L_1->___typeId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___typeId_0), (void*)L_2);
		// return Identities?.FirstOrDefault(x => x.TypeId == typeId)?.UserId;
		List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* L_3;
		L_3 = PlayerInfo_get_Identities_m8C89A941C76178DFECACF3C3D64219DC2AFA1F35_inline(__this, NULL);
		List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0019;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0019:
	{
		U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D* L_5 = V_0;
		Func_2_tD767167733C46D4FDC8AFD23616D4D56100D1379* L_6 = (Func_2_tD767167733C46D4FDC8AFD23616D4D56100D1379*)il2cpp_codegen_object_new(Func_2_tD767167733C46D4FDC8AFD23616D4D56100D1379_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m9A7FCECEA113DE472C150B3DF9ACB921124266AB(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CGetIdentityIdU3Eb__0_m7E498EA635AE41B50A6BCB9E5129B4AF61B89DA4_RuntimeMethod_var), NULL);
		Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* L_7;
		L_7 = Enumerable_FirstOrDefault_TisIdentity_t0F2459F648B93A730762B444F9012ECFA8BF709F_m3C3A6A66D0A19368E1F7600F0A6FE9E323764CB7(G_B2_0, L_6, Enumerable_FirstOrDefault_TisIdentity_t0F2459F648B93A730762B444F9012ECFA8BF709F_m3C3A6A66D0A19368E1F7600F0A6FE9E323764CB7_RuntimeMethod_var);
		Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* L_8 = L_7;
		G_B3_0 = L_8;
		if (L_8)
		{
			G_B4_0 = L_8;
			goto IL_0030;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0030:
	{
		NullCheck(G_B4_0);
		String_t* L_9 = G_B4_0->___UserId_1;
		return L_9;
	}
}
// System.Void Unity.Services.Authentication.PlayerInfo::AddExternalIdentity(Unity.Services.Authentication.ExternalIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_AddExternalIdentity_m6B4B832732C54847BB5531DCB5E852072273DFE5 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* ___externalId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCD00F1B7ADB5DD51ECCF4368FC3C7BC19F82C26D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (externalId != null)
		ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* L_0 = ___externalId0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Identities.Add(new Identity(externalId));
		List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* L_1;
		L_1 = PlayerInfo_get_Identities_m8C89A941C76178DFECACF3C3D64219DC2AFA1F35_inline(__this, NULL);
		ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* L_2 = ___externalId0;
		Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* L_3 = (Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F*)il2cpp_codegen_object_new(Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Identity__ctor_m10262663AE817B6356F47E13E30762275291B9E4(L_3, L_2, NULL);
		NullCheck(L_1);
		List_1_Add_mCD00F1B7ADB5DD51ECCF4368FC3C7BC19F82C26D_inline(L_1, L_3, List_1_Add_mCD00F1B7ADB5DD51ECCF4368FC3C7BC19F82C26D_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.PlayerInfo::RemoveIdentity(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_RemoveIdentity_mABDE25201FB941363381B3487969ACE5709AA4A7 (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, String_t* ___typeId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_m92FB9A5AD00EC600689E7639649C657D914201A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t4BBF8DE16E02FEEB9FE9EC49F8614C8D90FB8E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CRemoveIdentityU3Eb__0_mCC93078F1D4B8792356033544EE0AC40C88EEB38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6* V_0 = NULL;
	List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* G_B2_0 = NULL;
	List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6* L_0 = (U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass19_0__ctor_m419725C446AA5A7EC1B72EBE95744DC40AC76888(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6* L_1 = V_0;
		String_t* L_2 = ___typeId0;
		NullCheck(L_1);
		L_1->___typeId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___typeId_0), (void*)L_2);
		// Identities?.RemoveAll(x => x.TypeId == typeId);
		List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* L_3;
		L_3 = PlayerInfo_get_Identities_m8C89A941C76178DFECACF3C3D64219DC2AFA1F35_inline(__this, NULL);
		List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6* L_5 = V_0;
		Predicate_1_t4BBF8DE16E02FEEB9FE9EC49F8614C8D90FB8E4B* L_6 = (Predicate_1_t4BBF8DE16E02FEEB9FE9EC49F8614C8D90FB8E4B*)il2cpp_codegen_object_new(Predicate_1_t4BBF8DE16E02FEEB9FE9EC49F8614C8D90FB8E4B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Predicate_1__ctor_m169E146A08B48566155C432B0FD8BF87828B7456(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass19_0_U3CRemoveIdentityU3Eb__0_mCC93078F1D4B8792356033544EE0AC40C88EEB38_RuntimeMethod_var), NULL);
		NullCheck(G_B2_0);
		int32_t L_7;
		L_7 = List_1_RemoveAll_m92FB9A5AD00EC600689E7639649C657D914201A1(G_B2_0, L_6, List_1_RemoveAll_m92FB9A5AD00EC600689E7639649C657D914201A1_RuntimeMethod_var);
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
// System.Void Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mCFEF8D3C5C0557DE0C910014E591EB07698114D6 (U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass17_0::<GetIdentityId>b__0(Unity.Services.Authentication.Identity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CGetIdentityIdU3Eb__0_m7E498EA635AE41B50A6BCB9E5129B4AF61B89DA4 (U3CU3Ec__DisplayClass17_0_tD2301F35461D22EE5484FDE6C3B8E20C8DA5270D* __this, Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* ___x0, const RuntimeMethod* method) 
{
	{
		// return Identities?.FirstOrDefault(x => x.TypeId == typeId)?.UserId;
		Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___TypeId_0;
		String_t* L_2 = __this->___typeId_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
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
// System.Void Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m419725C446AA5A7EC1B72EBE95744DC40AC76888 (U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.Services.Authentication.PlayerInfo/<>c__DisplayClass19_0::<RemoveIdentity>b__0(Unity.Services.Authentication.Identity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass19_0_U3CRemoveIdentityU3Eb__0_mCC93078F1D4B8792356033544EE0AC40C88EEB38 (U3CU3Ec__DisplayClass19_0_tE85323933DCC24530B41F3D336AF16C1A26C61D6* __this, Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* ___x0, const RuntimeMethod* method) 
{
	{
		// Identities?.RemoveAll(x => x.TypeId == typeId);
		Identity_t0F2459F648B93A730762B444F9012ECFA8BF709F* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___TypeId_0;
		String_t* L_2 = __this->___typeId_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
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
// System.Void Unity.Services.Authentication.LinkWithExternalTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkWithExternalTokenRequest__ctor_mC926C1E239309874F3E8594862352CD189407CE5 (LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* __this, const RuntimeMethod* method) 
{
	{
		// internal LinkWithExternalTokenRequest() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// internal LinkWithExternalTokenRequest() {}
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
// System.Void Unity.Services.Authentication.SessionTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenRequest__ctor_mBD8FDC3B255BDF93CD9BBE4153C4E286EF579660 (SessionTokenRequest_t9C89923BD817D8F5D559572738BC39BC3E12ADFB* __this, const RuntimeMethod* method) 
{
	{
		// public SessionTokenRequest() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public SessionTokenRequest() {}
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
// System.Void Unity.Services.Authentication.SignInWithExternalTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInWithExternalTokenRequest__ctor_mBF7A476AF9D85BEDA4DD76A7DC5108A7BC74E82C (SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* __this, const RuntimeMethod* method) 
{
	{
		// internal SignInWithExternalTokenRequest() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// internal SignInWithExternalTokenRequest() {}
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
// System.Void Unity.Services.Authentication.UnlinkRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkRequest__ctor_mC6DF0262CCE41490C8119C09876F9E281BBEEBA6 (UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D* __this, const RuntimeMethod* method) 
{
	{
		// internal UnlinkRequest() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// internal UnlinkRequest() {}
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
// System.Void Unity.Services.Authentication.AuthenticationErrorResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationErrorResponse__ctor_m6DF8E8C3822026A8237DE92F92B7668710A7530A (AuthenticationErrorResponse_t4053969CFEE4B0B840BC3119E61D9610C6F6CA60* __this, const RuntimeMethod* method) 
{
	{
		// public AuthenticationErrorResponse() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public AuthenticationErrorResponse() {}
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
// System.Void Unity.Services.Authentication.ExternalIdentity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalIdentity__ctor_m823DAD40F49542CC03EDB5E075ABCC697E430E30 (ExternalIdentity_tEAF967C4E9B85553862FF7C36E122EEE0F857F25* __this, const RuntimeMethod* method) 
{
	{
		// public ExternalIdentity() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ExternalIdentity() {}
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
// System.Void Unity.Services.Authentication.LinkResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkResponse__ctor_m339BA4504367155C2C1819603F84910052B5B942 (LinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906* __this, const RuntimeMethod* method) 
{
	{
		// public LinkResponse() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public LinkResponse() {}
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
// System.Void Unity.Services.Authentication.PlayerInfoResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfoResponse__ctor_m125BC761C779F0E778174420514464788F1AA21C (PlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0* __this, const RuntimeMethod* method) 
{
	{
		// public PlayerInfoResponse() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public PlayerInfoResponse() { }
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
// System.Void Unity.Services.Authentication.SignInResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInResponse__ctor_m0963427AB9F97E55987916D5394683A910DB409C (SignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47* __this, const RuntimeMethod* method) 
{
	{
		// public SignInResponse() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public SignInResponse() {}
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
// System.Void Unity.Services.Authentication.UnlinkResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkResponse__ctor_mCC7100DACFA0EBCBD99A74968B8884EF2C8AD895 (UnlinkResponse_t80C024EBE33CD7796AF31678A9E1B74310470A42* __this, const RuntimeMethod* method) 
{
	{
		// public UnlinkResponse() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public UnlinkResponse() {}
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
// System.Void Unity.Services.Authentication.User::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m06FE409298F1B298DE8879F39571557939CA7792 (User_t6AFC685D5648DDB4AFA9D36C25BE2BEA70E40F90* __this, const RuntimeMethod* method) 
{
	{
		// public User() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public User() {}
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
// System.Void Unity.Services.Authentication.WellKnownKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WellKnownKey__ctor_m4F1D90569009D952217671A8F90EC40A498D8DD2 (WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* __this, const RuntimeMethod* method) 
{
	{
		// public WellKnownKey() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public WellKnownKey() {}
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
// System.Void Unity.Services.Authentication.WellKnownKeysResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WellKnownKeysResponse__ctor_mD4B62DB4116BA8116F8DA4E49EEC04B2B54504C1 (WellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53* __this, const RuntimeMethod* method) 
{
	{
		// public WellKnownKeysResponse() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public WellKnownKeysResponse() {}
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
// System.Void Unity.Services.Authentication.AccessToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessToken__ctor_mA8C8B1DE354ECAF75F3331385C02D493CFB496C7 (AccessToken_t56EC2EB9D810254BF17AA912873868F58802C3C2* __this, const RuntimeMethod* method) 
{
	{
		// public AccessToken() {}
		BaseJwt__ctor_mCAAFF2897EB3B166CF374F97F0EA9848AC0B2073(__this, NULL);
		// public AccessToken() {}
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
// System.Void Unity.Services.Authentication.AccessTokenExtraClaims::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenExtraClaims__ctor_m93CBA68C7A0F7BA3B8A2607889BE108836FC1194 (AccessTokenExtraClaims_tF775770014EAE151A0DC61549E18AFB6BF292F6C* __this, const RuntimeMethod* method) 
{
	{
		// public AccessTokenExtraClaims() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public AccessTokenExtraClaims() {}
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
// System.Void Unity.Services.Authentication.BaseJwt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseJwt__ctor_mCAAFF2897EB3B166CF374F97F0EA9848AC0B2073 (BaseJwt_tE235418FE84895C61012E458A93D98F334B1F8EF* __this, const RuntimeMethod* method) 
{
	{
		// public BaseJwt() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public BaseJwt() {}
		return;
	}
}
// System.Nullable`1<System.DateTime> Unity.Services.Authentication.BaseJwt::get_ExpirationTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC BaseJwt_get_ExpirationTime_m476B954A2BD1ED2925AB98CC0895335DA8B5471D (BaseJwt_tE235418FE84895C61012E458A93D98F334B1F8EF* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? ExpirationTime => ConvertTimestamp(ExpirationTimeUnix);
		int32_t L_0 = __this->___ExpirationTimeUnix_0;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_1;
		L_1 = BaseJwt_ConvertTimestamp_m0CA39A85EE115193D6FF8EF9B14FED7F17BCDD85(__this, L_0, NULL);
		return L_1;
	}
}
// System.Nullable`1<System.DateTime> Unity.Services.Authentication.BaseJwt::get_IssuedAtTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC BaseJwt_get_IssuedAtTime_m44032A751A8C26F899403713BA788B93AFBA70C6 (BaseJwt_tE235418FE84895C61012E458A93D98F334B1F8EF* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? IssuedAtTime => ConvertTimestamp(IssuedAtTimeUnix);
		int32_t L_0 = __this->___IssuedAtTimeUnix_1;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_1;
		L_1 = BaseJwt_ConvertTimestamp_m0CA39A85EE115193D6FF8EF9B14FED7F17BCDD85(__this, L_0, NULL);
		return L_1;
	}
}
// System.Nullable`1<System.DateTime> Unity.Services.Authentication.BaseJwt::get_NotBeforeTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC BaseJwt_get_NotBeforeTime_mD97D56962AA4FA55341E1D0E240B400B861656BF (BaseJwt_tE235418FE84895C61012E458A93D98F334B1F8EF* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? NotBeforeTime => ConvertTimestamp(NotBeforeTimeUnix);
		int32_t L_0 = __this->___NotBeforeTimeUnix_2;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_1;
		L_1 = BaseJwt_ConvertTimestamp_m0CA39A85EE115193D6FF8EF9B14FED7F17BCDD85(__this, L_0, NULL);
		return L_1;
	}
}
// System.Nullable`1<System.DateTime> Unity.Services.Authentication.BaseJwt::ConvertTimestamp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC BaseJwt_ConvertTimestamp_m0CA39A85EE115193D6FF8EF9B14FED7F17BCDD85 (BaseJwt_tE235418FE84895C61012E458A93D98F334B1F8EF* __this, int32_t ___timestamp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (timestamp != 0)
		int32_t L_0 = ___timestamp0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// var dateTimeOffset = DateTimeOffset.FromUnixTimeSeconds(timestamp);
		int32_t L_1 = ___timestamp0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_2;
		L_2 = DateTimeOffset_FromUnixTimeSeconds_mE1FA5E04CCCE8A0E8903C9DACC64526C721C0A47(((int64_t)L_1), NULL);
		V_0 = L_2;
		// return dateTimeOffset.DateTime;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324((&V_0), NULL);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		return L_4;
	}

IL_0018:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_5 = V_1;
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
// System.Int32 Unity.Services.Authentication.AuthenticationSettings::get_AccessTokenRefreshBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationSettings_get_AccessTokenRefreshBuffer_m97948E6F70473A843396D73B9CC1EDECDC01EE87 (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, const RuntimeMethod* method) 
{
	{
		// public int AccessTokenRefreshBuffer { get; internal set; }
		int32_t L_0 = __this->___U3CAccessTokenRefreshBufferU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_AccessTokenRefreshBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenRefreshBuffer_m96B86C124804197F12B701796CDCE4E9D0443CEE (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int AccessTokenRefreshBuffer { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CAccessTokenRefreshBufferU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 Unity.Services.Authentication.AuthenticationSettings::get_AccessTokenExpiryBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationSettings_get_AccessTokenExpiryBuffer_mD47E2DFA7219940B060AC726513FDFD715826B69 (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, const RuntimeMethod* method) 
{
	{
		// public int AccessTokenExpiryBuffer { get; internal set; }
		int32_t L_0 = __this->___U3CAccessTokenExpiryBufferU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_AccessTokenExpiryBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenExpiryBuffer_m14A6389F6D9EDCE2FCD222C890ECC7F88861A64A (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int AccessTokenExpiryBuffer { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CAccessTokenExpiryBufferU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 Unity.Services.Authentication.AuthenticationSettings::get_RefreshAttemptFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationSettings_get_RefreshAttemptFrequency_mA63E83608C5227CA5D45AC47555489C045FF3FC7 (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, const RuntimeMethod* method) 
{
	{
		// public int RefreshAttemptFrequency { get; internal set; }
		int32_t L_0 = __this->___U3CRefreshAttemptFrequencyU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_RefreshAttemptFrequency(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationSettings_set_RefreshAttemptFrequency_mBAF4610491BF821F84D042A0007A28460623B0D2 (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int RefreshAttemptFrequency { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CRefreshAttemptFrequencyU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationSettings__ctor_mBE5C222CEFEA863FD12B1EF18D0ACF22A31EFEBD (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, const RuntimeMethod* method) 
{
	{
		// internal AuthenticationSettings()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// AccessTokenRefreshBuffer = k_AccessTokenRefreshBuffer;
		AuthenticationSettings_set_AccessTokenRefreshBuffer_m96B86C124804197F12B701796CDCE4E9D0443CEE_inline(__this, ((int32_t)300), NULL);
		// AccessTokenExpiryBuffer = k_AccessTokenExpiryBuffer;
		AuthenticationSettings_set_AccessTokenExpiryBuffer_m14A6389F6D9EDCE2FCD222C890ECC7F88861A64A_inline(__this, ((int32_t)15), NULL);
		// RefreshAttemptFrequency = k_RefreshAttemptFrequency;
		AuthenticationSettings_set_RefreshAttemptFrequency_mBAF4610491BF821F84D042A0007A28460623B0D2_inline(__this, ((int32_t)30), NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationSettings::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationSettings_Reset_mF09FA004D91F33E2A5D88F5062B595113557A05E (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, const RuntimeMethod* method) 
{
	{
		// AccessTokenRefreshBuffer = k_AccessTokenRefreshBuffer;
		AuthenticationSettings_set_AccessTokenRefreshBuffer_m96B86C124804197F12B701796CDCE4E9D0443CEE_inline(__this, ((int32_t)300), NULL);
		// AccessTokenExpiryBuffer = k_AccessTokenExpiryBuffer;
		AuthenticationSettings_set_AccessTokenExpiryBuffer_m14A6389F6D9EDCE2FCD222C890ECC7F88861A64A_inline(__this, ((int32_t)15), NULL);
		// RefreshAttemptFrequency = k_RefreshAttemptFrequency;
		AuthenticationSettings_set_RefreshAttemptFrequency_mBAF4610491BF821F84D042A0007A28460623B0D2_inline(__this, ((int32_t)30), NULL);
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
// System.Int32 Unity.Services.Authentication.NetworkConfiguration::get_Retries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkConfiguration_get_Retries_m06CF068CDC7D3224D7106D99479DB77A49C90D17 (NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4* __this, const RuntimeMethod* method) 
{
	{
		// public int Retries { get; set; } = k_DefaultRetries;
		int32_t L_0 = __this->___U3CRetriesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.NetworkConfiguration::set_Retries(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfiguration_set_Retries_mE3D98A5AC6A5BEA4B1A4BB55F0A5DF30EB988D74 (NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Retries { get; set; } = k_DefaultRetries;
		int32_t L_0 = ___value0;
		__this->___U3CRetriesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 Unity.Services.Authentication.NetworkConfiguration::get_Timeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkConfiguration_get_Timeout_m710D931E0360F398921BB9321C1A02485661AB55 (NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4* __this, const RuntimeMethod* method) 
{
	{
		// public int Timeout { get; set; } = k_DefaultTimeout;
		int32_t L_0 = __this->___U3CTimeoutU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.NetworkConfiguration::set_Timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfiguration_set_Timeout_mC55E6D775EAD3CDE5083E81C9F752F8454F4DA0C (NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Timeout { get; set; } = k_DefaultTimeout;
		int32_t L_0 = ___value0;
		__this->___U3CTimeoutU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Unity.Services.Authentication.NetworkConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfiguration__ctor_m61201E2D6FA572D1B8990CFBB621A1777AA7FDE1 (NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4* __this, const RuntimeMethod* method) 
{
	{
		// public int Retries { get; set; } = k_DefaultRetries;
		__this->___U3CRetriesU3Ek__BackingField_2 = 2;
		// public int Timeout { get; set; } = k_DefaultTimeout;
		__this->___U3CTimeoutU3Ek__BackingField_3 = 5;
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
// System.Boolean Unity.Services.Authentication.SignInOptions::get_CreateAccount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignInOptions_get_CreateAccount_m487DE1145466E4820534680E55CD209335908E02 (SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* __this, const RuntimeMethod* method) 
{
	{
		// public bool CreateAccount { get; set; }
		bool L_0 = __this->___U3CCreateAccountU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.SignInOptions::set_CreateAccount(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInOptions_set_CreateAccount_mBB8B2E56329F89AC35FDAE0EB2CB5A0CA7DF6102 (SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CreateAccount { get; set; }
		bool L_0 = ___value0;
		__this->___U3CCreateAccountU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Unity.Services.Authentication.SignInOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInOptions__ctor_m97DAF844B83B6585AD5762E02D845698865F725C (SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* __this, const RuntimeMethod* method) 
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
// Unity.Services.Authentication.AccessTokenComponent Unity.Services.Authentication.AuthenticationNetworkClient::get_AccessTokenComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* AuthenticationNetworkClient_get_AccessTokenComponent_mF10749E4B898F6824B849C31705952DC23C64D86 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	{
		// internal AccessTokenComponent AccessTokenComponent { get; }
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_0 = __this->___U3CAccessTokenComponentU3Ek__BackingField_7;
		return L_0;
	}
}
// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Authentication.AuthenticationNetworkClient::get_CloudProjectIdComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_CloudProjectIdComponent_mCAE38C64A9FF5A052B1DB965CDD698AECC90C03F (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	{
		// internal ICloudProjectId CloudProjectIdComponent { get; }
		RuntimeObject* L_0 = __this->___U3CCloudProjectIdComponentU3Ek__BackingField_8;
		return L_0;
	}
}
// Unity.Services.Core.Environments.Internal.IEnvironments Unity.Services.Authentication.AuthenticationNetworkClient::get_EnvironmentComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_EnvironmentComponent_m6B9DEC5E341192134461AFD8BBABA9AB17A7FB26 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	{
		// internal IEnvironments EnvironmentComponent { get; }
		RuntimeObject* L_0 = __this->___U3CEnvironmentComponentU3Ek__BackingField_9;
		return L_0;
	}
}
// Unity.Services.Authentication.INetworkHandler Unity.Services.Authentication.AuthenticationNetworkClient::get_NetworkHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_NetworkHandler_mE8F20F2BF21EDA4B878917EACD2A3A736DBD8571 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	{
		// internal INetworkHandler NetworkHandler { get; }
		RuntimeObject* L_0 = __this->___U3CNetworkHandlerU3Ek__BackingField_10;
		return L_0;
	}
}
// System.String Unity.Services.Authentication.AuthenticationNetworkClient::get_AccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationNetworkClient_get_AccessToken_m42B6AD48F27F4C586708E4DC9E2A64FE08656F1D (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	{
		// string AccessToken => AccessTokenComponent.AccessToken;
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_0;
		L_0 = AuthenticationNetworkClient_get_AccessTokenComponent_mF10749E4B898F6824B849C31705952DC23C64D86_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = AccessTokenComponent_get_AccessToken_m70FC319ED7E39A53D5C17E775FD052D466F29ED8_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Unity.Services.Authentication.AuthenticationNetworkClient::get_EnvironmentId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationNetworkClient_get_EnvironmentId_m1EB18E103C62D193B5F698F30D79F03AB5A26FE2 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string EnvironmentId => EnvironmentComponent.Current;
		RuntimeObject* L_0;
		L_0 = AuthenticationNetworkClient_get_EnvironmentComponent_m6B9DEC5E341192134461AFD8BBABA9AB17A7FB26_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Environments.Internal.IEnvironments::get_Current() */, IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationNetworkClient::.ctor(System.String,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments,Unity.Services.Authentication.INetworkHandler,Unity.Services.Authentication.AccessTokenComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationNetworkClient__ctor_m2E1563DC14B43DFEE03BBDC785B27047ED816EE4 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, String_t* ___host0, RuntimeObject* ___cloudProjectId1, RuntimeObject* ___environment2, RuntimeObject* ___networkHandler3, AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* ___accessToken4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D0D6E0FD7AC9D830E7B2E7079C8B6D3B7FD573E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1459AA156A3CC61BE3445EF580D2A5FB14EA4CE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64F0B93C5B7055DDA721986BA7566D27276D2FDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B0916E2982DC623EA98A7E9D62E6EF0E2312106);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B5A95080D1AC66E0C734381A240DBAF39BB2C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA10AB45BB9FF2F4B6907E5D38143D5D5AA7ED62E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF572CA10517B5259B757A364DD3507DF49F7DD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36D2F78E29E9D66D4CD31ECC1B896992ED4C2B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1CDA7DDA0CE92EAD8BFF309B8D1AF87CE4872B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4EF956D8605C91DE8D8A5036BA8A8E5C713A5CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AuthenticationNetworkClient(string host,
		//                                      ICloudProjectId cloudProjectId,
		//                                      IEnvironments environment,
		//                                      INetworkHandler networkHandler,
		//                                      AccessTokenComponent accessToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// AccessTokenComponent = accessToken;
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_0 = ___accessToken4;
		__this->___U3CAccessTokenComponentU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessTokenComponentU3Ek__BackingField_7), (void*)L_0);
		// CloudProjectIdComponent = cloudProjectId;
		RuntimeObject* L_1 = ___cloudProjectId1;
		__this->___U3CCloudProjectIdComponentU3Ek__BackingField_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCloudProjectIdComponentU3Ek__BackingField_8), (void*)L_1);
		// EnvironmentComponent = environment;
		RuntimeObject* L_2 = ___environment2;
		__this->___U3CEnvironmentComponentU3Ek__BackingField_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnvironmentComponentU3Ek__BackingField_9), (void*)L_2);
		// NetworkHandler = networkHandler;
		RuntimeObject* L_3 = ___networkHandler3;
		__this->___U3CNetworkHandlerU3Ek__BackingField_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNetworkHandlerU3Ek__BackingField_10), (void*)L_3);
		// m_WellKnownUrl = host + k_WellKnownUrlStem;
		String_t* L_4 = ___host0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralE4EF956D8605C91DE8D8A5036BA8A8E5C713A5CC, NULL);
		__this->___m_WellKnownUrl_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_WellKnownUrl_11), (void*)L_5);
		// m_AnonymousUrl = host + k_AnonymousUrlStem;
		String_t* L_6 = ___host0;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteral0D0D6E0FD7AC9D830E7B2E7079C8B6D3B7FD573E, NULL);
		__this->___m_AnonymousUrl_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnonymousUrl_12), (void*)L_7);
		// m_SessionTokenUrl = host + k_SessionTokenUrlStem;
		String_t* L_8 = ___host0;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteralBF572CA10517B5259B757A364DD3507DF49F7DD3, NULL);
		__this->___m_SessionTokenUrl_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SessionTokenUrl_13), (void*)L_9);
		// m_ExternalTokenUrl = host + k_ExternalTokenUrlStem;
		String_t* L_10 = ___host0;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteralD1CDA7DDA0CE92EAD8BFF309B8D1AF87CE4872B9, NULL);
		__this->___m_ExternalTokenUrl_14 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExternalTokenUrl_14), (void*)L_11);
		// m_LinkExternalTokenUrl = host + k_LinkExternalTokenUrlStem;
		String_t* L_12 = ___host0;
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, _stringLiteralA10AB45BB9FF2F4B6907E5D38143D5D5AA7ED62E, NULL);
		__this->___m_LinkExternalTokenUrl_15 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LinkExternalTokenUrl_15), (void*)L_13);
		// m_UnlinkExternalTokenUrl = host + k_UnlinkExternalTokenUrlStem;
		String_t* L_14 = ___host0;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, _stringLiteralC36D2F78E29E9D66D4CD31ECC1B896992ED4C2B6, NULL);
		__this->___m_UnlinkExternalTokenUrl_16 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnlinkExternalTokenUrl_16), (void*)L_15);
		// m_UsersUrl = host + k_UsersUrlStem;
		String_t* L_16 = ___host0;
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, _stringLiteral6B0916E2982DC623EA98A7E9D62E6EF0E2312106, NULL);
		__this->___m_UsersUrl_17 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UsersUrl_17), (void*)L_17);
		// m_CommonHeaders = new Dictionary<string, string>
		// {
		//     ["ProjectId"] = CloudProjectIdComponent.GetCloudProjectId(),
		//     // The Error-Version header enables RFC7807HttpError error responses
		//     ["Error-Version"] = "v1"
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_18, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_19 = L_18;
		RuntimeObject* L_20;
		L_20 = AuthenticationNetworkClient_get_CloudProjectIdComponent_mCAE38C64A9FF5A052B1DB965CDD698AECC90C03F_inline(__this, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId() */, ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_19);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_19, _stringLiteral1459AA156A3CC61BE3445EF580D2A5FB14EA4CE8, L_21, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = L_19;
		NullCheck(L_22);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_22, _stringLiteral77B5A95080D1AC66E0C734381A240DBAF39BB2C9, _stringLiteral64F0B93C5B7055DDA721986BA7566D27276D2FDD, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		__this->___m_CommonHeaders_18 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CommonHeaders_18), (void*)L_22);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.WellKnownKeysResponse> Unity.Services.Authentication.AuthenticationNetworkClient::GetWellKnownKeysAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA10499A2609A86CF8EDB1C3D8BA6CF2911B896E5* AuthenticationNetworkClient_GetWellKnownKeysAsync_mEF6DCC71161B721C2DC981A0E81DC04527A66519 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkHandler_GetAsync_TisWellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53_m1258C9130EE1E1A59653DFF7ED6E8971762A0FF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NetworkHandler.GetAsync<WellKnownKeysResponse>(m_WellKnownUrl);
		RuntimeObject* L_0;
		L_0 = AuthenticationNetworkClient_get_NetworkHandler_mE8F20F2BF21EDA4B878917EACD2A3A736DBD8571_inline(__this, NULL);
		String_t* L_1 = __this->___m_WellKnownUrl_11;
		NullCheck(L_0);
		Task_1_tA10499A2609A86CF8EDB1C3D8BA6CF2911B896E5* L_2;
		L_2 = GenericInterfaceFuncInvoker2< Task_1_tA10499A2609A86CF8EDB1C3D8BA6CF2911B896E5*, String_t*, RuntimeObject* >::Invoke(INetworkHandler_GetAsync_TisWellKnownKeysResponse_tAF3F0A65C94FD0BD72F8E36BBDB30E4F4D480A53_m1258C9130EE1E1A59653DFF7ED6E8971762A0FF7_RuntimeMethod_var, L_0, L_1, (RuntimeObject*)NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationNetworkClient::SignInAnonymouslyAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* AuthenticationNetworkClient_SignInAnonymouslyAsync_mD06BB889D79C31294AFB9928314D646C7C2D16E2 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkHandler_PostAsync_TisSignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47_mAB6175AF963442741838135C703AE5FA0F837B31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NetworkHandler.PostAsync<SignInResponse>(m_AnonymousUrl, WithEnvironment(GetCommonHeaders()));
		RuntimeObject* L_0;
		L_0 = AuthenticationNetworkClient_get_NetworkHandler_mE8F20F2BF21EDA4B878917EACD2A3A736DBD8571_inline(__this, NULL);
		String_t* L_1 = __this->___m_AnonymousUrl_12;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = AuthenticationNetworkClient_GetCommonHeaders_mA91AF9F13338A7B915A99B61CC71874D75CB1C2F(__this, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3;
		L_3 = AuthenticationNetworkClient_WithEnvironment_m9B313EFCA29F2D7457AE5029FA31443331CC5AFC(__this, L_2, NULL);
		NullCheck(L_0);
		Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* L_4;
		L_4 = GenericInterfaceFuncInvoker2< Task_1_tAF51175714E424A84783635B14DBF49E6F558D42*, String_t*, RuntimeObject* >::Invoke(INetworkHandler_PostAsync_TisSignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47_mAB6175AF963442741838135C703AE5FA0F837B31_RuntimeMethod_var, L_0, L_1, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationNetworkClient::SignInWithSessionTokenAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* AuthenticationNetworkClient_SignInWithSessionTokenAsync_m9B414AE9F1F1C654D6A02993B6E467CDC6E726DE (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, String_t* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkHandler_PostAsync_TisSignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47_m24508BC04ADFECCFF57679DA455DD86E0A9438AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionTokenRequest_t9C89923BD817D8F5D559572738BC39BC3E12ADFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NetworkHandler.PostAsync<SignInResponse>(m_SessionTokenUrl, new SessionTokenRequest
		// {
		//     SessionToken = token
		// }, WithEnvironment(GetCommonHeaders()));
		RuntimeObject* L_0;
		L_0 = AuthenticationNetworkClient_get_NetworkHandler_mE8F20F2BF21EDA4B878917EACD2A3A736DBD8571_inline(__this, NULL);
		String_t* L_1 = __this->___m_SessionTokenUrl_13;
		SessionTokenRequest_t9C89923BD817D8F5D559572738BC39BC3E12ADFB* L_2 = (SessionTokenRequest_t9C89923BD817D8F5D559572738BC39BC3E12ADFB*)il2cpp_codegen_object_new(SessionTokenRequest_t9C89923BD817D8F5D559572738BC39BC3E12ADFB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SessionTokenRequest__ctor_mBD8FDC3B255BDF93CD9BBE4153C4E286EF579660(L_2, NULL);
		SessionTokenRequest_t9C89923BD817D8F5D559572738BC39BC3E12ADFB* L_3 = L_2;
		String_t* L_4 = ___token0;
		NullCheck(L_3);
		L_3->___SessionToken_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___SessionToken_0), (void*)L_4);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5;
		L_5 = AuthenticationNetworkClient_GetCommonHeaders_mA91AF9F13338A7B915A99B61CC71874D75CB1C2F(__this, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6;
		L_6 = AuthenticationNetworkClient_WithEnvironment_m9B313EFCA29F2D7457AE5029FA31443331CC5AFC(__this, L_5, NULL);
		NullCheck(L_0);
		Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* L_7;
		L_7 = GenericInterfaceFuncInvoker3< Task_1_tAF51175714E424A84783635B14DBF49E6F558D42*, String_t*, RuntimeObject*, RuntimeObject* >::Invoke(INetworkHandler_PostAsync_TisSignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47_m24508BC04ADFECCFF57679DA455DD86E0A9438AA_RuntimeMethod_var, L_0, L_1, L_3, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationNetworkClient::SignInWithExternalTokenAsync(System.String,Unity.Services.Authentication.SignInWithExternalTokenRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* AuthenticationNetworkClient_SignInWithExternalTokenAsync_m16352C3F1532286A302E50FC95E4B692231607F3 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, String_t* ___idProvider0, SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* ___externalToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkHandler_PostAsync_TisSignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47_m24508BC04ADFECCFF57679DA455DD86E0A9438AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var url = $"{m_ExternalTokenUrl}/{idProvider}";
		String_t* L_0 = __this->___m_ExternalTokenUrl_14;
		String_t* L_1 = ___idProvider0;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, NULL);
		V_0 = L_2;
		// return NetworkHandler.PostAsync<SignInResponse>(url, externalToken, WithEnvironment(GetCommonHeaders()));
		RuntimeObject* L_3;
		L_3 = AuthenticationNetworkClient_get_NetworkHandler_mE8F20F2BF21EDA4B878917EACD2A3A736DBD8571_inline(__this, NULL);
		String_t* L_4 = V_0;
		SignInWithExternalTokenRequest_t71450CC82AAFEABD846E7ED42F73C885330EC055* L_5 = ___externalToken1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6;
		L_6 = AuthenticationNetworkClient_GetCommonHeaders_mA91AF9F13338A7B915A99B61CC71874D75CB1C2F(__this, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7;
		L_7 = AuthenticationNetworkClient_WithEnvironment_m9B313EFCA29F2D7457AE5029FA31443331CC5AFC(__this, L_6, NULL);
		NullCheck(L_3);
		Task_1_tAF51175714E424A84783635B14DBF49E6F558D42* L_8;
		L_8 = GenericInterfaceFuncInvoker3< Task_1_tAF51175714E424A84783635B14DBF49E6F558D42*, String_t*, RuntimeObject*, RuntimeObject* >::Invoke(INetworkHandler_PostAsync_TisSignInResponse_t24C4D34796532E27179DCDDE50D3FCA88629CF47_m24508BC04ADFECCFF57679DA455DD86E0A9438AA_RuntimeMethod_var, L_3, L_4, L_5, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.LinkResponse> Unity.Services.Authentication.AuthenticationNetworkClient::LinkWithExternalTokenAsync(System.String,Unity.Services.Authentication.LinkWithExternalTokenRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9E83749FC41A9417AE7750D513EAF8D13F206641* AuthenticationNetworkClient_LinkWithExternalTokenAsync_m6AA44BD5C19DAB3CEF59477B317DE0BE116C104A (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, String_t* ___idProvider0, LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* ___externalToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkHandler_PostAsync_TisLinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906_mC45FE1F6571B930FDF21D85EF2CA76B370DF1088_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var url = $"{m_LinkExternalTokenUrl}/{idProvider}";
		String_t* L_0 = __this->___m_LinkExternalTokenUrl_15;
		String_t* L_1 = ___idProvider0;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, NULL);
		V_0 = L_2;
		// return NetworkHandler.PostAsync<LinkResponse>(url, externalToken, WithEnvironment(WithAccessToken(GetCommonHeaders())));
		RuntimeObject* L_3;
		L_3 = AuthenticationNetworkClient_get_NetworkHandler_mE8F20F2BF21EDA4B878917EACD2A3A736DBD8571_inline(__this, NULL);
		String_t* L_4 = V_0;
		LinkWithExternalTokenRequest_tD33B97BFC81D3E593C4F2BA059F0C2464DC303B3* L_5 = ___externalToken1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6;
		L_6 = AuthenticationNetworkClient_GetCommonHeaders_mA91AF9F13338A7B915A99B61CC71874D75CB1C2F(__this, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7;
		L_7 = AuthenticationNetworkClient_WithAccessToken_m38CB5FDE79922715525D88352E9E78BBBBA01683(__this, L_6, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8;
		L_8 = AuthenticationNetworkClient_WithEnvironment_m9B313EFCA29F2D7457AE5029FA31443331CC5AFC(__this, L_7, NULL);
		NullCheck(L_3);
		Task_1_t9E83749FC41A9417AE7750D513EAF8D13F206641* L_9;
		L_9 = GenericInterfaceFuncInvoker3< Task_1_t9E83749FC41A9417AE7750D513EAF8D13F206641*, String_t*, RuntimeObject*, RuntimeObject* >::Invoke(INetworkHandler_PostAsync_TisLinkResponse_t7C62050174E4B02D880F5707FEE58E80F4155906_mC45FE1F6571B930FDF21D85EF2CA76B370DF1088_RuntimeMethod_var, L_3, L_4, L_5, L_8);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.UnlinkResponse> Unity.Services.Authentication.AuthenticationNetworkClient::UnlinkExternalTokenAsync(System.String,Unity.Services.Authentication.UnlinkRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCF64ADEDCC5E52FD1B2D04A05A32E30D604CBFAC* AuthenticationNetworkClient_UnlinkExternalTokenAsync_m3E8A17000C303EBA6E72178C5A6837957A1D2D3E (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, String_t* ___idProvider0, UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D* ___request1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkHandler_PostAsync_TisUnlinkResponse_t80C024EBE33CD7796AF31678A9E1B74310470A42_m686DE02A43DF9DD33EDDBC6D5F7DB27629A9F033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var url = $"{m_UnlinkExternalTokenUrl}/{idProvider}";
		String_t* L_0 = __this->___m_UnlinkExternalTokenUrl_16;
		String_t* L_1 = ___idProvider0;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, NULL);
		V_0 = L_2;
		// return NetworkHandler.PostAsync<UnlinkResponse>(url, request, WithEnvironment(WithAccessToken(GetCommonHeaders())));
		RuntimeObject* L_3;
		L_3 = AuthenticationNetworkClient_get_NetworkHandler_mE8F20F2BF21EDA4B878917EACD2A3A736DBD8571_inline(__this, NULL);
		String_t* L_4 = V_0;
		UnlinkRequest_t34E5C75F40757119279FDBB6B52E4587CF10019D* L_5 = ___request1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6;
		L_6 = AuthenticationNetworkClient_GetCommonHeaders_mA91AF9F13338A7B915A99B61CC71874D75CB1C2F(__this, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7;
		L_7 = AuthenticationNetworkClient_WithAccessToken_m38CB5FDE79922715525D88352E9E78BBBBA01683(__this, L_6, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8;
		L_8 = AuthenticationNetworkClient_WithEnvironment_m9B313EFCA29F2D7457AE5029FA31443331CC5AFC(__this, L_7, NULL);
		NullCheck(L_3);
		Task_1_tCF64ADEDCC5E52FD1B2D04A05A32E30D604CBFAC* L_9;
		L_9 = GenericInterfaceFuncInvoker3< Task_1_tCF64ADEDCC5E52FD1B2D04A05A32E30D604CBFAC*, String_t*, RuntimeObject*, RuntimeObject* >::Invoke(INetworkHandler_PostAsync_TisUnlinkResponse_t80C024EBE33CD7796AF31678A9E1B74310470A42_m686DE02A43DF9DD33EDDBC6D5F7DB27629A9F033_RuntimeMethod_var, L_3, L_4, L_5, L_8);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.PlayerInfoResponse> Unity.Services.Authentication.AuthenticationNetworkClient::GetPlayerInfoAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBDE11C6723E9E78F3C214C00A13E580F96A87EB7* AuthenticationNetworkClient_GetPlayerInfoAsync_m7A2E27B9166A8B703EE8FF22009E92B6A9B2B91B (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, String_t* ___playerId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkHandler_GetAsync_TisPlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0_m9ABB549F75353E21648FB8FDB54A1B6974AFBD0C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NetworkHandler.GetAsync<PlayerInfoResponse>(CreateUserRequestUrl(playerId), WithAccessToken(GetCommonHeaders()));
		RuntimeObject* L_0;
		L_0 = AuthenticationNetworkClient_get_NetworkHandler_mE8F20F2BF21EDA4B878917EACD2A3A736DBD8571_inline(__this, NULL);
		String_t* L_1 = ___playerId0;
		String_t* L_2;
		L_2 = AuthenticationNetworkClient_CreateUserRequestUrl_m1E91DDCE4598C1ACA91E3888755CE123F07DEFDA(__this, L_1, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3;
		L_3 = AuthenticationNetworkClient_GetCommonHeaders_mA91AF9F13338A7B915A99B61CC71874D75CB1C2F(__this, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
		L_4 = AuthenticationNetworkClient_WithAccessToken_m38CB5FDE79922715525D88352E9E78BBBBA01683(__this, L_3, NULL);
		NullCheck(L_0);
		Task_1_tBDE11C6723E9E78F3C214C00A13E580F96A87EB7* L_5;
		L_5 = GenericInterfaceFuncInvoker2< Task_1_tBDE11C6723E9E78F3C214C00A13E580F96A87EB7*, String_t*, RuntimeObject* >::Invoke(INetworkHandler_GetAsync_TisPlayerInfoResponse_t871074535A03A0B2F71D506F08F9D80AEE56B6F0_m9ABB549F75353E21648FB8FDB54A1B6974AFBD0C_RuntimeMethod_var, L_0, L_2, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationNetworkClient::DeleteAccountAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AuthenticationNetworkClient_DeleteAccountAsync_m34C3B443A2A59A21A4DFD64B7D49D7EDFB2BCDD5 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, String_t* ___playerId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkHandler_t4EBC714C09E2887EE735E96833BD11B3AAA02389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NetworkHandler.DeleteAsync(CreateUserRequestUrl(playerId), WithEnvironment(WithAccessToken(GetCommonHeaders())));
		RuntimeObject* L_0;
		L_0 = AuthenticationNetworkClient_get_NetworkHandler_mE8F20F2BF21EDA4B878917EACD2A3A736DBD8571_inline(__this, NULL);
		String_t* L_1 = ___playerId0;
		String_t* L_2;
		L_2 = AuthenticationNetworkClient_CreateUserRequestUrl_m1E91DDCE4598C1ACA91E3888755CE123F07DEFDA(__this, L_1, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3;
		L_3 = AuthenticationNetworkClient_GetCommonHeaders_mA91AF9F13338A7B915A99B61CC71874D75CB1C2F(__this, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
		L_4 = AuthenticationNetworkClient_WithAccessToken_m38CB5FDE79922715525D88352E9E78BBBBA01683(__this, L_3, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5;
		L_5 = AuthenticationNetworkClient_WithEnvironment_m9B313EFCA29F2D7457AE5029FA31443331CC5AFC(__this, L_4, NULL);
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = InterfaceFuncInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, String_t*, RuntimeObject* >::Invoke(4 /* System.Threading.Tasks.Task Unity.Services.Authentication.INetworkHandler::DeleteAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, INetworkHandler_t4EBC714C09E2887EE735E96833BD11B3AAA02389_il2cpp_TypeInfo_var, L_0, L_2, L_5);
		return L_6;
	}
}
// System.String Unity.Services.Authentication.AuthenticationNetworkClient::CreateUserRequestUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationNetworkClient_CreateUserRequestUrl_m1E91DDCE4598C1ACA91E3888755CE123F07DEFDA (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, String_t* ___user0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{m_UsersUrl}/{user}";
		String_t* L_0 = __this->___m_UsersUrl_17;
		String_t* L_1 = ___user0;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, NULL);
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::WithAccessToken(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* AuthenticationNetworkClient_WithAccessToken_m38CB5FDE79922715525D88352E9E78BBBBA01683 (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// headers["Authorization"] = $"Bearer {AccessToken}";
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___headers0;
		String_t* L_1;
		L_1 = AuthenticationNetworkClient_get_AccessToken_m42B6AD48F27F4C586708E4DC9E2A64FE08656F1D(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC, L_1, NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// return headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___headers0;
		return L_3;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::WithEnvironment(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* AuthenticationNetworkClient_WithEnvironment_m9B313EFCA29F2D7457AE5029FA31443331CC5AFC (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral141957AF910C5B886304F115D2479EA72DD92035);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var environmentId = EnvironmentId;
		String_t* L_0;
		L_0 = AuthenticationNetworkClient_get_EnvironmentId_m1EB18E103C62D193B5F698F30D79F03AB5A26FE2(__this, NULL);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(environmentId))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// headers["UnityEnvironment"] = environmentId;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___headers0;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_3, _stringLiteral141957AF910C5B886304F115D2479EA72DD92035, L_4, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_001b:
	{
		// return headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = ___headers0;
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::GetCommonHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* AuthenticationNetworkClient_GetCommonHeaders_mA91AF9F13338A7B915A99B61CC71874D75CB1C2F (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Dictionary<string, string>(m_CommonHeaders);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_CommonHeaders_18;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9(L_1, L_0, Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
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
// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Authentication.HttpUtilities::ParseQueryString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HttpUtilities_ParseQueryString_m6014E84D7C7C4604AEBEC226B5AB0D12826EA93B (String_t* ___queryString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		// var result = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// var splitQuery = queryString.Split('?', '&');
		String_t* L_1 = ___queryString0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)63));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)38));
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_1, L_4, NULL);
		// foreach (var param in splitQuery)
		V_1 = L_5;
		V_2 = 0;
		goto IL_0063;
	}

IL_0021:
	{
		// foreach (var param in splitQuery)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// var assignmentIndex = param.IndexOf('=');
		String_t* L_10 = V_3;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_10, ((int32_t)61), NULL);
		V_4 = L_11;
		// if (assignmentIndex >= 0)
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// var paramName = UnescapeUrlString(param.Substring(0, assignmentIndex));
		String_t* L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, L_14, NULL);
		String_t* L_16;
		L_16 = HttpUtilities_UnescapeUrlString_m15F54F47563D19CC8FC5D176CE501DACB7A78941(L_15, NULL);
		V_5 = L_16;
		// var paramValue = UnescapeUrlString(param.Substring(assignmentIndex + 1));
		String_t* L_17 = V_3;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), NULL);
		String_t* L_20;
		L_20 = HttpUtilities_UnescapeUrlString_m15F54F47563D19CC8FC5D176CE501DACB7A78941(L_19, NULL);
		V_6 = L_20;
		// result[paramName] = paramValue;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = V_0;
		String_t* L_22 = V_5;
		String_t* L_23 = V_6;
		NullCheck(L_21);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_21, L_22, L_23, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_005f:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0063:
	{
		// foreach (var param in splitQuery)
		int32_t L_25 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_1;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		// return result;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27 = V_0;
		return L_27;
	}
}
// System.String Unity.Services.Authentication.HttpUtilities::EncodeQueryString(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpUtilities_EncodeQueryString_m0F1E9E329E67D129A10E57885254FE57A2B34CB4 (RuntimeObject* ___queryParams0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var result = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// var firstParam = true;
		V_1 = (bool)1;
		// foreach (var param in queryParams)
		RuntimeObject* L_1 = ___queryParams0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0066:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0053_1;
			}

IL_0011_1:
			{
				// foreach (var param in queryParams)
				RuntimeObject* L_5 = V_2;
				NullCheck(L_5);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_5);
				V_3 = L_6;
				// if (!firstParam)
				bool L_7 = V_1;
				if (L_7)
				{
					goto IL_0026_1;
				}
			}
			{
				// result.Append('&');
				StringBuilder_t* L_8 = V_0;
				NullCheck(L_8);
				StringBuilder_t* L_9;
				L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)38), NULL);
				goto IL_0028_1;
			}

IL_0026_1:
			{
				// firstParam = false;
				V_1 = (bool)0;
			}

IL_0028_1:
			{
				// result.Append(EscapeUrlString(param.Key)).Append('=').Append(EscapeUrlString(param.Value));
				StringBuilder_t* L_10 = V_0;
				String_t* L_11;
				L_11 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_12;
				L_12 = HttpUtilities_EscapeUrlString_mE97CA952E1525FFFAFC9D292A05E2DE07F94DE51(L_11, NULL);
				NullCheck(L_10);
				StringBuilder_t* L_13;
				L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, L_12, NULL);
				NullCheck(L_13);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)61), NULL);
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				String_t* L_16;
				L_16 = HttpUtilities_EscapeUrlString_mE97CA952E1525FFFAFC9D292A05E2DE07F94DE51(L_15, NULL);
				NullCheck(L_14);
				StringBuilder_t* L_17;
				L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
			}

IL_0053_1:
			{
				// foreach (var param in queryParams)
				RuntimeObject* L_18 = V_2;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		// return result.ToString();
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}
}
// System.String Unity.Services.Authentication.HttpUtilities::EscapeUrlString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpUtilities_EscapeUrlString_mE97CA952E1525FFFAFC9D292A05E2DE07F94DE51 (String_t* ___rawString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Uri.EscapeDataString(rawString);
		String_t* L_0 = ___rawString0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Uri_EscapeDataString_m844D0FB6899488BDEBAF160B23397CD7ED8CA2DF(L_0, NULL);
		return L_1;
	}
}
// System.String Unity.Services.Authentication.HttpUtilities::UnescapeUrlString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpUtilities_UnescapeUrlString_m15F54F47563D19CC8FC5D176CE501DACB7A78941 (String_t* ___urlString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Uri.UnescapeDataString(urlString);
		String_t* L_0 = ___urlString0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Uri_UnescapeDataString_m095AF55EE0F237A44FC8A53D2EE6FA66A567634D(L_0, NULL);
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
// Unity.Services.Authentication.INetworkConfiguration Unity.Services.Authentication.NetworkHandler::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkHandler_get_Configuration_m855B12C42C43AC5FEEDCD2536822705243B7B5A4 (NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360* __this, const RuntimeMethod* method) 
{
	{
		// INetworkConfiguration Configuration { get; }
		RuntimeObject* L_0 = __this->___U3CConfigurationU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.NetworkHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkHandler__ctor_mD7E4C7A769EA5CAA763BF06289A0B5C223D88503 (NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetworkHandler()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Configuration = new NetworkConfiguration();
		NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4* L_0 = (NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4*)il2cpp_codegen_object_new(NetworkConfiguration_t27C4C16B0E7CA883C35EC2BCB7CBE2C5339EB5F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NetworkConfiguration__ctor_m61201E2D6FA572D1B8990CFBB621A1777AA7FDE1(L_0, NULL);
		__this->___U3CConfigurationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigurationU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.NetworkHandler::DeleteAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NetworkHandler_DeleteAsync_mA0C5CDA09F912B6EBA57299DD1B0106BC02E7A49 (NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360* __this, String_t* ___url0, RuntimeObject* ___headers1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequest_tE5622473581945D112800D97E1EB0E04D900D707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var request = new WebRequest(
		//     Configuration,
		//     WebRequestVerb.Delete,
		//     url,
		//     headers,
		//     null,
		//     ContentType.Json);
		RuntimeObject* L_0;
		L_0 = NetworkHandler_get_Configuration_m855B12C42C43AC5FEEDCD2536822705243B7B5A4_inline(__this, NULL);
		String_t* L_1 = ___url0;
		RuntimeObject* L_2 = ___headers1;
		WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* L_3 = (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707*)il2cpp_codegen_object_new(WebRequest_tE5622473581945D112800D97E1EB0E04D900D707_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebRequest__ctor_m7E4F164BD970CD891671BF8F682EE7D2C5BC4B7D(L_3, L_0, 3, L_1, L_2, (String_t*)NULL, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		// return request.SendAsync();
		NullCheck(L_3);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = WebRequest_SendAsync_mDBF29413F7446A8D9F6747C3AB89EAB5A6442C25(L_3, NULL);
		return L_4;
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
// Unity.Services.Authentication.INetworkConfiguration Unity.Services.Authentication.WebRequest::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRequest_get_Configuration_m17287B94E87EE12E6579C0D303BE14DD94639C5E (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, const RuntimeMethod* method) 
{
	{
		// internal INetworkConfiguration Configuration { get; }
		RuntimeObject* L_0 = __this->___U3CConfigurationU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Int32 Unity.Services.Authentication.WebRequest::get_Retries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRequest_get_Retries_m54A5EACF6AA10F0FC5E72D5E21068C894943BB4A (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, const RuntimeMethod* method) 
{
	{
		// internal int Retries { get; private set; }
		int32_t L_0 = __this->___U3CRetriesU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.WebRequest::set_Retries(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_set_Retries_mCFCC8E23AAEAD4F2836F22F645DD14F6A7AEE31A (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal int Retries { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CRetriesU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void Unity.Services.Authentication.WebRequest::.ctor(Unity.Services.Authentication.INetworkConfiguration,Unity.Services.Authentication.WebRequestVerb,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest__ctor_m7E4F164BD970CD891671BF8F682EE7D2C5BC4B7D (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, RuntimeObject* ___configuration0, int32_t ___verb1, String_t* ___url2, RuntimeObject* ___headers3, String_t* ___payload4, String_t* ___payloadContentType5, const RuntimeMethod* method) 
{
	{
		// internal WebRequest(INetworkConfiguration configuration,
		//                     WebRequestVerb verb,
		//                     string url,
		//                     IDictionary<string, string> headers,
		//                     string payload,
		//                     string payloadContentType)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Configuration = configuration;
		RuntimeObject* L_0 = ___configuration0;
		__this->___U3CConfigurationU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigurationU3Ek__BackingField_5), (void*)L_0);
		// m_Verb = verb;
		int32_t L_1 = ___verb1;
		__this->___m_Verb_0 = L_1;
		// m_Url = url;
		String_t* L_2 = ___url2;
		__this->___m_Url_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Url_1), (void*)L_2);
		// m_Headers = headers;
		RuntimeObject* L_3 = ___headers3;
		__this->___m_Headers_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Headers_2), (void*)L_3);
		// m_Payload = payload;
		String_t* L_4 = ___payload4;
		__this->___m_Payload_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Payload_3), (void*)L_4);
		// m_PayloadContentType = payloadContentType;
		String_t* L_5 = ___payloadContentType5;
		__this->___m_PayloadContentType_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PayloadContentType_4), (void*)L_5);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.WebRequest::SendAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebRequest_SendAsync_mDBF29413F7446A8D9F6747C3AB89EAB5A6442C25 (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SendAttemptAsync(new TaskCompletionSource<string>());
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_0 = (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)il2cpp_codegen_object_new(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1(L_0, TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_1;
		L_1 = WebRequest_SendAttemptAsync_m72854F7D88560AC76FB8DC4B73B38E72ACE360D6(__this, L_0, NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Authentication.WebRequest::SendAttemptAsync(System.Threading.Tasks.TaskCompletionSource`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* WebRequest_SendAttemptAsync_m72854F7D88560AC76FB8DC4B73B38E72ACE360D6 (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* ___tcs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CSendAttemptAsyncU3Eb__0_m96DAC543113DCBB315F5BD4F982DD9FCF8D81743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* L_0 = (U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass15_0__ctor_m08C6AA29486BA58F7E252E1F3050DEC2A5CAC79D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* L_2 = V_0;
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_3 = ___tcs0;
		NullCheck(L_2);
		L_2->___tcs_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___tcs_1), (void*)L_3);
	}
	try
	{// begin try (depth: 1)
		// var request = Build();
		U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* L_4 = V_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5;
		L_5 = WebRequest_Build_mB8DB21CB3B5CE2CDF55E5EB82DAB28EC8084C966(__this, NULL);
		NullCheck(L_4);
		L_4->___request_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___request_2), (void*)L_5);
		// request.SendWebRequest().completed += (operation) =>
		// {
		//     RequestCompleted(tcs,
		//         request.responseCode,
		//         RequestHasNetworkError(request),
		//         RequestHasServerError(request),
		//         request.error,
		//         request.downloadHandler?.text,
		//         request.GetResponseHeaders());
		//     request.Dispose();
		// };
		U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* L_6 = V_0;
		NullCheck(L_6);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = L_6->___request_2;
		NullCheck(L_7);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_8;
		L_8 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_7, NULL);
		U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* L_9 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_10 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CSendAttemptAsyncU3Eb__0_m96DAC543113DCBB315F5BD4F982DD9FCF8D81743_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_8, L_10, NULL);
		// }
		goto IL_004d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003e;
		}
		throw e;
	}

CATCH_003e:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// tcs.SetException(e);
		U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* L_11 = V_0;
		NullCheck(L_11);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_12 = L_11->___tcs_1;
		Exception_t* L_13 = V_1;
		NullCheck(L_12);
		TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6(L_12, L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		// return tcs.Task;
		U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* L_14 = V_0;
		NullCheck(L_14);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_15 = L_14->___tcs_1;
		NullCheck(L_15);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_16;
		L_16 = TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline(L_15, TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		return L_16;
	}
}
// UnityEngine.Networking.UnityWebRequest Unity.Services.Authentication.WebRequest::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* WebRequest_Build_mB8DB21CB3B5CE2CDF55E5EB82DAB28EC8084C966 (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkConfiguration_t696DBB208D0022D357D3014820A8201E6809C5E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// switch (m_Verb)
		int32_t L_0 = __this->___m_Verb_0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0081;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_0092;
			}
			case 3:
			{
				goto IL_00e3;
			}
		}
	}
	{
		goto IL_00fc;
	}

IL_0022:
	{
		// if (string.IsNullOrEmpty(m_Payload))
		String_t* L_2 = __this->___m_Payload_3;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// unityWebRequest = UnityWebRequest.Post(m_Url, string.Empty);
		String_t* L_4 = __this->___m_Url_1;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6;
		L_6 = UnityWebRequest_Post_mB8907F79799A156087D46500958E06FEEEC509DB(L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_011d;
	}

IL_0045:
	{
		// unityWebRequest = new UnityWebRequest(m_Url, UnityWebRequest.kHttpVerbPOST)
		// {
		//     uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes(m_Payload)),
		//     downloadHandler = new DownloadHandlerBuffer()
		// };
		String_t* L_7 = __this->___m_Url_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_8, L_7, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = L_8;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_11 = __this->___m_Payload_3;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, L_11);
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_13 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_13, L_12, NULL);
		NullCheck(L_9);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_9, L_13, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = L_9;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_15 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_15, NULL);
		NullCheck(L_14);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_14, L_15, NULL);
		V_0 = L_14;
		// break;
		goto IL_011d;
	}

IL_0081:
	{
		// unityWebRequest = UnityWebRequest.Get(m_Url);
		String_t* L_16 = __this->___m_Url_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17;
		L_17 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_16, NULL);
		V_0 = L_17;
		// break;
		goto IL_011d;
	}

IL_0092:
	{
		// if (string.IsNullOrEmpty(m_Payload))
		String_t* L_18 = __this->___m_Payload_3;
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		// throw new ArgumentException("PUT payload cannot be empty.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10E85A1C982FD89AD3C7F21301C7CEF7FA7E7CEC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequest_Build_mB8DB21CB3B5CE2CDF55E5EB82DAB28EC8084C966_RuntimeMethod_var)));
	}

IL_00aa:
	{
		// unityWebRequest = new UnityWebRequest(m_Url, UnityWebRequest.kHttpVerbPUT)
		// {
		//     uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes(m_Payload)),
		//     downloadHandler = new DownloadHandlerBuffer()
		// };
		String_t* L_21 = __this->___m_Url_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_22, L_21, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = L_22;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_24;
		L_24 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_25 = __this->___m_Payload_3;
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_24, L_25);
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_27 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_27, L_26, NULL);
		NullCheck(L_23);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_23, L_27, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_28 = L_23;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_29 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_29, NULL);
		NullCheck(L_28);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_28, L_29, NULL);
		V_0 = L_28;
		// break;
		goto IL_011d;
	}

IL_00e3:
	{
		// unityWebRequest = UnityWebRequest.Delete(m_Url);
		String_t* L_30 = __this->___m_Url_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_31;
		L_31 = UnityWebRequest_Delete_mB86F20E8BF883C7F5831ED29A9ADF2A54E7F7021(L_30, NULL);
		V_0 = L_31;
		// unityWebRequest.downloadHandler = new DownloadHandlerBuffer();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_32 = V_0;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_33 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_33, NULL);
		NullCheck(L_32);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_32, L_33, NULL);
		// break;
		goto IL_011d;
	}

IL_00fc:
	{
		// throw new ArgumentException("Unknown verb " + m_Verb);
		int32_t* L_34 = (&__this->___m_Verb_0);
		Il2CppFakeBox<int32_t> L_35(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestVerb_tF2538FF3DD3CADBFB3C11AB85E1B78F8B837EFA5_il2cpp_TypeInfo_var)), L_34);
		String_t* L_36;
		L_36 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_35), NULL);
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral296A65E2A28A506DAA998C4B70E93737444F0726)), L_36, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_38 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_38);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_38, L_37, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequest_Build_mB8DB21CB3B5CE2CDF55E5EB82DAB28EC8084C966_RuntimeMethod_var)));
	}

IL_011d:
	{
		// if (!string.IsNullOrEmpty(m_PayloadContentType))
		String_t* L_39 = __this->___m_PayloadContentType_4;
		bool L_40;
		L_40 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_39, NULL);
		if (L_40)
		{
			goto IL_013b;
		}
	}
	{
		// unityWebRequest.SetRequestHeader("Content-Type", m_PayloadContentType);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_41 = V_0;
		String_t* L_42 = __this->___m_PayloadContentType_4;
		NullCheck(L_41);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_41, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_42, NULL);
	}

IL_013b:
	{
		// if (m_Headers != null)
		RuntimeObject* L_43 = __this->___m_Headers_2;
		if (!L_43)
		{
			goto IL_0180;
		}
	}
	{
		// foreach (var headerAndValue in m_Headers)
		RuntimeObject* L_44 = __this->___m_Headers_2;
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_44);
		V_2 = L_45;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0176:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_46 = V_2;
					if (!L_46)
					{
						goto IL_017f;
					}
				}
				{
					RuntimeObject* L_47 = V_2;
					NullCheck(L_47);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_47);
				}

IL_017f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_016c_1;
			}

IL_0151_1:
			{
				// foreach (var headerAndValue in m_Headers)
				RuntimeObject* L_48 = V_2;
				NullCheck(L_48);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_49;
				L_49 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_48);
				V_3 = L_49;
				// unityWebRequest.SetRequestHeader(headerAndValue.Key, headerAndValue.Value);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_50 = V_0;
				String_t* L_51;
				L_51 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_52;
				L_52 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_50);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_50, L_51, L_52, NULL);
			}

IL_016c_1:
			{
				// foreach (var headerAndValue in m_Headers)
				RuntimeObject* L_53 = V_2;
				NullCheck(L_53);
				bool L_54;
				L_54 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_53);
				if (L_54)
				{
					goto IL_0151_1;
				}
			}
			{
				goto IL_0180;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0180:
	{
		// unityWebRequest.timeout = Configuration.Timeout;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_55 = V_0;
		RuntimeObject* L_56;
		L_56 = WebRequest_get_Configuration_m17287B94E87EE12E6579C0D303BE14DD94639C5E_inline(__this, NULL);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.Services.Authentication.INetworkConfiguration::get_Timeout() */, INetworkConfiguration_t696DBB208D0022D357D3014820A8201E6809C5E6_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_55);
		UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_55, L_57, NULL);
		// return unityWebRequest;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_58 = V_0;
		return L_58;
	}
}
// System.Void Unity.Services.Authentication.WebRequest::RequestCompleted(System.Threading.Tasks.TaskCompletionSource`1<System.String>,System.Int64,System.Boolean,System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_RequestCompleted_m0AB8EBFFF83D11CBF3F6CD7A075871944575A0C4 (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* ___tcs0, int64_t ___responseCode1, bool ___isNetworkError2, bool ___isServerError3, String_t* ___errorText4, String_t* ___bodyText5, RuntimeObject* ___headers6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkConfiguration_t696DBB208D0022D357D3014820A8201E6809C5E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4511699820F543B7439635CD03C9DF85473764E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D8209EB4C6E9DAA475A67D53CE5B15D8209D862);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* V_2 = NULL;
	String_t* G_B8_0 = NULL;
	{
		// if (isNetworkError && Retries < Configuration.Retries)
		bool L_0 = ___isNetworkError2;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_1;
		L_1 = WebRequest_get_Retries_m54A5EACF6AA10F0FC5E72D5E21068C894943BB4A_inline(__this, NULL);
		RuntimeObject* L_2;
		L_2 = WebRequest_get_Configuration_m17287B94E87EE12E6579C0D303BE14DD94639C5E_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Services.Authentication.INetworkConfiguration::get_Retries() */, INetworkConfiguration_t696DBB208D0022D357D3014820A8201E6809C5E6_il2cpp_TypeInfo_var, L_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0039;
		}
	}
	{
		// Logger.LogWarning("Network error detected, retrying...");
		Logger_LogWarning_mE0A74606514DA618868A2737BAD77E6DF440F00E(_stringLiteral9D8209EB4C6E9DAA475A67D53CE5B15D8209D862, NULL);
		// Retries++;
		int32_t L_4;
		L_4 = WebRequest_get_Retries_m54A5EACF6AA10F0FC5E72D5E21068C894943BB4A_inline(__this, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		WebRequest_set_Retries_mCFCC8E23AAEAD4F2836F22F645DD14F6A7AEE31A_inline(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		// SendAttemptAsync(tcs);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_6 = ___tcs0;
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_7;
		L_7 = WebRequest_SendAttemptAsync_m72854F7D88560AC76FB8DC4B73B38E72ACE360D6(__this, L_6, NULL);
		return;
	}

IL_0039:
	{
		// if (isNetworkError || isServerError)
		bool L_8 = ___isNetworkError2;
		bool L_9 = ___isServerError3;
		if (!((int32_t)((int32_t)L_8|(int32_t)L_9)))
		{
			goto IL_0079;
		}
	}
	{
		// var errorMessage = (isServerError && !string.IsNullOrEmpty(bodyText)) ? bodyText : errorText;
		bool L_10 = ___isServerError3;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_11 = ___bodyText5;
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (!L_12)
		{
			goto IL_0050;
		}
	}

IL_004c:
	{
		String_t* L_13 = ___errorText4;
		G_B8_0 = L_13;
		goto IL_0052;
	}

IL_0050:
	{
		String_t* L_14 = ___bodyText5;
		G_B8_0 = L_14;
	}

IL_0052:
	{
		V_1 = G_B8_0;
		// var exception = new WebRequestException(isNetworkError, isServerError, false, responseCode, errorMessage, headers);
		bool L_15 = ___isNetworkError2;
		bool L_16 = ___isServerError3;
		int64_t L_17 = ___responseCode1;
		String_t* L_18 = V_1;
		RuntimeObject* L_19 = ___headers6;
		WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_20 = (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF*)il2cpp_codegen_object_new(WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WebRequestException__ctor_m34FFE6C71B787343A350711B8D33CDCDE89589CA(L_20, L_15, L_16, (bool)0, L_17, L_18, L_19, NULL);
		V_2 = L_20;
		// tcs.SetException(exception);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_21 = ___tcs0;
		WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* L_22 = V_2;
		NullCheck(L_21);
		TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6(L_21, L_22, TaskCompletionSource_1_SetException_mBDE1D57E882888E999765C0CA78DBB1E7DED5AA6_RuntimeMethod_var);
		// Logger.LogWarning($"Request completed with error: {errorMessage}");
		String_t* L_23 = V_1;
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4511699820F543B7439635CD03C9DF85473764E4, L_23, NULL);
		Logger_LogWarning_mE0A74606514DA618868A2737BAD77E6DF440F00E(L_24, NULL);
		return;
	}

IL_0079:
	{
		// tcs.SetResult(bodyText);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_25 = ___tcs0;
		String_t* L_26 = ___bodyText5;
		NullCheck(L_25);
		TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1(L_25, L_26, TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Authentication.WebRequest::RequestHasServerError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequest_RequestHasServerError_m9D4204864901403DE7FA88503084221260926F98 (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) 
{
	{
		// return request.responseCode >= 400;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___request0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_0, NULL);
		return (bool)((((int32_t)((((int64_t)L_1) < ((int64_t)((int64_t)((int32_t)400))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Services.Authentication.WebRequest::RequestHasNetworkError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequest_RequestHasNetworkError_mB4FF69EB4F14B80019B012FAD35BAB9B15ACFDBF (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDDEE3EA3FCE79DBEAF010D60B12A635E292209E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return request.result == UnityWebRequest.Result.ConnectionError && request.error != "Redirect limit exceeded";
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___request0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = ___request0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_2, NULL);
		bool L_4;
		L_4 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_3, _stringLiteralFDDEE3EA3FCE79DBEAF010D60B12A635E292209E, NULL);
		return L_4;
	}

IL_001a:
	{
		return (bool)0;
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
// System.Void Unity.Services.Authentication.WebRequest/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m08C6AA29486BA58F7E252E1F3050DEC2A5CAC79D (U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.WebRequest/<>c__DisplayClass15_0::<SendAttemptAsync>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CSendAttemptAsyncU3Eb__0_m96DAC543113DCBB315F5BD4F982DD9FCF8D81743 (U3CU3Ec__DisplayClass15_0_t71F0A8CA6206B265C274320E3F9DB06B282F56D6* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___operation0, const RuntimeMethod* method) 
{
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	bool G_B2_2 = false;
	bool G_B2_3 = false;
	int64_t G_B2_4 = 0;
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* G_B2_5 = NULL;
	WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* G_B2_6 = NULL;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	bool G_B1_2 = false;
	bool G_B1_3 = false;
	int64_t G_B1_4 = 0;
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* G_B1_5 = NULL;
	WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* G_B1_6 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	bool G_B3_2 = false;
	bool G_B3_3 = false;
	int64_t G_B3_4 = 0;
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* G_B3_5 = NULL;
	WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* G_B3_6 = NULL;
	{
		// RequestCompleted(tcs,
		//     request.responseCode,
		//     RequestHasNetworkError(request),
		//     RequestHasServerError(request),
		//     request.error,
		//     request.downloadHandler?.text,
		//     request.GetResponseHeaders());
		WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* L_0 = __this->___U3CU3E4__this_0;
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_1 = __this->___tcs_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = __this->___request_2;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_2, NULL);
		WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* L_4 = __this->___U3CU3E4__this_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___request_2;
		NullCheck(L_4);
		bool L_6;
		L_6 = WebRequest_RequestHasNetworkError_mB4FF69EB4F14B80019B012FAD35BAB9B15ACFDBF(L_4, L_5, NULL);
		WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* L_7 = __this->___U3CU3E4__this_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___request_2;
		NullCheck(L_7);
		bool L_9;
		L_9 = WebRequest_RequestHasServerError_m9D4204864901403DE7FA88503084221260926F98(L_7, L_8, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___request_2;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_10, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___request_2;
		NullCheck(L_12);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_13;
		L_13 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_12, NULL);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_14 = L_13;
		G_B1_0 = L_14;
		G_B1_1 = L_11;
		G_B1_2 = L_9;
		G_B1_3 = L_6;
		G_B1_4 = L_3;
		G_B1_5 = L_1;
		G_B1_6 = L_0;
		if (L_14)
		{
			G_B2_0 = L_14;
			G_B2_1 = L_11;
			G_B2_2 = L_9;
			G_B2_3 = L_6;
			G_B2_4 = L_3;
			G_B2_5 = L_1;
			G_B2_6 = L_0;
			goto IL_0056;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		G_B3_5 = G_B1_5;
		G_B3_6 = G_B1_6;
		goto IL_005b;
	}

IL_0056:
	{
		NullCheck(G_B2_0);
		String_t* L_15;
		L_15 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(G_B2_0, NULL);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
		G_B3_5 = G_B2_5;
		G_B3_6 = G_B2_6;
	}

IL_005b:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_16 = __this->___request_2;
		NullCheck(L_16);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17;
		L_17 = UnityWebRequest_GetResponseHeaders_m67147A5D3FF83FD75071AA42F4890439DA2092DF(L_16, NULL);
		NullCheck(G_B3_6);
		WebRequest_RequestCompleted_m0AB8EBFFF83D11CBF3F6CD7A075871944575A0C4(G_B3_6, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_17, NULL);
		// request.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = __this->___request_2;
		NullCheck(L_18);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_18, NULL);
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
// System.Boolean Unity.Services.Authentication.WebRequestException::get_NetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequestException_get_NetworkError_m9819D76C20F277A2C1867EC658AAFBC8451CB39E (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, const RuntimeMethod* method) 
{
	{
		// public bool NetworkError { get; private set; }
		bool L_0 = __this->___U3CNetworkErrorU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::set_NetworkError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException_set_NetworkError_m2C115303197F2E683B07471C5A2883AE3B03F603 (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool NetworkError { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CNetworkErrorU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Boolean Unity.Services.Authentication.WebRequestException::get_DeserializationError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequestException_get_DeserializationError_mF33CA43841C4CE2718F7F169F8EA9C1F416B79BC (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, const RuntimeMethod* method) 
{
	{
		// public bool DeserializationError { get; private set; }
		bool L_0 = __this->___U3CDeserializationErrorU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::set_DeserializationError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException_set_DeserializationError_mA826E42FBC5FD3D20CBECCA8A3299E5858688D4E (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool DeserializationError { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CDeserializationErrorU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Boolean Unity.Services.Authentication.WebRequestException::get_ServerError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequestException_get_ServerError_m2FF122D77D3D18170A3C306B2F5BF24240877470 (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, const RuntimeMethod* method) 
{
	{
		// public bool ServerError { get; private set; }
		bool L_0 = __this->___U3CServerErrorU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::set_ServerError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException_set_ServerError_m25C30AEFD94AA6B869D353E784AC51E740A924E5 (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ServerError { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CServerErrorU3Ek__BackingField_20 = L_0;
		return;
	}
}
// System.Int64 Unity.Services.Authentication.WebRequestException::get_ResponseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WebRequestException_get_ResponseCode_mD02CB7727ACF1A6EA570F1DDE88E544D54734F93 (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; private set; }
		int64_t L_0 = __this->___U3CResponseCodeU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::set_ResponseCode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseCode_mD5CBAF8670FE2515209045C9677CE5150DD380D7 (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; private set; }
		int64_t L_0 = ___value0;
		__this->___U3CResponseCodeU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Authentication.WebRequestException::get_ResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRequestException_get_ResponseHeaders_m4B3EEAE853935B50958D2AA261906B2B7CD830EB (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, const RuntimeMethod* method) 
{
	{
		// public IDictionary<string, string> ResponseHeaders { get; private set; }
		RuntimeObject* L_0 = __this->___U3CResponseHeadersU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::set_ResponseHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseHeaders_m413A013D40F846EE08E7959D4C226D571E48F03F (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IDictionary<string, string> ResponseHeaders { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CResponseHeadersU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseHeadersU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Int64,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException__ctor_m34FFE6C71B787343A350711B8D33CDCDE89589CA (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, bool ___isNetworkError0, bool ___isServerError1, bool ___isDeserializationError2, int64_t ___responseCode3, String_t* ___errorMessage4, RuntimeObject* ___responseHeaders5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal WebRequestException(bool isNetworkError, bool isServerError, bool isDeserializationError, long responseCode, string errorMessage, IDictionary<string, string> responseHeaders = null) : base(errorMessage)
		String_t* L_0 = ___errorMessage4;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// NetworkError = isNetworkError;
		bool L_1 = ___isNetworkError0;
		WebRequestException_set_NetworkError_m2C115303197F2E683B07471C5A2883AE3B03F603_inline(__this, L_1, NULL);
		// ServerError = isServerError;
		bool L_2 = ___isServerError1;
		WebRequestException_set_ServerError_m25C30AEFD94AA6B869D353E784AC51E740A924E5_inline(__this, L_2, NULL);
		// DeserializationError = isDeserializationError;
		bool L_3 = ___isDeserializationError2;
		WebRequestException_set_DeserializationError_mA826E42FBC5FD3D20CBECCA8A3299E5858688D4E_inline(__this, L_3, NULL);
		// ResponseCode = responseCode;
		int64_t L_4 = ___responseCode3;
		WebRequestException_set_ResponseCode_mD5CBAF8670FE2515209045C9677CE5150DD380D7_inline(__this, L_4, NULL);
		// ResponseHeaders = responseHeaders;
		RuntimeObject* L_5 = ___responseHeaders5;
		WebRequestException_set_ResponseHeaders_m413A013D40F846EE08E7959D4C226D571E48F03F_inline(__this, L_5, NULL);
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
// System.String Unity.Services.Authentication.AuthenticationCache::get_CloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_CloudProjectId_mB6305CFC987BED1721E733186A2115952C1A64B6 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string CloudProjectId => m_CloudProjectId.GetCloudProjectId();
		RuntimeObject* L_0 = __this->___m_CloudProjectId_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId() */, ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_Profile_m3DFBA91E989329B137E0FD376D7775462B5C1CCA (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProfile_t0DC486F874AA0450CBE9E4F75A5733093B2E76E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Profile => m_Profile.Current;
		RuntimeObject* L_0 = __this->___m_Profile_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Unity.Services.Authentication.IProfile::get_Current() */, IProfile_t0DC486F874AA0450CBE9E4F75A5733093B2E76E7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_Prefix_mDDC3F137BB4B91509ADC0A923F420FBF98BC1553 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDA99DC082690D52234645F88C722A5B296B811B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string Prefix => $"{CloudProjectId}.{Profile}.unity.services.authentication.";
		String_t* L_0;
		L_0 = AuthenticationCache_get_CloudProjectId_mB6305CFC987BED1721E733186A2115952C1A64B6(__this, NULL);
		String_t* L_1;
		L_1 = AuthenticationCache_get_Profile_m3DFBA91E989329B137E0FD376D7775462B5C1CCA(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_0, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_1, _stringLiteralCDA99DC082690D52234645F88C722A5B296B811B, NULL);
		return L_2;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::get_OldPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_OldPrefix_mF88F8AC4CAF17786D4AC7403EA00343CCFE5004B (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB94C40AE44D0691F7FCE589508D96B9A91E098C2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string OldPrefix => $"unity.services.authentication.";
		return _stringLiteralB94C40AE44D0691F7FCE589508D96B9A91E098C2;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationCache::.ctor(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Authentication.IProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCache__ctor_mA3284BC025D6C4BD635EE4864ED05324E7CBC517 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, RuntimeObject* ___cloudProjectId0, RuntimeObject* ___profile1, const RuntimeMethod* method) 
{
	{
		// public AuthenticationCache(ICloudProjectId cloudProjectId, IProfile profile)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_CloudProjectId = cloudProjectId;
		RuntimeObject* L_0 = ___cloudProjectId0;
		__this->___m_CloudProjectId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CloudProjectId_0), (void*)L_0);
		// m_Profile = profile;
		RuntimeObject* L_1 = ___profile1;
		__this->___m_Profile_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Profile_1), (void*)L_1);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Authentication.AuthenticationCache::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationCache_HasKey_m6B560D471F2475F26DC211E4B78010392A0D4AE9 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// return PlayerPrefs.HasKey(GetKey(key));
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = AuthenticationCache_GetKey_m6F463861D10E9CF5ACE173652DB24C1CC2A59CB3(__this, L_0, NULL);
		bool L_2;
		L_2 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_1, NULL);
		return L_2;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationCache::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCache_DeleteKey_m7690A1B73670218BE20FE0665835D749853C5043 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.DeleteKey(GetKey(key));
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = AuthenticationCache_GetKey_m6F463861D10E9CF5ACE173652DB24C1CC2A59CB3(__this, L_0, NULL);
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(L_1, NULL);
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_GetString_m01449E6CF5E098A7315B4DDF1F0D76372419EEEE (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// return PlayerPrefs.GetString(GetKey(key));
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = AuthenticationCache_GetKey_m6F463861D10E9CF5ACE173652DB24C1CC2A59CB3(__this, L_0, NULL);
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_1, NULL);
		return L_2;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationCache::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCache_SetString_mC2550FC6CF03CD747E1893DDBD0086878FE60B74 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.SetString(GetKey(key), value);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = AuthenticationCache_GetKey_m6F463861D10E9CF5ACE173652DB24C1CC2A59CB3(__this, L_0, NULL);
		String_t* L_2 = ___value1;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_1, L_2, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationCache::Migrate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCache_Migrate_mDD710013603020A02FDBC9D77460D8C433B6243B (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// var oldKey = GetOldKey(key);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = AuthenticationCache_GetOldKey_m7895B910BC29C8A7C1B8D4EDF735490D43092A09(__this, L_0, NULL);
		V_0 = L_1;
		// if (PlayerPrefs.HasKey(oldKey))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_2, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// var newKey = GetKey(key);
		String_t* L_4 = ___key0;
		String_t* L_5;
		L_5 = AuthenticationCache_GetKey_m6F463861D10E9CF5ACE173652DB24C1CC2A59CB3(__this, L_4, NULL);
		// PlayerPrefs.SetString(newKey, PlayerPrefs.GetString(oldKey));
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_6, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_5, L_7, NULL);
		// PlayerPrefs.DeleteKey(oldKey);
		String_t* L_8 = V_0;
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(L_8, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_GetKey_m6F463861D10E9CF5ACE173652DB24C1CC2A59CB3 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// return Prefix + key;
		String_t* L_0;
		L_0 = AuthenticationCache_get_Prefix_mDDC3F137BB4B91509ADC0A923F420FBF98BC1553(__this, NULL);
		String_t* L_1 = ___key0;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::GetOldKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_GetOldKey_m7895B910BC29C8A7C1B8D4EDF735490D43092A09 (AuthenticationCache_t7CCC7E19B7D51A43B9D88AA6268791EB4A8BEA5C* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// return OldPrefix + key;
		String_t* L_0;
		L_0 = AuthenticationCache_get_OldPrefix_mF88F8AC4CAF17786D4AC7403EA00343CCFE5004B(__this, NULL);
		String_t* L_1 = ___key0;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		return L_2;
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
// System.DateTime Unity.Services.Authentication.DateTimeWrapper::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeWrapper_get_UtcNow_mE7AE211FE9694E9672B52FDC6D447EAB353A91DD (DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DateTime UtcNow => DateTime.UtcNow;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		return L_0;
	}
}
// System.Double Unity.Services.Authentication.DateTimeWrapper::SecondsSinceUnixEpoch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DateTimeWrapper_SecondsSinceUnixEpoch_mC8191C437B92CAD2735776346953359F922C1774 (DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Math.Round((DateTime.UtcNow - k_UnixEpoch).TotalSeconds);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA_il2cpp_TypeInfo_var))->___k_UnixEpoch_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = bankers_round(L_3);
		return L_4;
	}
}
// System.Void Unity.Services.Authentication.DateTimeWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeWrapper__ctor_m37E5923227D3D90D57C8F5A5DB8B0D4E23F127FE (DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.DateTimeWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeWrapper__cctor_mE1EAEE812E212ECE1FA02F3D76E091DF63F8B6B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly DateTime k_UnixEpoch = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeWrapper_tA031CC154B5C022B8002580A7B501952A60ECEDA_il2cpp_TypeInfo_var))->___k_UnixEpoch_0 = L_0;
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
// System.Void Unity.Services.Authentication.JwtDecoder::.ctor(Unity.Services.Authentication.IDateTimeWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JwtDecoder__ctor_m3CD5BE203E408B34A7133383E858E37F5C288375 (JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* __this, RuntimeObject* ___dateTime0, const RuntimeMethod* method) 
{
	{
		// internal JwtDecoder(IDateTimeWrapper dateTime)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_DateTime = dateTime;
		RuntimeObject* L_0 = ___dateTime0;
		__this->___m_DateTime_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DateTime_2), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Authentication.JwtDecoder::VerifySignature(System.String,System.String,System.String,Unity.Services.Authentication.WellKnownKey[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JwtDecoder_VerifySignature_mD44DF0FC0AAA316F6FC01EE5BEC23160ADAFA835 (JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* __this, String_t* ___header0, String_t* ___keyId1, String_t* ___payload2, WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* ___keys3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98DC5CC9FB1CF6E407FEE201642AC8D774BB85CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA77D5693A0F444FC4C8236C0AEED70B164CFF58);
		s_Il2CppMethodInitialized = true;
	}
	WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* V_0 = NULL;
	bool G_B3_0 = false;
	bool G_B2_0 = false;
	{
		// var key = GetKey(keyId, keys);
		String_t* L_0 = ___keyId1;
		WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* L_1 = ___keys3;
		WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* L_2;
		L_2 = JwtDecoder_GetKey_mBBEF6B8F9FB03D659E20760D3F12E185DA4EFAE5(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// if (key != null)
		WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// var verified = Verify(header, payload, signature, Base64UrlDecode(key.N), Base64UrlDecode(key.E));
		String_t* L_4 = ___header0;
		String_t* L_5 = ___payload2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___signature4;
		WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___N_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = JwtDecoder_Base64UrlDecode_m4FAC88A6795B97AF79655B79A4C8BF70242DD7B9(__this, L_8, NULL);
		WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___E_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = JwtDecoder_Base64UrlDecode_m4FAC88A6795B97AF79655B79A4C8BF70242DD7B9(__this, L_11, NULL);
		bool L_13;
		L_13 = JwtDecoder_Verify_mC246A9384C12081B0A751AC932DC0203B7999CF9(__this, L_4, L_5, L_6, L_9, L_12, NULL);
		// if (!verified)
		bool L_14 = L_13;
		G_B2_0 = L_14;
		if (L_14)
		{
			G_B3_0 = L_14;
			goto IL_003c;
		}
	}
	{
		// Logger.LogError("Signature failed verification!");
		Logger_LogError_m698CECF45EB6570E4C933F9EE19A5D85A9E09B34(_stringLiteralAA77D5693A0F444FC4C8236C0AEED70B164CFF58, NULL);
		G_B3_0 = G_B2_0;
	}

IL_003c:
	{
		// return verified;
		return G_B3_0;
	}

IL_003d:
	{
		// Logger.LogError("Unable to verify signature, does not use a well-known key ID.");
		Logger_LogError_m698CECF45EB6570E4C933F9EE19A5D85A9E09B34(_stringLiteral98DC5CC9FB1CF6E407FEE201642AC8D774BB85CB, NULL);
		// return false;
		return (bool)0;
	}
}
// Unity.Services.Authentication.WellKnownKey Unity.Services.Authentication.JwtDecoder::GetKey(System.String,Unity.Services.Authentication.WellKnownKey[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* JwtDecoder_GetKey_mBBEF6B8F9FB03D659E20760D3F12E185DA4EFAE5 (JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* __this, String_t* ___keyId0, WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* ___keys1, const RuntimeMethod* method) 
{
	WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* V_0 = NULL;
	int32_t V_1 = 0;
	WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* V_2 = NULL;
	{
		// foreach (var key in keys)
		WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* L_0 = ___keys1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001e;
	}

IL_0006:
	{
		// foreach (var key in keys)
		WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (key.KeyId == keyId)
		WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = L_5->___KeyId_2;
		String_t* L_7 = ___keyId0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_001a;
		}
	}
	{
		// return key;
		WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC* L_9 = V_2;
		return L_9;
	}

IL_001a:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001e:
	{
		// foreach (var key in keys)
		int32_t L_11 = V_1;
		WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (WellKnownKey_t4739987F76D90AC9957C0D114FF64835DB9F25FC*)NULL;
	}
}
// System.Boolean Unity.Services.Authentication.JwtDecoder::Verify(System.String,System.String,System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JwtDecoder_Verify_mC246A9384C12081B0A751AC932DC0203B7999CF9 (JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* __this, String_t* ___header0, String_t* ___payload1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___modulus3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___exponent4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSAPKCS1SignatureDeformatter_t3B1E70B8DA929C184C7599B50FB8DD4BF5CA7CB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* V_0 = NULL;
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	bool V_4 = false;
	{
		// using (var rsa = new RSACryptoServiceProvider())
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_0 = (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)il2cpp_codegen_object_new(RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RSACryptoServiceProvider__ctor_mE4BC404364B89F41C863EC3860ED4B9D7DD7A06F(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				{
					RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0079;
					}
				}
				{
					RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// rsa.ImportParameters(new RSAParameters
				// {
				//     Modulus = modulus,
				//     Exponent = exponent
				// });
				RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_3 = V_0;
				il2cpp_codegen_initobj((&V_1), sizeof(RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___modulus3;
				(&V_1)->___Modulus_1 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Modulus_1), (void*)L_4);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___exponent4;
				(&V_1)->___Exponent_0 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Exponent_0), (void*)L_5);
				RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_6 = V_1;
				NullCheck(L_3);
				VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(12 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_3, L_6);
				// using (var sha256 = SHA256.Create())
				SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_7;
				L_7 = SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC(NULL);
				V_2 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0066_1:
					{// begin finally (depth: 2)
						{
							SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_8 = V_2;
							if (!L_8)
							{
								goto IL_006f_1;
							}
						}
						{
							SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_9 = V_2;
							NullCheck(L_9);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
						}

IL_006f_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// var hash = sha256.ComputeHash(Encoding.UTF8.GetBytes(header + '.' + payload));
					SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_10 = V_2;
					Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11;
					L_11 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
					String_t* L_12 = ___header0;
					String_t* L_13 = ___payload1;
					String_t* L_14;
					L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_12, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_13, NULL);
					NullCheck(L_11);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
					L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, L_14);
					NullCheck(L_10);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
					L_16 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_10, L_15, NULL);
					V_3 = L_16;
					// var rsaDeformatter = new RSAPKCS1SignatureDeformatter(rsa);
					RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_17 = V_0;
					RSAPKCS1SignatureDeformatter_t3B1E70B8DA929C184C7599B50FB8DD4BF5CA7CB3* L_18 = (RSAPKCS1SignatureDeformatter_t3B1E70B8DA929C184C7599B50FB8DD4BF5CA7CB3*)il2cpp_codegen_object_new(RSAPKCS1SignatureDeformatter_t3B1E70B8DA929C184C7599B50FB8DD4BF5CA7CB3_il2cpp_TypeInfo_var);
					NullCheck(L_18);
					RSAPKCS1SignatureDeformatter__ctor_m791E4894429FB7772E9A930C4A8B10C47A07293F(L_18, L_17, NULL);
					// rsaDeformatter.SetHashAlgorithm("SHA256");
					RSAPKCS1SignatureDeformatter_t3B1E70B8DA929C184C7599B50FB8DD4BF5CA7CB3* L_19 = L_18;
					NullCheck(L_19);
					VirtualActionInvoker1< String_t* >::Invoke(5 /* System.Void System.Security.Cryptography.AsymmetricSignatureDeformatter::SetHashAlgorithm(System.String) */, L_19, _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
					// return rsaDeformatter.VerifySignature(hash, signature);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___signature2;
					NullCheck(L_19);
					bool L_22;
					L_22 = VirtualFuncInvoker2< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Boolean System.Security.Cryptography.AsymmetricSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_19, L_20, L_21);
					V_4 = L_22;
					goto IL_007a;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// }
		bool L_23 = V_4;
		return L_23;
	}
}
// System.Byte[] Unity.Services.Authentication.JwtDecoder::Base64UrlDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* JwtDecoder_Base64UrlDecode_m4FAC88A6795B97AF79655B79A4C8BF70242DD7B9 (JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484* __this, String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var output = input;
		String_t* L_0 = ___input0;
		V_0 = L_0;
		// output = output.Replace('-', '+'); // 62nd char of encoding
		String_t* L_1 = V_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_1, ((int32_t)45), ((int32_t)43), NULL);
		V_0 = L_2;
		// output = output.Replace('_', '/'); // 63rd char of encoding
		String_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_3, ((int32_t)95), ((int32_t)47), NULL);
		V_0 = L_4;
		// var mod4 = input.Length % 4;
		String_t* L_5 = ___input0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_1 = ((int32_t)(L_6%4));
		// if (mod4 > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// output += new string('=', 4 - mod4);
		String_t* L_8 = V_0;
		int32_t L_9 = V_1;
		String_t* L_10;
		L_10 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)61), ((int32_t)il2cpp_codegen_subtract(4, L_9)), NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, L_10, NULL);
		V_0 = L_11;
	}

IL_0036:
	{
		// var converted = Convert.FromBase64String(output); // Standard base64 decoder
		String_t* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_12, NULL);
		// return converted;
		return L_13;
	}
}
// System.Void Unity.Services.Authentication.JwtDecoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JwtDecoder__cctor_mB3966E27A02C595EC3650919A62426EACF89C747 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly DateTime k_UnixEpoch = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484_StaticFields*)il2cpp_codegen_static_fields_for(JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484_il2cpp_TypeInfo_var))->___k_UnixEpoch_0 = L_0;
		// static readonly char[] k_JwtSeparator = { '.' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		((JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484_StaticFields*)il2cpp_codegen_static_fields_for(JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484_il2cpp_TypeInfo_var))->___k_JwtSeparator_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484_StaticFields*)il2cpp_codegen_static_fields_for(JwtDecoder_tE0820E3E73ED0F5A22EEF7BB9DFA4EEF0C724484_il2cpp_TypeInfo_var))->___k_JwtSeparator_1), (void*)L_2);
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
// System.Void Unity.Services.Authentication.Logger::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Log_m8A66EADCC18729652C2186FF04B0F0580972BC00 (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void Log(object message) => Debug.unityLogger.Log(k_Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.ILogger::Log(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922, L_1);
		return;
	}
}
// System.Void Unity.Services.Authentication.Logger::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogWarning_mE0A74606514DA618868A2737BAD77E6DF440F00E (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogWarning(object message) => Debug.unityLogger.LogWarning(k_Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(6 /* System.Void UnityEngine.ILogger::LogWarning(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922, L_1);
		return;
	}
}
// System.Void Unity.Services.Authentication.Logger::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogError_m698CECF45EB6570E4C933F9EE19A5D85A9E09B34 (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogError(object message) => Debug.unityLogger.LogError(k_Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(7 /* System.Void UnityEngine.ILogger::LogError(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922, L_1);
		return;
	}
}
// System.Void Unity.Services.Authentication.Logger::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogException_m0AAD12A69AE2B31546E10F1770E2A0913EB151CA (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogException(Exception exception) => Debug.unityLogger.Log(LogType.Exception, k_Tag, exception);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		Exception_t* L_1 = ___exception0;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, String_t*, RuntimeObject* >::Invoke(4 /* System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, 4, _stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922, L_1);
		return;
	}
}
// System.Void Unity.Services.Authentication.Logger::LogAssertion(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogAssertion_m15185E92BAFFE42BE97DD08600498FDE65CC5138 (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogAssertion(object message) => Debug.unityLogger.Log(LogType.Assert, k_Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, String_t*, RuntimeObject* >::Invoke(4 /* System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, 1, _stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922, L_1);
		return;
	}
}
// System.Void Unity.Services.Authentication.Logger::LogVerbose(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogVerbose_m20AC067B645553CD16424E4387BEBEBC06C628BD (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogVerbose(object message) => Debug.unityLogger.Log(k_Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.ILogger::Log(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922, L_1);
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
// System.Void Unity.Services.Authentication.Utilities.Compatibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compatibility__ctor_m1B314B7EFD08673EC815F2BC72F56E487C74C1F4 (Compatibility_tFA1E59ED80B83C1E7B88589F69BBA1039539E520* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Services.Authentication.Models.Compatibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compatibility__ctor_mF28982837D7B46EB70975131530D994983228708 (Compatibility_tD9AEEA2924AC3C375D9E8712E711C8FDF85AC04E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AuthenticationServiceInternal_get_State_m01234DE9BB769F6C48080DDF89A17CAC3AD4DD30_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal AuthenticationState State { get; set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* AuthenticationServiceInternal_get_SessionTokenComponent_m9C8B2E8C54AA80652A0D0A33B44C904823E95046_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal SessionTokenComponent SessionTokenComponent { get; }
		SessionTokenComponent_t72BBF0BD2143D54838EF154734581124E40AC612* L_0 = __this->___U3CSessionTokenComponentU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* AuthenticationServiceInternal_get_AccessTokenComponent_mA3669DE89749DFCFA04AE2A4DB47505AD55D248E_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal AccessTokenComponent AccessTokenComponent { get; }
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_0 = __this->___U3CAccessTokenComponentU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessTokenComponent_get_AccessToken_m70FC319ED7E39A53D5C17E775FD052D466F29ED8_inline (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, const RuntimeMethod* method) 
{
	{
		// public string AccessToken { get; internal set; }
		String_t* L_0 = __this->___U3CAccessTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* AuthenticationServiceInternal_get_PlayerIdComponent_mCB05A130C555F6DF00E4CBCD63A86DAACF9DF743_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal PlayerIdComponent PlayerIdComponent { get; }
		PlayerIdComponent_tFE65166B068798263264F18955AE2990D4274D19* L_0 = __this->___U3CPlayerIdComponentU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_NetworkClient_mAB5EE732963B22FE8D779546E8D7F00300BD6937_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// internal IAuthenticationNetworkClient NetworkClient { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CNetworkClientU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNetworkClientU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_State_mBE3362F5E6AAA06DA3D0D9CFA6CE38C5A5991FA1_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal AuthenticationState State { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SignInOptions_get_CreateAccount_m487DE1145466E4820534680E55CD209335908E02_inline (SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* __this, const RuntimeMethod* method) 
{
	{
		// public bool CreateAccount { get; set; }
		bool L_0 = __this->___U3CCreateAccountU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_NetworkClient_m37ED3928BBFE26F454787D617CE4FB07419A7A8A_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal IAuthenticationNetworkClient NetworkClient { get; set; }
		RuntimeObject* L_0 = __this->___U3CNetworkClientU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LinkOptions_get_ForceLink_m7091635AF7588667BF843D8AAFFBBDE3B4D3426F_inline (LinkOptions_t0487FC77E3D744F9BDC1B7CD7929EFAF8ED68B72* __this, const RuntimeMethod* method) 
{
	{
		// public bool ForceLink { get; set; }
		bool L_0 = __this->___U3CForceLinkU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_PlayerInfo_m7A68E82BD9D316E342DF5E3AECAF108EDD238EF4_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* ___value0, const RuntimeMethod* method) 
{
	{
		// public PlayerInfo PlayerInfo { get; internal set; }
		PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_0 = ___value0;
		__this->___U3CPlayerInfoU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerInfoU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* AuthenticationServiceInternal_get_WellKnownKeysComponent_m7E533682E0EAD28DE9C952619AC74462C9C2CAAB_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal WellKnownKeysComponent WellKnownKeysComponent { get; }
		WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* L_0 = __this->___U3CWellKnownKeysComponentU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* WellKnownKeysComponent_get_Keys_mE745732161F364314842C6DBC5B2D79A4D98656F_inline (WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* __this, const RuntimeMethod* method) 
{
	{
		// public WellKnownKey[] Keys { get; internal set; }
		WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* L_0 = __this->___U3CKeysU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessTokenComponent_set_AccessToken_m63F73183C53D3469EC2E8C6FD1862976D52916E8_inline (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string AccessToken { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CAccessTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* AuthenticationServiceInternal_get_EnvironmentIdComponent_m195E0AFCC08E96FB3FB53F3258BF6FBB3B75036A_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal EnvironmentIdComponent EnvironmentIdComponent { get; }
		EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* L_0 = __this->___U3CEnvironmentIdComponentU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnvironmentIdComponent_set_EnvironmentId_m530BC338835B82D9D4401F7FF7E23F36321F4808_inline (EnvironmentIdComponent_t1123D74DA56FF56017A1E9F52B11F6FBE47CF9C8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string EnvironmentId { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CEnvironmentIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnvironmentIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_Settings_mC9B9A3983876B35F9926EDE4132C902A6B3B9968_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal IAuthenticationSettings Settings { get; }
		RuntimeObject* L_0 = __this->___U3CSettingsU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessTokenComponent_set_ExpiryTime_mCC7F031ADF1682401F64DF064612034E37A503B6_inline (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___value0, const RuntimeMethod* method) 
{
	{
		// public DateTime? ExpiryTime { get; internal set; }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = ___value0;
		__this->___U3CExpiryTimeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC AccessTokenComponent_get_ExpiryTime_mD432CAD7F2F305A36AA717226C651F4A67F420A6_inline (AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? ExpiryTime { get; internal set; }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = __this->___U3CExpiryTimeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_RefreshActionId_mBF2A7072312F301BBC125EDFD4FDBF6A55FB7460_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___value0, const RuntimeMethod* method) 
{
	{
		// internal long? RefreshActionId { get; set; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = ___value0;
		__this->___U3CRefreshActionIdU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_ExpirationActionId_m99D9F7A20AF618C1C9E9A35F879EA553648CD7D8_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___value0, const RuntimeMethod* method) 
{
	{
		// internal long? ExpirationActionId { get; set; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = ___value0;
		__this->___U3CExpirationActionIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 AuthenticationServiceInternal_get_RefreshActionId_mE26972CCF62B936620DFDD885C954E1307AACACC_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal long? RefreshActionId { get; set; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->___U3CRefreshActionIdU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 AuthenticationServiceInternal_get_ExpirationActionId_mBF3F9F53133B98D62D753B9CF11D561CC7809519_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// internal long? ExpirationActionId { get; set; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->___U3CExpirationActionIdU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t WebRequestException_get_ResponseCode_mD02CB7727ACF1A6EA570F1DDE88E544D54734F93_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; private set; }
		int64_t L_0 = __this->___U3CResponseCodeU3Ek__BackingField_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRequestException_get_NetworkError_m9819D76C20F277A2C1867EC658AAFBC8451CB39E_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, const RuntimeMethod* method) 
{
	{
		// public bool NetworkError { get; private set; }
		bool L_0 = __this->___U3CNetworkErrorU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* AuthenticationServiceInternal_get_PlayerInfo_m8B26511EDAA52A7C50EE4EFEBB5C31D6E904985A_inline (AuthenticationServiceInternal_t900B889D56EFB4844BF3FE45F813B391B771CC5B* __this, const RuntimeMethod* method) 
{
	{
		// public PlayerInfo PlayerInfo { get; internal set; }
		PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* L_0 = __this->___U3CPlayerInfoU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WellKnownKeysComponent_set_Keys_mD3986F1B3657510DB66DC2063261248E8A289621_inline (WellKnownKeysComponent_t8A8295D6FBEC429F421479E04A85009C3C5A32DB* __this, WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* ___value0, const RuntimeMethod* method) 
{
	{
		// public WellKnownKey[] Keys { get; internal set; }
		WellKnownKeyU5BU5D_t4CEE41F4A828825C6AE6EE28483D04B509A7C273* L_0 = ___value0;
		__this->___U3CKeysU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeysU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationService_set_Instance_mF6E5CECFA4F9F11AD6628770749F28B73904F1F3_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal set => s_Instance = value;
		RuntimeObject* L_0 = ___value0;
		((AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_il2cpp_TypeInfo_var))->___s_Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationService_tAE0E8AD3C0C0EB7C7450966040B0F29CF566CE34_il2cpp_TypeInfo_var))->___s_Instance_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* PlayerInfo_get_Identities_m8C89A941C76178DFECACF3C3D64219DC2AFA1F35_inline (PlayerInfo_t7088F0AC0EC49F6D0BCFC66F8FFBCB54D2575BEF* __this, const RuntimeMethod* method) 
{
	{
		// public List<Identity> Identities { get; }
		List_1_t5283FF4B14C4EA50D0B0FAEE4D822ACF2C56A5DA* L_0 = __this->___U3CIdentitiesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenRefreshBuffer_m96B86C124804197F12B701796CDCE4E9D0443CEE_inline (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int AccessTokenRefreshBuffer { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CAccessTokenRefreshBufferU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenExpiryBuffer_m14A6389F6D9EDCE2FCD222C890ECC7F88861A64A_inline (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int AccessTokenExpiryBuffer { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CAccessTokenExpiryBufferU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_RefreshAttemptFrequency_mBAF4610491BF821F84D042A0007A28460623B0D2_inline (AuthenticationSettings_tB53A6B277FAD097C362FC0844D152B33CAACE947* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int RefreshAttemptFrequency { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CRefreshAttemptFrequencyU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* AuthenticationNetworkClient_get_AccessTokenComponent_mF10749E4B898F6824B849C31705952DC23C64D86_inline (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	{
		// internal AccessTokenComponent AccessTokenComponent { get; }
		AccessTokenComponent_tC4B5154C4B212D8B1169CD8D29916E29B3D961C2* L_0 = __this->___U3CAccessTokenComponentU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_EnvironmentComponent_m6B9DEC5E341192134461AFD8BBABA9AB17A7FB26_inline (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	{
		// internal IEnvironments EnvironmentComponent { get; }
		RuntimeObject* L_0 = __this->___U3CEnvironmentComponentU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_CloudProjectIdComponent_mCAE38C64A9FF5A052B1DB965CDD698AECC90C03F_inline (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	{
		// internal ICloudProjectId CloudProjectIdComponent { get; }
		RuntimeObject* L_0 = __this->___U3CCloudProjectIdComponentU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_NetworkHandler_mE8F20F2BF21EDA4B878917EACD2A3A736DBD8571_inline (AuthenticationNetworkClient_t24A4BD9F033431B7CC64DB81938AF02BE4CE6EE8* __this, const RuntimeMethod* method) 
{
	{
		// internal INetworkHandler NetworkHandler { get; }
		RuntimeObject* L_0 = __this->___U3CNetworkHandlerU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NetworkHandler_get_Configuration_m855B12C42C43AC5FEEDCD2536822705243B7B5A4_inline (NetworkHandler_t5FCDFCEC4FDA9DAE3B2DC1B66BFC82D3689D3360* __this, const RuntimeMethod* method) 
{
	{
		// INetworkConfiguration Configuration { get; }
		RuntimeObject* L_0 = __this->___U3CConfigurationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WebRequest_get_Configuration_m17287B94E87EE12E6579C0D303BE14DD94639C5E_inline (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, const RuntimeMethod* method) 
{
	{
		// internal INetworkConfiguration Configuration { get; }
		RuntimeObject* L_0 = __this->___U3CConfigurationU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRequest_get_Retries_m54A5EACF6AA10F0FC5E72D5E21068C894943BB4A_inline (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, const RuntimeMethod* method) 
{
	{
		// internal int Retries { get; private set; }
		int32_t L_0 = __this->___U3CRetriesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequest_set_Retries_mCFCC8E23AAEAD4F2836F22F645DD14F6A7AEE31A_inline (WebRequest_tE5622473581945D112800D97E1EB0E04D900D707* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal int Retries { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CRetriesU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_NetworkError_m2C115303197F2E683B07471C5A2883AE3B03F603_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool NetworkError { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CNetworkErrorU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ServerError_m25C30AEFD94AA6B869D353E784AC51E740A924E5_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ServerError { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CServerErrorU3Ek__BackingField_20 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_DeserializationError_mA826E42FBC5FD3D20CBECCA8A3299E5858688D4E_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool DeserializationError { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CDeserializationErrorU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseCode_mD5CBAF8670FE2515209045C9677CE5150DD380D7_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; private set; }
		int64_t L_0 = ___value0;
		__this->___U3CResponseCodeU3Ek__BackingField_21 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseHeaders_m413A013D40F846EE08E7959D4C226D571E48F03F_inline (WebRequestException_tC89463E8DA261727023A442077F4B18678240BDF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IDictionary<string, string> ResponseHeaders { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CResponseHeadersU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseHeadersU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))->___s_Logger_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mF6BE8B768C3DA33BE3281D8F143C0FB02E720366_gshared_inline (Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
