#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.UInt32 Unity.Networking.QoS.InternalQosResult::get_AverageLatencyMs()
extern void InternalQosResult_get_AverageLatencyMs_mC4DD63FA694AB15B32ECE7B95C391BF79250708B (void);
// 0x00000002 System.Single Unity.Networking.QoS.InternalQosResult::get_PacketLoss()
extern void InternalQosResult_get_PacketLoss_mAE93BDA8F14001F7D8B9B6B07D7BF5A6492F0E7A (void);
// 0x00000003 System.Void Unity.Networking.QoS.InternalQosResult::AddAggregateLatency(System.UInt32)
extern void InternalQosResult_AddAggregateLatency_mF4F807BAA262DEAE0E1B5A741C4D4F3B87AD363F (void);
// 0x00000004 Unity.Jobs.JobHandle Unity.Networking.QoS.QosJob::Schedule(Unity.Jobs.JobHandle)
// 0x00000005 Unity.Collections.NativeArray`1<Unity.Networking.QoS.InternalQosResult> Unity.Networking.QoS.QosJob::get_QosResults()
extern void QosJob_get_QosResults_m99D294F773A497B20A7B607B3A5867AB1DD85CD6 (void);
// 0x00000006 System.Void Unity.Networking.QoS.QosJob::.ctor(System.Collections.Generic.IList`1<Unity.Networking.QoS.UcgQosServer>,System.String,System.UInt32,System.UInt64,System.UInt64,System.UInt32,System.UInt32,System.UInt32)
extern void QosJob__ctor_mC7757F9FE843176A16749879A99C777DD191D4BB (void);
// 0x00000007 System.Void Unity.Networking.QoS.QosJob::Dispose()
extern void QosJob_Dispose_m023B42665979401AB7384B2BAB21B090BDDD21DF (void);
// 0x00000008 System.Void Unity.Networking.QoS.QosJob::Execute()
extern void QosJob_Execute_m66569856598381E3B9D9461F905CD7DD555819C6 (void);
// 0x00000009 System.Void Unity.Networking.QoS.QosJob::ProcessServers(Unity.Baselib.LowLevel.Binding/Baselib_Socket_Handle)
extern void QosJob_ProcessServers_m002469312F12627E8C8179045EF58AAEFC2767B6 (void);
// 0x0000000A System.Void Unity.Networking.QoS.QosJob::ProcessServer(Unity.Networking.QoS.QosJob/InternalQosServer,Unity.Baselib.LowLevel.Binding/Baselib_Socket_Handle)
extern void QosJob_ProcessServer_m193D982E9EBF657DB785605C7ACFDE9FC1BFB121 (void);
// 0x0000000B Unity.Baselib.LowLevel.Binding/Baselib_ErrorCode Unity.Networking.QoS.QosJob::SendQosRequests(Unity.Networking.QoS.QosJob/InternalQosServer,Unity.Baselib.LowLevel.Binding/Baselib_Socket_Handle,Unity.Networking.QoS.InternalQosResult&)
extern void QosJob_SendQosRequests_mE07A62D70704ABCBBFFD5C5B0A9E9D2075DC6A1E (void);
// 0x0000000C System.Void Unity.Networking.QoS.QosJob::StoreServer(Unity.Networking.QoS.QosJob/InternalQosServer)
extern void QosJob_StoreServer_m10EC014D95822A081040752A7F218E8C3A511A09 (void);
// 0x0000000D System.Void Unity.Networking.QoS.QosJob::StoreResult(System.Int32,Unity.Networking.QoS.InternalQosResult)
extern void QosJob_StoreResult_m4A593D9ECAFD18243069F8F1E01DD5362F5CCFC5 (void);
// 0x0000000E System.Void Unity.Networking.QoS.QosJob::RecvQosResponsesTimed(Unity.Networking.QoS.NetworkEndPoint,System.DateTime,Unity.Baselib.LowLevel.Binding/Baselib_Socket_Handle,System.Boolean)
extern void QosJob_RecvQosResponsesTimed_m05465557D4349CA3EB44FFFF643B1C32717301F6 (void);
// 0x0000000F System.Void Unity.Networking.QoS.QosJob::RecvQosResponses(Unity.Networking.QoS.NetworkEndPoint,System.DateTime,Unity.Baselib.LowLevel.Binding/Baselib_Socket_Handle,System.Boolean)
extern void QosJob_RecvQosResponses_mF7D285B242196414A29B2EB92995C41D5EF0E9CC (void);
// 0x00000010 System.String Unity.Networking.QoS.QosJob::EnableReceiveWait()
extern void QosJob_EnableReceiveWait_m0411682DA5665E33783F6DE96212DEB4F369FC43 (void);
// 0x00000011 System.Int32 Unity.Networking.QoS.QosJob::LookupResult(Unity.Networking.QoS.NetworkEndPoint,Unity.Networking.QoS.QosResponse,Unity.Networking.QoS.InternalQosResult&)
extern void QosJob_LookupResult_mF78311CDB65FB597D261547BD872FBBB99D0D43E (void);
// 0x00000012 System.ValueTuple`2<Unity.Baselib.LowLevel.Binding/Baselib_Socket_Handle,Unity.Baselib.LowLevel.Binding/Baselib_ErrorCode> Unity.Networking.QoS.QosJob::CreateAndBindSocket()
extern void QosJob_CreateAndBindSocket_mC2628791199CB10A3C0FCE263504FE8E9E552AD4 (void);
// 0x00000013 System.Void Unity.Networking.QoS.QosJob/InternalQosServer::.ctor(Unity.Networking.QoS.NetworkEndPoint,System.DateTime,System.Int32)
extern void InternalQosServer__ctor_mDFFD17B79B32982F24BBF7814A2238B3A8DC1AA2 (void);
// 0x00000014 System.Int32 Unity.Networking.QoS.QosJob/InternalQosServer::get_FirstIdx()
extern void InternalQosServer_get_FirstIdx_mE1E26F2B9C43302D4D3A669677A32BB4D2CE0478 (void);
// 0x00000015 System.Void Unity.Networking.QoS.QosJob/InternalQosServer::set_FirstIdx(System.Int32)
extern void InternalQosServer_set_FirstIdx_mEE8FDA205B7B8B2DE6E8C6F1D0BFF888C1434A28 (void);
// 0x00000016 System.UInt16 Unity.Networking.QoS.QosJob/InternalQosServer::get_RequestIdentifier()
extern void InternalQosServer_get_RequestIdentifier_m5BB7DCEB91EAD25DBD1733A74B42F4B490CCA2D5 (void);
// 0x00000017 System.Void Unity.Networking.QoS.QosJob/InternalQosServer::set_RequestIdentifier(System.UInt16)
extern void InternalQosServer_set_RequestIdentifier_mAA9EF4C5C34AFB4EA335CBF999D2FBB46BD15E1F (void);
// 0x00000018 System.Boolean Unity.Networking.QoS.QosJob/InternalQosServer::get_Duplicate()
extern void InternalQosServer_get_Duplicate_mC9F0B30BEC3CEC496735613D59181989F13DEF2B (void);
// 0x00000019 System.String Unity.Networking.QoS.QosJob/InternalQosServer::get_Address()
extern void InternalQosServer_get_Address_mAF7047289348E24CA18A4202DA79D49C2E2298E4 (void);
// 0x0000001A System.UInt16 Unity.Networking.QoS.NetworkEndPoint::get_Port()
extern void NetworkEndPoint_get_Port_m251B69FEFF5FC2CF22A30DB9AA40348F340408CB (void);
// 0x0000001B Unity.Networking.QoS.NetworkFamily Unity.Networking.QoS.NetworkEndPoint::get_Family()
extern void NetworkEndPoint_get_Family_mD35537952F0BCF8578F516DC06DC1D3B225F724F (void);
// 0x0000001C System.String Unity.Networking.QoS.NetworkEndPoint::get_Address()
extern void NetworkEndPoint_get_Address_m1EB1D2DAF46FB52253E311B8423DF10FF8F03FBD (void);
// 0x0000001D System.Boolean Unity.Networking.QoS.NetworkEndPoint::get_IsValid()
extern void NetworkEndPoint_get_IsValid_m56A53E05D4C28A38048155E597009964FBAE2D94 (void);
// 0x0000001E System.Boolean Unity.Networking.QoS.NetworkEndPoint::TryParse(System.String,System.UInt16,Unity.Networking.QoS.NetworkEndPoint&,Unity.Networking.QoS.NetworkFamily)
extern void NetworkEndPoint_TryParse_m290522A4D3F16227CB050DAAC84B0F7F9776E873 (void);
// 0x0000001F System.String Unity.Networking.QoS.NetworkEndPoint::AddressAsString()
extern void NetworkEndPoint_AddressAsString_mBF7B5153F6570D362AB7672C08CB24369B78D0E3 (void);
// 0x00000020 Unity.Networking.QoS.NetworkFamily Unity.Networking.QoS.NetworkEndPoint::FromBaselibFamily(Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress_Family)
extern void NetworkEndPoint_FromBaselibFamily_mF9E814790BF6646253228590A2C5938141A99CA9 (void);
// 0x00000021 Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress_Family Unity.Networking.QoS.NetworkEndPoint::ToBaselibFamily(Unity.Networking.QoS.NetworkFamily)
extern void NetworkEndPoint_ToBaselibFamily_m0F7E8A742E96033C58E29C69FBC20E3C5849DBB4 (void);
// 0x00000022 System.Boolean Unity.Networking.QoS.QosHelper::WouldBlock(System.UInt64)
extern void QosHelper_WouldBlock_mF00EFCE5355BC0FB84B9707F2B79BB6BD614A12D (void);
// 0x00000023 System.Boolean Unity.Networking.QoS.QosHelper::ExpiredUtc(System.DateTime)
extern void QosHelper_ExpiredUtc_m78BBD5851F2AD5E38E8A7F369BC8B0A0F0241861 (void);
// 0x00000024 System.String Unity.Networking.QoS.QosHelper::Since(System.DateTime)
extern void QosHelper_Since_m21E114D7D7BF2EAE40D75BEF8A64262D7E644EBC (void);
// 0x00000025 System.Byte Unity.Networking.QoS.QosRequest::get_Magic()
extern void QosRequest_get_Magic_m6F6463246F68BE8FCDACAC075DC10B8C08F23439 (void);
// 0x00000026 System.Byte Unity.Networking.QoS.QosRequest::get_Version()
extern void QosRequest_get_Version_mC41475C20C86D26270BBA934AA806FCD8A910238 (void);
// 0x00000027 System.Byte Unity.Networking.QoS.QosRequest::get_FlowControl()
extern void QosRequest_get_FlowControl_m8B743B201483EC39C6F7E57579F36D841F276D03 (void);
// 0x00000028 System.Byte[] Unity.Networking.QoS.QosRequest::get_Title()
extern void QosRequest_get_Title_m9E68CBB84A55BD2B1E05F4943910C91A3ABE8236 (void);
// 0x00000029 System.Void Unity.Networking.QoS.QosRequest::set_Title(System.Byte[])
extern void QosRequest_set_Title_m835EE28AF9C6C4C8B30DE80EB01A61DFB27E52C2 (void);
// 0x0000002A System.Byte Unity.Networking.QoS.QosRequest::get_Sequence()
extern void QosRequest_get_Sequence_mB7BD623CF4FF0ADC6F36BBA4A5F83E5F4BB7892E (void);
// 0x0000002B System.Void Unity.Networking.QoS.QosRequest::set_Sequence(System.Byte)
extern void QosRequest_set_Sequence_m86A820A182DC7991C00DFB052A0130426633BEF7 (void);
// 0x0000002C System.UInt16 Unity.Networking.QoS.QosRequest::get_Identifier()
extern void QosRequest_get_Identifier_m5F1968614F882703F1BF258B7F920A4B43D8D062 (void);
// 0x0000002D System.Void Unity.Networking.QoS.QosRequest::set_Identifier(System.UInt16)
extern void QosRequest_set_Identifier_mBAA98E7B4ED9E4BC28CC5E29ADF69FE96C4987CF (void);
// 0x0000002E System.UInt64 Unity.Networking.QoS.QosRequest::get_Timestamp()
extern void QosRequest_get_Timestamp_mA705858832F72986788EAE43B411543CC563F5FD (void);
// 0x0000002F System.Void Unity.Networking.QoS.QosRequest::set_Timestamp(System.UInt64)
extern void QosRequest_set_Timestamp_m713A87D705A188F63BE58B901E51839C90214801 (void);
// 0x00000030 System.Int32 Unity.Networking.QoS.QosRequest::get_Length()
extern void QosRequest_get_Length_mAA37DB5D869FE6DDAEEA9F5AD47E9109445A6853 (void);
// 0x00000031 System.ValueTuple`2<System.UInt32,System.Int32> Unity.Networking.QoS.QosRequest::Send(System.IntPtr,Unity.Networking.QoS.NetworkEndPoint,System.DateTime)
extern void QosRequest_Send_m29F081B6A23999A4F122B039D6843AB14B6B4C0E (void);
// 0x00000032 Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer Unity.Networking.QoS.QosRequest::Serialize()
extern void QosRequest_Serialize_mD2D476A54E2B83C2352F0D2FEF95852C894075D6 (void);
// 0x00000033 System.Void Unity.Networking.QoS.QosRequest::.ctor()
extern void QosRequest__ctor_m6DC94F804A906E394B07229DB0F6673A1D615395 (void);
// 0x00000034 System.Byte Unity.Networking.QoS.QosResponse::get_Magic()
extern void QosResponse_get_Magic_m02CCA49C37D883E7F76ECCB379DF3FBC7A9212D2 (void);
// 0x00000035 System.Byte Unity.Networking.QoS.QosResponse::get_Version()
extern void QosResponse_get_Version_mA10B81D558000ED037D5C5B645E88FFD33A05747 (void);
// 0x00000036 System.Byte Unity.Networking.QoS.QosResponse::get_FlowControl()
extern void QosResponse_get_FlowControl_mF09A6641107229409D421F7222B2B0BD2EDD677C (void);
// 0x00000037 System.Byte Unity.Networking.QoS.QosResponse::get_Sequence()
extern void QosResponse_get_Sequence_m28659E53C16DABD437F1B3BFA4CDC600D86C6D5E (void);
// 0x00000038 System.UInt16 Unity.Networking.QoS.QosResponse::get_Identifier()
extern void QosResponse_get_Identifier_mCEB0525F3D9FF3579526AAFA0D7B225D70BE927B (void);
// 0x00000039 System.UInt64 Unity.Networking.QoS.QosResponse::get_Timestamp()
extern void QosResponse_get_Timestamp_mB9E55DA94DCCBC222AA6C8B74DCE71BD40FF5169 (void);
// 0x0000003A System.UInt16 Unity.Networking.QoS.QosResponse::get_Length()
extern void QosResponse_get_Length_m0B242FFD9866C8C2E8312D323377912462342581 (void);
// 0x0000003B System.Int32 Unity.Networking.QoS.QosResponse::get_LatencyMs()
extern void QosResponse_get_LatencyMs_m6D92DA16A56CC151961BCC6E090131C2097BF5FC (void);
// 0x0000003C System.ValueTuple`2<System.Int32,System.Int32> Unity.Networking.QoS.QosResponse::Recv(System.IntPtr,System.Boolean,System.DateTime,Unity.Networking.QoS.NetworkEndPoint&)
extern void QosResponse_Recv_mC619EA992F44794C22AE151014FAAA8B5CE0E204 (void);
// 0x0000003D System.Void Unity.Networking.QoS.QosResponse::Deserialize(System.IntPtr)
extern void QosResponse_Deserialize_m26C3F202F7E36B5EB7A910EA34E8131CE627F778 (void);
// 0x0000003E System.Boolean Unity.Networking.QoS.QosResponse::Verify(System.UInt32,System.String&)
extern void QosResponse_Verify_mCC3F2D873A922CFD8A9DE72F64E3D20F1958E369 (void);
// 0x0000003F System.ValueTuple`2<Unity.Networking.QoS.FcType,System.Byte> Unity.Networking.QoS.QosResponse::ParseFlowControl()
extern void QosResponse_ParseFlowControl_mA247FCC942E7322C2CC02B3584FF871AEB0D4F2B (void);
// 0x00000040 System.Void Unity.Networking.QoS.QosResponse::.ctor()
extern void QosResponse__ctor_m209C46EAA2D73534740EDB232775F5E32E8DBA4D (void);
// 0x00000041 System.String Unity.Networking.QoS.UcgQosServer::ToString()
extern void UcgQosServer_ToString_mA7BEF62CE3005CD01054E082587C558D6C031AE8 (void);
// 0x00000042 Unity.Services.Qos.IQosService Unity.Services.Core.UnityServicesExtensions::GetQosService(Unity.Services.Core.IUnityServices)
extern void UnityServicesExtensions_GetQosService_m3593AAA67E8010F2E2783D84942508108964EBE7 (void);
// 0x00000043 System.Void Unity.Services.Qos.Configuration::.ctor(System.String,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Configuration__ctor_mFF1BCF6303D8E5E362C3655F302DD9E8870BCD33 (void);
// 0x00000044 Unity.Services.Qos.Configuration Unity.Services.Qos.Configuration::MergeConfigurations(Unity.Services.Qos.Configuration,Unity.Services.Qos.Configuration)
extern void Configuration_MergeConfigurations_m10AD4EC118B0BF363E4C1993A490032DC0CE981D (void);
// 0x00000045 System.Void Unity.Services.Qos.QosResults::.ctor(Unity.Services.Qos.WrappedQosService)
extern void QosResults__ctor_m6AD651FDED7000ABD5E4B91076A06D599A64F78B (void);
// 0x00000046 System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.Internal.QosResult>> Unity.Services.Qos.QosResults::GetSortedQosResultsAsync(System.String,System.Collections.Generic.IList`1<System.String>)
extern void QosResults_GetSortedQosResultsAsync_mFEBE0655FD611148054C48B89D5909160C1F5311 (void);
// 0x00000047 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Response::get_Headers()
extern void Response_get_Headers_m61DA9ECA3129CE732D2359F5B59B9BFBA86E6744 (void);
// 0x00000048 System.Int64 Unity.Services.Qos.Response::get_Status()
extern void Response_get_Status_mE999C886D428C9253900FE67E14827DCB10D8B01 (void);
// 0x00000049 System.Void Unity.Services.Qos.Response::set_Status(System.Int64)
extern void Response_set_Status_mBF047132804F44DADB37CCA4D2A5CDB3602AAC79 (void);
// 0x0000004A System.Void Unity.Services.Qos.Response::.ctor(Unity.Services.Qos.Http.HttpClientResponse)
extern void Response__ctor_mC03DB957D3366BECC35CB74B16E0756A07E6CB55 (void);
// 0x0000004B T Unity.Services.Qos.Response`1::get_Result()
// 0x0000004C System.Void Unity.Services.Qos.Response`1::.ctor(Unity.Services.Qos.Http.HttpClientResponse,T)
// 0x0000004D System.Void Unity.Services.Qos.QosPackageInitializer::InitializeOnLoad()
extern void QosPackageInitializer_InitializeOnLoad_m7FA3BF98FB106D3A05C3B8E88B4F2728E311C8AB (void);
// 0x0000004E System.Void Unity.Services.Qos.QosPackageInitializer::Register(Unity.Services.Core.Internal.CorePackageRegistry)
extern void QosPackageInitializer_Register_mAF0A91F365BC1C20745D187CA481B3935BAC4B5B (void);
// 0x0000004F System.Void Unity.Services.Qos.QosPackageInitializer::Register(Unity.Services.Core.Internal.CoreRegistry)
extern void QosPackageInitializer_Register_m03F66F4C3694C6000ACFE631EB2AA0C3B8B741D2 (void);
// 0x00000050 System.Threading.Tasks.Task Unity.Services.Qos.QosPackageInitializer::Initialize(Unity.Services.Core.Internal.CoreRegistry)
extern void QosPackageInitializer_Initialize_m31AE4939EEC42056FBC52EB1885A66161909312C (void);
// 0x00000051 System.Threading.Tasks.Task Unity.Services.Qos.QosPackageInitializer::InitializeInstanceAsync(Unity.Services.Core.Internal.CoreRegistry)
extern void QosPackageInitializer_InitializeInstanceAsync_m299CF88FB1D0FC7AD06392350FF94608A84AC124 (void);
// 0x00000052 Unity.Services.Qos.IQosService Unity.Services.Qos.QosPackageInitializer::InitializeService(Unity.Services.Core.Internal.CoreRegistry)
extern void QosPackageInitializer_InitializeService_m014B6CA165415CDC6670245DA829E4F2D8DC1906 (void);
// 0x00000053 System.String Unity.Services.Qos.QosPackageInitializer::GetHost(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
extern void QosPackageInitializer_GetHost_m411B2841F662CD20FE22DB9F61BCD9CE392563FA (void);
// 0x00000054 System.Void Unity.Services.Qos.QosPackageInitializer::.ctor()
extern void QosPackageInitializer__ctor_mB0FBE994896B3205A0F3F31493AB2958391C088A (void);
// 0x00000055 System.Void Unity.Services.Qos.InternalQosDiscoveryService::.ctor(System.String,Unity.Services.Qos.Http.HttpClient,Unity.Services.Authentication.Internal.IAccessToken)
extern void InternalQosDiscoveryService__ctor_m4B669E8B21EB913A51D88F1250D898A326EC08A7 (void);
// 0x00000056 Unity.Services.Qos.Apis.QosDiscovery.IQosDiscoveryApiClient Unity.Services.Qos.InternalQosDiscoveryService::get_QosDiscoveryApi()
extern void InternalQosDiscoveryService_get_QosDiscoveryApi_mD69672FD2DB905D120F004AC9053987010DDC3A0 (void);
// 0x00000057 System.Void Unity.Services.Qos.InternalQosDiscoveryService::set_QosDiscoveryApi(Unity.Services.Qos.Apis.QosDiscovery.IQosDiscoveryApiClient)
extern void InternalQosDiscoveryService_set_QosDiscoveryApi_m11DE640172B48DF8EBFB3F82808D795F41C6E524 (void);
// 0x00000058 Unity.Services.Qos.Configuration Unity.Services.Qos.InternalQosDiscoveryService::get_Configuration()
extern void InternalQosDiscoveryService_get_Configuration_mA0DD4210EE91DC1A3D859A9739905D7A927F60D0 (void);
// 0x00000059 System.Void Unity.Services.Qos.InternalQosDiscoveryService::set_Configuration(Unity.Services.Qos.Configuration)
extern void InternalQosDiscoveryService_set_Configuration_m217D3AA86C388DD9373322CE07C7393FC1832264 (void);
// 0x0000005A Unity.Services.Qos.IQosService Unity.Services.Qos.QosService::get_Instance()
extern void QosService_get_Instance_m7CE84EAAA9BFA0CE64E1C1C114A669ED706243FC (void);
// 0x0000005B System.Void Unity.Services.Qos.QosService::set_Instance(Unity.Services.Qos.IQosService)
extern void QosService_set_Instance_m10C3C8DF77A585F6F3A45EC8320155D2B98BFCA0 (void);
// 0x0000005C System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.IQosResult>> Unity.Services.Qos.IQosService::GetSortedQosResultsAsync(System.String,System.Collections.Generic.IList`1<System.String>)
// 0x0000005D System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.IQosAnnotatedResult>> Unity.Services.Qos.IQosService::GetSortedRelayQosResultsAsync(System.Collections.Generic.IList`1<System.String>)
// 0x0000005E System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.IQosAnnotatedResult>> Unity.Services.Qos.IQosService::GetSortedMultiplayQosResultsAsync(System.Collections.Generic.IList`1<System.String>)
// 0x0000005F System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.V2.Models.QosServer>> Unity.Services.Qos.IQosService::GetAllServersAsync()
// 0x00000060 System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.ValueTuple`2<Unity.Services.Qos.V2.Models.QosServer,Unity.Services.Qos.IQosMeasurements>>> Unity.Services.Qos.IQosService::GetQosResultsAsync(System.Collections.Generic.IList`1<Unity.Services.Qos.V2.Models.QosServer>)
// 0x00000061 System.Int32 Unity.Services.Qos.IQosMeasurements::get_AverageLatencyMs()
// 0x00000062 System.Single Unity.Services.Qos.IQosMeasurements::get_PacketLossPercent()
// 0x00000063 System.String Unity.Services.Qos.IQosResult::get_Region()
// 0x00000064 System.Int32 Unity.Services.Qos.IQosResult::get_AverageLatencyMs()
// 0x00000065 System.Single Unity.Services.Qos.IQosResult::get_PacketLossPercent()
// 0x00000066 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> Unity.Services.Qos.IQosAnnotatedResult::get_Annotations()
// 0x00000067 Unity.Services.Qos.IQosService Unity.Services.Qos.IQosServiceComponent::get_Service()
// 0x00000068 Unity.Services.Qos.IQosService Unity.Services.Qos.QosServiceComponent::get_Service()
extern void QosServiceComponent_get_Service_mE2EA3313A6F832BBA3BEB414721A35D9994FA0CA (void);
// 0x00000069 System.Void Unity.Services.Qos.QosServiceComponent::.ctor(Unity.Services.Qos.IQosService)
extern void QosServiceComponent__ctor_mBB5C02A323479F1A83A1F9B74C257E576EC0B9AF (void);
// 0x0000006A System.Void Unity.Services.Qos.WrappedQosService::.ctor(Unity.Services.Qos.Apis.QosDiscovery.IQosDiscoveryApiClient,Unity.Services.Qos.V2.Apis.QosDiscovery.IQosDiscoveryApiClient,Unity.Services.Qos.Runner.IQosRunner,Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Core.Telemetry.Internal.IMetrics)
extern void WrappedQosService__ctor_m154BD2060BFDD4AFB55D2C4144A818FBD99EDE27 (void);
// 0x0000006B System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.IQosResult>> Unity.Services.Qos.WrappedQosService::GetSortedQosResultsAsync(System.String,System.Collections.Generic.IList`1<System.String>)
extern void WrappedQosService_GetSortedQosResultsAsync_m6FF38AB3A4BE3D3C81822413DAF34E4E2C356DEF (void);
// 0x0000006C System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.Internal.QosResult>> Unity.Services.Qos.WrappedQosService::GetSortedInternalQosResultsAsync(System.String,System.Collections.Generic.IList`1<System.String>)
extern void WrappedQosService_GetSortedInternalQosResultsAsync_mA47A99113119329B564320BFAB1325B490670F57 (void);
// 0x0000006D System.Collections.Generic.List`1<Unity.Services.Qos.Internal.QosResult> Unity.Services.Qos.WrappedQosService::SortResults(System.Collections.Generic.IList`1<Unity.Services.Qos.Internal.QosResult>)
extern void WrappedQosService_SortResults_m2AC6413067175DCF1399CF82570FEBEBFCD90890 (void);
// 0x0000006E System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.IQosAnnotatedResult>> Unity.Services.Qos.WrappedQosService::GetSortedRelayQosResultsAsync(System.Collections.Generic.IList`1<System.String>)
extern void WrappedQosService_GetSortedRelayQosResultsAsync_m2C4FBAD9E1F3F975BA77A9654B4DF37A08DE11A5 (void);
// 0x0000006F System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.IQosAnnotatedResult>> Unity.Services.Qos.WrappedQosService::GetSortedMultiplayQosResultsAsync(System.Collections.Generic.IList`1<System.String>)
extern void WrappedQosService_GetSortedMultiplayQosResultsAsync_mD3A370C62EE859CED705022CF7D9847A6BC4080A (void);
// 0x00000070 System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.V2.Models.QosServer>> Unity.Services.Qos.WrappedQosService::GetAllServersAsync()
extern void WrappedQosService_GetAllServersAsync_m8C20B363E0803E8779421D50B092AD6269CD1035 (void);
// 0x00000071 System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.ValueTuple`2<Unity.Services.Qos.V2.Models.QosServer,Unity.Services.Qos.IQosMeasurements>>> Unity.Services.Qos.WrappedQosService::GetQosResultsAsync(System.Collections.Generic.IList`1<Unity.Services.Qos.V2.Models.QosServer>)
extern void WrappedQosService_GetQosResultsAsync_mFFE9456AFB259DFEAD2230CB5F85739662D2BF6D (void);
// 0x00000072 System.Void Unity.Services.Qos.WrappedQosService::SendResultsMetricsV2(System.Collections.Generic.IReadOnlyCollection`1<System.ValueTuple`2<Unity.Services.Qos.V2.Models.QosServer,Unity.Services.Qos.IQosMeasurements>>)
extern void WrappedQosService_SendResultsMetricsV2_m25368E9E4C800FA76E9B6ACD12536CE93E9986FF (void);
// 0x00000073 System.Void Unity.Services.Qos.WrappedQosService::SendResultsMetricsV2ForService(System.Collections.Generic.IReadOnlyCollection`1<System.ValueTuple`2<Unity.Services.Qos.V2.Models.QosServer,Unity.Services.Qos.IQosMeasurements>>,System.Func`2<Unity.Services.Qos.V2.Models.QosServer,System.Collections.Generic.List`1<System.String>>,System.String)
extern void WrappedQosService_SendResultsMetricsV2ForService_mA6D289265D071C6C3D7DF4AC966659CE3C05773E (void);
// 0x00000074 System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.IQosAnnotatedResult>> Unity.Services.Qos.WrappedQosService::GetSortedInternalServiceQosResultsAsync(System.String,System.Collections.Generic.IList`1<System.String>,System.Collections.Generic.IList`1<System.String>)
extern void WrappedQosService_GetSortedInternalServiceQosResultsAsync_m52F7335596090087C1F7D059751EC00E9A7B1344 (void);
// 0x00000075 System.Collections.Generic.List`1<Unity.Services.Qos.IQosAnnotatedResult> Unity.Services.Qos.WrappedQosService::SortServiceResults(System.Collections.Generic.IList`1<Unity.Services.Qos.Runner.QosAnnotatedResult>)
extern void WrappedQosService_SortServiceResults_m3A7952B4A800940710C300ABD1BE61B8FE496240 (void);
// 0x00000076 System.Void Unity.Services.Qos.WrappedQosService::SendResultsMetrics(System.Collections.Generic.IList`1<Unity.Services.Qos.Internal.QosResult>,System.String,Unity.Services.Qos.Response)
extern void WrappedQosService_SendResultsMetrics_m246EE236216BF9BA8D95829D2931E691A4E21485 (void);
// 0x00000077 System.Void Unity.Services.Qos.WrappedQosService::SendResultsMetrics(System.Collections.Generic.IList`1<Unity.Services.Qos.IQosResult>,System.String,Unity.Services.Qos.Response)
extern void WrappedQosService_SendResultsMetrics_m48455B559ACCB6F32C8D53272E57BF42BD1DCBDB (void);
// 0x00000078 System.Void Unity.Services.Qos.WrappedQosService::SendResultMetrics(System.String,System.String,System.String,System.String,System.Int32,System.Single,System.Boolean)
extern void WrappedQosService_SendResultMetrics_mE325FDA0D83A063733B876D92EB6E019BFD42BD7 (void);
// 0x00000079 Unity.Services.Qos.IQosResult Unity.Services.Qos.WrappedQosService::MapToPublicQosResult(Unity.Services.Qos.Internal.QosResult)
extern void WrappedQosService_MapToPublicQosResult_mE680B3A1FF2741E4DA4663D37BD0DD5602AF3235 (void);
// 0x0000007A System.Void Unity.Services.Qos.WrappedQosService/<GetSortedQosResultsAsync>d__18::MoveNext()
extern void U3CGetSortedQosResultsAsyncU3Ed__18_MoveNext_m1B7A01EFFF3FC50F91E6DB3759E58031163A07DD (void);
// 0x0000007B System.Void Unity.Services.Qos.WrappedQosService/<GetSortedQosResultsAsync>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSortedQosResultsAsyncU3Ed__18_SetStateMachine_m04924AD392D4E58837A050E195DEDC109F8FC99A (void);
// 0x0000007C System.Void Unity.Services.Qos.WrappedQosService/<GetSortedInternalQosResultsAsync>d__19::MoveNext()
extern void U3CGetSortedInternalQosResultsAsyncU3Ed__19_MoveNext_m06370FBA36A699DE76F8B334ED146AB622752F7B (void);
// 0x0000007D System.Void Unity.Services.Qos.WrappedQosService/<GetSortedInternalQosResultsAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSortedInternalQosResultsAsyncU3Ed__19_SetStateMachine_m9A88088CCD463A6A21969748304B2B8424D860F0 (void);
// 0x0000007E System.Void Unity.Services.Qos.WrappedQosService/<>c::.cctor()
extern void U3CU3Ec__cctor_mAA0A9893E2022F1D0029C2E7A8EF3F3D1BB80548 (void);
// 0x0000007F System.Void Unity.Services.Qos.WrappedQosService/<>c::.ctor()
extern void U3CU3Ec__ctor_m5D76CBDAAD00C935B111C3EF84C85770C592F4AB (void);
// 0x00000080 System.Int32 Unity.Services.Qos.WrappedQosService/<>c::<SortResults>b__20_0(Unity.Services.Qos.Internal.QosResult)
extern void U3CU3Ec_U3CSortResultsU3Eb__20_0_mBBDBEECE75DBE164F3DE5A58C0DCC0A69A1D37D0 (void);
// 0x00000081 System.Single Unity.Services.Qos.WrappedQosService/<>c::<SortResults>b__20_1(Unity.Services.Qos.Internal.QosResult)
extern void U3CU3Ec_U3CSortResultsU3Eb__20_1_mA3A22EC83A5DBD7B75D6D3EC9DAEBFFBDB5919CE (void);
// 0x00000082 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.WrappedQosService/<>c::<SendResultsMetricsV2>b__25_0(Unity.Services.Qos.V2.Models.QosServer)
extern void U3CU3Ec_U3CSendResultsMetricsV2U3Eb__25_0_m8DF637A7B701506918C87B7F2FC1C899E2637EF0 (void);
// 0x00000083 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.WrappedQosService/<>c::<SendResultsMetricsV2>b__25_1(Unity.Services.Qos.V2.Models.QosServer)
extern void U3CU3Ec_U3CSendResultsMetricsV2U3Eb__25_1_m8BC88063A1828263BC22823228588B18375F2193 (void);
// 0x00000084 System.Int32 Unity.Services.Qos.WrappedQosService/<>c::<SendResultsMetricsV2ForService>b__26_1(System.ValueTuple`2<Unity.Services.Qos.V2.Models.QosServer,Unity.Services.Qos.IQosMeasurements>)
extern void U3CU3Ec_U3CSendResultsMetricsV2ForServiceU3Eb__26_1_m4DB34626DFD1B1ACCD027BB536B06A1ABB03941A (void);
// 0x00000085 System.Single Unity.Services.Qos.WrappedQosService/<>c::<SendResultsMetricsV2ForService>b__26_2(System.ValueTuple`2<Unity.Services.Qos.V2.Models.QosServer,Unity.Services.Qos.IQosMeasurements>)
extern void U3CU3Ec_U3CSendResultsMetricsV2ForServiceU3Eb__26_2_m5C4CD0C9B5E6252255CE9A457A6D455B62DA0ADC (void);
// 0x00000086 System.Boolean Unity.Services.Qos.WrappedQosService/<>c::<SortServiceResults>b__28_0(Unity.Services.Qos.Runner.QosAnnotatedResult)
extern void U3CU3Ec_U3CSortServiceResultsU3Eb__28_0_mF387229ACA387F2C7C6C56E1447D6AD945266590 (void);
// 0x00000087 System.String Unity.Services.Qos.WrappedQosService/<>c::<SortServiceResults>b__28_1(Unity.Services.Qos.Runner.QosAnnotatedResult)
extern void U3CU3Ec_U3CSortServiceResultsU3Eb__28_1_m6DD44F4C781813107D119D88DFD2A3696DD105ED (void);
// 0x00000088 Unity.Services.Qos.IQosAnnotatedResult Unity.Services.Qos.WrappedQosService/<>c::<SortServiceResults>b__28_2(System.Linq.IGrouping`2<System.String,Unity.Services.Qos.Runner.QosAnnotatedResult>)
extern void U3CU3Ec_U3CSortServiceResultsU3Eb__28_2_m36EC3061E6B5E6A457556D634605B6A7F8B121AC (void);
// 0x00000089 System.Int32 Unity.Services.Qos.WrappedQosService/<>c::<SortServiceResults>b__28_5(Unity.Services.Qos.Runner.QosAnnotatedResult)
extern void U3CU3Ec_U3CSortServiceResultsU3Eb__28_5_m2EC0CD0A417A28DADA5DE250CCCCA745EF10FD3A (void);
// 0x0000008A System.Single Unity.Services.Qos.WrappedQosService/<>c::<SortServiceResults>b__28_6(Unity.Services.Qos.Runner.QosAnnotatedResult)
extern void U3CU3Ec_U3CSortServiceResultsU3Eb__28_6_mBAE64E64BD75F6B6C17FB452556FC31B8F85F714 (void);
// 0x0000008B System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> Unity.Services.Qos.WrappedQosService/<>c::<SortServiceResults>b__28_7(Unity.Services.Qos.Runner.QosAnnotatedResult)
extern void U3CU3Ec_U3CSortServiceResultsU3Eb__28_7_m550AB3A892E3AF1D55E5DF391F41492294A65A91 (void);
// 0x0000008C System.Int32 Unity.Services.Qos.WrappedQosService/<>c::<SortServiceResults>b__28_3(Unity.Services.Qos.IQosAnnotatedResult)
extern void U3CU3Ec_U3CSortServiceResultsU3Eb__28_3_mDF4AE97F15CEF09FA5D01A82C158304479A17150 (void);
// 0x0000008D System.Single Unity.Services.Qos.WrappedQosService/<>c::<SortServiceResults>b__28_4(Unity.Services.Qos.IQosAnnotatedResult)
extern void U3CU3Ec_U3CSortServiceResultsU3Eb__28_4_mE34AAE545BADE34C0765CDB2D265E806EC57DD2E (void);
// 0x0000008E System.Void Unity.Services.Qos.WrappedQosService/<GetSortedRelayQosResultsAsync>d__21::MoveNext()
extern void U3CGetSortedRelayQosResultsAsyncU3Ed__21_MoveNext_m9CACDD2FA29D4886978ED6D197FA3A399681CA88 (void);
// 0x0000008F System.Void Unity.Services.Qos.WrappedQosService/<GetSortedRelayQosResultsAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSortedRelayQosResultsAsyncU3Ed__21_SetStateMachine_m0F99F468B6974334BD26BF000C603B026A99D160 (void);
// 0x00000090 System.Void Unity.Services.Qos.WrappedQosService/<GetSortedMultiplayQosResultsAsync>d__22::MoveNext()
extern void U3CGetSortedMultiplayQosResultsAsyncU3Ed__22_MoveNext_mD98B7EDB6111B94640E9C9CD31AA111A2A6053B7 (void);
// 0x00000091 System.Void Unity.Services.Qos.WrappedQosService/<GetSortedMultiplayQosResultsAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSortedMultiplayQosResultsAsyncU3Ed__22_SetStateMachine_m950BE9F26C18809AB44900A3C9641B7FF4102505 (void);
// 0x00000092 System.Void Unity.Services.Qos.WrappedQosService/<GetAllServersAsync>d__23::MoveNext()
extern void U3CGetAllServersAsyncU3Ed__23_MoveNext_mB9D12572B7AFCEC927D9B04A856611B039CFF569 (void);
// 0x00000093 System.Void Unity.Services.Qos.WrappedQosService/<GetAllServersAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetAllServersAsyncU3Ed__23_SetStateMachine_mA4276B7879D3F288E14D8C02C33035F135F004B2 (void);
// 0x00000094 System.Void Unity.Services.Qos.WrappedQosService/<GetQosResultsAsync>d__24::MoveNext()
extern void U3CGetQosResultsAsyncU3Ed__24_MoveNext_m88979B3256A288A1C468A29E0A89F9557AE4211A (void);
// 0x00000095 System.Void Unity.Services.Qos.WrappedQosService/<GetQosResultsAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetQosResultsAsyncU3Ed__24_SetStateMachine_mE640816313D24620C6B7880FFA35F7BD45FD6FDE (void);
// 0x00000096 System.Void Unity.Services.Qos.WrappedQosService/<>c__DisplayClass26_0::.ctor()
extern void U3CU3Ec__DisplayClass26_0__ctor_m5D37BAC274CCD3123FCECA0D39EDB38CCB335352 (void);
// 0x00000097 System.Boolean Unity.Services.Qos.WrappedQosService/<>c__DisplayClass26_0::<SendResultsMetricsV2ForService>b__0(System.ValueTuple`2<Unity.Services.Qos.V2.Models.QosServer,Unity.Services.Qos.IQosMeasurements>)
extern void U3CU3Ec__DisplayClass26_0_U3CSendResultsMetricsV2ForServiceU3Eb__0_m051B91AFA07CC553CD7A3E8EB633902C760FAD09 (void);
// 0x00000098 System.Void Unity.Services.Qos.WrappedQosService/<GetSortedInternalServiceQosResultsAsync>d__27::MoveNext()
extern void U3CGetSortedInternalServiceQosResultsAsyncU3Ed__27_MoveNext_mC0FEC8054B5551EB6C52B25F683FF598FBCFD4EC (void);
// 0x00000099 System.Void Unity.Services.Qos.WrappedQosService/<GetSortedInternalServiceQosResultsAsync>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSortedInternalServiceQosResultsAsyncU3Ed__27_SetStateMachine_mAEBAA7C34E31F0B25202B41E3C3F8F00377FC86B (void);
// 0x0000009A System.Void Unity.Services.Qos.QosResult::.ctor(System.String,System.Int32,System.Single,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>)
extern void QosResult__ctor_m31D35D73B4735FD2CC1A40EB2686BB785B9E461F (void);
// 0x0000009B System.String Unity.Services.Qos.QosResult::get_Region()
extern void QosResult_get_Region_mF3A9270B69D29876DDCB738238875CB8FBEF357D (void);
// 0x0000009C System.Int32 Unity.Services.Qos.QosResult::get_AverageLatencyMs()
extern void QosResult_get_AverageLatencyMs_mD768392DF931372CFEADC93BFDB4F3402E83884E (void);
// 0x0000009D System.Single Unity.Services.Qos.QosResult::get_PacketLossPercent()
extern void QosResult_get_PacketLossPercent_m2EE3AABDE7587BEB9CEFEBB352BD23A98F3E1B6F (void);
// 0x0000009E System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> Unity.Services.Qos.QosResult::get_Annotations()
extern void QosResult_get_Annotations_m1EE5D0335811BAA36A8DDD6B1936A3A4F84F19B8 (void);
// 0x0000009F System.Void Unity.Services.Qos.UnsupportedEditorVersionException::.ctor()
extern void UnsupportedEditorVersionException__ctor_m8647299E324884409566642AEEEC36729FA5F07A (void);
// 0x000000A0 System.Void Unity.Services.Qos.UnsupportedEditorVersionException::.ctor(System.String)
extern void UnsupportedEditorVersionException__ctor_mC11FE9277AF1738CAF4411DBD37F10AA9D08B5AD (void);
// 0x000000A1 System.Void Unity.Services.Qos.V2.Configuration::.ctor(System.String,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Configuration__ctor_mDF2C53A7F32A79585AA2D4D701741F1259B93250 (void);
// 0x000000A2 Unity.Services.Qos.V2.Configuration Unity.Services.Qos.V2.Configuration::MergeConfigurations(Unity.Services.Qos.V2.Configuration,Unity.Services.Qos.V2.Configuration)
extern void Configuration_MergeConfigurations_m6C5CE4427DEF391309805BED1573B774EC7BC7A3 (void);
// 0x000000A3 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.V2.Response::get_Headers()
extern void Response_get_Headers_m68A6E9FB59894B0A1983BB7C803E63094A8C13CF (void);
// 0x000000A4 System.Int64 Unity.Services.Qos.V2.Response::get_Status()
extern void Response_get_Status_mA50ED96870E3C0F75A3F39AC858E2E76047FF79B (void);
// 0x000000A5 System.Void Unity.Services.Qos.V2.Response::set_Status(System.Int64)
extern void Response_set_Status_m67D6386C2A4D0C143F79D06E979E51C1A9F5651D (void);
// 0x000000A6 System.Void Unity.Services.Qos.V2.Response::.ctor(Unity.Services.Qos.V2.Http.HttpClientResponse)
extern void Response__ctor_m895979A1F0F6CF3B9D96A919BB35DE3E3F139A4A (void);
// 0x000000A7 T Unity.Services.Qos.V2.Response`1::get_Result()
// 0x000000A8 System.Void Unity.Services.Qos.V2.Response`1::.ctor(Unity.Services.Qos.V2.Http.HttpClientResponse,T)
// 0x000000A9 System.Void Unity.Services.Qos.V2.Scheduler.EngineStateHelper::Init()
extern void EngineStateHelper_Init_m9087D11838DF62CD61E345FE59A7937FBA59AB55 (void);
// 0x000000AA System.Threading.SynchronizationContext Unity.Services.Qos.V2.Scheduler.ThreadHelper::get_SynchronizationContext()
extern void ThreadHelper_get_SynchronizationContext_m44AC6332643F5B5A56611EF557215163EEFA12BF (void);
// 0x000000AB System.Threading.Tasks.TaskScheduler Unity.Services.Qos.V2.Scheduler.ThreadHelper::get_TaskScheduler()
extern void ThreadHelper_get_TaskScheduler_mDB72985A7EF0882506F07C57AD83FF5A50785D44 (void);
// 0x000000AC System.Int32 Unity.Services.Qos.V2.Scheduler.ThreadHelper::get_MainThreadId()
extern void ThreadHelper_get_MainThreadId_m98C2F92DBA5AA8C182B290C8074600373CA0023F (void);
// 0x000000AD System.Void Unity.Services.Qos.V2.Scheduler.ThreadHelper::Init()
extern void ThreadHelper_Init_mF61202E2A33E9F346B3D3C511B5FC91D8263450E (void);
// 0x000000AE System.Void Unity.Services.Qos.V2.Models.ErrorResponseBody::.ctor(System.String,System.String,System.Int32,System.Int32,System.String,System.String,System.Collections.Generic.List`1<System.Object>)
extern void ErrorResponseBody__ctor_m52C0AD8B0B04B52127DC3493A217955D505F1D00 (void);
// 0x000000AF System.String Unity.Services.Qos.V2.Models.ErrorResponseBody::get_Type()
extern void ErrorResponseBody_get_Type_m4C7E6CDBE35565FC7D2795668131B1BD9CEFC075 (void);
// 0x000000B0 System.String Unity.Services.Qos.V2.Models.ErrorResponseBody::get_Title()
extern void ErrorResponseBody_get_Title_m4FDA56A3C3BC74CE5587E10E18651FEEE06F0A27 (void);
// 0x000000B1 System.Int32 Unity.Services.Qos.V2.Models.ErrorResponseBody::get_Status()
extern void ErrorResponseBody_get_Status_mB03A8D105561FDD3409C7982562FF37EA928E862 (void);
// 0x000000B2 System.Int32 Unity.Services.Qos.V2.Models.ErrorResponseBody::get_Code()
extern void ErrorResponseBody_get_Code_m76723F87156648710CC87FFA182F5DE28EF7F1D9 (void);
// 0x000000B3 System.String Unity.Services.Qos.V2.Models.ErrorResponseBody::get_Detail()
extern void ErrorResponseBody_get_Detail_m2D8D6625F43E608BB0203F4214E39745273E8A89 (void);
// 0x000000B4 System.String Unity.Services.Qos.V2.Models.ErrorResponseBody::get_Instance()
extern void ErrorResponseBody_get_Instance_m53C2A1061F83199D4C7940BC0C63C0FDF9C97F30 (void);
// 0x000000B5 System.Collections.Generic.List`1<Unity.Services.Qos.V2.Http.IDeserializable> Unity.Services.Qos.V2.Models.ErrorResponseBody::get_Details()
extern void ErrorResponseBody_get_Details_mFB343BBE6962EF99DF7C739A6879636E99AAA909 (void);
// 0x000000B6 System.String Unity.Services.Qos.V2.Models.ErrorResponseBody::SerializeAsPathParam()
extern void ErrorResponseBody_SerializeAsPathParam_mAD41B7E15978643F267938A0CDE44051E4F398B4 (void);
// 0x000000B7 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.V2.Models.ErrorResponseBody::GetAsQueryParam()
extern void ErrorResponseBody_GetAsQueryParam_mCF07E84FC6F57F3CD8BB425A526F2493DA6EC145 (void);
// 0x000000B8 System.Type Unity.Services.Qos.V2.Models.IOneOf::get_Type()
// 0x000000B9 System.Object Unity.Services.Qos.V2.Models.IOneOf::get_Value()
// 0x000000BA System.Void Unity.Services.Qos.V2.Models.QosServer::.ctor(System.Collections.Generic.List`1<System.String>,Unity.Services.Qos.V2.Models.QosServerAnnotations)
extern void QosServer__ctor_mB7FA1E9BF37655E5EC045BBB756D89FF22194424 (void);
// 0x000000BB System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.Models.QosServer::get_Endpoints()
extern void QosServer_get_Endpoints_m69013259E343CDA72EA791EF427E907ABFDF5FC9 (void);
// 0x000000BC Unity.Services.Qos.V2.Models.QosServerAnnotations Unity.Services.Qos.V2.Models.QosServer::get_Annotations()
extern void QosServer_get_Annotations_m5A2663E309E9EC815E5426A841EE208356B5D010 (void);
// 0x000000BD System.String Unity.Services.Qos.V2.Models.QosServer::SerializeAsPathParam()
extern void QosServer_SerializeAsPathParam_m0C42DA11D0A2D2ECAC1C0A7D1AD0F4F7D538E219 (void);
// 0x000000BE System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.V2.Models.QosServer::GetAsQueryParam()
extern void QosServer_GetAsQueryParam_m4C272203CF398AAFA20F957434EFA4F340F91CB0 (void);
// 0x000000BF System.Void Unity.Services.Qos.V2.Models.QosServerAnnotations::.ctor(System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.String>)
extern void QosServerAnnotations__ctor_m1D021F539C3702D22F845DC1BD1B0D49BE51E8E8 (void);
// 0x000000C0 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.Models.QosServerAnnotations::get_ProjectId()
extern void QosServerAnnotations_get_ProjectId_m7E29204E982BD20BB6D2EC292929907D788C9EF0 (void);
// 0x000000C1 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.Models.QosServerAnnotations::get_EnvironmentId()
extern void QosServerAnnotations_get_EnvironmentId_m7F5F9F33DCA838D2E41E12F354C79D792059D801 (void);
// 0x000000C2 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.Models.QosServerAnnotations::get_RelayRegionId()
extern void QosServerAnnotations_get_RelayRegionId_mD7F4E5A133FCD87EED0FC3DD400EBCE39BF99DD7 (void);
// 0x000000C3 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.Models.QosServerAnnotations::get_MultiplayRegionId()
extern void QosServerAnnotations_get_MultiplayRegionId_mE40C8D36504E238E282CC269F652431AB6021C33 (void);
// 0x000000C4 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.Models.QosServerAnnotations::get_MultiplayFleetId()
extern void QosServerAnnotations_get_MultiplayFleetId_m96903AF85C4609C20FBBEE596A7E150E05AFE5BE (void);
// 0x000000C5 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.Models.QosServerAnnotations::get_MatchmakerQueueName()
extern void QosServerAnnotations_get_MatchmakerQueueName_m029B9EFA9FD20DA51A4686B89E5E8E1FEDFE6484 (void);
// 0x000000C6 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.Models.QosServerAnnotations::get_MatchmakerPoolId()
extern void QosServerAnnotations_get_MatchmakerPoolId_m852BE68F72925D01E2BB111869DE22B27F41EE5C (void);
// 0x000000C7 System.String Unity.Services.Qos.V2.Models.QosServerAnnotations::SerializeAsPathParam()
extern void QosServerAnnotations_SerializeAsPathParam_mD858795C196631D1D79EC4680AD0E4175D4B607D (void);
// 0x000000C8 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.V2.Models.QosServerAnnotations::GetAsQueryParam()
extern void QosServerAnnotations_GetAsQueryParam_m71D6AB7991B9F21B063CE3BB415A9A6A6ACA877D (void);
// 0x000000C9 System.Void Unity.Services.Qos.V2.Models.QosServersList::.ctor(System.Collections.Generic.List`1<Unity.Services.Qos.V2.Models.QosServer>)
extern void QosServersList__ctor_m159A3ABAFF6B699054F65DBA326397885B852BCE (void);
// 0x000000CA System.Collections.Generic.List`1<Unity.Services.Qos.V2.Models.QosServer> Unity.Services.Qos.V2.Models.QosServersList::get_Servers()
extern void QosServersList_get_Servers_m486BFAE28E92768A7FC63A8088FB33261A3BC09E (void);
// 0x000000CB System.String Unity.Services.Qos.V2.Models.QosServersList::SerializeAsPathParam()
extern void QosServersList_SerializeAsPathParam_mD15F84A017A952380E1641805D6D608FC6647CF3 (void);
// 0x000000CC System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.V2.Models.QosServersList::GetAsQueryParam()
extern void QosServersList_GetAsQueryParam_mE28FC666118F513AE57F89BC156E332A33CDC4A3 (void);
// 0x000000CD System.Void Unity.Services.Qos.V2.Models.QosServersResponseBody::.ctor(Unity.Services.Qos.V2.Models.QosServersList)
extern void QosServersResponseBody__ctor_m15BDF420E17E3861704D1F8A434CAE6E392B5FE4 (void);
// 0x000000CE Unity.Services.Qos.V2.Models.QosServersList Unity.Services.Qos.V2.Models.QosServersResponseBody::get_Data()
extern void QosServersResponseBody_get_Data_m1CBDB2644D1888443FF6A36DE2B5F19B1973F9A0 (void);
// 0x000000CF System.String Unity.Services.Qos.V2.Models.QosServersResponseBody::SerializeAsPathParam()
extern void QosServersResponseBody_SerializeAsPathParam_mA9FCA3503EE238786A72B874E4FE443E3D64A340 (void);
// 0x000000D0 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.V2.Models.QosServersResponseBody::GetAsQueryParam()
extern void QosServersResponseBody_GetAsQueryParam_m0B19B6169CC505ADE09155E021CAD2F1A86B5A3E (void);
// 0x000000D1 System.Void Unity.Services.Qos.V2.Http.BaseApiClient::.ctor(Unity.Services.Qos.V2.Http.IHttpClient)
extern void BaseApiClient__ctor_m0FC102F5D8B8DF3AF961ECF1E80D2DC42718F061 (void);
// 0x000000D2 System.Void Unity.Services.Qos.V2.Http.DeserializationException::.ctor()
extern void DeserializationException__ctor_mE05EAFC3DD3CAFCF8ACC973A933AF86BA0B9B4BA (void);
// 0x000000D3 System.Void Unity.Services.Qos.V2.Http.DeserializationException::.ctor(System.String)
extern void DeserializationException__ctor_mFE1456B6ED14A0CA7962918F0FBD5C4D704320FE (void);
// 0x000000D4 System.Void Unity.Services.Qos.V2.Http.DeserializationException::.ctor(System.String,System.Exception)
extern void DeserializationException__ctor_m8EF8082C5FCA7240D417F694146AE9E472DC5DB5 (void);
// 0x000000D5 System.Void Unity.Services.Qos.V2.Http.DeserializationSettings::.ctor()
extern void DeserializationSettings__ctor_m79D9F6A92CA5A23B6BFBD66D06DECBDB5B704B1B (void);
// 0x000000D6 System.Void Unity.Services.Qos.V2.Http.HttpClient::.ctor()
extern void HttpClient__ctor_m6269F1577077AE4EB9F96C777CA747E9B79312D5 (void);
// 0x000000D7 System.Threading.Tasks.Task`1<Unity.Services.Qos.V2.Http.HttpClientResponse> Unity.Services.Qos.V2.Http.HttpClient::MakeRequestAsync(System.String,System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32)
extern void HttpClient_MakeRequestAsync_m1BFDDA244CB6CECFA92C46FC4518E7C482FA3EFB (void);
// 0x000000D8 System.Threading.Tasks.Task`1<Unity.Services.Qos.V2.Http.HttpClientResponse> Unity.Services.Qos.V2.Http.HttpClient::MakeRequestAsync(System.String,System.String,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32,System.String)
extern void HttpClient_MakeRequestAsync_mC991E6EE66466DD43CDF8B653AE3EF25CAC89D2C (void);
// 0x000000D9 System.Threading.Tasks.Task`1<Unity.Services.Qos.V2.Http.HttpClientResponse> Unity.Services.Qos.V2.Http.HttpClient::CreateWebRequestAsync(System.String,System.String,System.Byte[],System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Int32)
extern void HttpClient_CreateWebRequestAsync_mFA520FE2AAE6EC6D705F442C0D75AE31037369F8 (void);
// 0x000000DA System.Threading.Tasks.Task`1<Unity.Services.Qos.V2.Http.HttpClientResponse> Unity.Services.Qos.V2.Http.HttpClient::CreateHttpClientResponse(System.String,System.String,System.Byte[],System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Int32)
extern void HttpClient_CreateHttpClientResponse_m443076A12C894E487D6AD368C3567A51D00C6C81 (void);
// 0x000000DB System.Threading.Tasks.Task`1<Unity.Services.Qos.V2.Http.HttpClientResponse> Unity.Services.Qos.V2.Http.HttpClient::CreateWebRequestAsync(System.String,System.String,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Int32,System.String)
extern void HttpClient_CreateWebRequestAsync_m7CBA73C40D2471CABFD988B327C4DBAC16343EFF (void);
// 0x000000DC UnityEngine.Networking.UnityWebRequest Unity.Services.Qos.V2.Http.HttpClient::SetupMultipartRequest(UnityEngine.Networking.UnityWebRequest,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Byte[])
extern void HttpClient_SetupMultipartRequest_m0728394A72ED0CEBE1765DCE54851141630EA427 (void);
// 0x000000DD UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Qos.V2.Http.HttpClient::SendWebRequest(UnityEngine.Networking.UnityWebRequest)
extern void HttpClient_SendWebRequest_m065B4C8237FB007FFE271FCC9F28B470053490C6 (void);
// 0x000000DE System.Void Unity.Services.Qos.V2.Http.HttpClient/<MakeRequestAsync>d__1::MoveNext()
extern void U3CMakeRequestAsyncU3Ed__1_MoveNext_m7F3210082204B92C2FEDFC53A3D426B378ABED3D (void);
// 0x000000DF System.Void Unity.Services.Qos.V2.Http.HttpClient/<MakeRequestAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CMakeRequestAsyncU3Ed__1_SetStateMachine_mA5C6BFE8BC5074371B6017C675D032140576CD80 (void);
// 0x000000E0 System.Void Unity.Services.Qos.V2.Http.HttpClient/<MakeRequestAsync>d__2::MoveNext()
extern void U3CMakeRequestAsyncU3Ed__2_MoveNext_mA874CB4672E8B2808E3FB49D85AC0AA5DD02E902 (void);
// 0x000000E1 System.Void Unity.Services.Qos.V2.Http.HttpClient/<MakeRequestAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CMakeRequestAsyncU3Ed__2_SetStateMachine_mBC5CC9B26956D44B6A2907B19F8B45943455968C (void);
// 0x000000E2 System.Void Unity.Services.Qos.V2.Http.HttpClient/<CreateWebRequestAsync>d__3::MoveNext()
extern void U3CCreateWebRequestAsyncU3Ed__3_MoveNext_m6D46A744D6CC569EE2916F05C8020DFDC9E2DD91 (void);
// 0x000000E3 System.Void Unity.Services.Qos.V2.Http.HttpClient/<CreateWebRequestAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateWebRequestAsyncU3Ed__3_SetStateMachine_mE8ECA87DF89565B4E7DECE465797F56709EA712C (void);
// 0x000000E4 System.Void Unity.Services.Qos.V2.Http.HttpClient/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mC303554C4976E1E4F6A6F796EBA278F9921C71EF (void);
// 0x000000E5 System.Threading.Tasks.Task`1<Unity.Services.Qos.V2.Http.HttpClientResponse> Unity.Services.Qos.V2.Http.HttpClient/<>c__DisplayClass4_0::<CreateHttpClientResponse>b__0()
extern void U3CU3Ec__DisplayClass4_0_U3CCreateHttpClientResponseU3Eb__0_mFA386A3C268DF88E3FDA022C9727AC81DFBBCB71 (void);
// 0x000000E6 System.Void Unity.Services.Qos.V2.Http.HttpClient/<>c__DisplayClass4_0/<<CreateHttpClientResponse>b__0>d::MoveNext()
extern void U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_MoveNext_mC0207A7FC14105EBC2A7C725112C86AF9D4BD28E (void);
// 0x000000E7 System.Void Unity.Services.Qos.V2.Http.HttpClient/<>c__DisplayClass4_0/<<CreateHttpClientResponse>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_SetStateMachine_m1FA2A05D56AF6BD67EC1E2E713265DDE32EC631A (void);
// 0x000000E8 System.Void Unity.Services.Qos.V2.Http.HttpClient/<CreateHttpClientResponse>d__4::MoveNext()
extern void U3CCreateHttpClientResponseU3Ed__4_MoveNext_m4C58464EB99BB66AD3562116F66BD290D7043C35 (void);
// 0x000000E9 System.Void Unity.Services.Qos.V2.Http.HttpClient/<CreateHttpClientResponse>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateHttpClientResponseU3Ed__4_SetStateMachine_mA8B73220D7D80D0C087A4D4139D4F3990D803FBE (void);
// 0x000000EA System.Void Unity.Services.Qos.V2.Http.HttpClient/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m1FA11457BF94B64F1736D9A239ACFC899C73E6A3 (void);
// 0x000000EB System.Threading.Tasks.Task`1<Unity.Services.Qos.V2.Http.HttpClientResponse> Unity.Services.Qos.V2.Http.HttpClient/<>c__DisplayClass5_0::<CreateWebRequestAsync>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CCreateWebRequestAsyncU3Eb__0_m73C095E9FF62E96C251E9D35AF3CAEA22E53C112 (void);
// 0x000000EC System.Void Unity.Services.Qos.V2.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::MoveNext()
extern void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_mEAAB4A8D3CDC061D871F427D95AE86D46F4FD510 (void);
// 0x000000ED System.Void Unity.Services.Qos.V2.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m4C9A8DC8D164A6FADC57334513697F84A973FE6F (void);
// 0x000000EE System.Void Unity.Services.Qos.V2.Http.HttpClient/<CreateWebRequestAsync>d__5::MoveNext()
extern void U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m9B76DED94CBA564ED5CB8665D40C0C46AD2CC3D4 (void);
// 0x000000EF System.Void Unity.Services.Qos.V2.Http.HttpClient/<CreateWebRequestAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m39D250001157B62ED5AF244978C139D6CEFAD3C9 (void);
// 0x000000F0 System.Void Unity.Services.Qos.V2.Http.HttpClientResponse::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int64,System.Boolean,System.Boolean,System.Byte[],System.String)
extern void HttpClientResponse__ctor_m3BF8749C12BC13A53D68A90C11AB51D15C4E0EB3 (void);
// 0x000000F1 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.V2.Http.HttpClientResponse::get_Headers()
extern void HttpClientResponse_get_Headers_mF01FF3B1ED6D623F42FD54BAA8ABDF06F81E4D46 (void);
// 0x000000F2 System.Int64 Unity.Services.Qos.V2.Http.HttpClientResponse::get_StatusCode()
extern void HttpClientResponse_get_StatusCode_mD529277CAFD42FA56B3C37045560FB84F03F23AA (void);
// 0x000000F3 System.Boolean Unity.Services.Qos.V2.Http.HttpClientResponse::get_IsHttpError()
extern void HttpClientResponse_get_IsHttpError_m354B0F3C7A107CF9AC2BC75A23099C9EDCB2FED7 (void);
// 0x000000F4 System.Boolean Unity.Services.Qos.V2.Http.HttpClientResponse::get_IsNetworkError()
extern void HttpClientResponse_get_IsNetworkError_m95D888B4E1C0632A8B3B20EEFC0FC6C842BE37CE (void);
// 0x000000F5 System.Byte[] Unity.Services.Qos.V2.Http.HttpClientResponse::get_Data()
extern void HttpClientResponse_get_Data_m90EB105CA62836A350E1B2D61BCFA3D5F185A104 (void);
// 0x000000F6 System.String Unity.Services.Qos.V2.Http.HttpClientResponse::get_ErrorMessage()
extern void HttpClientResponse_get_ErrorMessage_m1ED68838AC59FE7B487FF82DEFC2C5E7C0E23C94 (void);
// 0x000000F7 System.Void Unity.Services.Qos.V2.Http.HttpException::.ctor()
extern void HttpException__ctor_m56B1F3125AD45ED04EAED959C4EF11F4B3083936 (void);
// 0x000000F8 System.Void Unity.Services.Qos.V2.Http.HttpException::.ctor(System.String)
extern void HttpException__ctor_m7DF0357D52970D2033A7ECBCCE144B2DE593115F (void);
// 0x000000F9 System.Void Unity.Services.Qos.V2.Http.HttpException::.ctor(System.String,System.Exception)
extern void HttpException__ctor_m155A4CF823C7459C65BF3C8DDC7AAE36547CA7B6 (void);
// 0x000000FA System.Void Unity.Services.Qos.V2.Http.HttpException::.ctor(Unity.Services.Qos.V2.Http.HttpClientResponse)
extern void HttpException__ctor_m0D53C1B68D9190ECA5B628D216F0CEAACD4E03F7 (void);
// 0x000000FB System.Void Unity.Services.Qos.V2.Http.HttpException`1::.ctor()
// 0x000000FC System.Void Unity.Services.Qos.V2.Http.HttpException`1::.ctor(System.String)
// 0x000000FD System.Void Unity.Services.Qos.V2.Http.HttpException`1::.ctor(System.String,System.Exception)
// 0x000000FE System.Void Unity.Services.Qos.V2.Http.HttpException`1::.ctor(Unity.Services.Qos.V2.Http.HttpClientResponse,T)
// 0x000000FF System.String Unity.Services.Qos.V2.Http.IDeserializable::GetAsString()
// 0x00000100 T Unity.Services.Qos.V2.Http.IDeserializable::GetAs(Unity.Services.Qos.V2.Http.DeserializationSettings)
// 0x00000101 System.Threading.Tasks.Task`1<Unity.Services.Qos.V2.Http.HttpClientResponse> Unity.Services.Qos.V2.Http.IHttpClient::MakeRequestAsync(System.String,System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32)
// 0x00000102 System.Threading.Tasks.Task`1<Unity.Services.Qos.V2.Http.HttpClientResponse> Unity.Services.Qos.V2.Http.IHttpClient::MakeRequestAsync(System.String,System.String,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32,System.String)
// 0x00000103 System.String Unity.Services.Qos.V2.Http.IsolatedJsonConvert::SerializeObject(System.Object)
extern void IsolatedJsonConvert_SerializeObject_mF0E149D935475A0D6A60E9CAF2CAD0FD0827D4B0 (void);
// 0x00000104 System.String Unity.Services.Qos.V2.Http.IsolatedJsonConvert::SerializeObject(System.Object,Newtonsoft.Json.JsonSerializerSettings)
extern void IsolatedJsonConvert_SerializeObject_m6D09E9BB97001C9BBA798861D6F922368205A29F (void);
// 0x00000105 System.String Unity.Services.Qos.V2.Http.IsolatedJsonConvert::SerializeObject(System.Object,System.Type,Newtonsoft.Json.JsonSerializerSettings)
extern void IsolatedJsonConvert_SerializeObject_mA3C158E6DE35CEC3DB897E9E1D019D678C5DF70A (void);
// 0x00000106 System.String Unity.Services.Qos.V2.Http.IsolatedJsonConvert::SerializeObjectInternal(System.Object,System.Type,Newtonsoft.Json.JsonSerializer)
extern void IsolatedJsonConvert_SerializeObjectInternal_m0B3706D00A4C6E78F81C991C75DE69EFED55A1BD (void);
// 0x00000107 System.Object Unity.Services.Qos.V2.Http.IsolatedJsonConvert::DeserializeObject(System.String,System.Type)
extern void IsolatedJsonConvert_DeserializeObject_m84C20801A58CF7062F083029EB961BA6061FEA70 (void);
// 0x00000108 T Unity.Services.Qos.V2.Http.IsolatedJsonConvert::DeserializeObject(System.String,Newtonsoft.Json.JsonSerializerSettings)
// 0x00000109 System.Object Unity.Services.Qos.V2.Http.IsolatedJsonConvert::DeserializeObject(System.String,System.Type,Newtonsoft.Json.JsonSerializerSettings)
extern void IsolatedJsonConvert_DeserializeObject_m232B12822E263901AFEA2DCA88DF7D6514606EE9 (void);
// 0x0000010A System.Void Unity.Services.Qos.V2.Http.JsonHelpers::RegisterTypesForAOT()
extern void JsonHelpers_RegisterTypesForAOT_m9AC84581F871D81A657837F1101965F60B65C765 (void);
// 0x0000010B System.Boolean Unity.Services.Qos.V2.Http.JsonHelpers::TryParseJson(System.String,T&)
// 0x0000010C System.Void Unity.Services.Qos.V2.Http.JsonHelpers/<>c__DisplayClass1_0`1::.ctor()
// 0x0000010D System.Void Unity.Services.Qos.V2.Http.JsonHelpers/<>c__DisplayClass1_0`1::<TryParseJson>b__0(System.Object,Newtonsoft.Json.Serialization.ErrorEventArgs)
// 0x0000010E System.Void Unity.Services.Qos.V2.Http.JsonObject::.ctor(System.Object)
extern void JsonObject__ctor_m76BBEB84518544E890BEE4613468FD7B63A62299 (void);
// 0x0000010F System.String Unity.Services.Qos.V2.Http.JsonObject::GetAsString()
extern void JsonObject_GetAsString_mAF7AE24E8A0D9A12AE4BBBED2ED4BAB4B7D0A5CB (void);
// 0x00000110 T Unity.Services.Qos.V2.Http.JsonObject::GetAs(Unity.Services.Qos.V2.Http.DeserializationSettings)
// 0x00000111 T Unity.Services.Qos.V2.Http.JsonObject::GetAs()
// 0x00000112 Unity.Services.Qos.V2.Http.IDeserializable Unity.Services.Qos.V2.Http.JsonObject::GetNewJsonObjectResponse(System.Object)
extern void JsonObject_GetNewJsonObjectResponse_mE6F99FACD202136D834DC30B44CFAB4B2252A6D6 (void);
// 0x00000113 System.Collections.Generic.List`1<Unity.Services.Qos.V2.Http.IDeserializable> Unity.Services.Qos.V2.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.List`1<System.Object>)
extern void JsonObject_GetNewJsonObjectResponse_mC3136B5B8C9A15BD75D1BB8E7D56A82EB2EB1C39 (void);
// 0x00000114 System.Collections.Generic.List`1<System.Collections.Generic.List`1<Unity.Services.Qos.V2.Http.IDeserializable>> Unity.Services.Qos.V2.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>)
extern void JsonObject_GetNewJsonObjectResponse_m2E838ACE0779B649B75AA45D6318CE9A4F7AD092 (void);
// 0x00000115 System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Qos.V2.Http.IDeserializable> Unity.Services.Qos.V2.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void JsonObject_GetNewJsonObjectResponse_mAE4C4D6FA62724ADF07E112F422BBB0C1FC731A8 (void);
// 0x00000116 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Unity.Services.Qos.V2.Http.IDeserializable>> Unity.Services.Qos.V2.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Object>>)
extern void JsonObject_GetNewJsonObjectResponse_mBE3FF12677C8A71A56D63FF436470D5C932B99CD (void);
// 0x00000117 System.Void Unity.Services.Qos.V2.Http.JsonObject/<>c::.cctor()
extern void U3CU3Ec__cctor_m9A3B90D00BA19D51E262DAC1B50E0DF49810BF00 (void);
// 0x00000118 System.Void Unity.Services.Qos.V2.Http.JsonObject/<>c::.ctor()
extern void U3CU3Ec__ctor_mE38D4922153966099178C97D34082D683E443117 (void);
// 0x00000119 Unity.Services.Qos.V2.Http.IDeserializable Unity.Services.Qos.V2.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__6_0(System.Object)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__6_0_m2CFF2F5685962C6C48C02D044512510F86E47AD9 (void);
// 0x0000011A System.Collections.Generic.List`1<Unity.Services.Qos.V2.Http.IDeserializable> Unity.Services.Qos.V2.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__7_0(System.Collections.Generic.List`1<System.Object>)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_0_m8BC807A405084E06656799546E32C1DBE2A9F87B (void);
// 0x0000011B Unity.Services.Qos.V2.Http.IDeserializable Unity.Services.Qos.V2.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__7_1(System.Object)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_1_m4230394CBA289DAC96FA1B1A5EE2213FD2F0C5B8 (void);
// 0x0000011C System.String Unity.Services.Qos.V2.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__8_0(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_0_mA2BBA0B00C6FE089E7095365AC3D6927D08B0BDB (void);
// 0x0000011D Unity.Services.Qos.V2.Http.IDeserializable Unity.Services.Qos.V2.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__8_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_1_m02ED3A4806E0CAF48C3C9467D3D9071EE3A6E602 (void);
// 0x0000011E System.String Unity.Services.Qos.V2.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__9_0(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_0_mFB638C3620E1E8CCA9BA524A0BF79FC92DF4F346 (void);
// 0x0000011F System.Collections.Generic.List`1<Unity.Services.Qos.V2.Http.IDeserializable> Unity.Services.Qos.V2.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__9_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_1_mBC03EF8874FEB3F210FEB77544E164398C6B9EAD (void);
// 0x00000120 System.Void Unity.Services.Qos.V2.Http.JsonObjectConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern void JsonObjectConverter_WriteJson_m11A814AA1ECCEBB35B0AC29776C1C18566F82A06 (void);
// 0x00000121 System.Object Unity.Services.Qos.V2.Http.JsonObjectConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern void JsonObjectConverter_ReadJson_m17A78B97D55B3047BEE1466A6F086C4BFCF2610C (void);
// 0x00000122 System.Boolean Unity.Services.Qos.V2.Http.JsonObjectConverter::CanConvert(System.Type)
extern void JsonObjectConverter_CanConvert_m1BA5F4DF0386F8123E066CE56E8B83F810F5CF57 (void);
// 0x00000123 System.Void Unity.Services.Qos.V2.Http.JsonObjectConverter::.ctor()
extern void JsonObjectConverter__ctor_mEC08BEF0D6D0D413E896A2AA8BC971EC97E6A4FE (void);
// 0x00000124 System.Void Unity.Services.Qos.V2.Http.JsonObjectCollectionConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern void JsonObjectCollectionConverter_WriteJson_m6B39AA6C939A217A2E6A44799BA81FCBBB990FA6 (void);
// 0x00000125 System.Object Unity.Services.Qos.V2.Http.JsonObjectCollectionConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern void JsonObjectCollectionConverter_ReadJson_m53197199C2B829996368813CE1F47277148186D4 (void);
// 0x00000126 System.Boolean Unity.Services.Qos.V2.Http.JsonObjectCollectionConverter::CanConvert(System.Type)
extern void JsonObjectCollectionConverter_CanConvert_m7D32B651503B1613032B351A9F1CA8359EF5BBC2 (void);
// 0x00000127 System.Void Unity.Services.Qos.V2.Http.JsonObjectCollectionConverter::.ctor()
extern void JsonObjectCollectionConverter__ctor_mA72DAE09B91E8A66E8DDAED1D18801C7026F2694 (void);
// 0x00000128 System.Void Unity.Services.Qos.V2.Http.ResponseDeserializationException::.ctor()
extern void ResponseDeserializationException__ctor_m5B5004827E282726D44B12DB32B1ADC2FBFBBE25 (void);
// 0x00000129 System.Void Unity.Services.Qos.V2.Http.ResponseDeserializationException::.ctor(System.String)
extern void ResponseDeserializationException__ctor_mFE8C4B2DB284A49A71F899B5E99A830638D528D7 (void);
// 0x0000012A System.Void Unity.Services.Qos.V2.Http.ResponseDeserializationException::.ctor(System.Exception,System.String)
extern void ResponseDeserializationException__ctor_m5D95998ACCA430313677D10892F76AC103424C6A (void);
// 0x0000012B System.Void Unity.Services.Qos.V2.Http.ResponseDeserializationException::.ctor(Unity.Services.Qos.V2.Http.HttpClientResponse)
extern void ResponseDeserializationException__ctor_mE9EE538D52D5439D1104D65A837186359E1F340A (void);
// 0x0000012C System.Void Unity.Services.Qos.V2.Http.ResponseDeserializationException::.ctor(Unity.Services.Qos.V2.Http.HttpClientResponse,System.String)
extern void ResponseDeserializationException__ctor_mEE83CC673AF9C488CB1B933C52B097471D45EB61 (void);
// 0x0000012D System.Void Unity.Services.Qos.V2.Http.ResponseDeserializationException::.ctor(Unity.Services.Qos.V2.Http.HttpClientResponse,System.Exception,System.String)
extern void ResponseDeserializationException__ctor_m6806E7CF488FB7F7536F75AFA16CE4EA8606AC8F (void);
// 0x0000012E System.Collections.Generic.List`1<Unity.Services.Qos.V2.Http.IDeserializable> Unity.Services.Qos.V2.Http.ResponseHandler::DeserializeListOfJsonObjects(System.Collections.Generic.List`1<System.Object>)
extern void ResponseHandler_DeserializeListOfJsonObjects_m0C95BA2850D008FD83ED9B6762F6A6BCE328C220 (void);
// 0x0000012F T Unity.Services.Qos.V2.Http.ResponseHandler::TryDeserializeResponse(Unity.Services.Qos.V2.Http.HttpClientResponse)
// 0x00000130 System.Object Unity.Services.Qos.V2.Http.ResponseHandler::TryDeserializeResponse(Unity.Services.Qos.V2.Http.HttpClientResponse,System.Type)
extern void ResponseHandler_TryDeserializeResponse_m6E595A6902D10881E013E78F4881B5A193C1064D (void);
// 0x00000131 System.String Unity.Services.Qos.V2.Http.ResponseHandler::GetDeserializedJson(System.Byte[])
extern void ResponseHandler_GetDeserializedJson_m36D6444DD35AC8D6D3054C2B67244FB50FFE082E (void);
// 0x00000132 System.Void Unity.Services.Qos.V2.Http.ResponseHandler::HandleAsyncResponse(Unity.Services.Qos.V2.Http.HttpClientResponse,System.Collections.Generic.Dictionary`2<System.String,System.Type>)
extern void ResponseHandler_HandleAsyncResponse_mB21C166EF9F475DCA788AE3F6819310DA3FAFAD7 (void);
// 0x00000133 Unity.Services.Qos.V2.Http.HttpException Unity.Services.Qos.V2.Http.ResponseHandler::CreateOneOfException(Unity.Services.Qos.V2.Http.HttpClientResponse,System.Type)
extern void ResponseHandler_CreateOneOfException_mF2FA0A693B3D5ED2DA53B3361C2AA2515372808F (void);
// 0x00000134 Unity.Services.Qos.V2.Http.HttpException Unity.Services.Qos.V2.Http.ResponseHandler::CreateHttpException(Unity.Services.Qos.V2.Http.HttpClientResponse,System.Type)
extern void ResponseHandler_CreateHttpException_m3810058BEB23369421627F4E2E5F27D8911C10F3 (void);
// 0x00000135 T Unity.Services.Qos.V2.Http.ResponseHandler::HandleAsyncResponse(Unity.Services.Qos.V2.Http.HttpClientResponse,System.Collections.Generic.Dictionary`2<System.String,System.Type>)
// 0x00000136 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.V2.Http.HttpClientResponse> Unity.Services.Qos.V2.Http.UnityWebRequestHelpers::GetAwaiter(UnityEngine.Networking.UnityWebRequestAsyncOperation)
extern void UnityWebRequestHelpers_GetAwaiter_mE2760096C2CE492857E955C9BEFBCCC11F272C9E (void);
// 0x00000137 Unity.Services.Qos.V2.Http.HttpClientResponse Unity.Services.Qos.V2.Http.UnityWebRequestHelpers::CreateHttpClientResponse(UnityEngine.Networking.UnityWebRequestAsyncOperation)
extern void UnityWebRequestHelpers_CreateHttpClientResponse_m3D55E4E32A0CDC8E3340EC906829A395EC46F61B (void);
// 0x00000138 System.Void Unity.Services.Qos.V2.Http.UnityWebRequestHelpers/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mC77E42F237CE8BB1B7A5A81EB38AA265713FE0A4 (void);
// 0x00000139 System.Void Unity.Services.Qos.V2.Http.UnityWebRequestHelpers/<>c__DisplayClass0_0::<GetAwaiter>b__0(UnityEngine.AsyncOperation)
extern void U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_mD6136492605C69565CF2A33C0416C156DC036E2F (void);
// 0x0000013A Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1<T> Unity.Services.Qos.V2.Helpers.AsyncOpRetry::FromCreateAsync(System.Func`2<System.Int32,T>)
// 0x0000013B System.UInt32 Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::get_MaxRetries()
// 0x0000013C System.Void Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::set_MaxRetries(System.UInt32)
// 0x0000013D System.Single Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::get_JitterMagnitude()
// 0x0000013E System.Void Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::set_JitterMagnitude(System.Single)
// 0x0000013F System.Single Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::get_DelayScale()
// 0x00000140 System.Void Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::set_DelayScale(System.Single)
// 0x00000141 System.Single Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::get_MaxDelayTime()
// 0x00000142 System.Void Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::set_MaxDelayTime(System.Single)
// 0x00000143 System.Func`2<System.Int32,T> Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::get_CreateOperation()
// 0x00000144 System.Void Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::set_CreateOperation(System.Func`2<System.Int32,T>)
// 0x00000145 System.Func`2<T,System.Boolean> Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::get_RetryCondition()
// 0x00000146 System.Void Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::set_RetryCondition(System.Func`2<T,System.Boolean>)
// 0x00000147 System.Action`1<T> Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::get_OnComplete()
// 0x00000148 System.Void Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::set_OnComplete(System.Action`1<T>)
// 0x00000149 System.Void Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::.ctor(System.Func`2<System.Int32,T>)
// 0x0000014A System.Single Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::AddJitter(System.Single,System.Single)
// 0x0000014B System.Single Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::Pow2(System.Single,System.Single)
// 0x0000014C System.Single Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::CalculateDelay(System.Int32,System.Single,System.Single,System.Single)
// 0x0000014D Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1<T> Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::FromCreateAsync(System.Func`2<System.Int32,T>)
// 0x0000014E Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1<T> Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::WithRetryCondition(System.Func`2<T,System.Boolean>)
// 0x0000014F Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1<T> Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::WhenComplete(System.Action`1<T>)
// 0x00000150 System.Collections.IEnumerator Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1::Run()
// 0x00000151 System.Void Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1/<Run>d__35::.ctor(System.Int32)
// 0x00000152 System.Void Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1/<Run>d__35::System.IDisposable.Dispose()
// 0x00000153 System.Boolean Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1/<Run>d__35::MoveNext()
// 0x00000154 System.Object Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1/<Run>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
// 0x00000155 System.Void Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1/<Run>d__35::System.Collections.IEnumerator.Reset()
// 0x00000156 System.Object Unity.Services.Qos.V2.Helpers.AsyncOpRetry`1/<Run>d__35::System.Collections.IEnumerator.get_Current()
// 0x00000157 Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicyProvider::ForOperation(System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>>)
// 0x00000158 Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicyProvider::ForOperation(System.Func`1<System.Threading.Tasks.Task`1<T>>)
// 0x00000159 Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1::WithJitterMagnitude(System.Single)
// 0x0000015A Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1::WithDelayScale(System.Single)
// 0x0000015B Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1::WithMaxDelayTime(System.Single)
// 0x0000015C Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1::WithRetryCondition(System.Func`2<T,System.Threading.Tasks.Task`1<System.Boolean>>)
// 0x0000015D Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1::UptoMaximumRetries(System.UInt32)
// 0x0000015E Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1::HandleException()
// 0x0000015F Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1::HandleException(System.Func`2<TException,System.Boolean>)
// 0x00000160 System.Threading.Tasks.Task`1<T> Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1::RunAsync(Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig)
// 0x00000161 Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyProvider::ForOperation(System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>>)
// 0x00000162 Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyProvider::ForOperation(System.Func`1<System.Threading.Tasks.Task`1<T>>)
// 0x00000163 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyProvider::.ctor()
extern void RetryPolicyProvider__ctor_m22C9BF5C563064E4FAD71BA2ADBBCBEBB2158194 (void);
// 0x00000164 System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::get_CreateOperation()
// 0x00000165 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::set_CreateOperation(System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>>)
// 0x00000166 System.Func`2<T,System.Threading.Tasks.Task`1<System.Boolean>> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::get_RetryCondition()
// 0x00000167 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::set_RetryCondition(System.Func`2<T,System.Threading.Tasks.Task`1<System.Boolean>>)
// 0x00000168 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::.ctor(System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>>)
// 0x00000169 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::.ctor(System.Func`1<System.Threading.Tasks.Task`1<T>>)
// 0x0000016A System.Single Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::AddJitter(System.Single,System.Single)
// 0x0000016B System.Single Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::Pow2(System.Single,System.Single)
// 0x0000016C System.Single Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::CalculateDelay(System.Int32,System.Single,System.Single,System.Single)
// 0x0000016D Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::WithJitterMagnitude(System.Single)
// 0x0000016E Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::WithDelayScale(System.Single)
// 0x0000016F Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::WithMaxDelayTime(System.Single)
// 0x00000170 Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::ForOperation(System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>>)
// 0x00000171 Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::ForOperation(System.Func`1<System.Threading.Tasks.Task`1<T>>)
// 0x00000172 Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::WithRetryCondition(System.Func`2<T,System.Threading.Tasks.Task`1<System.Boolean>>)
// 0x00000173 Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::UptoMaximumRetries(System.UInt32)
// 0x00000174 Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::HandleException()
// 0x00000175 Unity.Services.Qos.V2.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::HandleException(System.Func`2<TException,System.Boolean>)
// 0x00000176 System.Threading.Tasks.Task`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1::RunAsync(Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig)
// 0x00000177 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1/<>c__DisplayClass10_0::.ctor()
// 0x00000178 System.Threading.Tasks.Task`1<T> Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1/<>c__DisplayClass10_0::<.ctor>b__0(System.Int32)
// 0x00000179 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1/<RunAsync>d__23::MoveNext()
// 0x0000017A System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicy`1/<RunAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x0000017B System.Void Unity.Services.Qos.V2.ErrorMitigation.ExceptionPredicate::.ctor(System.Object,System.IntPtr)
extern void ExceptionPredicate__ctor_m67BD2C89AA92DF39E595F2DB73C9B8B44C70A635 (void);
// 0x0000017C System.Exception Unity.Services.Qos.V2.ErrorMitigation.ExceptionPredicate::Invoke(System.Exception)
extern void ExceptionPredicate_Invoke_mC841BF056636E4D49E4F918360E4E58E7C48BF96 (void);
// 0x0000017D System.IAsyncResult Unity.Services.Qos.V2.ErrorMitigation.ExceptionPredicate::BeginInvoke(System.Exception,System.AsyncCallback,System.Object)
extern void ExceptionPredicate_BeginInvoke_mE94ECEB3DC45F01C5AE7110F3E22392EE95A4997 (void);
// 0x0000017E System.Exception Unity.Services.Qos.V2.ErrorMitigation.ExceptionPredicate::EndInvoke(System.IAsyncResult)
extern void ExceptionPredicate_EndInvoke_mFD8126B21EE9E1EE82CD1DDF133E3D9EADEC2F1E (void);
// 0x0000017F System.UInt32 Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::get_MaxRetries()
extern void RetryPolicyConfig_get_MaxRetries_m1AEE59CE20A42BB06E3F17B052CC87F947BB6ED2 (void);
// 0x00000180 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::set_MaxRetries(System.UInt32)
extern void RetryPolicyConfig_set_MaxRetries_m63D703E34AADA669300FE2985F55E489C861256F (void);
// 0x00000181 System.Single Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::get_JitterMagnitude()
extern void RetryPolicyConfig_get_JitterMagnitude_m8F4CEE0705B47106435422011CF04B756162EAB5 (void);
// 0x00000182 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::set_JitterMagnitude(System.Single)
extern void RetryPolicyConfig_set_JitterMagnitude_mAE04D234588D2DF71BBAB677D37A90B2AD3584D0 (void);
// 0x00000183 System.Single Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::get_DelayScale()
extern void RetryPolicyConfig_get_DelayScale_mF126FCCC91B5BDE54E887D282DD7B08CE18FE298 (void);
// 0x00000184 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::set_DelayScale(System.Single)
extern void RetryPolicyConfig_set_DelayScale_m8B88949CEA13D4EA5193940520B4068426F21951 (void);
// 0x00000185 System.Single Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::get_MaxDelayTime()
extern void RetryPolicyConfig_get_MaxDelayTime_m182CF786751FD16FF936BD46CB14FE0BE618D80D (void);
// 0x00000186 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::set_MaxDelayTime(System.Single)
extern void RetryPolicyConfig_set_MaxDelayTime_m52850E6132AD9334EF85D043747FA30F82AE3DB5 (void);
// 0x00000187 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::HandleException()
// 0x00000188 System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::HandleException(System.Func`2<TException,System.Boolean>)
// 0x00000189 System.Boolean Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::IsHandledException(System.Exception)
extern void RetryPolicyConfig_IsHandledException_m4698C731AEA0C01763BEADF187A261113D8A2281 (void);
// 0x0000018A System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig::.ctor()
extern void RetryPolicyConfig__ctor_m7041144B56A834A556D03D36BDAD8E3E2AA0D7F0 (void);
// 0x0000018B System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig/<>c__17`1::.cctor()
// 0x0000018C System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig/<>c__17`1::.ctor()
// 0x0000018D System.Exception Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig/<>c__17`1::<HandleException>b__17_0(System.Exception)
// 0x0000018E System.Void Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig/<>c__DisplayClass18_0`1::.ctor()
// 0x0000018F System.Exception Unity.Services.Qos.V2.ErrorMitigation.RetryPolicyConfig/<>c__DisplayClass18_0`1::<HandleException>b__0(System.Exception)
// 0x00000190 System.Void Unity.Services.Qos.V2.ErrorMitigation.StatusCodePolicyConfig::HandleStatusCode(System.Int64)
extern void StatusCodePolicyConfig_HandleStatusCode_m562A8B63419625D48D9E78CA281B881AD62EE614 (void);
// 0x00000191 System.Void Unity.Services.Qos.V2.ErrorMitigation.StatusCodePolicyConfig::DontHandleStatusCode(System.Int64)
extern void StatusCodePolicyConfig_DontHandleStatusCode_mA8EC8C60DF585907106C846352D8BAD33A48C5A2 (void);
// 0x00000192 System.Void Unity.Services.Qos.V2.ErrorMitigation.StatusCodePolicyConfig::Clear()
extern void StatusCodePolicyConfig_Clear_mC4CFEABB0DEAB858DF59EFBFBCD8A602EC7219E3 (void);
// 0x00000193 System.Boolean Unity.Services.Qos.V2.ErrorMitigation.StatusCodePolicyConfig::IsHandledStatusCode(System.Int64)
extern void StatusCodePolicyConfig_IsHandledStatusCode_m558E790B33F3B5AA63FDB3C149789AC5933D77FD (void);
// 0x00000194 System.Void Unity.Services.Qos.V2.ErrorMitigation.StatusCodePolicyConfig::.ctor()
extern void StatusCodePolicyConfig__ctor_m350076C711F7148EE5B14D1CEB764015949B193E (void);
// 0x00000195 System.Byte[] Unity.Services.Qos.V2.QosDiscovery.JsonSerialization::Serialize(T)
// 0x00000196 System.String Unity.Services.Qos.V2.QosDiscovery.JsonSerialization::SerializeToString(T)
// 0x00000197 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.String,System.String)
extern void QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m9C7AE771A1B635CECE68911DA5BAF7FF22FD23CF (void);
// 0x00000198 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.String,System.Collections.Generic.List`1<System.String>,System.String,System.Boolean)
extern void QosDiscoveryApiBaseRequest_AddParamsToQueryParams_mF81A9845B1402B5520E5C8965194648507EAB92C (void);
// 0x00000199 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m53AAFAAFC14EDDD73E315F03F367337836C76613 (void);
// 0x0000019A System.Collections.Generic.List`1<System.String> Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.String,T)
// 0x0000019B System.String Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::GetPathParamString(System.Collections.Generic.List`1<System.String>)
extern void QosDiscoveryApiBaseRequest_GetPathParamString_m71AF2F9B2736BE78F12D26EE5B1C3DA7D79E7476 (void);
// 0x0000019C System.Byte[] Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::ConstructBody(System.IO.Stream)
extern void QosDiscoveryApiBaseRequest_ConstructBody_mEEC34D3E19CE6579A245274AAAD5744CBC60E5B9 (void);
// 0x0000019D System.Byte[] Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::ConstructBody(System.String)
extern void QosDiscoveryApiBaseRequest_ConstructBody_m0013877BDE9CF58C754F956A43D50320E7D03238 (void);
// 0x0000019E System.Byte[] Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::ConstructBody(System.Object)
extern void QosDiscoveryApiBaseRequest_ConstructBody_m37FE060861B9C7EEFA3C72345CA9E5D25068D0D2 (void);
// 0x0000019F System.String Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateAcceptHeader(System.String[])
extern void QosDiscoveryApiBaseRequest_GenerateAcceptHeader_m3FFC888CF111A6405653B4D07C91639809F91641 (void);
// 0x000001A0 System.String Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateContentTypeHeader(System.String[])
extern void QosDiscoveryApiBaseRequest_GenerateContentTypeHeader_m5C698BF18D356D1BF85CF5E5E50AE73C6CF47A32 (void);
// 0x000001A1 UnityEngine.Networking.IMultipartFormSection Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateMultipartFormFileSection(System.String,System.IO.FileStream,System.String)
extern void QosDiscoveryApiBaseRequest_GenerateMultipartFormFileSection_m447D5C2FA804A405C2E32DA38A33E549A332B120 (void);
// 0x000001A2 UnityEngine.Networking.IMultipartFormSection Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateMultipartFormFileSection(System.String,System.IO.Stream,System.String)
extern void QosDiscoveryApiBaseRequest_GenerateMultipartFormFileSection_m8A747AF0C315578077F2D2399CCAC3A61723037F (void);
// 0x000001A3 System.String Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::GetFileName(System.String)
extern void QosDiscoveryApiBaseRequest_GetFileName_mA5471031B2EDCB13C9FBE74D26A2865F775DB3BC (void);
// 0x000001A4 System.Void Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::.ctor()
extern void QosDiscoveryApiBaseRequest__ctor_m4A19CE480188FA08702DE7D550B4A8BF4E971593 (void);
// 0x000001A5 System.Void Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest::.cctor()
extern void QosDiscoveryApiBaseRequest__cctor_m155FE9F00E2C9660B6E4F23A2B8287440BAEA00B (void);
// 0x000001A6 System.Guid Unity.Services.Qos.V2.QosDiscovery.GetAllServersRequest::get_XRequestId()
extern void GetAllServersRequest_get_XRequestId_m7E805AF278D807591231A80E8AA5A7EFFC34F3F8 (void);
// 0x000001A7 System.String Unity.Services.Qos.V2.QosDiscovery.GetAllServersRequest::get_XUser()
extern void GetAllServersRequest_get_XUser_m7A6C0A79CD175E8A6BD8D61DDFF5216573122F65 (void);
// 0x000001A8 System.String Unity.Services.Qos.V2.QosDiscovery.GetAllServersRequest::get_XUserType()
extern void GetAllServersRequest_get_XUserType_m457468389E9E854E04FFBFEE7BDAECFCE9A8C772 (void);
// 0x000001A9 System.Void Unity.Services.Qos.V2.QosDiscovery.GetAllServersRequest::.ctor(System.Guid,System.String,System.String)
extern void GetAllServersRequest__ctor_mC3234801942293C335BE0F84180CFF69D1839DEF (void);
// 0x000001AA System.String Unity.Services.Qos.V2.QosDiscovery.GetAllServersRequest::ConstructUrl(System.String)
extern void GetAllServersRequest_ConstructUrl_m210AB3AE96B98625544969BAB935D068FEE80BFE (void);
// 0x000001AB System.Byte[] Unity.Services.Qos.V2.QosDiscovery.GetAllServersRequest::ConstructBody()
extern void GetAllServersRequest_ConstructBody_m241D8C070F61DD2F6771D4A36279DAC5A958250D (void);
// 0x000001AC System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.V2.QosDiscovery.GetAllServersRequest::ConstructHeaders(Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Qos.V2.Configuration)
extern void GetAllServersRequest_ConstructHeaders_mEF61480AA56FB6C7E802CB0B404AEE100C293A6C (void);
// 0x000001AD System.Threading.Tasks.Task`1<Unity.Services.Qos.V2.Response`1<Unity.Services.Qos.V2.Models.QosServersResponseBody>> Unity.Services.Qos.V2.Apis.QosDiscovery.IQosDiscoveryApiClient::GetAllServersAsync(Unity.Services.Qos.V2.QosDiscovery.GetAllServersRequest,Unity.Services.Qos.V2.Configuration)
// 0x000001AE Unity.Services.Qos.V2.Configuration Unity.Services.Qos.V2.Apis.QosDiscovery.QosDiscoveryApiClient::get_Configuration()
extern void QosDiscoveryApiClient_get_Configuration_m5DD394B3D852735DA0A6C7793A6CF4808A11AC41 (void);
// 0x000001AF System.Void Unity.Services.Qos.V2.Apis.QosDiscovery.QosDiscoveryApiClient::set_Configuration(Unity.Services.Qos.V2.Configuration)
extern void QosDiscoveryApiClient_set_Configuration_m0151BFC5C8C216CC6FCE82321ABDEAB5842309D7 (void);
// 0x000001B0 System.Void Unity.Services.Qos.V2.Apis.QosDiscovery.QosDiscoveryApiClient::.ctor(Unity.Services.Qos.V2.Http.IHttpClient,Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Qos.V2.Configuration)
extern void QosDiscoveryApiClient__ctor_m3EB6B81FDAD2816FA74646DCEFCA1DB02E0E6BEF (void);
// 0x000001B1 System.Threading.Tasks.Task`1<Unity.Services.Qos.V2.Response`1<Unity.Services.Qos.V2.Models.QosServersResponseBody>> Unity.Services.Qos.V2.Apis.QosDiscovery.QosDiscoveryApiClient::GetAllServersAsync(Unity.Services.Qos.V2.QosDiscovery.GetAllServersRequest,Unity.Services.Qos.V2.Configuration)
extern void QosDiscoveryApiClient_GetAllServersAsync_m6703F25118C310B3F52C9163C0F42B369279258E (void);
// 0x000001B2 System.Void Unity.Services.Qos.V2.Apis.QosDiscovery.QosDiscoveryApiClient/<GetAllServersAsync>d__7::MoveNext()
extern void U3CGetAllServersAsyncU3Ed__7_MoveNext_mF6D563EAA5ADCD3AD468BE6E4E53155B24B51117 (void);
// 0x000001B3 System.Void Unity.Services.Qos.V2.Apis.QosDiscovery.QosDiscoveryApiClient/<GetAllServersAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetAllServersAsyncU3Ed__7_SetStateMachine_m1DE222CE63529BB3B0DB974ED3A14A425D91792E (void);
// 0x000001B4 System.Void Unity.Services.Qos.Scheduler.EngineStateHelper::Init()
extern void EngineStateHelper_Init_mCD239B6552B997DD76949AEF864CF813A6BDB6FD (void);
// 0x000001B5 System.Threading.SynchronizationContext Unity.Services.Qos.Scheduler.ThreadHelper::get_SynchronizationContext()
extern void ThreadHelper_get_SynchronizationContext_mEBBC5F6DC87B64616443CEC47B262855D07E3F3F (void);
// 0x000001B6 System.Threading.Tasks.TaskScheduler Unity.Services.Qos.Scheduler.ThreadHelper::get_TaskScheduler()
extern void ThreadHelper_get_TaskScheduler_mE4BB459B45461BD9314E69B218A9D3F021E98672 (void);
// 0x000001B7 System.Int32 Unity.Services.Qos.Scheduler.ThreadHelper::get_MainThreadId()
extern void ThreadHelper_get_MainThreadId_mCD0E6B56C919EE955A6854D09DE35BDD964B4027 (void);
// 0x000001B8 System.Void Unity.Services.Qos.Scheduler.ThreadHelper::Init()
extern void ThreadHelper_Init_m06C176E2197E46ADA5299D3B56CB0DAF6A996525 (void);
// 0x000001B9 System.Void Unity.Services.Qos.Runner.QosJobProvider::.ctor(System.Object,System.IntPtr)
extern void QosJobProvider__ctor_mF18C33B6615A7DB6BB7D499EBF39C5A4C0E6BA86 (void);
// 0x000001BA Unity.Services.Qos.Runner.IQosJob Unity.Services.Qos.Runner.QosJobProvider::Invoke(System.Collections.Generic.IList`1<Unity.Networking.QoS.UcgQosServer>,System.String)
extern void QosJobProvider_Invoke_mCB0FA4045A9C73CF90E75AD05B0941BFBB502A7E (void);
// 0x000001BB System.IAsyncResult Unity.Services.Qos.Runner.QosJobProvider::BeginInvoke(System.Collections.Generic.IList`1<Unity.Networking.QoS.UcgQosServer>,System.String,System.AsyncCallback,System.Object)
extern void QosJobProvider_BeginInvoke_mE3401CEFB56B3A3966ECA906FACBB7521970B7D4 (void);
// 0x000001BC Unity.Services.Qos.Runner.IQosJob Unity.Services.Qos.Runner.QosJobProvider::EndInvoke(System.IAsyncResult)
extern void QosJobProvider_EndInvoke_mC04093465A5A7837DDD88EF683C5442E0CE38FA9 (void);
// 0x000001BD System.Void Unity.Services.Qos.Runner.DnsResolver::.ctor(System.Object,System.IntPtr)
extern void DnsResolver__ctor_m8190EBA2601E2FE2EB896BA1B4F3D1C26BF5DB15 (void);
// 0x000001BE System.Threading.Tasks.Task`1<System.Net.IPAddress[]> Unity.Services.Qos.Runner.DnsResolver::Invoke(System.String)
extern void DnsResolver_Invoke_m6BD09E67240C78EF4CEEBA58370775BE7B198520 (void);
// 0x000001BF System.IAsyncResult Unity.Services.Qos.Runner.DnsResolver::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void DnsResolver_BeginInvoke_mF04E381AFD35B6CBCEB317025B52F7EC63FDE8A4 (void);
// 0x000001C0 System.Threading.Tasks.Task`1<System.Net.IPAddress[]> Unity.Services.Qos.Runner.DnsResolver::EndInvoke(System.IAsyncResult)
extern void DnsResolver_EndInvoke_mEDC9BF3A6C20588EE374D639BFDC4A01EB3839A2 (void);
// 0x000001C1 System.Void Unity.Services.Qos.Runner.BaselibQosRunner::.ctor(Unity.Services.Qos.Runner.QosJobProvider,Unity.Services.Qos.Runner.DnsResolver)
extern void BaselibQosRunner__ctor_mD170788D00E9722B9479E4FF4440D4161A4D43E6 (void);
// 0x000001C2 System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Qos.Internal.QosResult>> Unity.Services.Qos.Runner.BaselibQosRunner::MeasureQosAsync(System.Collections.Generic.IList`1<Unity.Services.Qos.Models.QosServer>)
extern void BaselibQosRunner_MeasureQosAsync_m6EDEEF2BA140E318C908BF8DF5CC1BA194AF6DB8 (void);
// 0x000001C3 System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Qos.Runner.QosAnnotatedResult>> Unity.Services.Qos.Runner.BaselibQosRunner::MeasureQosAsync(System.Collections.Generic.IList`1<Unity.Services.Qos.Models.QosServiceServer>)
extern void BaselibQosRunner_MeasureQosAsync_m0D44B657A6AE3031D5A6DCE0A5B2330B322C4A62 (void);
// 0x000001C4 System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.ValueTuple`2<Unity.Services.Qos.V2.Models.QosServer,Unity.Services.Qos.IQosMeasurements>>> Unity.Services.Qos.Runner.BaselibQosRunner::MeasureQosV2Async(System.Collections.Generic.IList`1<Unity.Services.Qos.V2.Models.QosServer>)
extern void BaselibQosRunner_MeasureQosV2Async_mBBEF6DC22124DB69221BF4A47B00153BEF3FB5EE (void);
// 0x000001C5 System.Threading.Tasks.Task`1<Unity.Services.Qos.Runner.IQosJob> Unity.Services.Qos.Runner.BaselibQosRunner::RunQosJob(System.Collections.Generic.List`1<Unity.Networking.QoS.UcgQosServer>)
extern void BaselibQosRunner_RunQosJob_m8A871B7A0A39749A0C0AB9EF248CCBFAFF8D3446 (void);
// 0x000001C6 System.Threading.Tasks.Task`1<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>> Unity.Services.Qos.Runner.BaselibQosRunner::ToUcgFormat(Unity.Services.Qos.Models.QosServer)
extern void BaselibQosRunner_ToUcgFormat_m1419968ECB7ECDB7B32C74DB6CBBF1CF61B2FA89 (void);
// 0x000001C7 System.Threading.Tasks.Task`1<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>> Unity.Services.Qos.Runner.BaselibQosRunner::ToUcgFormat(Unity.Services.Qos.Models.QosServiceServer)
extern void BaselibQosRunner_ToUcgFormat_m64C7E5FF60580CE53D0F4F5485FE514C0DF4550A (void);
// 0x000001C8 System.Threading.Tasks.Task`1<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>> Unity.Services.Qos.Runner.BaselibQosRunner::ToUcgFormat(System.String,System.String)
extern void BaselibQosRunner_ToUcgFormat_mD1277570CCE59D0110FD04FE24200A8B179A3FD4 (void);
// 0x000001C9 System.Collections.Generic.List`1<Unity.Services.Qos.Internal.QosResult> Unity.Services.Qos.Runner.BaselibQosRunner::ParseResults(System.Collections.Generic.IEnumerable`1<Unity.Networking.QoS.InternalQosResult>,System.Collections.Generic.IEnumerable`1<Unity.Services.Qos.Models.QosServer>)
extern void BaselibQosRunner_ParseResults_mF971BD8AA0A60F083F10C21B1FBB6322B23FA80A (void);
// 0x000001CA System.Collections.Generic.List`1<Unity.Services.Qos.Runner.QosAnnotatedResult> Unity.Services.Qos.Runner.BaselibQosRunner::ParseResults(System.Collections.Generic.IEnumerable`1<Unity.Networking.QoS.InternalQosResult>,System.Collections.Generic.IEnumerable`1<Unity.Services.Qos.Models.QosServiceServer>)
extern void BaselibQosRunner_ParseResults_mCDA26B980021BDC0A3C6AA8FC17EA3E8E2C90BD6 (void);
// 0x000001CB System.Void Unity.Services.Qos.Runner.BaselibQosRunner/QosMeasurementImpl::.ctor(System.Int32,System.Single)
extern void QosMeasurementImpl__ctor_mA5AD384D44EDEF7B31FC83C56E78C560DE56BA18 (void);
// 0x000001CC System.Int32 Unity.Services.Qos.Runner.BaselibQosRunner/QosMeasurementImpl::get_AverageLatencyMs()
extern void QosMeasurementImpl_get_AverageLatencyMs_m7C21C00D153E77F2F7AE3FE22B4F1F437CE9779D (void);
// 0x000001CD System.Single Unity.Services.Qos.Runner.BaselibQosRunner/QosMeasurementImpl::get_PacketLossPercent()
extern void QosMeasurementImpl_get_PacketLossPercent_m67248A58292C983F1DA0D5DD393C14AA9FB1902E (void);
// 0x000001CE System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<>c::.cctor()
extern void U3CU3Ec__cctor_m26C8EDF69C0D13638AD94C6488ED58BD79C95C7F (void);
// 0x000001CF System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<>c::.ctor()
extern void U3CU3Ec__ctor_m53A1925C62020D1466BB7427BA0A020BD5E7B040 (void);
// 0x000001D0 Unity.Services.Qos.Runner.IQosJob Unity.Services.Qos.Runner.BaselibQosRunner/<>c::<.ctor>b__2_0(System.Collections.Generic.IList`1<Unity.Networking.QoS.UcgQosServer>,System.String)
extern void U3CU3Ec_U3C_ctorU3Eb__2_0_mF20635D6BECBC77DD68D7933D34C74E53BF39651 (void);
// 0x000001D1 System.Boolean Unity.Services.Qos.Runner.BaselibQosRunner/<>c::<MeasureQosAsync>b__3_0(System.Nullable`1<Unity.Networking.QoS.UcgQosServer>)
extern void U3CU3Ec_U3CMeasureQosAsyncU3Eb__3_0_mEF244A574C993EC47234D5203EBF0F9A2D32A2A0 (void);
// 0x000001D2 Unity.Networking.QoS.UcgQosServer Unity.Services.Qos.Runner.BaselibQosRunner/<>c::<MeasureQosAsync>b__3_1(System.Nullable`1<Unity.Networking.QoS.UcgQosServer>)
extern void U3CU3Ec_U3CMeasureQosAsyncU3Eb__3_1_mDDF2659E48C4F06482DCC87A0908A9A19C2168C2 (void);
// 0x000001D3 System.Boolean Unity.Services.Qos.Runner.BaselibQosRunner/<>c::<MeasureQosAsync>b__4_0(System.Nullable`1<Unity.Networking.QoS.UcgQosServer>)
extern void U3CU3Ec_U3CMeasureQosAsyncU3Eb__4_0_mAE20C1E96E9E389D34A9C721402B2C69855C18BA (void);
// 0x000001D4 Unity.Networking.QoS.UcgQosServer Unity.Services.Qos.Runner.BaselibQosRunner/<>c::<MeasureQosAsync>b__4_1(System.Nullable`1<Unity.Networking.QoS.UcgQosServer>)
extern void U3CU3Ec_U3CMeasureQosAsyncU3Eb__4_1_mD2C02BF6EC9807C32D3AAE9BE231E58B4784ACAD (void);
// 0x000001D5 Unity.Services.Qos.Models.QosServer Unity.Services.Qos.Runner.BaselibQosRunner/<>c::<MeasureQosV2Async>b__6_0(Unity.Services.Qos.V2.Models.QosServer)
extern void U3CU3Ec_U3CMeasureQosV2AsyncU3Eb__6_0_mDD3C9F7601360629AD04DA9F9F4A021AF29DF9FD (void);
// 0x000001D6 Unity.Services.Qos.Runner.BaselibQosRunner/QosMeasurementImpl Unity.Services.Qos.Runner.BaselibQosRunner/<>c::<MeasureQosV2Async>b__6_1(Unity.Services.Qos.Internal.QosResult)
extern void U3CU3Ec_U3CMeasureQosV2AsyncU3Eb__6_1_mDCC25DC3476D37B035986315A60AEB7AC1107635 (void);
// 0x000001D7 System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<MeasureQosAsync>d__3::MoveNext()
extern void U3CMeasureQosAsyncU3Ed__3_MoveNext_mDCDD25826B3494B3AE4241AE8A3AD5F8DFB2A29C (void);
// 0x000001D8 System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<MeasureQosAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CMeasureQosAsyncU3Ed__3_SetStateMachine_m1D0DB6B0A212BD39D5B0D6E603F6DD02825170EE (void);
// 0x000001D9 System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<MeasureQosAsync>d__4::MoveNext()
extern void U3CMeasureQosAsyncU3Ed__4_MoveNext_mD588B05CEC27001ADD67D1B2822C60223F175A62 (void);
// 0x000001DA System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<MeasureQosAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CMeasureQosAsyncU3Ed__4_SetStateMachine_m441DBB95C27491AB06BF872810D871A8B5FD14C0 (void);
// 0x000001DB System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<MeasureQosV2Async>d__6::MoveNext()
extern void U3CMeasureQosV2AsyncU3Ed__6_MoveNext_m16650CBDB2BC9B65229C044365F621A2871A8616 (void);
// 0x000001DC System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<MeasureQosV2Async>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CMeasureQosV2AsyncU3Ed__6_SetStateMachine_m621A5637354BDE7CB90F1462C6AFFD2F8D933345 (void);
// 0x000001DD System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<RunQosJob>d__7::MoveNext()
extern void U3CRunQosJobU3Ed__7_MoveNext_m6D7367F4C787189E87FE14DB22A65E61FB200F8F (void);
// 0x000001DE System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<RunQosJob>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRunQosJobU3Ed__7_SetStateMachine_m6CE58755D03AA344F86F67DCFE3C18B6EBB5DAD7 (void);
// 0x000001DF System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<ToUcgFormat>d__8::MoveNext()
extern void U3CToUcgFormatU3Ed__8_MoveNext_m26ED24613375D59369F99DD4DE40340D539B2178 (void);
// 0x000001E0 System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<ToUcgFormat>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CToUcgFormatU3Ed__8_SetStateMachine_m028D60346CDECA21D321AAA8BA625B2A05C628A7 (void);
// 0x000001E1 System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<ToUcgFormat>d__9::MoveNext()
extern void U3CToUcgFormatU3Ed__9_MoveNext_m003A1E79E46FEDFDD87BF5009F24AE2443960F1E (void);
// 0x000001E2 System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<ToUcgFormat>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CToUcgFormatU3Ed__9_SetStateMachine_m89E3571F337A54BC07406552056A1576E07EB6A4 (void);
// 0x000001E3 System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<ToUcgFormat>d__10::MoveNext()
extern void U3CToUcgFormatU3Ed__10_MoveNext_m2CB11B7F42D80B586C86AAE8E2B76EE42002920A (void);
// 0x000001E4 System.Void Unity.Services.Qos.Runner.BaselibQosRunner/<ToUcgFormat>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CToUcgFormatU3Ed__10_SetStateMachine_m4ECD2D5A473727644A24747D4FDB0865841E0C87 (void);
// 0x000001E5 Unity.Jobs.JobHandle Unity.Services.Qos.Runner.IQosJob::Schedule(Unity.Jobs.JobHandle)
// 0x000001E6 System.Void Unity.Services.Qos.Runner.IQosJob::Dispose()
// 0x000001E7 Unity.Collections.NativeArray`1<Unity.Networking.QoS.InternalQosResult> Unity.Services.Qos.Runner.IQosJob::get_QosResults()
// 0x000001E8 System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Qos.Internal.QosResult>> Unity.Services.Qos.Runner.IQosRunner::MeasureQosAsync(System.Collections.Generic.IList`1<Unity.Services.Qos.Models.QosServer>)
// 0x000001E9 System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Qos.Runner.QosAnnotatedResult>> Unity.Services.Qos.Runner.IQosRunner::MeasureQosAsync(System.Collections.Generic.IList`1<Unity.Services.Qos.Models.QosServiceServer>)
// 0x000001EA System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.ValueTuple`2<Unity.Services.Qos.V2.Models.QosServer,Unity.Services.Qos.IQosMeasurements>>> Unity.Services.Qos.Runner.IQosRunner::MeasureQosV2Async(System.Collections.Generic.IList`1<Unity.Services.Qos.V2.Models.QosServer>)
// 0x000001EB System.Void Unity.Services.Qos.Models.ErrorResponseBody::.ctor(System.String,System.String,System.Int32,System.Int32,System.String,System.String,System.Collections.Generic.List`1<System.Object>)
extern void ErrorResponseBody__ctor_mD1405A130D7BC0164F06C0B1431A3E555CA39800 (void);
// 0x000001EC System.String Unity.Services.Qos.Models.ErrorResponseBody::get_Type()
extern void ErrorResponseBody_get_Type_mEEF34D6A7A21C9D856E2658F65E38CF8EB2679BA (void);
// 0x000001ED System.String Unity.Services.Qos.Models.ErrorResponseBody::get_Title()
extern void ErrorResponseBody_get_Title_mFAAD11466E8D4379B8D5A6886728D125963E866A (void);
// 0x000001EE System.Int32 Unity.Services.Qos.Models.ErrorResponseBody::get_Status()
extern void ErrorResponseBody_get_Status_m875015E553B6BCD878A780B184DFC037B4709807 (void);
// 0x000001EF System.Int32 Unity.Services.Qos.Models.ErrorResponseBody::get_Code()
extern void ErrorResponseBody_get_Code_mDB11C04F90C5B4F4EB37657ED8DC999A1002D100 (void);
// 0x000001F0 System.String Unity.Services.Qos.Models.ErrorResponseBody::get_Detail()
extern void ErrorResponseBody_get_Detail_m685F0F780303CEDD3E219878ABBCDAB71D49DA16 (void);
// 0x000001F1 System.String Unity.Services.Qos.Models.ErrorResponseBody::get_Instance()
extern void ErrorResponseBody_get_Instance_m0DBA78EB41CD0AE3A218F39D4D03DD9783F7D05B (void);
// 0x000001F2 System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Models.ErrorResponseBody::get_Details()
extern void ErrorResponseBody_get_Details_m07719D0B1415BC30834DEB68F5C939A03E3E2F37 (void);
// 0x000001F3 System.String Unity.Services.Qos.Models.ErrorResponseBody::SerializeAsPathParam()
extern void ErrorResponseBody_SerializeAsPathParam_m5F03D04FAC05B56B9E41CF67200C723970D3E8E8 (void);
// 0x000001F4 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Models.ErrorResponseBody::GetAsQueryParam()
extern void ErrorResponseBody_GetAsQueryParam_mF50CB47D12291B1DACDAB0A1E30271150BE3B6D4 (void);
// 0x000001F5 System.Void Unity.Services.Qos.Models.KeyValuePair::.ctor(System.String,System.String)
extern void KeyValuePair__ctor_mA8C81C1804EAA717255BA0B43B9030EC37B77448 (void);
// 0x000001F6 System.String Unity.Services.Qos.Models.KeyValuePair::get_Key()
extern void KeyValuePair_get_Key_mF923D1589D475573BBC8FA490E960667AB1F756A (void);
// 0x000001F7 System.String Unity.Services.Qos.Models.KeyValuePair::get_Value()
extern void KeyValuePair_get_Value_m50CA3CC82B0C2A2FA87F600205DD564024461CFE (void);
// 0x000001F8 System.Type Unity.Services.Qos.Models.IOneOf::get_Type()
// 0x000001F9 System.Object Unity.Services.Qos.Models.IOneOf::get_Value()
// 0x000001FA System.Void Unity.Services.Qos.Models.QosServer::.ctor(System.Collections.Generic.List`1<System.String>,System.String,System.Collections.Generic.List`1<System.String>)
extern void QosServer__ctor_mC629272624FD8B341620B53A52EF8C535E3535DC (void);
// 0x000001FB System.Collections.Generic.List`1<System.String> Unity.Services.Qos.Models.QosServer::get_Endpoints()
extern void QosServer_get_Endpoints_mD617719F90188011B22A4FA9C155299FE9CDB703 (void);
// 0x000001FC System.String Unity.Services.Qos.Models.QosServer::get_Region()
extern void QosServer_get_Region_mD34E1FEF6D71BA6B31A8E1670F01E516FF173141 (void);
// 0x000001FD System.Collections.Generic.List`1<System.String> Unity.Services.Qos.Models.QosServer::get_Services()
extern void QosServer_get_Services_mAF031EDF95DF0D7C94917C41468795BDA553797B (void);
// 0x000001FE System.String Unity.Services.Qos.Models.QosServer::SerializeAsPathParam()
extern void QosServer_SerializeAsPathParam_m356B8820B67FF8DEBE4DBE9E2C4BA4F7063330A0 (void);
// 0x000001FF System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Models.QosServer::GetAsQueryParam()
extern void QosServer_GetAsQueryParam_m86A6F2763A5425D349363768B8D1BE76F2E72A1D (void);
// 0x00000200 System.Void Unity.Services.Qos.Models.QosServersList::.ctor(System.Collections.Generic.List`1<Unity.Services.Qos.Models.QosServer>)
extern void QosServersList__ctor_m2BF251BB54BEA0FA96F0EFD72EF6748DF6703479 (void);
// 0x00000201 System.Collections.Generic.List`1<Unity.Services.Qos.Models.QosServer> Unity.Services.Qos.Models.QosServersList::get_Servers()
extern void QosServersList_get_Servers_m50BE80B5A162F0A4CEBED1C13999395CDC32E794 (void);
// 0x00000202 System.String Unity.Services.Qos.Models.QosServersList::SerializeAsPathParam()
extern void QosServersList_SerializeAsPathParam_mF701E647003EA72CFCD106A8787E2D30EA835019 (void);
// 0x00000203 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Models.QosServersList::GetAsQueryParam()
extern void QosServersList_GetAsQueryParam_m1D43BF13AB5E9F45B99D4BF001A515D8967455AC (void);
// 0x00000204 System.Void Unity.Services.Qos.Models.QosServersResponseBody::.ctor(Unity.Services.Qos.Models.QosServersList)
extern void QosServersResponseBody__ctor_m2298B57029DEEBB06027B40E1193737DEE9801DD (void);
// 0x00000205 Unity.Services.Qos.Models.QosServersList Unity.Services.Qos.Models.QosServersResponseBody::get_Data()
extern void QosServersResponseBody_get_Data_mE5664C85DA17FC35E4BB7FE93E65FDD046FE0E71 (void);
// 0x00000206 System.String Unity.Services.Qos.Models.QosServersResponseBody::SerializeAsPathParam()
extern void QosServersResponseBody_SerializeAsPathParam_m5797BB787D25BED815919CEBA1A7F1267E332A5E (void);
// 0x00000207 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Models.QosServersResponseBody::GetAsQueryParam()
extern void QosServersResponseBody_GetAsQueryParam_m08BC387A1931EE230B35FE2F2B158EE1358792C3 (void);
// 0x00000208 System.Void Unity.Services.Qos.Models.QosServiceServer::.ctor(System.Collections.Generic.List`1<System.String>,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>)
extern void QosServiceServer__ctor_mEC00195151F3761349D5DB14F7EE8D87E016371A (void);
// 0x00000209 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.Models.QosServiceServer::get_Endpoints()
extern void QosServiceServer_get_Endpoints_mE5DB69CD3D03877D3D02D5A2A37FC5957AAF929B (void);
// 0x0000020A System.String Unity.Services.Qos.Models.QosServiceServer::get_Region()
extern void QosServiceServer_get_Region_mC75EB3A7D95E19EFECE65C4601E118DB8598E1D5 (void);
// 0x0000020B System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> Unity.Services.Qos.Models.QosServiceServer::get_Annotations()
extern void QosServiceServer_get_Annotations_mAA082D760686AA727AAD70B339B4CEEEE389B49D (void);
// 0x0000020C System.String Unity.Services.Qos.Models.QosServiceServer::SerializeAsPathParam()
extern void QosServiceServer_SerializeAsPathParam_mE288070390937AD695B41BD84F16907A1F32BDE8 (void);
// 0x0000020D System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Models.QosServiceServer::GetAsQueryParam()
extern void QosServiceServer_GetAsQueryParam_m90A986959F8BB3B4DB7A607E0549A36CC1F233F2 (void);
// 0x0000020E System.Void Unity.Services.Qos.Models.QosServiceServersList::.ctor(System.Collections.Generic.List`1<Unity.Services.Qos.Models.QosServiceServer>)
extern void QosServiceServersList__ctor_mC8CB2B45EA6C20798510D629C1B1FAC57025BF16 (void);
// 0x0000020F System.Collections.Generic.List`1<Unity.Services.Qos.Models.QosServiceServer> Unity.Services.Qos.Models.QosServiceServersList::get_Servers()
extern void QosServiceServersList_get_Servers_m2C8CFD006F9F2AD7203B237F0DA066C84096C01F (void);
// 0x00000210 System.String Unity.Services.Qos.Models.QosServiceServersList::SerializeAsPathParam()
extern void QosServiceServersList_SerializeAsPathParam_mC2E26FA6163677EDA58413A298EED2E8DB25414E (void);
// 0x00000211 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Models.QosServiceServersList::GetAsQueryParam()
extern void QosServiceServersList_GetAsQueryParam_m1EFA3B24E28E0C1065FF4AA7FE34F3C214F18D71 (void);
// 0x00000212 System.Void Unity.Services.Qos.Models.QosServiceServersResponseBody::.ctor(Unity.Services.Qos.Models.QosServiceServersList)
extern void QosServiceServersResponseBody__ctor_m255C7C660CA7BB2722E12DDC884B821C2A9E1E69 (void);
// 0x00000213 Unity.Services.Qos.Models.QosServiceServersList Unity.Services.Qos.Models.QosServiceServersResponseBody::get_Data()
extern void QosServiceServersResponseBody_get_Data_mD382212CA12835CDFEDD7F6FE9952E8B83D36DAF (void);
// 0x00000214 System.String Unity.Services.Qos.Models.QosServiceServersResponseBody::SerializeAsPathParam()
extern void QosServiceServersResponseBody_SerializeAsPathParam_mB111F192AB43E5CA1670EAC39A8AB598C77CBAD5 (void);
// 0x00000215 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Models.QosServiceServersResponseBody::GetAsQueryParam()
extern void QosServiceServersResponseBody_GetAsQueryParam_m3AD4FB1B40CBA3A6F0DFF92E5962F997467A851A (void);
// 0x00000216 System.Void Unity.Services.Qos.Http.BaseApiClient::.ctor(Unity.Services.Qos.Http.IHttpClient)
extern void BaseApiClient__ctor_m99B4C250174C7CCEF6640C19E082E9FEF4DF0F99 (void);
// 0x00000217 System.Void Unity.Services.Qos.Http.DeserializationException::.ctor()
extern void DeserializationException__ctor_m9CC49208201EB2245A19CB9111E48E0C9AAD9AFC (void);
// 0x00000218 System.Void Unity.Services.Qos.Http.DeserializationException::.ctor(System.String)
extern void DeserializationException__ctor_m969A27E83C9B37A47D137A5E4B7B9F7BBA4F5330 (void);
// 0x00000219 System.Void Unity.Services.Qos.Http.DeserializationException::.ctor(System.String,System.Exception)
extern void DeserializationException__ctor_mDBCD4FBA44EFF08B6C206A15B9F14C34BEC18F98 (void);
// 0x0000021A System.Void Unity.Services.Qos.Http.DeserializationSettings::.ctor()
extern void DeserializationSettings__ctor_m82FDFFCE4B4F48D1131AAD21C5B87C5E5DFD2F0D (void);
// 0x0000021B System.Void Unity.Services.Qos.Http.HttpClient::.ctor()
extern void HttpClient__ctor_m280356AE0B5577C3BF6544E6673E70C13458016A (void);
// 0x0000021C System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient::MakeRequestAsync(System.String,System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32)
extern void HttpClient_MakeRequestAsync_m59AEFEF16C8062494F149D5D8EF24EEF5951C138 (void);
// 0x0000021D System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient::MakeRequestAsync(System.String,System.String,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32,System.String)
extern void HttpClient_MakeRequestAsync_m50DC00F79426CC78DC03EA6E492D2224A2D27F30 (void);
// 0x0000021E System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient::CreateWebRequestAsync(System.String,System.String,System.Byte[],System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Int32)
extern void HttpClient_CreateWebRequestAsync_mE29C3A2AD414500FB9B360CEA834FA802957E413 (void);
// 0x0000021F System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient::CreateHttpClientResponse(System.String,System.String,System.Byte[],System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Int32)
extern void HttpClient_CreateHttpClientResponse_m217677F5844BCCB60D19CED3DB0D443000FE717D (void);
// 0x00000220 System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient::CreateWebRequestAsync(System.String,System.String,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Int32,System.String)
extern void HttpClient_CreateWebRequestAsync_m7A2A754949C98CCAECD0D937602197F226EE3586 (void);
// 0x00000221 UnityEngine.Networking.UnityWebRequest Unity.Services.Qos.Http.HttpClient::SetupMultipartRequest(UnityEngine.Networking.UnityWebRequest,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Byte[])
extern void HttpClient_SetupMultipartRequest_m942E9984424A47309D6CEC78FA2B679EEB0D3D90 (void);
// 0x00000222 UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Qos.Http.HttpClient::SendWebRequest(UnityEngine.Networking.UnityWebRequest)
extern void HttpClient_SendWebRequest_m2D838D76A68C3AAB0F5EE58D82D10860B61C2B8B (void);
// 0x00000223 System.Void Unity.Services.Qos.Http.HttpClient/<MakeRequestAsync>d__1::MoveNext()
extern void U3CMakeRequestAsyncU3Ed__1_MoveNext_m79FE0A0172C1A9B02BFFD7376FA295A1E27170B2 (void);
// 0x00000224 System.Void Unity.Services.Qos.Http.HttpClient/<MakeRequestAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CMakeRequestAsyncU3Ed__1_SetStateMachine_mED0F1C7F72F9240EFE00BFFB80D53FD5FAF61540 (void);
// 0x00000225 System.Void Unity.Services.Qos.Http.HttpClient/<MakeRequestAsync>d__2::MoveNext()
extern void U3CMakeRequestAsyncU3Ed__2_MoveNext_m66640452B0587066B569B1FC54EF18E56BAB7722 (void);
// 0x00000226 System.Void Unity.Services.Qos.Http.HttpClient/<MakeRequestAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CMakeRequestAsyncU3Ed__2_SetStateMachine_mFB608307FF1F551572ED42F182A152F2576C633F (void);
// 0x00000227 System.Void Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__3::MoveNext()
extern void U3CCreateWebRequestAsyncU3Ed__3_MoveNext_m090F79DD1136CFFB71763CAC5CB40E82F9B085B2 (void);
// 0x00000228 System.Void Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateWebRequestAsyncU3Ed__3_SetStateMachine_m122010E1D3F9B57707A4EA1F0153C312B9EC6961 (void);
// 0x00000229 System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mB9949717D9A4125B4401B82C9B5D1C900B48111D (void);
// 0x0000022A System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass4_0::<CreateHttpClientResponse>b__0()
extern void U3CU3Ec__DisplayClass4_0_U3CCreateHttpClientResponseU3Eb__0_m2230C7C90D945E29B62F78A0476567183EEFC0FD (void);
// 0x0000022B System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass4_0/<<CreateHttpClientResponse>b__0>d::MoveNext()
extern void U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_MoveNext_mA03BE170E9A572255312982AE52F01375400D8DE (void);
// 0x0000022C System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass4_0/<<CreateHttpClientResponse>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_SetStateMachine_mCC240347B97CBF89431AE28D5382DD8CC60B27E6 (void);
// 0x0000022D System.Void Unity.Services.Qos.Http.HttpClient/<CreateHttpClientResponse>d__4::MoveNext()
extern void U3CCreateHttpClientResponseU3Ed__4_MoveNext_m8B66DA73AF928840C73E8466784F1AEE92326DE9 (void);
// 0x0000022E System.Void Unity.Services.Qos.Http.HttpClient/<CreateHttpClientResponse>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateHttpClientResponseU3Ed__4_SetStateMachine_mB0866CDDF7C71C3151A1E93A8B51D001DC46CB57 (void);
// 0x0000022F System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m40692977886B6F2A77F04D996EF600E964D2DD63 (void);
// 0x00000230 System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0::<CreateWebRequestAsync>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CCreateWebRequestAsyncU3Eb__0_m60FFFB8FFEF5B2CE8600E447B80C6E6DB0BF40B0 (void);
// 0x00000231 System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::MoveNext()
extern void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_m23D59D187639AD9FB641F234939B5834BA628FBE (void);
// 0x00000232 System.Void Unity.Services.Qos.Http.HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m1D240B358D2D64F67840B533CE4F00CAAC6C2EE0 (void);
// 0x00000233 System.Void Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::MoveNext()
extern void U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m015F1DB907416B26A58B29B6D045A71BD6A02A43 (void);
// 0x00000234 System.Void Unity.Services.Qos.Http.HttpClient/<CreateWebRequestAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m7C97C2175057580CDD241D026CC3BE392DD81D93 (void);
// 0x00000235 System.Void Unity.Services.Qos.Http.HttpClientResponse::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int64,System.Boolean,System.Boolean,System.Byte[],System.String)
extern void HttpClientResponse__ctor_mD1FC246D901ACC12807D2B5C1DB39B038622A4E0 (void);
// 0x00000236 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.Http.HttpClientResponse::get_Headers()
extern void HttpClientResponse_get_Headers_mF870416900DD323B636429C079B0BCAE39AEA2AA (void);
// 0x00000237 System.Int64 Unity.Services.Qos.Http.HttpClientResponse::get_StatusCode()
extern void HttpClientResponse_get_StatusCode_mC8A80B746A2F6E82F65517C3AB4C479784B55998 (void);
// 0x00000238 System.Boolean Unity.Services.Qos.Http.HttpClientResponse::get_IsHttpError()
extern void HttpClientResponse_get_IsHttpError_m6DCA23589DA544E4E462A755FA5E781206995A3B (void);
// 0x00000239 System.Boolean Unity.Services.Qos.Http.HttpClientResponse::get_IsNetworkError()
extern void HttpClientResponse_get_IsNetworkError_m3C3F6623CBFEFED95570B0EC1677CA7E31C9DAE0 (void);
// 0x0000023A System.Byte[] Unity.Services.Qos.Http.HttpClientResponse::get_Data()
extern void HttpClientResponse_get_Data_mB0A3BB94BF7CE548D1464659194CA4E9557E09DE (void);
// 0x0000023B System.String Unity.Services.Qos.Http.HttpClientResponse::get_ErrorMessage()
extern void HttpClientResponse_get_ErrorMessage_mC9BA60D07DC70CF2BAA92C4C256BDF5CB74F326B (void);
// 0x0000023C System.Void Unity.Services.Qos.Http.HttpException::.ctor()
extern void HttpException__ctor_mCC244F8536EC09FF5682C779CE590A4CCC92083A (void);
// 0x0000023D System.Void Unity.Services.Qos.Http.HttpException::.ctor(System.String)
extern void HttpException__ctor_mB86916F592FA13816761064DA3D9F23C54ACB6F3 (void);
// 0x0000023E System.Void Unity.Services.Qos.Http.HttpException::.ctor(System.String,System.Exception)
extern void HttpException__ctor_m776EE74F052257E8AE9ABCF9C16CBF5774673578 (void);
// 0x0000023F System.Void Unity.Services.Qos.Http.HttpException::.ctor(Unity.Services.Qos.Http.HttpClientResponse)
extern void HttpException__ctor_m4927A27335A8E59162013A85EF8972D88AA0754C (void);
// 0x00000240 System.Void Unity.Services.Qos.Http.HttpException`1::.ctor()
// 0x00000241 System.Void Unity.Services.Qos.Http.HttpException`1::.ctor(System.String)
// 0x00000242 System.Void Unity.Services.Qos.Http.HttpException`1::.ctor(System.String,System.Exception)
// 0x00000243 System.Void Unity.Services.Qos.Http.HttpException`1::.ctor(Unity.Services.Qos.Http.HttpClientResponse,T)
// 0x00000244 System.String Unity.Services.Qos.Http.IDeserializable::GetAsString()
// 0x00000245 T Unity.Services.Qos.Http.IDeserializable::GetAs(Unity.Services.Qos.Http.DeserializationSettings)
// 0x00000246 System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.IHttpClient::MakeRequestAsync(System.String,System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32)
// 0x00000247 System.Threading.Tasks.Task`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.IHttpClient::MakeRequestAsync(System.String,System.String,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32,System.String)
// 0x00000248 System.Void Unity.Services.Qos.Http.JsonHelpers::RegisterTypesForAOT()
extern void JsonHelpers_RegisterTypesForAOT_m974460CCF262A51C0C6A1A6DC8A5DD8C0E65BDB5 (void);
// 0x00000249 System.Boolean Unity.Services.Qos.Http.JsonHelpers::TryParseJson(System.String,T&)
// 0x0000024A System.Void Unity.Services.Qos.Http.JsonHelpers/<>c__DisplayClass1_0`1::.ctor()
// 0x0000024B System.Void Unity.Services.Qos.Http.JsonHelpers/<>c__DisplayClass1_0`1::<TryParseJson>b__0(System.Object,Newtonsoft.Json.Serialization.ErrorEventArgs)
// 0x0000024C System.Void Unity.Services.Qos.Http.JsonObject::.ctor(System.Object)
extern void JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419 (void);
// 0x0000024D System.String Unity.Services.Qos.Http.JsonObject::GetAsString()
extern void JsonObject_GetAsString_m8CAC654D2EBE92E309029903CE9BC57DBB9BE8F3 (void);
// 0x0000024E T Unity.Services.Qos.Http.JsonObject::GetAs(Unity.Services.Qos.Http.DeserializationSettings)
// 0x0000024F T Unity.Services.Qos.Http.JsonObject::GetAs()
// 0x00000250 Unity.Services.Qos.Http.IDeserializable Unity.Services.Qos.Http.JsonObject::GetNewJsonObjectResponse(System.Object)
extern void JsonObject_GetNewJsonObjectResponse_m8F3EA16DA039644571EC1B22802101DDFF779488 (void);
// 0x00000251 System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.List`1<System.Object>)
extern void JsonObject_GetNewJsonObjectResponse_m8D76EA8B41E5F473B50DC4D576EBCA781E0F8526 (void);
// 0x00000252 System.Collections.Generic.List`1<System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>> Unity.Services.Qos.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>)
extern void JsonObject_GetNewJsonObjectResponse_m7CDA73322474896572A97C6EE5B169DE6ECE6598 (void);
// 0x00000253 System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void JsonObject_GetNewJsonObjectResponse_m120AE5571C8A5AB895A4ECF9B56C27EA7F91C115 (void);
// 0x00000254 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable>> Unity.Services.Qos.Http.JsonObject::GetNewJsonObjectResponse(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Object>>)
extern void JsonObject_GetNewJsonObjectResponse_mA200A82FD2A69D59C88D2EAD6AC95AE9116441DB (void);
// 0x00000255 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.Http.JsonObject::ValidateObject(T,System.Collections.Generic.List`1<System.String>)
// 0x00000256 System.Void Unity.Services.Qos.Http.JsonObject::ValidatePropertyInfos(T,System.Collections.Generic.List`1<System.String>)
// 0x00000257 System.Void Unity.Services.Qos.Http.JsonObject::ValidateFieldInfos(T,System.Collections.Generic.List`1<System.String>)
// 0x00000258 System.Void Unity.Services.Qos.Http.JsonObject::ValidateValue(System.Object,System.String,System.String,System.String,System.Collections.Generic.List`1<System.String>)
extern void JsonObject_ValidateValue_m3D015321ABD5AE6AED7B475B6D3C34F0BCE63D80 (void);
// 0x00000259 System.Void Unity.Services.Qos.Http.JsonObject/<>c::.cctor()
extern void U3CU3Ec__cctor_m1F5508EE17758D4288653D1DFEE9A14F4C7BC87C (void);
// 0x0000025A System.Void Unity.Services.Qos.Http.JsonObject/<>c::.ctor()
extern void U3CU3Ec__ctor_m5448ADC46B780675F047487C7C9E796EE4F5905B (void);
// 0x0000025B Unity.Services.Qos.Http.IDeserializable Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__6_0(System.Object)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__6_0_mB1313A28830B6C3CAE5DF771A6C6ECEDC7D7C02A (void);
// 0x0000025C System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__7_0(System.Collections.Generic.List`1<System.Object>)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_0_m60FE2F5EAD4ECFBA1C02A6952221555AE509592D (void);
// 0x0000025D Unity.Services.Qos.Http.IDeserializable Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__7_1(System.Object)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_1_mB2A2EE2C3DBFC2B40A4A32A42A185B84AC697994 (void);
// 0x0000025E System.String Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__8_0(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_0_m4BC198652ECFBE3189EE4EBCD1145D07F39E523C (void);
// 0x0000025F Unity.Services.Qos.Http.IDeserializable Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__8_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_1_m07B1EE8451E25AFA2279A63E4BC8FD9DB9E23EA7 (void);
// 0x00000260 System.String Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__9_0(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_0_mF8021649DCE28882A3B6F7A03143BC97393E8139 (void);
// 0x00000261 System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.JsonObject/<>c::<GetNewJsonObjectResponse>b__9_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Object>>)
extern void U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_1_m23599E62ED6614FFA53D2428BFDE56B40DAEF2B7 (void);
// 0x00000262 System.Void Unity.Services.Qos.Http.JsonObjectConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern void JsonObjectConverter_WriteJson_m4443914EDF2F50BD076694458FA416DD5E820385 (void);
// 0x00000263 System.Object Unity.Services.Qos.Http.JsonObjectConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern void JsonObjectConverter_ReadJson_m15F9F7E014B8BDC97D20CBAC668D406681702479 (void);
// 0x00000264 System.Boolean Unity.Services.Qos.Http.JsonObjectConverter::CanConvert(System.Type)
extern void JsonObjectConverter_CanConvert_m671986316D3626EE88F9D7F3FE6FE85F217DCDD9 (void);
// 0x00000265 System.Void Unity.Services.Qos.Http.JsonObjectConverter::.ctor()
extern void JsonObjectConverter__ctor_m3590310A54D23B98456D5A20348876A06E517477 (void);
// 0x00000266 System.Void Unity.Services.Qos.Http.JsonObjectCollectionConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern void JsonObjectCollectionConverter_WriteJson_m3FECF9626F197BA2591A9E0854BF77BD30148522 (void);
// 0x00000267 System.Object Unity.Services.Qos.Http.JsonObjectCollectionConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern void JsonObjectCollectionConverter_ReadJson_m95329F3C50B8AC6CC4CE8AB2A886B256E488B083 (void);
// 0x00000268 System.Boolean Unity.Services.Qos.Http.JsonObjectCollectionConverter::CanConvert(System.Type)
extern void JsonObjectCollectionConverter_CanConvert_m9F453A4A348437B2B5618A247200576E41304278 (void);
// 0x00000269 System.Void Unity.Services.Qos.Http.JsonObjectCollectionConverter::.ctor()
extern void JsonObjectCollectionConverter__ctor_m6ED8E494AC12D73951068CBA1CD779FF166DB9FA (void);
// 0x0000026A System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor()
extern void ResponseDeserializationException__ctor_mBB646EAD382A7D28AC499D61C855E3D206D23ED6 (void);
// 0x0000026B System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(System.String)
extern void ResponseDeserializationException__ctor_m704DEEF38F300A4921D3EDD6C564761DFE661C53 (void);
// 0x0000026C System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(System.Exception,System.String)
extern void ResponseDeserializationException__ctor_mE6E1AB43F6B88301B5245AB34E1098448BC0554A (void);
// 0x0000026D System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(Unity.Services.Qos.Http.HttpClientResponse)
extern void ResponseDeserializationException__ctor_m1DE598AF93250D2B52554D9769AC6800E23B124D (void);
// 0x0000026E System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(Unity.Services.Qos.Http.HttpClientResponse,System.String)
extern void ResponseDeserializationException__ctor_m6B1A5AAC07DBF1DE306A000ECF99CE9648615C1B (void);
// 0x0000026F System.Void Unity.Services.Qos.Http.ResponseDeserializationException::.ctor(Unity.Services.Qos.Http.HttpClientResponse,System.Exception,System.String)
extern void ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B (void);
// 0x00000270 System.Collections.Generic.List`1<Unity.Services.Qos.Http.IDeserializable> Unity.Services.Qos.Http.ResponseHandler::DeserializeListOfJsonObjects(System.Collections.Generic.List`1<System.Object>)
extern void ResponseHandler_DeserializeListOfJsonObjects_m72969E19863FA285545CF4D8031AF7F4470DD3B3 (void);
// 0x00000271 T Unity.Services.Qos.Http.ResponseHandler::TryDeserializeResponse(Unity.Services.Qos.Http.HttpClientResponse)
// 0x00000272 System.Object Unity.Services.Qos.Http.ResponseHandler::TryDeserializeResponse(Unity.Services.Qos.Http.HttpClientResponse,System.Type)
extern void ResponseHandler_TryDeserializeResponse_m8B10BE8FAD4A565918C93EBDAF0369E4486AE8D4 (void);
// 0x00000273 System.String Unity.Services.Qos.Http.ResponseHandler::GetDeserializedJson(System.Byte[])
extern void ResponseHandler_GetDeserializedJson_m677949D173DF6A65ADDAB1AD7FD2B972F3598C08 (void);
// 0x00000274 System.Void Unity.Services.Qos.Http.ResponseHandler::HandleAsyncResponse(Unity.Services.Qos.Http.HttpClientResponse,System.Collections.Generic.Dictionary`2<System.String,System.Type>)
extern void ResponseHandler_HandleAsyncResponse_mF85227D729EBBB63B3F269D558F28D7B3477CB31 (void);
// 0x00000275 Unity.Services.Qos.Http.HttpException Unity.Services.Qos.Http.ResponseHandler::CreateOneOfException(Unity.Services.Qos.Http.HttpClientResponse,System.Type)
extern void ResponseHandler_CreateOneOfException_m997402BEBF88FA749E79E2FED79A3FEAFCE53AC7 (void);
// 0x00000276 Unity.Services.Qos.Http.HttpException Unity.Services.Qos.Http.ResponseHandler::CreateHttpException(Unity.Services.Qos.Http.HttpClientResponse,System.Type)
extern void ResponseHandler_CreateHttpException_m48860939F71126F5AC48218C48CA033069D606F8 (void);
// 0x00000277 T Unity.Services.Qos.Http.ResponseHandler::HandleAsyncResponse(Unity.Services.Qos.Http.HttpClientResponse,System.Collections.Generic.Dictionary`2<System.String,System.Type>)
// 0x00000278 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Qos.Http.HttpClientResponse> Unity.Services.Qos.Http.UnityWebRequestHelpers::GetAwaiter(UnityEngine.Networking.UnityWebRequestAsyncOperation)
extern void UnityWebRequestHelpers_GetAwaiter_mFE3CEA3273241928556A3EE6EB2D699C01EF52F7 (void);
// 0x00000279 Unity.Services.Qos.Http.HttpClientResponse Unity.Services.Qos.Http.UnityWebRequestHelpers::CreateHttpClientResponse(UnityEngine.Networking.UnityWebRequestAsyncOperation)
extern void UnityWebRequestHelpers_CreateHttpClientResponse_m83A8F9B40812C3017F91315CC83DEA0BE3D74123 (void);
// 0x0000027A System.Void Unity.Services.Qos.Http.UnityWebRequestHelpers/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m1A61824C8360274E7FD6DBB60E9D9060BB60DD89 (void);
// 0x0000027B System.Void Unity.Services.Qos.Http.UnityWebRequestHelpers/<>c__DisplayClass0_0::<GetAwaiter>b__0(UnityEngine.AsyncOperation)
extern void U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_m57EB7F27B683B8FEE80D26546C11F61A1718DF66 (void);
// 0x0000027C Unity.Services.Qos.Helpers.AsyncOpRetry`1<T> Unity.Services.Qos.Helpers.AsyncOpRetry::FromCreateAsync(System.Func`2<System.Int32,T>)
// 0x0000027D System.UInt32 Unity.Services.Qos.Helpers.AsyncOpRetry`1::get_MaxRetries()
// 0x0000027E System.Void Unity.Services.Qos.Helpers.AsyncOpRetry`1::set_MaxRetries(System.UInt32)
// 0x0000027F System.Single Unity.Services.Qos.Helpers.AsyncOpRetry`1::get_JitterMagnitude()
// 0x00000280 System.Void Unity.Services.Qos.Helpers.AsyncOpRetry`1::set_JitterMagnitude(System.Single)
// 0x00000281 System.Single Unity.Services.Qos.Helpers.AsyncOpRetry`1::get_DelayScale()
// 0x00000282 System.Void Unity.Services.Qos.Helpers.AsyncOpRetry`1::set_DelayScale(System.Single)
// 0x00000283 System.Single Unity.Services.Qos.Helpers.AsyncOpRetry`1::get_MaxDelayTime()
// 0x00000284 System.Void Unity.Services.Qos.Helpers.AsyncOpRetry`1::set_MaxDelayTime(System.Single)
// 0x00000285 System.Func`2<System.Int32,T> Unity.Services.Qos.Helpers.AsyncOpRetry`1::get_CreateOperation()
// 0x00000286 System.Void Unity.Services.Qos.Helpers.AsyncOpRetry`1::set_CreateOperation(System.Func`2<System.Int32,T>)
// 0x00000287 System.Func`2<T,System.Boolean> Unity.Services.Qos.Helpers.AsyncOpRetry`1::get_RetryCondition()
// 0x00000288 System.Void Unity.Services.Qos.Helpers.AsyncOpRetry`1::set_RetryCondition(System.Func`2<T,System.Boolean>)
// 0x00000289 System.Action`1<T> Unity.Services.Qos.Helpers.AsyncOpRetry`1::get_OnComplete()
// 0x0000028A System.Void Unity.Services.Qos.Helpers.AsyncOpRetry`1::set_OnComplete(System.Action`1<T>)
// 0x0000028B System.Void Unity.Services.Qos.Helpers.AsyncOpRetry`1::.ctor(System.Func`2<System.Int32,T>)
// 0x0000028C System.Single Unity.Services.Qos.Helpers.AsyncOpRetry`1::AddJitter(System.Single,System.Single)
// 0x0000028D System.Single Unity.Services.Qos.Helpers.AsyncOpRetry`1::Pow2(System.Single,System.Single)
// 0x0000028E System.Single Unity.Services.Qos.Helpers.AsyncOpRetry`1::CalculateDelay(System.Int32,System.Single,System.Single,System.Single)
// 0x0000028F Unity.Services.Qos.Helpers.AsyncOpRetry`1<T> Unity.Services.Qos.Helpers.AsyncOpRetry`1::FromCreateAsync(System.Func`2<System.Int32,T>)
// 0x00000290 Unity.Services.Qos.Helpers.AsyncOpRetry`1<T> Unity.Services.Qos.Helpers.AsyncOpRetry`1::WithRetryCondition(System.Func`2<T,System.Boolean>)
// 0x00000291 Unity.Services.Qos.Helpers.AsyncOpRetry`1<T> Unity.Services.Qos.Helpers.AsyncOpRetry`1::WhenComplete(System.Action`1<T>)
// 0x00000292 System.Collections.IEnumerator Unity.Services.Qos.Helpers.AsyncOpRetry`1::Run()
// 0x00000293 System.Void Unity.Services.Qos.Helpers.AsyncOpRetry`1/<Run>d__35::.ctor(System.Int32)
// 0x00000294 System.Void Unity.Services.Qos.Helpers.AsyncOpRetry`1/<Run>d__35::System.IDisposable.Dispose()
// 0x00000295 System.Boolean Unity.Services.Qos.Helpers.AsyncOpRetry`1/<Run>d__35::MoveNext()
// 0x00000296 System.Object Unity.Services.Qos.Helpers.AsyncOpRetry`1/<Run>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
// 0x00000297 System.Void Unity.Services.Qos.Helpers.AsyncOpRetry`1/<Run>d__35::System.Collections.IEnumerator.Reset()
// 0x00000298 System.Object Unity.Services.Qos.Helpers.AsyncOpRetry`1/<Run>d__35::System.Collections.IEnumerator.get_Current()
// 0x00000299 Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.IRetryPolicyProvider::ForOperation(System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>>)
// 0x0000029A Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.IRetryPolicyProvider::ForOperation(System.Func`1<System.Threading.Tasks.Task`1<T>>)
// 0x0000029B Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1::WithJitterMagnitude(System.Single)
// 0x0000029C Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1::WithDelayScale(System.Single)
// 0x0000029D Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1::WithMaxDelayTime(System.Single)
// 0x0000029E Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1::WithRetryCondition(System.Func`2<T,System.Threading.Tasks.Task`1<System.Boolean>>)
// 0x0000029F Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1::UptoMaximumRetries(System.UInt32)
// 0x000002A0 Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1::HandleException()
// 0x000002A1 Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1::HandleException(System.Func`2<TException,System.Boolean>)
// 0x000002A2 System.Threading.Tasks.Task`1<T> Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1::RunAsync(Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig)
// 0x000002A3 Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicyProvider::ForOperation(System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>>)
// 0x000002A4 Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicyProvider::ForOperation(System.Func`1<System.Threading.Tasks.Task`1<T>>)
// 0x000002A5 System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyProvider::.ctor()
extern void RetryPolicyProvider__ctor_mC01EBE6E838F689936D7023F85CE73D10FC12B6C (void);
// 0x000002A6 System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::get_CreateOperation()
// 0x000002A7 System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::set_CreateOperation(System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>>)
// 0x000002A8 System.Func`2<T,System.Threading.Tasks.Task`1<System.Boolean>> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::get_RetryCondition()
// 0x000002A9 System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::set_RetryCondition(System.Func`2<T,System.Threading.Tasks.Task`1<System.Boolean>>)
// 0x000002AA System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::.ctor(System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>>)
// 0x000002AB System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::.ctor(System.Func`1<System.Threading.Tasks.Task`1<T>>)
// 0x000002AC System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::AddJitter(System.Single,System.Single)
// 0x000002AD System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::Pow2(System.Single,System.Single)
// 0x000002AE System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::CalculateDelay(System.Int32,System.Single,System.Single,System.Single)
// 0x000002AF Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::WithJitterMagnitude(System.Single)
// 0x000002B0 Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::WithDelayScale(System.Single)
// 0x000002B1 Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::WithMaxDelayTime(System.Single)
// 0x000002B2 Unity.Services.Qos.ErrorMitigation.RetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::ForOperation(System.Func`2<System.Int32,System.Threading.Tasks.Task`1<T>>)
// 0x000002B3 Unity.Services.Qos.ErrorMitigation.RetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::ForOperation(System.Func`1<System.Threading.Tasks.Task`1<T>>)
// 0x000002B4 Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::WithRetryCondition(System.Func`2<T,System.Threading.Tasks.Task`1<System.Boolean>>)
// 0x000002B5 Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::UptoMaximumRetries(System.UInt32)
// 0x000002B6 Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::HandleException()
// 0x000002B7 Unity.Services.Qos.ErrorMitigation.IRetryPolicy`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::HandleException(System.Func`2<TException,System.Boolean>)
// 0x000002B8 System.Threading.Tasks.Task`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1::RunAsync(Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig)
// 0x000002B9 System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicy`1/<>c__DisplayClass10_0::.ctor()
// 0x000002BA System.Threading.Tasks.Task`1<T> Unity.Services.Qos.ErrorMitigation.RetryPolicy`1/<>c__DisplayClass10_0::<.ctor>b__0(System.Int32)
// 0x000002BB System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicy`1/<RunAsync>d__23::MoveNext()
// 0x000002BC System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicy`1/<RunAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000002BD System.Void Unity.Services.Qos.ErrorMitigation.ExceptionPredicate::.ctor(System.Object,System.IntPtr)
extern void ExceptionPredicate__ctor_mEBD73A879F83A769E88FA53F2478AB16FF945548 (void);
// 0x000002BE System.Exception Unity.Services.Qos.ErrorMitigation.ExceptionPredicate::Invoke(System.Exception)
extern void ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1 (void);
// 0x000002BF System.IAsyncResult Unity.Services.Qos.ErrorMitigation.ExceptionPredicate::BeginInvoke(System.Exception,System.AsyncCallback,System.Object)
extern void ExceptionPredicate_BeginInvoke_m75CCDEA0FFA54BE270D0C33F444A0C4FBBF5E3C5 (void);
// 0x000002C0 System.Exception Unity.Services.Qos.ErrorMitigation.ExceptionPredicate::EndInvoke(System.IAsyncResult)
extern void ExceptionPredicate_EndInvoke_mACA90E05A18B572833CE0E4AF0A287FE27EABD9F (void);
// 0x000002C1 System.UInt32 Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::get_MaxRetries()
extern void RetryPolicyConfig_get_MaxRetries_m8ADBE52F926D048CD3177430F158BC0B782C47B3 (void);
// 0x000002C2 System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::set_MaxRetries(System.UInt32)
extern void RetryPolicyConfig_set_MaxRetries_mAD9E1F79D057613A72CF718DC59B35A53EC33EC8 (void);
// 0x000002C3 System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::get_JitterMagnitude()
extern void RetryPolicyConfig_get_JitterMagnitude_m009B8A35391F9C2B887D2ED52654C1744ED29BBA (void);
// 0x000002C4 System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::set_JitterMagnitude(System.Single)
extern void RetryPolicyConfig_set_JitterMagnitude_m73A48B44DE4B382FEF006B88D8AAFFF9DF8BD2FA (void);
// 0x000002C5 System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::get_DelayScale()
extern void RetryPolicyConfig_get_DelayScale_m69C435DC21420D3DDCBE7AB13A98007DA4F1061C (void);
// 0x000002C6 System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::set_DelayScale(System.Single)
extern void RetryPolicyConfig_set_DelayScale_mEA74AE600823621A7656E7FE2E7297AF872A17C8 (void);
// 0x000002C7 System.Single Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::get_MaxDelayTime()
extern void RetryPolicyConfig_get_MaxDelayTime_mAB0296840F96895FDC268227D7F0F6E1E240C44B (void);
// 0x000002C8 System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::set_MaxDelayTime(System.Single)
extern void RetryPolicyConfig_set_MaxDelayTime_mF3D3E6E899CF50C447D119FB57F869E1C4D6B72B (void);
// 0x000002C9 System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::HandleException()
// 0x000002CA System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::HandleException(System.Func`2<TException,System.Boolean>)
// 0x000002CB System.Boolean Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::IsHandledException(System.Exception)
extern void RetryPolicyConfig_IsHandledException_mE95593C08075731E5DB88224D60F09FC3E9F4DD5 (void);
// 0x000002CC System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig::.ctor()
extern void RetryPolicyConfig__ctor_m115BCCCDB4FE026C72F831F7983B994E35A31A2E (void);
// 0x000002CD System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig/<>c__17`1::.cctor()
// 0x000002CE System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig/<>c__17`1::.ctor()
// 0x000002CF System.Exception Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig/<>c__17`1::<HandleException>b__17_0(System.Exception)
// 0x000002D0 System.Void Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig/<>c__DisplayClass18_0`1::.ctor()
// 0x000002D1 System.Exception Unity.Services.Qos.ErrorMitigation.RetryPolicyConfig/<>c__DisplayClass18_0`1::<HandleException>b__0(System.Exception)
// 0x000002D2 System.Void Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig::HandleStatusCode(System.Int64)
extern void StatusCodePolicyConfig_HandleStatusCode_mBA2EBE70DF2505CFD77B9FAA35D7811CF28C6494 (void);
// 0x000002D3 System.Void Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig::DontHandleStatusCode(System.Int64)
extern void StatusCodePolicyConfig_DontHandleStatusCode_m0E0A1195CF35B9EB8EAA1701ACF7D5F6C579B27E (void);
// 0x000002D4 System.Void Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig::Clear()
extern void StatusCodePolicyConfig_Clear_m78882BAE51B27B9AB1B413AA3BC4C5A0B5DDE04F (void);
// 0x000002D5 System.Boolean Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig::IsHandledStatusCode(System.Int64)
extern void StatusCodePolicyConfig_IsHandledStatusCode_mF80289B1A9A355AAC4A484288560214FC97F4A95 (void);
// 0x000002D6 System.Void Unity.Services.Qos.ErrorMitigation.StatusCodePolicyConfig::.ctor()
extern void StatusCodePolicyConfig__ctor_m7128CC52883DBD3021F9388A11F15D7F5C8F02D8 (void);
// 0x000002D7 System.Byte[] Unity.Services.Qos.QosDiscovery.JsonSerialization::Serialize(T)
// 0x000002D8 System.String Unity.Services.Qos.QosDiscovery.JsonSerialization::SerializeToString(T)
// 0x000002D9 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.String,System.String)
extern void QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m37EBFF6DDCA6400B0C77F2CABAB42FDFA86B5A97 (void);
// 0x000002DA System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.String,System.Collections.Generic.List`1<System.String>,System.String,System.Boolean)
extern void QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m56323A5B31B725034B0CA9AE992F7FB2946AE2FD (void);
// 0x000002DB System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m5B6D84BFB04ADAA9739011B69F404C051AB0C1F7 (void);
// 0x000002DC System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::AddParamsToQueryParams(System.Collections.Generic.List`1<System.String>,System.String,T)
// 0x000002DD System.String Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GetPathParamString(System.Collections.Generic.List`1<System.String>)
extern void QosDiscoveryApiBaseRequest_GetPathParamString_m175BA1D606F251D4F8318DF77732D96F9BCFDC7D (void);
// 0x000002DE System.Byte[] Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::ConstructBody(System.IO.Stream)
extern void QosDiscoveryApiBaseRequest_ConstructBody_m7F185A28CF2CCE8BC8E0CBCB25D6AEFEDE0126D0 (void);
// 0x000002DF System.Byte[] Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::ConstructBody(System.String)
extern void QosDiscoveryApiBaseRequest_ConstructBody_mDD86CD521B7A69DA0C57CFFCF5F0AC6CEDB09817 (void);
// 0x000002E0 System.Byte[] Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::ConstructBody(System.Object)
extern void QosDiscoveryApiBaseRequest_ConstructBody_m916EE630F6706AB71EFDFA875D84FD2684CE2C77 (void);
// 0x000002E1 System.String Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateAcceptHeader(System.String[])
extern void QosDiscoveryApiBaseRequest_GenerateAcceptHeader_m8393B909E55846FC30E166C3ED7E52CBFA9CFD2F (void);
// 0x000002E2 System.String Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateContentTypeHeader(System.String[])
extern void QosDiscoveryApiBaseRequest_GenerateContentTypeHeader_m8578BC7C80BEA3C4919B898356FC5A205B59DCE7 (void);
// 0x000002E3 UnityEngine.Networking.IMultipartFormSection Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateMultipartFormFileSection(System.String,System.IO.FileStream,System.String)
extern void QosDiscoveryApiBaseRequest_GenerateMultipartFormFileSection_mBBED2819CA892389B78A9DC3D78E90B2DDFBB1F8 (void);
// 0x000002E4 UnityEngine.Networking.IMultipartFormSection Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GenerateMultipartFormFileSection(System.String,System.IO.Stream,System.String)
extern void QosDiscoveryApiBaseRequest_GenerateMultipartFormFileSection_mD0AF281D370DCAA50A68D266A19600CD6A6263BC (void);
// 0x000002E5 System.String Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::GetFileName(System.String)
extern void QosDiscoveryApiBaseRequest_GetFileName_m060FEF2B62E15D45760509984E2ABD20FF41FC2A (void);
// 0x000002E6 System.Void Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::.ctor()
extern void QosDiscoveryApiBaseRequest__ctor_m9122E977B93327ACE35337EA6E107C8EBC1C4A6A (void);
// 0x000002E7 System.Void Unity.Services.Qos.QosDiscovery.QosDiscoveryApiBaseRequest::.cctor()
extern void QosDiscoveryApiBaseRequest__cctor_mB3CFEAA8095B2C5F15A1F5BAD07BB5EE915B4D99 (void);
// 0x000002E8 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServersRequest::get_Region()
extern void GetServersRequest_get_Region_m49F11E7EA0533CD65FB26FBE102104D2338AC934 (void);
// 0x000002E9 System.String Unity.Services.Qos.QosDiscovery.GetServersRequest::get_Service()
extern void GetServersRequest_get_Service_mD27F2D2FFD7924C9681C2116EFAFD03E77F59FEA (void);
// 0x000002EA System.Void Unity.Services.Qos.QosDiscovery.GetServersRequest::.ctor(System.Collections.Generic.List`1<System.String>,System.String)
extern void GetServersRequest__ctor_m454773232F666315509CCB10A2B5A029BD2CB70D (void);
// 0x000002EB System.String Unity.Services.Qos.QosDiscovery.GetServersRequest::ConstructUrl(System.String)
extern void GetServersRequest_ConstructUrl_m34E2AC5428BA279F3BF7001DB96FA0702B9D44C2 (void);
// 0x000002EC System.Byte[] Unity.Services.Qos.QosDiscovery.GetServersRequest::ConstructBody()
extern void GetServersRequest_ConstructBody_mCDAF08BF135ED626205192361C7757197C162166 (void);
// 0x000002ED System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.QosDiscovery.GetServersRequest::ConstructHeaders(Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Qos.Configuration)
extern void GetServersRequest_ConstructHeaders_m8CE30E99E33DDE136776B5830F2FCBF91C0B426A (void);
// 0x000002EE System.Void Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c::.cctor()
extern void U3CU3Ec__cctor_m9AC91843F1D0511A7FFB24E03AFF31ED8BB08989 (void);
// 0x000002EF System.Void Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c::.ctor()
extern void U3CU3Ec__ctor_m8002077DF6C1A68B5F9A799915DA6F1B9DC5B2FA (void);
// 0x000002F0 System.String Unity.Services.Qos.QosDiscovery.GetServersRequest/<>c::<.ctor>b__7_0(System.String)
extern void U3CU3Ec_U3C_ctorU3Eb__7_0_mDF3BC19C96293831FC8ACA1C245D272CC33625A9 (void);
// 0x000002F1 System.String Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::get_ServiceId()
extern void GetServiceServersRequest_get_ServiceId_mB2C010F176BA4F8D230104593F5B9EEC711B1049 (void);
// 0x000002F2 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::get_Region()
extern void GetServiceServersRequest_get_Region_mA65DEA51BD0E77B107EFC7A6A65230E065DC9170 (void);
// 0x000002F3 System.Collections.Generic.List`1<System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::get_Fleet()
extern void GetServiceServersRequest_get_Fleet_mD6D5C2DA0516EF331104C353AF62138C36824108 (void);
// 0x000002F4 System.Void Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::.ctor(System.String,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.String>)
extern void GetServiceServersRequest__ctor_m99AD02EF36C866615FFEE6BD9982DAA47D863E45 (void);
// 0x000002F5 System.String Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::ConstructUrl(System.String)
extern void GetServiceServersRequest_ConstructUrl_m56EB2029452920997532C4C0204869F8602C268E (void);
// 0x000002F6 System.Byte[] Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::ConstructBody()
extern void GetServiceServersRequest_ConstructBody_m6ABA128A6D362022654EF883080C72B44C1137D1 (void);
// 0x000002F7 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Qos.QosDiscovery.GetServiceServersRequest::ConstructHeaders(Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Qos.Configuration)
extern void GetServiceServersRequest_ConstructHeaders_mFD5284F54B2E2B35E84A72C5C79E87B1EB9F3BBB (void);
// 0x000002F8 System.Void Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::.cctor()
extern void U3CU3Ec__cctor_m6691682EB45489044420524E55EE6A428C485087 (void);
// 0x000002F9 System.Void Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::.ctor()
extern void U3CU3Ec__ctor_mA0E1961AA9DCAB1B69E085A4F8C7AB6CDBB8E19D (void);
// 0x000002FA System.String Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::<.ctor>b__12_0(System.String)
extern void U3CU3Ec_U3C_ctorU3Eb__12_0_m4A470291528DAE7018FFABAA6458453A635C09E1 (void);
// 0x000002FB System.String Unity.Services.Qos.QosDiscovery.GetServiceServersRequest/<>c::<.ctor>b__12_1(System.String)
extern void U3CU3Ec_U3C_ctorU3Eb__12_1_mD40DBC98B5AB7B82BE1D71AD704F7EB0079F3A95 (void);
// 0x000002FC System.Threading.Tasks.Task`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>> Unity.Services.Qos.Apis.QosDiscovery.IQosDiscoveryApiClient::GetServersAsync(Unity.Services.Qos.QosDiscovery.GetServersRequest,Unity.Services.Qos.Configuration)
// 0x000002FD System.Threading.Tasks.Task`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>> Unity.Services.Qos.Apis.QosDiscovery.IQosDiscoveryApiClient::GetServiceServersAsync(Unity.Services.Qos.QosDiscovery.GetServiceServersRequest,Unity.Services.Qos.Configuration)
// 0x000002FE Unity.Services.Qos.Configuration Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::get_Configuration()
extern void QosDiscoveryApiClient_get_Configuration_mA8F6B3F90810410D20D6420909967781E524A3FE (void);
// 0x000002FF System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::set_Configuration(Unity.Services.Qos.Configuration)
extern void QosDiscoveryApiClient_set_Configuration_m98B22FA0BDAE4468C4E4B505D0AC6D4448CDFAA5 (void);
// 0x00000300 System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::.ctor(Unity.Services.Qos.Http.IHttpClient,Unity.Services.Authentication.Internal.IAccessToken,Unity.Services.Qos.Configuration)
extern void QosDiscoveryApiClient__ctor_mAC0DD995EBE1EE7C9B7BF1D376B15451A3322D11 (void);
// 0x00000301 System.Threading.Tasks.Task`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServersResponseBody>> Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::GetServersAsync(Unity.Services.Qos.QosDiscovery.GetServersRequest,Unity.Services.Qos.Configuration)
extern void QosDiscoveryApiClient_GetServersAsync_m0ED9B245DB1571CD45BFF48C6A1968C44D2B545B (void);
// 0x00000302 System.Threading.Tasks.Task`1<Unity.Services.Qos.Response`1<Unity.Services.Qos.Models.QosServiceServersResponseBody>> Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient::GetServiceServersAsync(Unity.Services.Qos.QosDiscovery.GetServiceServersRequest,Unity.Services.Qos.Configuration)
extern void QosDiscoveryApiClient_GetServiceServersAsync_m6F125DB6FD01515D93A29D2187C190D536BF28CA (void);
// 0x00000303 System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::MoveNext()
extern void U3CGetServersAsyncU3Ed__7_MoveNext_m7D03C073B6C99374D7B4ED833585D6041991DB07 (void);
// 0x00000304 System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServersAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetServersAsyncU3Ed__7_SetStateMachine_m1A5B420B9D92DA3196FDD52C3069A8DBDCFFD6D8 (void);
// 0x00000305 System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::MoveNext()
extern void U3CGetServiceServersAsyncU3Ed__8_MoveNext_m1DF537C8115BFD4B2074AD9259AC233224A7AF07 (void);
// 0x00000306 System.Void Unity.Services.Qos.Apis.QosDiscovery.QosDiscoveryApiClient/<GetServiceServersAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetServiceServersAsyncU3Ed__8_SetStateMachine_m1657475A462E8CB67A32F4351AEA052DB67B218E (void);
static Il2CppMethodPointer s_methodPointers[774] = 
{
	InternalQosResult_get_AverageLatencyMs_mC4DD63FA694AB15B32ECE7B95C391BF79250708B,
	InternalQosResult_get_PacketLoss_mAE93BDA8F14001F7D8B9B6B07D7BF5A6492F0E7A,
	InternalQosResult_AddAggregateLatency_mF4F807BAA262DEAE0E1B5A741C4D4F3B87AD363F,
	NULL,
	QosJob_get_QosResults_m99D294F773A497B20A7B607B3A5867AB1DD85CD6,
	QosJob__ctor_mC7757F9FE843176A16749879A99C777DD191D4BB,
	QosJob_Dispose_m023B42665979401AB7384B2BAB21B090BDDD21DF,
	QosJob_Execute_m66569856598381E3B9D9461F905CD7DD555819C6,
	QosJob_ProcessServers_m002469312F12627E8C8179045EF58AAEFC2767B6,
	QosJob_ProcessServer_m193D982E9EBF657DB785605C7ACFDE9FC1BFB121,
	QosJob_SendQosRequests_mE07A62D70704ABCBBFFD5C5B0A9E9D2075DC6A1E,
	QosJob_StoreServer_m10EC014D95822A081040752A7F218E8C3A511A09,
	QosJob_StoreResult_m4A593D9ECAFD18243069F8F1E01DD5362F5CCFC5,
	QosJob_RecvQosResponsesTimed_m05465557D4349CA3EB44FFFF643B1C32717301F6,
	QosJob_RecvQosResponses_mF7D285B242196414A29B2EB92995C41D5EF0E9CC,
	QosJob_EnableReceiveWait_m0411682DA5665E33783F6DE96212DEB4F369FC43,
	QosJob_LookupResult_mF78311CDB65FB597D261547BD872FBBB99D0D43E,
	QosJob_CreateAndBindSocket_mC2628791199CB10A3C0FCE263504FE8E9E552AD4,
	InternalQosServer__ctor_mDFFD17B79B32982F24BBF7814A2238B3A8DC1AA2,
	InternalQosServer_get_FirstIdx_mE1E26F2B9C43302D4D3A669677A32BB4D2CE0478,
	InternalQosServer_set_FirstIdx_mEE8FDA205B7B8B2DE6E8C6F1D0BFF888C1434A28,
	InternalQosServer_get_RequestIdentifier_m5BB7DCEB91EAD25DBD1733A74B42F4B490CCA2D5,
	InternalQosServer_set_RequestIdentifier_mAA9EF4C5C34AFB4EA335CBF999D2FBB46BD15E1F,
	InternalQosServer_get_Duplicate_mC9F0B30BEC3CEC496735613D59181989F13DEF2B,
	InternalQosServer_get_Address_mAF7047289348E24CA18A4202DA79D49C2E2298E4,
	NetworkEndPoint_get_Port_m251B69FEFF5FC2CF22A30DB9AA40348F340408CB,
	NetworkEndPoint_get_Family_mD35537952F0BCF8578F516DC06DC1D3B225F724F,
	NetworkEndPoint_get_Address_m1EB1D2DAF46FB52253E311B8423DF10FF8F03FBD,
	NetworkEndPoint_get_IsValid_m56A53E05D4C28A38048155E597009964FBAE2D94,
	NetworkEndPoint_TryParse_m290522A4D3F16227CB050DAAC84B0F7F9776E873,
	NetworkEndPoint_AddressAsString_mBF7B5153F6570D362AB7672C08CB24369B78D0E3,
	NetworkEndPoint_FromBaselibFamily_mF9E814790BF6646253228590A2C5938141A99CA9,
	NetworkEndPoint_ToBaselibFamily_m0F7E8A742E96033C58E29C69FBC20E3C5849DBB4,
	QosHelper_WouldBlock_mF00EFCE5355BC0FB84B9707F2B79BB6BD614A12D,
	QosHelper_ExpiredUtc_m78BBD5851F2AD5E38E8A7F369BC8B0A0F0241861,
	QosHelper_Since_m21E114D7D7BF2EAE40D75BEF8A64262D7E644EBC,
	QosRequest_get_Magic_m6F6463246F68BE8FCDACAC075DC10B8C08F23439,
	QosRequest_get_Version_mC41475C20C86D26270BBA934AA806FCD8A910238,
	QosRequest_get_FlowControl_m8B743B201483EC39C6F7E57579F36D841F276D03,
	QosRequest_get_Title_m9E68CBB84A55BD2B1E05F4943910C91A3ABE8236,
	QosRequest_set_Title_m835EE28AF9C6C4C8B30DE80EB01A61DFB27E52C2,
	QosRequest_get_Sequence_mB7BD623CF4FF0ADC6F36BBA4A5F83E5F4BB7892E,
	QosRequest_set_Sequence_m86A820A182DC7991C00DFB052A0130426633BEF7,
	QosRequest_get_Identifier_m5F1968614F882703F1BF258B7F920A4B43D8D062,
	QosRequest_set_Identifier_mBAA98E7B4ED9E4BC28CC5E29ADF69FE96C4987CF,
	QosRequest_get_Timestamp_mA705858832F72986788EAE43B411543CC563F5FD,
	QosRequest_set_Timestamp_m713A87D705A188F63BE58B901E51839C90214801,
	QosRequest_get_Length_mAA37DB5D869FE6DDAEEA9F5AD47E9109445A6853,
	QosRequest_Send_m29F081B6A23999A4F122B039D6843AB14B6B4C0E,
	QosRequest_Serialize_mD2D476A54E2B83C2352F0D2FEF95852C894075D6,
	QosRequest__ctor_m6DC94F804A906E394B07229DB0F6673A1D615395,
	QosResponse_get_Magic_m02CCA49C37D883E7F76ECCB379DF3FBC7A9212D2,
	QosResponse_get_Version_mA10B81D558000ED037D5C5B645E88FFD33A05747,
	QosResponse_get_FlowControl_mF09A6641107229409D421F7222B2B0BD2EDD677C,
	QosResponse_get_Sequence_m28659E53C16DABD437F1B3BFA4CDC600D86C6D5E,
	QosResponse_get_Identifier_mCEB0525F3D9FF3579526AAFA0D7B225D70BE927B,
	QosResponse_get_Timestamp_mB9E55DA94DCCBC222AA6C8B74DCE71BD40FF5169,
	QosResponse_get_Length_m0B242FFD9866C8C2E8312D323377912462342581,
	QosResponse_get_LatencyMs_m6D92DA16A56CC151961BCC6E090131C2097BF5FC,
	QosResponse_Recv_mC619EA992F44794C22AE151014FAAA8B5CE0E204,
	QosResponse_Deserialize_m26C3F202F7E36B5EB7A910EA34E8131CE627F778,
	QosResponse_Verify_mCC3F2D873A922CFD8A9DE72F64E3D20F1958E369,
	QosResponse_ParseFlowControl_mA247FCC942E7322C2CC02B3584FF871AEB0D4F2B,
	QosResponse__ctor_m209C46EAA2D73534740EDB232775F5E32E8DBA4D,
	UcgQosServer_ToString_mA7BEF62CE3005CD01054E082587C558D6C031AE8,
	UnityServicesExtensions_GetQosService_m3593AAA67E8010F2E2783D84942508108964EBE7,
	Configuration__ctor_mFF1BCF6303D8E5E362C3655F302DD9E8870BCD33,
	Configuration_MergeConfigurations_m10AD4EC118B0BF363E4C1993A490032DC0CE981D,
	QosResults__ctor_m6AD651FDED7000ABD5E4B91076A06D599A64F78B,
	QosResults_GetSortedQosResultsAsync_mFEBE0655FD611148054C48B89D5909160C1F5311,
	Response_get_Headers_m61DA9ECA3129CE732D2359F5B59B9BFBA86E6744,
	Response_get_Status_mE999C886D428C9253900FE67E14827DCB10D8B01,
	Response_set_Status_mBF047132804F44DADB37CCA4D2A5CDB3602AAC79,
	Response__ctor_mC03DB957D3366BECC35CB74B16E0756A07E6CB55,
	NULL,
	NULL,
	QosPackageInitializer_InitializeOnLoad_m7FA3BF98FB106D3A05C3B8E88B4F2728E311C8AB,
	QosPackageInitializer_Register_mAF0A91F365BC1C20745D187CA481B3935BAC4B5B,
	QosPackageInitializer_Register_m03F66F4C3694C6000ACFE631EB2AA0C3B8B741D2,
	QosPackageInitializer_Initialize_m31AE4939EEC42056FBC52EB1885A66161909312C,
	QosPackageInitializer_InitializeInstanceAsync_m299CF88FB1D0FC7AD06392350FF94608A84AC124,
	QosPackageInitializer_InitializeService_m014B6CA165415CDC6670245DA829E4F2D8DC1906,
	QosPackageInitializer_GetHost_m411B2841F662CD20FE22DB9F61BCD9CE392563FA,
	QosPackageInitializer__ctor_mB0FBE994896B3205A0F3F31493AB2958391C088A,
	InternalQosDiscoveryService__ctor_m4B669E8B21EB913A51D88F1250D898A326EC08A7,
	InternalQosDiscoveryService_get_QosDiscoveryApi_mD69672FD2DB905D120F004AC9053987010DDC3A0,
	InternalQosDiscoveryService_set_QosDiscoveryApi_m11DE640172B48DF8EBFB3F82808D795F41C6E524,
	InternalQosDiscoveryService_get_Configuration_mA0DD4210EE91DC1A3D859A9739905D7A927F60D0,
	InternalQosDiscoveryService_set_Configuration_m217D3AA86C388DD9373322CE07C7393FC1832264,
	QosService_get_Instance_m7CE84EAAA9BFA0CE64E1C1C114A669ED706243FC,
	QosService_set_Instance_m10C3C8DF77A585F6F3A45EC8320155D2B98BFCA0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	QosServiceComponent_get_Service_mE2EA3313A6F832BBA3BEB414721A35D9994FA0CA,
	QosServiceComponent__ctor_mBB5C02A323479F1A83A1F9B74C257E576EC0B9AF,
	WrappedQosService__ctor_m154BD2060BFDD4AFB55D2C4144A818FBD99EDE27,
	WrappedQosService_GetSortedQosResultsAsync_m6FF38AB3A4BE3D3C81822413DAF34E4E2C356DEF,
	WrappedQosService_GetSortedInternalQosResultsAsync_mA47A99113119329B564320BFAB1325B490670F57,
	WrappedQosService_SortResults_m2AC6413067175DCF1399CF82570FEBEBFCD90890,
	WrappedQosService_GetSortedRelayQosResultsAsync_m2C4FBAD9E1F3F975BA77A9654B4DF37A08DE11A5,
	WrappedQosService_GetSortedMultiplayQosResultsAsync_mD3A370C62EE859CED705022CF7D9847A6BC4080A,
	WrappedQosService_GetAllServersAsync_m8C20B363E0803E8779421D50B092AD6269CD1035,
	WrappedQosService_GetQosResultsAsync_mFFE9456AFB259DFEAD2230CB5F85739662D2BF6D,
	WrappedQosService_SendResultsMetricsV2_m25368E9E4C800FA76E9B6ACD12536CE93E9986FF,
	WrappedQosService_SendResultsMetricsV2ForService_mA6D289265D071C6C3D7DF4AC966659CE3C05773E,
	WrappedQosService_GetSortedInternalServiceQosResultsAsync_m52F7335596090087C1F7D059751EC00E9A7B1344,
	WrappedQosService_SortServiceResults_m3A7952B4A800940710C300ABD1BE61B8FE496240,
	WrappedQosService_SendResultsMetrics_m246EE236216BF9BA8D95829D2931E691A4E21485,
	WrappedQosService_SendResultsMetrics_m48455B559ACCB6F32C8D53272E57BF42BD1DCBDB,
	WrappedQosService_SendResultMetrics_mE325FDA0D83A063733B876D92EB6E019BFD42BD7,
	WrappedQosService_MapToPublicQosResult_mE680B3A1FF2741E4DA4663D37BD0DD5602AF3235,
	U3CGetSortedQosResultsAsyncU3Ed__18_MoveNext_m1B7A01EFFF3FC50F91E6DB3759E58031163A07DD,
	U3CGetSortedQosResultsAsyncU3Ed__18_SetStateMachine_m04924AD392D4E58837A050E195DEDC109F8FC99A,
	U3CGetSortedInternalQosResultsAsyncU3Ed__19_MoveNext_m06370FBA36A699DE76F8B334ED146AB622752F7B,
	U3CGetSortedInternalQosResultsAsyncU3Ed__19_SetStateMachine_m9A88088CCD463A6A21969748304B2B8424D860F0,
	U3CU3Ec__cctor_mAA0A9893E2022F1D0029C2E7A8EF3F3D1BB80548,
	U3CU3Ec__ctor_m5D76CBDAAD00C935B111C3EF84C85770C592F4AB,
	U3CU3Ec_U3CSortResultsU3Eb__20_0_mBBDBEECE75DBE164F3DE5A58C0DCC0A69A1D37D0,
	U3CU3Ec_U3CSortResultsU3Eb__20_1_mA3A22EC83A5DBD7B75D6D3EC9DAEBFFBDB5919CE,
	U3CU3Ec_U3CSendResultsMetricsV2U3Eb__25_0_m8DF637A7B701506918C87B7F2FC1C899E2637EF0,
	U3CU3Ec_U3CSendResultsMetricsV2U3Eb__25_1_m8BC88063A1828263BC22823228588B18375F2193,
	U3CU3Ec_U3CSendResultsMetricsV2ForServiceU3Eb__26_1_m4DB34626DFD1B1ACCD027BB536B06A1ABB03941A,
	U3CU3Ec_U3CSendResultsMetricsV2ForServiceU3Eb__26_2_m5C4CD0C9B5E6252255CE9A457A6D455B62DA0ADC,
	U3CU3Ec_U3CSortServiceResultsU3Eb__28_0_mF387229ACA387F2C7C6C56E1447D6AD945266590,
	U3CU3Ec_U3CSortServiceResultsU3Eb__28_1_m6DD44F4C781813107D119D88DFD2A3696DD105ED,
	U3CU3Ec_U3CSortServiceResultsU3Eb__28_2_m36EC3061E6B5E6A457556D634605B6A7F8B121AC,
	U3CU3Ec_U3CSortServiceResultsU3Eb__28_5_m2EC0CD0A417A28DADA5DE250CCCCA745EF10FD3A,
	U3CU3Ec_U3CSortServiceResultsU3Eb__28_6_mBAE64E64BD75F6B6C17FB452556FC31B8F85F714,
	U3CU3Ec_U3CSortServiceResultsU3Eb__28_7_m550AB3A892E3AF1D55E5DF391F41492294A65A91,
	U3CU3Ec_U3CSortServiceResultsU3Eb__28_3_mDF4AE97F15CEF09FA5D01A82C158304479A17150,
	U3CU3Ec_U3CSortServiceResultsU3Eb__28_4_mE34AAE545BADE34C0765CDB2D265E806EC57DD2E,
	U3CGetSortedRelayQosResultsAsyncU3Ed__21_MoveNext_m9CACDD2FA29D4886978ED6D197FA3A399681CA88,
	U3CGetSortedRelayQosResultsAsyncU3Ed__21_SetStateMachine_m0F99F468B6974334BD26BF000C603B026A99D160,
	U3CGetSortedMultiplayQosResultsAsyncU3Ed__22_MoveNext_mD98B7EDB6111B94640E9C9CD31AA111A2A6053B7,
	U3CGetSortedMultiplayQosResultsAsyncU3Ed__22_SetStateMachine_m950BE9F26C18809AB44900A3C9641B7FF4102505,
	U3CGetAllServersAsyncU3Ed__23_MoveNext_mB9D12572B7AFCEC927D9B04A856611B039CFF569,
	U3CGetAllServersAsyncU3Ed__23_SetStateMachine_mA4276B7879D3F288E14D8C02C33035F135F004B2,
	U3CGetQosResultsAsyncU3Ed__24_MoveNext_m88979B3256A288A1C468A29E0A89F9557AE4211A,
	U3CGetQosResultsAsyncU3Ed__24_SetStateMachine_mE640816313D24620C6B7880FFA35F7BD45FD6FDE,
	U3CU3Ec__DisplayClass26_0__ctor_m5D37BAC274CCD3123FCECA0D39EDB38CCB335352,
	U3CU3Ec__DisplayClass26_0_U3CSendResultsMetricsV2ForServiceU3Eb__0_m051B91AFA07CC553CD7A3E8EB633902C760FAD09,
	U3CGetSortedInternalServiceQosResultsAsyncU3Ed__27_MoveNext_mC0FEC8054B5551EB6C52B25F683FF598FBCFD4EC,
	U3CGetSortedInternalServiceQosResultsAsyncU3Ed__27_SetStateMachine_mAEBAA7C34E31F0B25202B41E3C3F8F00377FC86B,
	QosResult__ctor_m31D35D73B4735FD2CC1A40EB2686BB785B9E461F,
	QosResult_get_Region_mF3A9270B69D29876DDCB738238875CB8FBEF357D,
	QosResult_get_AverageLatencyMs_mD768392DF931372CFEADC93BFDB4F3402E83884E,
	QosResult_get_PacketLossPercent_m2EE3AABDE7587BEB9CEFEBB352BD23A98F3E1B6F,
	QosResult_get_Annotations_m1EE5D0335811BAA36A8DDD6B1936A3A4F84F19B8,
	UnsupportedEditorVersionException__ctor_m8647299E324884409566642AEEEC36729FA5F07A,
	UnsupportedEditorVersionException__ctor_mC11FE9277AF1738CAF4411DBD37F10AA9D08B5AD,
	Configuration__ctor_mDF2C53A7F32A79585AA2D4D701741F1259B93250,
	Configuration_MergeConfigurations_m6C5CE4427DEF391309805BED1573B774EC7BC7A3,
	Response_get_Headers_m68A6E9FB59894B0A1983BB7C803E63094A8C13CF,
	Response_get_Status_mA50ED96870E3C0F75A3F39AC858E2E76047FF79B,
	Response_set_Status_m67D6386C2A4D0C143F79D06E979E51C1A9F5651D,
	Response__ctor_m895979A1F0F6CF3B9D96A919BB35DE3E3F139A4A,
	NULL,
	NULL,
	EngineStateHelper_Init_m9087D11838DF62CD61E345FE59A7937FBA59AB55,
	ThreadHelper_get_SynchronizationContext_m44AC6332643F5B5A56611EF557215163EEFA12BF,
	ThreadHelper_get_TaskScheduler_mDB72985A7EF0882506F07C57AD83FF5A50785D44,
	ThreadHelper_get_MainThreadId_m98C2F92DBA5AA8C182B290C8074600373CA0023F,
	ThreadHelper_Init_mF61202E2A33E9F346B3D3C511B5FC91D8263450E,
	ErrorResponseBody__ctor_m52C0AD8B0B04B52127DC3493A217955D505F1D00,
	ErrorResponseBody_get_Type_m4C7E6CDBE35565FC7D2795668131B1BD9CEFC075,
	ErrorResponseBody_get_Title_m4FDA56A3C3BC74CE5587E10E18651FEEE06F0A27,
	ErrorResponseBody_get_Status_mB03A8D105561FDD3409C7982562FF37EA928E862,
	ErrorResponseBody_get_Code_m76723F87156648710CC87FFA182F5DE28EF7F1D9,
	ErrorResponseBody_get_Detail_m2D8D6625F43E608BB0203F4214E39745273E8A89,
	ErrorResponseBody_get_Instance_m53C2A1061F83199D4C7940BC0C63C0FDF9C97F30,
	ErrorResponseBody_get_Details_mFB343BBE6962EF99DF7C739A6879636E99AAA909,
	ErrorResponseBody_SerializeAsPathParam_mAD41B7E15978643F267938A0CDE44051E4F398B4,
	ErrorResponseBody_GetAsQueryParam_mCF07E84FC6F57F3CD8BB425A526F2493DA6EC145,
	NULL,
	NULL,
	QosServer__ctor_mB7FA1E9BF37655E5EC045BBB756D89FF22194424,
	QosServer_get_Endpoints_m69013259E343CDA72EA791EF427E907ABFDF5FC9,
	QosServer_get_Annotations_m5A2663E309E9EC815E5426A841EE208356B5D010,
	QosServer_SerializeAsPathParam_m0C42DA11D0A2D2ECAC1C0A7D1AD0F4F7D538E219,
	QosServer_GetAsQueryParam_m4C272203CF398AAFA20F957434EFA4F340F91CB0,
	QosServerAnnotations__ctor_m1D021F539C3702D22F845DC1BD1B0D49BE51E8E8,
	QosServerAnnotations_get_ProjectId_m7E29204E982BD20BB6D2EC292929907D788C9EF0,
	QosServerAnnotations_get_EnvironmentId_m7F5F9F33DCA838D2E41E12F354C79D792059D801,
	QosServerAnnotations_get_RelayRegionId_mD7F4E5A133FCD87EED0FC3DD400EBCE39BF99DD7,
	QosServerAnnotations_get_MultiplayRegionId_mE40C8D36504E238E282CC269F652431AB6021C33,
	QosServerAnnotations_get_MultiplayFleetId_m96903AF85C4609C20FBBEE596A7E150E05AFE5BE,
	QosServerAnnotations_get_MatchmakerQueueName_m029B9EFA9FD20DA51A4686B89E5E8E1FEDFE6484,
	QosServerAnnotations_get_MatchmakerPoolId_m852BE68F72925D01E2BB111869DE22B27F41EE5C,
	QosServerAnnotations_SerializeAsPathParam_mD858795C196631D1D79EC4680AD0E4175D4B607D,
	QosServerAnnotations_GetAsQueryParam_m71D6AB7991B9F21B063CE3BB415A9A6A6ACA877D,
	QosServersList__ctor_m159A3ABAFF6B699054F65DBA326397885B852BCE,
	QosServersList_get_Servers_m486BFAE28E92768A7FC63A8088FB33261A3BC09E,
	QosServersList_SerializeAsPathParam_mD15F84A017A952380E1641805D6D608FC6647CF3,
	QosServersList_GetAsQueryParam_mE28FC666118F513AE57F89BC156E332A33CDC4A3,
	QosServersResponseBody__ctor_m15BDF420E17E3861704D1F8A434CAE6E392B5FE4,
	QosServersResponseBody_get_Data_m1CBDB2644D1888443FF6A36DE2B5F19B1973F9A0,
	QosServersResponseBody_SerializeAsPathParam_mA9FCA3503EE238786A72B874E4FE443E3D64A340,
	QosServersResponseBody_GetAsQueryParam_m0B19B6169CC505ADE09155E021CAD2F1A86B5A3E,
	BaseApiClient__ctor_m0FC102F5D8B8DF3AF961ECF1E80D2DC42718F061,
	DeserializationException__ctor_mE05EAFC3DD3CAFCF8ACC973A933AF86BA0B9B4BA,
	DeserializationException__ctor_mFE1456B6ED14A0CA7962918F0FBD5C4D704320FE,
	DeserializationException__ctor_m8EF8082C5FCA7240D417F694146AE9E472DC5DB5,
	DeserializationSettings__ctor_m79D9F6A92CA5A23B6BFBD66D06DECBDB5B704B1B,
	HttpClient__ctor_m6269F1577077AE4EB9F96C777CA747E9B79312D5,
	HttpClient_MakeRequestAsync_m1BFDDA244CB6CECFA92C46FC4518E7C482FA3EFB,
	HttpClient_MakeRequestAsync_mC991E6EE66466DD43CDF8B653AE3EF25CAC89D2C,
	HttpClient_CreateWebRequestAsync_mFA520FE2AAE6EC6D705F442C0D75AE31037369F8,
	HttpClient_CreateHttpClientResponse_m443076A12C894E487D6AD368C3567A51D00C6C81,
	HttpClient_CreateWebRequestAsync_m7CBA73C40D2471CABFD988B327C4DBAC16343EFF,
	HttpClient_SetupMultipartRequest_m0728394A72ED0CEBE1765DCE54851141630EA427,
	HttpClient_SendWebRequest_m065B4C8237FB007FFE271FCC9F28B470053490C6,
	U3CMakeRequestAsyncU3Ed__1_MoveNext_m7F3210082204B92C2FEDFC53A3D426B378ABED3D,
	U3CMakeRequestAsyncU3Ed__1_SetStateMachine_mA5C6BFE8BC5074371B6017C675D032140576CD80,
	U3CMakeRequestAsyncU3Ed__2_MoveNext_mA874CB4672E8B2808E3FB49D85AC0AA5DD02E902,
	U3CMakeRequestAsyncU3Ed__2_SetStateMachine_mBC5CC9B26956D44B6A2907B19F8B45943455968C,
	U3CCreateWebRequestAsyncU3Ed__3_MoveNext_m6D46A744D6CC569EE2916F05C8020DFDC9E2DD91,
	U3CCreateWebRequestAsyncU3Ed__3_SetStateMachine_mE8ECA87DF89565B4E7DECE465797F56709EA712C,
	U3CU3Ec__DisplayClass4_0__ctor_mC303554C4976E1E4F6A6F796EBA278F9921C71EF,
	U3CU3Ec__DisplayClass4_0_U3CCreateHttpClientResponseU3Eb__0_mFA386A3C268DF88E3FDA022C9727AC81DFBBCB71,
	U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_MoveNext_mC0207A7FC14105EBC2A7C725112C86AF9D4BD28E,
	U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_SetStateMachine_m1FA2A05D56AF6BD67EC1E2E713265DDE32EC631A,
	U3CCreateHttpClientResponseU3Ed__4_MoveNext_m4C58464EB99BB66AD3562116F66BD290D7043C35,
	U3CCreateHttpClientResponseU3Ed__4_SetStateMachine_mA8B73220D7D80D0C087A4D4139D4F3990D803FBE,
	U3CU3Ec__DisplayClass5_0__ctor_m1FA11457BF94B64F1736D9A239ACFC899C73E6A3,
	U3CU3Ec__DisplayClass5_0_U3CCreateWebRequestAsyncU3Eb__0_m73C095E9FF62E96C251E9D35AF3CAEA22E53C112,
	U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_mEAAB4A8D3CDC061D871F427D95AE86D46F4FD510,
	U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m4C9A8DC8D164A6FADC57334513697F84A973FE6F,
	U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m9B76DED94CBA564ED5CB8665D40C0C46AD2CC3D4,
	U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m39D250001157B62ED5AF244978C139D6CEFAD3C9,
	HttpClientResponse__ctor_m3BF8749C12BC13A53D68A90C11AB51D15C4E0EB3,
	HttpClientResponse_get_Headers_mF01FF3B1ED6D623F42FD54BAA8ABDF06F81E4D46,
	HttpClientResponse_get_StatusCode_mD529277CAFD42FA56B3C37045560FB84F03F23AA,
	HttpClientResponse_get_IsHttpError_m354B0F3C7A107CF9AC2BC75A23099C9EDCB2FED7,
	HttpClientResponse_get_IsNetworkError_m95D888B4E1C0632A8B3B20EEFC0FC6C842BE37CE,
	HttpClientResponse_get_Data_m90EB105CA62836A350E1B2D61BCFA3D5F185A104,
	HttpClientResponse_get_ErrorMessage_m1ED68838AC59FE7B487FF82DEFC2C5E7C0E23C94,
	HttpException__ctor_m56B1F3125AD45ED04EAED959C4EF11F4B3083936,
	HttpException__ctor_m7DF0357D52970D2033A7ECBCCE144B2DE593115F,
	HttpException__ctor_m155A4CF823C7459C65BF3C8DDC7AAE36547CA7B6,
	HttpException__ctor_m0D53C1B68D9190ECA5B628D216F0CEAACD4E03F7,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	IsolatedJsonConvert_SerializeObject_mF0E149D935475A0D6A60E9CAF2CAD0FD0827D4B0,
	IsolatedJsonConvert_SerializeObject_m6D09E9BB97001C9BBA798861D6F922368205A29F,
	IsolatedJsonConvert_SerializeObject_mA3C158E6DE35CEC3DB897E9E1D019D678C5DF70A,
	IsolatedJsonConvert_SerializeObjectInternal_m0B3706D00A4C6E78F81C991C75DE69EFED55A1BD,
	IsolatedJsonConvert_DeserializeObject_m84C20801A58CF7062F083029EB961BA6061FEA70,
	NULL,
	IsolatedJsonConvert_DeserializeObject_m232B12822E263901AFEA2DCA88DF7D6514606EE9,
	JsonHelpers_RegisterTypesForAOT_m9AC84581F871D81A657837F1101965F60B65C765,
	NULL,
	NULL,
	NULL,
	JsonObject__ctor_m76BBEB84518544E890BEE4613468FD7B63A62299,
	JsonObject_GetAsString_mAF7AE24E8A0D9A12AE4BBBED2ED4BAB4B7D0A5CB,
	NULL,
	NULL,
	JsonObject_GetNewJsonObjectResponse_mE6F99FACD202136D834DC30B44CFAB4B2252A6D6,
	JsonObject_GetNewJsonObjectResponse_mC3136B5B8C9A15BD75D1BB8E7D56A82EB2EB1C39,
	JsonObject_GetNewJsonObjectResponse_m2E838ACE0779B649B75AA45D6318CE9A4F7AD092,
	JsonObject_GetNewJsonObjectResponse_mAE4C4D6FA62724ADF07E112F422BBB0C1FC731A8,
	JsonObject_GetNewJsonObjectResponse_mBE3FF12677C8A71A56D63FF436470D5C932B99CD,
	U3CU3Ec__cctor_m9A3B90D00BA19D51E262DAC1B50E0DF49810BF00,
	U3CU3Ec__ctor_mE38D4922153966099178C97D34082D683E443117,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__6_0_m2CFF2F5685962C6C48C02D044512510F86E47AD9,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_0_m8BC807A405084E06656799546E32C1DBE2A9F87B,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_1_m4230394CBA289DAC96FA1B1A5EE2213FD2F0C5B8,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_0_mA2BBA0B00C6FE089E7095365AC3D6927D08B0BDB,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_1_m02ED3A4806E0CAF48C3C9467D3D9071EE3A6E602,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_0_mFB638C3620E1E8CCA9BA524A0BF79FC92DF4F346,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_1_mBC03EF8874FEB3F210FEB77544E164398C6B9EAD,
	JsonObjectConverter_WriteJson_m11A814AA1ECCEBB35B0AC29776C1C18566F82A06,
	JsonObjectConverter_ReadJson_m17A78B97D55B3047BEE1466A6F086C4BFCF2610C,
	JsonObjectConverter_CanConvert_m1BA5F4DF0386F8123E066CE56E8B83F810F5CF57,
	JsonObjectConverter__ctor_mEC08BEF0D6D0D413E896A2AA8BC971EC97E6A4FE,
	JsonObjectCollectionConverter_WriteJson_m6B39AA6C939A217A2E6A44799BA81FCBBB990FA6,
	JsonObjectCollectionConverter_ReadJson_m53197199C2B829996368813CE1F47277148186D4,
	JsonObjectCollectionConverter_CanConvert_m7D32B651503B1613032B351A9F1CA8359EF5BBC2,
	JsonObjectCollectionConverter__ctor_mA72DAE09B91E8A66E8DDAED1D18801C7026F2694,
	ResponseDeserializationException__ctor_m5B5004827E282726D44B12DB32B1ADC2FBFBBE25,
	ResponseDeserializationException__ctor_mFE8C4B2DB284A49A71F899B5E99A830638D528D7,
	ResponseDeserializationException__ctor_m5D95998ACCA430313677D10892F76AC103424C6A,
	ResponseDeserializationException__ctor_mE9EE538D52D5439D1104D65A837186359E1F340A,
	ResponseDeserializationException__ctor_mEE83CC673AF9C488CB1B933C52B097471D45EB61,
	ResponseDeserializationException__ctor_m6806E7CF488FB7F7536F75AFA16CE4EA8606AC8F,
	ResponseHandler_DeserializeListOfJsonObjects_m0C95BA2850D008FD83ED9B6762F6A6BCE328C220,
	NULL,
	ResponseHandler_TryDeserializeResponse_m6E595A6902D10881E013E78F4881B5A193C1064D,
	ResponseHandler_GetDeserializedJson_m36D6444DD35AC8D6D3054C2B67244FB50FFE082E,
	ResponseHandler_HandleAsyncResponse_mB21C166EF9F475DCA788AE3F6819310DA3FAFAD7,
	ResponseHandler_CreateOneOfException_mF2FA0A693B3D5ED2DA53B3361C2AA2515372808F,
	ResponseHandler_CreateHttpException_m3810058BEB23369421627F4E2E5F27D8911C10F3,
	NULL,
	UnityWebRequestHelpers_GetAwaiter_mE2760096C2CE492857E955C9BEFBCCC11F272C9E,
	UnityWebRequestHelpers_CreateHttpClientResponse_m3D55E4E32A0CDC8E3340EC906829A395EC46F61B,
	U3CU3Ec__DisplayClass0_0__ctor_mC77E42F237CE8BB1B7A5A81EB38AA265713FE0A4,
	U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_mD6136492605C69565CF2A33C0416C156DC036E2F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RetryPolicyProvider__ctor_m22C9BF5C563064E4FAD71BA2ADBBCBEBB2158194,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ExceptionPredicate__ctor_m67BD2C89AA92DF39E595F2DB73C9B8B44C70A635,
	ExceptionPredicate_Invoke_mC841BF056636E4D49E4F918360E4E58E7C48BF96,
	ExceptionPredicate_BeginInvoke_mE94ECEB3DC45F01C5AE7110F3E22392EE95A4997,
	ExceptionPredicate_EndInvoke_mFD8126B21EE9E1EE82CD1DDF133E3D9EADEC2F1E,
	RetryPolicyConfig_get_MaxRetries_m1AEE59CE20A42BB06E3F17B052CC87F947BB6ED2,
	RetryPolicyConfig_set_MaxRetries_m63D703E34AADA669300FE2985F55E489C861256F,
	RetryPolicyConfig_get_JitterMagnitude_m8F4CEE0705B47106435422011CF04B756162EAB5,
	RetryPolicyConfig_set_JitterMagnitude_mAE04D234588D2DF71BBAB677D37A90B2AD3584D0,
	RetryPolicyConfig_get_DelayScale_mF126FCCC91B5BDE54E887D282DD7B08CE18FE298,
	RetryPolicyConfig_set_DelayScale_m8B88949CEA13D4EA5193940520B4068426F21951,
	RetryPolicyConfig_get_MaxDelayTime_m182CF786751FD16FF936BD46CB14FE0BE618D80D,
	RetryPolicyConfig_set_MaxDelayTime_m52850E6132AD9334EF85D043747FA30F82AE3DB5,
	NULL,
	NULL,
	RetryPolicyConfig_IsHandledException_m4698C731AEA0C01763BEADF187A261113D8A2281,
	RetryPolicyConfig__ctor_m7041144B56A834A556D03D36BDAD8E3E2AA0D7F0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	StatusCodePolicyConfig_HandleStatusCode_m562A8B63419625D48D9E78CA281B881AD62EE614,
	StatusCodePolicyConfig_DontHandleStatusCode_mA8EC8C60DF585907106C846352D8BAD33A48C5A2,
	StatusCodePolicyConfig_Clear_mC4CFEABB0DEAB858DF59EFBFBCD8A602EC7219E3,
	StatusCodePolicyConfig_IsHandledStatusCode_m558E790B33F3B5AA63FDB3C149789AC5933D77FD,
	StatusCodePolicyConfig__ctor_m350076C711F7148EE5B14D1CEB764015949B193E,
	NULL,
	NULL,
	QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m9C7AE771A1B635CECE68911DA5BAF7FF22FD23CF,
	QosDiscoveryApiBaseRequest_AddParamsToQueryParams_mF81A9845B1402B5520E5C8965194648507EAB92C,
	QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m53AAFAAFC14EDDD73E315F03F367337836C76613,
	NULL,
	QosDiscoveryApiBaseRequest_GetPathParamString_m71AF2F9B2736BE78F12D26EE5B1C3DA7D79E7476,
	QosDiscoveryApiBaseRequest_ConstructBody_mEEC34D3E19CE6579A245274AAAD5744CBC60E5B9,
	QosDiscoveryApiBaseRequest_ConstructBody_m0013877BDE9CF58C754F956A43D50320E7D03238,
	QosDiscoveryApiBaseRequest_ConstructBody_m37FE060861B9C7EEFA3C72345CA9E5D25068D0D2,
	QosDiscoveryApiBaseRequest_GenerateAcceptHeader_m3FFC888CF111A6405653B4D07C91639809F91641,
	QosDiscoveryApiBaseRequest_GenerateContentTypeHeader_m5C698BF18D356D1BF85CF5E5E50AE73C6CF47A32,
	QosDiscoveryApiBaseRequest_GenerateMultipartFormFileSection_m447D5C2FA804A405C2E32DA38A33E549A332B120,
	QosDiscoveryApiBaseRequest_GenerateMultipartFormFileSection_m8A747AF0C315578077F2D2399CCAC3A61723037F,
	QosDiscoveryApiBaseRequest_GetFileName_mA5471031B2EDCB13C9FBE74D26A2865F775DB3BC,
	QosDiscoveryApiBaseRequest__ctor_m4A19CE480188FA08702DE7D550B4A8BF4E971593,
	QosDiscoveryApiBaseRequest__cctor_m155FE9F00E2C9660B6E4F23A2B8287440BAEA00B,
	GetAllServersRequest_get_XRequestId_m7E805AF278D807591231A80E8AA5A7EFFC34F3F8,
	GetAllServersRequest_get_XUser_m7A6C0A79CD175E8A6BD8D61DDFF5216573122F65,
	GetAllServersRequest_get_XUserType_m457468389E9E854E04FFBFEE7BDAECFCE9A8C772,
	GetAllServersRequest__ctor_mC3234801942293C335BE0F84180CFF69D1839DEF,
	GetAllServersRequest_ConstructUrl_m210AB3AE96B98625544969BAB935D068FEE80BFE,
	GetAllServersRequest_ConstructBody_m241D8C070F61DD2F6771D4A36279DAC5A958250D,
	GetAllServersRequest_ConstructHeaders_mEF61480AA56FB6C7E802CB0B404AEE100C293A6C,
	NULL,
	QosDiscoveryApiClient_get_Configuration_m5DD394B3D852735DA0A6C7793A6CF4808A11AC41,
	QosDiscoveryApiClient_set_Configuration_m0151BFC5C8C216CC6FCE82321ABDEAB5842309D7,
	QosDiscoveryApiClient__ctor_m3EB6B81FDAD2816FA74646DCEFCA1DB02E0E6BEF,
	QosDiscoveryApiClient_GetAllServersAsync_m6703F25118C310B3F52C9163C0F42B369279258E,
	U3CGetAllServersAsyncU3Ed__7_MoveNext_mF6D563EAA5ADCD3AD468BE6E4E53155B24B51117,
	U3CGetAllServersAsyncU3Ed__7_SetStateMachine_m1DE222CE63529BB3B0DB974ED3A14A425D91792E,
	EngineStateHelper_Init_mCD239B6552B997DD76949AEF864CF813A6BDB6FD,
	ThreadHelper_get_SynchronizationContext_mEBBC5F6DC87B64616443CEC47B262855D07E3F3F,
	ThreadHelper_get_TaskScheduler_mE4BB459B45461BD9314E69B218A9D3F021E98672,
	ThreadHelper_get_MainThreadId_mCD0E6B56C919EE955A6854D09DE35BDD964B4027,
	ThreadHelper_Init_m06C176E2197E46ADA5299D3B56CB0DAF6A996525,
	QosJobProvider__ctor_mF18C33B6615A7DB6BB7D499EBF39C5A4C0E6BA86,
	QosJobProvider_Invoke_mCB0FA4045A9C73CF90E75AD05B0941BFBB502A7E,
	QosJobProvider_BeginInvoke_mE3401CEFB56B3A3966ECA906FACBB7521970B7D4,
	QosJobProvider_EndInvoke_mC04093465A5A7837DDD88EF683C5442E0CE38FA9,
	DnsResolver__ctor_m8190EBA2601E2FE2EB896BA1B4F3D1C26BF5DB15,
	DnsResolver_Invoke_m6BD09E67240C78EF4CEEBA58370775BE7B198520,
	DnsResolver_BeginInvoke_mF04E381AFD35B6CBCEB317025B52F7EC63FDE8A4,
	DnsResolver_EndInvoke_mEDC9BF3A6C20588EE374D639BFDC4A01EB3839A2,
	BaselibQosRunner__ctor_mD170788D00E9722B9479E4FF4440D4161A4D43E6,
	BaselibQosRunner_MeasureQosAsync_m6EDEEF2BA140E318C908BF8DF5CC1BA194AF6DB8,
	BaselibQosRunner_MeasureQosAsync_m0D44B657A6AE3031D5A6DCE0A5B2330B322C4A62,
	BaselibQosRunner_MeasureQosV2Async_mBBEF6DC22124DB69221BF4A47B00153BEF3FB5EE,
	BaselibQosRunner_RunQosJob_m8A871B7A0A39749A0C0AB9EF248CCBFAFF8D3446,
	BaselibQosRunner_ToUcgFormat_m1419968ECB7ECDB7B32C74DB6CBBF1CF61B2FA89,
	BaselibQosRunner_ToUcgFormat_m64C7E5FF60580CE53D0F4F5485FE514C0DF4550A,
	BaselibQosRunner_ToUcgFormat_mD1277570CCE59D0110FD04FE24200A8B179A3FD4,
	BaselibQosRunner_ParseResults_mF971BD8AA0A60F083F10C21B1FBB6322B23FA80A,
	BaselibQosRunner_ParseResults_mCDA26B980021BDC0A3C6AA8FC17EA3E8E2C90BD6,
	QosMeasurementImpl__ctor_mA5AD384D44EDEF7B31FC83C56E78C560DE56BA18,
	QosMeasurementImpl_get_AverageLatencyMs_m7C21C00D153E77F2F7AE3FE22B4F1F437CE9779D,
	QosMeasurementImpl_get_PacketLossPercent_m67248A58292C983F1DA0D5DD393C14AA9FB1902E,
	U3CU3Ec__cctor_m26C8EDF69C0D13638AD94C6488ED58BD79C95C7F,
	U3CU3Ec__ctor_m53A1925C62020D1466BB7427BA0A020BD5E7B040,
	U3CU3Ec_U3C_ctorU3Eb__2_0_mF20635D6BECBC77DD68D7933D34C74E53BF39651,
	U3CU3Ec_U3CMeasureQosAsyncU3Eb__3_0_mEF244A574C993EC47234D5203EBF0F9A2D32A2A0,
	U3CU3Ec_U3CMeasureQosAsyncU3Eb__3_1_mDDF2659E48C4F06482DCC87A0908A9A19C2168C2,
	U3CU3Ec_U3CMeasureQosAsyncU3Eb__4_0_mAE20C1E96E9E389D34A9C721402B2C69855C18BA,
	U3CU3Ec_U3CMeasureQosAsyncU3Eb__4_1_mD2C02BF6EC9807C32D3AAE9BE231E58B4784ACAD,
	U3CU3Ec_U3CMeasureQosV2AsyncU3Eb__6_0_mDD3C9F7601360629AD04DA9F9F4A021AF29DF9FD,
	U3CU3Ec_U3CMeasureQosV2AsyncU3Eb__6_1_mDCC25DC3476D37B035986315A60AEB7AC1107635,
	U3CMeasureQosAsyncU3Ed__3_MoveNext_mDCDD25826B3494B3AE4241AE8A3AD5F8DFB2A29C,
	U3CMeasureQosAsyncU3Ed__3_SetStateMachine_m1D0DB6B0A212BD39D5B0D6E603F6DD02825170EE,
	U3CMeasureQosAsyncU3Ed__4_MoveNext_mD588B05CEC27001ADD67D1B2822C60223F175A62,
	U3CMeasureQosAsyncU3Ed__4_SetStateMachine_m441DBB95C27491AB06BF872810D871A8B5FD14C0,
	U3CMeasureQosV2AsyncU3Ed__6_MoveNext_m16650CBDB2BC9B65229C044365F621A2871A8616,
	U3CMeasureQosV2AsyncU3Ed__6_SetStateMachine_m621A5637354BDE7CB90F1462C6AFFD2F8D933345,
	U3CRunQosJobU3Ed__7_MoveNext_m6D7367F4C787189E87FE14DB22A65E61FB200F8F,
	U3CRunQosJobU3Ed__7_SetStateMachine_m6CE58755D03AA344F86F67DCFE3C18B6EBB5DAD7,
	U3CToUcgFormatU3Ed__8_MoveNext_m26ED24613375D59369F99DD4DE40340D539B2178,
	U3CToUcgFormatU3Ed__8_SetStateMachine_m028D60346CDECA21D321AAA8BA625B2A05C628A7,
	U3CToUcgFormatU3Ed__9_MoveNext_m003A1E79E46FEDFDD87BF5009F24AE2443960F1E,
	U3CToUcgFormatU3Ed__9_SetStateMachine_m89E3571F337A54BC07406552056A1576E07EB6A4,
	U3CToUcgFormatU3Ed__10_MoveNext_m2CB11B7F42D80B586C86AAE8E2B76EE42002920A,
	U3CToUcgFormatU3Ed__10_SetStateMachine_m4ECD2D5A473727644A24747D4FDB0865841E0C87,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ErrorResponseBody__ctor_mD1405A130D7BC0164F06C0B1431A3E555CA39800,
	ErrorResponseBody_get_Type_mEEF34D6A7A21C9D856E2658F65E38CF8EB2679BA,
	ErrorResponseBody_get_Title_mFAAD11466E8D4379B8D5A6886728D125963E866A,
	ErrorResponseBody_get_Status_m875015E553B6BCD878A780B184DFC037B4709807,
	ErrorResponseBody_get_Code_mDB11C04F90C5B4F4EB37657ED8DC999A1002D100,
	ErrorResponseBody_get_Detail_m685F0F780303CEDD3E219878ABBCDAB71D49DA16,
	ErrorResponseBody_get_Instance_m0DBA78EB41CD0AE3A218F39D4D03DD9783F7D05B,
	ErrorResponseBody_get_Details_m07719D0B1415BC30834DEB68F5C939A03E3E2F37,
	ErrorResponseBody_SerializeAsPathParam_m5F03D04FAC05B56B9E41CF67200C723970D3E8E8,
	ErrorResponseBody_GetAsQueryParam_mF50CB47D12291B1DACDAB0A1E30271150BE3B6D4,
	KeyValuePair__ctor_mA8C81C1804EAA717255BA0B43B9030EC37B77448,
	KeyValuePair_get_Key_mF923D1589D475573BBC8FA490E960667AB1F756A,
	KeyValuePair_get_Value_m50CA3CC82B0C2A2FA87F600205DD564024461CFE,
	NULL,
	NULL,
	QosServer__ctor_mC629272624FD8B341620B53A52EF8C535E3535DC,
	QosServer_get_Endpoints_mD617719F90188011B22A4FA9C155299FE9CDB703,
	QosServer_get_Region_mD34E1FEF6D71BA6B31A8E1670F01E516FF173141,
	QosServer_get_Services_mAF031EDF95DF0D7C94917C41468795BDA553797B,
	QosServer_SerializeAsPathParam_m356B8820B67FF8DEBE4DBE9E2C4BA4F7063330A0,
	QosServer_GetAsQueryParam_m86A6F2763A5425D349363768B8D1BE76F2E72A1D,
	QosServersList__ctor_m2BF251BB54BEA0FA96F0EFD72EF6748DF6703479,
	QosServersList_get_Servers_m50BE80B5A162F0A4CEBED1C13999395CDC32E794,
	QosServersList_SerializeAsPathParam_mF701E647003EA72CFCD106A8787E2D30EA835019,
	QosServersList_GetAsQueryParam_m1D43BF13AB5E9F45B99D4BF001A515D8967455AC,
	QosServersResponseBody__ctor_m2298B57029DEEBB06027B40E1193737DEE9801DD,
	QosServersResponseBody_get_Data_mE5664C85DA17FC35E4BB7FE93E65FDD046FE0E71,
	QosServersResponseBody_SerializeAsPathParam_m5797BB787D25BED815919CEBA1A7F1267E332A5E,
	QosServersResponseBody_GetAsQueryParam_m08BC387A1931EE230B35FE2F2B158EE1358792C3,
	QosServiceServer__ctor_mEC00195151F3761349D5DB14F7EE8D87E016371A,
	QosServiceServer_get_Endpoints_mE5DB69CD3D03877D3D02D5A2A37FC5957AAF929B,
	QosServiceServer_get_Region_mC75EB3A7D95E19EFECE65C4601E118DB8598E1D5,
	QosServiceServer_get_Annotations_mAA082D760686AA727AAD70B339B4CEEEE389B49D,
	QosServiceServer_SerializeAsPathParam_mE288070390937AD695B41BD84F16907A1F32BDE8,
	QosServiceServer_GetAsQueryParam_m90A986959F8BB3B4DB7A607E0549A36CC1F233F2,
	QosServiceServersList__ctor_mC8CB2B45EA6C20798510D629C1B1FAC57025BF16,
	QosServiceServersList_get_Servers_m2C8CFD006F9F2AD7203B237F0DA066C84096C01F,
	QosServiceServersList_SerializeAsPathParam_mC2E26FA6163677EDA58413A298EED2E8DB25414E,
	QosServiceServersList_GetAsQueryParam_m1EFA3B24E28E0C1065FF4AA7FE34F3C214F18D71,
	QosServiceServersResponseBody__ctor_m255C7C660CA7BB2722E12DDC884B821C2A9E1E69,
	QosServiceServersResponseBody_get_Data_mD382212CA12835CDFEDD7F6FE9952E8B83D36DAF,
	QosServiceServersResponseBody_SerializeAsPathParam_mB111F192AB43E5CA1670EAC39A8AB598C77CBAD5,
	QosServiceServersResponseBody_GetAsQueryParam_m3AD4FB1B40CBA3A6F0DFF92E5962F997467A851A,
	BaseApiClient__ctor_m99B4C250174C7CCEF6640C19E082E9FEF4DF0F99,
	DeserializationException__ctor_m9CC49208201EB2245A19CB9111E48E0C9AAD9AFC,
	DeserializationException__ctor_m969A27E83C9B37A47D137A5E4B7B9F7BBA4F5330,
	DeserializationException__ctor_mDBCD4FBA44EFF08B6C206A15B9F14C34BEC18F98,
	DeserializationSettings__ctor_m82FDFFCE4B4F48D1131AAD21C5B87C5E5DFD2F0D,
	HttpClient__ctor_m280356AE0B5577C3BF6544E6673E70C13458016A,
	HttpClient_MakeRequestAsync_m59AEFEF16C8062494F149D5D8EF24EEF5951C138,
	HttpClient_MakeRequestAsync_m50DC00F79426CC78DC03EA6E492D2224A2D27F30,
	HttpClient_CreateWebRequestAsync_mE29C3A2AD414500FB9B360CEA834FA802957E413,
	HttpClient_CreateHttpClientResponse_m217677F5844BCCB60D19CED3DB0D443000FE717D,
	HttpClient_CreateWebRequestAsync_m7A2A754949C98CCAECD0D937602197F226EE3586,
	HttpClient_SetupMultipartRequest_m942E9984424A47309D6CEC78FA2B679EEB0D3D90,
	HttpClient_SendWebRequest_m2D838D76A68C3AAB0F5EE58D82D10860B61C2B8B,
	U3CMakeRequestAsyncU3Ed__1_MoveNext_m79FE0A0172C1A9B02BFFD7376FA295A1E27170B2,
	U3CMakeRequestAsyncU3Ed__1_SetStateMachine_mED0F1C7F72F9240EFE00BFFB80D53FD5FAF61540,
	U3CMakeRequestAsyncU3Ed__2_MoveNext_m66640452B0587066B569B1FC54EF18E56BAB7722,
	U3CMakeRequestAsyncU3Ed__2_SetStateMachine_mFB608307FF1F551572ED42F182A152F2576C633F,
	U3CCreateWebRequestAsyncU3Ed__3_MoveNext_m090F79DD1136CFFB71763CAC5CB40E82F9B085B2,
	U3CCreateWebRequestAsyncU3Ed__3_SetStateMachine_m122010E1D3F9B57707A4EA1F0153C312B9EC6961,
	U3CU3Ec__DisplayClass4_0__ctor_mB9949717D9A4125B4401B82C9B5D1C900B48111D,
	U3CU3Ec__DisplayClass4_0_U3CCreateHttpClientResponseU3Eb__0_m2230C7C90D945E29B62F78A0476567183EEFC0FD,
	U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_MoveNext_mA03BE170E9A572255312982AE52F01375400D8DE,
	U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_SetStateMachine_mCC240347B97CBF89431AE28D5382DD8CC60B27E6,
	U3CCreateHttpClientResponseU3Ed__4_MoveNext_m8B66DA73AF928840C73E8466784F1AEE92326DE9,
	U3CCreateHttpClientResponseU3Ed__4_SetStateMachine_mB0866CDDF7C71C3151A1E93A8B51D001DC46CB57,
	U3CU3Ec__DisplayClass5_0__ctor_m40692977886B6F2A77F04D996EF600E964D2DD63,
	U3CU3Ec__DisplayClass5_0_U3CCreateWebRequestAsyncU3Eb__0_m60FFFB8FFEF5B2CE8600E447B80C6E6DB0BF40B0,
	U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_m23D59D187639AD9FB641F234939B5834BA628FBE,
	U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m1D240B358D2D64F67840B533CE4F00CAAC6C2EE0,
	U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m015F1DB907416B26A58B29B6D045A71BD6A02A43,
	U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m7C97C2175057580CDD241D026CC3BE392DD81D93,
	HttpClientResponse__ctor_mD1FC246D901ACC12807D2B5C1DB39B038622A4E0,
	HttpClientResponse_get_Headers_mF870416900DD323B636429C079B0BCAE39AEA2AA,
	HttpClientResponse_get_StatusCode_mC8A80B746A2F6E82F65517C3AB4C479784B55998,
	HttpClientResponse_get_IsHttpError_m6DCA23589DA544E4E462A755FA5E781206995A3B,
	HttpClientResponse_get_IsNetworkError_m3C3F6623CBFEFED95570B0EC1677CA7E31C9DAE0,
	HttpClientResponse_get_Data_mB0A3BB94BF7CE548D1464659194CA4E9557E09DE,
	HttpClientResponse_get_ErrorMessage_mC9BA60D07DC70CF2BAA92C4C256BDF5CB74F326B,
	HttpException__ctor_mCC244F8536EC09FF5682C779CE590A4CCC92083A,
	HttpException__ctor_mB86916F592FA13816761064DA3D9F23C54ACB6F3,
	HttpException__ctor_m776EE74F052257E8AE9ABCF9C16CBF5774673578,
	HttpException__ctor_m4927A27335A8E59162013A85EF8972D88AA0754C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	JsonHelpers_RegisterTypesForAOT_m974460CCF262A51C0C6A1A6DC8A5DD8C0E65BDB5,
	NULL,
	NULL,
	NULL,
	JsonObject__ctor_m400BFEB71293B1BAE2A146047B091BC8CB26C419,
	JsonObject_GetAsString_m8CAC654D2EBE92E309029903CE9BC57DBB9BE8F3,
	NULL,
	NULL,
	JsonObject_GetNewJsonObjectResponse_m8F3EA16DA039644571EC1B22802101DDFF779488,
	JsonObject_GetNewJsonObjectResponse_m8D76EA8B41E5F473B50DC4D576EBCA781E0F8526,
	JsonObject_GetNewJsonObjectResponse_m7CDA73322474896572A97C6EE5B169DE6ECE6598,
	JsonObject_GetNewJsonObjectResponse_m120AE5571C8A5AB895A4ECF9B56C27EA7F91C115,
	JsonObject_GetNewJsonObjectResponse_mA200A82FD2A69D59C88D2EAD6AC95AE9116441DB,
	NULL,
	NULL,
	NULL,
	JsonObject_ValidateValue_m3D015321ABD5AE6AED7B475B6D3C34F0BCE63D80,
	U3CU3Ec__cctor_m1F5508EE17758D4288653D1DFEE9A14F4C7BC87C,
	U3CU3Ec__ctor_m5448ADC46B780675F047487C7C9E796EE4F5905B,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__6_0_mB1313A28830B6C3CAE5DF771A6C6ECEDC7D7C02A,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_0_m60FE2F5EAD4ECFBA1C02A6952221555AE509592D,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__7_1_mB2A2EE2C3DBFC2B40A4A32A42A185B84AC697994,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_0_m4BC198652ECFBE3189EE4EBCD1145D07F39E523C,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__8_1_m07B1EE8451E25AFA2279A63E4BC8FD9DB9E23EA7,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_0_mF8021649DCE28882A3B6F7A03143BC97393E8139,
	U3CU3Ec_U3CGetNewJsonObjectResponseU3Eb__9_1_m23599E62ED6614FFA53D2428BFDE56B40DAEF2B7,
	JsonObjectConverter_WriteJson_m4443914EDF2F50BD076694458FA416DD5E820385,
	JsonObjectConverter_ReadJson_m15F9F7E014B8BDC97D20CBAC668D406681702479,
	JsonObjectConverter_CanConvert_m671986316D3626EE88F9D7F3FE6FE85F217DCDD9,
	JsonObjectConverter__ctor_m3590310A54D23B98456D5A20348876A06E517477,
	JsonObjectCollectionConverter_WriteJson_m3FECF9626F197BA2591A9E0854BF77BD30148522,
	JsonObjectCollectionConverter_ReadJson_m95329F3C50B8AC6CC4CE8AB2A886B256E488B083,
	JsonObjectCollectionConverter_CanConvert_m9F453A4A348437B2B5618A247200576E41304278,
	JsonObjectCollectionConverter__ctor_m6ED8E494AC12D73951068CBA1CD779FF166DB9FA,
	ResponseDeserializationException__ctor_mBB646EAD382A7D28AC499D61C855E3D206D23ED6,
	ResponseDeserializationException__ctor_m704DEEF38F300A4921D3EDD6C564761DFE661C53,
	ResponseDeserializationException__ctor_mE6E1AB43F6B88301B5245AB34E1098448BC0554A,
	ResponseDeserializationException__ctor_m1DE598AF93250D2B52554D9769AC6800E23B124D,
	ResponseDeserializationException__ctor_m6B1A5AAC07DBF1DE306A000ECF99CE9648615C1B,
	ResponseDeserializationException__ctor_mA4DEFE9DC1A572D228890B5512CB493D1282324B,
	ResponseHandler_DeserializeListOfJsonObjects_m72969E19863FA285545CF4D8031AF7F4470DD3B3,
	NULL,
	ResponseHandler_TryDeserializeResponse_m8B10BE8FAD4A565918C93EBDAF0369E4486AE8D4,
	ResponseHandler_GetDeserializedJson_m677949D173DF6A65ADDAB1AD7FD2B972F3598C08,
	ResponseHandler_HandleAsyncResponse_mF85227D729EBBB63B3F269D558F28D7B3477CB31,
	ResponseHandler_CreateOneOfException_m997402BEBF88FA749E79E2FED79A3FEAFCE53AC7,
	ResponseHandler_CreateHttpException_m48860939F71126F5AC48218C48CA033069D606F8,
	NULL,
	UnityWebRequestHelpers_GetAwaiter_mFE3CEA3273241928556A3EE6EB2D699C01EF52F7,
	UnityWebRequestHelpers_CreateHttpClientResponse_m83A8F9B40812C3017F91315CC83DEA0BE3D74123,
	U3CU3Ec__DisplayClass0_0__ctor_m1A61824C8360274E7FD6DBB60E9D9060BB60DD89,
	U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_m57EB7F27B683B8FEE80D26546C11F61A1718DF66,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RetryPolicyProvider__ctor_mC01EBE6E838F689936D7023F85CE73D10FC12B6C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ExceptionPredicate__ctor_mEBD73A879F83A769E88FA53F2478AB16FF945548,
	ExceptionPredicate_Invoke_m3F2444C7B8EC04F5F115CCE20AF2E8C82C97A0A1,
	ExceptionPredicate_BeginInvoke_m75CCDEA0FFA54BE270D0C33F444A0C4FBBF5E3C5,
	ExceptionPredicate_EndInvoke_mACA90E05A18B572833CE0E4AF0A287FE27EABD9F,
	RetryPolicyConfig_get_MaxRetries_m8ADBE52F926D048CD3177430F158BC0B782C47B3,
	RetryPolicyConfig_set_MaxRetries_mAD9E1F79D057613A72CF718DC59B35A53EC33EC8,
	RetryPolicyConfig_get_JitterMagnitude_m009B8A35391F9C2B887D2ED52654C1744ED29BBA,
	RetryPolicyConfig_set_JitterMagnitude_m73A48B44DE4B382FEF006B88D8AAFFF9DF8BD2FA,
	RetryPolicyConfig_get_DelayScale_m69C435DC21420D3DDCBE7AB13A98007DA4F1061C,
	RetryPolicyConfig_set_DelayScale_mEA74AE600823621A7656E7FE2E7297AF872A17C8,
	RetryPolicyConfig_get_MaxDelayTime_mAB0296840F96895FDC268227D7F0F6E1E240C44B,
	RetryPolicyConfig_set_MaxDelayTime_mF3D3E6E899CF50C447D119FB57F869E1C4D6B72B,
	NULL,
	NULL,
	RetryPolicyConfig_IsHandledException_mE95593C08075731E5DB88224D60F09FC3E9F4DD5,
	RetryPolicyConfig__ctor_m115BCCCDB4FE026C72F831F7983B994E35A31A2E,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	StatusCodePolicyConfig_HandleStatusCode_mBA2EBE70DF2505CFD77B9FAA35D7811CF28C6494,
	StatusCodePolicyConfig_DontHandleStatusCode_m0E0A1195CF35B9EB8EAA1701ACF7D5F6C579B27E,
	StatusCodePolicyConfig_Clear_m78882BAE51B27B9AB1B413AA3BC4C5A0B5DDE04F,
	StatusCodePolicyConfig_IsHandledStatusCode_mF80289B1A9A355AAC4A484288560214FC97F4A95,
	StatusCodePolicyConfig__ctor_m7128CC52883DBD3021F9388A11F15D7F5C8F02D8,
	NULL,
	NULL,
	QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m37EBFF6DDCA6400B0C77F2CABAB42FDFA86B5A97,
	QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m56323A5B31B725034B0CA9AE992F7FB2946AE2FD,
	QosDiscoveryApiBaseRequest_AddParamsToQueryParams_m5B6D84BFB04ADAA9739011B69F404C051AB0C1F7,
	NULL,
	QosDiscoveryApiBaseRequest_GetPathParamString_m175BA1D606F251D4F8318DF77732D96F9BCFDC7D,
	QosDiscoveryApiBaseRequest_ConstructBody_m7F185A28CF2CCE8BC8E0CBCB25D6AEFEDE0126D0,
	QosDiscoveryApiBaseRequest_ConstructBody_mDD86CD521B7A69DA0C57CFFCF5F0AC6CEDB09817,
	QosDiscoveryApiBaseRequest_ConstructBody_m916EE630F6706AB71EFDFA875D84FD2684CE2C77,
	QosDiscoveryApiBaseRequest_GenerateAcceptHeader_m8393B909E55846FC30E166C3ED7E52CBFA9CFD2F,
	QosDiscoveryApiBaseRequest_GenerateContentTypeHeader_m8578BC7C80BEA3C4919B898356FC5A205B59DCE7,
	QosDiscoveryApiBaseRequest_GenerateMultipartFormFileSection_mBBED2819CA892389B78A9DC3D78E90B2DDFBB1F8,
	QosDiscoveryApiBaseRequest_GenerateMultipartFormFileSection_mD0AF281D370DCAA50A68D266A19600CD6A6263BC,
	QosDiscoveryApiBaseRequest_GetFileName_m060FEF2B62E15D45760509984E2ABD20FF41FC2A,
	QosDiscoveryApiBaseRequest__ctor_m9122E977B93327ACE35337EA6E107C8EBC1C4A6A,
	QosDiscoveryApiBaseRequest__cctor_mB3CFEAA8095B2C5F15A1F5BAD07BB5EE915B4D99,
	GetServersRequest_get_Region_m49F11E7EA0533CD65FB26FBE102104D2338AC934,
	GetServersRequest_get_Service_mD27F2D2FFD7924C9681C2116EFAFD03E77F59FEA,
	GetServersRequest__ctor_m454773232F666315509CCB10A2B5A029BD2CB70D,
	GetServersRequest_ConstructUrl_m34E2AC5428BA279F3BF7001DB96FA0702B9D44C2,
	GetServersRequest_ConstructBody_mCDAF08BF135ED626205192361C7757197C162166,
	GetServersRequest_ConstructHeaders_m8CE30E99E33DDE136776B5830F2FCBF91C0B426A,
	U3CU3Ec__cctor_m9AC91843F1D0511A7FFB24E03AFF31ED8BB08989,
	U3CU3Ec__ctor_m8002077DF6C1A68B5F9A799915DA6F1B9DC5B2FA,
	U3CU3Ec_U3C_ctorU3Eb__7_0_mDF3BC19C96293831FC8ACA1C245D272CC33625A9,
	GetServiceServersRequest_get_ServiceId_mB2C010F176BA4F8D230104593F5B9EEC711B1049,
	GetServiceServersRequest_get_Region_mA65DEA51BD0E77B107EFC7A6A65230E065DC9170,
	GetServiceServersRequest_get_Fleet_mD6D5C2DA0516EF331104C353AF62138C36824108,
	GetServiceServersRequest__ctor_m99AD02EF36C866615FFEE6BD9982DAA47D863E45,
	GetServiceServersRequest_ConstructUrl_m56EB2029452920997532C4C0204869F8602C268E,
	GetServiceServersRequest_ConstructBody_m6ABA128A6D362022654EF883080C72B44C1137D1,
	GetServiceServersRequest_ConstructHeaders_mFD5284F54B2E2B35E84A72C5C79E87B1EB9F3BBB,
	U3CU3Ec__cctor_m6691682EB45489044420524E55EE6A428C485087,
	U3CU3Ec__ctor_mA0E1961AA9DCAB1B69E085A4F8C7AB6CDBB8E19D,
	U3CU3Ec_U3C_ctorU3Eb__12_0_m4A470291528DAE7018FFABAA6458453A635C09E1,
	U3CU3Ec_U3C_ctorU3Eb__12_1_mD40DBC98B5AB7B82BE1D71AD704F7EB0079F3A95,
	NULL,
	NULL,
	QosDiscoveryApiClient_get_Configuration_mA8F6B3F90810410D20D6420909967781E524A3FE,
	QosDiscoveryApiClient_set_Configuration_m98B22FA0BDAE4468C4E4B505D0AC6D4448CDFAA5,
	QosDiscoveryApiClient__ctor_mAC0DD995EBE1EE7C9B7BF1D376B15451A3322D11,
	QosDiscoveryApiClient_GetServersAsync_m0ED9B245DB1571CD45BFF48C6A1968C44D2B545B,
	QosDiscoveryApiClient_GetServiceServersAsync_m6F125DB6FD01515D93A29D2187C190D536BF28CA,
	U3CGetServersAsyncU3Ed__7_MoveNext_m7D03C073B6C99374D7B4ED833585D6041991DB07,
	U3CGetServersAsyncU3Ed__7_SetStateMachine_m1A5B420B9D92DA3196FDD52C3069A8DBDCFFD6D8,
	U3CGetServiceServersAsyncU3Ed__8_MoveNext_m1DF537C8115BFD4B2074AD9259AC233224A7AF07,
	U3CGetServiceServersAsyncU3Ed__8_SetStateMachine_m1657475A462E8CB67A32F4351AEA052DB67B218E,
};
extern void InternalQosResult_get_AverageLatencyMs_mC4DD63FA694AB15B32ECE7B95C391BF79250708B_AdjustorThunk (void);
extern void InternalQosResult_get_PacketLoss_mAE93BDA8F14001F7D8B9B6B07D7BF5A6492F0E7A_AdjustorThunk (void);
extern void InternalQosResult_AddAggregateLatency_mF4F807BAA262DEAE0E1B5A741C4D4F3B87AD363F_AdjustorThunk (void);
extern void QosJob_get_QosResults_m99D294F773A497B20A7B607B3A5867AB1DD85CD6_AdjustorThunk (void);
extern void QosJob__ctor_mC7757F9FE843176A16749879A99C777DD191D4BB_AdjustorThunk (void);
extern void QosJob_Dispose_m023B42665979401AB7384B2BAB21B090BDDD21DF_AdjustorThunk (void);
extern void QosJob_Execute_m66569856598381E3B9D9461F905CD7DD555819C6_AdjustorThunk (void);
extern void QosJob_ProcessServers_m002469312F12627E8C8179045EF58AAEFC2767B6_AdjustorThunk (void);
extern void QosJob_ProcessServer_m193D982E9EBF657DB785605C7ACFDE9FC1BFB121_AdjustorThunk (void);
extern void QosJob_SendQosRequests_mE07A62D70704ABCBBFFD5C5B0A9E9D2075DC6A1E_AdjustorThunk (void);
extern void QosJob_StoreServer_m10EC014D95822A081040752A7F218E8C3A511A09_AdjustorThunk (void);
extern void QosJob_StoreResult_m4A593D9ECAFD18243069F8F1E01DD5362F5CCFC5_AdjustorThunk (void);
extern void QosJob_RecvQosResponsesTimed_m05465557D4349CA3EB44FFFF643B1C32717301F6_AdjustorThunk (void);
extern void QosJob_RecvQosResponses_mF7D285B242196414A29B2EB92995C41D5EF0E9CC_AdjustorThunk (void);
extern void QosJob_EnableReceiveWait_m0411682DA5665E33783F6DE96212DEB4F369FC43_AdjustorThunk (void);
extern void QosJob_LookupResult_mF78311CDB65FB597D261547BD872FBBB99D0D43E_AdjustorThunk (void);
extern void InternalQosServer__ctor_mDFFD17B79B32982F24BBF7814A2238B3A8DC1AA2_AdjustorThunk (void);
extern void InternalQosServer_get_FirstIdx_mE1E26F2B9C43302D4D3A669677A32BB4D2CE0478_AdjustorThunk (void);
extern void InternalQosServer_set_FirstIdx_mEE8FDA205B7B8B2DE6E8C6F1D0BFF888C1434A28_AdjustorThunk (void);
extern void InternalQosServer_get_RequestIdentifier_m5BB7DCEB91EAD25DBD1733A74B42F4B490CCA2D5_AdjustorThunk (void);
extern void InternalQosServer_set_RequestIdentifier_mAA9EF4C5C34AFB4EA335CBF999D2FBB46BD15E1F_AdjustorThunk (void);
extern void InternalQosServer_get_Duplicate_mC9F0B30BEC3CEC496735613D59181989F13DEF2B_AdjustorThunk (void);
extern void InternalQosServer_get_Address_mAF7047289348E24CA18A4202DA79D49C2E2298E4_AdjustorThunk (void);
extern void NetworkEndPoint_get_Port_m251B69FEFF5FC2CF22A30DB9AA40348F340408CB_AdjustorThunk (void);
extern void NetworkEndPoint_get_Family_mD35537952F0BCF8578F516DC06DC1D3B225F724F_AdjustorThunk (void);
extern void NetworkEndPoint_get_Address_m1EB1D2DAF46FB52253E311B8423DF10FF8F03FBD_AdjustorThunk (void);
extern void NetworkEndPoint_get_IsValid_m56A53E05D4C28A38048155E597009964FBAE2D94_AdjustorThunk (void);
extern void NetworkEndPoint_AddressAsString_mBF7B5153F6570D362AB7672C08CB24369B78D0E3_AdjustorThunk (void);
extern void UcgQosServer_ToString_mA7BEF62CE3005CD01054E082587C558D6C031AE8_AdjustorThunk (void);
extern void U3CGetSortedQosResultsAsyncU3Ed__18_MoveNext_m1B7A01EFFF3FC50F91E6DB3759E58031163A07DD_AdjustorThunk (void);
extern void U3CGetSortedQosResultsAsyncU3Ed__18_SetStateMachine_m04924AD392D4E58837A050E195DEDC109F8FC99A_AdjustorThunk (void);
extern void U3CGetSortedInternalQosResultsAsyncU3Ed__19_MoveNext_m06370FBA36A699DE76F8B334ED146AB622752F7B_AdjustorThunk (void);
extern void U3CGetSortedInternalQosResultsAsyncU3Ed__19_SetStateMachine_m9A88088CCD463A6A21969748304B2B8424D860F0_AdjustorThunk (void);
extern void U3CGetSortedRelayQosResultsAsyncU3Ed__21_MoveNext_m9CACDD2FA29D4886978ED6D197FA3A399681CA88_AdjustorThunk (void);
extern void U3CGetSortedRelayQosResultsAsyncU3Ed__21_SetStateMachine_m0F99F468B6974334BD26BF000C603B026A99D160_AdjustorThunk (void);
extern void U3CGetSortedMultiplayQosResultsAsyncU3Ed__22_MoveNext_mD98B7EDB6111B94640E9C9CD31AA111A2A6053B7_AdjustorThunk (void);
extern void U3CGetSortedMultiplayQosResultsAsyncU3Ed__22_SetStateMachine_m950BE9F26C18809AB44900A3C9641B7FF4102505_AdjustorThunk (void);
extern void U3CGetAllServersAsyncU3Ed__23_MoveNext_mB9D12572B7AFCEC927D9B04A856611B039CFF569_AdjustorThunk (void);
extern void U3CGetAllServersAsyncU3Ed__23_SetStateMachine_mA4276B7879D3F288E14D8C02C33035F135F004B2_AdjustorThunk (void);
extern void U3CGetQosResultsAsyncU3Ed__24_MoveNext_m88979B3256A288A1C468A29E0A89F9557AE4211A_AdjustorThunk (void);
extern void U3CGetQosResultsAsyncU3Ed__24_SetStateMachine_mE640816313D24620C6B7880FFA35F7BD45FD6FDE_AdjustorThunk (void);
extern void U3CGetSortedInternalServiceQosResultsAsyncU3Ed__27_MoveNext_mC0FEC8054B5551EB6C52B25F683FF598FBCFD4EC_AdjustorThunk (void);
extern void U3CGetSortedInternalServiceQosResultsAsyncU3Ed__27_SetStateMachine_mAEBAA7C34E31F0B25202B41E3C3F8F00377FC86B_AdjustorThunk (void);
extern void U3CMakeRequestAsyncU3Ed__1_MoveNext_m7F3210082204B92C2FEDFC53A3D426B378ABED3D_AdjustorThunk (void);
extern void U3CMakeRequestAsyncU3Ed__1_SetStateMachine_mA5C6BFE8BC5074371B6017C675D032140576CD80_AdjustorThunk (void);
extern void U3CMakeRequestAsyncU3Ed__2_MoveNext_mA874CB4672E8B2808E3FB49D85AC0AA5DD02E902_AdjustorThunk (void);
extern void U3CMakeRequestAsyncU3Ed__2_SetStateMachine_mBC5CC9B26956D44B6A2907B19F8B45943455968C_AdjustorThunk (void);
extern void U3CCreateWebRequestAsyncU3Ed__3_MoveNext_m6D46A744D6CC569EE2916F05C8020DFDC9E2DD91_AdjustorThunk (void);
extern void U3CCreateWebRequestAsyncU3Ed__3_SetStateMachine_mE8ECA87DF89565B4E7DECE465797F56709EA712C_AdjustorThunk (void);
extern void U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_MoveNext_mC0207A7FC14105EBC2A7C725112C86AF9D4BD28E_AdjustorThunk (void);
extern void U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_SetStateMachine_m1FA2A05D56AF6BD67EC1E2E713265DDE32EC631A_AdjustorThunk (void);
extern void U3CCreateHttpClientResponseU3Ed__4_MoveNext_m4C58464EB99BB66AD3562116F66BD290D7043C35_AdjustorThunk (void);
extern void U3CCreateHttpClientResponseU3Ed__4_SetStateMachine_mA8B73220D7D80D0C087A4D4139D4F3990D803FBE_AdjustorThunk (void);
extern void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_mEAAB4A8D3CDC061D871F427D95AE86D46F4FD510_AdjustorThunk (void);
extern void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m4C9A8DC8D164A6FADC57334513697F84A973FE6F_AdjustorThunk (void);
extern void U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m9B76DED94CBA564ED5CB8665D40C0C46AD2CC3D4_AdjustorThunk (void);
extern void U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m39D250001157B62ED5AF244978C139D6CEFAD3C9_AdjustorThunk (void);
extern void U3CGetAllServersAsyncU3Ed__7_MoveNext_mF6D563EAA5ADCD3AD468BE6E4E53155B24B51117_AdjustorThunk (void);
extern void U3CGetAllServersAsyncU3Ed__7_SetStateMachine_m1DE222CE63529BB3B0DB974ED3A14A425D91792E_AdjustorThunk (void);
extern void QosMeasurementImpl__ctor_mA5AD384D44EDEF7B31FC83C56E78C560DE56BA18_AdjustorThunk (void);
extern void QosMeasurementImpl_get_AverageLatencyMs_m7C21C00D153E77F2F7AE3FE22B4F1F437CE9779D_AdjustorThunk (void);
extern void QosMeasurementImpl_get_PacketLossPercent_m67248A58292C983F1DA0D5DD393C14AA9FB1902E_AdjustorThunk (void);
extern void U3CMeasureQosAsyncU3Ed__3_MoveNext_mDCDD25826B3494B3AE4241AE8A3AD5F8DFB2A29C_AdjustorThunk (void);
extern void U3CMeasureQosAsyncU3Ed__3_SetStateMachine_m1D0DB6B0A212BD39D5B0D6E603F6DD02825170EE_AdjustorThunk (void);
extern void U3CMeasureQosAsyncU3Ed__4_MoveNext_mD588B05CEC27001ADD67D1B2822C60223F175A62_AdjustorThunk (void);
extern void U3CMeasureQosAsyncU3Ed__4_SetStateMachine_m441DBB95C27491AB06BF872810D871A8B5FD14C0_AdjustorThunk (void);
extern void U3CMeasureQosV2AsyncU3Ed__6_MoveNext_m16650CBDB2BC9B65229C044365F621A2871A8616_AdjustorThunk (void);
extern void U3CMeasureQosV2AsyncU3Ed__6_SetStateMachine_m621A5637354BDE7CB90F1462C6AFFD2F8D933345_AdjustorThunk (void);
extern void U3CRunQosJobU3Ed__7_MoveNext_m6D7367F4C787189E87FE14DB22A65E61FB200F8F_AdjustorThunk (void);
extern void U3CRunQosJobU3Ed__7_SetStateMachine_m6CE58755D03AA344F86F67DCFE3C18B6EBB5DAD7_AdjustorThunk (void);
extern void U3CToUcgFormatU3Ed__8_MoveNext_m26ED24613375D59369F99DD4DE40340D539B2178_AdjustorThunk (void);
extern void U3CToUcgFormatU3Ed__8_SetStateMachine_m028D60346CDECA21D321AAA8BA625B2A05C628A7_AdjustorThunk (void);
extern void U3CToUcgFormatU3Ed__9_MoveNext_m003A1E79E46FEDFDD87BF5009F24AE2443960F1E_AdjustorThunk (void);
extern void U3CToUcgFormatU3Ed__9_SetStateMachine_m89E3571F337A54BC07406552056A1576E07EB6A4_AdjustorThunk (void);
extern void U3CToUcgFormatU3Ed__10_MoveNext_m2CB11B7F42D80B586C86AAE8E2B76EE42002920A_AdjustorThunk (void);
extern void U3CToUcgFormatU3Ed__10_SetStateMachine_m4ECD2D5A473727644A24747D4FDB0865841E0C87_AdjustorThunk (void);
extern void U3CMakeRequestAsyncU3Ed__1_MoveNext_m79FE0A0172C1A9B02BFFD7376FA295A1E27170B2_AdjustorThunk (void);
extern void U3CMakeRequestAsyncU3Ed__1_SetStateMachine_mED0F1C7F72F9240EFE00BFFB80D53FD5FAF61540_AdjustorThunk (void);
extern void U3CMakeRequestAsyncU3Ed__2_MoveNext_m66640452B0587066B569B1FC54EF18E56BAB7722_AdjustorThunk (void);
extern void U3CMakeRequestAsyncU3Ed__2_SetStateMachine_mFB608307FF1F551572ED42F182A152F2576C633F_AdjustorThunk (void);
extern void U3CCreateWebRequestAsyncU3Ed__3_MoveNext_m090F79DD1136CFFB71763CAC5CB40E82F9B085B2_AdjustorThunk (void);
extern void U3CCreateWebRequestAsyncU3Ed__3_SetStateMachine_m122010E1D3F9B57707A4EA1F0153C312B9EC6961_AdjustorThunk (void);
extern void U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_MoveNext_mA03BE170E9A572255312982AE52F01375400D8DE_AdjustorThunk (void);
extern void U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_SetStateMachine_mCC240347B97CBF89431AE28D5382DD8CC60B27E6_AdjustorThunk (void);
extern void U3CCreateHttpClientResponseU3Ed__4_MoveNext_m8B66DA73AF928840C73E8466784F1AEE92326DE9_AdjustorThunk (void);
extern void U3CCreateHttpClientResponseU3Ed__4_SetStateMachine_mB0866CDDF7C71C3151A1E93A8B51D001DC46CB57_AdjustorThunk (void);
extern void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_m23D59D187639AD9FB641F234939B5834BA628FBE_AdjustorThunk (void);
extern void U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m1D240B358D2D64F67840B533CE4F00CAAC6C2EE0_AdjustorThunk (void);
extern void U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m015F1DB907416B26A58B29B6D045A71BD6A02A43_AdjustorThunk (void);
extern void U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m7C97C2175057580CDD241D026CC3BE392DD81D93_AdjustorThunk (void);
extern void U3CGetServersAsyncU3Ed__7_MoveNext_m7D03C073B6C99374D7B4ED833585D6041991DB07_AdjustorThunk (void);
extern void U3CGetServersAsyncU3Ed__7_SetStateMachine_m1A5B420B9D92DA3196FDD52C3069A8DBDCFFD6D8_AdjustorThunk (void);
extern void U3CGetServiceServersAsyncU3Ed__8_MoveNext_m1DF537C8115BFD4B2074AD9259AC233224A7AF07_AdjustorThunk (void);
extern void U3CGetServiceServersAsyncU3Ed__8_SetStateMachine_m1657475A462E8CB67A32F4351AEA052DB67B218E_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[94] = 
{
	{ 0x06000001, InternalQosResult_get_AverageLatencyMs_mC4DD63FA694AB15B32ECE7B95C391BF79250708B_AdjustorThunk },
	{ 0x06000002, InternalQosResult_get_PacketLoss_mAE93BDA8F14001F7D8B9B6B07D7BF5A6492F0E7A_AdjustorThunk },
	{ 0x06000003, InternalQosResult_AddAggregateLatency_mF4F807BAA262DEAE0E1B5A741C4D4F3B87AD363F_AdjustorThunk },
	{ 0x06000005, QosJob_get_QosResults_m99D294F773A497B20A7B607B3A5867AB1DD85CD6_AdjustorThunk },
	{ 0x06000006, QosJob__ctor_mC7757F9FE843176A16749879A99C777DD191D4BB_AdjustorThunk },
	{ 0x06000007, QosJob_Dispose_m023B42665979401AB7384B2BAB21B090BDDD21DF_AdjustorThunk },
	{ 0x06000008, QosJob_Execute_m66569856598381E3B9D9461F905CD7DD555819C6_AdjustorThunk },
	{ 0x06000009, QosJob_ProcessServers_m002469312F12627E8C8179045EF58AAEFC2767B6_AdjustorThunk },
	{ 0x0600000A, QosJob_ProcessServer_m193D982E9EBF657DB785605C7ACFDE9FC1BFB121_AdjustorThunk },
	{ 0x0600000B, QosJob_SendQosRequests_mE07A62D70704ABCBBFFD5C5B0A9E9D2075DC6A1E_AdjustorThunk },
	{ 0x0600000C, QosJob_StoreServer_m10EC014D95822A081040752A7F218E8C3A511A09_AdjustorThunk },
	{ 0x0600000D, QosJob_StoreResult_m4A593D9ECAFD18243069F8F1E01DD5362F5CCFC5_AdjustorThunk },
	{ 0x0600000E, QosJob_RecvQosResponsesTimed_m05465557D4349CA3EB44FFFF643B1C32717301F6_AdjustorThunk },
	{ 0x0600000F, QosJob_RecvQosResponses_mF7D285B242196414A29B2EB92995C41D5EF0E9CC_AdjustorThunk },
	{ 0x06000010, QosJob_EnableReceiveWait_m0411682DA5665E33783F6DE96212DEB4F369FC43_AdjustorThunk },
	{ 0x06000011, QosJob_LookupResult_mF78311CDB65FB597D261547BD872FBBB99D0D43E_AdjustorThunk },
	{ 0x06000013, InternalQosServer__ctor_mDFFD17B79B32982F24BBF7814A2238B3A8DC1AA2_AdjustorThunk },
	{ 0x06000014, InternalQosServer_get_FirstIdx_mE1E26F2B9C43302D4D3A669677A32BB4D2CE0478_AdjustorThunk },
	{ 0x06000015, InternalQosServer_set_FirstIdx_mEE8FDA205B7B8B2DE6E8C6F1D0BFF888C1434A28_AdjustorThunk },
	{ 0x06000016, InternalQosServer_get_RequestIdentifier_m5BB7DCEB91EAD25DBD1733A74B42F4B490CCA2D5_AdjustorThunk },
	{ 0x06000017, InternalQosServer_set_RequestIdentifier_mAA9EF4C5C34AFB4EA335CBF999D2FBB46BD15E1F_AdjustorThunk },
	{ 0x06000018, InternalQosServer_get_Duplicate_mC9F0B30BEC3CEC496735613D59181989F13DEF2B_AdjustorThunk },
	{ 0x06000019, InternalQosServer_get_Address_mAF7047289348E24CA18A4202DA79D49C2E2298E4_AdjustorThunk },
	{ 0x0600001A, NetworkEndPoint_get_Port_m251B69FEFF5FC2CF22A30DB9AA40348F340408CB_AdjustorThunk },
	{ 0x0600001B, NetworkEndPoint_get_Family_mD35537952F0BCF8578F516DC06DC1D3B225F724F_AdjustorThunk },
	{ 0x0600001C, NetworkEndPoint_get_Address_m1EB1D2DAF46FB52253E311B8423DF10FF8F03FBD_AdjustorThunk },
	{ 0x0600001D, NetworkEndPoint_get_IsValid_m56A53E05D4C28A38048155E597009964FBAE2D94_AdjustorThunk },
	{ 0x0600001F, NetworkEndPoint_AddressAsString_mBF7B5153F6570D362AB7672C08CB24369B78D0E3_AdjustorThunk },
	{ 0x06000041, UcgQosServer_ToString_mA7BEF62CE3005CD01054E082587C558D6C031AE8_AdjustorThunk },
	{ 0x0600007A, U3CGetSortedQosResultsAsyncU3Ed__18_MoveNext_m1B7A01EFFF3FC50F91E6DB3759E58031163A07DD_AdjustorThunk },
	{ 0x0600007B, U3CGetSortedQosResultsAsyncU3Ed__18_SetStateMachine_m04924AD392D4E58837A050E195DEDC109F8FC99A_AdjustorThunk },
	{ 0x0600007C, U3CGetSortedInternalQosResultsAsyncU3Ed__19_MoveNext_m06370FBA36A699DE76F8B334ED146AB622752F7B_AdjustorThunk },
	{ 0x0600007D, U3CGetSortedInternalQosResultsAsyncU3Ed__19_SetStateMachine_m9A88088CCD463A6A21969748304B2B8424D860F0_AdjustorThunk },
	{ 0x0600008E, U3CGetSortedRelayQosResultsAsyncU3Ed__21_MoveNext_m9CACDD2FA29D4886978ED6D197FA3A399681CA88_AdjustorThunk },
	{ 0x0600008F, U3CGetSortedRelayQosResultsAsyncU3Ed__21_SetStateMachine_m0F99F468B6974334BD26BF000C603B026A99D160_AdjustorThunk },
	{ 0x06000090, U3CGetSortedMultiplayQosResultsAsyncU3Ed__22_MoveNext_mD98B7EDB6111B94640E9C9CD31AA111A2A6053B7_AdjustorThunk },
	{ 0x06000091, U3CGetSortedMultiplayQosResultsAsyncU3Ed__22_SetStateMachine_m950BE9F26C18809AB44900A3C9641B7FF4102505_AdjustorThunk },
	{ 0x06000092, U3CGetAllServersAsyncU3Ed__23_MoveNext_mB9D12572B7AFCEC927D9B04A856611B039CFF569_AdjustorThunk },
	{ 0x06000093, U3CGetAllServersAsyncU3Ed__23_SetStateMachine_mA4276B7879D3F288E14D8C02C33035F135F004B2_AdjustorThunk },
	{ 0x06000094, U3CGetQosResultsAsyncU3Ed__24_MoveNext_m88979B3256A288A1C468A29E0A89F9557AE4211A_AdjustorThunk },
	{ 0x06000095, U3CGetQosResultsAsyncU3Ed__24_SetStateMachine_mE640816313D24620C6B7880FFA35F7BD45FD6FDE_AdjustorThunk },
	{ 0x06000098, U3CGetSortedInternalServiceQosResultsAsyncU3Ed__27_MoveNext_mC0FEC8054B5551EB6C52B25F683FF598FBCFD4EC_AdjustorThunk },
	{ 0x06000099, U3CGetSortedInternalServiceQosResultsAsyncU3Ed__27_SetStateMachine_mAEBAA7C34E31F0B25202B41E3C3F8F00377FC86B_AdjustorThunk },
	{ 0x060000DE, U3CMakeRequestAsyncU3Ed__1_MoveNext_m7F3210082204B92C2FEDFC53A3D426B378ABED3D_AdjustorThunk },
	{ 0x060000DF, U3CMakeRequestAsyncU3Ed__1_SetStateMachine_mA5C6BFE8BC5074371B6017C675D032140576CD80_AdjustorThunk },
	{ 0x060000E0, U3CMakeRequestAsyncU3Ed__2_MoveNext_mA874CB4672E8B2808E3FB49D85AC0AA5DD02E902_AdjustorThunk },
	{ 0x060000E1, U3CMakeRequestAsyncU3Ed__2_SetStateMachine_mBC5CC9B26956D44B6A2907B19F8B45943455968C_AdjustorThunk },
	{ 0x060000E2, U3CCreateWebRequestAsyncU3Ed__3_MoveNext_m6D46A744D6CC569EE2916F05C8020DFDC9E2DD91_AdjustorThunk },
	{ 0x060000E3, U3CCreateWebRequestAsyncU3Ed__3_SetStateMachine_mE8ECA87DF89565B4E7DECE465797F56709EA712C_AdjustorThunk },
	{ 0x060000E6, U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_MoveNext_mC0207A7FC14105EBC2A7C725112C86AF9D4BD28E_AdjustorThunk },
	{ 0x060000E7, U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_SetStateMachine_m1FA2A05D56AF6BD67EC1E2E713265DDE32EC631A_AdjustorThunk },
	{ 0x060000E8, U3CCreateHttpClientResponseU3Ed__4_MoveNext_m4C58464EB99BB66AD3562116F66BD290D7043C35_AdjustorThunk },
	{ 0x060000E9, U3CCreateHttpClientResponseU3Ed__4_SetStateMachine_mA8B73220D7D80D0C087A4D4139D4F3990D803FBE_AdjustorThunk },
	{ 0x060000EC, U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_mEAAB4A8D3CDC061D871F427D95AE86D46F4FD510_AdjustorThunk },
	{ 0x060000ED, U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m4C9A8DC8D164A6FADC57334513697F84A973FE6F_AdjustorThunk },
	{ 0x060000EE, U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m9B76DED94CBA564ED5CB8665D40C0C46AD2CC3D4_AdjustorThunk },
	{ 0x060000EF, U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m39D250001157B62ED5AF244978C139D6CEFAD3C9_AdjustorThunk },
	{ 0x060001B2, U3CGetAllServersAsyncU3Ed__7_MoveNext_mF6D563EAA5ADCD3AD468BE6E4E53155B24B51117_AdjustorThunk },
	{ 0x060001B3, U3CGetAllServersAsyncU3Ed__7_SetStateMachine_m1DE222CE63529BB3B0DB974ED3A14A425D91792E_AdjustorThunk },
	{ 0x060001CB, QosMeasurementImpl__ctor_mA5AD384D44EDEF7B31FC83C56E78C560DE56BA18_AdjustorThunk },
	{ 0x060001CC, QosMeasurementImpl_get_AverageLatencyMs_m7C21C00D153E77F2F7AE3FE22B4F1F437CE9779D_AdjustorThunk },
	{ 0x060001CD, QosMeasurementImpl_get_PacketLossPercent_m67248A58292C983F1DA0D5DD393C14AA9FB1902E_AdjustorThunk },
	{ 0x060001D7, U3CMeasureQosAsyncU3Ed__3_MoveNext_mDCDD25826B3494B3AE4241AE8A3AD5F8DFB2A29C_AdjustorThunk },
	{ 0x060001D8, U3CMeasureQosAsyncU3Ed__3_SetStateMachine_m1D0DB6B0A212BD39D5B0D6E603F6DD02825170EE_AdjustorThunk },
	{ 0x060001D9, U3CMeasureQosAsyncU3Ed__4_MoveNext_mD588B05CEC27001ADD67D1B2822C60223F175A62_AdjustorThunk },
	{ 0x060001DA, U3CMeasureQosAsyncU3Ed__4_SetStateMachine_m441DBB95C27491AB06BF872810D871A8B5FD14C0_AdjustorThunk },
	{ 0x060001DB, U3CMeasureQosV2AsyncU3Ed__6_MoveNext_m16650CBDB2BC9B65229C044365F621A2871A8616_AdjustorThunk },
	{ 0x060001DC, U3CMeasureQosV2AsyncU3Ed__6_SetStateMachine_m621A5637354BDE7CB90F1462C6AFFD2F8D933345_AdjustorThunk },
	{ 0x060001DD, U3CRunQosJobU3Ed__7_MoveNext_m6D7367F4C787189E87FE14DB22A65E61FB200F8F_AdjustorThunk },
	{ 0x060001DE, U3CRunQosJobU3Ed__7_SetStateMachine_m6CE58755D03AA344F86F67DCFE3C18B6EBB5DAD7_AdjustorThunk },
	{ 0x060001DF, U3CToUcgFormatU3Ed__8_MoveNext_m26ED24613375D59369F99DD4DE40340D539B2178_AdjustorThunk },
	{ 0x060001E0, U3CToUcgFormatU3Ed__8_SetStateMachine_m028D60346CDECA21D321AAA8BA625B2A05C628A7_AdjustorThunk },
	{ 0x060001E1, U3CToUcgFormatU3Ed__9_MoveNext_m003A1E79E46FEDFDD87BF5009F24AE2443960F1E_AdjustorThunk },
	{ 0x060001E2, U3CToUcgFormatU3Ed__9_SetStateMachine_m89E3571F337A54BC07406552056A1576E07EB6A4_AdjustorThunk },
	{ 0x060001E3, U3CToUcgFormatU3Ed__10_MoveNext_m2CB11B7F42D80B586C86AAE8E2B76EE42002920A_AdjustorThunk },
	{ 0x060001E4, U3CToUcgFormatU3Ed__10_SetStateMachine_m4ECD2D5A473727644A24747D4FDB0865841E0C87_AdjustorThunk },
	{ 0x06000223, U3CMakeRequestAsyncU3Ed__1_MoveNext_m79FE0A0172C1A9B02BFFD7376FA295A1E27170B2_AdjustorThunk },
	{ 0x06000224, U3CMakeRequestAsyncU3Ed__1_SetStateMachine_mED0F1C7F72F9240EFE00BFFB80D53FD5FAF61540_AdjustorThunk },
	{ 0x06000225, U3CMakeRequestAsyncU3Ed__2_MoveNext_m66640452B0587066B569B1FC54EF18E56BAB7722_AdjustorThunk },
	{ 0x06000226, U3CMakeRequestAsyncU3Ed__2_SetStateMachine_mFB608307FF1F551572ED42F182A152F2576C633F_AdjustorThunk },
	{ 0x06000227, U3CCreateWebRequestAsyncU3Ed__3_MoveNext_m090F79DD1136CFFB71763CAC5CB40E82F9B085B2_AdjustorThunk },
	{ 0x06000228, U3CCreateWebRequestAsyncU3Ed__3_SetStateMachine_m122010E1D3F9B57707A4EA1F0153C312B9EC6961_AdjustorThunk },
	{ 0x0600022B, U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_MoveNext_mA03BE170E9A572255312982AE52F01375400D8DE_AdjustorThunk },
	{ 0x0600022C, U3CU3CCreateHttpClientResponseU3Eb__0U3Ed_SetStateMachine_mCC240347B97CBF89431AE28D5382DD8CC60B27E6_AdjustorThunk },
	{ 0x0600022D, U3CCreateHttpClientResponseU3Ed__4_MoveNext_m8B66DA73AF928840C73E8466784F1AEE92326DE9_AdjustorThunk },
	{ 0x0600022E, U3CCreateHttpClientResponseU3Ed__4_SetStateMachine_mB0866CDDF7C71C3151A1E93A8B51D001DC46CB57_AdjustorThunk },
	{ 0x06000231, U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_MoveNext_m23D59D187639AD9FB641F234939B5834BA628FBE_AdjustorThunk },
	{ 0x06000232, U3CU3CCreateWebRequestAsyncU3Eb__0U3Ed_SetStateMachine_m1D240B358D2D64F67840B533CE4F00CAAC6C2EE0_AdjustorThunk },
	{ 0x06000233, U3CCreateWebRequestAsyncU3Ed__5_MoveNext_m015F1DB907416B26A58B29B6D045A71BD6A02A43_AdjustorThunk },
	{ 0x06000234, U3CCreateWebRequestAsyncU3Ed__5_SetStateMachine_m7C97C2175057580CDD241D026CC3BE392DD81D93_AdjustorThunk },
	{ 0x06000303, U3CGetServersAsyncU3Ed__7_MoveNext_m7D03C073B6C99374D7B4ED833585D6041991DB07_AdjustorThunk },
	{ 0x06000304, U3CGetServersAsyncU3Ed__7_SetStateMachine_m1A5B420B9D92DA3196FDD52C3069A8DBDCFFD6D8_AdjustorThunk },
	{ 0x06000305, U3CGetServiceServersAsyncU3Ed__8_MoveNext_m1DF537C8115BFD4B2074AD9259AC233224A7AF07_AdjustorThunk },
	{ 0x06000306, U3CGetServiceServersAsyncU3Ed__8_SetStateMachine_m1657475A462E8CB67A32F4351AEA052DB67B218E_AdjustorThunk },
};
static const int32_t s_InvokerIndices[774] = 
{
	12733,
	12653,
	10247,
	0,
	12148,
	188,
	12756,
	12756,
	10377,
	5884,
	2481,
	10556,
	5149,
	1976,
	1976,
	12570,
	2442,
	20725,
	2816,
	12509,
	10029,
	12732,
	10246,
	12407,
	12570,
	12732,
	12509,
	12570,
	12407,
	14550,
	12570,
	19206,
	19206,
	19040,
	19012,
	19397,
	12407,
	12407,
	12407,
	12570,
	10094,
	12407,
	9920,
	12732,
	10246,
	12734,
	10248,
	12509,
	2190,
	12736,
	12756,
	12407,
	12407,
	12407,
	12407,
	12732,
	12734,
	12732,
	12509,
	1077,
	10033,
	3488,
	12373,
	12756,
	12570,
	19416,
	1980,
	17331,
	10094,
	4332,
	12570,
	12510,
	10030,
	10094,
	0,
	0,
	20853,
	10094,
	10094,
	8958,
	8958,
	8958,
	8958,
	12756,
	2880,
	12570,
	10094,
	12570,
	10094,
	20792,
	19853,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	12570,
	10094,
	1024,
	4332,
	4332,
	8958,
	8958,
	8958,
	12570,
	8958,
	10094,
	2880,
	2550,
	8958,
	2880,
	2880,
	308,
	8961,
	12756,
	10094,
	12756,
	10094,
	20853,
	12756,
	8418,
	9143,
	8958,
	8958,
	8254,
	9128,
	7245,
	8960,
	8958,
	8417,
	9142,
	8960,
	8402,
	9140,
	12756,
	10094,
	12756,
	10094,
	12756,
	10094,
	12756,
	10094,
	12756,
	7015,
	12756,
	10094,
	2041,
	12570,
	12509,
	12653,
	12570,
	12756,
	10094,
	1980,
	17331,
	12570,
	12510,
	10030,
	10094,
	0,
	0,
	20853,
	20792,
	20792,
	20776,
	20853,
	294,
	12570,
	12570,
	12509,
	12509,
	12570,
	12570,
	12570,
	12570,
	12570,
	0,
	0,
	5657,
	12570,
	12570,
	12570,
	12570,
	310,
	12570,
	12570,
	12570,
	12570,
	12570,
	12570,
	12570,
	12570,
	12570,
	10094,
	12570,
	12570,
	12570,
	10094,
	12570,
	12570,
	12570,
	10094,
	12756,
	10094,
	5657,
	12756,
	12756,
	860,
	399,
	860,
	860,
	399,
	15903,
	8958,
	12756,
	10094,
	12756,
	10094,
	12756,
	10094,
	12756,
	12570,
	12756,
	10094,
	12756,
	10094,
	12756,
	12570,
	12756,
	10094,
	12756,
	10094,
	491,
	12570,
	12510,
	12407,
	12407,
	12570,
	12570,
	12756,
	10094,
	5657,
	10094,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	19416,
	17331,
	15903,
	15903,
	17331,
	0,
	15903,
	20853,
	0,
	0,
	0,
	10094,
	12570,
	0,
	0,
	19416,
	19416,
	19416,
	19416,
	19416,
	20853,
	12756,
	8958,
	8958,
	8958,
	8916,
	8916,
	8912,
	8912,
	2880,
	1772,
	7223,
	12756,
	2880,
	1772,
	7223,
	12756,
	12756,
	10094,
	5657,
	10094,
	5657,
	2880,
	19416,
	0,
	17331,
	19416,
	17990,
	17331,
	17331,
	0,
	18909,
	19416,
	12756,
	10094,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	12756,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5649,
	8958,
	2550,
	8958,
	12733,
	10247,
	12653,
	10175,
	12653,
	10175,
	12653,
	10175,
	0,
	0,
	7223,
	12756,
	0,
	0,
	0,
	0,
	0,
	10030,
	10030,
	12756,
	7157,
	12756,
	0,
	0,
	2550,
	859,
	4332,
	0,
	8958,
	8958,
	8958,
	8958,
	8958,
	8958,
	2550,
	2550,
	8958,
	12756,
	20853,
	12481,
	12570,
	12570,
	2716,
	8958,
	12570,
	4332,
	0,
	12570,
	10094,
	2880,
	4332,
	12756,
	10094,
	20853,
	20792,
	20792,
	20776,
	20853,
	5649,
	4332,
	1772,
	8958,
	5649,
	8958,
	2550,
	8958,
	5657,
	8958,
	8958,
	8958,
	8958,
	8958,
	8958,
	4332,
	17331,
	17331,
	5244,
	12509,
	12653,
	20853,
	12756,
	4332,
	6922,
	9264,
	6922,
	9264,
	8958,
	10699,
	12756,
	10094,
	12756,
	10094,
	12756,
	10094,
	12756,
	10094,
	12756,
	10094,
	12756,
	10094,
	12756,
	10094,
	0,
	0,
	0,
	0,
	0,
	0,
	294,
	12570,
	12570,
	12509,
	12509,
	12570,
	12570,
	12570,
	12570,
	12570,
	5657,
	12570,
	12570,
	0,
	0,
	2880,
	12570,
	12570,
	12570,
	12570,
	12570,
	10094,
	12570,
	12570,
	12570,
	10094,
	12570,
	12570,
	12570,
	2880,
	12570,
	12570,
	12570,
	12570,
	12570,
	10094,
	12570,
	12570,
	12570,
	10094,
	12570,
	12570,
	12570,
	10094,
	12756,
	10094,
	5657,
	12756,
	12756,
	860,
	399,
	860,
	860,
	399,
	15903,
	8958,
	12756,
	10094,
	12756,
	10094,
	12756,
	10094,
	12756,
	12570,
	12756,
	10094,
	12756,
	10094,
	12756,
	12570,
	12756,
	10094,
	12756,
	10094,
	491,
	12570,
	12510,
	12407,
	12407,
	12570,
	12570,
	12756,
	10094,
	5657,
	10094,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	20853,
	0,
	0,
	0,
	10094,
	12570,
	0,
	0,
	19416,
	19416,
	19416,
	19416,
	19416,
	0,
	0,
	0,
	1024,
	20853,
	12756,
	8958,
	8958,
	8958,
	8916,
	8916,
	8912,
	8912,
	2880,
	1772,
	7223,
	12756,
	2880,
	1772,
	7223,
	12756,
	12756,
	10094,
	5657,
	10094,
	5657,
	2880,
	19416,
	0,
	17331,
	19416,
	17990,
	17331,
	17331,
	0,
	18908,
	19416,
	12756,
	10094,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	12756,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5649,
	8958,
	2550,
	8958,
	12733,
	10247,
	12653,
	10175,
	12653,
	10175,
	12653,
	10175,
	0,
	0,
	7223,
	12756,
	0,
	0,
	0,
	0,
	0,
	10030,
	10030,
	12756,
	7157,
	12756,
	0,
	0,
	2550,
	859,
	4332,
	0,
	8958,
	8958,
	8958,
	8958,
	8958,
	8958,
	2550,
	2550,
	8958,
	12756,
	20853,
	12570,
	12570,
	5657,
	8958,
	12570,
	4332,
	20853,
	12756,
	8958,
	12570,
	12570,
	12570,
	2880,
	8958,
	12570,
	4332,
	20853,
	12756,
	8958,
	8958,
	0,
	0,
	12570,
	10094,
	2880,
	4332,
	4332,
	12756,
	10094,
	12756,
	10094,
};
static const Il2CppTokenRangePair s_rgctxIndices[48] = 
{
	{ 0x02000050, { 13, 10 } },
	{ 0x02000051, { 23, 16 } },
	{ 0x02000055, { 43, 17 } },
	{ 0x02000056, { 62, 2 } },
	{ 0x02000057, { 64, 19 } },
	{ 0x0200005A, { 88, 4 } },
	{ 0x0200005B, { 92, 3 } },
	{ 0x0200009B, { 119, 10 } },
	{ 0x0200009C, { 129, 16 } },
	{ 0x020000A0, { 149, 17 } },
	{ 0x020000A1, { 168, 2 } },
	{ 0x020000A2, { 170, 19 } },
	{ 0x020000A5, { 194, 4 } },
	{ 0x020000A6, { 198, 3 } },
	{ 0x06000108, { 0, 2 } },
	{ 0x0600010B, { 2, 4 } },
	{ 0x06000110, { 6, 1 } },
	{ 0x06000111, { 7, 1 } },
	{ 0x0600012F, { 8, 1 } },
	{ 0x06000135, { 9, 2 } },
	{ 0x0600013A, { 11, 2 } },
	{ 0x06000161, { 39, 2 } },
	{ 0x06000162, { 41, 2 } },
	{ 0x06000174, { 60, 1 } },
	{ 0x06000175, { 61, 1 } },
	{ 0x06000187, { 83, 2 } },
	{ 0x06000188, { 85, 3 } },
	{ 0x06000195, { 95, 1 } },
	{ 0x06000196, { 96, 1 } },
	{ 0x0600019A, { 97, 2 } },
	{ 0x06000249, { 99, 4 } },
	{ 0x0600024E, { 103, 2 } },
	{ 0x0600024F, { 105, 1 } },
	{ 0x06000255, { 106, 4 } },
	{ 0x06000256, { 110, 2 } },
	{ 0x06000257, { 112, 2 } },
	{ 0x06000271, { 114, 1 } },
	{ 0x06000277, { 115, 2 } },
	{ 0x0600027C, { 117, 2 } },
	{ 0x060002A3, { 145, 2 } },
	{ 0x060002A4, { 147, 2 } },
	{ 0x060002B6, { 166, 1 } },
	{ 0x060002B7, { 167, 1 } },
	{ 0x060002C9, { 189, 2 } },
	{ 0x060002CA, { 191, 3 } },
	{ 0x060002D7, { 201, 1 } },
	{ 0x060002D8, { 202, 1 } },
	{ 0x060002DC, { 203, 2 } },
};
extern const uint32_t g_rgctx_T_t96E1C1A892AAD065F71EBAB461ADCFA60616BC9B;
extern const uint32_t g_rgctx_T_t96E1C1A892AAD065F71EBAB461ADCFA60616BC9B;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass1_0_1_t42428D61BA9EA6AD8CD9184E1AE9C9AA95C215D0;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass1_0_1__ctor_mA7B182007A35276CCCD70AC01A9D4DA631FF5798;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass1_0_1_U3CTryParseJsonU3Eb__0_mF677290633D78A32DB13B52E1506725357942D26;
extern const uint32_t g_rgctx_IsolatedJsonConvert_DeserializeObject_TisT_tECF7DD75B889D62E184C03F4213C15769A52CDD2_m67E3AF989DEE421901D193C9AC131E36730E984D;
extern const uint32_t g_rgctx_IsolatedJsonConvert_DeserializeObject_TisT_t030E00263E8D8FD3D9CD593CF799D85411770CD1_m0BC90F2A953FC6E3FB8DA093601F6565535BA5A8;
extern const uint32_t g_rgctx_JsonObject_GetAs_TisT_tDC17C7167073A20720DCB28352B9D9A18F6D2CC1_m8C56F665BC05031978D27F4CA00F24CCC4D8DDE7;
extern const uint32_t g_rgctx_IsolatedJsonConvert_DeserializeObject_TisT_tC10189F524506C00B0EAE0EEA0FB7A7A0A49595B_mEA688B5A023FD49CCE09A7F32906434778437D2D;
extern const uint32_t g_rgctx_T_tBDE49C4933A85D50C1564310215C15CEEF995BB8;
extern const uint32_t g_rgctx_ResponseHandler_TryDeserializeResponse_TisT_tBDE49C4933A85D50C1564310215C15CEEF995BB8_m349B98B47E154ADE3BFE8D593263ED723D68C5B9;
extern const uint32_t g_rgctx_AsyncOpRetry_1_FromCreateAsync_mCC00A7C0D32619BA680C13F142F9C6C068BD8964;
extern const uint32_t g_rgctx_AsyncOpRetry_1_t410F2E96D7FD43D6E9E28013FB5926BA3C90DEA9;
extern const uint32_t g_rgctx_AsyncOpRetry_1_set_CreateOperation_m4FF4669EB9BA5D6FB2A925BEF7498C4D2ADDE022;
extern const uint32_t g_rgctx_AsyncOpRetry_1_Pow2_m5B0F9670F5B3154C081E74CDE9A92B94B6689D9E;
extern const uint32_t g_rgctx_AsyncOpRetry_1_t0934C0CBA828EC90B63A5755FC3E8FE6706043E3;
extern const uint32_t g_rgctx_AsyncOpRetry_1_AddJitter_mA8910BA10B9919ED6A05E690A2F11048E69CAA06;
extern const uint32_t g_rgctx_AsyncOpRetry_1_t0934C0CBA828EC90B63A5755FC3E8FE6706043E3;
extern const uint32_t g_rgctx_AsyncOpRetry_1__ctor_mDEEA2E03D586E9F7ABEB6985CC2767F11F81D105;
extern const uint32_t g_rgctx_AsyncOpRetry_1_set_RetryCondition_mC5905472A7F5DFAE99C8EBFE822C029BC4F7C889;
extern const uint32_t g_rgctx_AsyncOpRetry_1_set_OnComplete_mC92E1852FE067A81CD4458D85299B254B92B670B;
extern const uint32_t g_rgctx_U3CRunU3Ed__35_tB1F005AAAE92818EFA00986D03223E5436AA2BB0;
extern const uint32_t g_rgctx_U3CRunU3Ed__35__ctor_m3F94673AE332247CD849220670FB30184F386DBD;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_CreateOperation_m5F2D24BDABDF690FD8AA653EAE71B8780DEFE6FD;
extern const uint32_t g_rgctx_Func_2_t7FE14E64ABDBF41A5559E8F6DD1D59B812263EC8;
extern const uint32_t g_rgctx_Func_2_Invoke_m992722D7F7E01FADE770E4A71ED0DFDC0CD23887;
extern const uint32_t g_rgctx_T_tAD53B21B924909B24D69FD7C3C7C00E71686FF7F;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_RetryCondition_m1479946376837F99DD6E6A30C781AD3A513DB109;
extern const uint32_t g_rgctx_Func_2_tFF43FC1CE9179FA3E5A457D6F2BBF8072D4A2283;
extern const uint32_t g_rgctx_Func_2_Invoke_m18EAB40067EA8F56A237584D28023596C80165A6;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_MaxDelayTime_m12095FE6530E787DB5BB20EFE9D0E7B8E3C19900;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_DelayScale_m9CE4FE1BA02FE09E34E669B7A371E100AAAD23E9;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_JitterMagnitude_m7D21793212EA1C9C978F6A630CB28FABC23913A3;
extern const uint32_t g_rgctx_AsyncOpRetry_1_CalculateDelay_mC58A58FA87E33839A83A1D37072795F34BA914BA;
extern const uint32_t g_rgctx_AsyncOpRetry_1_tE772DD00F13F8D4DABEE41B9F7B82D725268F449;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_MaxRetries_m49D35571EDEC4EB07F23833F3C16BACE1AECEB6A;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_OnComplete_m047607DABC5CB2C4A67DA67613264BAA9ABE731C;
extern const uint32_t g_rgctx_Action_1_tF50808E4521E2D6CC60B602850CB4F168536F779;
extern const uint32_t g_rgctx_Action_1_Invoke_m7B9C0EA05CA2730D803001FB59D209C61A82D276;
extern const uint32_t g_rgctx_RetryPolicy_1_ForOperation_mCD32910CD971D284419DBC3FF5BEAE9FE6112215;
extern const uint32_t g_rgctx_RetryPolicy_1_tB1081DAB8AE3645C6A421934D4B3024F488F4714;
extern const uint32_t g_rgctx_RetryPolicy_1_ForOperation_m91183641272F41473ED1F31C8C1E12BFF715016D;
extern const uint32_t g_rgctx_RetryPolicy_1_t68B7D65049B94374CA432A65DD898BD2619E52A3;
extern const uint32_t g_rgctx_RetryPolicy_1_set_CreateOperation_m6AD025D35A87C5C36742464B67FFA729AAFCBBA2;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass10_0_t0AFD79FDBBF1F53C927F3B5B48E638A57F54B65C;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass10_0__ctor_m74E3FE0DDFEA89FF0F021ABCCD4A85CBDCFFB22E;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__0_m8CAEE7BD64D005CBF3DF6CBC1CF57164670041A1;
extern const uint32_t g_rgctx_Func_2_tBAA01440DA140F6C54DA4AD324A39E4B2862EC10;
extern const uint32_t g_rgctx_Func_2__ctor_mA2FCFE1176DB67BD48B6327EE432F07799BC0B78;
extern const uint32_t g_rgctx_RetryPolicy_1_Pow2_mD36B679D070D76D54597037278AAF06D7CE5353A;
extern const uint32_t g_rgctx_RetryPolicy_1_t05E260731C692FC27CEF732ABBE85587A8B770B2;
extern const uint32_t g_rgctx_RetryPolicy_1_AddJitter_m1102134090A66EE31E2715D5631FB1A8AF590EDC;
extern const uint32_t g_rgctx_RetryPolicy_1_t05E260731C692FC27CEF732ABBE85587A8B770B2;
extern const uint32_t g_rgctx_RetryPolicy_1__ctor_mE41C8EDE2331431E706209506E0E13C11FA66B55;
extern const uint32_t g_rgctx_RetryPolicy_1__ctor_m0ED94284ADEBD60B7A8D0815CD82671E0D26AE30;
extern const uint32_t g_rgctx_RetryPolicy_1_set_RetryCondition_m4EA72FE28EB1206B72AEDC6CF43A6BD1F46BBF73;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_mE570B6BFD188F9DD0C26759637F1902B79E9C667;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_t8E4B6DE074C87BFB8822979126E0FC0CAB94BB1D;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CRunAsyncU3Ed__23_t176B7E9942DC185EA76C3E09FC5D1FDB44B56F04_m201F4B1C4CE7AB8C547FC1D0806B6CEC3BA4A31F;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m1EBC82D055836CEEBF7D6E52F9806451DD36D77C;
extern const uint32_t g_rgctx_RetryPolicyConfig_HandleException_TisTException_tE23C4054CB977CE5F65CA43384CD86B1B58CE569_m997DE2FBCE4339233EAFDC995F143B82E85D4B41;
extern const uint32_t g_rgctx_RetryPolicyConfig_HandleException_TisTException_tA18951907419689C4881C8FF62FE3AB781478F0A_m4DCA1EF34633B204074167C90B364664E87E57FD;
extern const uint32_t g_rgctx_Func_1_tF00A0211856AD9C16299AD6F361BC8972EE0C549;
extern const uint32_t g_rgctx_Func_1_Invoke_mE6A2686A99E1A790EFDB39CADEA6E3E3E84A0362;
extern const uint32_t g_rgctx_RetryPolicy_1_get_CreateOperation_m054DB8F39C2EE32B872F78F78A4F3F2CC1234746;
extern const uint32_t g_rgctx_Func_2_tD134743777F74ED73429F9B3A1EFE28CC68391F3;
extern const uint32_t g_rgctx_Func_2_Invoke_m728A4DA09976D754C76187C6F54AE34991015697;
extern const uint32_t g_rgctx_Task_1_t2F096CF02ADA2C4336E3C8E65B36FFEE339C9FAD;
extern const uint32_t g_rgctx_Task_1_GetAwaiter_mD4465747AD380B699CD4D2B96C620B20B9B3392A;
extern const uint32_t g_rgctx_TaskAwaiter_1_get_IsCompleted_m4AEC57B5C8D77D4025AA8C9E3F96B49E5EC49285;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1BD0216B77E4732B40D8AADEA6D60305C46021B6_TisU3CRunAsyncU3Ed__23_tD14E0B63FDE9F3BBA32B35928E8776FA5362ACF6_m9FE86D7C055084F8A38E4F2E1B0300BB1EC144A7;
extern const uint32_t g_rgctx_TaskAwaiter_1_GetResult_m369E4D2203E81B2A0CA1A334668008B64F192B1B;
extern const uint32_t g_rgctx_RetryPolicy_1_get_RetryCondition_m09E33E5996612CF7D2FB61F825A76032698826BA;
extern const uint32_t g_rgctx_T_t1767CC4AD39BC82EA1B63AD72D7926100EDE6E79;
extern const uint32_t g_rgctx_Func_2_tD70779D22A4136CE14E4553E41A21ABE2AF1B7BC;
extern const uint32_t g_rgctx_Func_2_Invoke_m6DA36D9E8C77F256640BA1140F848C496AF69A99;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRunAsyncU3Ed__23_tD14E0B63FDE9F3BBA32B35928E8776FA5362ACF6_m8080EAA152A26B42752667371A4067215E26BE18;
extern const uint32_t g_rgctx_RetryPolicy_1_CalculateDelay_m03F1B378E9FAABE0B22CE0377398BC2CF010F29C;
extern const uint32_t g_rgctx_RetryPolicy_1_t56F826901C4F443632B8B26571A22243441421F2;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRunAsyncU3Ed__23_tD14E0B63FDE9F3BBA32B35928E8776FA5362ACF6_m849022CD385C5988FB20F421488D80CBEEE54D08;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_mBCE21F7E7642676C0B79385C20AF861AE3503392;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_mBC5A4BB0210FC62CCA24C78426D348AC904BCE4B;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m0FA98405B02CFD536CBB570A084ED633EB9572B0;
extern const uint32_t g_rgctx_U3CU3Ec__17_1_t7EA7DA0B9FCA945BC7CBDE2FD00F5230840549D2;
extern const uint32_t g_rgctx_U3CU3Ec__17_1_U3CHandleExceptionU3Eb__17_0_m8BB6A341F0A92E6299AE27AABEE02FFF99440679;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass18_0_1_t372EC462BE35FEE5F9E3422658CDDF85DEB0C5D8;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass18_0_1__ctor_m8A1053DC4FD21506AB862E345B9D5F3E1E5F37E5;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass18_0_1_U3CHandleExceptionU3Eb__0_mC5898E441B80B7603D0A055B3E16335D02BC39E0;
extern const uint32_t g_rgctx_U3CU3Ec__17_1_tC98813C2BAF6FD70E1A7E3FD6321D548F8CE39C8;
extern const uint32_t g_rgctx_U3CU3Ec__17_1__ctor_m22FCAD4CC32169318F109C2126B0E6135119E48D;
extern const uint32_t g_rgctx_U3CU3Ec__17_1_tC98813C2BAF6FD70E1A7E3FD6321D548F8CE39C8;
extern const uint32_t g_rgctx_TException_t7DD1A08E28280E418B2FD450D68D8F2B3E5F2AFB;
extern const uint32_t g_rgctx_TException_tEEB7DD124DEF1BE1003FAE9DC473876CA86D858F;
extern const uint32_t g_rgctx_Func_2_tFBCF5280EB974F2C6C9FE8C750B90F276CCBE51D;
extern const uint32_t g_rgctx_Func_2_Invoke_mC5DDC9EB3DE7E1451CEC9452CBD4CE38BE7C3630;
extern const uint32_t g_rgctx_JsonSerialization_SerializeToString_TisT_tE2CF133F8517D71E6AEBEC033BCB61F519CEC2A1_m56FB33615836A5A711B0676BCB112AE81ADE58B8;
extern const uint32_t g_rgctx_T_tEE41E96306109468098368A82C47A12CF5EB3481;
extern const uint32_t g_rgctx_T_tE6976F9C11512BD74BF23ED247C3A81B65445AA3;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tE6976F9C11512BD74BF23ED247C3A81B65445AA3_Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass1_0_1_t9C3D7CF265E4D32768358D804C471BD05A7B9174;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass1_0_1__ctor_m62C9F224D3731C5CCFBA3BB09F5959A6082F1DC3;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass1_0_1_U3CTryParseJsonU3Eb__0_m0A5F8C59FD622DE58A5790A705734B2EB37E81EF;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisT_t2CD5BBB62C33AEF0381695B03F5579242379C151_m5707B7864603934617A9D6782510E4E5F8EC26D1;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisT_t34F4909B0C70CAB45BBAD9A005491CC81D7ABB5B_mA21206933B4ADE83618C853C00E8A9A18862A67A;
extern const uint32_t g_rgctx_JsonObject_ValidateObject_TisT_t34F4909B0C70CAB45BBAD9A005491CC81D7ABB5B_mABAD012F5774B6000FA907F7DA1698A804FC35D7;
extern const uint32_t g_rgctx_JsonObject_GetAs_TisT_tDBAA77595C90E3E016165BFD29EDE5F4BAAE99D6_mDB02F1881092633884DC18E73542F3E5757D4BFF;
extern const uint32_t g_rgctx_T_t18A46986166795516EC4D65096A82CCA11648C30;
extern const uint32_t g_rgctx_T_t18A46986166795516EC4D65096A82CCA11648C30;
extern const uint32_t g_rgctx_JsonObject_ValidateFieldInfos_TisT_t18A46986166795516EC4D65096A82CCA11648C30_m4669DADA48B871D36C1733477D42145C0A5C2E55;
extern const uint32_t g_rgctx_JsonObject_ValidatePropertyInfos_TisT_t18A46986166795516EC4D65096A82CCA11648C30_m6C8383EB31E2C190AAAB7A401E914D1B110DB5D6;
extern const uint32_t g_rgctx_T_t8CE7E52603B0D1D0B0FE92AF34512F1621B07C4C;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t8CE7E52603B0D1D0B0FE92AF34512F1621B07C4C_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3;
extern const uint32_t g_rgctx_T_tB5CDCD53C784D737481740DC50694E087A5AC11C;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tB5CDCD53C784D737481740DC50694E087A5AC11C_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisT_tEB22E3797E54A5241C9AF40C6090FAD03E800423_m23BBCB5D6DFD3E5C7BAF82C5A191B63C861FA86B;
extern const uint32_t g_rgctx_T_t5009504B50981E281F7AFC4A0CC28DDBEAA15681;
extern const uint32_t g_rgctx_ResponseHandler_TryDeserializeResponse_TisT_t5009504B50981E281F7AFC4A0CC28DDBEAA15681_m0F482CB6404DB9DD00DCA117F0110C863DE2B8DA;
extern const uint32_t g_rgctx_AsyncOpRetry_1_FromCreateAsync_mB852BE70F8E958C2419F1DCCEE5816D94C8CE646;
extern const uint32_t g_rgctx_AsyncOpRetry_1_t93B6B25B1656DD124CF47AF15DFF9121894F234B;
extern const uint32_t g_rgctx_AsyncOpRetry_1_set_CreateOperation_mB38A8F3C184EB5AFAC80A153C3744ECAD3FE30A3;
extern const uint32_t g_rgctx_AsyncOpRetry_1_Pow2_m469FCB4C700D32B34187BFF6B79E793218B1B4AB;
extern const uint32_t g_rgctx_AsyncOpRetry_1_tBC0C2C320B3FC29BB2EE3374CD741452F419B13C;
extern const uint32_t g_rgctx_AsyncOpRetry_1_AddJitter_mDC1A15A0EEBFFC007BA756AC931623C8813ADB88;
extern const uint32_t g_rgctx_AsyncOpRetry_1_tBC0C2C320B3FC29BB2EE3374CD741452F419B13C;
extern const uint32_t g_rgctx_AsyncOpRetry_1__ctor_m2E16917F1E4F28780BB37EBD757EC417D17A6986;
extern const uint32_t g_rgctx_AsyncOpRetry_1_set_RetryCondition_m106B8703A36EB15BBF995A87F153A066A748FEBF;
extern const uint32_t g_rgctx_AsyncOpRetry_1_set_OnComplete_m3F452CBB3B679A382F3808E4D0E476F0BDE4FCAA;
extern const uint32_t g_rgctx_U3CRunU3Ed__35_t3F9A85911862C2864171B164DEAEE8BF06129C0D;
extern const uint32_t g_rgctx_U3CRunU3Ed__35__ctor_m3D6D9A580D59EB0DF0A6DD61E9AA11867F6AD47F;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_CreateOperation_m1DB7AB53FC1F83D18AAB70DF4995E7BD3CCC2160;
extern const uint32_t g_rgctx_Func_2_tD42BD308AB1626F20A73DA7710E4D2CE896EB5F0;
extern const uint32_t g_rgctx_Func_2_Invoke_m4744A820060FD436A59492D15A2916DCC6D50D95;
extern const uint32_t g_rgctx_T_t7CD00E3D6EFACC602D91CF86A4956CF28122895D;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_RetryCondition_mF7362A0DB0EA6AD6A78213AC3AE4EAD409D8F3B9;
extern const uint32_t g_rgctx_Func_2_t3EFDF42DEFDED077CF02033479D6D304B04CC791;
extern const uint32_t g_rgctx_Func_2_Invoke_mE50FFE72C5117015C702C128A1E25A76481DDD3F;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_MaxDelayTime_m2B02E848FEDCD0A73A86B9BD5686390FFDE2F61D;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_DelayScale_m872809ED2D03FF2CC018916C8A89521E9853EB55;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_JitterMagnitude_mF26B8A834A78A3E8E1784D8B51D9D641A8A8122B;
extern const uint32_t g_rgctx_AsyncOpRetry_1_CalculateDelay_m7F351362B84961EFEE02A3A5B8F8DBA8BA6D831F;
extern const uint32_t g_rgctx_AsyncOpRetry_1_t00AFD30B1F81D3693B8792ADF7668B97421C7D32;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_MaxRetries_mE73CCE934B24E7EB4F9F6D6FDCA74E19BB3B8755;
extern const uint32_t g_rgctx_AsyncOpRetry_1_get_OnComplete_mBBF6C858DA82845448A992BFD9BF1EDCD64240E1;
extern const uint32_t g_rgctx_Action_1_t9A359FDFC54491E7524793CF5CF2A52250E80230;
extern const uint32_t g_rgctx_Action_1_Invoke_m6B57666E1B8AEE45B157F585E38C15CE91634654;
extern const uint32_t g_rgctx_RetryPolicy_1_ForOperation_m5A9946BF648ED6CF6D479D163DD03F5030429B72;
extern const uint32_t g_rgctx_RetryPolicy_1_tE3AFE88B6487EF129B2A6A300A003CBCC4A6C360;
extern const uint32_t g_rgctx_RetryPolicy_1_ForOperation_m0BCEC075D828BDBDF08EE12261F9146C44E812DD;
extern const uint32_t g_rgctx_RetryPolicy_1_t80AA3287243A9BD9FD6B9CB5C188CA8FB3DB3ADB;
extern const uint32_t g_rgctx_RetryPolicy_1_set_CreateOperation_mC35E698C95A88FFB992EB22BED8BF5D6317D5D84;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass10_0_t32A105A5F5D015835720A6FC402246F508534039;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass10_0__ctor_m3976D221DD7D13A1FC345B557C9683731570A77C;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__0_m63F847417A3E2ABC8C7B69C1257176CDE5660860;
extern const uint32_t g_rgctx_Func_2_tA79BDE17F26DC04E727D28A2D1A550E06DED2000;
extern const uint32_t g_rgctx_Func_2__ctor_mB370D8F8E0ADF62E4713358A38211F2742581CB1;
extern const uint32_t g_rgctx_RetryPolicy_1_Pow2_m8D3D03B0ECF36E8E34B45A4DB4BA47B92256494E;
extern const uint32_t g_rgctx_RetryPolicy_1_tFE22AC1843C55E9A6AB1AB953E58560555C69E1A;
extern const uint32_t g_rgctx_RetryPolicy_1_AddJitter_m1BD1845D459F1431622E922EA25A688BED53E15A;
extern const uint32_t g_rgctx_RetryPolicy_1_tFE22AC1843C55E9A6AB1AB953E58560555C69E1A;
extern const uint32_t g_rgctx_RetryPolicy_1__ctor_m70B6FE10CB375A31742262FDC33DF36AB093698D;
extern const uint32_t g_rgctx_RetryPolicy_1__ctor_mEFC555918320A0A36859971E0203C8CAB4B6B76B;
extern const uint32_t g_rgctx_RetryPolicy_1_set_RetryCondition_mA4B2C2CBDEC245A400BD5263D61138981720AB80;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_m99BD141C3867631654447E0FE0C214AD4A22E0DC;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_t35D1CBF1A595F4759555EF41DDF33B9941AC7B38;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CRunAsyncU3Ed__23_t9E8ADC16D1620349C26EF4264D8C8ED14CA49B16_m07A28D2DDC6D29FE0121C217E6E6882163FB459D;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_mF14ACBE45ABDC646647AE3FEC96698D58294EBA2;
extern const uint32_t g_rgctx_RetryPolicyConfig_HandleException_TisTException_t1BDFE8BB17F707AB74CF1A16BEE165E20056F85B_mD7450E1B5F79B827396DA28ECFC94EC686D27352;
extern const uint32_t g_rgctx_RetryPolicyConfig_HandleException_TisTException_t143ABB3C8B8CDE81B8D9DDED74568D7D7637F5FB_m70F6845E3F0237381C284C48ACE3CB0D890185D8;
extern const uint32_t g_rgctx_Func_1_tDB40D7561FB78B9497B9306B666AAB55535C40D7;
extern const uint32_t g_rgctx_Func_1_Invoke_m0F72FF874B5DB2F2F885EDC06979F197C007E7A0;
extern const uint32_t g_rgctx_RetryPolicy_1_get_CreateOperation_mA533A5F00E87B6801ED74828565FF8867043AB51;
extern const uint32_t g_rgctx_Func_2_t862E6D155C9CE45DF4113616CFD38B5F27FBF9BD;
extern const uint32_t g_rgctx_Func_2_Invoke_m46D4E87B4E3FE715F309D53F06697D904EA74E95;
extern const uint32_t g_rgctx_Task_1_tBA91A15C3E9F0784CE4C33CF2FF7EF235DA9DC24;
extern const uint32_t g_rgctx_Task_1_GetAwaiter_mA9927480AC2F8E1FEC54F167E1CB037167B599A1;
extern const uint32_t g_rgctx_TaskAwaiter_1_get_IsCompleted_m2C6FE16F0DD212A1DC03D86CFD40CE2D71537307;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD45C24F3E66DDBA46D6809C5EEC4A427312654D5_TisU3CRunAsyncU3Ed__23_t7F1EC79BA67B0B00EF56CA2A09A374B1A2A97984_m200EF58BCF04ABB4AE358FBA555C88405DED2203;
extern const uint32_t g_rgctx_TaskAwaiter_1_GetResult_m4251F63B025B8E0F22957AB3685FF282E2FF62BC;
extern const uint32_t g_rgctx_RetryPolicy_1_get_RetryCondition_m035B19334C46AEDEC8BCD9478D9BA8E9C8DB475F;
extern const uint32_t g_rgctx_T_t8E83A7DAB1BEC013CBB20D5E1313EC1432B1F2D5;
extern const uint32_t g_rgctx_Func_2_tB1C5CD766202E5F44B2CA4C64C55304E2B752BDF;
extern const uint32_t g_rgctx_Func_2_Invoke_m318F2B235D0AD11BDCB09CBD775E01C52892810B;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRunAsyncU3Ed__23_t7F1EC79BA67B0B00EF56CA2A09A374B1A2A97984_mBF7D34B90BF55DFC52205674B435FA6327A030A8;
extern const uint32_t g_rgctx_RetryPolicy_1_CalculateDelay_m5326AF42D5614411A47D34EB6E9E2D9FA3007558;
extern const uint32_t g_rgctx_RetryPolicy_1_tE7D82C6A460151DD3D6A4FCBABAD50C6BC3A4507;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRunAsyncU3Ed__23_t7F1EC79BA67B0B00EF56CA2A09A374B1A2A97984_m0BB52F60D3E68C7D2A3E24FCB0211552105421CE;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_mDBCFD28FC90A33D823AF815A3362FAF05A3521EF;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m415164DDFBD545E4E1D0A5728B7AB34A89E35AB1;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_mEECF4B4302CA7E23FB2F529BD40A19373A34539A;
extern const uint32_t g_rgctx_U3CU3Ec__17_1_t8C9F0EEAD37FABFDD706EE6E56228D95E3889BF4;
extern const uint32_t g_rgctx_U3CU3Ec__17_1_U3CHandleExceptionU3Eb__17_0_m30C57A97C4A5CEEF321AF28204CC0AA87CFED87B;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass18_0_1_t109CE2D5DBA15728A10BB940B1D6E5E50C84788B;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass18_0_1__ctor_m2E2D807DCA27C014FCF0FE66CC1FB8C63648A7A3;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass18_0_1_U3CHandleExceptionU3Eb__0_m4138683D5D79B5375F4B9F4C71E461CF833DD2BB;
extern const uint32_t g_rgctx_U3CU3Ec__17_1_tF924306415985A8EA132D0061C92901518707AAA;
extern const uint32_t g_rgctx_U3CU3Ec__17_1__ctor_m8DE37D59C8DE32E3541BE30CEC5AA0B0E20EDFC9;
extern const uint32_t g_rgctx_U3CU3Ec__17_1_tF924306415985A8EA132D0061C92901518707AAA;
extern const uint32_t g_rgctx_TException_t8403B37DF3FEB921EBC3D1CF8E41D8B28E6E495A;
extern const uint32_t g_rgctx_TException_tDAADAB7465EFE37F2279995A7C54F2C3DD090CC6;
extern const uint32_t g_rgctx_Func_2_t747DBBC09FAF237FC00E25866A4ED6BE0D75CA15;
extern const uint32_t g_rgctx_Func_2_Invoke_m09E506B69723EFD98ECC06CEF090D9C81C61F888;
extern const uint32_t g_rgctx_JsonSerialization_SerializeToString_TisT_t9D722A8BBE05F883476B46F8EFA7C4C20DE38EB9_m383CF030A0FB926B44B9D40A142B8B0E54FBF5E4;
extern const uint32_t g_rgctx_T_tDF00C05016CE4301212A0EA91586FF0C1EC1753E;
extern const uint32_t g_rgctx_T_tAB4A1F23625F3F67F8AAD51AE35D1984C1C31480;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tAB4A1F23625F3F67F8AAD51AE35D1984C1C31480_Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F;
static const Il2CppRGCTXDefinition s_rgctxValues[205] = 
{
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t96E1C1A892AAD065F71EBAB461ADCFA60616BC9B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t96E1C1A892AAD065F71EBAB461ADCFA60616BC9B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass1_0_1_t42428D61BA9EA6AD8CD9184E1AE9C9AA95C215D0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass1_0_1__ctor_mA7B182007A35276CCCD70AC01A9D4DA631FF5798 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass1_0_1_U3CTryParseJsonU3Eb__0_mF677290633D78A32DB13B52E1506725357942D26 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IsolatedJsonConvert_DeserializeObject_TisT_tECF7DD75B889D62E184C03F4213C15769A52CDD2_m67E3AF989DEE421901D193C9AC131E36730E984D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IsolatedJsonConvert_DeserializeObject_TisT_t030E00263E8D8FD3D9CD593CF799D85411770CD1_m0BC90F2A953FC6E3FB8DA093601F6565535BA5A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonObject_GetAs_TisT_tDC17C7167073A20720DCB28352B9D9A18F6D2CC1_m8C56F665BC05031978D27F4CA00F24CCC4D8DDE7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IsolatedJsonConvert_DeserializeObject_TisT_tC10189F524506C00B0EAE0EEA0FB7A7A0A49595B_mEA688B5A023FD49CCE09A7F32906434778437D2D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tBDE49C4933A85D50C1564310215C15CEEF995BB8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ResponseHandler_TryDeserializeResponse_TisT_tBDE49C4933A85D50C1564310215C15CEEF995BB8_m349B98B47E154ADE3BFE8D593263ED723D68C5B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_FromCreateAsync_mCC00A7C0D32619BA680C13F142F9C6C068BD8964 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOpRetry_1_t410F2E96D7FD43D6E9E28013FB5926BA3C90DEA9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_set_CreateOperation_m4FF4669EB9BA5D6FB2A925BEF7498C4D2ADDE022 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_Pow2_m5B0F9670F5B3154C081E74CDE9A92B94B6689D9E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOpRetry_1_t0934C0CBA828EC90B63A5755FC3E8FE6706043E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_AddJitter_mA8910BA10B9919ED6A05E690A2F11048E69CAA06 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOpRetry_1_t0934C0CBA828EC90B63A5755FC3E8FE6706043E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1__ctor_mDEEA2E03D586E9F7ABEB6985CC2767F11F81D105 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_set_RetryCondition_mC5905472A7F5DFAE99C8EBFE822C029BC4F7C889 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_set_OnComplete_mC92E1852FE067A81CD4458D85299B254B92B670B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CRunU3Ed__35_tB1F005AAAE92818EFA00986D03223E5436AA2BB0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CRunU3Ed__35__ctor_m3F94673AE332247CD849220670FB30184F386DBD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_CreateOperation_m5F2D24BDABDF690FD8AA653EAE71B8780DEFE6FD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t7FE14E64ABDBF41A5559E8F6DD1D59B812263EC8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m992722D7F7E01FADE770E4A71ED0DFDC0CD23887 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tAD53B21B924909B24D69FD7C3C7C00E71686FF7F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_RetryCondition_m1479946376837F99DD6E6A30C781AD3A513DB109 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tFF43FC1CE9179FA3E5A457D6F2BBF8072D4A2283 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m18EAB40067EA8F56A237584D28023596C80165A6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_MaxDelayTime_m12095FE6530E787DB5BB20EFE9D0E7B8E3C19900 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_DelayScale_m9CE4FE1BA02FE09E34E669B7A371E100AAAD23E9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_JitterMagnitude_m7D21793212EA1C9C978F6A630CB28FABC23913A3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_CalculateDelay_mC58A58FA87E33839A83A1D37072795F34BA914BA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOpRetry_1_tE772DD00F13F8D4DABEE41B9F7B82D725268F449 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_MaxRetries_m49D35571EDEC4EB07F23833F3C16BACE1AECEB6A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_OnComplete_m047607DABC5CB2C4A67DA67613264BAA9ABE731C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_tF50808E4521E2D6CC60B602850CB4F168536F779 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_m7B9C0EA05CA2730D803001FB59D209C61A82D276 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_ForOperation_mCD32910CD971D284419DBC3FF5BEAE9FE6112215 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RetryPolicy_1_tB1081DAB8AE3645C6A421934D4B3024F488F4714 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_ForOperation_m91183641272F41473ED1F31C8C1E12BFF715016D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RetryPolicy_1_t68B7D65049B94374CA432A65DD898BD2619E52A3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_set_CreateOperation_m6AD025D35A87C5C36742464B67FFA729AAFCBBA2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass10_0_t0AFD79FDBBF1F53C927F3B5B48E638A57F54B65C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass10_0__ctor_m74E3FE0DDFEA89FF0F021ABCCD4A85CBDCFFB22E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__0_m8CAEE7BD64D005CBF3DF6CBC1CF57164670041A1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tBAA01440DA140F6C54DA4AD324A39E4B2862EC10 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_mA2FCFE1176DB67BD48B6327EE432F07799BC0B78 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_Pow2_mD36B679D070D76D54597037278AAF06D7CE5353A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RetryPolicy_1_t05E260731C692FC27CEF732ABBE85587A8B770B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_AddJitter_m1102134090A66EE31E2715D5631FB1A8AF590EDC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RetryPolicy_1_t05E260731C692FC27CEF732ABBE85587A8B770B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1__ctor_mE41C8EDE2331431E706209506E0E13C11FA66B55 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1__ctor_m0ED94284ADEBD60B7A8D0815CD82671E0D26AE30 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_set_RetryCondition_m4EA72FE28EB1206B72AEDC6CF43A6BD1F46BBF73 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_mE570B6BFD188F9DD0C26759637F1902B79E9C667 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_t8E4B6DE074C87BFB8822979126E0FC0CAB94BB1D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CRunAsyncU3Ed__23_t176B7E9942DC185EA76C3E09FC5D1FDB44B56F04_m201F4B1C4CE7AB8C547FC1D0806B6CEC3BA4A31F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m1EBC82D055836CEEBF7D6E52F9806451DD36D77C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicyConfig_HandleException_TisTException_tE23C4054CB977CE5F65CA43384CD86B1B58CE569_m997DE2FBCE4339233EAFDC995F143B82E85D4B41 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicyConfig_HandleException_TisTException_tA18951907419689C4881C8FF62FE3AB781478F0A_m4DCA1EF34633B204074167C90B364664E87E57FD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_tF00A0211856AD9C16299AD6F361BC8972EE0C549 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_mE6A2686A99E1A790EFDB39CADEA6E3E3E84A0362 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_get_CreateOperation_m054DB8F39C2EE32B872F78F78A4F3F2CC1234746 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tD134743777F74ED73429F9B3A1EFE28CC68391F3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m728A4DA09976D754C76187C6F54AE34991015697 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_t2F096CF02ADA2C4336E3C8E65B36FFEE339C9FAD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_GetAwaiter_mD4465747AD380B699CD4D2B96C620B20B9B3392A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_get_IsCompleted_m4AEC57B5C8D77D4025AA8C9E3F96B49E5EC49285 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1BD0216B77E4732B40D8AADEA6D60305C46021B6_TisU3CRunAsyncU3Ed__23_tD14E0B63FDE9F3BBA32B35928E8776FA5362ACF6_m9FE86D7C055084F8A38E4F2E1B0300BB1EC144A7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_GetResult_m369E4D2203E81B2A0CA1A334668008B64F192B1B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_get_RetryCondition_m09E33E5996612CF7D2FB61F825A76032698826BA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1767CC4AD39BC82EA1B63AD72D7926100EDE6E79 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tD70779D22A4136CE14E4553E41A21ABE2AF1B7BC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m6DA36D9E8C77F256640BA1140F848C496AF69A99 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRunAsyncU3Ed__23_tD14E0B63FDE9F3BBA32B35928E8776FA5362ACF6_m8080EAA152A26B42752667371A4067215E26BE18 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_CalculateDelay_m03F1B378E9FAABE0B22CE0377398BC2CF010F29C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RetryPolicy_1_t56F826901C4F443632B8B26571A22243441421F2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRunAsyncU3Ed__23_tD14E0B63FDE9F3BBA32B35928E8776FA5362ACF6_m849022CD385C5988FB20F421488D80CBEEE54D08 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_mBCE21F7E7642676C0B79385C20AF861AE3503392 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_mBC5A4BB0210FC62CCA24C78426D348AC904BCE4B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m0FA98405B02CFD536CBB570A084ED633EB9572B0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__17_1_t7EA7DA0B9FCA945BC7CBDE2FD00F5230840549D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__17_1_U3CHandleExceptionU3Eb__17_0_m8BB6A341F0A92E6299AE27AABEE02FFF99440679 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass18_0_1_t372EC462BE35FEE5F9E3422658CDDF85DEB0C5D8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass18_0_1__ctor_m8A1053DC4FD21506AB862E345B9D5F3E1E5F37E5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass18_0_1_U3CHandleExceptionU3Eb__0_mC5898E441B80B7603D0A055B3E16335D02BC39E0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__17_1_tC98813C2BAF6FD70E1A7E3FD6321D548F8CE39C8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__17_1__ctor_m22FCAD4CC32169318F109C2126B0E6135119E48D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__17_1_tC98813C2BAF6FD70E1A7E3FD6321D548F8CE39C8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TException_t7DD1A08E28280E418B2FD450D68D8F2B3E5F2AFB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TException_tEEB7DD124DEF1BE1003FAE9DC473876CA86D858F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tFBCF5280EB974F2C6C9FE8C750B90F276CCBE51D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mC5DDC9EB3DE7E1451CEC9452CBD4CE38BE7C3630 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonSerialization_SerializeToString_TisT_tE2CF133F8517D71E6AEBEC033BCB61F519CEC2A1_m56FB33615836A5A711B0676BCB112AE81ADE58B8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tEE41E96306109468098368A82C47A12CF5EB3481 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tE6976F9C11512BD74BF23ED247C3A81B65445AA3 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tE6976F9C11512BD74BF23ED247C3A81B65445AA3_Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass1_0_1_t9C3D7CF265E4D32768358D804C471BD05A7B9174 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass1_0_1__ctor_m62C9F224D3731C5CCFBA3BB09F5959A6082F1DC3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass1_0_1_U3CTryParseJsonU3Eb__0_m0A5F8C59FD622DE58A5790A705734B2EB37E81EF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisT_t2CD5BBB62C33AEF0381695B03F5579242379C151_m5707B7864603934617A9D6782510E4E5F8EC26D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisT_t34F4909B0C70CAB45BBAD9A005491CC81D7ABB5B_mA21206933B4ADE83618C853C00E8A9A18862A67A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonObject_ValidateObject_TisT_t34F4909B0C70CAB45BBAD9A005491CC81D7ABB5B_mABAD012F5774B6000FA907F7DA1698A804FC35D7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonObject_GetAs_TisT_tDBAA77595C90E3E016165BFD29EDE5F4BAAE99D6_mDB02F1881092633884DC18E73542F3E5757D4BFF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t18A46986166795516EC4D65096A82CCA11648C30 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t18A46986166795516EC4D65096A82CCA11648C30 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonObject_ValidateFieldInfos_TisT_t18A46986166795516EC4D65096A82CCA11648C30_m4669DADA48B871D36C1733477D42145C0A5C2E55 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonObject_ValidatePropertyInfos_TisT_t18A46986166795516EC4D65096A82CCA11648C30_m6C8383EB31E2C190AAAB7A401E914D1B110DB5D6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8CE7E52603B0D1D0B0FE92AF34512F1621B07C4C },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t8CE7E52603B0D1D0B0FE92AF34512F1621B07C4C_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tB5CDCD53C784D737481740DC50694E087A5AC11C },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tB5CDCD53C784D737481740DC50694E087A5AC11C_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisT_tEB22E3797E54A5241C9AF40C6090FAD03E800423_m23BBCB5D6DFD3E5C7BAF82C5A191B63C861FA86B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t5009504B50981E281F7AFC4A0CC28DDBEAA15681 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ResponseHandler_TryDeserializeResponse_TisT_t5009504B50981E281F7AFC4A0CC28DDBEAA15681_m0F482CB6404DB9DD00DCA117F0110C863DE2B8DA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_FromCreateAsync_mB852BE70F8E958C2419F1DCCEE5816D94C8CE646 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOpRetry_1_t93B6B25B1656DD124CF47AF15DFF9121894F234B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_set_CreateOperation_mB38A8F3C184EB5AFAC80A153C3744ECAD3FE30A3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_Pow2_m469FCB4C700D32B34187BFF6B79E793218B1B4AB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOpRetry_1_tBC0C2C320B3FC29BB2EE3374CD741452F419B13C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_AddJitter_mDC1A15A0EEBFFC007BA756AC931623C8813ADB88 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOpRetry_1_tBC0C2C320B3FC29BB2EE3374CD741452F419B13C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1__ctor_m2E16917F1E4F28780BB37EBD757EC417D17A6986 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_set_RetryCondition_m106B8703A36EB15BBF995A87F153A066A748FEBF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_set_OnComplete_m3F452CBB3B679A382F3808E4D0E476F0BDE4FCAA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CRunU3Ed__35_t3F9A85911862C2864171B164DEAEE8BF06129C0D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CRunU3Ed__35__ctor_m3D6D9A580D59EB0DF0A6DD61E9AA11867F6AD47F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_CreateOperation_m1DB7AB53FC1F83D18AAB70DF4995E7BD3CCC2160 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tD42BD308AB1626F20A73DA7710E4D2CE896EB5F0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m4744A820060FD436A59492D15A2916DCC6D50D95 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t7CD00E3D6EFACC602D91CF86A4956CF28122895D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_RetryCondition_mF7362A0DB0EA6AD6A78213AC3AE4EAD409D8F3B9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t3EFDF42DEFDED077CF02033479D6D304B04CC791 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mE50FFE72C5117015C702C128A1E25A76481DDD3F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_MaxDelayTime_m2B02E848FEDCD0A73A86B9BD5686390FFDE2F61D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_DelayScale_m872809ED2D03FF2CC018916C8A89521E9853EB55 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_JitterMagnitude_mF26B8A834A78A3E8E1784D8B51D9D641A8A8122B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_CalculateDelay_m7F351362B84961EFEE02A3A5B8F8DBA8BA6D831F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOpRetry_1_t00AFD30B1F81D3693B8792ADF7668B97421C7D32 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_MaxRetries_mE73CCE934B24E7EB4F9F6D6FDCA74E19BB3B8755 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOpRetry_1_get_OnComplete_mBBF6C858DA82845448A992BFD9BF1EDCD64240E1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t9A359FDFC54491E7524793CF5CF2A52250E80230 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_m6B57666E1B8AEE45B157F585E38C15CE91634654 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_ForOperation_m5A9946BF648ED6CF6D479D163DD03F5030429B72 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RetryPolicy_1_tE3AFE88B6487EF129B2A6A300A003CBCC4A6C360 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_ForOperation_m0BCEC075D828BDBDF08EE12261F9146C44E812DD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RetryPolicy_1_t80AA3287243A9BD9FD6B9CB5C188CA8FB3DB3ADB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_set_CreateOperation_mC35E698C95A88FFB992EB22BED8BF5D6317D5D84 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass10_0_t32A105A5F5D015835720A6FC402246F508534039 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass10_0__ctor_m3976D221DD7D13A1FC345B557C9683731570A77C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__0_m63F847417A3E2ABC8C7B69C1257176CDE5660860 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tA79BDE17F26DC04E727D28A2D1A550E06DED2000 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_mB370D8F8E0ADF62E4713358A38211F2742581CB1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_Pow2_m8D3D03B0ECF36E8E34B45A4DB4BA47B92256494E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RetryPolicy_1_tFE22AC1843C55E9A6AB1AB953E58560555C69E1A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_AddJitter_m1BD1845D459F1431622E922EA25A688BED53E15A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RetryPolicy_1_tFE22AC1843C55E9A6AB1AB953E58560555C69E1A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1__ctor_m70B6FE10CB375A31742262FDC33DF36AB093698D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1__ctor_mEFC555918320A0A36859971E0203C8CAB4B6B76B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_set_RetryCondition_mA4B2C2CBDEC245A400BD5263D61138981720AB80 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_m99BD141C3867631654447E0FE0C214AD4A22E0DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_t35D1CBF1A595F4759555EF41DDF33B9941AC7B38 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CRunAsyncU3Ed__23_t9E8ADC16D1620349C26EF4264D8C8ED14CA49B16_m07A28D2DDC6D29FE0121C217E6E6882163FB459D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_mF14ACBE45ABDC646647AE3FEC96698D58294EBA2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicyConfig_HandleException_TisTException_t1BDFE8BB17F707AB74CF1A16BEE165E20056F85B_mD7450E1B5F79B827396DA28ECFC94EC686D27352 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicyConfig_HandleException_TisTException_t143ABB3C8B8CDE81B8D9DDED74568D7D7637F5FB_m70F6845E3F0237381C284C48ACE3CB0D890185D8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_tDB40D7561FB78B9497B9306B666AAB55535C40D7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_m0F72FF874B5DB2F2F885EDC06979F197C007E7A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_get_CreateOperation_mA533A5F00E87B6801ED74828565FF8867043AB51 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t862E6D155C9CE45DF4113616CFD38B5F27FBF9BD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m46D4E87B4E3FE715F309D53F06697D904EA74E95 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_tBA91A15C3E9F0784CE4C33CF2FF7EF235DA9DC24 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_GetAwaiter_mA9927480AC2F8E1FEC54F167E1CB037167B599A1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_get_IsCompleted_m2C6FE16F0DD212A1DC03D86CFD40CE2D71537307 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD45C24F3E66DDBA46D6809C5EEC4A427312654D5_TisU3CRunAsyncU3Ed__23_t7F1EC79BA67B0B00EF56CA2A09A374B1A2A97984_m200EF58BCF04ABB4AE358FBA555C88405DED2203 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_GetResult_m4251F63B025B8E0F22957AB3685FF282E2FF62BC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_get_RetryCondition_m035B19334C46AEDEC8BCD9478D9BA8E9C8DB475F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8E83A7DAB1BEC013CBB20D5E1313EC1432B1F2D5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tB1C5CD766202E5F44B2CA4C64C55304E2B752BDF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m318F2B235D0AD11BDCB09CBD775E01C52892810B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRunAsyncU3Ed__23_t7F1EC79BA67B0B00EF56CA2A09A374B1A2A97984_mBF7D34B90BF55DFC52205674B435FA6327A030A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RetryPolicy_1_CalculateDelay_m5326AF42D5614411A47D34EB6E9E2D9FA3007558 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RetryPolicy_1_tE7D82C6A460151DD3D6A4FCBABAD50C6BC3A4507 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRunAsyncU3Ed__23_t7F1EC79BA67B0B00EF56CA2A09A374B1A2A97984_m0BB52F60D3E68C7D2A3E24FCB0211552105421CE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_mDBCFD28FC90A33D823AF815A3362FAF05A3521EF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m415164DDFBD545E4E1D0A5728B7AB34A89E35AB1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_mEECF4B4302CA7E23FB2F529BD40A19373A34539A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__17_1_t8C9F0EEAD37FABFDD706EE6E56228D95E3889BF4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__17_1_U3CHandleExceptionU3Eb__17_0_m30C57A97C4A5CEEF321AF28204CC0AA87CFED87B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass18_0_1_t109CE2D5DBA15728A10BB940B1D6E5E50C84788B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass18_0_1__ctor_m2E2D807DCA27C014FCF0FE66CC1FB8C63648A7A3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass18_0_1_U3CHandleExceptionU3Eb__0_m4138683D5D79B5375F4B9F4C71E461CF833DD2BB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__17_1_tF924306415985A8EA132D0061C92901518707AAA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__17_1__ctor_m8DE37D59C8DE32E3541BE30CEC5AA0B0E20EDFC9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__17_1_tF924306415985A8EA132D0061C92901518707AAA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TException_t8403B37DF3FEB921EBC3D1CF8E41D8B28E6E495A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TException_tDAADAB7465EFE37F2279995A7C54F2C3DD090CC6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t747DBBC09FAF237FC00E25866A4ED6BE0D75CA15 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m09E506B69723EFD98ECC06CEF090D9C81C61F888 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonSerialization_SerializeToString_TisT_t9D722A8BBE05F883476B46F8EFA7C4C20DE38EB9_m383CF030A0FB926B44B9D40A142B8B0E54FBF5E4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tDF00C05016CE4301212A0EA91586FF0C1EC1753E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tAB4A1F23625F3F67F8AAD51AE35D1984C1C31480 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tAB4A1F23625F3F67F8AAD51AE35D1984C1C31480_Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Services_QoS_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Services_QoS_CodeGenModule = 
{
	"Unity.Services.QoS.dll",
	774,
	s_methodPointers,
	94,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	48,
	s_rgctxIndices,
	205,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
