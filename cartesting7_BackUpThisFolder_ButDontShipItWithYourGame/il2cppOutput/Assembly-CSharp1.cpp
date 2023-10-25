#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t08B14BED068ACE348E543E45725D6C6BFFA60143;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus>
struct Dictionary_2_tDFF23279733A30AC1A45EA9FEB8105F663D96705;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,SWS.PathManager>
struct Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.Boolean>
struct Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.String>
struct Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>>
struct IEnumerable_1_tB30995479058BDAD011319D9CDAA579E77165BE0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SWS.PathManager>
struct KeyCollection_tA40D0EC7749CA96E3471F138C6FFA22250E7F446;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>>
struct List_1_t899A658EFE11E82F22DA15F96306DABE3AFF7655;
// System.Collections.Generic.List`1<SWS.BezierPoint>
struct List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain>
struct List_1_t3895718121BD33A45F11A972C6A17E372C5FA43D;
// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>
struct List_1_t2C9A586FD2E1B8C67E6407386FCA1C121EC125B6;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>
struct List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,SWS.PathManager>
struct ValueCollection_t81E5FF225EDC94110C410698EE6DF8743F19E143;
// System.Collections.Generic.Dictionary`2/Entry<System.String,SWS.PathManager>[]
struct EntryU5BU5D_tDBE9BA67424B8E5335BBE21B75B27B582B8194CA;
// SWS.BezierPoint[]
struct BezierPointU5BU5D_t6A5DBCA961713D220E483780CBC4146DCFBCDFB2;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t52F9D1EC70E441ED3915E30FFB75F9B95AD56C59;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Events.UnityEvent[]
struct UnityEventU5BU5D_t50864A428315FEFB650A0EA19FAAD4E9406631AE;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
struct ABSPathDecoder_t6B479550CEF6C183ACCA13F11E29E019270AB61C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// SWS.BezierPathManager
struct BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7;
// SWS.BezierPoint
struct BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268;
// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
struct CatmullRomDecoder_tBC93937ED94DB6355B974915EE9885854F1A5EB0;
// RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder
struct CinemachineMobileInputFeeder_tB39F639AD1B750B863DE179D7847C9E1B65898E2;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder
struct CubicBezierDecoder_t58382D9354F3F75F8D6A235E945C013EACD3CC1D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// SWS.EventCollisionTrigger
struct EventCollisionTrigger_t4C1630720FC99B275EE1787D892443F1A911718E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// DG.Tweening.IDOTweenInit
struct IDOTweenInit_t72D9BFD78C21132CBCD4EEF9B6C99CD17EBE635C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// DG.Tweening.Plugins.Core.PathCore.LinearDecoder
struct LinearDecoder_tC7C53176BBF58227DC1855AFDBA3FAFF19860B15;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// SWS.MoveAnimator
struct MoveAnimator_tBEE02C8596B1FCC7DEFE79ABEF051FD27D70A100;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3;
// SWS.PathIndicator
struct PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0;
// SWS.PathManager
struct PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931;
// SWS.PathRenderer
struct PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// DG.Tweening.TweenParams
struct TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA;
// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140;
// System.Type
struct Type_t;
// RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel
struct UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// SWS.WaypointManager
struct WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7;
// SWS.navMove
struct navMove_tF36264AF2CD464A692E7D320498558A26423BC25;
// SWS.splineMove
struct splineMove_t3B37A328F6D49808D678F015EA04450552912754;
// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3;
// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452;
// Cinemachine.CinemachineCore/GetBlendOverrideDelegate
struct GetBlendOverrideDelegate_t36EFDCBF8770712A9E7B06F300B0C62C0C42B14A;
// SWS.PathIndicator/<EmitParticles>d__3
struct U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634;
// SWS.PathRenderer/<StartRenderer>d__6
struct U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD;
// SWS.WaypointManager/<>c
struct U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58;
// SWS.navMove/<Move>d__20
struct U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A;
// SWS.navMove/<NextWaypoint>d__21
struct U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA;
// SWS.navMove/<ReachedEnd>d__24
struct U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F;
// SWS.navMove/<Wait>d__28
struct U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31;
// SWS.navMove/<WaitForDestination>d__22
struct U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707;
// SWS.splineMove/<Wait>d__44
struct U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92;

IL2CPP_EXTERN_C RuntimeClass* AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral106AF37D9BFF637BC24A7F34A67D99328EFA2263;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral379294FAA2DF5EE40C7984C5B09CC7E099CE5125;
IL2CPP_EXTERN_C String_t* _stringLiteral4DA8EE29FF9B7C31801E283CEBEB8AC30FA581E9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BBA88A608EE06714C33CD449322B6575881219E;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral6E2EEA2C23050B6F5BCB167622E9CF168662B288;
IL2CPP_EXTERN_C String_t* _stringLiteral8239DDE7DBC91495DACC42B52FAF15E9C617D4D7;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteralAE160A073D64497E84A5ACD3C59A9EB02334F459;
IL2CPP_EXTERN_C String_t* _stringLiteralC39AE1D3AC997C59038ACA4B24509C758A05C19F;
IL2CPP_EXTERN_C String_t* _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE45193771A896F4396DC33FFDCAA7C061048A5D4;
IL2CPP_EXTERN_C String_t* _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907;
IL2CPP_EXTERN_C String_t* _stringLiteralF7CD1EAF4771EFD9FCE8AD019F11872BE9AF3360;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Reverse_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD414FAB39A9774FB7EC92D603F28B000FEEAD71C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE484430C363DB5BCFD75D35444B3C51C8ABA6E44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineMobileInputFeeder_GetInputAxis_m7C27C57A3360F97087AD8F7FF4121C1CB0A39F28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPathManager_tE11816416738EE9AFB82A176CC0599C045DA0931_mB554628372BD36B803FFC35806C3977AA84FA74E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisnavMove_tF36264AF2CD464A692E7D320498558A26423BC25_m8BC48D087B4AEC1032BCFE1C999743E1DD2C09CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TissplineMove_t3B37A328F6D49808D678F015EA04450552912754_mA0A3AD4DC3BEBAAA2047C706D19656F1D624E6D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m73F33F7E67F977E240031B060F3EE9EE7DD0A88B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m378052423584343CE50ABC5809BDC067421C6DB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3DD521D1E57208DDA39653995F124257D80CAECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC90D468814DB0B0DCBDED2C9FA6B34B7A783997E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4C233A12AFA2A34E23DF4423D899120178533E9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Distinct_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m177BCD39E5020FD1CD74BAD4CBFCE70CC7CF5E49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisKeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00_TisString_t_m835C7FF9E45FA7AACA869854CAB6FEAE1FFF5E4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00_m68B13DB60DFCEDB01D71E85BF8ADE24B892CCC84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisPathManager_tE11816416738EE9AFB82A176CC0599C045DA0931_m2C6760B91415445D9B7546A953EAFC650F97CC62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mBDEA4FC48475DCFAE999307350B64C305FF47F21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD7B88092B6519A420B0940CDA55942DFE7627343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m195F1660174CEF31B814EB8014F3F5391452FD17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE187CA52367A501FE32C688ED41EBB6733957C77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mEBA925FF98E7A9EAFBDFB1B616ED0F52BAB67B15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m5925CCD2844741E30EB14EDD03DD79F169BBFA80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3476730988C2CF566FC36100ACB8203C24869380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAF642341E1AAB54142F727134B05004DE3A187A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mB3CE09D745DF2DCCD600CDD08EC8F451C3666C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Pause_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBB24CEBC3EAA08B09D3F8CE4DEFB1B5732660CBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Play_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mEC9AD4279079F6EBC7A352CB642F15EBF145F205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetAs_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_m0916DFA9849225A751D8F3FA2B9E653568606B1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEmitParticlesU3Ed__3_System_Collections_IEnumerator_Reset_mC55D33C80D452BCB16BD7CE51D88ED96F87EB353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveU3Ed__20_System_Collections_IEnumerator_Reset_mC3D2EBC32CC9B1026E268F0531B0C7FD059346B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CNextWaypointU3Ed__21_System_Collections_IEnumerator_Reset_m09D054AB5B7FABFC1ED14EB959E3A8781CBAC541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReachedEndU3Ed__24_System_Collections_IEnumerator_Reset_mB5CC871FFC02E8EF15D8F24D02AF755816C5E33E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartRendererU3Ed__6_System_Collections_IEnumerator_Reset_mC1C83465CA746A21D33787640141886D9639AEDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCleanUpU3Eb__5_0_m37A6B0B3BAF0675F3693C880E196D15A75892399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCleanUpU3Eb__5_1_m4F2E3608CA80E04515A87ABDD5A25120C15BBC6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForDestinationU3Ed__22_System_Collections_IEnumerator_Reset_mAB2FB6CED27B23E05CF79E702E95712B4322B0B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitU3Ed__28_System_Collections_IEnumerator_Reset_m95F5F9B9D7C19016EB7CFBE40FE45307FECB21E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitU3Ed__44_System_Collections_IEnumerator_Reset_m9C96A667883ABC23AC02A956674963D49637C52C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* splineMove_OnWaypointChange_m432EC084424BD7E4855FEBE5B80D36E540415AEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* splineMove_OnWaypointReached_mECB6097C459BE08BB154361DDDDCF37F4C618CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* splineMove_OnWaypointRotation_m358BBEDA99F8C357CD235DBD15AF294716335C1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* splineMove_ReachedEnd_m216B0DE871FEA1CA0B013CD6AD7ABA0D80FB835B_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,SWS.PathManager>
struct Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDBE9BA67424B8E5335BBE21B75B27B582B8194CA* ____entries_1;
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
	KeyCollection_tA40D0EC7749CA96E3471F138C6FFA22250E7F446* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t81E5FF225EDC94110C410698EE6DF8743F19E143* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<SWS.BezierPoint>
struct List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BezierPointU5BU5D_t6A5DBCA961713D220E483780CBC4146DCFBCDFB2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>
struct List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UnityEventU5BU5D_t50864A428315FEFB650A0EA19FAAD4E9406631AE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// SWS.BezierPoint
struct BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268  : public RuntimeObject
{
	// UnityEngine.Transform SWS.BezierPoint::wp
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___wp_0;
	// UnityEngine.Transform[] SWS.BezierPoint::cp
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___cp_1;
};

// Cinemachine.CinemachineCore
struct CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain> Cinemachine.CinemachineCore::mActiveBrains
	List_1_t3895718121BD33A45F11A972C6A17E372C5FA43D* ___mActiveBrains_10;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase> Cinemachine.CinemachineCore::mActiveCameras
	List_1_t2C9A586FD2E1B8C67E6407386FCA1C121EC125B6* ___mActiveCameras_11;
	// System.Boolean Cinemachine.CinemachineCore::m_ActiveCamerasAreSorted
	bool ___m_ActiveCamerasAreSorted_12;
	// System.Int32 Cinemachine.CinemachineCore::m_ActivationSequence
	int32_t ___m_ActivationSequence_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>> Cinemachine.CinemachineCore::mAllCameras
	List_1_t899A658EFE11E82F22DA15F96306DABE3AFF7655* ___mAllCameras_14;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineCore::mRoundRobinVcamLastFrame
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___mRoundRobinVcamLastFrame_15;
	// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus> Cinemachine.CinemachineCore::mUpdateStatus
	Dictionary_2_tDFF23279733A30AC1A45EA9FEB8105F663D96705* ___mUpdateStatus_18;
	// Cinemachine.CinemachineCore/UpdateFilter Cinemachine.CinemachineCore::m_CurrentUpdateFilter
	int32_t ___m_CurrentUpdateFilter_19;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// DG.Tweening.TweenParams
struct TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA  : public RuntimeObject
{
	// System.Object DG.Tweening.TweenParams::id
	RuntimeObject* ___id_1;
	// System.Object DG.Tweening.TweenParams::target
	RuntimeObject* ___target_2;
	// DG.Tweening.UpdateType DG.Tweening.TweenParams::updateType
	int32_t ___updateType_3;
	// System.Boolean DG.Tweening.TweenParams::isIndependentUpdate
	bool ___isIndependentUpdate_4;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_5;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_6;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_7;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_8;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_9;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_10;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_11;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.TweenParams::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_12;
	// System.Boolean DG.Tweening.TweenParams::isRecyclable
	bool ___isRecyclable_13;
	// System.Boolean DG.Tweening.TweenParams::isSpeedBased
	bool ___isSpeedBased_14;
	// System.Boolean DG.Tweening.TweenParams::autoKill
	bool ___autoKill_15;
	// System.Int32 DG.Tweening.TweenParams::loops
	int32_t ___loops_16;
	// DG.Tweening.LoopType DG.Tweening.TweenParams::loopType
	int32_t ___loopType_17;
	// System.Single DG.Tweening.TweenParams::delay
	float ___delay_18;
	// System.Boolean DG.Tweening.TweenParams::isRelative
	bool ___isRelative_19;
	// DG.Tweening.Ease DG.Tweening.TweenParams::easeType
	int32_t ___easeType_20;
	// DG.Tweening.EaseFunction DG.Tweening.TweenParams::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_21;
	// System.Single DG.Tweening.TweenParams::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_22;
	// System.Single DG.Tweening.TweenParams::easePeriod
	float ___easePeriod_23;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// SWS.PathIndicator/<EmitParticles>d__3
struct U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634  : public RuntimeObject
{
	// System.Int32 SWS.PathIndicator/<EmitParticles>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SWS.PathIndicator/<EmitParticles>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SWS.PathIndicator SWS.PathIndicator/<EmitParticles>d__3::<>4__this
	PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0* ___U3CU3E4__this_2;
};

// SWS.PathRenderer/<StartRenderer>d__6
struct U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D  : public RuntimeObject
{
	// System.Int32 SWS.PathRenderer/<StartRenderer>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SWS.PathRenderer/<StartRenderer>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SWS.PathRenderer SWS.PathRenderer/<StartRenderer>d__6::<>4__this
	PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* ___U3CU3E4__this_2;
};

// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD  : public RuntimeObject
{
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::yaw
	float ___yaw_0;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::pitch
	float ___pitch_1;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::roll
	float ___roll_2;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::x
	float ___x_3;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::y
	float ___y_4;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::z
	float ___z_5;
};

// SWS.WaypointManager/<>c
struct U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58  : public RuntimeObject
{
};

// SWS.navMove/<Move>d__20
struct U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A  : public RuntimeObject
{
	// System.Int32 SWS.navMove/<Move>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SWS.navMove/<Move>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SWS.navMove SWS.navMove/<Move>d__20::<>4__this
	navMove_tF36264AF2CD464A692E7D320498558A26423BC25* ___U3CU3E4__this_2;
};

// SWS.navMove/<NextWaypoint>d__21
struct U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA  : public RuntimeObject
{
	// System.Int32 SWS.navMove/<NextWaypoint>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SWS.navMove/<NextWaypoint>d__21::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SWS.navMove SWS.navMove/<NextWaypoint>d__21::<>4__this
	navMove_tF36264AF2CD464A692E7D320498558A26423BC25* ___U3CU3E4__this_2;
};

// SWS.navMove/<ReachedEnd>d__24
struct U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F  : public RuntimeObject
{
	// System.Int32 SWS.navMove/<ReachedEnd>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SWS.navMove/<ReachedEnd>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SWS.navMove SWS.navMove/<ReachedEnd>d__24::<>4__this
	navMove_tF36264AF2CD464A692E7D320498558A26423BC25* ___U3CU3E4__this_2;
};

// SWS.navMove/<Wait>d__28
struct U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31  : public RuntimeObject
{
	// System.Int32 SWS.navMove/<Wait>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SWS.navMove/<Wait>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single SWS.navMove/<Wait>d__28::secs
	float ___secs_2;
	// SWS.navMove SWS.navMove/<Wait>d__28::<>4__this
	navMove_tF36264AF2CD464A692E7D320498558A26423BC25* ___U3CU3E4__this_3;
};

// SWS.navMove/<WaitForDestination>d__22
struct U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707  : public RuntimeObject
{
	// System.Int32 SWS.navMove/<WaitForDestination>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SWS.navMove/<WaitForDestination>d__22::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SWS.navMove SWS.navMove/<WaitForDestination>d__22::<>4__this
	navMove_tF36264AF2CD464A692E7D320498558A26423BC25* ___U3CU3E4__this_2;
	// System.Single SWS.navMove/<WaitForDestination>d__22::<remain>5__2
	float ___U3CremainU3E5__2_3;
};

// SWS.splineMove/<Wait>d__44
struct U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92  : public RuntimeObject
{
	// System.Int32 SWS.splineMove/<Wait>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SWS.splineMove/<Wait>d__44::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single SWS.splineMove/<Wait>d__44::secs
	float ___secs_2;
	// SWS.splineMove SWS.splineMove/<Wait>d__44::<>4__this
	splineMove_t3B37A328F6D49808D678F015EA04450552912754* ___U3CU3E4__this_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>
struct KeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<DG.Tweening.LogBehaviour>
struct Nullable_1_t93085375A199522C60696471B1FB8B4B7FCB89FD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<DG.Tweening.LoopType>
struct Nullable_1_t2C68E51BB6FC0BF5D7980289134BAC137BB0F317 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_6;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_7;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_8;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_9;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_10;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_11;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_18;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_19;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_20;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_21;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_22;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_23;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_24;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_25;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_26;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_27;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_28;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_29;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_30;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_31;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_32;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_33;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_34;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_35;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_36;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_37;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_38;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_39;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_40;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_41;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_42;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_43;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_44;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_45;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_47;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_48;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_49;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_50;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_51;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_52;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_53;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A 
{
	// DG.Tweening.PathMode DG.Tweening.Plugins.Options.PathOptions::mode
	int32_t ___mode_0;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.Plugins.Options.PathOptions::orientType
	int32_t ___orientType_1;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockPositionAxis
	int32_t ___lockPositionAxis_2;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockRotationAxis
	int32_t ___lockRotationAxis_3;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isClosedPath
	bool ___isClosedPath_4;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.PathOptions::lookAtPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::lookAtTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::lookAhead
	float ___lookAhead_7;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::hasCustomForwardDirection
	bool ___hasCustomForwardDirection_8;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::forward
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::useLocalPosition
	bool ___useLocalPosition_10;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody
	bool ___isRigidbody_12;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::stableZRotation
	bool ___stableZRotation_13;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::startupRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_14;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::startupZRot
	float ___startupZRot_15;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraStartWp
	bool ___addedExtraStartWp_16;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraEndWp
	bool ___addedExtraEndWp_17;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshaled_pinvoke
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___stableZRotation_13;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_14;
	float ___startupZRot_15;
	int32_t ___addedExtraStartWp_16;
	int32_t ___addedExtraEndWp_17;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshaled_com
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___stableZRotation_13;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_14;
	float ___startupZRot_15;
	int32_t ___addedExtraStartWp_16;
	int32_t ___addedExtraEndWp_17;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_54;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_55;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___startValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___endValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___changeValue_58;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A ___plugOptions_59;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_60;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_61;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t08B14BED068ACE348E543E45725D6C6BFFA60143* ___tweenPlugin_62;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3  : public RuntimeObject
{
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::wpLengths
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___wpLengths_3;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::wps
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___wps_4;
	// DG.Tweening.PathType DG.Tweening.Plugins.Core.PathCore.Path::type
	int32_t ___type_5;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisionsXSegment
	int32_t ___subdivisionsXSegment_6;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisions
	int32_t ___subdivisions_7;
	// DG.Tweening.Plugins.Core.PathCore.ControlPoint[] DG.Tweening.Plugins.Core.PathCore.Path::controlPoints
	ControlPointU5BU5D_t52F9D1EC70E441ED3915E30FFB75F9B95AD56C59* ___controlPoints_8;
	// System.Single DG.Tweening.Plugins.Core.PathCore.Path::length
	float ___length_9;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::isFinalized
	bool ___isFinalized_10;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::timesTable
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___timesTable_11;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::lengthsTable
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___lengthsTable_12;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::linearWPIndex
	int32_t ___linearWPIndex_13;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraStartWp
	bool ___addedExtraStartWp_14;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraEndWp
	bool ___addedExtraEndWp_15;
	// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.Core.PathCore.Path::_incrementalClone
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ____incrementalClone_16;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::_incrementalIndex
	int32_t ____incrementalIndex_17;
	// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder DG.Tweening.Plugins.Core.PathCore.Path::_decoder
	ABSPathDecoder_t6B479550CEF6C183ACCA13F11E29E019270AB61C* ____decoder_18;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::_changed
	bool ____changed_19;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::nonLinearDrawWps
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___nonLinearDrawWps_20;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_21;
	// System.Nullable`1<UnityEngine.Vector3> DG.Tweening.Plugins.Core.PathCore.Path::lookAtPosition
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___lookAtPosition_22;
	// UnityEngine.Color DG.Tweening.Plugins.Core.PathCore.Path::gizmoColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___gizmoColor_23;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.Boolean>
struct Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.String>
struct Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77  : public MulticastDelegate_t
{
};

// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder
struct CinemachineMobileInputFeeder_tB39F639AD1B750B863DE179D7847C9E1B65898E2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder::_touchInput
	UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* ____touchInput_4;
	// UnityEngine.Vector2 RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder::_lookInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____lookInput_5;
	// System.Single RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder::_touchSpeedSensitivityX
	float ____touchSpeedSensitivityX_6;
	// System.Single RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder::_touchSpeedSensitivityY
	float ____touchSpeedSensitivityY_7;
	// System.String RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder::_touchXMapTo
	String_t* ____touchXMapTo_8;
	// System.String RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder::_touchYMapTo
	String_t* ____touchYMapTo_9;
};

// SWS.EventCollisionTrigger
struct EventCollisionTrigger_t4C1630720FC99B275EE1787D892443F1A911718E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SWS.EventCollisionTrigger::onTrigger
	bool ___onTrigger_4;
	// System.Boolean SWS.EventCollisionTrigger::onCollision
	bool ___onCollision_5;
	// UnityEngine.Events.UnityEvent SWS.EventCollisionTrigger::myEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___myEvent_6;
};

// SWS.MoveAnimator
struct MoveAnimator_tBEE02C8596B1FCC7DEFE79ABEF051FD27D70A100  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SWS.splineMove SWS.MoveAnimator::sMove
	splineMove_t3B37A328F6D49808D678F015EA04450552912754* ___sMove_4;
	// UnityEngine.AI.NavMeshAgent SWS.MoveAnimator::nAgent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___nAgent_5;
	// UnityEngine.Animator SWS.MoveAnimator::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
	// System.Single SWS.MoveAnimator::lastRotY
	float ___lastRotY_7;
};

// SWS.PathIndicator
struct PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SWS.PathIndicator::modRotation
	float ___modRotation_4;
	// UnityEngine.ParticleSystem SWS.PathIndicator::pSys
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___pSys_5;
};

// SWS.PathManager
struct PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] SWS.PathManager::waypoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___waypoints_4;
	// System.Boolean SWS.PathManager::drawCurved
	bool ___drawCurved_5;
	// System.Boolean SWS.PathManager::drawDirection
	bool ___drawDirection_6;
	// UnityEngine.Color SWS.PathManager::color1
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1_7;
	// UnityEngine.Color SWS.PathManager::color2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2_8;
	// UnityEngine.Vector3 SWS.PathManager::size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size_9;
	// System.Single SWS.PathManager::radius
	float ___radius_10;
	// System.Boolean SWS.PathManager::skipCustomNames
	bool ___skipCustomNames_11;
	// UnityEngine.GameObject SWS.PathManager::replaceObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___replaceObject_12;
};

// SWS.PathRenderer
struct PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SWS.PathRenderer::onUpdate
	bool ___onUpdate_4;
	// System.Single SWS.PathRenderer::spacing
	float ___spacing_5;
	// SWS.PathManager SWS.PathRenderer::path
	PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* ___path_6;
	// UnityEngine.LineRenderer SWS.PathRenderer::line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___line_7;
	// UnityEngine.Vector3[] SWS.PathRenderer::points
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___points_8;
};

// RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel
struct UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::_playerTouchVectorOutput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____playerTouchVectorOutput_4;
	// System.Boolean RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::_isPlayerTouchingPanel
	bool ____isPlayerTouchingPanel_5;
	// UnityEngine.Touch RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::_myTouch
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ____myTouch_6;
	// System.Int32 RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::_touchID
	int32_t ____touchID_7;
};

// SWS.WaypointManager
struct WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode SWS.WaypointManager::placementKey
	int32_t ___placementKey_4;
	// UnityEngine.KeyCode SWS.WaypointManager::viewPlacementKey
	int32_t ___viewPlacementKey_5;
};

// SWS.navMove
struct navMove_tF36264AF2CD464A692E7D320498558A26423BC25  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SWS.PathManager SWS.navMove::pathContainer
	PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* ___pathContainer_4;
	// System.Boolean SWS.navMove::onStart
	bool ___onStart_5;
	// System.Boolean SWS.navMove::moveToPath
	bool ___moveToPath_6;
	// System.Boolean SWS.navMove::reverse
	bool ___reverse_7;
	// System.Int32 SWS.navMove::startPoint
	int32_t ___startPoint_8;
	// System.Int32 SWS.navMove::currentPoint
	int32_t ___currentPoint_9;
	// System.Boolean SWS.navMove::closeLoop
	bool ___closeLoop_10;
	// System.Boolean SWS.navMove::updateRotation
	bool ___updateRotation_11;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent> SWS.navMove::events
	List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* ___events_12;
	// SWS.navMove/LoopType SWS.navMove::loopType
	int32_t ___loopType_13;
	// UnityEngine.Transform[] SWS.navMove::waypoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___waypoints_14;
	// System.Boolean SWS.navMove::repeat
	bool ___repeat_15;
	// UnityEngine.AI.NavMeshAgent SWS.navMove::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_16;
	// System.Random SWS.navMove::rand
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand_17;
	// System.Int32 SWS.navMove::rndIndex
	int32_t ___rndIndex_18;
	// System.Boolean SWS.navMove::waiting
	bool ___waiting_19;
};

// SWS.splineMove
struct splineMove_t3B37A328F6D49808D678F015EA04450552912754  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SWS.PathManager SWS.splineMove::pathContainer
	PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* ___pathContainer_4;
	// System.Boolean SWS.splineMove::onStart
	bool ___onStart_5;
	// System.Boolean SWS.splineMove::moveToPath
	bool ___moveToPath_6;
	// System.Boolean SWS.splineMove::reverse
	bool ___reverse_7;
	// System.Int32 SWS.splineMove::startPoint
	int32_t ___startPoint_8;
	// System.Int32 SWS.splineMove::currentPoint
	int32_t ___currentPoint_9;
	// System.Boolean SWS.splineMove::closeLoop
	bool ___closeLoop_10;
	// System.Boolean SWS.splineMove::local
	bool ___local_11;
	// System.Single SWS.splineMove::lookAhead
	float ___lookAhead_12;
	// System.Single SWS.splineMove::sizeToAdd
	float ___sizeToAdd_13;
	// SWS.splineMove/TimeValue SWS.splineMove::timeValue
	int32_t ___timeValue_14;
	// System.Single SWS.splineMove::speed
	float ___speed_15;
	// UnityEngine.AnimationCurve SWS.splineMove::animEaseType
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animEaseType_16;
	// SWS.splineMove/LoopType SWS.splineMove::loopType
	int32_t ___loopType_17;
	// UnityEngine.Vector3[] SWS.splineMove::waypoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___waypoints_18;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent> SWS.splineMove::events
	List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* ___events_19;
	// DG.Tweening.PathType SWS.splineMove::pathType
	int32_t ___pathType_20;
	// DG.Tweening.PathMode SWS.splineMove::pathMode
	int32_t ___pathMode_21;
	// DG.Tweening.Ease SWS.splineMove::easeType
	int32_t ___easeType_22;
	// DG.Tweening.AxisConstraint SWS.splineMove::lockPosition
	int32_t ___lockPosition_23;
	// DG.Tweening.AxisConstraint SWS.splineMove::lockRotation
	int32_t ___lockRotation_24;
	// SWS.splineMove/RotationType SWS.splineMove::waypointRotation
	int32_t ___waypointRotation_25;
	// UnityEngine.Transform SWS.splineMove::rotationTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rotationTarget_26;
	// DG.Tweening.Tweener SWS.splineMove::tween
	Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ___tween_27;
	// UnityEngine.Vector3[] SWS.splineMove::wpPos
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___wpPos_28;
	// System.Single SWS.splineMove::originSpeed
	float ___originSpeed_29;
	// UnityEngine.Quaternion SWS.splineMove::originRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___originRot_30;
	// System.Random SWS.splineMove::rand
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand_31;
	// System.Int32[] SWS.splineMove::rndArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rndArray_32;
};

// SWS.BezierPathManager
struct BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7  : public PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931
{
	// UnityEngine.Vector3[] SWS.BezierPathManager::pathPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___pathPoints_13;
	// System.Collections.Generic.List`1<SWS.BezierPoint> SWS.BezierPathManager::bPoints
	List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* ___bPoints_14;
	// System.Boolean SWS.BezierPathManager::showHandles
	bool ___showHandles_15;
	// System.Boolean SWS.BezierPathManager::connectHandles
	bool ___connectHandles_16;
	// UnityEngine.Color SWS.BezierPathManager::color3
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color3_17;
	// System.Single SWS.BezierPathManager::pathDetail
	float ___pathDetail_18;
	// System.Boolean SWS.BezierPathManager::customDetail
	bool ___customDetail_19;
	// System.Collections.Generic.List`1<System.Single> SWS.BezierPathManager::segmentDetail
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___segmentDetail_20;
};

// System.Collections.Generic.Dictionary`2<System.String,SWS.PathManager>

// System.Collections.Generic.Dictionary`2<System.String,SWS.PathManager>

// System.Collections.Generic.List`1<SWS.BezierPoint>
struct List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BezierPointU5BU5D_t6A5DBCA961713D220E483780CBC4146DCFBCDFB2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SWS.BezierPoint>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>
struct List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UnityEventU5BU5D_t50864A428315FEFB650A0EA19FAAD4E9406631AE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// DG.Tweening.Core.ABSSequentiable

// DG.Tweening.Core.ABSSequentiable

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// SWS.BezierPoint

// SWS.BezierPoint

// Cinemachine.CinemachineCore
struct CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_StaticFields
{
	// System.Int32 Cinemachine.CinemachineCore::kStreamingVersion
	int32_t ___kStreamingVersion_0;
	// System.String Cinemachine.CinemachineCore::kVersionString
	String_t* ___kVersionString_1;
	// Cinemachine.CinemachineCore Cinemachine.CinemachineCore::sInstance
	CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD* ___sInstance_2;
	// System.Boolean Cinemachine.CinemachineCore::sShowHiddenObjects
	bool ___sShowHiddenObjects_3;
	// Cinemachine.CinemachineCore/AxisInputDelegate Cinemachine.CinemachineCore::GetInputAxis
	AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452* ___GetInputAxis_4;
	// System.Single Cinemachine.CinemachineCore::UniformDeltaTimeOverride
	float ___UniformDeltaTimeOverride_5;
	// System.Single Cinemachine.CinemachineCore::CurrentTimeOverride
	float ___CurrentTimeOverride_6;
	// Cinemachine.CinemachineCore/GetBlendOverrideDelegate Cinemachine.CinemachineCore::GetBlendOverride
	GetBlendOverrideDelegate_t36EFDCBF8770712A9E7B06F300B0C62C0C42B14A* ___GetBlendOverride_7;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineCore::CameraUpdatedEvent
	BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* ___CameraUpdatedEvent_8;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineCore::CameraCutEvent
	BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* ___CameraCutEvent_9;
	// System.Single Cinemachine.CinemachineCore::s_LastUpdateTime
	float ___s_LastUpdateTime_16;
	// System.Int32 Cinemachine.CinemachineCore::s_FixedFrameCount
	int32_t ___s_FixedFrameCount_17;
};

// Cinemachine.CinemachineCore

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// DG.Tweening.TweenParams
struct TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA_StaticFields
{
	// DG.Tweening.TweenParams DG.Tweening.TweenParams::Params
	TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* ___Params_0;
};

// DG.Tweening.TweenParams

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// SWS.PathIndicator/<EmitParticles>d__3

// SWS.PathIndicator/<EmitParticles>d__3

// SWS.PathRenderer/<StartRenderer>d__6

// SWS.PathRenderer/<StartRenderer>d__6

// UnityTemplateProjects.SimpleCameraController/CameraState

// UnityTemplateProjects.SimpleCameraController/CameraState

// SWS.WaypointManager/<>c
struct U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_StaticFields
{
	// SWS.WaypointManager/<>c SWS.WaypointManager/<>c::<>9
	U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.Boolean> SWS.WaypointManager/<>c::<>9__5_0
	Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503* ___U3CU3E9__5_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.String> SWS.WaypointManager/<>c::<>9__5_1
	Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77* ___U3CU3E9__5_1_2;
};

// SWS.WaypointManager/<>c

// SWS.navMove/<Move>d__20

// SWS.navMove/<Move>d__20

// SWS.navMove/<NextWaypoint>d__21

// SWS.navMove/<NextWaypoint>d__21

// SWS.navMove/<ReachedEnd>d__24

// SWS.navMove/<ReachedEnd>d__24

// SWS.navMove/<Wait>d__28

// SWS.navMove/<Wait>d__28

// SWS.navMove/<WaitForDestination>d__22

// SWS.navMove/<WaitForDestination>d__22

// SWS.splineMove/<Wait>d__44

// SWS.splineMove/<Wait>d__44

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>

// System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<DG.Tweening.LogBehaviour>

// System.Nullable`1<DG.Tweening.LogBehaviour>

// System.Nullable`1<DG.Tweening.LoopType>

// System.Nullable`1<DG.Tweening.LoopType>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// DG.Tweening.Tween

// DG.Tweening.Tween

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MinMaxCurve

// UnityEngine.ParticleSystem/MinMaxCurve

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Vector3>

// System.Nullable`1<UnityEngine.Vector3>

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// DG.Tweening.Plugins.Options.PathOptions

// DG.Tweening.Plugins.Options.PathOptions

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.Touch

// UnityEngine.Touch

// DG.Tweening.Tweener

// DG.Tweening.Tweener

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3_StaticFields
{
	// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder DG.Tweening.Plugins.Core.PathCore.Path::_catmullRomDecoder
	CatmullRomDecoder_tBC93937ED94DB6355B974915EE9885854F1A5EB0* ____catmullRomDecoder_0;
	// DG.Tweening.Plugins.Core.PathCore.LinearDecoder DG.Tweening.Plugins.Core.PathCore.Path::_linearDecoder
	LinearDecoder_tC7C53176BBF58227DC1855AFDBA3FAFF19860B15* ____linearDecoder_1;
	// DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder DG.Tweening.Plugins.Core.PathCore.Path::_cubicBezierDecoder
	CubicBezierDecoder_t58382D9354F3F75F8D6A235E945C013EACD3CC1D* ____cubicBezierDecoder_2;
};

// DG.Tweening.Plugins.Core.PathCore.Path

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// System.SystemException

// System.SystemException

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.String>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.String>

// DG.Tweening.TweenCallback`1<System.Int32>

// DG.Tweening.TweenCallback`1<System.Int32>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// DG.Tweening.TweenCallback

// DG.Tweening.TweenCallback

// Cinemachine.CinemachineCore/AxisInputDelegate

// Cinemachine.CinemachineCore/AxisInputDelegate

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AI.NavMeshAgent

// UnityEngine.AI.NavMeshAgent

// RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder

// RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder

// SWS.EventCollisionTrigger

// SWS.EventCollisionTrigger

// SWS.MoveAnimator

// SWS.MoveAnimator

// SWS.PathIndicator

// SWS.PathIndicator

// SWS.PathManager

// SWS.PathManager

// SWS.PathRenderer

// SWS.PathRenderer

// RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel

// RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel

// SWS.WaypointManager
struct WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,SWS.PathManager> SWS.WaypointManager::Paths
	Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* ___Paths_6;
};

// SWS.WaypointManager

// SWS.navMove

// SWS.navMove

// SWS.splineMove

// SWS.splineMove

// SWS.BezierPathManager

// SWS.BezierPathManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Distinct_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m177BCD39E5020FD1CD74BAD4CBFCE70CC7CF5E49_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared (RuntimeObject* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_m9649CC8328C44B44485D78A25A3F08C6B53F65C1_gshared (RuntimeObject* ___0_source, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___1_selector, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisRuntimeObject_m99DAB37F8B79D6A07917FDB56F85DEF6B95A3BE7_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse<UnityEngine.Vector3>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE484430C363DB5BCFD75D35444B3C51C8ABA6E44_gshared (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenCallback`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback_1__ctor_mD38D0EEEABC05DBE94D229AF084F5FCE239C6EB8_gshared (TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetAs<System.Object>(T,DG.Tweening.TweenParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetAs_TisRuntimeObject_mC2C421FCDDBB1D567904F1437916E9A23E2FAB1D_gshared (RuntimeObject* ___0_t, TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* ___1_tweenParams, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Pause<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Pause_TisRuntimeObject_m36D60DCEDF6720E9E82F204E1AE3B95E9E53C364_gshared (RuntimeObject* ___0_t, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Play<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Play_TisRuntimeObject_m255A424EE8F1D490359AB0C9CC5D8393F5C2B1B7_gshared (RuntimeObject* ___0_t, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_mCFA1C44458F8548C911C16F82077DA4C35D43F69 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<SWS.navMove>()
inline navMove_tF36264AF2CD464A692E7D320498558A26423BC25* Component_GetComponent_TisnavMove_tF36264AF2CD464A692E7D320498558A26423BC25_m8BC48D087B4AEC1032BCFE1C999743E1DD2C09CC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  navMove_tF36264AF2CD464A692E7D320498558A26423BC25* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void SWS.navMove::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_Stop_mA065B37494676CBC3FD6689FF5A3D96B4A21531F (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_mD8FF6CAA6FF6749259FB95762B2A521CF8483163 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___0_explosionForce, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_explosionPosition, float ___2_explosionRadius, float ___3_upwardsModifier, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<SWS.splineMove>()
inline splineMove_t3B37A328F6D49808D678F015EA04450552912754* Component_GetComponent_TissplineMove_t3B37A328F6D49808D678F015EA04450552912754_mA0A3AD4DC3BEBAAA2047C706D19656F1D624E6D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  splineMove_t3B37A328F6D49808D678F015EA04450552912754* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsPlaying(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsPlaying_m32EF28DEB59B931FA4607BAC3BED0DE275A1D843 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshAgent_get_velocity_m028219D0E4678D727F00C53AE3DCBCF29AF04DA7 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_desiredVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshAgent_get_desiredVelocity_m8CF3F6E3FA8EE86397DD02146AA6048949B74F52 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m018FC1B8BBA989887545ABEF5FB611087F23A4C0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, float ___2_dampTime, float ___3_deltaTime, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void SWS.PathIndicator/<EmitParticles>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEmitParticlesU3Ed__3__ctor_m0A02A696DB6CC90C1F1ED0E729DCDD7A01DD7F47 (U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MinMaxCurve::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MinMaxCurve_op_Implicit_m133028E91CF2F823F5E20F6B19A3332A02404086 (float ___0_constant, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotation(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotation_m8D09FD13401B188EC3C20C489CFA1EDDA3B43079 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<SWS.PathManager>()
inline PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* Component_GetComponent_TisPathManager_tE11816416738EE9AFB82A176CC0599C045DA0931_mB554628372BD36B803FFC35806C3977AA84FA74E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void SWS.PathRenderer/<StartRenderer>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRendererU3Ed__6__ctor_mEAA3191A24B9E6C1186F87D2927082C1DFE2942E (U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_gshared)(__this, ___0_collection, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
inline void List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_gshared)(__this, ___0_index, ___1_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared)(__this, method);
}
// System.Void SWS.PathRenderer::DrawCurved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathRenderer_DrawCurved_m3E8BDE37767236BC6C6957D01674969C6C720626 (PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* __this, const RuntimeMethod* method) ;
// System.Void SWS.PathRenderer::DrawLinear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathRenderer_DrawLinear_m18CF740F0D0E3615EBE6C930D30F4CDA9C3EB212 (PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 SWS.WaypointManager::GetPoint(UnityEngine.Vector3[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WaypointManager_GetPoint_mF6807E60DFF8AF4FA3B0AC63C14066D027112409 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_gizmoPoints, float ___1_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void SWS.PathRenderer::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathRenderer_Render_m155EDD61E241356D50A5BB8B9F94BC643BC368B7 (PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void SWS.WaypointManager::AddPath(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager_AddPath_mC4D93EB0E933E0407FEF3526B79A8E9E76F9C69B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_path, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<SWS.BezierPoint>::get_Count()
inline int32_t List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_inline (List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void SWS.BezierPathManager::CalculatePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPathManager_CalculatePath_m884198EBABAD8C8A01571884D918ACEF0CC9FECD (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SWS.BezierPoint>::Clear()
inline void List_1_Clear_mEBA925FF98E7A9EAFBDFB1B616ED0F52BAB67B15_inline (List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void SWS.BezierPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint__ctor_m8B2BCF59EBFF6ADBCD62D3BD2B9F1AAF1D11F57A (BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SWS.BezierPoint>::Add(T)
inline void List_1_Add_mE187CA52367A501FE32C688ED41EBB6733957C77_inline (List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* __this, BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81*, BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<SWS.BezierPoint>::get_Item(System.Int32)
inline BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C (List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* (*) (List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// System.Void SWS.WaypointManager::DrawCurved(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager_DrawCurved_m2D67C19A40B17A3F97162A6AC58350002C733EC3 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_pathPoints, const RuntimeMethod* method) ;
// System.Void SWS.WaypointManager::DrawStraight(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager_DrawStraight_m3542414F6DF4E3A5F43B0B1C2D0DD67321D202CD (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_waypoints, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___0_index, method);
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> SWS.BezierPathManager::GetPoints(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* BezierPathManager_GetPoints_mB73E4C9B08F3B71E5094CE88D4C6DB6B56BAFE63 (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_p2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_p3, float ___4_detail, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Distinct_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m177BCD39E5020FD1CD74BAD4CBFCE70CC7CF5E49 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m177BCD39E5020FD1CD74BAD4CBFCE70CC7CF5E49_gshared)(___0_source, method);
}
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_gshared)(___0_source, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SWS.BezierPoint>::.ctor()
inline void List_1__ctor_m3476730988C2CF566FC36100ACB8203C24869380 (List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void SWS.PathManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathManager__ctor_mB191F3F28D00A61FDCD6EA337437D72A030A762F (PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Transform>::ToArray()
inline TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* List_1_ToArray_m5925CCD2844741E30EB14EDD03DD79F169BBFA80 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// DG.Tweening.IDOTweenInit DG.Tweening.DOTween::Init(System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>,System.Nullable`1<DG.Tweening.LogBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOTween_Init_mAD6E37B9B311DFFBCCACAB726DA36D40A7DB8C23 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_recycleAllByDefault, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___1_useSafeMode, Nullable_1_t93085375A199522C60696471B1FB8B4B7FCB89FD ___2_logBehaviour, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<SWS.PathManager>()
inline PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* GameObject_GetComponentInChildren_TisPathManager_tE11816416738EE9AFB82A176CC0599C045DA0931_m2C6760B91415445D9B7546A953EAFC650F97CC62 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void SWS.WaypointManager::CleanUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager_CleanUp_m44F4A6D8A82EC10911A1164721437B885259A54B (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SWS.PathManager>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3DD521D1E57208DDA39653995F124257D80CAECE (Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,SWS.PathManager>::Add(TKey,TValue)
inline void Dictionary_2_Add_m73F33F7E67F977E240031B060F3EE9EE7DD0A88B (Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* __this, String_t* ___0_key, PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577*, String_t*, PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5FD2A5ECBF5D8123A687F765004AEA0E395FD14D (Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00_m68B13DB60DFCEDB01D71E85BF8ADE24B892CCC84 (RuntimeObject* ___0_source, Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503*, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared)(___0_source, ___1_predicate, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE024600C2E242A633B30B6E12AFA7A1FDDCA99E9 (Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisKeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00_TisString_t_m835C7FF9E45FA7AACA869854CAB6FEAE1FFF5E4E (RuntimeObject* ___0_source, Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77*, const RuntimeMethod*))Enumerable_Select_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_m9649CC8328C44B44485D78A25A3F08C6B53F65C1_gshared)(___0_source, ___1_selector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SWS.PathManager>::Remove(TKey)
inline bool Dictionary_2_Remove_mC90D468814DB0B0DCBDED2C9FA6B34B7A783997E (Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SWS.PathManager>::Clear()
inline void Dictionary_2_Clear_m378052423584343CE50ABC5809BDC067421C6DB1 (Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] SWS.WaypointManager::GetCurved(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* WaypointManager_GetCurved_mC6EFE614F13511E4ADFF49405D040DE0FAB5C960 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_waypoints, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
inline void List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_gshared)(__this, ___0_capacity, method);
}
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD_gshared)(__this, ___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
inline void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SWS.PathManager>::.ctor()
inline void Dictionary_2__ctor_m4C233A12AFA2A34E23DF4423D899120178533E9B (Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void SWS.WaypointManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6D1D7C486FFCCEAB010ECACE34AA7B2C1242D277 (U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>::get_Value()
inline PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* KeyValuePair_2_get_Value_mD7B88092B6519A420B0940CDA55942DFE7627343_inline (KeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00* __this, const RuntimeMethod* method)
{
	return ((  PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* (*) (KeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mBDEA4FC48475DCFAE999307350B64C305FF47F21_inline (KeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void SWS.navMove::StartMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_StartMove_m75E2441A151B98BD1D25400B5CBD506C92BB9C7F (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse<UnityEngine.Transform>(T[])
inline void Array_Reverse_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD414FAB39A9774FB7EC92D603F28B000FEEAD71C (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*, const RuntimeMethod*))Array_Reverse_TisRuntimeObject_m99DAB37F8B79D6A07917FDB56F85DEF6B95A3BE7_gshared)(___0_array, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>::get_Count()
inline int32_t List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_inline (List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>::Add(T)
inline void List_1_Add_m195F1660174CEF31B814EB8014F3F5391452FD17_inline (List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* __this, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA*, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.IEnumerator SWS.navMove::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* navMove_Move_m23F0FD982EB08DFA5CC54734B65E29187FCF8F85 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void SWS.navMove/<Move>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__20__ctor_mE7AAA91A4F09AA9FD5B7DBE6951EB8C810CEB5F8 (U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SWS.navMove/<NextWaypoint>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNextWaypointU3Ed__21__ctor_m6E453EB79A11E5C685E585E91522A7E4BC0B7C59 (U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SWS.navMove/<WaitForDestination>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDestinationU3Ed__22__ctor_m8EE296E2AD37A8E5E255146918487DC542A3C2C2 (U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>::get_Item(System.Int32)
inline UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0 (List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* (*) (List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void SWS.navMove/<ReachedEnd>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReachedEndU3Ed__24__ctor_mF56977403FD89253EE68F46860CCCE58232AE018 (U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::Warp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_Warp_mAD14E576F74544EEDAD0AF097E498C58D3C0E4F5 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_newPosition, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SWS.navMove::NextWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* navMove_NextWaypoint_m84ED935465B6916136F41DF93A1749103C1788D1 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SWS.navMove::Wait(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* navMove_Wait_m0B162A6628F095F6E35AD5F1FDE140BC11904858 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, float ___0_secs, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void SWS.navMove/<Wait>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__28__ctor_m9811AFAFA8CCAF8CCC55CB52B45585A37CB60E03 (U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>::.ctor()
inline void List_1__ctor_mAF642341E1AAB54142F727134B05004DE3A187A5 (List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SWS.navMove::WaitForDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* navMove_WaitForDestination_mDEA23C5579DDF3608B2C0A43D264CEB0B1661C45 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SWS.navMove::ReachedEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* navMove_ReachedEnd_m86AF780B08DD941379D1C3E8053206CF36100E90 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) ;
// System.Void SWS.navMove::GoToWaypoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_GoToWaypoint_m915C98A415DC834E26C8E0DD4A744350DE7AED8F (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void SWS.navMove::OnWaypointChange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_OnWaypointChange_mC19B8E393D1931EEC373C766CF12D2FB5E1783B8 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::get_pathPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_pathPending_mA806A4DC1E06CA32A4E7E71B6846B516EC8C2487 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AI.NavMeshAgent::get_stoppingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// UnityEngine.AI.NavMeshPathStatus UnityEngine.AI.NavMeshAgent::get_pathStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshAgent_get_pathStatus_m86F0B08D0018E3230218F8ED3A7C522A3765B648 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Void SWS.navMove::RandomizeWaypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_RandomizeWaypoints_m3737AAFFF68D4A447C3C362BA1CD8257496F5C85 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) ;
// System.Void SWS.navMove::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_Resume_m72827C8F36175F8160866069EE63615076B45D5E (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) ;
// System.Void SWS.splineMove::StartMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_StartMove_mE68621BCE82BA16DA22CDFB15EB11E3D7302ADC0 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse<UnityEngine.Vector3>(T[])
inline void Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE484430C363DB5BCFD75D35444B3C51C8ABA6E44 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, const RuntimeMethod*))Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE484430C363DB5BCFD75D35444B3C51C8ABA6E44_gshared)(___0_array, method);
}
// System.Void SWS.splineMove::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_Initialize_m50388305C30A0E20B267E42CDF4CCFCE708EBE72 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, int32_t ___0_startAt, const RuntimeMethod* method) ;
// System.Void SWS.splineMove::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_Stop_m8EC503FADA5846EAA957350FA4F7B548028E50F8 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) ;
// System.Void SWS.splineMove::CreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_CreateTween_mD42920EAF28DDCE715F6AD2FE3C889AC0ADA0C36 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenParams__ctor_m5F3F28BA299D184563D1AF7B8B19DBF186915F2E (TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* __this, const RuntimeMethod* method) ;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetSpeedBased(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* TweenParams_SetSpeedBased_m7984A5F846AC411A530E76ACE13A29C2F49BFA10 (TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* __this, bool ___0_isSpeedBased, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<DG.Tweening.LoopType>::.ctor(T)
inline void Nullable_1__ctor_mB3CE09D745DF2DCCD600CDD08EC8F451C3666C65 (Nullable_1_t2C68E51BB6FC0BF5D7980289134BAC137BB0F317* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t2C68E51BB6FC0BF5D7980289134BAC137BB0F317*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___0_value, method);
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetLoops(System.Int32,System.Nullable`1<DG.Tweening.LoopType>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* TweenParams_SetLoops_m8191038E50515B7171130F5A63B58D49A4AE751F (TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* __this, int32_t ___0_loops, Nullable_1_t2C68E51BB6FC0BF5D7980289134BAC137BB0F317 ___1_loopType, const RuntimeMethod* method) ;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetEase(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* TweenParams_SetEase_m5919B6168471BD922DA020F3DF62D1759B42EEA3 (TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_animCurve, const RuntimeMethod* method) ;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetEase(DG.Tweening.Ease,System.Nullable`1<System.Single>,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* TweenParams_SetEase_m595B5405EAB2EF60C8B08934202922724323F568 (TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* __this, int32_t ___0_ease, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___1_overshootOrAmplitude, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___2_period, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenCallback`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void TweenCallback_1__ctor_mD38D0EEEABC05DBE94D229AF084F5FCE239C6EB8 (TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67*, RuntimeObject*, intptr_t, const RuntimeMethod*))TweenCallback_1__ctor_mD38D0EEEABC05DBE94D229AF084F5FCE239C6EB8_gshared)(__this, ___0_object, ___1_method, method);
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnWaypointChange(DG.Tweening.TweenCallback`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* TweenParams_OnWaypointChange_m24647E70B50CB31A9D37DF7AA2DD42AAAED34492 (TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* __this, TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___0_action, const RuntimeMethod* method) ;
// System.Void SWS.splineMove::RandomizeWaypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_RandomizeWaypoints_m16B7F98283D59F3E9AC0542717AFC77AFA6A53C7 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621 (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnStepComplete(DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* TweenParams_OnStepComplete_m2BB5EA797AFB686F45AADDBBD3A986B7C511476C (TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* __this, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___0_action, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnComplete(DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* TweenParams_OnComplete_mE829825D5F74322D13F2B6C4EBF59A8FF2A06191 (TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* __this, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___0_action, const RuntimeMethod* method) ;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnUpdate(DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* TweenParams_OnUpdate_m95CD680B0CA15FFD9098DF88DE81310355DACCE8 (TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* __this, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___0_action, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.ShortcutExtensions::DOLocalPath(UnityEngine.Transform,UnityEngine.Vector3[],System.Single,DG.Tweening.PathType,DG.Tweening.PathMode,System.Int32,System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ShortcutExtensions_DOLocalPath_m00D123733C52DD578549A9F31151194C0CA079BB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___1_path, float ___2_duration, int32_t ___3_pathType, int32_t ___4_pathMode, int32_t ___5_resolution, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___6_gizmoColor, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetAs<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>>(T,DG.Tweening.TweenParams)
inline TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* TweenSettingsExtensions_SetAs_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_m0916DFA9849225A751D8F3FA2B9E653568606B1A (TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ___0_t, TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* ___1_tweenParams, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* (*) (TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA*, TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA*, const RuntimeMethod*))TweenSettingsExtensions_SetAs_TisRuntimeObject_mC2C421FCDDBB1D567904F1437916E9A23E2FAB1D_gshared)(___0_t, ___1_tweenParams, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Boolean,DG.Tweening.AxisConstraint,DG.Tweening.AxisConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* TweenSettingsExtensions_SetOptions_m5E6F9A1145201D9D34824DE50132581D3DDC8DCE (TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ___0_t, bool ___1_closePath, int32_t ___2_lockPosition, int32_t ___3_lockRotation, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Single,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* TweenSettingsExtensions_SetLookAt_mECF406EE42F980E66C745916D2BBDF63F7E4C0D6 (TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ___0_t, float ___1_lookAhead, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___2_forwardDirection, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___3_up, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.ShortcutExtensions::DOPath(UnityEngine.Transform,UnityEngine.Vector3[],System.Single,DG.Tweening.PathType,DG.Tweening.PathMode,System.Int32,System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ShortcutExtensions_DOPath_mB31C78FE35F62166F934D044D3B0B4BAC6304D4B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___1_path, float ___2_duration, int32_t ___3_pathType, int32_t ___4_pathMode, int32_t ___5_resolution, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___6_gizmoColor, const RuntimeMethod* method) ;
// System.Void SWS.splineMove::GoToWaypoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_GoToWaypoint_m639E9794AD5344E086E1C3776A8C7F6B67816040 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void SWS.splineMove::ChangeSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_ChangeSpeed_m8DE14A41F7624B20B4E81A2A09DB21C26EADF06B (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsInitialized(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsInitialized_m8C2B24B55147A6773849EB32D4D00E128CAB211B (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsComplete(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsComplete_mBB619B64C19A85AB4EEEBB3D37D3E720A9E0AF4C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Void SWS.splineMove::ApplyWaypointRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_ApplyWaypointRotation_mD0C95D2CB2CD99B780F457B3231A4D488FBD441D (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// System.Single DG.Tweening.TweenExtensions::PathLength(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_PathLength_m754255B76B1362A6F4EE6CC8F0D7E6E6D6108AB0 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Single DG.Tweening.TweenExtensions::ElapsedPercentage(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_ElapsedPercentage_m2B88D6261A10FE69DA344E2EDF1D72F0DC7C4FA8 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_includeLoops, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::ForceInit(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_ForceInit_mBE21B6CF98B217D09E814F598CCF6659D7660420 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::GotoWaypoint(DG.Tweening.Tween,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_GotoWaypoint_m5408B35F8A7546DDF5FFCAC1247921B6EC4176D4 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, int32_t ___1_waypointIndex, bool ___2_andPlay, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SWS.splineMove::Wait(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* splineMove_Wait_mF2A9146F06444137C3382785A55DF4CC159AF0E4 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, float ___0_secs, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Pause<DG.Tweening.Tweener>(T)
inline Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenExtensions_Pause_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBB24CEBC3EAA08B09D3F8CE4DEFB1B5732660CBF (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ___0_t, const RuntimeMethod* method)
{
	return ((  Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* (*) (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, const RuntimeMethod*))TweenExtensions_Pause_TisRuntimeObject_m36D60DCEDF6720E9E82F204E1AE3B95E9E53C364_gshared)(___0_t, method);
}
// System.Void SWS.splineMove/<Wait>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__44__ctor_m9A0BAC4097D25416A44A6AFF2838FC0965FC47B4 (U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Play<DG.Tweening.Tweener>(T)
inline Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenExtensions_Play_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mEC9AD4279079F6EBC7A352CB642F15EBF145F205 (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ___0_t, const RuntimeMethod* method)
{
	return ((  Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* (*) (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, const RuntimeMethod*))TweenExtensions_Play_TisRuntimeObject_m255A424EE8F1D490359AB0C9CC5D8393F5C2B1B7_gshared)(___0_t, method);
}
// System.Single DG.Tweening.TweenExtensions::Duration(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_Duration_mFF4115983798994675D0431ADD2D333958714222 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_includeLoops, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Tween::set_fullPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_set_fullPosition_m903F28B26102F66CA13DB472121140925FA6495C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::Kill(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Kill_mFFDE4DE45D8A91C357ABFF2F8FA95D412924F466 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_complete, const RuntimeMethod* method) ;
// System.Void SWS.splineMove::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_Resume_mBBC8880AD31BB19C480F760B5597934B21E0E213 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineCore/AxisInputDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisInputDelegate__ctor_m8D7FED117FA4DDE1BBDC08B5158E73E2FACFF7B6 (AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// UnityEngine.Vector2 RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::PlayerJoystickOutputVector()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UITouchPanel_PlayerJoystickOutputVector_mE4F8BB82A29CB4D66702B94828C45FF1B75B60F5_inline (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::OutputVectorValue(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UITouchPanel_OutputVectorValue_mAC28A745BB892701C927691479486BF73A3C0F19_inline (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_outputValue, const RuntimeMethod* method) ;
// System.Void RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchPanel_OnDrag_m472E555CA17FA185C9AB8B1263D6D261383AAE2B (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0__onDragData, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m3A7302F4586F37F7C78EDA2F0C476BAA22672360 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) 
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_t;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___pitch_1 = L_2;
		// yaw = t.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_t;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		float L_5 = L_4.___y_3;
		__this->___yaw_0 = L_5;
		// roll = t.eulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_t;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_6, NULL);
		float L_8 = L_7.___z_4;
		__this->___roll_2 = L_8;
		// x = t.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_t;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		__this->___x_3 = L_11;
		// y = t.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___0_t;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y_3;
		__this->___y_4 = L_14;
		// z = t.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___0_t;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		__this->___z_5 = L_17;
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m561F6D92E99F13444FBAC8D5B1A40762A26219F9 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->___pitch_1;
		float L_1 = __this->___yaw_0;
		float L_2 = __this->___roll_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_0, L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_translation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_3, L_4, NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->___x_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___x_2;
		__this->___x_3 = ((float)il2cpp_codegen_add(L_6, L_8));
		// y += rotatedTranslation.y;
		float L_9 = __this->___y_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___y_3;
		__this->___y_4 = ((float)il2cpp_codegen_add(L_9, L_11));
		// z += rotatedTranslation.z;
		float L_12 = __this->___z_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___z_4;
		__this->___z_5 = ((float)il2cpp_codegen_add(L_12, L_14));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mFDC0E1CA19B6791CDB6EE8AC262944DC1143FCF9 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* ___0_target, float ___1_positionLerpPct, float ___2_rotationLerpPct, const RuntimeMethod* method) 
{
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->___yaw_0;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_1 = ___0_target;
		NullCheck(L_1);
		float L_2 = L_1->___yaw_0;
		float L_3 = ___2_rotationLerpPct;
		float L_4;
		L_4 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_0, L_2, L_3, NULL);
		__this->___yaw_0 = L_4;
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->___pitch_1;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_6 = ___0_target;
		NullCheck(L_6);
		float L_7 = L_6->___pitch_1;
		float L_8 = ___2_rotationLerpPct;
		float L_9;
		L_9 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_5, L_7, L_8, NULL);
		__this->___pitch_1 = L_9;
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->___roll_2;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_11 = ___0_target;
		NullCheck(L_11);
		float L_12 = L_11->___roll_2;
		float L_13 = ___2_rotationLerpPct;
		float L_14;
		L_14 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_10, L_12, L_13, NULL);
		__this->___roll_2 = L_14;
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->___x_3;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_16 = ___0_target;
		NullCheck(L_16);
		float L_17 = L_16->___x_3;
		float L_18 = ___1_positionLerpPct;
		float L_19;
		L_19 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_15, L_17, L_18, NULL);
		__this->___x_3 = L_19;
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->___y_4;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_21 = ___0_target;
		NullCheck(L_21);
		float L_22 = L_21->___y_4;
		float L_23 = ___1_positionLerpPct;
		float L_24;
		L_24 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_20, L_22, L_23, NULL);
		__this->___y_4 = L_24;
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->___z_5;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_26 = ___0_target;
		NullCheck(L_26);
		float L_27 = L_26->___z_5;
		float L_28 = ___1_positionLerpPct;
		float L_29;
		L_29 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_25, L_27, L_28, NULL);
		__this->___z_5 = L_29;
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_m03320D760E52E809272776B58C7E741B2EE1D73E (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) 
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_t;
		float L_1 = __this->___pitch_1;
		float L_2 = __this->___yaw_0;
		float L_3 = __this->___roll_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_4, NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_t;
		float L_6 = __this->___x_3;
		float L_7 = __this->___y_4;
		float L_8 = __this->___z_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m33568E59E39C953BDE6CD28D35A34BE52AE25504 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, const RuntimeMethod* method) 
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
// System.Void SWS.EventCollisionTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCollisionTrigger_OnTriggerEnter_m58ED29661A10D4CCE9DF5DC90C3A9FAC2F4DAB42 (EventCollisionTrigger_t4C1630720FC99B275EE1787D892443F1A911718E* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	{
		// if (!onTrigger) return;
		bool L_0 = __this->___onTrigger_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!onTrigger) return;
		return;
	}

IL_0009:
	{
		// myEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___myEvent_6;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// }
		return;
	}
}
// System.Void SWS.EventCollisionTrigger::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCollisionTrigger_OnCollisionEnter_m4AFEB4E32F71B2B807503A92955CE56E7CF27AEB (EventCollisionTrigger_t4C1630720FC99B275EE1787D892443F1A911718E* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_other, const RuntimeMethod* method) 
{
	{
		// if (!onCollision) return;
		bool L_0 = __this->___onCollision_5;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!onCollision) return;
		return;
	}

IL_0009:
	{
		// myEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___myEvent_6;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// }
		return;
	}
}
// System.Void SWS.EventCollisionTrigger::ApplyForce(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCollisionTrigger_ApplyForce_m2C224B70B43C155BA248F070A167FB47DB07A079 (EventCollisionTrigger_t4C1630720FC99B275EE1787D892443F1A911718E* __this, int32_t ___0_power, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisnavMove_tF36264AF2CD464A692E7D320498558A26423BC25_m8BC48D087B4AEC1032BCFE1C999743E1DD2C09CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_2 = NULL;
	int32_t V_3 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_4 = NULL;
	navMove_tF36264AF2CD464A692E7D320498558A26423BC25* V_5 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_6 = NULL;
	{
		// Vector3 position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// float radius = 5f;
		V_1 = (5.0f);
		// Collider[] colliders = Physics.OverlapSphere(position, radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4;
		L_4 = Physics_OverlapSphere_mCFA1C44458F8548C911C16F82077DA4C35D43F69(L_2, L_3, NULL);
		// foreach (Collider hit in colliders)
		V_2 = L_4;
		V_3 = 0;
		goto IL_0079;
	}

IL_001e:
	{
		// foreach (Collider hit in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		// navMove move = hit.GetComponent<navMove>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = V_4;
		NullCheck(L_9);
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_10;
		L_10 = Component_GetComponent_TisnavMove_tF36264AF2CD464A692E7D320498558A26423BC25_m8BC48D087B4AEC1032BCFE1C999743E1DD2C09CC(L_9, Component_GetComponent_TisnavMove_tF36264AF2CD464A692E7D320498558A26423BC25_m8BC48D087B4AEC1032BCFE1C999743E1DD2C09CC_RuntimeMethod_var);
		V_5 = L_10;
		// if (move != null)
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_11 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// move.Stop();
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_13 = V_5;
		NullCheck(L_13);
		navMove_Stop_mA065B37494676CBC3FD6689FF5A3D96B4A21531F(L_13, NULL);
		// hit.GetComponent<NavMeshAgent>().enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_14 = V_4;
		NullCheck(L_14);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_15;
		L_15 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(L_14, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		NullCheck(L_15);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_15, (bool)0, NULL);
		// hit.isTrigger = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16 = V_4;
		NullCheck(L_16);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_16, (bool)0, NULL);
	}

IL_0052:
	{
		// Rigidbody rb = hit.GetComponent<Rigidbody>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_17 = V_4;
		NullCheck(L_17);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18;
		L_18 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_17, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_6 = L_18;
		// if (rb != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_0075;
		}
	}
	{
		// rb.AddExplosionForce(power, position, radius, 100.0F);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21 = V_6;
		int32_t L_22 = ___0_power;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		float L_24 = V_1;
		NullCheck(L_21);
		Rigidbody_AddExplosionForce_mD8FF6CAA6FF6749259FB95762B2A521CF8483163(L_21, ((float)L_22), L_23, L_24, (100.0f), NULL);
	}

IL_0075:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0079:
	{
		// foreach (Collider hit in colliders)
		int32_t L_26 = V_3;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_27 = V_2;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SWS.EventCollisionTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCollisionTrigger__ctor_mD6442BAE50531AD74953558D76077496D2FEE0C4 (EventCollisionTrigger_t4C1630720FC99B275EE1787D892443F1A911718E* __this, const RuntimeMethod* method) 
{
	{
		// public bool onTrigger = true;
		__this->___onTrigger_4 = (bool)1;
		// public bool onCollision = true;
		__this->___onCollision_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SWS.MoveAnimator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAnimator_Start_m9D5C96B2F9CEDA60E594CAFEB8809B4730960D8B (MoveAnimator_tBEE02C8596B1FCC7DEFE79ABEF051FD27D70A100* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TissplineMove_t3B37A328F6D49808D678F015EA04450552912754_mA0A3AD4DC3BEBAAA2047C706D19656F1D624E6D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___animator_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_6), (void*)L_0);
		// sMove = GetComponent<splineMove>();
		splineMove_t3B37A328F6D49808D678F015EA04450552912754* L_1;
		L_1 = Component_GetComponent_TissplineMove_t3B37A328F6D49808D678F015EA04450552912754_mA0A3AD4DC3BEBAAA2047C706D19656F1D624E6D7(__this, Component_GetComponent_TissplineMove_t3B37A328F6D49808D678F015EA04450552912754_mA0A3AD4DC3BEBAAA2047C706D19656F1D624E6D7_RuntimeMethod_var);
		__this->___sMove_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sMove_4), (void*)L_1);
		// if (!sMove)
		splineMove_t3B37A328F6D49808D678F015EA04450552912754* L_2 = __this->___sMove_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		// nAgent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_4;
		L_4 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___nAgent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nAgent_5), (void*)L_4);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void SWS.MoveAnimator::OnAnimatorMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAnimator_OnAnimatorMove_m8FD93E1D6D9A773B8A8ED5E642033A1D2AF4A239 (MoveAnimator_tBEE02C8596B1FCC7DEFE79ABEF051FD27D70A100* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float G_B5_0 = 0.0f;
	{
		// float speed = 0f;
		V_0 = (0.0f);
		// float angle = 0f;
		V_1 = (0.0f);
		// if (sMove)
		splineMove_t3B37A328F6D49808D678F015EA04450552912754* L_0 = __this->___sMove_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0081;
		}
	}
	{
		// speed = sMove.tween == null || !sMove.tween.IsPlaying() ? 0f : sMove.speed;
		splineMove_t3B37A328F6D49808D678F015EA04450552912754* L_2 = __this->___sMove_4;
		NullCheck(L_2);
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_3 = L_2->___tween_27;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		splineMove_t3B37A328F6D49808D678F015EA04450552912754* L_4 = __this->___sMove_4;
		NullCheck(L_4);
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_5 = L_4->___tween_27;
		bool L_6;
		L_6 = TweenExtensions_IsPlaying_m32EF28DEB59B931FA4607BAC3BED0DE275A1D843(L_5, NULL);
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		splineMove_t3B37A328F6D49808D678F015EA04450552912754* L_7 = __this->___sMove_4;
		NullCheck(L_7);
		float L_8 = L_7->___speed_15;
		G_B5_0 = L_8;
		goto IL_004a;
	}

IL_0045:
	{
		G_B5_0 = (0.0f);
	}

IL_004a:
	{
		V_0 = G_B5_0;
		// angle = (transform.eulerAngles.y - lastRotY) * 10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_9, NULL);
		float L_11 = L_10.___y_3;
		float L_12 = __this->___lastRotY_7;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_11, L_12)), (10.0f)));
		// lastRotY = transform.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_13, NULL);
		float L_15 = L_14.___y_3;
		__this->___lastRotY_7 = L_15;
		goto IL_00d4;
	}

IL_0081:
	{
		// speed = nAgent.velocity.magnitude;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_16 = __this->___nAgent_5;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = NavMeshAgent_get_velocity_m028219D0E4678D727F00C53AE3DCBCF29AF04DA7(L_16, NULL);
		V_3 = L_17;
		float L_18;
		L_18 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		V_0 = L_18;
		// Vector3 velocity = Quaternion.Inverse(transform.rotation) * nAgent.desiredVelocity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_20, NULL);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_22 = __this->___nAgent_5;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = NavMeshAgent_get_desiredVelocity_m8CF3F6E3FA8EE86397DD02146AA6048949B74F52(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_21, L_23, NULL);
		V_2 = L_24;
		// angle = Mathf.Atan2(velocity.x, velocity.z) * 180.0f / 3.14159f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		float L_26 = L_25.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		float L_28 = L_27.___z_4;
		float L_29;
		L_29 = atan2f(L_26, L_28);
		V_1 = ((float)(((float)il2cpp_codegen_multiply(L_29, (180.0f)))/(3.14159012f)));
	}

IL_00d4:
	{
		// animator.SetFloat("Speed", speed);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = __this->___animator_6;
		float L_31 = V_0;
		NullCheck(L_30);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_30, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_31, NULL);
		// animator.SetFloat("Direction", angle, 0.15f, Time.deltaTime);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32 = __this->___animator_6;
		float L_33 = V_1;
		float L_34;
		L_34 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_32);
		Animator_SetFloat_m018FC1B8BBA989887545ABEF5FB611087F23A4C0(L_32, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, L_33, (0.150000006f), L_34, NULL);
		// }
		return;
	}
}
// System.Void SWS.MoveAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAnimator__ctor_m9EE3BA3D0788E3B9F90E6977533416A00A63BF0E (MoveAnimator_tBEE02C8596B1FCC7DEFE79ABEF051FD27D70A100* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SWS.PathIndicator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathIndicator_Start_m07F9E3D08B4EF98943AC45424C54B1ACB01759DB (PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE45193771A896F4396DC33FFDCAA7C061048A5D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pSys = GetComponentInChildren<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0;
		L_0 = Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62(__this, Component_GetComponentInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m7FE20EC51F5F0CD242B94967CCF5B8E32BA9FC62_RuntimeMethod_var);
		__this->___pSys_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pSys_5), (void*)L_0);
		// StartCoroutine("EmitParticles");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralE45193771A896F4396DC33FFDCAA7C061048A5D4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SWS.PathIndicator::EmitParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PathIndicator_EmitParticles_m34B47DC90F711FB560DAE112E998D41796466964 (PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634* L_0 = (U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634*)il2cpp_codegen_object_new(U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEmitParticlesU3Ed__3__ctor_m0A02A696DB6CC90C1F1ED0E729DCDD7A01DD7F47(L_0, 0, NULL);
		U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SWS.PathIndicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathIndicator__ctor_m568A23347ACCB933F5DF6F38C1162E8D144975F6 (PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SWS.PathIndicator/<EmitParticles>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEmitParticlesU3Ed__3__ctor_m0A02A696DB6CC90C1F1ED0E729DCDD7A01DD7F47 (U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SWS.PathIndicator/<EmitParticles>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEmitParticlesU3Ed__3_System_IDisposable_Dispose_mF98EA5498C20723092BA17440762442ABB97E894 (U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SWS.PathIndicator/<EmitParticles>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEmitParticlesU3Ed__3_MoveNext_mB5467434DA469B8BA3EA8A0A653047DCF7B43A58 (U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0* V_1 = NULL;
	float V_2 = 0.0f;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_00a0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_3 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0044:
	{
		// float rot = (transform.eulerAngles.y + modRotation) * Mathf.Deg2Rad;
		PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_5, NULL);
		float L_7 = L_6.___y_3;
		PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->___modRotation_4;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_7, L_9)), (0.0174532924f)));
		// var pMain = pSys.main;
		PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0* L_10 = V_1;
		NullCheck(L_10);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = L_10->___pSys_5;
		NullCheck(L_11);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_12;
		L_12 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_11, NULL);
		V_3 = L_12;
		// pMain.startRotation = rot;
		float L_13 = V_2;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_14;
		L_14 = MinMaxCurve_op_Implicit_m133028E91CF2F823F5E20F6B19A3332A02404086(L_13, NULL);
		MainModule_set_startRotation_m8D09FD13401B188EC3C20C489CFA1EDDA3B43079((&V_3), L_14, NULL);
		// pSys.Emit(1);
		PathIndicator_t1D72D7228CBEBF99136533C97266AC11B60D03B0* L_15 = V_1;
		NullCheck(L_15);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_16 = L_15->___pSys_5;
		NullCheck(L_16);
		ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D(L_16, 1, NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00a0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0044;
	}
}
// System.Object SWS.PathIndicator/<EmitParticles>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEmitParticlesU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD8EB8FBDBB2CAC69FDE281E84CB7C8B852B9CD55 (U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SWS.PathIndicator/<EmitParticles>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEmitParticlesU3Ed__3_System_Collections_IEnumerator_Reset_mC55D33C80D452BCB16BD7CE51D88ED96F87EB353 (U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEmitParticlesU3Ed__3_System_Collections_IEnumerator_Reset_mC55D33C80D452BCB16BD7CE51D88ED96F87EB353_RuntimeMethod_var)));
	}
}
// System.Object SWS.PathIndicator/<EmitParticles>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEmitParticlesU3Ed__3_System_Collections_IEnumerator_get_Current_m7ECC324B0387954D10EFDEA90469B8D6ED8EC147 (U3CEmitParticlesU3Ed__3_tD335BDFFD622F6B9C89AB22FA3E1AE0E659A1634* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SWS.PathRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathRenderer_Start_m50CF09B878A982ED1A333B736CD5BFD87950883F (PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPathManager_tE11816416738EE9AFB82A176CC0599C045DA0931_mB554628372BD36B803FFC35806C3977AA84FA74E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral379294FAA2DF5EE40C7984C5B09CC7E099CE5125);
		s_Il2CppMethodInitialized = true;
	}
	{
		// line = GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0;
		L_0 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___line_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___line_7), (void*)L_0);
		// path = GetComponent<PathManager>();
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_1;
		L_1 = Component_GetComponent_TisPathManager_tE11816416738EE9AFB82A176CC0599C045DA0931_mB554628372BD36B803FFC35806C3977AA84FA74E(__this, Component_GetComponent_TisPathManager_tE11816416738EE9AFB82A176CC0599C045DA0931_mB554628372BD36B803FFC35806C3977AA84FA74E_RuntimeMethod_var);
		__this->___path_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_6), (void*)L_1);
		// if (path) StartCoroutine("StartRenderer");
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_2 = __this->___path_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// if (path) StartCoroutine("StartRenderer");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral379294FAA2DF5EE40C7984C5B09CC7E099CE5125, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SWS.PathRenderer::StartRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PathRenderer_StartRenderer_m39B5216FEAA6BF5A19A50EA587619F24CA3FC291 (PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D* L_0 = (U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D*)il2cpp_codegen_object_new(U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartRendererU3Ed__6__ctor_mEAA3191A24B9E6C1186F87D2927082C1DFE2942E(L_0, 0, NULL);
		U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SWS.PathRenderer::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathRenderer_Render_m155EDD61E241356D50A5BB8B9F94BC643BC368B7 (PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	{
		// spacing = Mathf.Clamp01(spacing);
		float L_0 = __this->___spacing_5;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		__this->___spacing_5 = L_1;
		// if (spacing == 0) spacing = 0.05f;
		float L_2 = __this->___spacing_5;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		// if (spacing == 0) spacing = 0.05f;
		__this->___spacing_5 = (0.0500000007f);
	}

IL_0029:
	{
		// List<Vector3> list = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_3, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_3;
		// list.AddRange(path.GetPathPoints());
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_4 = V_0;
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_5 = __this->___path_6;
		NullCheck(L_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6;
		L_6 = VirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, bool >::Invoke(6 /* UnityEngine.Vector3[] SWS.PathManager::GetPathPoints(System.Boolean) */, L_5, (bool)0);
		NullCheck(L_4);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_4, (RuntimeObject*)L_6, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// if (path.drawCurved)
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_7 = __this->___path_6;
		NullCheck(L_7);
		bool L_8 = L_7->___drawCurved_5;
		if (!L_8)
		{
			goto IL_0083;
		}
	}
	{
		// list.Insert(0, list[0]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_9 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = V_0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_10, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F(L_9, 0, L_11, List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_RuntimeMethod_var);
		// list.Add(list[list.Count - 1]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_14, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_13, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_12, L_16, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// points = list.ToArray();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_17 = V_0;
		NullCheck(L_17);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18;
		L_18 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_17, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		__this->___points_8 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_8), (void*)L_18);
		// DrawCurved();
		PathRenderer_DrawCurved_m3E8BDE37767236BC6C6957D01674969C6C720626(__this, NULL);
		return;
	}

IL_0083:
	{
		// points = list.ToArray();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_19 = V_0;
		NullCheck(L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20;
		L_20 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_19, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		__this->___points_8 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_8), (void*)L_20);
		// DrawLinear();
		PathRenderer_DrawLinear_m18CF740F0D0E3615EBE6C930D30F4CDA9C3EB212(__this, NULL);
		// }
		return;
	}
}
// System.Void SWS.PathRenderer::DrawCurved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathRenderer_DrawCurved_m3E8BDE37767236BC6C6957D01674969C6C720626 (PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// int size = Mathf.RoundToInt(1f / spacing) + 1;
		float L_0 = __this->___spacing_5;
		int32_t L_1;
		L_1 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)((1.0f)/L_0)), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// line.positionCount = size;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___line_7;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_2, L_3, NULL);
		// float t = 0f;
		V_1 = (0.0f);
		// int i = 0;
		V_2 = 0;
		goto IL_004f;
	}

IL_002a:
	{
		// line.SetPosition(i, WaypointManager.GetPoint(points, t));
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4 = __this->___line_7;
		int32_t L_5 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->___points_8;
		float L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = WaypointManager_GetPoint_mF6807E60DFF8AF4FA3B0AC63C14066D027112409(L_6, L_7, NULL);
		NullCheck(L_4);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_4, L_5, L_8, NULL);
		// t += spacing;
		float L_9 = V_1;
		float L_10 = __this->___spacing_5;
		V_1 = ((float)il2cpp_codegen_add(L_9, L_10));
		// i++;
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004f:
	{
		// while (i < size)
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SWS.PathRenderer::DrawLinear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathRenderer_DrawLinear_m18CF740F0D0E3615EBE6C930D30F4CDA9C3EB212 (PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// line.positionCount = points.Length;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___line_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->___points_8;
		NullCheck(L_1);
		NullCheck(L_0);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		// float t = 0f;
		V_0 = (0.0f);
		// int i = 0;
		V_1 = 0;
		goto IL_0042;
	}

IL_001d:
	{
		// line.SetPosition(i, points[i]);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___line_7;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = __this->___points_8;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_2, L_3, L_7, NULL);
		// t += spacing;
		float L_8 = V_0;
		float L_9 = __this->___spacing_5;
		V_0 = ((float)il2cpp_codegen_add(L_8, L_9));
		// i++;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0042:
	{
		// while (i < points.Length)
		int32_t L_11 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = __this->___points_8;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SWS.PathRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathRenderer__ctor_mF0ED6C89DDC4FF05E0B6880542F3A882A942D46D (PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* __this, const RuntimeMethod* method) 
{
	{
		// public float spacing = 0.05f;
		__this->___spacing_5 = (0.0500000007f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SWS.PathRenderer/<StartRenderer>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRendererU3Ed__6__ctor_mEAA3191A24B9E6C1186F87D2927082C1DFE2942E (U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SWS.PathRenderer/<StartRenderer>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRendererU3Ed__6_System_IDisposable_Dispose_m335E25BE07DD3C4836B46D78A7776CC0DF70EB89 (U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SWS.PathRenderer/<StartRenderer>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartRendererU3Ed__6_MoveNext_m05EBA1AA52503AA2CEF03C29A2CCB81007BC3002 (U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Render();
		PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* L_4 = V_1;
		NullCheck(L_4);
		PathRenderer_Render_m155EDD61E241356D50A5BB8B9F94BC643BC368B7(L_4, NULL);
		// if (onUpdate)
		PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->___onUpdate_4;
		if (!L_6)
		{
			goto IL_004b;
		}
	}

IL_002c:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Render();
		PathRenderer_t9B1C9E91C368CFC823C34B1AA1A7EC81DB5D9BB3* L_7 = V_1;
		NullCheck(L_7);
		PathRenderer_Render_m155EDD61E241356D50A5BB8B9F94BC643BC368B7(L_7, NULL);
		// while (true)
		goto IL_002c;
	}

IL_004b:
	{
		// }
		return (bool)0;
	}
}
// System.Object SWS.PathRenderer/<StartRenderer>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartRendererU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC89E14C30354B1CD5939E4AD1F52374A799F6129 (U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SWS.PathRenderer/<StartRenderer>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRendererU3Ed__6_System_Collections_IEnumerator_Reset_mC1C83465CA746A21D33787640141886D9639AEDF (U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartRendererU3Ed__6_System_Collections_IEnumerator_Reset_mC1C83465CA746A21D33787640141886D9639AEDF_RuntimeMethod_var)));
	}
}
// System.Object SWS.PathRenderer/<StartRenderer>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartRendererU3Ed__6_System_Collections_IEnumerator_get_Current_mD1D34EB9CD44CC9088379766F65848042DCB440E (U3CStartRendererU3Ed__6_t9ABBEA8A2746B228423E14B0C2B6371033720E0D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SWS.BezierPathManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPathManager_Awake_mD93594B290AD90F122071EDA57AA52200B5F1E39 (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WaypointManager.AddPath(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		WaypointManager_AddPath_mC4D93EB0E933E0407FEF3526B79A8E9E76F9C69B(L_0, NULL);
		// if (bPoints == null || bPoints.Count == 0)
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_1 = __this->___bPoints_14;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_2 = __this->___bPoints_14;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_inline(L_2, List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0021;
		}
	}

IL_0020:
	{
		// return;
		return;
	}

IL_0021:
	{
		// CalculatePath();
		BezierPathManager_CalculatePath_m884198EBABAD8C8A01571884D918ACEF0CC9FECD(__this, NULL);
		// }
		return;
	}
}
// System.Void SWS.BezierPathManager::Create(UnityEngine.Transform[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPathManager_Create_m71DC240067FDAA95261F39FFE26BEA066E6280D6 (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___0_waypoints, bool ___1_makeChildren, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE187CA52367A501FE32C688ED41EBB6733957C77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mEBA925FF98E7A9EAFBDFB1B616ED0F52BAB67B15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E2EEA2C23050B6F5BCB167622E9CF168662B288);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* V_2 = NULL;
	{
		// if (waypoints.Length < 2)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = ___0_waypoints;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		// Debug.LogWarning("Not enough waypoints placed - minimum is 2. Cancelling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral6E2EEA2C23050B6F5BCB167622E9CF168662B288, NULL);
		// return;
		return;
	}

IL_0011:
	{
		// if (makeChildren)
		bool L_1 = ___1_makeChildren;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// for (int i = 0; i < waypoints.Length; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0018:
	{
		// waypoints[i].parent = transform;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = ___0_waypoints;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_5, L_6, NULL);
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_8 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = ___0_waypoints;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0018;
		}
	}

IL_0030:
	{
		// bPoints.Clear();
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_10 = __this->___bPoints_14;
		NullCheck(L_10);
		List_1_Clear_mEBA925FF98E7A9EAFBDFB1B616ED0F52BAB67B15_inline(L_10, List_1_Clear_mEBA925FF98E7A9EAFBDFB1B616ED0F52BAB67B15_RuntimeMethod_var);
		// for(int i = 0; i < waypoints.Length; i++)
		V_1 = 0;
		goto IL_0092;
	}

IL_003f:
	{
		// BezierPoint point = new BezierPoint();
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_11 = (BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268*)il2cpp_codegen_object_new(BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		BezierPoint__ctor_m8B2BCF59EBFF6ADBCD62D3BD2B9F1AAF1D11F57A(L_11, NULL);
		V_2 = L_11;
		// point.wp = waypoints[i];
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_12 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = ___0_waypoints;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		L_12->___wp_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___wp_0), (void*)L_16);
		// point.cp = new Transform[2];
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_17 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_18 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)2);
		NullCheck(L_17);
		L_17->___cp_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___cp_1), (void*)L_18);
		// point.cp[0] = point.wp.GetChild(0);
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_19 = V_2;
		NullCheck(L_19);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_20 = L_19->___cp_1;
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_21 = V_2;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___wp_0;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_22, 0, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_23);
		// point.cp[1] = point.wp.GetChild(1);
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_24 = V_2;
		NullCheck(L_24);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_25 = L_24->___cp_1;
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = L_26->___wp_0;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_27, 1, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_28);
		// bPoints.Add(point);
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_29 = __this->___bPoints_14;
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_30 = V_2;
		NullCheck(L_29);
		List_1_Add_mE187CA52367A501FE32C688ED41EBB6733957C77_inline(L_29, L_30, List_1_Add_mE187CA52367A501FE32C688ED41EBB6733957C77_RuntimeMethod_var);
		// for(int i = 0; i < waypoints.Length; i++)
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0092:
	{
		// for(int i = 0; i < waypoints.Length; i++)
		int32_t L_32 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_33 = ___0_waypoints;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// CalculatePath();
		BezierPathManager_CalculatePath_m884198EBABAD8C8A01571884D918ACEF0CC9FECD(__this, NULL);
		// }
		return;
	}
}
// System.Void SWS.BezierPathManager::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPathManager_OnDrawGizmos_m1E45A75D4232AA5D1C5363340ACBD505BF3902A8 (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// if (bPoints.Count <= 0) return;
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_0 = __this->___bPoints_14;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_inline(L_0, List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// if (bPoints.Count <= 0) return;
		return;
	}

IL_000f:
	{
		// Vector3 start = bPoints[0].wp.position;
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_2 = __this->___bPoints_14;
		NullCheck(L_2);
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_3;
		L_3 = List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C(L_2, 0, List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___wp_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_0 = L_5;
		// Vector3 end = bPoints[bPoints.Count - 1].wp.position;
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_6 = __this->___bPoints_14;
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_7 = __this->___bPoints_14;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_inline(L_7, List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		NullCheck(L_6);
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_9;
		L_9 = List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9->___wp_0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		V_1 = L_11;
		// Gizmos.color = color1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ((PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931*)__this)->___color1_7;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_12, NULL);
		// Gizmos.DrawWireCube(start, size * GetHandleSize(start) * 1.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ((PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931*)__this)->___size_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16;
		L_16 = VirtualFuncInvoker1< float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Single SWS.PathManager::GetHandleSize(UnityEngine.Vector3) */, __this, L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, (1.5f), NULL);
		Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_13, L_18, NULL);
		// Gizmos.DrawWireCube(end, size * GetHandleSize(end) * 1.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ((PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931*)__this)->___size_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		float L_22;
		L_22 = VirtualFuncInvoker1< float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Single SWS.PathManager::GetHandleSize(UnityEngine.Vector3) */, __this, L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, (1.5f), NULL);
		Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_19, L_24, NULL);
		// Gizmos.color = color2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ((PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931*)__this)->___color2_8;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_25, NULL);
		// for (int i = 1; i < bPoints.Count - 1; i++)
		V_2 = 1;
		goto IL_00e9;
	}

IL_00a7:
	{
		// Gizmos.DrawWireSphere(bPoints[i].wp.position, radius * GetHandleSize(bPoints[i].wp.position));
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_26 = __this->___bPoints_14;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_28;
		L_28 = List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C(L_26, L_27, List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = L_28->___wp_0;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		float L_31 = ((PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931*)__this)->___radius_10;
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_32 = __this->___bPoints_14;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_34;
		L_34 = List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C(L_32, L_33, List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var);
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = L_34->___wp_0;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		float L_37;
		L_37 = VirtualFuncInvoker1< float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Single SWS.PathManager::GetHandleSize(UnityEngine.Vector3) */, __this, L_36);
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_30, ((float)il2cpp_codegen_multiply(L_31, L_37)), NULL);
		// for (int i = 1; i < bPoints.Count - 1; i++)
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00e9:
	{
		// for (int i = 1; i < bPoints.Count - 1; i++)
		int32_t L_39 = V_2;
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_40 = __this->___bPoints_14;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_inline(L_40, List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_41, 1)))))
		{
			goto IL_00a7;
		}
	}
	{
		// if (drawCurved && bPoints.Count >= 2)
		bool L_42 = ((PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931*)__this)->___drawCurved_5;
		if (!L_42)
		{
			goto IL_011b;
		}
	}
	{
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_43 = __this->___bPoints_14;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_inline(L_43, List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		if ((((int32_t)L_44) < ((int32_t)2)))
		{
			goto IL_011b;
		}
	}
	{
		// WaypointManager.DrawCurved(pathPoints);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_45 = __this->___pathPoints_13;
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		WaypointManager_DrawCurved_m2D67C19A40B17A3F97162A6AC58350002C733EC3(L_45, NULL);
		return;
	}

IL_011b:
	{
		// WaypointManager.DrawStraight(pathPoints);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = __this->___pathPoints_13;
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		WaypointManager_DrawStraight_m3542414F6DF4E3A5F43B0B1C2D0DD67321D202CD(L_46, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3[] SWS.BezierPathManager::GetPathPoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* BezierPathManager_GetPathPoints_m09499043546ECC9C3FEFA4FCA3B922A64FE8981A (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, bool ___0_local, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if(local)
		bool L_0 = ___0_local;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		// Vector3[] localPathPoints = new Vector3[pathPoints.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->___pathPoints_13;
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		V_0 = L_2;
		// for (int i = 0; i < localPathPoints.Length; i++)
		V_1 = 0;
		goto IL_0037;
	}

IL_0015:
	{
		// localPathPoints[i] = transform.InverseTransformPoint(pathPoints[i]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_0;
		int32_t L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->___pathPoints_13;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_5, L_9, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		// for (int i = 0; i < localPathPoints.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < localPathPoints.Length; i++)
		int32_t L_12 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// return localPathPoints;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_0;
		return L_14;
	}

IL_003f:
	{
		// return pathPoints;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = __this->___pathPoints_13;
		return L_15;
	}
}
// System.Int32 SWS.BezierPathManager::GetWaypointCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BezierPathManager_GetWaypointCount_m8E555670C855E3F32BC6D3123E786443AF4067EF (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return bPoints.Count;
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_0 = __this->___bPoints_14;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_inline(L_0, List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Transform SWS.BezierPathManager::GetWaypoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BezierPathManager_GetWaypoint_m53BCE58C6A8C1D9763C648BBC4498918CA59CFDE (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return bPoints[index].wp;
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_0 = __this->___bPoints_14;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_2;
		L_2 = List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C(L_0, L_1, List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2->___wp_0;
		return L_3;
	}
}
// System.Int32 SWS.BezierPathManager::GetWaypointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BezierPathManager_GetWaypointIndex_mBB44BCC2FF5B73749D5B32926A85297257EF1F23 (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, int32_t ___0_point, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int index = -1;
		V_0 = (-1);
		// int summedPoints = 0;
		V_1 = 0;
		// int defaultPoints = 10;
		V_2 = ((int32_t)10);
		// for(int i = 0; i < segmentDetail.Count; i++)
		V_3 = 0;
		goto IL_0049;
	}

IL_000b:
	{
		// if(point == summedPoints)
		int32_t L_0 = ___0_point;
		int32_t L_1 = V_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0013;
		}
	}
	{
		// index = i;
		int32_t L_2 = V_3;
		V_0 = L_2;
		// break;
		goto IL_0057;
	}

IL_0013:
	{
		// if (customDetail) summedPoints += Mathf.CeilToInt(segmentDetail[i] * defaultPoints);
		bool L_3 = __this->___customDetail_19;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// if (customDetail) summedPoints += Mathf.CeilToInt(segmentDetail[i] * defaultPoints);
		int32_t L_4 = V_1;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_5 = __this->___segmentDetail_20;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		float L_7;
		L_7 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_5, L_6, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		int32_t L_8 = V_2;
		int32_t L_9;
		L_9 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)il2cpp_codegen_multiply(L_7, ((float)L_8))), NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, L_9));
		goto IL_0045;
	}

IL_0034:
	{
		// else summedPoints += Mathf.CeilToInt(pathDetail * defaultPoints);
		int32_t L_10 = V_1;
		float L_11 = __this->___pathDetail_18;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)il2cpp_codegen_multiply(L_11, ((float)L_12))), NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, L_13));
	}

IL_0045:
	{
		// for(int i = 0; i < segmentDetail.Count; i++)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0049:
	{
		// for(int i = 0; i < segmentDetail.Count; i++)
		int32_t L_15 = V_3;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_16 = __this->___segmentDetail_20;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_16, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_000b;
		}
	}

IL_0057:
	{
		// return index;
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.Void SWS.BezierPathManager::CalculatePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPathManager_CalculatePath_m884198EBABAD8C8A01571884D918ACEF0CC9FECD (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Distinct_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m177BCD39E5020FD1CD74BAD4CBFCE70CC7CF5E49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	int32_t V_1 = 0;
	BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* V_2 = NULL;
	float V_3 = 0.0f;
	{
		// List<Vector3> temp = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < bPoints.Count - 1; i++)
		V_1 = 0;
		goto IL_0091;
	}

IL_000d:
	{
		// BezierPoint bp = bPoints[i];
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_1 = __this->___bPoints_14;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_3;
		L_3 = List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C(L_1, L_2, List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var);
		V_2 = L_3;
		// float detail = pathDetail;
		float L_4 = __this->___pathDetail_18;
		V_3 = L_4;
		// if (customDetail)
		bool L_5 = __this->___customDetail_19;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// detail = segmentDetail[i];
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_6 = __this->___segmentDetail_20;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		float L_8;
		L_8 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_6, L_7, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_3 = L_8;
	}

IL_0036:
	{
		// temp.AddRange(GetPoints(bp.wp.position,
		//                 bp.cp[1].position,
		//                 bPoints[i + 1].cp[0].position,
		//                 bPoints[i + 1].wp.position,
		//                 detail));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_9 = V_0;
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_10 = V_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10->___wp_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_13 = V_2;
		NullCheck(L_13);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14 = L_13->___cp_1;
		NullCheck(L_14);
		int32_t L_15 = 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_18 = __this->___bPoints_14;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_20;
		L_20 = List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C(L_18, ((int32_t)il2cpp_codegen_add(L_19, 1)), List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var);
		NullCheck(L_20);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_21 = L_20->___cp_1;
		NullCheck(L_21);
		int32_t L_22 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_25 = __this->___bPoints_14;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* L_27;
		L_27 = List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), List_1_get_Item_m0DD8ECB17987DE3CF51FE9B80BAECA3E4092E15C_RuntimeMethod_var);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = L_27->___wp_0;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = V_3;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_31;
		L_31 = BezierPathManager_GetPoints_mB73E4C9B08F3B71E5094CE88D4C6DB6B56BAFE63(__this, L_12, L_17, L_24, L_29, L_30, NULL);
		NullCheck(L_9);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_9, L_31, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// for (int i = 0; i < bPoints.Count - 1; i++)
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0091:
	{
		// for (int i = 0; i < bPoints.Count - 1; i++)
		int32_t L_33 = V_1;
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_34 = __this->___bPoints_14;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_inline(L_34, List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_35, 1)))))
		{
			goto IL_000d;
		}
	}
	{
		// pathPoints = temp.Distinct().ToArray();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = V_0;
		RuntimeObject* L_37;
		L_37 = Enumerable_Distinct_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m177BCD39E5020FD1CD74BAD4CBFCE70CC7CF5E49(L_36, Enumerable_Distinct_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m177BCD39E5020FD1CD74BAD4CBFCE70CC7CF5E49_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38;
		L_38 = Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790(L_37, Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var);
		__this->___pathPoints_13 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathPoints_13), (void*)L_38);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> SWS.BezierPathManager::GetPoints(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* BezierPathManager_GetPoints_mB73E4C9B08F3B71E5094CE88D4C6DB6B56BAFE63 (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_p2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_p3, float ___4_detail, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// List<Vector3> segmentPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_0;
		// float iterations = detail * 10f;
		float L_1 = ___4_detail;
		V_1 = ((float)il2cpp_codegen_multiply(L_1, (10.0f)));
		// for (int n = 0; n <= iterations; n++)
		V_2 = 0;
		goto IL_00c2;
	}

IL_0016:
	{
		// float i = (float)n / iterations;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		V_3 = ((float)(((float)L_2)/L_3));
		// float rest = (1f - i);
		float L_4 = V_3;
		V_4 = ((float)il2cpp_codegen_subtract((1.0f), L_4));
		// Vector3 newPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_5 = L_5;
		// newPos += p0 * rest * rest * rest;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_p0;
		float L_8 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		float L_10 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		float L_12 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_13, NULL);
		V_5 = L_14;
		// newPos += p1 * i * 3f * rest * rest;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___1_p1;
		float L_17 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, (3.0f), NULL);
		float L_20 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		float L_22 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_23, NULL);
		V_5 = L_24;
		// newPos += p2 * 3f * i * i * rest;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ___2_p2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, (3.0f), NULL);
		float L_28 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		float L_30 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_30, NULL);
		float L_32 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_33, NULL);
		V_5 = L_34;
		// newPos += p3 * i * i * i;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___3_p3;
		float L_37 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_36, L_37, NULL);
		float L_39 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, L_39, NULL);
		float L_41 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_35, L_42, NULL);
		V_5 = L_43;
		// segmentPoints.Add(newPos);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_44 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_5;
		NullCheck(L_44);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_44, L_45, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int n = 0; n <= iterations; n++)
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c2:
	{
		// for (int n = 0; n <= iterations; n++)
		int32_t L_47 = V_2;
		float L_48 = V_1;
		if ((((float)((float)L_47)) <= ((float)L_48)))
		{
			goto IL_0016;
		}
	}
	{
		// return segmentPoints;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_49 = V_0;
		return L_49;
	}
}
// System.Void SWS.BezierPathManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPathManager__ctor_m07733297110466EC7840F7054002B0E901D76958 (BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3476730988C2CF566FC36100ACB8203C24869380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3[] pathPoints = new Vector3[]{};
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___pathPoints_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathPoints_13), (void*)L_0);
		// public List<BezierPoint> bPoints = new List<BezierPoint>();
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_1 = (List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81*)il2cpp_codegen_object_new(List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m3476730988C2CF566FC36100ACB8203C24869380(L_1, List_1__ctor_m3476730988C2CF566FC36100ACB8203C24869380_RuntimeMethod_var);
		__this->___bPoints_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bPoints_14), (void*)L_1);
		// public bool showHandles = true;
		__this->___showHandles_15 = (bool)1;
		// public bool connectHandles = true;
		__this->___connectHandles_16 = (bool)1;
		// public Color color3 = new Color(108 / 255f, 151 / 255f, 1, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (0.423529416f), (0.592156887f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___color3_17 = L_2;
		// public float pathDetail = 1;
		__this->___pathDetail_18 = (1.0f);
		// public List<float> segmentDetail = new List<float>();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_3, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		__this->___segmentDetail_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___segmentDetail_20), (void*)L_3);
		PathManager__ctor_mB191F3F28D00A61FDCD6EA337437D72A030A762F(__this, NULL);
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
// System.Void SWS.BezierPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPoint__ctor_m8B2BCF59EBFF6ADBCD62D3BD2B9F1AAF1D11F57A (BezierPoint_tD3D9598EF539FBB0A9B8E24B1CE611E61A8DE268* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Transform[] cp = new Transform[2];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___cp_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cp_1), (void*)L_0);
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
// System.Void SWS.PathManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathManager_Awake_m84CE25B6649F955B484360B6A66F865FEAAD9FE1 (PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WaypointManager.AddPath(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		WaypointManager_AddPath_mC4D93EB0E933E0407FEF3526B79A8E9E76F9C69B(L_0, NULL);
		// }
		return;
	}
}
// System.Void SWS.PathManager::Create(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathManager_Create_m1D19E6F7AE02D7DCED79475514A1B390D386328C (PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m5925CCD2844741E30EB14EDD03DD79F169BBFA80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// if (parent == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_parent;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// parent = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		___0_parent = L_2;
	}

IL_0011:
	{
		// List<Transform> childs = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_3 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_3, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		V_0 = L_3;
		// foreach(Transform child in parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___0_parent;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_4, NULL);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_7 = V_3;
					if (!L_7)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_8 = V_3;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0033_1;
			}

IL_0020_1:
			{
				// foreach(Transform child in parent)
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				V_2 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_10, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// childs.Add(child);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_11 = V_0;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_2;
				NullCheck(L_11);
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_11, L_12, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
			}

IL_0033_1:
			{
				// foreach(Transform child in parent)
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// Create(childs.ToArray());
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_15 = V_0;
		NullCheck(L_15);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_16;
		L_16 = List_1_ToArray_m5925CCD2844741E30EB14EDD03DD79F169BBFA80(L_15, List_1_ToArray_m5925CCD2844741E30EB14EDD03DD79F169BBFA80_RuntimeMethod_var);
		VirtualActionInvoker2< TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*, bool >::Invoke(4 /* System.Void SWS.PathManager::Create(UnityEngine.Transform[],System.Boolean) */, __this, L_16, (bool)0);
		// }
		return;
	}
}
// System.Void SWS.PathManager::Create(UnityEngine.Transform[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathManager_Create_mF8FFE9549DF325A5E02EE6109EACC1A1C6AB5FBB (PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___0_waypoints, bool ___1_makeChildren, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E2EEA2C23050B6F5BCB167622E9CF168662B288);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(waypoints.Length < 2)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = ___0_waypoints;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		// Debug.LogWarning("Not enough waypoints placed - minimum is 2. Cancelling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral6E2EEA2C23050B6F5BCB167622E9CF168662B288, NULL);
		// return;
		return;
	}

IL_0011:
	{
		// if(makeChildren)
		bool L_1 = ___1_makeChildren;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// for(int i = 0; i < waypoints.Length; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0018:
	{
		// waypoints[i].parent = transform;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = ___0_waypoints;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_5, L_6, NULL);
		// for(int i = 0; i < waypoints.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002a:
	{
		// for(int i = 0; i < waypoints.Length; i++)
		int32_t L_8 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = ___0_waypoints;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0018;
		}
	}

IL_0030:
	{
		// this.waypoints = waypoints;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = ___0_waypoints;
		__this->___waypoints_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypoints_4), (void*)L_10);
		// }
		return;
	}
}
// System.Void SWS.PathManager::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathManager_OnDrawGizmos_m4321C73BCFE57A02C7176E28004483C258F99D52 (PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// if (waypoints.Length <= 0) return;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___waypoints_4;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_000a;
		}
	}
	{
		// if (waypoints.Length <= 0) return;
		return;
	}

IL_000a:
	{
		// Vector3[] wpPositions = GetPathPoints();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = VirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, bool >::Invoke(6 /* UnityEngine.Vector3[] SWS.PathManager::GetPathPoints(System.Boolean) */, __this, (bool)0);
		V_0 = L_1;
		// Vector3 start = wpPositions[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// Vector3 end = wpPositions[wpPositions.Length - 1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		NullCheck(L_6);
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// Gizmos.color = color1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___color1_7;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_9, NULL);
		// Gizmos.DrawWireCube(start, size * GetHandleSize(start) * 1.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___size_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13;
		L_13 = VirtualFuncInvoker1< float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Single SWS.PathManager::GetHandleSize(UnityEngine.Vector3) */, __this, L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, (1.5f), NULL);
		Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_10, L_15, NULL);
		// Gizmos.DrawWireCube(end, size * GetHandleSize(end) * 1.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___size_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		float L_19;
		L_19 = VirtualFuncInvoker1< float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Single SWS.PathManager::GetHandleSize(UnityEngine.Vector3) */, __this, L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, (1.5f), NULL);
		Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_16, L_21, NULL);
		// Gizmos.color = color2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___color2_8;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_22, NULL);
		// for (int i = 1; i < wpPositions.Length - 1; i++)
		V_3 = 1;
		goto IL_00a8;
	}

IL_0084:
	{
		// Gizmos.DrawWireSphere(wpPositions[i], radius * GetHandleSize(wpPositions[i]));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = V_0;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		float L_27 = __this->___radius_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = V_0;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		float L_32;
		L_32 = VirtualFuncInvoker1< float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Single SWS.PathManager::GetHandleSize(UnityEngine.Vector3) */, __this, L_31);
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_26, ((float)il2cpp_codegen_multiply(L_27, L_32)), NULL);
		// for (int i = 1; i < wpPositions.Length - 1; i++)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00a8:
	{
		// for (int i = 1; i < wpPositions.Length - 1; i++)
		int32_t L_34 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35 = V_0;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_35)->max_length)), 1)))))
		{
			goto IL_0084;
		}
	}
	{
		// if (drawCurved && wpPositions.Length >= 2)
		bool L_36 = __this->___drawCurved_5;
		if (!L_36)
		{
			goto IL_00c5;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = V_0;
		NullCheck(L_37);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))) < ((int32_t)2)))
		{
			goto IL_00c5;
		}
	}
	{
		// WaypointManager.DrawCurved(wpPositions);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		WaypointManager_DrawCurved_m2D67C19A40B17A3F97162A6AC58350002C733EC3(L_38, NULL);
		return;
	}

IL_00c5:
	{
		// WaypointManager.DrawStraight(wpPositions);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_39 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		WaypointManager_DrawStraight_m3542414F6DF4E3A5F43B0B1C2D0DD67321D202CD(L_39, NULL);
		// }
		return;
	}
}
// System.Single SWS.PathManager::GetHandleSize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PathManager_GetHandleSize_mFDC1E5969F96209D5F363C9E304E65B6018CEE64 (PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	{
		// float handleSize = 1f;
		// return handleSize;
		return (1.0f);
	}
}
// UnityEngine.Vector3[] SWS.PathManager::GetPathPoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* PathManager_GetPathPoints_m30D6F8DEBDA3D6323FCA8BAE89337A9773968582 (PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* __this, bool ___0_local, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Vector3[] pathPoints = new Vector3[waypoints.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___waypoints_4;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// if (local)
		bool L_2 = ___0_local;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// for (int i = 0; i < waypoints.Length; i++)
		V_1 = 0;
		goto IL_002d;
	}

IL_0015:
	{
		// pathPoints[i] = waypoints[i].localPosition;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_0;
		int32_t L_4 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->___waypoints_4;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_9);
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_11 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = __this->___waypoints_4;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0061;
	}

IL_003a:
	{
		// for (int i = 0; i < waypoints.Length; i++)
		V_2 = 0;
		goto IL_0056;
	}

IL_003e:
	{
		// pathPoints[i] = waypoints[i].position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_0;
		int32_t L_14 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = __this->___waypoints_4;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_19);
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0056:
	{
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_21 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_22 = __this->___waypoints_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_003e;
		}
	}

IL_0061:
	{
		// return pathPoints;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = V_0;
		return L_23;
	}
}
// UnityEngine.Transform SWS.PathManager::GetWaypoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PathManager_GetWaypoint_m5FB7AD63669534DD6497FC4E9D26A3E95F1D3C19 (PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// return waypoints[index];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___waypoints_4;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Int32 SWS.PathManager::GetWaypointIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PathManager_GetWaypointIndex_m6C79B684346998DEED575D792692B1F8FD592E94 (PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* __this, int32_t ___0_point, const RuntimeMethod* method) 
{
	{
		// return point;
		int32_t L_0 = ___0_point;
		return L_0;
	}
}
// System.Int32 SWS.PathManager::GetWaypointCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PathManager_GetWaypointCount_m1A7FCA51A9CA306F0CCA80CC67080C0B3DAEFA4C (PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* __this, const RuntimeMethod* method) 
{
	{
		// return waypoints.Length;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___waypoints_4;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// System.Void SWS.PathManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathManager__ctor_mB191F3F28D00A61FDCD6EA337437D72A030A762F (PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Transform[] waypoints = new Transform[]{};
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___waypoints_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypoints_4), (void*)L_0);
		// public bool drawCurved = true;
		__this->___drawCurved_5 = (bool)1;
		// public Color color1 = new Color(1, 0, 1, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (1.0f), (0.0f), (1.0f), (0.5f), /*hidden argument*/NULL);
		__this->___color1_7 = L_1;
		// public Color color2 = new Color(1, 235 / 255f, 4 / 255f, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (1.0f), (0.921568632f), (0.0156862754f), (0.5f), /*hidden argument*/NULL);
		__this->___color2_8 = L_2;
		// public Vector3 size = new Vector3(.7f, .7f, .7f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		__this->___size_9 = L_3;
		// public float radius = .4f;
		__this->___radius_10 = (0.400000006f);
		// public bool skipCustomNames = true;
		__this->___skipCustomNames_11 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SWS.WaypointManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager_Awake_m3754E81CCA568C3101D5859B62A7662B10E927C7 (WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t93085375A199522C60696471B1FB8B4B7FCB89FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DOTween.Init();
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = V_0;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t93085375A199522C60696471B1FB8B4B7FCB89FD));
		Nullable_1_t93085375A199522C60696471B1FB8B4B7FCB89FD L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = DOTween_Init_mAD6E37B9B311DFFBCCACAB726DA36D40A7DB8C23(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SWS.WaypointManager::AddPath(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager_AddPath_mC4D93EB0E933E0407FEF3526B79A8E9E76F9C69B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m73F33F7E67F977E240031B060F3EE9EE7DD0A88B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3DD521D1E57208DDA39653995F124257D80CAECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisPathManager_tE11816416738EE9AFB82A176CC0599C045DA0931_m2C6760B91415445D9B7546A953EAFC650F97CC62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DA8EE29FF9B7C31801E283CEBEB8AC30FA581E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BBA88A608EE06714C33CD449322B6575881219E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8239DDE7DBC91495DACC42B52FAF15E9C617D4D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC39AE1D3AC997C59038ACA4B24509C758A05C19F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7CD1EAF4771EFD9FCE8AD019F11872BE9AF3360);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// string pathName = path.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_path;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		V_0 = L_1;
		// if (pathName.Contains("(Clone)"))
		String_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// pathName = pathName.Replace("(Clone)", "");
		String_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_5;
	}

IL_0025:
	{
		// PathManager pathMan = path.GetComponentInChildren<PathManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___0_path;
		NullCheck(L_6);
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_7;
		L_7 = GameObject_GetComponentInChildren_TisPathManager_tE11816416738EE9AFB82A176CC0599C045DA0931_m2C6760B91415445D9B7546A953EAFC650F97CC62(L_6, GameObject_GetComponentInChildren_TisPathManager_tE11816416738EE9AFB82A176CC0599C045DA0931_m2C6760B91415445D9B7546A953EAFC650F97CC62_RuntimeMethod_var);
		V_1 = L_7;
		// if(pathMan == null)
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		// Debug.LogWarning("Called AddPath() but GameObject " + pathName + " has no PathManager attached.");
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF7CD1EAF4771EFD9FCE8AD019F11872BE9AF3360, L_10, _stringLiteral4DA8EE29FF9B7C31801E283CEBEB8AC30FA581E9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_11, NULL);
		// return;
		return;
	}

IL_004b:
	{
		// CleanUp();
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		WaypointManager_CleanUp_m44F4A6D8A82EC10911A1164721437B885259A54B(NULL);
		// if (Paths.ContainsKey(pathName))
		Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* L_12 = ((WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_StaticFields*)il2cpp_codegen_static_fields_for(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var))->___Paths_6;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m3DD521D1E57208DDA39653995F124257D80CAECE(L_12, L_13, Dictionary_2_ContainsKey_m3DD521D1E57208DDA39653995F124257D80CAECE_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_00cb;
		}
	}
	{
		// int i = 1;
		V_2 = 1;
		goto IL_0065;
	}

IL_0061:
	{
		// i++;
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0065:
	{
		// while (Paths.ContainsKey(pathName + "#" + i))
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* L_16 = ((WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_StaticFields*)il2cpp_codegen_static_fields_for(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var))->___Paths_6;
		String_t* L_17 = V_0;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_17, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, L_18, NULL);
		NullCheck(L_16);
		bool L_20;
		L_20 = Dictionary_2_ContainsKey_m3DD521D1E57208DDA39653995F124257D80CAECE(L_16, L_19, Dictionary_2_ContainsKey_m3DD521D1E57208DDA39653995F124257D80CAECE_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_0061;
		}
	}
	{
		// pathName += "#" + i;
		String_t* L_21 = V_0;
		String_t* L_22;
		L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_21, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, L_22, NULL);
		V_0 = L_23;
		// Debug.Log("Renamed " + path.name + " to " + pathName + " because a path with the same name was found.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteralC39AE1D3AC997C59038ACA4B24509C758A05C19F);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC39AE1D3AC997C59038ACA4B24509C758A05C19F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = ___0_path;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_27, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_26;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral8239DDE7DBC91495DACC42B52FAF15E9C617D4D7);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral8239DDE7DBC91495DACC42B52FAF15E9C617D4D7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		String_t* L_31 = V_0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_30;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral5BBA88A608EE06714C33CD449322B6575881219E);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5BBA88A608EE06714C33CD449322B6575881219E);
		String_t* L_33;
		L_33 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_33, NULL);
	}

IL_00cb:
	{
		// path.name = pathName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = ___0_path;
		String_t* L_35 = V_0;
		NullCheck(L_34);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_34, L_35, NULL);
		// Paths.Add(pathName, pathMan);
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* L_36 = ((WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_StaticFields*)il2cpp_codegen_static_fields_for(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var))->___Paths_6;
		String_t* L_37 = V_0;
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_38 = V_1;
		NullCheck(L_36);
		Dictionary_2_Add_m73F33F7E67F977E240031B060F3EE9EE7DD0A88B(L_36, L_37, L_38, Dictionary_2_Add_m73F33F7E67F977E240031B060F3EE9EE7DD0A88B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SWS.WaypointManager::CleanUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager_CleanUp_m44F4A6D8A82EC10911A1164721437B885259A54B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC90D468814DB0B0DCBDED2C9FA6B34B7A783997E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisKeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00_TisString_t_m835C7FF9E45FA7AACA869854CAB6FEAE1FFF5E4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00_m68B13DB60DFCEDB01D71E85BF8ADE24B892CCC84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCleanUpU3Eb__5_0_m37A6B0B3BAF0675F3693C880E196D15A75892399_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCleanUpU3Eb__5_1_m4F2E3608CA80E04515A87ABDD5A25120C15BBC6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503* G_B2_0 = NULL;
	Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* G_B2_1 = NULL;
	Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503* G_B1_0 = NULL;
	Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* G_B1_1 = NULL;
	Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// string[] keys = Paths.Where(p => p.Value == null).Select(p => p.Key).ToArray();
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* L_0 = ((WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_StaticFields*)il2cpp_codegen_static_fields_for(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var))->___Paths_6;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var);
		Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503* L_1 = ((U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1;
		Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var);
		U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58* L_3 = ((U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503* L_4 = (Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503*)il2cpp_codegen_object_new(Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m5FD2A5ECBF5D8123A687F765004AEA0E395FD14D(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CCleanUpU3Eb__5_0_m37A6B0B3BAF0675F3693C880E196D15A75892399_RuntimeMethod_var), NULL);
		Func_2_t4114FCB469368F8AD35818D5018FF1469A5C6503* L_5 = L_4;
		((U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisKeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00_m68B13DB60DFCEDB01D71E85BF8ADE24B892CCC84(G_B2_1, G_B2_0, Enumerable_Where_TisKeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00_m68B13DB60DFCEDB01D71E85BF8ADE24B892CCC84_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var);
		Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77* L_7 = ((U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var))->___U3CU3E9__5_1_2;
		Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var);
		U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58* L_9 = ((U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77* L_10 = (Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77*)il2cpp_codegen_object_new(Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_mE024600C2E242A633B30B6E12AFA7A1FDDCA99E9(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CCleanUpU3Eb__5_1_m4F2E3608CA80E04515A87ABDD5A25120C15BBC6A_RuntimeMethod_var), NULL);
		Func_2_tEDAD288E8FAB736DFF5348FF40F6A1447670FA77* L_11 = L_10;
		((U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var))->___U3CU3E9__5_1_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var))->___U3CU3E9__5_1_2), (void*)L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Select_TisKeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00_TisString_t_m835C7FF9E45FA7AACA869854CAB6FEAE1FFF5E4E(G_B4_1, G_B4_0, Enumerable_Select_TisKeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00_TisString_t_m835C7FF9E45FA7AACA869854CAB6FEAE1FFF5E4E_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
		L_13 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_12, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		V_0 = L_13;
		// for(int i = 0; i < keys.Length; i++)
		V_1 = 0;
		goto IL_0069;
	}

IL_0057:
	{
		// Paths.Remove(keys[i]);
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* L_14 = ((WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_StaticFields*)il2cpp_codegen_static_fields_for(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var))->___Paths_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		bool L_19;
		L_19 = Dictionary_2_Remove_mC90D468814DB0B0DCBDED2C9FA6B34B7A783997E(L_14, L_18, Dictionary_2_Remove_mC90D468814DB0B0DCBDED2C9FA6B34B7A783997E_RuntimeMethod_var);
		// for(int i = 0; i < keys.Length; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0069:
	{
		// for(int i = 0; i < keys.Length; i++)
		int32_t L_21 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SWS.WaypointManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager_OnDestroy_m47D12390E3B5EBE8523EACD24F91BDB00B3620F4 (WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m378052423584343CE50ABC5809BDC067421C6DB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Paths.Clear();
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* L_0 = ((WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_StaticFields*)il2cpp_codegen_static_fields_for(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var))->___Paths_6;
		NullCheck(L_0);
		Dictionary_2_Clear_m378052423584343CE50ABC5809BDC067421C6DB1(L_0, Dictionary_2_Clear_m378052423584343CE50ABC5809BDC067421C6DB1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SWS.WaypointManager::DrawStraight(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager_DrawStraight_m3542414F6DF4E3A5F43B0B1C2D0DD67321D202CD (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_waypoints, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < waypoints.Length - 1; i++)
		V_0 = 0;
		goto IL_001d;
	}

IL_0004:
	{
		// Gizmos.DrawLine(waypoints[i], waypoints[i + 1]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_waypoints;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___0_waypoints;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_3, L_7, NULL);
		// for (int i = 0; i < waypoints.Length - 1; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < waypoints.Length - 1; i++)
		int32_t L_9 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = ___0_waypoints;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), 1)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SWS.WaypointManager::DrawCurved(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager_DrawCurved_m2D67C19A40B17A3F97162A6AC58350002C733EC3 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_pathPoints, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// pathPoints = GetCurved(pathPoints);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_pathPoints;
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = WaypointManager_GetCurved_mC6EFE614F13511E4ADFF49405D040DE0FAB5C960(L_0, NULL);
		___0_pathPoints = L_1;
		// Vector3 prevPt = pathPoints[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___0_pathPoints;
		NullCheck(L_2);
		int32_t L_3 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// for (int i = 1; i < pathPoints.Length; ++i)
		V_1 = 1;
		goto IL_0027;
	}

IL_0014:
	{
		// currPt = pathPoints[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ___0_pathPoints;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// Gizmos.DrawLine(currPt, prevPt);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_9, L_10, NULL);
		// prevPt = currPt;
		V_0 = L_9;
		// for (int i = 1; i < pathPoints.Length; ++i)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0027:
	{
		// for (int i = 1; i < pathPoints.Length; ++i)
		int32_t L_12 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = ___0_pathPoints;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3[] SWS.WaypointManager::GetCurved(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* WaypointManager_GetCurved_mC6EFE614F13511E4ADFF49405D040DE0FAB5C960 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_waypoints, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// Vector3[] gizmoPoints = new Vector3[waypoints.Length + 2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_waypoints;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)));
		V_0 = L_1;
		// waypoints.CopyTo(gizmoPoints, 1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___0_waypoints;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_0;
		NullCheck((RuntimeArray*)L_2);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_2, (RuntimeArray*)L_3, 1, NULL);
		// gizmoPoints[0] = waypoints[1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ___0_waypoints;
		NullCheck(L_5);
		int32_t L_6 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_7);
		// gizmoPoints[gizmoPoints.Length - 1] = gizmoPoints[gizmoPoints.Length - 2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = V_0;
		NullCheck(L_9);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		NullCheck(L_11);
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_13);
		// int subdivisions = gizmoPoints.Length * 10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_0;
		NullCheck(L_14);
		V_3 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_14)->max_length)), ((int32_t)10)));
		// drawPs = new Vector3[subdivisions + 1];
		int32_t L_15 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_15, 1)));
		V_1 = L_16;
		// for (int i = 0; i <= subdivisions; ++i)
		V_4 = 0;
		goto IL_006c;
	}

IL_004c:
	{
		// float pm = i / (float)subdivisions;
		int32_t L_17 = V_4;
		int32_t L_18 = V_3;
		V_5 = ((float)(((float)L_17)/((float)L_18)));
		// currPt = GetPoint(gizmoPoints, pm);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = V_0;
		float L_20 = V_5;
		il2cpp_codegen_runtime_class_init_inline(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = WaypointManager_GetPoint_mF6807E60DFF8AF4FA3B0AC63C14066D027112409(L_19, L_20, NULL);
		V_2 = L_21;
		// drawPs[i] = currPt;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_1;
		int32_t L_23 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_24);
		// for (int i = 0; i <= subdivisions; ++i)
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_006c:
	{
		// for (int i = 0; i <= subdivisions; ++i)
		int32_t L_26 = V_4;
		int32_t L_27 = V_3;
		if ((((int32_t)L_26) <= ((int32_t)L_27)))
		{
			goto IL_004c;
		}
	}
	{
		// return drawPs;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = V_1;
		return L_28;
	}
}
// UnityEngine.Vector3 SWS.WaypointManager::GetPoint(UnityEngine.Vector3[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WaypointManager_GetPoint_mF6807E60DFF8AF4FA3B0AC63C14066D027112409 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_gizmoPoints, float ___1_t, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// int numSections = gizmoPoints.Length - 3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_gizmoPoints;
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 3));
		// int tSec = (int)Mathf.Floor(t * numSections);
		float L_1 = ___1_t;
		int32_t L_2 = V_0;
		float L_3;
		L_3 = floorf(((float)il2cpp_codegen_multiply(L_1, ((float)L_2))));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
		// int currPt = numSections - 1;
		int32_t L_4 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		// if (currPt > tSec)
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_001b;
		}
	}
	{
		// currPt = tSec;
		int32_t L_7 = V_1;
		V_2 = L_7;
	}

IL_001b:
	{
		// float u = t * numSections - currPt;
		float L_8 = ___1_t;
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_8, ((float)L_9))), ((float)L_10)));
		// Vector3 a = gizmoPoints[currPt];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = ___0_gizmoPoints;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		// Vector3 b = gizmoPoints[currPt + 1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = ___0_gizmoPoints;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_5 = L_18;
		// Vector3 c = gizmoPoints[currPt + 2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = ___0_gizmoPoints;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_6 = L_22;
		// Vector3 d = gizmoPoints[currPt + 3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = ___0_gizmoPoints;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_7 = L_26;
		// return .5f * (
		//                (-a + 3f * b - 3f * c + d) * (u * u * u)
		//                + (2f * a - 5f * b + 4f * c - d) * (u * u)
		//                + (-a + c) * u
		//                + 2f * b
		//            );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_31, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_34, L_35, NULL);
		float L_37 = V_3;
		float L_38 = V_3;
		float L_39 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_36, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_37, L_38)), L_39)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((5.0f), L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_42, L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((4.0f), L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_45, L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_48, L_49, NULL);
		float L_51 = V_3;
		float L_52 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_50, ((float)il2cpp_codegen_multiply(L_51, L_52)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_56, L_57, NULL);
		float L_59 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_58, L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_54, L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_61, L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.5f), L_64, NULL);
		return L_65;
	}
}
// System.Single SWS.WaypointManager::GetPathLength(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaypointManager_GetPathLength_m34756F2C890A06F2F457B73ED40625F646094F19 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_waypoints, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// float dist = 0f;
		V_0 = (0.0f);
		// for (int i = 0; i < waypoints.Length - 1; i++)
		V_1 = 0;
		goto IL_0026;
	}

IL_000a:
	{
		// dist += Vector3.Distance(waypoints[i], waypoints[i + 1]);
		float L_0 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___0_waypoints;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ___0_waypoints;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		float L_9;
		L_9 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_4, L_8, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, L_9));
		// for (int i = 0; i < waypoints.Length - 1; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < waypoints.Length - 1; i++)
		int32_t L_11 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = ___0_waypoints;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), 1)))))
		{
			goto IL_000a;
		}
	}
	{
		// return dist;
		float L_13 = V_0;
		return L_13;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> SWS.WaypointManager::SmoothCurve(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* WaypointManager_SmoothCurve_m831C54F9276E673310736655ACFAF225F09E49E8 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_pathToCurve, int32_t ___1_interpolations, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int pointsLength = 0;
		V_2 = 0;
		// int curvedLength = 0;
		V_3 = 0;
		// if (interpolations < 1)
		int32_t L_0 = ___1_interpolations;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		// interpolations = 1;
		___1_interpolations = 1;
	}

IL_000b:
	{
		// pointsLength = pathToCurve.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = ___0_pathToCurve;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_1, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_2 = L_2;
		// curvedLength = (pointsLength * Mathf.RoundToInt(interpolations)) - 1;
		int32_t L_3 = V_2;
		int32_t L_4 = ___1_interpolations;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)L_4), NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_3, L_5)), 1));
		// curvedPoints = new List<Vector3>(curvedLength);
		int32_t L_6 = V_3;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33(L_7, L_6, List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		V_1 = L_7;
		// float t = 0.0f;
		V_4 = (0.0f);
		// for (int pointInTimeOnCurve = 0; pointInTimeOnCurve < curvedLength + 1; pointInTimeOnCurve++)
		V_5 = 0;
		goto IL_00b5;
	}

IL_0034:
	{
		// t = Mathf.InverseLerp(0, curvedLength, pointInTimeOnCurve);
		int32_t L_8 = V_3;
		int32_t L_9 = V_5;
		float L_10;
		L_10 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline((0.0f), ((float)L_8), ((float)L_9), NULL);
		V_4 = L_10;
		// tempPoints = new List<Vector3>(pathToCurve);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ___0_pathToCurve;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD(L_12, L_11, List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD_RuntimeMethod_var);
		V_0 = L_12;
		// for (int j = pointsLength - 1; j > 0; j--)
		int32_t L_13 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_009d;
	}

IL_0053:
	{
		// for (int i = 0; i < j; i++)
		V_7 = 0;
		goto IL_0091;
	}

IL_0058:
	{
		// tempPoints[i] = (1 - t) * tempPoints[i] + t * tempPoints[i + 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = V_0;
		int32_t L_15 = V_7;
		float L_16 = V_4;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_17 = V_0;
		int32_t L_18 = V_7;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_17, L_18, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract((1.0f), L_16)), L_19, NULL);
		float L_21 = V_4;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_22 = V_0;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_21, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_25, NULL);
		NullCheck(L_14);
		List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C(L_14, L_15, L_26, List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		// for (int i = 0; i < j; i++)
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0091:
	{
		// for (int i = 0; i < j; i++)
		int32_t L_28 = V_7;
		int32_t L_29 = V_6;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0058;
		}
	}
	{
		// for (int j = pointsLength - 1; j > 0; j--)
		int32_t L_30 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_009d:
	{
		// for (int j = pointsLength - 1; j > 0; j--)
		int32_t L_31 = V_6;
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// curvedPoints.Add(tempPoints[0]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32 = V_1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_33 = V_0;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_33, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_32);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_32, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int pointInTimeOnCurve = 0; pointInTimeOnCurve < curvedLength + 1; pointInTimeOnCurve++)
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b5:
	{
		// for (int pointInTimeOnCurve = 0; pointInTimeOnCurve < curvedLength + 1; pointInTimeOnCurve++)
		int32_t L_36 = V_5;
		int32_t L_37 = V_3;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)))))
		{
			goto IL_0034;
		}
	}
	{
		// return curvedPoints;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_38 = V_1;
		return L_38;
	}
}
// System.Void SWS.WaypointManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager__ctor_mC85A9D7284F7DA6B567E8831C04333FA855D4836 (WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode placementKey = KeyCode.P;
		__this->___placementKey_4 = ((int32_t)112);
		// public KeyCode viewPlacementKey = KeyCode.C;
		__this->___viewPlacementKey_5 = ((int32_t)99);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void SWS.WaypointManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointManager__cctor_m7D70B1FEFB5D4BB719B743419727C40B472C6D01 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4C233A12AFA2A34E23DF4423D899120178533E9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Dictionary<string, PathManager> Paths = new Dictionary<string, PathManager>();
		Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577* L_0 = (Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577*)il2cpp_codegen_object_new(Dictionary_2_t5BCAE4BF64BFB109D4903CB422EBD5D1999C5577_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m4C233A12AFA2A34E23DF4423D899120178533E9B(L_0, Dictionary_2__ctor_m4C233A12AFA2A34E23DF4423D899120178533E9B_RuntimeMethod_var);
		((WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_StaticFields*)il2cpp_codegen_static_fields_for(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var))->___Paths_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_StaticFields*)il2cpp_codegen_static_fields_for(WaypointManager_t5FCB6FDF1EB188711935F95B1728FC5D0AF595C7_il2cpp_TypeInfo_var))->___Paths_6), (void*)L_0);
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
// System.Void SWS.WaypointManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA2C45E162FB9CBC9FEDA76C7E24FF9F482A51449 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58* L_0 = (U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58*)il2cpp_codegen_object_new(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6D1D7C486FFCCEAB010ECACE34AA7B2C1242D277(L_0, NULL);
		((U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void SWS.WaypointManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6D1D7C486FFCCEAB010ECACE34AA7B2C1242D277 (U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SWS.WaypointManager/<>c::<CleanUp>b__5_0(System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCleanUpU3Eb__5_0_m37A6B0B3BAF0675F3693C880E196D15A75892399 (U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58* __this, KeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00 ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD7B88092B6519A420B0940CDA55942DFE7627343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string[] keys = Paths.Where(p => p.Value == null).Select(p => p.Key).ToArray();
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_0;
		L_0 = KeyValuePair_2_get_Value_mD7B88092B6519A420B0940CDA55942DFE7627343_inline((&___0_p), KeyValuePair_2_get_Value_mD7B88092B6519A420B0940CDA55942DFE7627343_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// System.String SWS.WaypointManager/<>c::<CleanUp>b__5_1(System.Collections.Generic.KeyValuePair`2<System.String,SWS.PathManager>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCleanUpU3Eb__5_1_m4F2E3608CA80E04515A87ABDD5A25120C15BBC6A (U3CU3Ec_t0F6AD9555B569146380BE22A55FEC8EC1ACBCF58* __this, KeyValuePair_2_t33C29F7EB1286AFA4C64C1ADEE9208FAB6E8DC00 ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mBDEA4FC48475DCFAE999307350B64C305FF47F21_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string[] keys = Paths.Where(p => p.Value == null).Select(p => p.Key).ToArray();
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mBDEA4FC48475DCFAE999307350B64C305FF47F21_inline((&___0_p), KeyValuePair_2_get_Key_mBDEA4FC48475DCFAE999307350B64C305FF47F21_RuntimeMethod_var);
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
// System.Void SWS.navMove::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_Awake_mA86CED769C0442301FD4D7AA0C1FA3F0D14F7423 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___agent_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_16), (void*)L_0);
		// }
		return;
	}
}
// System.Void SWS.navMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_Start_m92020657D3D14ABCE76A97B8CA5EA3B48A39B49E (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	{
		// if (onStart)
		bool L_0 = __this->___onStart_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// StartMove();
		navMove_StartMove_m75E2441A151B98BD1D25400B5CBD506C92BB9C7F(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void SWS.navMove::StartMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_StartMove_m75E2441A151B98BD1D25400B5CBD506C92BB9C7F (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD414FAB39A9774FB7EC92D603F28B000FEEAD71C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m195F1660174CEF31B814EB8014F3F5391452FD17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AF37D9BFF637BC24A7F34A67D99328EFA2263);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (pathContainer == null)
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_0 = __this->___pathContainer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogWarning(gameObject.name + " has no path! Please set Path Container.");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral106AF37D9BFF637BC24A7F34A67D99328EFA2263, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_4, NULL);
		// return;
		return;
	}

IL_0029:
	{
		// waypoints = new Transform[pathContainer.waypoints.Length];
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_5 = __this->___pathContainer_4;
		NullCheck(L_5);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_6 = L_5->___waypoints_4;
		NullCheck(L_6);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		__this->___waypoints_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypoints_14), (void*)L_7);
		// Array.Copy(pathContainer.waypoints, waypoints, pathContainer.waypoints.Length);
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_8 = __this->___pathContainer_4;
		NullCheck(L_8);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = L_8->___waypoints_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = __this->___waypoints_14;
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_11 = __this->___pathContainer_4;
		NullCheck(L_11);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = L_11->___waypoints_4;
		NullCheck(L_12);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_9, (RuntimeArray*)L_10, ((int32_t)(((RuntimeArray*)L_12)->max_length)), NULL);
		// startPoint = Mathf.Clamp(startPoint, 0, waypoints.Length - 1);
		int32_t L_13 = __this->___startPoint_8;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14 = __this->___waypoints_14;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_13, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), 1)), NULL);
		__this->___startPoint_8 = L_15;
		// int index = startPoint;
		int32_t L_16 = __this->___startPoint_8;
		V_0 = L_16;
		// if (reverse)
		bool L_17 = __this->___reverse_7;
		if (!L_17)
		{
			goto IL_00a7;
		}
	}
	{
		// Array.Reverse(waypoints);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_18 = __this->___waypoints_14;
		Array_Reverse_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD414FAB39A9774FB7EC92D603F28B000FEEAD71C(L_18, Array_Reverse_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD414FAB39A9774FB7EC92D603F28B000FEEAD71C_RuntimeMethod_var);
		// index = waypoints.Length - 1 - index;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_19 = __this->___waypoints_14;
		NullCheck(L_19);
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_19)->max_length)), 1)), L_20));
	}

IL_00a7:
	{
		// currentPoint = index;
		int32_t L_21 = V_0;
		__this->___currentPoint_9 = L_21;
		// for (int i = events.Count; i <= waypoints.Length - 1; i++)
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_22 = __this->___events_12;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_inline(L_22, List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_RuntimeMethod_var);
		V_1 = L_23;
		goto IL_00d0;
	}

IL_00bc:
	{
		// events.Add(new UnityEvent());
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_24 = __this->___events_12;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_25 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_25, NULL);
		NullCheck(L_24);
		List_1_Add_m195F1660174CEF31B814EB8014F3F5391452FD17_inline(L_24, L_25, List_1_Add_m195F1660174CEF31B814EB8014F3F5391452FD17_RuntimeMethod_var);
		// for (int i = events.Count; i <= waypoints.Length - 1; i++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00d0:
	{
		// for (int i = events.Count; i <= waypoints.Length - 1; i++)
		int32_t L_27 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_28 = __this->___waypoints_14;
		NullCheck(L_28);
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_28)->max_length)), 1)))))
		{
			goto IL_00bc;
		}
	}
	{
		// Stop();
		navMove_Stop_mA065B37494676CBC3FD6689FF5A3D96B4A21531F(__this, NULL);
		// StartCoroutine(Move());
		RuntimeObject* L_29;
		L_29 = navMove_Move_m23F0FD982EB08DFA5CC54734B65E29187FCF8F85(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30;
		L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_29, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SWS.navMove::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* navMove_Move_m23F0FD982EB08DFA5CC54734B65E29187FCF8F85 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A* L_0 = (U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A*)il2cpp_codegen_object_new(U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveU3Ed__20__ctor_mE7AAA91A4F09AA9FD5B7DBE6951EB8C810CEB5F8(L_0, 0, NULL);
		U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SWS.navMove::NextWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* navMove_NextWaypoint_m84ED935465B6916136F41DF93A1749103C1788D1 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA* L_0 = (U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA*)il2cpp_codegen_object_new(U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CNextWaypointU3Ed__21__ctor_m6E453EB79A11E5C685E585E91522A7E4BC0B7C59(L_0, 0, NULL);
		U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SWS.navMove::WaitForDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* navMove_WaitForDestination_mDEA23C5579DDF3608B2C0A43D264CEB0B1661C45 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707* L_0 = (U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707*)il2cpp_codegen_object_new(U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForDestinationU3Ed__22__ctor_m8EE296E2AD37A8E5E255146918487DC542A3C2C2(L_0, 0, NULL);
		U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SWS.navMove::OnWaypointChange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_OnWaypointChange_mC19B8E393D1931EEC373C766CF12D2FB5E1783B8 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reverse) index = waypoints.Length - 1 - index;
		bool L_0 = __this->___reverse_7;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// if (reverse) index = waypoints.Length - 1 - index;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___waypoints_14;
		NullCheck(L_1);
		int32_t L_2 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), L_2));
	}

IL_0016:
	{
		// if (events == null || events.Count - 1 < index || events[index] == null)
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_3 = __this->___events_12;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_4 = __this->___events_12;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_inline(L_4, List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_RuntimeMethod_var);
		int32_t L_6 = ___0_index;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1))) < ((int32_t)L_6)))
		{
			goto IL_003c;
		}
	}
	{
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_7 = __this->___events_12;
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_9;
		L_9 = List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0(L_7, L_8, List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_003d;
		}
	}

IL_003c:
	{
		// return;
		return;
	}

IL_003d:
	{
		// events[index].Invoke();
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_10 = __this->___events_12;
		int32_t L_11 = ___0_index;
		NullCheck(L_10);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12;
		L_12 = List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0(L_10, L_11, List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0_RuntimeMethod_var);
		NullCheck(L_12);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_12, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SWS.navMove::ReachedEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* navMove_ReachedEnd_m86AF780B08DD941379D1C3E8053206CF36100E90 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F* L_0 = (U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F*)il2cpp_codegen_object_new(U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReachedEndU3Ed__24__ctor_mF56977403FD89253EE68F46860CCCE58232AE018(L_0, 0, NULL);
		U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SWS.navMove::RandomizeWaypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_RandomizeWaypoints_m3737AAFFF68D4A447C3C362BA1CD8257496F5C85 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	int32_t V_4 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	{
		// Array.Copy(pathContainer.waypoints, waypoints, pathContainer.waypoints.Length);
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_0 = __this->___pathContainer_4;
		NullCheck(L_0);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = L_0->___waypoints_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___waypoints_14;
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_3 = __this->___pathContainer_4;
		NullCheck(L_3);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = L_3->___waypoints_4;
		NullCheck(L_4);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_1, (RuntimeArray*)L_2, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// int n = waypoints.Length;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->___waypoints_14;
		NullCheck(L_5);
		V_0 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		goto IL_0061;
	}

IL_002e:
	{
		// int k = rand.Next(n--);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_6 = __this->___rand_17;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		NullCheck(L_6);
		int32_t L_9;
		L_9 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_6, L_8);
		V_2 = L_9;
		// Transform temp = waypoints[n];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = __this->___waypoints_14;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		// waypoints[n] = waypoints[k];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14 = __this->___waypoints_14;
		int32_t L_15 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_16 = __this->___waypoints_14;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_19);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_19);
		// waypoints[k] = temp;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_20 = __this->___waypoints_14;
		int32_t L_21 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_3;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_22);
	}

IL_0061:
	{
		// while (n > 1)
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		// Transform first = pathContainer.waypoints[currentPoint];
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_24 = __this->___pathContainer_4;
		NullCheck(L_24);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_25 = L_24->___waypoints_4;
		int32_t L_26 = __this->___currentPoint_9;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_1 = L_28;
		// for (int i = 0; i < waypoints.Length; i++)
		V_4 = 0;
		goto IL_00bc;
	}

IL_007d:
	{
		// if (waypoints[i] == first)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_29 = __this->___waypoints_14;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_32, L_33, NULL);
		if (!L_34)
		{
			goto IL_00b6;
		}
	}
	{
		// Transform temp = waypoints[0];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_35 = __this->___waypoints_14;
		NullCheck(L_35);
		int32_t L_36 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_5 = L_37;
		// waypoints[0] = waypoints[i];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_38 = __this->___waypoints_14;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_39 = __this->___waypoints_14;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_42);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_42);
		// waypoints[i] = temp;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_43 = __this->___waypoints_14;
		int32_t L_44 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = V_5;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_45);
		// break;
		goto IL_00c8;
	}

IL_00b6:
	{
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_46 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00bc:
	{
		// for (int i = 0; i < waypoints.Length; i++)
		int32_t L_47 = V_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_48 = __this->___waypoints_14;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_007d;
		}
	}

IL_00c8:
	{
		// rndIndex = 0;
		__this->___rndIndex_18 = 0;
		// }
		return;
	}
}
// System.Void SWS.navMove::GoToWaypoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_GoToWaypoint_m915C98A415DC834E26C8E0DD4A744350DE7AED8F (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// if (reverse) index = waypoints.Length - 1 - index;
		bool L_0 = __this->___reverse_7;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// if (reverse) index = waypoints.Length - 1 - index;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___waypoints_14;
		NullCheck(L_1);
		int32_t L_2 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), L_2));
	}

IL_0016:
	{
		// Stop();
		navMove_Stop_mA065B37494676CBC3FD6689FF5A3D96B4A21531F(__this, NULL);
		// currentPoint = index;
		int32_t L_3 = ___0_index;
		__this->___currentPoint_9 = L_3;
		// agent.Warp(waypoints[index].position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_4 = __this->___agent_16;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->___waypoints_14;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_4);
		bool L_10;
		L_10 = NavMeshAgent_Warp_mAD14E576F74544EEDAD0AF097E498C58D3C0E4F5(L_4, L_9, NULL);
		// StartCoroutine(NextWaypoint());
		RuntimeObject* L_11;
		L_11 = navMove_NextWaypoint_m84ED935465B6916136F41DF93A1749103C1788D1(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Void SWS.navMove::Pause(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_Pause_m739AFBD8CEBD9E7CA6AE2A36644A8263F670FD7A (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, float ___0_seconds, const RuntimeMethod* method) 
{
	{
		// StopCoroutine(Wait());
		RuntimeObject* L_0;
		L_0 = navMove_Wait_m0B162A6628F095F6E35AD5F1FDE140BC11904858(__this, (0.0f), NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// waiting = true;
		__this->___waiting_19 = (bool)1;
		// agent.isStopped = true;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_1 = __this->___agent_16;
		NullCheck(L_1);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_1, (bool)1, NULL);
		// if (seconds > 0)
		float L_2 = ___0_seconds;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		// StartCoroutine(Wait(seconds));
		float L_3 = ___0_seconds;
		RuntimeObject* L_4;
		L_4 = navMove_Wait_m0B162A6628F095F6E35AD5F1FDE140BC11904858(__this, L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SWS.navMove::Wait(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* navMove_Wait_m0B162A6628F095F6E35AD5F1FDE140BC11904858 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, float ___0_secs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31* L_0 = (U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31*)il2cpp_codegen_object_new(U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitU3Ed__28__ctor_m9811AFAFA8CCAF8CCC55CB52B45585A37CB60E03(L_0, 0, NULL);
		U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31* L_2 = L_1;
		float L_3 = ___0_secs;
		NullCheck(L_2);
		L_2->___secs_2 = L_3;
		return L_2;
	}
}
// System.Void SWS.navMove::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_Resume_m72827C8F36175F8160866069EE63615076B45D5E (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	{
		// StopCoroutine(Wait());
		RuntimeObject* L_0;
		L_0 = navMove_Wait_m0B162A6628F095F6E35AD5F1FDE140BC11904858(__this, (0.0f), NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// waiting = false;
		__this->___waiting_19 = (bool)0;
		// agent.isStopped = false;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_1 = __this->___agent_16;
		NullCheck(L_1);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SWS.navMove::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_Reverse_m8BB626A83F7C4F3ED040D3E402760BAC756A021E (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD414FAB39A9774FB7EC92D603F28B000FEEAD71C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reverse = !reverse;
		bool L_0 = __this->___reverse_7;
		__this->___reverse_7 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if(reverse)
		bool L_1 = __this->___reverse_7;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// startPoint = currentPoint - 1;
		int32_t L_2 = __this->___currentPoint_9;
		__this->___startPoint_8 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_0047;
	}

IL_0027:
	{
		// Array.Reverse(waypoints);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___waypoints_14;
		Array_Reverse_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD414FAB39A9774FB7EC92D603F28B000FEEAD71C(L_3, Array_Reverse_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD414FAB39A9774FB7EC92D603F28B000FEEAD71C_RuntimeMethod_var);
		// startPoint = waypoints.Length - currentPoint;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = __this->___waypoints_14;
		NullCheck(L_4);
		int32_t L_5 = __this->___currentPoint_9;
		__this->___startPoint_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5));
	}

IL_0047:
	{
		// moveToPath = true;
		__this->___moveToPath_6 = (bool)1;
		// StartMove();
		navMove_StartMove_m75E2441A151B98BD1D25400B5CBD506C92BB9C7F(__this, NULL);
		// }
		return;
	}
}
// System.Void SWS.navMove::SetPath(SWS.PathManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_SetPath_m9AAF34A4D963D29AC9127C4C366409B5E2EE344C (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* ___0_newPath, const RuntimeMethod* method) 
{
	{
		// Stop();
		navMove_Stop_mA065B37494676CBC3FD6689FF5A3D96B4A21531F(__this, NULL);
		// pathContainer = newPath;
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_0 = ___0_newPath;
		__this->___pathContainer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathContainer_4), (void*)L_0);
		// StartMove();
		navMove_StartMove_m75E2441A151B98BD1D25400B5CBD506C92BB9C7F(__this, NULL);
		// }
		return;
	}
}
// System.Void SWS.navMove::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_Stop_mA065B37494676CBC3FD6689FF5A3D96B4A21531F (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// if (agent.enabled)
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___agent_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// agent.isStopped = true;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2 = __this->___agent_16;
		NullCheck(L_2);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_2, (bool)1, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void SWS.navMove::ResetToStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_ResetToStart_m605DFCC6C7306D968163C1BC4B42B1056168631B (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stop();
		navMove_Stop_mA065B37494676CBC3FD6689FF5A3D96B4A21531F(__this, NULL);
		// currentPoint = 0;
		__this->___currentPoint_9 = 0;
		// if (pathContainer)
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_0 = __this->___pathContainer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// agent.Warp(pathContainer.waypoints[currentPoint].position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2 = __this->___agent_16;
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_3 = __this->___pathContainer_4;
		NullCheck(L_3);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = L_3->___waypoints_4;
		int32_t L_5 = __this->___currentPoint_9;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_2);
		bool L_9;
		L_9 = NavMeshAgent_Warp_mAD14E576F74544EEDAD0AF097E498C58D3C0E4F5(L_2, L_8, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void SWS.navMove::ChangeSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove_ChangeSpeed_mC97910C2CDDB994FAA88BE9B927CBE81C9B5C5D3 (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// agent.speed = value;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___agent_16;
		float L_1 = ___0_value;
		NullCheck(L_0);
		NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SWS.navMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void navMove__ctor_m2FE55B74078E03896A755615BD65A1A23754389C (navMove_tF36264AF2CD464A692E7D320498558A26423BC25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAF642341E1AAB54142F727134B05004DE3A187A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool updateRotation = true;
		__this->___updateRotation_11 = (bool)1;
		// public List<UnityEvent> events = new List<UnityEvent>();
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_0 = (List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA*)il2cpp_codegen_object_new(List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mAF642341E1AAB54142F727134B05004DE3A187A5(L_0, List_1__ctor_mAF642341E1AAB54142F727134B05004DE3A187A5_RuntimeMethod_var);
		__this->___events_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___events_12), (void*)L_0);
		// private System.Random rand = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_1, NULL);
		__this->___rand_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rand_17), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SWS.navMove/<Move>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__20__ctor_mE7AAA91A4F09AA9FD5B7DBE6951EB8C810CEB5F8 (U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SWS.navMove/<Move>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__20_System_IDisposable_Dispose_m7F24B0B0E589429C5F263F95D27990B322975E5A (U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SWS.navMove/<Move>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveU3Ed__20_MoveNext_m669A18A9353E024FB944C4182D30723E2DD1AD61 (U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	navMove_tF36264AF2CD464A692E7D320498558A26423BC25* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_007c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// agent.isStopped = false;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_4 = V_1;
		NullCheck(L_4);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_5 = L_4->___agent_16;
		NullCheck(L_5);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_5, (bool)0, NULL);
		// agent.updateRotation = updateRotation;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_6 = V_1;
		NullCheck(L_6);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_7 = L_6->___agent_16;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->___updateRotation_11;
		NullCheck(L_7);
		NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D(L_7, L_9, NULL);
		// if (moveToPath)
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->___moveToPath_6;
		if (!L_11)
		{
			goto IL_0083;
		}
	}
	{
		// agent.SetDestination(waypoints[currentPoint].position);
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_12 = V_1;
		NullCheck(L_12);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_13 = L_12->___agent_16;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_14 = V_1;
		NullCheck(L_14);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = L_14->___waypoints_14;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = L_16->___currentPoint_9;
		NullCheck(L_15);
		int32_t L_18 = L_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		NullCheck(L_13);
		bool L_21;
		L_21 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_13, L_20, NULL);
		// yield return StartCoroutine(WaitForDestination());
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_22 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_23 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = navMove_WaitForDestination_mDEA23C5579DDF3608B2C0A43D264CEB0B1661C45(L_23, NULL);
		NullCheck(L_22);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_25;
		L_25 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_22, L_24, NULL);
		__this->___U3CU3E2__current_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0083:
	{
		// if (loopType == LoopType.random)
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->___loopType_13;
		if ((!(((uint32_t)L_27) == ((uint32_t)3))))
		{
			goto IL_009b;
		}
	}
	{
		// StartCoroutine(ReachedEnd());
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_28 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_29 = V_1;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = navMove_ReachedEnd_m86AF780B08DD941379D1C3E8053206CF36100E90(L_29, NULL);
		NullCheck(L_28);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_31;
		L_31 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_28, L_30, NULL);
		// yield break;
		return (bool)0;
	}

IL_009b:
	{
		// if (moveToPath)
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_32 = V_1;
		NullCheck(L_32);
		bool L_33 = L_32->___moveToPath_6;
		if (!L_33)
		{
			goto IL_00b2;
		}
	}
	{
		// StartCoroutine(NextWaypoint());
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_34 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_35 = V_1;
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = navMove_NextWaypoint_m84ED935465B6916136F41DF93A1749103C1788D1(L_35, NULL);
		NullCheck(L_34);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_37;
		L_37 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_34, L_36, NULL);
		goto IL_00be;
	}

IL_00b2:
	{
		// GoToWaypoint(startPoint);
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_38 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = L_39->___startPoint_8;
		NullCheck(L_38);
		navMove_GoToWaypoint_m915C98A415DC834E26C8E0DD4A744350DE7AED8F(L_38, L_40, NULL);
	}

IL_00be:
	{
		// moveToPath = false;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_41 = V_1;
		NullCheck(L_41);
		L_41->___moveToPath_6 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object SWS.navMove/<Move>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m34D2E0931BF3D07A0D07769692E193F707290CD5 (U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SWS.navMove/<Move>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__20_System_Collections_IEnumerator_Reset_mC3D2EBC32CC9B1026E268F0531B0C7FD059346B4 (U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveU3Ed__20_System_Collections_IEnumerator_Reset_mC3D2EBC32CC9B1026E268F0531B0C7FD059346B4_RuntimeMethod_var)));
	}
}
// System.Object SWS.navMove/<Move>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveU3Ed__20_System_Collections_IEnumerator_get_Current_m8806E5A91DEE9E3BDB04F5AC2A34806B79C63C5C (U3CMoveU3Ed__20_t54CD14EA89F01B4F19BD47FDA5C9EFEB88ECB50A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SWS.navMove/<NextWaypoint>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNextWaypointU3Ed__21__ctor_m6E453EB79A11E5C685E585E91522A7E4BC0B7C59 (U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SWS.navMove/<NextWaypoint>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNextWaypointU3Ed__21_System_IDisposable_Dispose_mE7EABD34D393C6A55D3A9422441E50322DEC6232 (U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SWS.navMove/<NextWaypoint>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CNextWaypointU3Ed__21_MoveNext_m71FD13B71F8B564CC7A71830852E4200FAC483B4 (U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE160A073D64497E84A5ACD3C59A9EB02334F459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	navMove_tF36264AF2CD464A692E7D320498558A26423BC25* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0066;
			}
			case 3:
			{
				goto IL_0159;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnWaypointChange(currentPoint);
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_3 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___currentPoint_9;
		NullCheck(L_3);
		navMove_OnWaypointChange_mC19B8E393D1931EEC373C766CF12D2FB5E1783B8(L_3, L_5, NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_6 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_6, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_006d;
	}

IL_0056:
	{
		// while (waiting) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0066:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006d:
	{
		// while (waiting) yield return null;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = L_7->___waiting_19;
		if (L_8)
		{
			goto IL_0056;
		}
	}
	{
		// Transform next = null;
		V_2 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// if (loopType == LoopType.pingPong && repeat)
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___loopType_13;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0098;
		}
	}
	{
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = L_11->___repeat_15;
		if (!L_12)
		{
			goto IL_0098;
		}
	}
	{
		// currentPoint--;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_13 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___currentPoint_9;
		NullCheck(L_13);
		L_13->___currentPoint_9 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		goto IL_00f9;
	}

IL_0098:
	{
		// else if (loopType == LoopType.random)
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = L_16->___loopType_13;
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_00eb;
		}
	}
	{
		// rndIndex++;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_18 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->___rndIndex_18;
		NullCheck(L_18);
		L_18->___rndIndex_18 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		// currentPoint = int.Parse(waypoints[rndIndex].name.Replace("Waypoint ", ""));
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_21 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_22 = V_1;
		NullCheck(L_22);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_23 = L_22->___waypoints_14;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->___rndIndex_18;
		NullCheck(L_23);
		int32_t L_26 = L_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_27, NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_28, _stringLiteralAE160A073D64497E84A5ACD3C59A9EB02334F459, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_30;
		L_30 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_29, NULL);
		NullCheck(L_21);
		L_21->___currentPoint_9 = L_30;
		// next = waypoints[rndIndex];
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_31 = V_1;
		NullCheck(L_31);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = L_31->___waypoints_14;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = L_33->___rndIndex_18;
		NullCheck(L_32);
		int32_t L_35 = L_34;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_2 = L_36;
		goto IL_00f9;
	}

IL_00eb:
	{
		// currentPoint++;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_37 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39 = L_38->___currentPoint_9;
		NullCheck(L_37);
		L_37->___currentPoint_9 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00f9:
	{
		// currentPoint = Mathf.Clamp(currentPoint, 0, waypoints.Length - 1);
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_40 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = L_41->___currentPoint_9;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_43 = V_1;
		NullCheck(L_43);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_44 = L_43->___waypoints_14;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_42, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_44)->max_length)), 1)), NULL);
		NullCheck(L_40);
		L_40->___currentPoint_9 = L_45;
		// if (next == null) next = waypoints[currentPoint];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_012c;
		}
	}
	{
		// if (next == null) next = waypoints[currentPoint];
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_48 = V_1;
		NullCheck(L_48);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_49 = L_48->___waypoints_14;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_50 = V_1;
		NullCheck(L_50);
		int32_t L_51 = L_50->___currentPoint_9;
		NullCheck(L_49);
		int32_t L_52 = L_51;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_2 = L_53;
	}

IL_012c:
	{
		// agent.SetDestination(next.position);
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_54 = V_1;
		NullCheck(L_54);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_55 = L_54->___agent_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = V_2;
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		NullCheck(L_55);
		bool L_58;
		L_58 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_55, L_57, NULL);
		// yield return StartCoroutine(WaitForDestination());
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_59 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_60 = V_1;
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = navMove_WaitForDestination_mDEA23C5579DDF3608B2C0A43D264CEB0B1661C45(L_60, NULL);
		NullCheck(L_59);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_62;
		L_62 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_59, L_61, NULL);
		__this->___U3CU3E2__current_1 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_62);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0159:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (loopType != LoopType.random && currentPoint == waypoints.Length - 1
		//     || rndIndex == waypoints.Length - 1 || repeat && currentPoint == 0)
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = L_63->___loopType_13;
		if ((((int32_t)L_64) == ((int32_t)3)))
		{
			goto IL_017b;
		}
	}
	{
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_65 = V_1;
		NullCheck(L_65);
		int32_t L_66 = L_65->___currentPoint_9;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_67 = V_1;
		NullCheck(L_67);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_68 = L_67->___waypoints_14;
		NullCheck(L_68);
		if ((((int32_t)L_66) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_68)->max_length)), 1)))))
		{
			goto IL_019d;
		}
	}

IL_017b:
	{
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_69 = V_1;
		NullCheck(L_69);
		int32_t L_70 = L_69->___rndIndex_18;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_71 = V_1;
		NullCheck(L_71);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_72 = L_71->___waypoints_14;
		NullCheck(L_72);
		if ((((int32_t)L_70) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_72)->max_length)), 1)))))
		{
			goto IL_019d;
		}
	}
	{
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_73 = V_1;
		NullCheck(L_73);
		bool L_74 = L_73->___repeat_15;
		if (!L_74)
		{
			goto IL_01ac;
		}
	}
	{
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_75 = V_1;
		NullCheck(L_75);
		int32_t L_76 = L_75->___currentPoint_9;
		if (L_76)
		{
			goto IL_01ac;
		}
	}

IL_019d:
	{
		// StartCoroutine(ReachedEnd());
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_77 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_78 = V_1;
		NullCheck(L_78);
		RuntimeObject* L_79;
		L_79 = navMove_ReachedEnd_m86AF780B08DD941379D1C3E8053206CF36100E90(L_78, NULL);
		NullCheck(L_77);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_80;
		L_80 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_77, L_79, NULL);
		goto IL_01b9;
	}

IL_01ac:
	{
		// StartCoroutine(NextWaypoint());
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_81 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_82 = V_1;
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = navMove_NextWaypoint_m84ED935465B6916136F41DF93A1749103C1788D1(L_82, NULL);
		NullCheck(L_81);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_84;
		L_84 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_81, L_83, NULL);
	}

IL_01b9:
	{
		// }
		return (bool)0;
	}
}
// System.Object SWS.navMove/<NextWaypoint>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNextWaypointU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m00FC6764A26D884363296D3A0EE8BC051CA492CD (U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SWS.navMove/<NextWaypoint>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNextWaypointU3Ed__21_System_Collections_IEnumerator_Reset_m09D054AB5B7FABFC1ED14EB959E3A8781CBAC541 (U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CNextWaypointU3Ed__21_System_Collections_IEnumerator_Reset_m09D054AB5B7FABFC1ED14EB959E3A8781CBAC541_RuntimeMethod_var)));
	}
}
// System.Object SWS.navMove/<NextWaypoint>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNextWaypointU3Ed__21_System_Collections_IEnumerator_get_Current_mE237B5C695A3C2DF7406180E9ED192CA310F1DA8 (U3CNextWaypointU3Ed__21_t251EB899ED36B00CBE35295FF89756899B9D21BA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SWS.navMove/<WaitForDestination>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDestinationU3Ed__22__ctor_m8EE296E2AD37A8E5E255146918487DC542A3C2C2 (U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SWS.navMove/<WaitForDestination>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDestinationU3Ed__22_System_IDisposable_Dispose_mE9D375C811AF259E9B2F30EFF46DF43DF908356B (U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SWS.navMove/<WaitForDestination>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForDestinationU3Ed__22_MoveNext_m890DAC3A366E4C543D97AF93072444348A0B06AA (U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	navMove_tF36264AF2CD464A692E7D320498558A26423BC25* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_005e;
			}
			case 3:
			{
				goto IL_0086;
			}
			case 4:
			{
				goto IL_00c1;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_3 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0065;
	}

IL_004e:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_005e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0065:
	{
		// while (agent.pathPending)
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_4 = V_1;
		NullCheck(L_4);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_5 = L_4->___agent_16;
		NullCheck(L_5);
		bool L_6;
		L_6 = NavMeshAgent_get_pathPending_mA806A4DC1E06CA32A4E7E71B6846B516EC8C2487(L_5, NULL);
		if (L_6)
		{
			goto IL_004e;
		}
	}
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_7 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_7, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0086:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float remain = agent.remainingDistance;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_8 = V_1;
		NullCheck(L_8);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_9 = L_8->___agent_16;
		NullCheck(L_9);
		float L_10;
		L_10 = NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A(L_9, NULL);
		__this->___U3CremainU3E5__2_3 = L_10;
		goto IL_00c8;
	}

IL_00a0:
	{
		// remain = agent.remainingDistance;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_11 = V_1;
		NullCheck(L_11);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_12 = L_11->___agent_16;
		NullCheck(L_12);
		float L_13;
		L_13 = NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A(L_12, NULL);
		__this->___U3CremainU3E5__2_3 = L_13;
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_00c1:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c8:
	{
		// while (remain == Mathf.Infinity || remain - agent.stoppingDistance > float.Epsilon
		// || agent.pathStatus != NavMeshPathStatus.PathComplete)
		float L_14 = __this->___U3CremainU3E5__2_3;
		if ((((float)L_14) == ((float)(std::numeric_limits<float>::infinity()))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_15 = __this->___U3CremainU3E5__2_3;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_16 = V_1;
		NullCheck(L_16);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_17 = L_16->___agent_16;
		NullCheck(L_17);
		float L_18;
		L_18 = NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4(L_17, NULL);
		if ((((float)((float)il2cpp_codegen_subtract(L_15, L_18))) > ((float)(1.40129846E-45f))))
		{
			goto IL_00a0;
		}
	}
	{
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_19 = V_1;
		NullCheck(L_19);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_20 = L_19->___agent_16;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = NavMeshAgent_get_pathStatus_m86F0B08D0018E3230218F8ED3A7C522A3765B648(L_20, NULL);
		if (L_21)
		{
			goto IL_00a0;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SWS.navMove/<WaitForDestination>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForDestinationU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m585230E70823B20B1FCA701C28C27BC9733FA2AF (U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SWS.navMove/<WaitForDestination>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDestinationU3Ed__22_System_Collections_IEnumerator_Reset_mAB2FB6CED27B23E05CF79E702E95712B4322B0B9 (U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForDestinationU3Ed__22_System_Collections_IEnumerator_Reset_mAB2FB6CED27B23E05CF79E702E95712B4322B0B9_RuntimeMethod_var)));
	}
}
// System.Object SWS.navMove/<WaitForDestination>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForDestinationU3Ed__22_System_Collections_IEnumerator_get_Current_m156A0FFB3ED59708CE49760B0EE9159C9AA46171 (U3CWaitForDestinationU3Ed__22_t31D5E4BF84B58DB1343EE2096ADCDB69B05E4707* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SWS.navMove/<ReachedEnd>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReachedEndU3Ed__24__ctor_mF56977403FD89253EE68F46860CCCE58232AE018 (U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SWS.navMove/<ReachedEnd>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReachedEndU3Ed__24_System_IDisposable_Dispose_mFFF8C4CAF69F3DCE4024D9471E08F4B39EF4035E (U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SWS.navMove/<ReachedEnd>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReachedEndU3Ed__24_MoveNext_m0A5300FD12A76073B0808932B2473C69A46CA6E2 (U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	navMove_tF36264AF2CD464A692E7D320498558A26423BC25* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a1;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// switch (loopType)
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___loopType_13;
		V_2 = L_5;
		int32_t L_6 = V_2;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_00cc;
			}
			case 3:
			{
				goto IL_00dd;
			}
		}
	}
	{
		goto IL_00e3;
	}

IL_0043:
	{
		// OnWaypointChange(waypoints.Length - 1);
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_7 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_8 = V_1;
		NullCheck(L_8);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = L_8->___waypoints_14;
		NullCheck(L_9);
		NullCheck(L_7);
		navMove_OnWaypointChange_mC19B8E393D1931EEC373C766CF12D2FB5E1783B8(L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1)), NULL);
		// yield break;
		return (bool)0;
	}

IL_0055:
	{
		// OnWaypointChange(waypoints.Length - 1);
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_10 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_11 = V_1;
		NullCheck(L_11);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = L_11->___waypoints_14;
		NullCheck(L_12);
		NullCheck(L_10);
		navMove_OnWaypointChange_mC19B8E393D1931EEC373C766CF12D2FB5E1783B8(L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), 1)), NULL);
		// if (closeLoop)
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = L_13->___closeLoop_10;
		if (!L_14)
		{
			goto IL_00aa;
		}
	}
	{
		// agent.SetDestination(waypoints[0].position);
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_15 = V_1;
		NullCheck(L_15);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_16 = L_15->___agent_16;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_17 = V_1;
		NullCheck(L_17);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_18 = L_17->___waypoints_14;
		NullCheck(L_18);
		int32_t L_19 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		NullCheck(L_16);
		bool L_22;
		L_22 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_16, L_21, NULL);
		// yield return StartCoroutine(WaitForDestination());
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_23 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_24 = V_1;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = navMove_WaitForDestination_mDEA23C5579DDF3608B2C0A43D264CEB0B1661C45(L_24, NULL);
		NullCheck(L_23);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_26;
		L_26 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_23, L_25, NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a1:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00c3;
	}

IL_00aa:
	{
		// agent.Warp(waypoints[0].position);
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_27 = V_1;
		NullCheck(L_27);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_28 = L_27->___agent_16;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_29 = V_1;
		NullCheck(L_29);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_30 = L_29->___waypoints_14;
		NullCheck(L_30);
		int32_t L_31 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		NullCheck(L_28);
		bool L_34;
		L_34 = NavMeshAgent_Warp_mAD14E576F74544EEDAD0AF097E498C58D3C0E4F5(L_28, L_33, NULL);
	}

IL_00c3:
	{
		// currentPoint = 0;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_35 = V_1;
		NullCheck(L_35);
		L_35->___currentPoint_9 = 0;
		// break;
		goto IL_00e3;
	}

IL_00cc:
	{
		// repeat = !repeat;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_36 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_37 = V_1;
		NullCheck(L_37);
		bool L_38 = L_37->___repeat_15;
		NullCheck(L_36);
		L_36->___repeat_15 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		// break;
		goto IL_00e3;
	}

IL_00dd:
	{
		// RandomizeWaypoints();
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_39 = V_1;
		NullCheck(L_39);
		navMove_RandomizeWaypoints_m3737AAFFF68D4A447C3C362BA1CD8257496F5C85(L_39, NULL);
	}

IL_00e3:
	{
		// StartCoroutine(NextWaypoint());
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_40 = V_1;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_41 = V_1;
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = navMove_NextWaypoint_m84ED935465B6916136F41DF93A1749103C1788D1(L_41, NULL);
		NullCheck(L_40);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_43;
		L_43 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_40, L_42, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SWS.navMove/<ReachedEnd>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReachedEndU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4AA17208FDB0EBFA01D2FC6A2E0FDB63D2A4EBFE (U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SWS.navMove/<ReachedEnd>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReachedEndU3Ed__24_System_Collections_IEnumerator_Reset_mB5CC871FFC02E8EF15D8F24D02AF755816C5E33E (U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReachedEndU3Ed__24_System_Collections_IEnumerator_Reset_mB5CC871FFC02E8EF15D8F24D02AF755816C5E33E_RuntimeMethod_var)));
	}
}
// System.Object SWS.navMove/<ReachedEnd>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReachedEndU3Ed__24_System_Collections_IEnumerator_get_Current_m778B23671EB1AB1536B7EE3BFBD4D3FBF67DE797 (U3CReachedEndU3Ed__24_t3726BE86DC0E02EBE29F1563884C73ADACB9842F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SWS.navMove/<Wait>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__28__ctor_m9811AFAFA8CCAF8CCC55CB52B45585A37CB60E03 (U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SWS.navMove/<Wait>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__28_System_IDisposable_Dispose_m6CF8FC05C619C83E9FFF14CACD72753480F7B143 (U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SWS.navMove/<Wait>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitU3Ed__28_MoveNext_m79674FC5325351DCE2CB69E90EA919DFC336D193 (U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	navMove_tF36264AF2CD464A692E7D320498558A26423BC25* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(secs);
		float L_4 = __this->___secs_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Resume();
		navMove_tF36264AF2CD464A692E7D320498558A26423BC25* L_6 = V_1;
		NullCheck(L_6);
		navMove_Resume_m72827C8F36175F8160866069EE63615076B45D5E(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SWS.navMove/<Wait>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m02260CB3F3CEB625244C4911909699DD571C0EEE (U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SWS.navMove/<Wait>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__28_System_Collections_IEnumerator_Reset_m95F5F9B9D7C19016EB7CFBE40FE45307FECB21E1 (U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitU3Ed__28_System_Collections_IEnumerator_Reset_m95F5F9B9D7C19016EB7CFBE40FE45307FECB21E1_RuntimeMethod_var)));
	}
}
// System.Object SWS.navMove/<Wait>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitU3Ed__28_System_Collections_IEnumerator_get_Current_mD751302608EDA22F9C120E702E84163E24A3CC01 (U3CWaitU3Ed__28_t22F134C35877973E8533DC41101F29EFC7FE2C31* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SWS.splineMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_Start_m22C344A865428DF1C7FCA1A3193969A1915C14FB (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) 
{
	{
		// if (onStart)
		bool L_0 = __this->___onStart_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// StartMove();
		splineMove_StartMove_mE68621BCE82BA16DA22CDFB15EB11E3D7302ADC0(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void SWS.splineMove::StartMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_StartMove_mE68621BCE82BA16DA22CDFB15EB11E3D7302ADC0 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE484430C363DB5BCFD75D35444B3C51C8ABA6E44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AF37D9BFF637BC24A7F34A67D99328EFA2263);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (pathContainer == null)
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_0 = __this->___pathContainer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogWarning(gameObject.name + " has no path! Please set Path Container.");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral106AF37D9BFF637BC24A7F34A67D99328EFA2263, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_4, NULL);
		// return;
		return;
	}

IL_0029:
	{
		// waypoints = pathContainer.GetPathPoints(local);
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_5 = __this->___pathContainer_4;
		bool L_6 = __this->___local_11;
		NullCheck(L_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7;
		L_7 = VirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, bool >::Invoke(6 /* UnityEngine.Vector3[] SWS.PathManager::GetPathPoints(System.Boolean) */, L_5, L_6);
		__this->___waypoints_18 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypoints_18), (void*)L_7);
		// originSpeed = speed;
		float L_8 = __this->___speed_15;
		__this->___originSpeed_29 = L_8;
		// originRot = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		__this->___originRot_30 = L_10;
		// startPoint = Mathf.Clamp(startPoint, 0, waypoints.Length - 1);
		int32_t L_11 = __this->___startPoint_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = __this->___waypoints_18;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), 1)), NULL);
		__this->___startPoint_8 = L_13;
		// int index = startPoint;
		int32_t L_14 = __this->___startPoint_8;
		V_0 = L_14;
		// if (reverse)
		bool L_15 = __this->___reverse_7;
		if (!L_15)
		{
			goto IL_00a0;
		}
	}
	{
		// Array.Reverse(waypoints);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = __this->___waypoints_18;
		Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE484430C363DB5BCFD75D35444B3C51C8ABA6E44(L_16, Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE484430C363DB5BCFD75D35444B3C51C8ABA6E44_RuntimeMethod_var);
		// index = waypoints.Length - 1 - index;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = __this->___waypoints_18;
		NullCheck(L_17);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), 1)), L_18));
	}

IL_00a0:
	{
		// Initialize(index);
		int32_t L_19 = V_0;
		splineMove_Initialize_m50388305C30A0E20B267E42CDF4CCFCE708EBE72(__this, L_19, NULL);
		// Stop();
		splineMove_Stop_m8EC503FADA5846EAA957350FA4F7B548028E50F8(__this, NULL);
		// CreateTween();
		splineMove_CreateTween_mD42920EAF28DDCE715F6AD2FE3C889AC0ADA0C36(__this, NULL);
		// }
		return;
	}
}
// System.Void SWS.splineMove::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_Initialize_m50388305C30A0E20B267E42CDF4CCFCE708EBE72 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, int32_t ___0_startAt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m195F1660174CEF31B814EB8014F3F5391452FD17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (!moveToPath) startAt = 0;
		bool L_0 = __this->___moveToPath_6;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// if (!moveToPath) startAt = 0;
		___0_startAt = 0;
	}

IL_000b:
	{
		// wpPos = new Vector3[waypoints.Length - startAt];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->___waypoints_18;
		NullCheck(L_1);
		int32_t L_2 = ___0_startAt;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), L_2)));
		__this->___wpPos_28 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wpPos_28), (void*)L_3);
		// for (int i = 0; i < wpPos.Length; i++)
		V_0 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		// wpPos[i] = waypoints[i + startAt] + new Vector3(0, sizeToAdd, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = __this->___wpPos_28;
		int32_t L_5 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->___waypoints_18;
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_startAt;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		float L_11 = __this->___sizeToAdd_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.0f), L_11, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_12, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_13);
		// for (int i = 0; i < wpPos.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_005c:
	{
		// for (int i = 0; i < wpPos.Length; i++)
		int32_t L_15 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = __this->___wpPos_28;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		// for (int i = events.Count; i <= pathContainer.GetWaypointCount() - 1; i++)
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_17 = __this->___events_19;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_inline(L_17, List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_RuntimeMethod_var);
		V_1 = L_18;
		goto IL_0089;
	}

IL_0075:
	{
		// events.Add(new UnityEvent());
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_19 = __this->___events_19;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_20 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_20, NULL);
		NullCheck(L_19);
		List_1_Add_m195F1660174CEF31B814EB8014F3F5391452FD17_inline(L_19, L_20, List_1_Add_m195F1660174CEF31B814EB8014F3F5391452FD17_RuntimeMethod_var);
		// for (int i = events.Count; i <= pathContainer.GetWaypointCount() - 1; i++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0089:
	{
		// for (int i = events.Count; i <= pathContainer.GetWaypointCount() - 1; i++)
		int32_t L_22 = V_1;
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_23 = __this->___pathContainer_4;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 SWS.PathManager::GetWaypointCount() */, L_23);
		if ((((int32_t)L_22) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1)))))
		{
			goto IL_0075;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SWS.splineMove::CreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_CreateTween_mD42920EAF28DDCE715F6AD2FE3C889AC0ADA0C36 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB3CE09D745DF2DCCD600CDD08EC8F451C3666C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetAs_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_m0916DFA9849225A751D8F3FA2B9E653568606B1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&splineMove_OnWaypointChange_m432EC084424BD7E4855FEBE5B80D36E540415AEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&splineMove_OnWaypointReached_mECB6097C459BE08BB154361DDDDCF37F4C618CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&splineMove_OnWaypointRotation_m358BBEDA99F8C357CD235DBD15AF294716335C1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&splineMove_ReachedEnd_m216B0DE871FEA1CA0B013CD6AD7ABA0D80FB835B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* V_0 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// TweenParams parms = new TweenParams();
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_0 = (TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA*)il2cpp_codegen_object_new(TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TweenParams__ctor_m5F3F28BA299D184563D1AF7B8B19DBF186915F2E(L_0, NULL);
		V_0 = L_0;
		// if (timeValue == TimeValue.speed)
		int32_t L_1 = __this->___timeValue_14;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// parms.SetSpeedBased();
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_2 = V_0;
		NullCheck(L_2);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_3;
		L_3 = TweenParams_SetSpeedBased_m7984A5F846AC411A530E76ACE13A29C2F49BFA10(L_2, (bool)1, NULL);
	}

IL_0017:
	{
		// if (loopType == LoopType.yoyo)
		int32_t L_4 = __this->___loopType_17;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_002e;
		}
	}
	{
		// parms.SetLoops(-1, DG.Tweening.LoopType.Yoyo);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_5 = V_0;
		Nullable_1_t2C68E51BB6FC0BF5D7980289134BAC137BB0F317 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_mB3CE09D745DF2DCCD600CDD08EC8F451C3666C65((&L_6), 1, /*hidden argument*/Nullable_1__ctor_mB3CE09D745DF2DCCD600CDD08EC8F451C3666C65_RuntimeMethod_var);
		NullCheck(L_5);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_7;
		L_7 = TweenParams_SetLoops_m8191038E50515B7171130F5A63B58D49A4AE751F(L_5, (-1), L_6, NULL);
	}

IL_002e:
	{
		// if (easeType == DG.Tweening.Ease.Unset)
		int32_t L_8 = __this->___easeType_22;
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		// parms.SetEase(animEaseType);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_9 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = __this->___animEaseType_16;
		NullCheck(L_9);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_11;
		L_11 = TweenParams_SetEase_m5919B6168471BD922DA020F3DF62D1759B42EEA3(L_9, L_10, NULL);
		goto IL_0064;
	}

IL_0045:
	{
		// parms.SetEase(easeType);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_12 = V_0;
		int32_t L_13 = __this->___easeType_22;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_14 = V_1;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_15 = V_1;
		NullCheck(L_12);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_16;
		L_16 = TweenParams_SetEase_m595B5405EAB2EF60C8B08934202922724323F568(L_12, L_13, L_14, L_15, NULL);
	}

IL_0064:
	{
		// if (moveToPath)
		bool L_17 = __this->___moveToPath_6;
		if (!L_17)
		{
			goto IL_0084;
		}
	}
	{
		// parms.OnWaypointChange(OnWaypointReached);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_18 = V_0;
		TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* L_19 = (TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67*)il2cpp_codegen_object_new(TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		TweenCallback_1__ctor_mD38D0EEEABC05DBE94D229AF084F5FCE239C6EB8(L_19, __this, (intptr_t)((void*)splineMove_OnWaypointReached_mECB6097C459BE08BB154361DDDDCF37F4C618CC0_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_20;
		L_20 = TweenParams_OnWaypointChange_m24647E70B50CB31A9D37DF7AA2DD42AAAED34492(L_18, L_19, NULL);
		goto IL_010a;
	}

IL_0084:
	{
		// if (loopType == LoopType.random)
		int32_t L_21 = __this->___loopType_17;
		if ((!(((uint32_t)L_21) == ((uint32_t)3))))
		{
			goto IL_0095;
		}
	}
	{
		// RandomizeWaypoints();
		splineMove_RandomizeWaypoints_m16B7F98283D59F3E9AC0542717AFC77AFA6A53C7(__this, NULL);
		goto IL_00b1;
	}

IL_0095:
	{
		// else if (loopType == LoopType.yoyo)
		int32_t L_22 = __this->___loopType_17;
		if ((!(((uint32_t)L_22) == ((uint32_t)4))))
		{
			goto IL_00b1;
		}
	}
	{
		// parms.OnStepComplete(ReachedEnd);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_23 = V_0;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_24 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_24, __this, (intptr_t)((void*)splineMove_ReachedEnd_m216B0DE871FEA1CA0B013CD6AD7ABA0D80FB835B_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_25;
		L_25 = TweenParams_OnStepComplete_m2BB5EA797AFB686F45AADDBBD3A986B7C511476C(L_23, L_24, NULL);
	}

IL_00b1:
	{
		// Vector3 startPos = wpPos[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = __this->___wpPos_28;
		NullCheck(L_26);
		int32_t L_27 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_2 = L_28;
		// if (local) startPos = pathContainer.transform.TransformPoint(startPos);
		bool L_29 = __this->___local_11;
		if (!L_29)
		{
			goto IL_00d8;
		}
	}
	{
		// if (local) startPos = pathContainer.transform.TransformPoint(startPos);
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_30 = __this->___pathContainer_4;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_2;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_31, L_32, NULL);
		V_2 = L_33;
	}

IL_00d8:
	{
		// transform.position = startPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_2;
		NullCheck(L_34);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_34, L_35, NULL);
		// parms.OnWaypointChange(OnWaypointChange);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_36 = V_0;
		TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* L_37 = (TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67*)il2cpp_codegen_object_new(TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		TweenCallback_1__ctor_mD38D0EEEABC05DBE94D229AF084F5FCE239C6EB8(L_37, __this, (intptr_t)((void*)splineMove_OnWaypointChange_m432EC084424BD7E4855FEBE5B80D36E540415AEF_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_38;
		L_38 = TweenParams_OnWaypointChange_m24647E70B50CB31A9D37DF7AA2DD42AAAED34492(L_36, L_37, NULL);
		// parms.OnComplete(ReachedEnd);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_39 = V_0;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_40 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_40, __this, (intptr_t)((void*)splineMove_ReachedEnd_m216B0DE871FEA1CA0B013CD6AD7ABA0D80FB835B_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_41;
		L_41 = TweenParams_OnComplete_mE829825D5F74322D13F2B6C4EBF59A8FF2A06191(L_39, L_40, NULL);
	}

IL_010a:
	{
		// if (pathMode == DG.Tweening.PathMode.Ignore &&
		//     waypointRotation != RotationType.none)
		int32_t L_42 = __this->___pathMode_21;
		if (L_42)
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_43 = __this->___waypointRotation_25;
		if (!L_43)
		{
			goto IL_0147;
		}
	}
	{
		// if (rotationTarget == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = __this->___rotationTarget_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_44, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_45)
		{
			goto IL_0134;
		}
	}
	{
		// rotationTarget = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___rotationTarget_26 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rotationTarget_26), (void*)L_46);
	}

IL_0134:
	{
		// parms.OnUpdate(OnWaypointRotation);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_47 = V_0;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_48 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_48, __this, (intptr_t)((void*)splineMove_OnWaypointRotation_m358BBEDA99F8C357CD235DBD15AF294716335C1D_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_49;
		L_49 = TweenParams_OnUpdate_m95CD680B0CA15FFD9098DF88DE81310355DACCE8(L_47, L_48, NULL);
	}

IL_0147:
	{
		// if (local)
		bool L_50 = __this->___local_11;
		if (!L_50)
		{
			goto IL_01c1;
		}
	}
	{
		// tween = transform.DOLocalPath(wpPos, originSpeed, pathType, pathMode)
		//                  .SetAs(parms)
		//                  .SetOptions(closeLoop, lockPosition, lockRotation)
		//                  .SetLookAt(lookAhead);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_52 = __this->___wpPos_28;
		float L_53 = __this->___originSpeed_29;
		int32_t L_54 = __this->___pathType_20;
		int32_t L_55 = __this->___pathMode_21;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11));
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_56 = V_3;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_57;
		L_57 = ShortcutExtensions_DOLocalPath_m00D123733C52DD578549A9F31151194C0CA079BB(L_51, L_52, L_53, L_54, L_55, ((int32_t)10), L_56, NULL);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_58 = V_0;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_59;
		L_59 = TweenSettingsExtensions_SetAs_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_m0916DFA9849225A751D8F3FA2B9E653568606B1A(L_57, L_58, TweenSettingsExtensions_SetAs_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_m0916DFA9849225A751D8F3FA2B9E653568606B1A_RuntimeMethod_var);
		bool L_60 = __this->___closeLoop_10;
		int32_t L_61 = __this->___lockPosition_23;
		int32_t L_62 = __this->___lockRotation_24;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_63;
		L_63 = TweenSettingsExtensions_SetOptions_m5E6F9A1145201D9D34824DE50132581D3DDC8DCE(L_59, L_60, L_61, L_62, NULL);
		float L_64 = __this->___lookAhead_12;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE));
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_65 = V_4;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE));
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_66 = V_4;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_67;
		L_67 = TweenSettingsExtensions_SetLookAt_mECF406EE42F980E66C745916D2BBDF63F7E4C0D6(L_63, L_64, L_65, L_66, NULL);
		__this->___tween_27 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tween_27), (void*)L_67);
		goto IL_0231;
	}

IL_01c1:
	{
		// tween = transform.DOPath(wpPos, originSpeed, pathType, pathMode)
		//                  .SetAs(parms)
		//                  .SetOptions(closeLoop, lockPosition, lockRotation)
		//                  .SetLookAt(lookAhead);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_69 = __this->___wpPos_28;
		float L_70 = __this->___originSpeed_29;
		int32_t L_71 = __this->___pathType_20;
		int32_t L_72 = __this->___pathMode_21;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11));
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_73 = V_3;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_74;
		L_74 = ShortcutExtensions_DOPath_mB31C78FE35F62166F934D044D3B0B4BAC6304D4B(L_68, L_69, L_70, L_71, L_72, ((int32_t)10), L_73, NULL);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_75 = V_0;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_76;
		L_76 = TweenSettingsExtensions_SetAs_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_m0916DFA9849225A751D8F3FA2B9E653568606B1A(L_74, L_75, TweenSettingsExtensions_SetAs_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_m0916DFA9849225A751D8F3FA2B9E653568606B1A_RuntimeMethod_var);
		bool L_77 = __this->___closeLoop_10;
		int32_t L_78 = __this->___lockPosition_23;
		int32_t L_79 = __this->___lockRotation_24;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_80;
		L_80 = TweenSettingsExtensions_SetOptions_m5E6F9A1145201D9D34824DE50132581D3DDC8DCE(L_76, L_77, L_78, L_79, NULL);
		float L_81 = __this->___lookAhead_12;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE));
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_82 = V_4;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE));
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_83 = V_4;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_84;
		L_84 = TweenSettingsExtensions_SetLookAt_mECF406EE42F980E66C745916D2BBDF63F7E4C0D6(L_80, L_81, L_82, L_83, NULL);
		__this->___tween_27 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tween_27), (void*)L_84);
	}

IL_0231:
	{
		// if (!moveToPath && startPoint > 0)
		bool L_85 = __this->___moveToPath_6;
		if (L_85)
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_86 = __this->___startPoint_8;
		if ((((int32_t)L_86) <= ((int32_t)0)))
		{
			goto IL_0255;
		}
	}
	{
		// GoToWaypoint(startPoint);
		int32_t L_87 = __this->___startPoint_8;
		splineMove_GoToWaypoint_m639E9794AD5344E086E1C3776A8C7F6B67816040(__this, L_87, NULL);
		// startPoint = 0;
		__this->___startPoint_8 = 0;
	}

IL_0255:
	{
		// if (originSpeed != speed)
		float L_88 = __this->___originSpeed_29;
		float L_89 = __this->___speed_15;
		if ((((float)L_88) == ((float)L_89)))
		{
			goto IL_026f;
		}
	}
	{
		// ChangeSpeed(speed);
		float L_90 = __this->___speed_15;
		splineMove_ChangeSpeed_m8DE14A41F7624B20B4E81A2A09DB21C26EADF06B(__this, L_90, NULL);
	}

IL_026f:
	{
		// }
		return;
	}
}
// System.Void SWS.splineMove::OnWaypointReached(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_OnWaypointReached_mECB6097C459BE08BB154361DDDDCF37F4C618CC0 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// if (index <= 0) return;
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		// if (index <= 0) return;
		return;
	}

IL_0005:
	{
		// Stop();
		splineMove_Stop_m8EC503FADA5846EAA957350FA4F7B548028E50F8(__this, NULL);
		// moveToPath = false;
		__this->___moveToPath_6 = (bool)0;
		// Initialize();
		splineMove_Initialize_m50388305C30A0E20B267E42CDF4CCFCE708EBE72(__this, 0, NULL);
		// CreateTween();
		splineMove_CreateTween_mD42920EAF28DDCE715F6AD2FE3C889AC0ADA0C36(__this, NULL);
		// }
		return;
	}
}
// System.Void SWS.splineMove::OnWaypointChange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_OnWaypointChange_m432EC084424BD7E4855FEBE5B80D36E540415AEF (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index = pathContainer.GetWaypointIndex(index);
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_0 = __this->___pathContainer_4;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(8 /* System.Int32 SWS.PathManager::GetWaypointIndex(System.Int32) */, L_0, L_1);
		___0_index = L_2;
		// if (index == -1) return;
		int32_t L_3 = ___0_index;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}
	{
		// if (index == -1) return;
		return;
	}

IL_0013:
	{
		// if (loopType != LoopType.yoyo && reverse)
		int32_t L_4 = __this->___loopType_17;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		bool L_5 = __this->___reverse_7;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// index = waypoints.Length - 1 - index;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->___waypoints_18;
		NullCheck(L_6);
		int32_t L_7 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1)), L_7));
	}

IL_0032:
	{
		// if (loopType == LoopType.random)
		int32_t L_8 = __this->___loopType_17;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_0045;
		}
	}
	{
		// index = rndArray[index];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___rndArray_32;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		___0_index = L_12;
	}

IL_0045:
	{
		// currentPoint = index;
		int32_t L_13 = ___0_index;
		__this->___currentPoint_9 = L_13;
		// if (events == null || events.Count - 1 < index || events[index] == null
		//     || loopType == LoopType.random && index == rndArray[rndArray.Length - 1])
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_14 = __this->___events_19;
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_15 = __this->___events_19;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_inline(L_15, List_1_get_Count_m795117AF470FDE35817992DBFD1230723BE4B03D_RuntimeMethod_var);
		int32_t L_17 = ___0_index;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1))) < ((int32_t)L_17)))
		{
			goto IL_008f;
		}
	}
	{
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_18 = __this->___events_19;
		int32_t L_19 = ___0_index;
		NullCheck(L_18);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_20;
		L_20 = List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0(L_18, L_19, List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_21 = __this->___loopType_17;
		if ((!(((uint32_t)L_21) == ((uint32_t)3))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_22 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->___rndArray_32;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___rndArray_32;
		NullCheck(L_24);
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1));
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((uint32_t)L_22) == ((uint32_t)L_26))))
		{
			goto IL_0090;
		}
	}

IL_008f:
	{
		// return;
		return;
	}

IL_0090:
	{
		// events[index].Invoke();
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_27 = __this->___events_19;
		int32_t L_28 = ___0_index;
		NullCheck(L_27);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_29;
		L_29 = List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0(L_27, L_28, List_1_get_Item_m864E86D7BCEFF6D935171DAC68D1B47F6C3111F0_RuntimeMethod_var);
		NullCheck(L_29);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_29, NULL);
		// }
		return;
	}
}
// System.Void SWS.splineMove::OnWaypointRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_OnWaypointRotation_m358BBEDA99F8C357CD235DBD15AF294716335C1D (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* G_B40_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B40_1;
	memset((&G_B40_1), 0, sizeof(G_B40_1));
	splineMove_t3B37A328F6D49808D678F015EA04450552912754* G_B40_2 = NULL;
	PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* G_B39_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B39_1;
	memset((&G_B39_1), 0, sizeof(G_B39_1));
	splineMove_t3B37A328F6D49808D678F015EA04450552912754* G_B39_2 = NULL;
	int32_t G_B41_0 = 0;
	PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* G_B41_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B41_2;
	memset((&G_B41_2), 0, sizeof(G_B41_2));
	splineMove_t3B37A328F6D49808D678F015EA04450552912754* G_B41_3 = NULL;
	{
		// int lookPoint = currentPoint;
		int32_t L_0 = __this->___currentPoint_9;
		V_0 = L_0;
		// lookPoint = Mathf.Clamp(pathContainer.GetWaypointIndex(currentPoint), 0, pathContainer.GetWaypointCount());
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_1 = __this->___pathContainer_4;
		int32_t L_2 = __this->___currentPoint_9;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(8 /* System.Int32 SWS.PathManager::GetWaypointIndex(System.Int32) */, L_1, L_2);
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_4 = __this->___pathContainer_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 SWS.PathManager::GetWaypointCount() */, L_4);
		int32_t L_6;
		L_6 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_3, 0, L_5, NULL);
		V_0 = L_6;
		// if (!tween.IsInitialized() || tween.IsComplete())
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_7 = __this->___tween_27;
		bool L_8;
		L_8 = TweenExtensions_IsInitialized_m8C2B24B55147A6773849EB32D4D00E128CAB211B(L_7, NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_9 = __this->___tween_27;
		bool L_10;
		L_10 = TweenExtensions_IsComplete_mBB619B64C19A85AB4EEEBB3D37D3E720A9E0AF4C(L_9, NULL);
		if (!L_10)
		{
			goto IL_005c;
		}
	}

IL_0044:
	{
		// ApplyWaypointRotation(pathContainer.GetWaypoint(lookPoint).rotation);
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_11 = __this->___pathContainer_4;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(7 /* UnityEngine.Transform SWS.PathManager::GetWaypoint(System.Int32) */, L_11, L_12);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		splineMove_ApplyWaypointRotation_mD0C95D2CB2CD99B780F457B3231A4D488FBD441D(__this, L_14, NULL);
		// return;
		return;
	}

IL_005c:
	{
		// TweenerCore<Vector3, Path, PathOptions> tweenPath = tween as TweenerCore<Vector3, Path, PathOptions>;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15 = __this->___tween_27;
		V_1 = ((TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA*)IsInstClass((RuntimeObject*)L_15, TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_il2cpp_TypeInfo_var));
		// float currentDist = tweenPath.PathLength() * tweenPath.ElapsedPercentage();
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_16 = V_1;
		float L_17;
		L_17 = TweenExtensions_PathLength_m754255B76B1362A6F4EE6CC8F0D7E6E6D6108AB0(L_16, NULL);
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_18 = V_1;
		float L_19;
		L_19 = TweenExtensions_ElapsedPercentage_m2B88D6261A10FE69DA344E2EDF1D72F0DC7C4FA8(L_18, (bool)1, NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_17, L_19));
		// float pathLength = 0f;
		V_3 = (0.0f);
		// float currentPerc = 0f;
		V_4 = (0.0f);
		// int targetPoint = currentPoint;
		int32_t L_20 = __this->___currentPoint_9;
		V_5 = L_20;
		// if (moveToPath)
		bool L_21 = __this->___moveToPath_6;
		if (!L_21)
		{
			goto IL_00d1;
		}
	}
	{
		// pathLength = tweenPath.changeValue.wpLengths[1];
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_22 = V_1;
		NullCheck(L_22);
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_23 = L_22->___changeValue_58;
		NullCheck(L_23);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_23->___wpLengths_3;
		NullCheck(L_24);
		int32_t L_25 = 1;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_3 = L_26;
		// currentPerc = currentDist / pathLength;
		float L_27 = V_2;
		float L_28 = V_3;
		V_4 = ((float)(L_27/L_28));
		// ApplyWaypointRotation(Quaternion.Lerp(originRot, pathContainer.GetWaypoint(currentPoint).rotation, currentPerc));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = __this->___originRot_30;
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_30 = __this->___pathContainer_4;
		int32_t L_31 = __this->___currentPoint_9;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(7 /* UnityEngine.Transform SWS.PathManager::GetWaypoint(System.Int32) */, L_30, L_31);
		NullCheck(L_32);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_32, NULL);
		float L_34 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_29, L_33, L_34, NULL);
		splineMove_ApplyWaypointRotation_mD0C95D2CB2CD99B780F457B3231A4D488FBD441D(__this, L_35, NULL);
		// return;
		return;
	}

IL_00d1:
	{
		// if (pathContainer is BezierPathManager)
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_36 = __this->___pathContainer_4;
		if (!((BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7*)IsInstClass((RuntimeObject*)L_36, BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7_il2cpp_TypeInfo_var)))
		{
			goto IL_023f;
		}
	}
	{
		// BezierPathManager bPath = pathContainer as BezierPathManager;
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_37 = __this->___pathContainer_4;
		V_6 = ((BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7*)IsInstClass((RuntimeObject*)L_37, BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7_il2cpp_TypeInfo_var));
		// int curPoint = currentPoint;
		int32_t L_38 = __this->___currentPoint_9;
		V_7 = L_38;
		// if (reverse)
		bool L_39 = __this->___reverse_7;
		if (!L_39)
		{
			goto IL_012e;
		}
	}
	{
		// targetPoint = bPath.GetWaypointCount() - 2 - (waypoints.Length - currentPoint - 1);
		BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* L_40 = V_6;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 SWS.PathManager::GetWaypointCount() */, L_40);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = __this->___waypoints_18;
		NullCheck(L_42);
		int32_t L_43 = __this->___currentPoint_9;
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_41, 2)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_42)->max_length)), L_43)), 1))));
		// curPoint = (bPath.bPoints.Count - 2) - targetPoint;
		BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* L_44 = V_6;
		NullCheck(L_44);
		List_1_tE9E0558D96950140AF88BAEBF9C7399075C06F81* L_45 = L_44->___bPoints_14;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_inline(L_45, List_1_get_Count_m12A94E46B1998AD02BF3C14AD9DCBA627FECF7E9_RuntimeMethod_var);
		int32_t L_47 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_46, 2)), L_47));
	}

IL_012e:
	{
		// int prevPoints = (int)(curPoint * bPath.pathDetail * 10);
		int32_t L_48 = V_7;
		BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* L_49 = V_6;
		NullCheck(L_49);
		float L_50 = L_49->___pathDetail_18;
		V_8 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_48), L_50)), (10.0f))));
		// if (bPath.customDetail)
		BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* L_51 = V_6;
		NullCheck(L_51);
		bool L_52 = L_51->___customDetail_19;
		if (!L_52)
		{
			goto IL_0179;
		}
	}
	{
		// prevPoints = 0;
		V_8 = 0;
		// for (int i = 0; i < targetPoint; i++)
		V_9 = 0;
		goto IL_0173;
	}

IL_0153:
	{
		// prevPoints += (int)(bPath.segmentDetail[i] * 10);
		int32_t L_53 = V_8;
		BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* L_54 = V_6;
		NullCheck(L_54);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_55 = L_54->___segmentDetail_20;
		int32_t L_56 = V_9;
		NullCheck(L_55);
		float L_57;
		L_57 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_55, L_56, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_8 = ((int32_t)il2cpp_codegen_add(L_53, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_57, (10.0f))))));
		// for (int i = 0; i < targetPoint; i++)
		int32_t L_58 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0173:
	{
		// for (int i = 0; i < targetPoint; i++)
		int32_t L_59 = V_9;
		int32_t L_60 = V_5;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_0153;
		}
	}

IL_0179:
	{
		// if (reverse)
		bool L_61 = __this->___reverse_7;
		if (!L_61)
		{
			goto IL_01a8;
		}
	}
	{
		// for (int i = 0; i <= curPoint * 10; i++)
		V_10 = 0;
		goto IL_019d;
	}

IL_0186:
	{
		// currentDist -= tweenPath.changeValue.wpLengths[i];
		float L_62 = V_2;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_63 = V_1;
		NullCheck(L_63);
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_64 = L_63->___changeValue_58;
		NullCheck(L_64);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_65 = L_64->___wpLengths_3;
		int32_t L_66 = V_10;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		float L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_2 = ((float)il2cpp_codegen_subtract(L_62, L_68));
		// for (int i = 0; i <= curPoint * 10; i++)
		int32_t L_69 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_019d:
	{
		// for (int i = 0; i <= curPoint * 10; i++)
		int32_t L_70 = V_10;
		int32_t L_71 = V_7;
		if ((((int32_t)L_70) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)10))))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_01ca;
	}

IL_01a8:
	{
		// for (int i = 0; i <= prevPoints; i++)
		V_11 = 0;
		goto IL_01c4;
	}

IL_01ad:
	{
		// currentDist -= tweenPath.changeValue.wpLengths[i];
		float L_72 = V_2;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_73 = V_1;
		NullCheck(L_73);
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_74 = L_73->___changeValue_58;
		NullCheck(L_74);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_75 = L_74->___wpLengths_3;
		int32_t L_76 = V_11;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		float L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_2 = ((float)il2cpp_codegen_subtract(L_72, L_78));
		// for (int i = 0; i <= prevPoints; i++)
		int32_t L_79 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_01c4:
	{
		// for (int i = 0; i <= prevPoints; i++)
		int32_t L_80 = V_11;
		int32_t L_81 = V_8;
		if ((((int32_t)L_80) <= ((int32_t)L_81)))
		{
			goto IL_01ad;
		}
	}

IL_01ca:
	{
		// if (bPath.customDetail)
		BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* L_82 = V_6;
		NullCheck(L_82);
		bool L_83 = L_82->___customDetail_19;
		if (!L_83)
		{
			goto IL_0215;
		}
	}
	{
		// for (int i = prevPoints + 1; i <= prevPoints + bPath.segmentDetail[currentPoint] * 10; i++)
		int32_t L_84 = V_8;
		V_12 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		goto IL_01f2;
	}

IL_01db:
	{
		// pathLength += tweenPath.changeValue.wpLengths[i];
		float L_85 = V_3;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_86 = V_1;
		NullCheck(L_86);
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_87 = L_86->___changeValue_58;
		NullCheck(L_87);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_88 = L_87->___wpLengths_3;
		int32_t L_89 = V_12;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		float L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_3 = ((float)il2cpp_codegen_add(L_85, L_91));
		// for (int i = prevPoints + 1; i <= prevPoints + bPath.segmentDetail[currentPoint] * 10; i++)
		int32_t L_92 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_01f2:
	{
		// for (int i = prevPoints + 1; i <= prevPoints + bPath.segmentDetail[currentPoint] * 10; i++)
		int32_t L_93 = V_12;
		int32_t L_94 = V_8;
		BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7* L_95 = V_6;
		NullCheck(L_95);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_96 = L_95->___segmentDetail_20;
		int32_t L_97 = __this->___currentPoint_9;
		NullCheck(L_96);
		float L_98;
		L_98 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_96, L_97, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		if ((((float)((float)L_93)) <= ((float)((float)il2cpp_codegen_add(((float)L_94), ((float)il2cpp_codegen_multiply(L_98, (10.0f))))))))
		{
			goto IL_01db;
		}
	}
	{
		goto IL_028d;
	}

IL_0215:
	{
		// for (int i = prevPoints + 1; i <= prevPoints + 10; i++)
		int32_t L_99 = V_8;
		V_13 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		goto IL_0234;
	}

IL_021d:
	{
		// pathLength += tweenPath.changeValue.wpLengths[i];
		float L_100 = V_3;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_101 = V_1;
		NullCheck(L_101);
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_102 = L_101->___changeValue_58;
		NullCheck(L_102);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_103 = L_102->___wpLengths_3;
		int32_t L_104 = V_13;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		float L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		V_3 = ((float)il2cpp_codegen_add(L_100, L_106));
		// for (int i = prevPoints + 1; i <= prevPoints + 10; i++)
		int32_t L_107 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_0234:
	{
		// for (int i = prevPoints + 1; i <= prevPoints + 10; i++)
		int32_t L_108 = V_13;
		int32_t L_109 = V_8;
		if ((((int32_t)L_108) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_109, ((int32_t)10))))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_028d;
	}

IL_023f:
	{
		// if(reverse) targetPoint = waypoints.Length - currentPoint - 1;
		bool L_110 = __this->___reverse_7;
		if (!L_110)
		{
			goto IL_025a;
		}
	}
	{
		// if(reverse) targetPoint = waypoints.Length - currentPoint - 1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_111 = __this->___waypoints_18;
		NullCheck(L_111);
		int32_t L_112 = __this->___currentPoint_9;
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_111)->max_length)), L_112)), 1));
	}

IL_025a:
	{
		// for (int i = 0; i <= targetPoint; i++)
		V_14 = 0;
		goto IL_0276;
	}

IL_025f:
	{
		// currentDist -= tweenPath.changeValue.wpLengths[i];
		float L_113 = V_2;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_114 = V_1;
		NullCheck(L_114);
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_115 = L_114->___changeValue_58;
		NullCheck(L_115);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_116 = L_115->___wpLengths_3;
		int32_t L_117 = V_14;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		float L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_2 = ((float)il2cpp_codegen_subtract(L_113, L_119));
		// for (int i = 0; i <= targetPoint; i++)
		int32_t L_120 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_120, 1));
	}

IL_0276:
	{
		// for (int i = 0; i <= targetPoint; i++)
		int32_t L_121 = V_14;
		int32_t L_122 = V_5;
		if ((((int32_t)L_121) <= ((int32_t)L_122)))
		{
			goto IL_025f;
		}
	}
	{
		// pathLength = tweenPath.changeValue.wpLengths[targetPoint + 1];
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_123 = V_1;
		NullCheck(L_123);
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_124 = L_123->___changeValue_58;
		NullCheck(L_124);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_125 = L_124->___wpLengths_3;
		int32_t L_126 = V_5;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_add(L_126, 1));
		float L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		V_3 = L_128;
	}

IL_028d:
	{
		// currentPerc = currentDist / pathLength;
		float L_129 = V_2;
		float L_130 = V_3;
		V_4 = ((float)(L_129/L_130));
		// if (pathContainer is BezierPathManager)
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_131 = __this->___pathContainer_4;
		if (!((BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7*)IsInstClass((RuntimeObject*)L_131, BezierPathManager_t17C9CD29C25BA363FD9B1515EBE5808C9E5355B7_il2cpp_TypeInfo_var)))
		{
			goto IL_02ae;
		}
	}
	{
		// lookPoint = targetPoint;
		int32_t L_132 = V_5;
		V_0 = L_132;
		// if (reverse) lookPoint++;
		bool L_133 = __this->___reverse_7;
		if (!L_133)
		{
			goto IL_02ae;
		}
	}
	{
		// if (reverse) lookPoint++;
		int32_t L_134 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_134, 1));
	}

IL_02ae:
	{
		// currentPerc = Mathf.Clamp01(currentPerc);
		float L_135 = V_4;
		float L_136;
		L_136 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_135, NULL);
		V_4 = L_136;
		// ApplyWaypointRotation(Quaternion.Lerp(pathContainer.GetWaypoint(lookPoint).rotation, pathContainer.GetWaypoint(reverse ? lookPoint - 1 : lookPoint + 1).rotation, currentPerc));
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_137 = __this->___pathContainer_4;
		int32_t L_138 = V_0;
		NullCheck(L_137);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_139;
		L_139 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(7 /* UnityEngine.Transform SWS.PathManager::GetWaypoint(System.Int32) */, L_137, L_138);
		NullCheck(L_139);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_140;
		L_140 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_139, NULL);
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_141 = __this->___pathContainer_4;
		bool L_142 = __this->___reverse_7;
		G_B39_0 = L_141;
		G_B39_1 = L_140;
		G_B39_2 = __this;
		if (L_142)
		{
			G_B40_0 = L_141;
			G_B40_1 = L_140;
			G_B40_2 = __this;
			goto IL_02dc;
		}
	}
	{
		int32_t L_143 = V_0;
		G_B41_0 = ((int32_t)il2cpp_codegen_add(L_143, 1));
		G_B41_1 = G_B39_0;
		G_B41_2 = G_B39_1;
		G_B41_3 = G_B39_2;
		goto IL_02df;
	}

IL_02dc:
	{
		int32_t L_144 = V_0;
		G_B41_0 = ((int32_t)il2cpp_codegen_subtract(L_144, 1));
		G_B41_1 = G_B40_0;
		G_B41_2 = G_B40_1;
		G_B41_3 = G_B40_2;
	}

IL_02df:
	{
		NullCheck(G_B41_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145;
		L_145 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(7 /* UnityEngine.Transform SWS.PathManager::GetWaypoint(System.Int32) */, G_B41_1, G_B41_0);
		NullCheck(L_145);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_146;
		L_146 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_145, NULL);
		float L_147 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_148;
		L_148 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(G_B41_2, L_146, L_147, NULL);
		NullCheck(G_B41_3);
		splineMove_ApplyWaypointRotation_mD0C95D2CB2CD99B780F457B3231A4D488FBD441D(G_B41_3, L_148, NULL);
		// }
		return;
	}
}
// System.Void SWS.splineMove::ApplyWaypointRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_ApplyWaypointRotation_mD0C95D2CB2CD99B780F457B3231A4D488FBD441D (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) 
{
	{
		// rotationTarget.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___rotationTarget_26;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_rotation;
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SWS.splineMove::ReachedEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_ReachedEnd_m216B0DE871FEA1CA0B013CD6AD7ABA0D80FB835B (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE484430C363DB5BCFD75D35444B3C51C8ABA6E44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (loopType)
		int32_t L_0 = __this->___loopType_17;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0069;
			}
			case 4:
			{
				goto IL_0059;
			}
		}
	}
	{
		return;
	}

IL_0022:
	{
		// return;
		return;
	}

IL_0023:
	{
		// currentPoint = 0;
		__this->___currentPoint_9 = 0;
		// CreateTween();
		splineMove_CreateTween_mD42920EAF28DDCE715F6AD2FE3C889AC0ADA0C36(__this, NULL);
		// break;
		return;
	}

IL_0031:
	{
		// reverse = !reverse;
		bool L_2 = __this->___reverse_7;
		__this->___reverse_7 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// Array.Reverse(waypoints);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___waypoints_18;
		Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE484430C363DB5BCFD75D35444B3C51C8ABA6E44(L_3, Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE484430C363DB5BCFD75D35444B3C51C8ABA6E44_RuntimeMethod_var);
		// Initialize();
		splineMove_Initialize_m50388305C30A0E20B267E42CDF4CCFCE708EBE72(__this, 0, NULL);
		// CreateTween();
		splineMove_CreateTween_mD42920EAF28DDCE715F6AD2FE3C889AC0ADA0C36(__this, NULL);
		// break;
		return;
	}

IL_0059:
	{
		// reverse = !reverse;
		bool L_4 = __this->___reverse_7;
		__this->___reverse_7 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		// break;
		return;
	}

IL_0069:
	{
		// RandomizeWaypoints();
		splineMove_RandomizeWaypoints_m16B7F98283D59F3E9AC0542717AFC77AFA6A53C7(__this, NULL);
		// CreateTween();
		splineMove_CreateTween_mD42920EAF28DDCE715F6AD2FE3C889AC0ADA0C36(__this, NULL);
		// }
		return;
	}
}
// System.Void SWS.splineMove::RandomizeWaypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_RandomizeWaypoints_m16B7F98283D59F3E9AC0542717AFC77AFA6A53C7 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// Initialize();
		splineMove_Initialize_m50388305C30A0E20B267E42CDF4CCFCE708EBE72(__this, 0, NULL);
		// rndArray = new int[wpPos.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___wpPos_28;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->___rndArray_32 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rndArray_32), (void*)L_1);
		// for (int i = 0; i < rndArray.Length; i++)
		V_3 = 0;
		goto IL_002b;
	}

IL_001e:
	{
		// rndArray[i] = i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___rndArray_32;
		int32_t L_3 = V_3;
		int32_t L_4 = V_3;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		// for (int i = 0; i < rndArray.Length; i++)
		int32_t L_5 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < rndArray.Length; i++)
		int32_t L_6 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___rndArray_32;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// int n = wpPos.Length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = __this->___wpPos_28;
		NullCheck(L_8);
		V_0 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		goto IL_00af;
	}

IL_0041:
	{
		// int k = rand.Next(n--);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_9 = __this->___rand_31;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		NullCheck(L_9);
		int32_t L_12;
		L_12 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_9, L_11);
		V_4 = L_12;
		// Vector3 temp = wpPos[n];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = __this->___wpPos_28;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = L_16;
		// wpPos[n] = wpPos[k];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = __this->___wpPos_28;
		int32_t L_18 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = __this->___wpPos_28;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_22);
		// wpPos[k] = temp;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = __this->___wpPos_28;
		int32_t L_24 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
		// int tmpI = rndArray[n];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___rndArray_32;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_6 = L_29;
		// rndArray[n] = rndArray[k];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___rndArray_32;
		int32_t L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___rndArray_32;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)L_35);
		// rndArray[k] = tmpI;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->___rndArray_32;
		int32_t L_37 = V_4;
		int32_t L_38 = V_6;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)L_38);
	}

IL_00af:
	{
		// while (n > 1)
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) > ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		// Vector3 first = wpPos[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40 = __this->___wpPos_28;
		NullCheck(L_40);
		int32_t L_41 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_1 = L_42;
		// int rndFirst = rndArray[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->___rndArray_32;
		NullCheck(L_43);
		int32_t L_44 = 0;
		int32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_2 = L_45;
		// for (int i = 0; i < wpPos.Length; i++)
		V_7 = 0;
		goto IL_0116;
	}

IL_00ce:
	{
		// if (rndArray[i] == currentPoint)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = __this->___rndArray_32;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		int32_t L_50 = __this->___currentPoint_9;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0110;
		}
	}
	{
		// rndArray[i] = rndFirst;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = __this->___rndArray_32;
		int32_t L_52 = V_7;
		int32_t L_53 = V_2;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (int32_t)L_53);
		// wpPos[0] = wpPos[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_54 = __this->___wpPos_28;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_55 = __this->___wpPos_28;
		int32_t L_56 = V_7;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_58);
		// wpPos[i] = first;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = __this->___wpPos_28;
		int32_t L_60 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_1;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_61);
	}

IL_0110:
	{
		// for (int i = 0; i < wpPos.Length; i++)
		int32_t L_62 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0116:
	{
		// for (int i = 0; i < wpPos.Length; i++)
		int32_t L_63 = V_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64 = __this->___wpPos_28;
		NullCheck(L_64);
		if ((((int32_t)L_63) < ((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length)))))
		{
			goto IL_00ce;
		}
	}
	{
		// rndArray[0] = currentPoint;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___rndArray_32;
		int32_t L_66 = __this->___currentPoint_9;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_66);
		// }
		return;
	}
}
// System.Void SWS.splineMove::GoToWaypoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_GoToWaypoint_m639E9794AD5344E086E1C3776A8C7F6B67816040 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// if (tween == null)
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_0 = __this->___tween_27;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (reverse) index = waypoints.Length - 1 - index;
		bool L_1 = __this->___reverse_7;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (reverse) index = waypoints.Length - 1 - index;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___waypoints_18;
		NullCheck(L_2);
		int32_t L_3 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)), L_3));
	}

IL_001f:
	{
		// tween.ForceInit();
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_4 = __this->___tween_27;
		TweenExtensions_ForceInit_mBE21B6CF98B217D09E814F598CCF6659D7660420(L_4, NULL);
		// tween.GotoWaypoint(index, true);
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_5 = __this->___tween_27;
		int32_t L_6 = ___0_index;
		TweenExtensions_GotoWaypoint_m5408B35F8A7546DDF5FFCAC1247921B6EC4176D4(L_5, L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SWS.splineMove::Pause(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_Pause_m2D2A7CE79AD2954503D7DCB1722E8F2461696CAD (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, float ___0_seconds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Pause_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBB24CEBC3EAA08B09D3F8CE4DEFB1B5732660CBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine(Wait());
		RuntimeObject* L_0;
		L_0 = splineMove_Wait_mF2A9146F06444137C3382785A55DF4CC159AF0E4(__this, (0.0f), NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// if (tween != null)
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_1 = __this->___tween_27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// tween.Pause();
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_2 = __this->___tween_27;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_3;
		L_3 = TweenExtensions_Pause_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBB24CEBC3EAA08B09D3F8CE4DEFB1B5732660CBF(L_2, TweenExtensions_Pause_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBB24CEBC3EAA08B09D3F8CE4DEFB1B5732660CBF_RuntimeMethod_var);
	}

IL_0025:
	{
		// if (seconds > 0)
		float L_4 = ___0_seconds;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		// StartCoroutine(Wait(seconds));
		float L_5 = ___0_seconds;
		RuntimeObject* L_6;
		L_6 = splineMove_Wait_mF2A9146F06444137C3382785A55DF4CC159AF0E4(__this, L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SWS.splineMove::Wait(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* splineMove_Wait_mF2A9146F06444137C3382785A55DF4CC159AF0E4 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, float ___0_secs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92* L_0 = (U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92*)il2cpp_codegen_object_new(U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitU3Ed__44__ctor_m9A0BAC4097D25416A44A6AFF2838FC0965FC47B4(L_0, 0, NULL);
		U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92* L_2 = L_1;
		float L_3 = ___0_secs;
		NullCheck(L_2);
		L_2->___secs_2 = L_3;
		return L_2;
	}
}
// System.Void SWS.splineMove::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_Resume_mBBC8880AD31BB19C480F760B5597934B21E0E213 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mEC9AD4279079F6EBC7A352CB642F15EBF145F205_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine(Wait());
		RuntimeObject* L_0;
		L_0 = splineMove_Wait_mF2A9146F06444137C3382785A55DF4CC159AF0E4(__this, (0.0f), NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// if (tween != null)
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_1 = __this->___tween_27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// tween.Play();
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_2 = __this->___tween_27;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_3;
		L_3 = TweenExtensions_Play_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mEC9AD4279079F6EBC7A352CB642F15EBF145F205(L_2, TweenExtensions_Play_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mEC9AD4279079F6EBC7A352CB642F15EBF145F205_RuntimeMethod_var);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void SWS.splineMove::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_Reverse_m60DFD4A4DB07BB49DE7962EC76D237965C0AC9DA (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// reverse = !reverse;
		bool L_0 = __this->___reverse_7;
		__this->___reverse_7 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// float timeRemaining = 0f;
		V_0 = (0.0f);
		// if(tween != null)
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_1 = __this->___tween_27;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// timeRemaining = 1 - tween.ElapsedPercentage(false);
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_2 = __this->___tween_27;
		float L_3;
		L_3 = TweenExtensions_ElapsedPercentage_m2B88D6261A10FE69DA344E2EDF1D72F0DC7C4FA8(L_2, (bool)0, NULL);
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_3));
	}

IL_0030:
	{
		// startPoint = waypoints.Length - 1 - currentPoint;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = __this->___waypoints_18;
		NullCheck(L_4);
		int32_t L_5 = __this->___currentPoint_9;
		__this->___startPoint_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1)), L_5));
		// StartMove();
		splineMove_StartMove_mE68621BCE82BA16DA22CDFB15EB11E3D7302ADC0(__this, NULL);
		// tween.ForceInit();
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_6 = __this->___tween_27;
		TweenExtensions_ForceInit_mBE21B6CF98B217D09E814F598CCF6659D7660420(L_6, NULL);
		// tween.fullPosition = tween.Duration(false) * timeRemaining;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_7 = __this->___tween_27;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_8 = __this->___tween_27;
		float L_9;
		L_9 = TweenExtensions_Duration_mFF4115983798994675D0431ADD2D333958714222(L_8, (bool)0, NULL);
		float L_10 = V_0;
		NullCheck(L_7);
		Tween_set_fullPosition_m903F28B26102F66CA13DB472121140925FA6495C(L_7, ((float)il2cpp_codegen_multiply(L_9, L_10)), NULL);
		// }
		return;
	}
}
// System.Void SWS.splineMove::SetPath(SWS.PathManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_SetPath_m607C9955346F35398A7B5B52896A14B8F4F3ADEB (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* ___0_newPath, const RuntimeMethod* method) 
{
	{
		// Stop();
		splineMove_Stop_m8EC503FADA5846EAA957350FA4F7B548028E50F8(__this, NULL);
		// pathContainer = newPath;
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_0 = ___0_newPath;
		__this->___pathContainer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathContainer_4), (void*)L_0);
		// StartMove();
		splineMove_StartMove_mE68621BCE82BA16DA22CDFB15EB11E3D7302ADC0(__this, NULL);
		// }
		return;
	}
}
// System.Void SWS.splineMove::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_Stop_m8EC503FADA5846EAA957350FA4F7B548028E50F8 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// if (tween != null)
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_0 = __this->___tween_27;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// tween.Kill();
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_1 = __this->___tween_27;
		TweenExtensions_Kill_mFFDE4DE45D8A91C357ABFF2F8FA95D412924F466(L_1, (bool)0, NULL);
	}

IL_001a:
	{
		// tween = null;
		__this->___tween_27 = (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tween_27), (void*)(Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)NULL);
		// }
		return;
	}
}
// System.Void SWS.splineMove::ResetToStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_ResetToStart_m5F5688648665B5FAD4708030979E756A5696EAD3 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stop();
		splineMove_Stop_m8EC503FADA5846EAA957350FA4F7B548028E50F8(__this, NULL);
		// currentPoint = 0;
		__this->___currentPoint_9 = 0;
		// if (pathContainer)
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_0 = __this->___pathContainer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		// transform.position = pathContainer.waypoints[currentPoint].position + new Vector3(0, sizeToAdd, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		PathManager_tE11816416738EE9AFB82A176CC0599C045DA0931* L_3 = __this->___pathContainer_4;
		NullCheck(L_3);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = L_3->___waypoints_4;
		int32_t L_5 = __this->___currentPoint_9;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = __this->___sizeToAdd_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), L_9, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_10, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_11, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void SWS.splineMove::ChangeSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove_ChangeSpeed_m8DE14A41F7624B20B4E81A2A09DB21C26EADF06B (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, float ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (timeValue == TimeValue.speed)
		int32_t L_0 = __this->___timeValue_14;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		// newValue = value / originSpeed;
		float L_1 = ___0_value;
		float L_2 = __this->___originSpeed_29;
		V_0 = ((float)(L_1/L_2));
		goto IL_001d;
	}

IL_0014:
	{
		// newValue = originSpeed / value;
		float L_3 = __this->___originSpeed_29;
		float L_4 = ___0_value;
		V_0 = ((float)(L_3/L_4));
	}

IL_001d:
	{
		// speed = value;
		float L_5 = ___0_value;
		__this->___speed_15 = L_5;
		// if (tween != null)
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_6 = __this->___tween_27;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// tween.timeScale = newValue;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_7 = __this->___tween_27;
		float L_8 = V_0;
		NullCheck(L_7);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_7)->___timeScale_4 = L_8;
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void SWS.splineMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splineMove__ctor_mC75DB0B472B07BB08CD4DDD32B00166615080673 (splineMove_t3B37A328F6D49808D678F015EA04450552912754* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAF642341E1AAB54142F727134B05004DE3A187A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TimeValue timeValue = TimeValue.speed;
		__this->___timeValue_14 = 1;
		// public float speed = 5;
		__this->___speed_15 = (5.0f);
		// public List<UnityEvent> events = new List<UnityEvent>();
		List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA* L_0 = (List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA*)il2cpp_codegen_object_new(List_1_t1F66D85D40A4A6882E6F434BFB9DAC00C51F0EAA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mAF642341E1AAB54142F727134B05004DE3A187A5(L_0, List_1__ctor_mAF642341E1AAB54142F727134B05004DE3A187A5_RuntimeMethod_var);
		__this->___events_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___events_19), (void*)L_0);
		// public DG.Tweening.PathType pathType = DG.Tweening.PathType.CatmullRom;
		__this->___pathType_20 = 1;
		// public DG.Tweening.PathMode pathMode = DG.Tweening.PathMode.Full3D;
		__this->___pathMode_21 = 1;
		// public DG.Tweening.Ease easeType = DG.Tweening.Ease.Linear;
		__this->___easeType_22 = 1;
		// private System.Random rand = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_1, NULL);
		__this->___rand_31 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rand_31), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SWS.splineMove/<Wait>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__44__ctor_m9A0BAC4097D25416A44A6AFF2838FC0965FC47B4 (U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SWS.splineMove/<Wait>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__44_System_IDisposable_Dispose_m5DD1286381B3DD0C1897B6458CED56E47F86FFE7 (U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SWS.splineMove/<Wait>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitU3Ed__44_MoveNext_m035107531267D5E98D7F2937816BD1B2C73B8242 (U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	splineMove_t3B37A328F6D49808D678F015EA04450552912754* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		splineMove_t3B37A328F6D49808D678F015EA04450552912754* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(secs);
		float L_4 = __this->___secs_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Resume();
		splineMove_t3B37A328F6D49808D678F015EA04450552912754* L_6 = V_1;
		NullCheck(L_6);
		splineMove_Resume_mBBC8880AD31BB19C480F760B5597934B21E0E213(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SWS.splineMove/<Wait>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8CAFF5294121C57B54112CAE16E2EE41F9BCAA9D (U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SWS.splineMove/<Wait>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__44_System_Collections_IEnumerator_Reset_m9C96A667883ABC23AC02A956674963D49637C52C (U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitU3Ed__44_System_Collections_IEnumerator_Reset_m9C96A667883ABC23AC02A956674963D49637C52C_RuntimeMethod_var)));
	}
}
// System.Object SWS.splineMove/<Wait>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitU3Ed__44_System_Collections_IEnumerator_get_Current_mC349C123C3472B6A32EC7AB5FE7CA0078B1AC8A7 (U3CWaitU3Ed__44_tFDA86EDEA0096A351D3F059E642666A002D59F92* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMobileInputFeeder_Start_mC712B525393B68AA650A35F5E28E8193A6922330 (CinemachineMobileInputFeeder_tB39F639AD1B750B863DE179D7847C9E1B65898E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineMobileInputFeeder_GetInputAxis_m7C27C57A3360F97087AD8F7FF4121C1CB0A39F28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CinemachineCore.GetInputAxis = GetInputAxis;
		AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452* L_0 = (AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452*)il2cpp_codegen_object_new(AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AxisInputDelegate__ctor_m8D7FED117FA4DDE1BBDC08B5158E73E2FACFF7B6(L_0, __this, (intptr_t)((void*)CinemachineMobileInputFeeder_GetInputAxis_m7C27C57A3360F97087AD8F7FF4121C1CB0A39F28_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		((CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var))->___GetInputAxis_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var))->___GetInputAxis_4), (void*)L_0);
		// }
		return;
	}
}
// System.Single RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder::GetInputAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineMobileInputFeeder_GetInputAxis_m7C27C57A3360F97087AD8F7FF4121C1CB0A39F28 (CinemachineMobileInputFeeder_tB39F639AD1B750B863DE179D7847C9E1B65898E2* __this, String_t* ___0_axisName, const RuntimeMethod* method) 
{
	{
		// _lookInput = _touchInput.PlayerJoystickOutputVector();
		UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* L_0 = __this->____touchInput_4;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = UITouchPanel_PlayerJoystickOutputVector_mE4F8BB82A29CB4D66702B94828C45FF1B75B60F5_inline(L_0, NULL);
		__this->____lookInput_5 = L_1;
		// if (axisName == _touchXMapTo)
		String_t* L_2 = ___0_axisName;
		String_t* L_3 = __this->____touchXMapTo_8;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// return _lookInput.x / _touchSpeedSensitivityX;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->____lookInput_5);
		float L_6 = L_5->___x_0;
		float L_7 = __this->____touchSpeedSensitivityX_6;
		return ((float)(L_6/L_7));
	}

IL_0032:
	{
		// if (axisName == _touchYMapTo)
		String_t* L_8 = ___0_axisName;
		String_t* L_9 = __this->____touchYMapTo_9;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// return _lookInput.y / _touchSpeedSensitivityY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->____lookInput_5);
		float L_12 = L_11->___y_1;
		float L_13 = __this->____touchSpeedSensitivityY_7;
		return ((float)(L_12/L_13));
	}

IL_0053:
	{
		// return Input.GetAxis(axisName);
		String_t* L_14 = ___0_axisName;
		float L_15;
		L_15 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_14, NULL);
		return L_15;
	}
}
// System.Void RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.CinemachineMobileInputFeeder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMobileInputFeeder__ctor_m33F22DB733B0B3CF778B21B38DEB8BA98ADA3436 (CinemachineMobileInputFeeder_tB39F639AD1B750B863DE179D7847C9E1B65898E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float _touchSpeedSensitivityX = 3f;
		__this->____touchSpeedSensitivityX_6 = (3.0f);
		// [SerializeField] private float _touchSpeedSensitivityY = 3f;
		__this->____touchSpeedSensitivityY_7 = (3.0f);
		// private string _touchXMapTo = "Mouse X";
		__this->____touchXMapTo_8 = _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____touchXMapTo_8), (void*)_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		// private string _touchYMapTo = "Mouse Y";
		__this->____touchYMapTo_9 = _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____touchYMapTo_9), (void*)_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchPanel_FixedUpdate_m4CED4E33C77B0EFB8FF0D095E4055DB9C8C2DC0D (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// for (int i = 0; i < Input.touchCount; i++)
		V_0 = 0;
		goto IL_0050;
	}

IL_000c:
	{
		// _myTouch = Input.GetTouch(i);
		int32_t L_1 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_1, NULL);
		__this->____myTouch_6 = L_2;
		// if (_isPlayerTouchingPanel)
		bool L_3 = __this->____isPlayerTouchingPanel_5;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// if (_myTouch.fingerId == _touchID)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_4 = (&__this->____myTouch_6);
		int32_t L_5;
		L_5 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(L_4, NULL);
		int32_t L_6 = __this->____touchID_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_004c;
		}
	}
	{
		// if (_myTouch.phase != TouchPhase.Moved)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_7 = (&__this->____myTouch_6);
		int32_t L_8;
		L_8 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(L_7, NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		// OutputVectorValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UITouchPanel_OutputVectorValue_mAC28A745BB892701C927691479486BF73A3C0F19_inline(__this, L_9, NULL);
	}

IL_004c:
	{
		// for (int i = 0; i < Input.touchCount; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0050:
	{
		// for (int i = 0; i < Input.touchCount; i++)
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000c;
		}
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::OutputVectorValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchPanel_OutputVectorValue_mAC28A745BB892701C927691479486BF73A3C0F19 (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_outputValue, const RuntimeMethod* method) 
{
	{
		// _playerTouchVectorOutput = outputValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_outputValue;
		__this->____playerTouchVectorOutput_4 = L_0;
		// }
		return;
	}
}
// UnityEngine.Vector2 RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::PlayerJoystickOutputVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UITouchPanel_PlayerJoystickOutputVector_mE4F8BB82A29CB4D66702B94828C45FF1B75B60F5 (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, const RuntimeMethod* method) 
{
	{
		// return _playerTouchVectorOutput;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->____playerTouchVectorOutput_4;
		return L_0;
	}
}
// System.Void RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchPanel_OnPointerUp_m568BDCA747F9B886B31B7E4C8897B0C61EB64749 (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0__onPointerUpData, const RuntimeMethod* method) 
{
	{
		// OutputVectorValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UITouchPanel_OutputVectorValue_mAC28A745BB892701C927691479486BF73A3C0F19_inline(__this, L_0, NULL);
		// _isPlayerTouchingPanel = false;
		__this->____isPlayerTouchingPanel_5 = (bool)0;
		// }
		return;
	}
}
// System.Void RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchPanel_OnPointerDown_mCBF72C17F462487643BBC93A850AECA7F8AE1A47 (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0__onPointerDownData, const RuntimeMethod* method) 
{
	{
		// OnDrag(_onPointerDownData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0__onPointerDownData;
		UITouchPanel_OnDrag_m472E555CA17FA185C9AB8B1263D6D261383AAE2B(__this, L_0, NULL);
		// _touchID = _myTouch.fingerId;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_1 = (&__this->____myTouch_6);
		int32_t L_2;
		L_2 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(L_1, NULL);
		__this->____touchID_7 = L_2;
		// _isPlayerTouchingPanel = true;
		__this->____isPlayerTouchingPanel_5 = (bool)1;
		// }
		return;
	}
}
// System.Void RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchPanel_OnDrag_m472E555CA17FA185C9AB8B1263D6D261383AAE2B (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0__onDragData, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// OutputVectorValue(new Vector2(_onDragData.delta.normalized.x, _onDragData.delta.normalized.y));
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0__onDragData;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_0, NULL);
		V_0 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_0), NULL);
		float L_3 = L_2.___x_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___0__onDragData;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_4, NULL);
		V_0 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_0), NULL);
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_3, L_7, /*hidden argument*/NULL);
		UITouchPanel_OutputVectorValue_mAC28A745BB892701C927691479486BF73A3C0F19_inline(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void RehtseStudio.FreeLookCamera3rdPersonCharacterController.Scripts.UITouchPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITouchPanel__ctor_m6CEF7FDB727E2202ED77E8475718F2BB8C678736 (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___2_value;
		float L_4 = ___0_a;
		float L_5 = ___1_b;
		float L_6 = ___0_a;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UITouchPanel_PlayerJoystickOutputVector_mE4F8BB82A29CB4D66702B94828C45FF1B75B60F5_inline (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, const RuntimeMethod* method) 
{
	{
		// return _playerTouchVectorOutput;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->____playerTouchVectorOutput_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UITouchPanel_OutputVectorValue_mAC28A745BB892701C927691479486BF73A3C0F19_inline (UITouchPanel_t600C855C984278B35BA2AB026DBB503574C154ED* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_outputValue, const RuntimeMethod* method) 
{
	{
		// _playerTouchVectorOutput = outputValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_outputValue;
		__this->____playerTouchVectorOutput_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CdeltaU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_item;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
