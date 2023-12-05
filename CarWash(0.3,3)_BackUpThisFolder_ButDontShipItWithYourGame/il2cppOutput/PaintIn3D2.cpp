#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>
struct Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F;
// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>
struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<PaintIn3D.P3dCommand>
struct Action_1_t197D90233CFD0A751641723D06DE23097E99A46D;
// System.Action`1<PaintIn3D.P3dPaintableTexture>
struct Action_1_t514F3319E2FB4BAEC6A4AF9DA6AE65F8BD91A7B5;
// System.Action`2<PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dCommand>
struct Action_2_t903AF59C5D183CD3FFAFCB0E4E9EBE099FC8DFA5;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material>
struct Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Int32>
struct Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,PaintIn3D.P3dHash>
struct Dictionary_2_t41C885115A9F39B409C53492A03DA764F26BA14C;
// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,System.Object>
struct Dictionary_2_t74D806EBEBBD5EAB8AD9F3A3805D5711AD41EC6A;
// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dModel>
struct Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1;
// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dPaintableTexture>
struct Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302;
// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,UnityEngine.Texture>
struct Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394;
// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dModel,PaintIn3D.P3dHash>
struct Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215;
// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dHash>
struct Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015;
// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,PaintIn3D.P3dHash>
struct Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D;
// System.Collections.Generic.HashSet`1<PaintIn3D.P3dPaintableTexture>
struct HashSet_1_t704CC4569C195936CC31725B4F24ED5D539B50A3;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Material>
struct IEqualityComparer_1_t6B41DEB890FDAC740B9404C2145A832F69F8012A;
// System.Collections.Generic.IEqualityComparer`1<PaintIn3D.P3dHash>
struct IEqualityComparer_1_t8CF982916BA4F23391061D8D334B6D5B762419D2;
// System.Collections.Generic.IEqualityComparer`1<PaintIn3D.P3dModel>
struct IEqualityComparer_1_t5D265D99E0FE2EBB222566079F44563FE0339A54;
// System.Collections.Generic.IEqualityComparer`1<PaintIn3D.P3dPaintableTexture>
struct IEqualityComparer_1_tA7E95D7F6007EAA7F69E0C4C8EEEA69DC7600CE2;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Texture>
struct IEqualityComparer_1_t0BB5FD0478BB8CE71A945C9B46DE9166A57FCE00;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Material>
struct KeyCollection_t8BCFE8B008460705D65889289EBE6FE4C1B466A2;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Material,System.Int32>
struct KeyCollection_t729642E31E09FD3235BFA6007575EC4D4C8CE43E;
// System.Collections.Generic.Dictionary`2/KeyCollection<PaintIn3D.P3dHash,PaintIn3D.P3dModel>
struct KeyCollection_tE8ED6CD10CF7853AD23FB92B0C718DE2393BCFC8;
// System.Collections.Generic.Dictionary`2/KeyCollection<PaintIn3D.P3dHash,PaintIn3D.P3dPaintableTexture>
struct KeyCollection_t9F08E0F13B3DEEA0974F31AB85585953CFCE94C0;
// System.Collections.Generic.Dictionary`2/KeyCollection<PaintIn3D.P3dHash,UnityEngine.Texture>
struct KeyCollection_tE2AF1EEC62F53740B90C274097EB433DEDD1F0C6;
// System.Collections.Generic.Dictionary`2/KeyCollection<PaintIn3D.P3dModel,PaintIn3D.P3dHash>
struct KeyCollection_tEB95FDBF6177AA42B4928D4188EBCBC848AE2824;
// System.Collections.Generic.Dictionary`2/KeyCollection<PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dHash>
struct KeyCollection_t5DE045E134258F336B186D40EC6FE997DC5DE177;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Texture,PaintIn3D.P3dHash>
struct KeyCollection_tC31FD8F2E3E399AEBBCC644F210745F3BD760841;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C;
// System.Collections.Generic.LinkedListNode`1<PaintIn3D.P3dMask>
struct LinkedListNode_1_t8142ECA199EF93B2FCE652CA24084E6B09733209;
// System.Collections.Generic.LinkedListNode`1<PaintIn3D.P3dModel>
struct LinkedListNode_1_t590A572CA9CEC43D97B32140E550D37DE92DF3E8;
// System.Collections.Generic.LinkedListNode`1<PaintIn3D.P3dPaintableTexture>
struct LinkedListNode_1_tFEBC4F52CB20B430A0FE111B534688CD367D5B05;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76;
// System.Collections.Generic.LinkedList`1<PaintIn3D.P3dMask>
struct LinkedList_1_t7D3F451CA5F1DA0C0DDCCD3326D4A7ABD36B1EE4;
// System.Collections.Generic.LinkedList`1<PaintIn3D.P3dModel>
struct LinkedList_1_tC8A19488ECD9C07CB0CACE5838EC91C69D63ECB7;
// System.Collections.Generic.LinkedList`1<PaintIn3D.P3dPaintableTexture>
struct LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
// System.Collections.Generic.List`1<UnityEngine.KeyCode>
struct List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<PaintIn3D.P3dCommand>
struct List_1_t54F090708FD8BBE1351164EA9B8A477AB71181B2;
// System.Collections.Generic.List`1<PaintIn3D.P3dMaterialCloner>
struct List_1_t0E9725291C3531AE7B3F48A164E76D9381DEA743;
// System.Collections.Generic.List`1<PaintIn3D.P3dModel>
struct List_1_tAC4011F8E14CCFF35F20EBAF7202AE73E16CC115;
// System.Collections.Generic.List`1<PaintIn3D.P3dModifier>
struct List_1_tF5CB340383AC542B35014597F04B162B93ECEDF0;
// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableState>
struct List_1_t74E0BEBF8CFBD266D746B900F6528A3B72B3168E;
// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture>
struct List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>
struct List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782;
// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandDecal>
struct Stack_1_t75B69EB7A953242B7FCF5E4350FFF1DC10F3598A;
// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandFill>
struct Stack_1_tA1F624B1E4D038F4D85940BF71FA5CE058DF58BB;
// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandReplace>
struct Stack_1_tAE30C95CC6CCF0562D675542D2CC6756B55BDD51;
// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandReplaceChannels>
struct Stack_1_tC3DB17B595AEEC4F0BFADDB055C8407AB87B6D76;
// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandSphere>
struct Stack_1_t3FE996F8578F9A3A931A9BECA884EC7C240A9D68;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Material>
struct ValueCollection_tCAC5411791BC3651BBBF8F8D76DE1A3E039C71BD;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Material,System.Int32>
struct ValueCollection_tC02B95B434A38DDC6DF72D47BDA4922291DC94D7;
// System.Collections.Generic.Dictionary`2/ValueCollection<PaintIn3D.P3dHash,PaintIn3D.P3dModel>
struct ValueCollection_tFCC80CE2826E546049AFCE858E58AA3B765B1153;
// System.Collections.Generic.Dictionary`2/ValueCollection<PaintIn3D.P3dHash,PaintIn3D.P3dPaintableTexture>
struct ValueCollection_tAF9BF7E292AF8925282A51E540EF28A29444A5A0;
// System.Collections.Generic.Dictionary`2/ValueCollection<PaintIn3D.P3dHash,UnityEngine.Texture>
struct ValueCollection_t27D47E57B4D3D131004297BB0D563B7D7C4D9FC3;
// System.Collections.Generic.Dictionary`2/ValueCollection<PaintIn3D.P3dModel,PaintIn3D.P3dHash>
struct ValueCollection_tB1F257B1969B0E340EA53D57312D80D728890DF5;
// System.Collections.Generic.Dictionary`2/ValueCollection<PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dHash>
struct ValueCollection_t84B4B59B07FC53764E6B75B246A9531CB7142866;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Texture,PaintIn3D.P3dHash>
struct ValueCollection_tDDF8D7BDE955B3D826E8465DABAF65A3B073570C;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Material>[]
struct EntryU5BU5D_t81DBFE807B686FA8C3B665EA14752E938CAC5C15;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Material,System.Int32>[]
struct EntryU5BU5D_tC7ABC6A67982D2F89D145488BD4884BC9FAA7C4F;
// System.Collections.Generic.Dictionary`2/Entry<PaintIn3D.P3dHash,PaintIn3D.P3dModel>[]
struct EntryU5BU5D_tE82C879B3730C1A7141E88C5B2E593E3C579EDD3;
// System.Collections.Generic.Dictionary`2/Entry<PaintIn3D.P3dHash,PaintIn3D.P3dPaintableTexture>[]
struct EntryU5BU5D_t5C8B2C224E77F9607DB2F71F075F964B5D53303E;
// System.Collections.Generic.Dictionary`2/Entry<PaintIn3D.P3dHash,UnityEngine.Texture>[]
struct EntryU5BU5D_t7DF1973C8A2674A2FAD3CE7BE3A66FB62894DC01;
// System.Collections.Generic.Dictionary`2/Entry<PaintIn3D.P3dModel,PaintIn3D.P3dHash>[]
struct EntryU5BU5D_t3081FE4E28F0C81E5D559CFD17751BE6E1A499D7;
// System.Collections.Generic.Dictionary`2/Entry<PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dHash>[]
struct EntryU5BU5D_t932A07B84E90A8A9E2003EF63CFFF831ABBCB372;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Texture,PaintIn3D.P3dHash>[]
struct EntryU5BU5D_tF4C93F0241EC0A318A76AC9D1E30202F2F6106A7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// PaintIn3D.P3dPaintableTexture[]
struct P3dPaintableTextureU5BU5D_t13EF66E663D8465A663CE5F1401D1A77B3E321A3;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// CW.Common.CwInputManager/Finger[]
struct FingerU5BU5D_tB9DD3197CFB643A5397B3C530FC3D15D708A6F70;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PaintIn3D.P3dCommand
struct P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D;
// PaintIn3D.P3dCommandDecal
struct P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66;
// PaintIn3D.P3dCommandFill
struct P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B;
// PaintIn3D.P3dCommandReplace
struct P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E;
// PaintIn3D.P3dCommandReplaceChannels
struct P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4;
// PaintIn3D.P3dCommandSphere
struct P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8;
// PaintIn3D.P3dHitScreenBase
struct P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC;
// PaintIn3D.P3dMask
struct P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A;
// PaintIn3D.P3dModel
struct P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45;
// PaintIn3D.P3dModifierList
struct P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1;
// PaintIn3D.P3dPaintDecal
struct P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A;
// PaintIn3D.P3dPaintFill
struct P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A;
// PaintIn3D.P3dPaintReplace
struct P3dPaintReplace_t208CAABC9FCB9A35AE5113B48D8404ADC328097B;
// PaintIn3D.P3dPaintReplaceChannels
struct P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520;
// PaintIn3D.P3dPaintSphere
struct P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B;
// PaintIn3D.P3dPaintable
struct P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00;
// PaintIn3D.P3dPaintableTexture
struct P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63;
// PaintIn3D.P3dPointer
struct P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302;
// PaintIn3D.P3dPointerMouse
struct P3dPointerMouse_t2132552825D1F8C787CDA111C416F1141C0C3996;
// PaintIn3D.P3dPointerPen
struct P3dPointerPen_tD52B01CDAF3AAC78196CE0D30272B12A48411362;
// PaintIn3D.P3dPointerTouch
struct P3dPointerTouch_tFA3F92373690EE86D5378CCC6A153CCD3B4AE352;
// PaintIn3D.P3dReader
struct P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7;
// PaintIn3D.P3dTextureHash
struct P3dTextureHash_t3576030550098A239E999FF9BF56B53CC443AF7C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// CW.Common.CwInputManager/Finger
struct Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8;
// PaintIn3D.P3dPointer/VirtualFinger
struct VirtualFinger_tD77E369159E2991B7AB80C168614731B02DC5C22;
// PaintIn3D.P3dReadColor/ColorEvent
struct ColorEvent_t871C324F6981EB1A0CDE0FC4F559E313017CA4C9;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CwInputManager_t92456D41A22047264E18E84F135DB75F3E6AA0B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2AF5592252FBEDC6AAFD83F963FB41AE2AFDB80F;
IL2CPP_EXTERN_C String_t* _stringLiteral5C3568C5A9F7681FBE333387A1C3F08C2FC73DC0;
IL2CPP_EXTERN_C String_t* _stringLiteral757B18ACAD868A51DF0C2C15F3BADCC795AB8674;
IL2CPP_EXTERN_C String_t* _stringLiteral8E89A105996F0C2AA1A32FDFCFE768824EA726B2;
IL2CPP_EXTERN_C String_t* _stringLiteral9AA8E34EBF72A798323E167196385A02499FFC64;
IL2CPP_EXTERN_C String_t* _stringLiteralCE46331659FD12304188189F2E10246360DDD420;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncGPUReadbackRequest_GetData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m242FB56AC043B6D76E240078F45DCD8A1C9A501D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_m7F8EB08BE51A75422DB909E7A5A7F035F136C720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisP3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC_m23C977D470FD8DF6A7342924B14F836987372B65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mA758582494F390A5B318A0F6458F342154337C24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CwHelper_Destroy_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m1D871287C681458FE17E21A467CAE3E91E83816C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE69F96061EACB196437CBF7F103092D04BDF3BC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mEF2E83E7D7A51D9598E8771D187138AF3CE614A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB2358E1DCA7C030B82026AA186D3481F3568D759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m07794A540A5137936E353505EE63AA7BFDCF2917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m18CC90C0D11272926148AAD0E6D65731A5986525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m99BA4C8EF72A9963DF9C4E23CFD9FC4409D0C7AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA563968253DE4672794228EC7E1F9BC19CAE0A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB84CE1E338BC58D15838BC22253FC92068C924CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD6FD15DC3C0B842FF06E7DEE046062747368619_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDDD519BC8A7FF02C1AA63B719EE99073027C1323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE59850AC4C9397D5332D553B0E9BADF4E96447DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m34643E8F228FC7E513C6BD213366EFDB9D477BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m617C29693EB2801276678FF3113122991240CDF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB46607AA8EBED12F5C4392F03DA7A93FB5EE5172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1EB88CCB3276E602D3FE9BB36D2F521ABDD86E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m65BC4E73EDE6D567FEA89918246CF50E1F790866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m32DCBD336D2D01A925C430FFC3AE3BF70B845179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m972218EFF43D49745F18BA376C1278752F80936E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mAE800C985C1868453C1F2CBB37075BC93B2E302B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEB5CAC74E588EFB6530371C6DD9DA9E6E8F9F61D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mD209AF471B3572AEC6457935C2BA8D1368C254D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m481EE73C5E158B5A00393F44ABEACBAAD6F88A48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBBC374561D2D32D99D36614F8CED83A19FD4F702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC3CEF874C2D99ED6FDF204103CA1B7CACFE34165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF008129D58C5940526BA8102498BA5611D24052E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* P3dSerialization_TryRegister_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mEBECE70EBD42DBB90C14404F3CAD4CB65A74A811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* P3dSerialization_TryRegister_TisP3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_m3AF44BB78BE06E05A7E89BE44D4AAB40982CA367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* P3dSerialization_TryRegister_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_mD7ABBA8409F2CDF0B4ED27993C9BF9B4B005426A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* P3dSerialization_TryRegister_m818988E97E00258E9D7F4AA73BEC6D288B65DD25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material>
struct Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t81DBFE807B686FA8C3B665EA14752E938CAC5C15* ____entries_1;
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
	KeyCollection_t8BCFE8B008460705D65889289EBE6FE4C1B466A2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCAC5411791BC3651BBBF8F8D76DE1A3E039C71BD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Int32>
struct Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC7ABC6A67982D2F89D145488BD4884BC9FAA7C4F* ____entries_1;
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
	KeyCollection_t729642E31E09FD3235BFA6007575EC4D4C8CE43E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC02B95B434A38DDC6DF72D47BDA4922291DC94D7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dModel>
struct Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE82C879B3730C1A7141E88C5B2E593E3C579EDD3* ____entries_1;
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
	KeyCollection_tE8ED6CD10CF7853AD23FB92B0C718DE2393BCFC8* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tFCC80CE2826E546049AFCE858E58AA3B765B1153* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dPaintableTexture>
struct Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5C8B2C224E77F9607DB2F71F075F964B5D53303E* ____entries_1;
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
	KeyCollection_t9F08E0F13B3DEEA0974F31AB85585953CFCE94C0* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAF9BF7E292AF8925282A51E540EF28A29444A5A0* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,UnityEngine.Texture>
struct Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7DF1973C8A2674A2FAD3CE7BE3A66FB62894DC01* ____entries_1;
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
	KeyCollection_tE2AF1EEC62F53740B90C274097EB433DEDD1F0C6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t27D47E57B4D3D131004297BB0D563B7D7C4D9FC3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dModel,PaintIn3D.P3dHash>
struct Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3081FE4E28F0C81E5D559CFD17751BE6E1A499D7* ____entries_1;
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
	KeyCollection_tEB95FDBF6177AA42B4928D4188EBCBC848AE2824* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB1F257B1969B0E340EA53D57312D80D728890DF5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dHash>
struct Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t932A07B84E90A8A9E2003EF63CFFF831ABBCB372* ____entries_1;
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
	KeyCollection_t5DE045E134258F336B186D40EC6FE997DC5DE177* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t84B4B59B07FC53764E6B75B246A9531CB7142866* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,PaintIn3D.P3dHash>
struct Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF4C93F0241EC0A318A76AC9D1E30202F2F6106A7* ____entries_1;
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
	KeyCollection_tC31FD8F2E3E399AEBBCC644F210745F3BD760841* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDDF8D7BDE955B3D826E8465DABAF65A3B073570C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.LinkedList`1<PaintIn3D.P3dPaintableTexture>
struct LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_tFEBC4F52CB20B430A0FE111B534688CD367D5B05* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.KeyCode>
struct List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* ____items_1;
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

// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture>
struct List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	P3dPaintableTextureU5BU5D_t13EF66E663D8465A663CE5F1401D1A77B3E321A3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>
struct List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FingerU5BU5D_tB9DD3197CFB643A5397B3C530FC3D15D708A6F70* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// PaintIn3D.P3dModifierList
struct P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1  : public RuntimeObject
{
	// System.Collections.Generic.List`1<PaintIn3D.P3dModifier> PaintIn3D.P3dModifierList::modifiers
	List_1_tF5CB340383AC542B35014597F04B162B93ECEDF0* ___modifiers_0;
};

// PaintIn3D.P3dSerialization
struct P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9  : public RuntimeObject
{
};

// PaintIn3D.P3dStateManager
struct P3dStateManager_tB400282FF671E5D734E6D1962EBBB6AA05E42995  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>
struct Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.KeyCode>
struct Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
struct Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_list
	LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* ____list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_node
	LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* ____node_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.LinkedList`1/Enumerator::_current
	RuntimeObject* ____current_3;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_index
	int32_t ____index_4;
};

// System.Collections.Generic.LinkedList`1/Enumerator<PaintIn3D.P3dPaintableTexture>
struct Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_list
	LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* ____list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_node
	LinkedListNode_1_tFEBC4F52CB20B430A0FE111B534688CD367D5B05* ____node_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.LinkedList`1/Enumerator::_current
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ____current_3;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_index
	int32_t ____index_4;
};

// Unity.Collections.NativeArray`1<UnityEngine.Color32>
struct NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// PaintIn3D.P3dGroup
struct P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D 
{
	// System.Int32 PaintIn3D.P3dGroup::index
	int32_t ___index_0;
};

// PaintIn3D.P3dHash
struct P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 
{
	// System.Int32 PaintIn3D.P3dHash::v
	int32_t ___v_0;
};

// PaintIn3D.P3dHashedMaterial
struct P3dHashedMaterial_tA22EA510D1C0D651DBE6FC483920B20F392B2239 
{
	// UnityEngine.Material PaintIn3D.P3dHashedMaterial::instance
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___instance_0;
	// System.Int32 PaintIn3D.P3dHashedMaterial::hash
	int32_t ___hash_1;
};
// Native definition for P/Invoke marshalling of PaintIn3D.P3dHashedMaterial
struct P3dHashedMaterial_tA22EA510D1C0D651DBE6FC483920B20F392B2239_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___instance_0;
	int32_t ___hash_1;
};
// Native definition for COM marshalling of PaintIn3D.P3dHashedMaterial
struct P3dHashedMaterial_tA22EA510D1C0D651DBE6FC483920B20F392B2239_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___instance_0;
	int32_t ___hash_1;
};

// PaintIn3D.P3dSlot
struct P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C 
{
	// System.Int32 PaintIn3D.P3dSlot::Index
	int32_t ___Index_0;
	// System.String PaintIn3D.P3dSlot::Name
	String_t* ___Name_1;
};
// Native definition for P/Invoke marshalling of PaintIn3D.P3dSlot
struct P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshaled_pinvoke
{
	int32_t ___Index_0;
	char* ___Name_1;
};
// Native definition for COM marshalling of PaintIn3D.P3dSlot
struct P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshaled_com
{
	int32_t ___Index_0;
	Il2CppChar* ___Name_1;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<depthStencilFormat>k__BackingField
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.Rendering.AsyncGPUReadbackRequest
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	// System.IntPtr UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Int32 UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Version
	int32_t ___m_Version_1;
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

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
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

// PaintIn3D.P3dBlendMode
struct P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B 
{
	// System.Int32 PaintIn3D.P3dBlendMode::Index
	int32_t ___Index_21;
	// UnityEngine.Color PaintIn3D.P3dBlendMode::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_22;
	// UnityEngine.Texture PaintIn3D.P3dBlendMode::Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___Texture_23;
	// System.Single PaintIn3D.P3dBlendMode::Kernel
	float ___Kernel_24;
	// UnityEngine.Vector4 PaintIn3D.P3dBlendMode::Channels
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Channels_25;
};
// Native definition for P/Invoke marshalling of PaintIn3D.P3dBlendMode
struct P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_marshaled_pinvoke
{
	int32_t ___Index_21;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_22;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___Texture_23;
	float ___Kernel_24;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Channels_25;
};
// Native definition for COM marshalling of PaintIn3D.P3dBlendMode
struct P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_marshaled_com
{
	int32_t ___Index_21;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_22;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___Texture_23;
	float ___Kernel_24;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Channels_25;
};

// PaintIn3D.P3dHashedModel
struct P3dHashedModel_t212038FD7A2BF1F79EDB09A6C12CE24CAD52B70A 
{
	// PaintIn3D.P3dModel PaintIn3D.P3dHashedModel::instance
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___instance_0;
	// PaintIn3D.P3dHash PaintIn3D.P3dHashedModel::hash
	P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___hash_1;
};
// Native definition for P/Invoke marshalling of PaintIn3D.P3dHashedModel
struct P3dHashedModel_t212038FD7A2BF1F79EDB09A6C12CE24CAD52B70A_marshaled_pinvoke
{
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___instance_0;
	P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___hash_1;
};
// Native definition for COM marshalling of PaintIn3D.P3dHashedModel
struct P3dHashedModel_t212038FD7A2BF1F79EDB09A6C12CE24CAD52B70A_marshaled_com
{
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___instance_0;
	P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___hash_1;
};

// PaintIn3D.P3dHashedTexture
struct P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E 
{
	// UnityEngine.Texture PaintIn3D.P3dHashedTexture::instance
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___instance_0;
	// PaintIn3D.P3dHash PaintIn3D.P3dHashedTexture::hash
	P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___hash_1;
};
// Native definition for P/Invoke marshalling of PaintIn3D.P3dHashedTexture
struct P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___instance_0;
	P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___hash_1;
};
// Native definition for COM marshalling of PaintIn3D.P3dHashedTexture
struct P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___instance_0;
	P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___hash_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// CW.Common.CwInputManager/Finger
struct Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8  : public RuntimeObject
{
	// System.Int32 CW.Common.CwInputManager/Finger::Index
	int32_t ___Index_0;
	// System.Single CW.Common.CwInputManager/Finger::Pressure
	float ___Pressure_1;
	// System.Boolean CW.Common.CwInputManager/Finger::Down
	bool ___Down_2;
	// System.Boolean CW.Common.CwInputManager/Finger::Up
	bool ___Up_3;
	// System.Single CW.Common.CwInputManager/Finger::Age
	float ___Age_4;
	// System.Boolean CW.Common.CwInputManager/Finger::StartedOverGui
	bool ___StartedOverGui_5;
	// UnityEngine.Vector2 CW.Common.CwInputManager/Finger::StartScreenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___StartScreenPosition_6;
	// UnityEngine.Vector2 CW.Common.CwInputManager/Finger::ScreenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenPosition_7;
	// UnityEngine.Vector2 CW.Common.CwInputManager/Finger::ScreenPositionOld
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenPositionOld_8;
	// UnityEngine.Vector2 CW.Common.CwInputManager/Finger::ScreenPositionOldOld
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenPositionOldOld_9;
	// UnityEngine.Vector2 CW.Common.CwInputManager/Finger::ScreenPositionOldOldOld
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenPositionOldOldOld_10;
};

// PaintIn3D.P3dPointer/VirtualFinger
struct VirtualFinger_tD77E369159E2991B7AB80C168614731B02DC5C22  : public RuntimeObject
{
	// UnityEngine.Vector2 PaintIn3D.P3dPointer/VirtualFinger::Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Position_0;
};

// PaintIn3D.P3dReadColor/ColorEvent
struct ColorEvent_t871C324F6981EB1A0CDE0FC4F559E313017CA4C9  : public UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// PaintIn3D.P3dCommand
struct P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D  : public RuntimeObject
{
	// System.Int32 PaintIn3D.P3dCommand::Index
	int32_t ___Index_0;
	// System.Boolean PaintIn3D.P3dCommand::Preview
	bool ___Preview_1;
	// System.Int32 PaintIn3D.P3dCommand::Priority
	int32_t ___Priority_2;
	// PaintIn3D.P3dHashedMaterial PaintIn3D.P3dCommand::Material
	P3dHashedMaterial_tA22EA510D1C0D651DBE6FC483920B20F392B2239 ___Material_3;
	// System.Int32 PaintIn3D.P3dCommand::Pass
	int32_t ___Pass_4;
	// PaintIn3D.P3dHashedModel PaintIn3D.P3dCommand::Model
	P3dHashedModel_t212038FD7A2BF1F79EDB09A6C12CE24CAD52B70A ___Model_5;
	// System.Int32 PaintIn3D.P3dCommand::Submesh
	int32_t ___Submesh_6;
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommand::LocalMaskTexture
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___LocalMaskTexture_7;
	// UnityEngine.Vector4 PaintIn3D.P3dCommand::LocalMaskChannel
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___LocalMaskChannel_8;
};

// PaintIn3D.P3dHit
struct P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3 
{
	// UnityEngine.RaycastHit PaintIn3D.P3dHit::Raw
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___Raw_0;
	// UnityEngine.Vector2 PaintIn3D.P3dHit::first
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___first_1;
	// System.Boolean PaintIn3D.P3dHit::firstSet
	bool ___firstSet_2;
	// UnityEngine.Vector2 PaintIn3D.P3dHit::second
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___second_3;
	// System.Boolean PaintIn3D.P3dHit::secondSet
	bool ___secondSet_4;
	// UnityEngine.Vector3 PaintIn3D.P3dHit::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_5;
	// UnityEngine.Vector3 PaintIn3D.P3dHit::Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal_6;
	// UnityEngine.Transform PaintIn3D.P3dHit::Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Transform_7;
	// System.Int32 PaintIn3D.P3dHit::TriangleIndex
	int32_t ___TriangleIndex_8;
	// System.Single PaintIn3D.P3dHit::Distance
	float ___Distance_9;
	// UnityEngine.Collider PaintIn3D.P3dHit::Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___Collider_10;
};
// Native definition for P/Invoke marshalling of PaintIn3D.P3dHit
struct P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3_marshaled_pinvoke
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___Raw_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___first_1;
	int32_t ___firstSet_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___second_3;
	int32_t ___secondSet_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal_6;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Transform_7;
	int32_t ___TriangleIndex_8;
	float ___Distance_9;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___Collider_10;
};
// Native definition for COM marshalling of PaintIn3D.P3dHit
struct P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3_marshaled_com
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___Raw_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___first_1;
	int32_t ___firstSet_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___second_3;
	int32_t ___secondSet_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal_6;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Transform_7;
	int32_t ___TriangleIndex_8;
	float ___Distance_9;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___Collider_10;
};

// PaintIn3D.P3dReader
struct P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7  : public RuntimeObject
{
	// UnityEngine.Rendering.AsyncGPUReadbackRequest PaintIn3D.P3dReader::request
	AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 ___request_0;
	// System.Boolean PaintIn3D.P3dReader::dirty
	bool ___dirty_1;
	// System.Boolean PaintIn3D.P3dReader::requested
	bool ___requested_2;
	// UnityEngine.RenderTexture PaintIn3D.P3dReader::buffer
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___buffer_3;
	// UnityEngine.Vector2Int PaintIn3D.P3dReader::originalSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___originalSize_4;
	// UnityEngine.Vector2Int PaintIn3D.P3dReader::downsampledSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___downsampledSize_5;
	// System.Int32 PaintIn3D.P3dReader::downsampleSteps
	int32_t ___downsampleSteps_6;
	// System.Int32 PaintIn3D.P3dReader::downsampleBoost
	int32_t ___downsampleBoost_7;
	// UnityEngine.Texture2D PaintIn3D.P3dReader::tempTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tempTexture_8;
	// System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>> PaintIn3D.P3dReader::OnComplete
	Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* ___OnComplete_9;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>
struct Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>
struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// PaintIn3D.P3dCommandDecal
struct P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66  : public P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D
{
	// PaintIn3D.P3dBlendMode PaintIn3D.P3dCommandDecal::Blend
	P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___Blend_11;
	// System.Boolean PaintIn3D.P3dCommandDecal::In3D
	bool ___In3D_12;
	// UnityEngine.Vector3 PaintIn3D.P3dCommandDecal::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_13;
	// UnityEngine.Vector3 PaintIn3D.P3dCommandDecal::EndPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___EndPosition_14;
	// UnityEngine.Vector3 PaintIn3D.P3dCommandDecal::Position2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position2_15;
	// UnityEngine.Vector3 PaintIn3D.P3dCommandDecal::EndPosition2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___EndPosition2_16;
	// System.Int32 PaintIn3D.P3dCommandDecal::Extrusions
	int32_t ___Extrusions_17;
	// System.Boolean PaintIn3D.P3dCommandDecal::Clip
	bool ___Clip_18;
	// UnityEngine.Matrix4x4 PaintIn3D.P3dCommandDecal::Matrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___Matrix_19;
	// UnityEngine.Vector3 PaintIn3D.P3dCommandDecal::Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Direction_20;
	// UnityEngine.Color PaintIn3D.P3dCommandDecal::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_21;
	// System.Single PaintIn3D.P3dCommandDecal::Opacity
	float ___Opacity_22;
	// System.Single PaintIn3D.P3dCommandDecal::Hardness
	float ___Hardness_23;
	// System.Single PaintIn3D.P3dCommandDecal::Wrapping
	float ___Wrapping_24;
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandDecal::Texture
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___Texture_25;
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandDecal::Shape
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___Shape_26;
	// UnityEngine.Vector4 PaintIn3D.P3dCommandDecal::ShapeChannel
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ShapeChannel_27;
	// UnityEngine.Vector2 PaintIn3D.P3dCommandDecal::NormalFront
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___NormalFront_28;
	// UnityEngine.Vector2 PaintIn3D.P3dCommandDecal::NormalBack
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___NormalBack_29;
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandDecal::TileTexture
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___TileTexture_30;
	// UnityEngine.Matrix4x4 PaintIn3D.P3dCommandDecal::TileMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___TileMatrix_31;
	// System.Single PaintIn3D.P3dCommandDecal::TileOpacity
	float ___TileOpacity_32;
	// System.Single PaintIn3D.P3dCommandDecal::TileTransition
	float ___TileTransition_33;
	// UnityEngine.Matrix4x4 PaintIn3D.P3dCommandDecal::MaskMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___MaskMatrix_34;
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandDecal::MaskShape
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___MaskShape_35;
	// UnityEngine.Vector4 PaintIn3D.P3dCommandDecal::MaskChannel
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___MaskChannel_36;
	// UnityEngine.Vector3 PaintIn3D.P3dCommandDecal::MaskStretch
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MaskStretch_37;
};

// PaintIn3D.P3dCommandFill
struct P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B  : public P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D
{
	// PaintIn3D.P3dBlendMode PaintIn3D.P3dCommandFill::Blend
	P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___Blend_11;
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandFill::Texture
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___Texture_12;
	// UnityEngine.Color PaintIn3D.P3dCommandFill::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_13;
	// System.Single PaintIn3D.P3dCommandFill::Opacity
	float ___Opacity_14;
	// System.Single PaintIn3D.P3dCommandFill::Minimum
	float ___Minimum_15;
};

// PaintIn3D.P3dCommandReplace
struct P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E  : public P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D
{
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandReplace::Texture
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___Texture_11;
	// UnityEngine.Color PaintIn3D.P3dCommandReplace::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_12;
};

// PaintIn3D.P3dCommandReplaceChannels
struct P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4  : public P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D
{
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandReplaceChannels::TextureR
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___TextureR_11;
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandReplaceChannels::TextureG
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___TextureG_12;
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandReplaceChannels::TextureB
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___TextureB_13;
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandReplaceChannels::TextureA
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___TextureA_14;
	// UnityEngine.Vector4 PaintIn3D.P3dCommandReplaceChannels::ChannelR
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ChannelR_15;
	// UnityEngine.Vector4 PaintIn3D.P3dCommandReplaceChannels::ChannelG
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ChannelG_16;
	// UnityEngine.Vector4 PaintIn3D.P3dCommandReplaceChannels::ChannelB
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ChannelB_17;
	// UnityEngine.Vector4 PaintIn3D.P3dCommandReplaceChannels::ChannelA
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ChannelA_18;
};

// PaintIn3D.P3dCommandSphere
struct P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8  : public P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D
{
	// PaintIn3D.P3dBlendMode PaintIn3D.P3dCommandSphere::Blend
	P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___Blend_11;
	// System.Boolean PaintIn3D.P3dCommandSphere::In3D
	bool ___In3D_12;
	// UnityEngine.Vector3 PaintIn3D.P3dCommandSphere::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_13;
	// UnityEngine.Vector3 PaintIn3D.P3dCommandSphere::EndPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___EndPosition_14;
	// UnityEngine.Vector3 PaintIn3D.P3dCommandSphere::Position2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position2_15;
	// UnityEngine.Vector3 PaintIn3D.P3dCommandSphere::EndPosition2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___EndPosition2_16;
	// System.Int32 PaintIn3D.P3dCommandSphere::Extrusions
	int32_t ___Extrusions_17;
	// System.Boolean PaintIn3D.P3dCommandSphere::Clip
	bool ___Clip_18;
	// UnityEngine.Matrix4x4 PaintIn3D.P3dCommandSphere::Matrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___Matrix_19;
	// UnityEngine.Color PaintIn3D.P3dCommandSphere::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_20;
	// System.Single PaintIn3D.P3dCommandSphere::Opacity
	float ___Opacity_21;
	// System.Single PaintIn3D.P3dCommandSphere::Hardness
	float ___Hardness_22;
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandSphere::TileTexture
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___TileTexture_23;
	// UnityEngine.Matrix4x4 PaintIn3D.P3dCommandSphere::TileMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___TileMatrix_24;
	// System.Single PaintIn3D.P3dCommandSphere::TileOpacity
	float ___TileOpacity_25;
	// System.Single PaintIn3D.P3dCommandSphere::TileTransition
	float ___TileTransition_26;
	// UnityEngine.Matrix4x4 PaintIn3D.P3dCommandSphere::MaskMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___MaskMatrix_27;
	// PaintIn3D.P3dHashedTexture PaintIn3D.P3dCommandSphere::MaskShape
	P3dHashedTexture_tED5B1E21D7499D798BD2CFC93AA9A9D71FA8883E ___MaskShape_28;
	// UnityEngine.Vector4 PaintIn3D.P3dCommandSphere::MaskChannel
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___MaskChannel_29;
	// UnityEngine.Vector3 PaintIn3D.P3dCommandSphere::MaskStretch
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MaskStretch_30;
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// PaintIn3D.P3dHitScreenBase
struct P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera PaintIn3D.P3dHitScreenBase::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_4;
	// UnityEngine.LayerMask PaintIn3D.P3dHitScreenBase::layers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layers_5;
	// UnityEngine.LayerMask PaintIn3D.P3dHitScreenBase::guiLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___guiLayers_6;
	// PaintIn3D.P3dHitScreenBase/EmitType PaintIn3D.P3dHitScreenBase::emit
	int32_t ___emit_7;
	// PaintIn3D.P3dHitScreenBase/RotationType PaintIn3D.P3dHitScreenBase::rotateTo
	int32_t ___rotateTo_8;
	// PaintIn3D.P3dHitScreenBase/DirectionType PaintIn3D.P3dHitScreenBase::normalDirection
	int32_t ___normalDirection_9;
	// PaintIn3D.P3dHitScreenBase/RelativeType PaintIn3D.P3dHitScreenBase::normalRelativeTo
	int32_t ___normalRelativeTo_10;
	// UnityEngine.Transform PaintIn3D.P3dHitScreenBase::customTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___customTransform_11;
	// System.Boolean PaintIn3D.P3dHitScreenBase::storeStates
	bool ___storeStates_12;
	// System.Int32 PaintIn3D.P3dHitScreenBase::priority
	int32_t ___priority_13;
	// PaintIn3D.P3dHitScreenBase/ButtonTypes PaintIn3D.P3dHitScreenBase::requiredButtons
	int32_t ___requiredButtons_14;
	// UnityEngine.KeyCode PaintIn3D.P3dHitScreenBase::requiredKey
	int32_t ___requiredKey_15;
	// System.Single PaintIn3D.P3dHitScreenBase::normalOffset
	float ___normalOffset_16;
	// System.Single PaintIn3D.P3dHitScreenBase::mouseOffset
	float ___mouseOffset_17;
	// System.Single PaintIn3D.P3dHitScreenBase::touchOffset
	float ___touchOffset_18;
	// System.Boolean PaintIn3D.P3dHitScreenBase::showPreview
	bool ___showPreview_19;
};

// PaintIn3D.P3dMask
struct P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture PaintIn3D.P3dMask::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_4;
	// PaintIn3D.P3dChannel PaintIn3D.P3dMask::channel
	int32_t ___channel_5;
	// UnityEngine.Vector2 PaintIn3D.P3dMask::stretch
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___stretch_6;
	// System.Collections.Generic.LinkedListNode`1<PaintIn3D.P3dMask> PaintIn3D.P3dMask::instancesNode
	LinkedListNode_1_t8142ECA199EF93B2FCE652CA24084E6B09733209* ___instancesNode_8;
};

// PaintIn3D.P3dModel
struct P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PaintIn3D.P3dPaintable PaintIn3D.P3dModel::paintable
	P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* ___paintable_4;
	// System.Boolean PaintIn3D.P3dModel::includeScale
	bool ___includeScale_5;
	// PaintIn3D.P3dModel/UseMeshType PaintIn3D.P3dModel::useMesh
	int32_t ___useMesh_6;
	// PaintIn3D.P3dHash PaintIn3D.P3dModel::hash
	P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___hash_7;
	// UnityEngine.Renderer PaintIn3D.P3dModel::cachedRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___cachedRenderer_8;
	// System.Boolean PaintIn3D.P3dModel::cachedRendererSet
	bool ___cachedRendererSet_9;
	// UnityEngine.SkinnedMeshRenderer PaintIn3D.P3dModel::cachedSkinned
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___cachedSkinned_10;
	// UnityEngine.MeshFilter PaintIn3D.P3dModel::cachedFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___cachedFilter_11;
	// System.Boolean PaintIn3D.P3dModel::cachedSkinnedSet
	bool ___cachedSkinnedSet_12;
	// UnityEngine.Transform PaintIn3D.P3dModel::cachedTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cachedTransform_13;
	// UnityEngine.GameObject PaintIn3D.P3dModel::cachedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cachedGameObject_14;
	// UnityEngine.Material[] PaintIn3D.P3dModel::materials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___materials_15;
	// System.Boolean PaintIn3D.P3dModel::materialsSet
	bool ___materialsSet_16;
	// UnityEngine.Mesh PaintIn3D.P3dModel::bakedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___bakedMesh_17;
	// System.Boolean PaintIn3D.P3dModel::bakedMeshSet
	bool ___bakedMeshSet_18;
	// System.Boolean PaintIn3D.P3dModel::prepared
	bool ___prepared_19;
	// UnityEngine.Mesh PaintIn3D.P3dModel::preparedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___preparedMesh_20;
	// UnityEngine.Matrix4x4 PaintIn3D.P3dModel::preparedMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___preparedMatrix_21;
	// System.Int32[] PaintIn3D.P3dModel::preparedTriangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___preparedTriangles_22;
	// UnityEngine.Vector3[] PaintIn3D.P3dModel::preparedPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___preparedPositions_23;
	// UnityEngine.Vector2[] PaintIn3D.P3dModel::preparedCoord0
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___preparedCoord0_24;
	// UnityEngine.Vector2[] PaintIn3D.P3dModel::preparedCoord1
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___preparedCoord1_25;
	// System.Collections.Generic.LinkedListNode`1<PaintIn3D.P3dModel> PaintIn3D.P3dModel::instancesNode
	LinkedListNode_1_t590A572CA9CEC43D97B32140E550D37DE92DF3E8* ___instancesNode_28;
};

// PaintIn3D.P3dPaintDecal
struct P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask PaintIn3D.P3dPaintDecal::layers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layers_4;
	// PaintIn3D.P3dModel PaintIn3D.P3dPaintDecal::targetModel
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___targetModel_5;
	// PaintIn3D.P3dGroup PaintIn3D.P3dPaintDecal::group
	P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___group_6;
	// PaintIn3D.P3dPaintableTexture PaintIn3D.P3dPaintDecal::targetTexture
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___targetTexture_7;
	// PaintIn3D.P3dBlendMode PaintIn3D.P3dPaintDecal::blendMode
	P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___blendMode_8;
	// UnityEngine.Texture PaintIn3D.P3dPaintDecal::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_9;
	// UnityEngine.Texture PaintIn3D.P3dPaintDecal::shape
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shape_10;
	// PaintIn3D.P3dChannel PaintIn3D.P3dPaintDecal::shapeChannel
	int32_t ___shapeChannel_11;
	// UnityEngine.Color PaintIn3D.P3dPaintDecal::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_12;
	// System.Single PaintIn3D.P3dPaintDecal::opacity
	float ___opacity_13;
	// System.Single PaintIn3D.P3dPaintDecal::angle
	float ___angle_14;
	// UnityEngine.Vector3 PaintIn3D.P3dPaintDecal::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_15;
	// System.Single PaintIn3D.P3dPaintDecal::radius
	float ___radius_16;
	// System.Single PaintIn3D.P3dPaintDecal::hardness
	float ___hardness_17;
	// System.Single PaintIn3D.P3dPaintDecal::wrapping
	float ___wrapping_18;
	// System.Single PaintIn3D.P3dPaintDecal::normalFront
	float ___normalFront_19;
	// System.Single PaintIn3D.P3dPaintDecal::normalBack
	float ___normalBack_20;
	// System.Single PaintIn3D.P3dPaintDecal::normalFade
	float ___normalFade_21;
	// UnityEngine.Texture PaintIn3D.P3dPaintDecal::tileTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___tileTexture_22;
	// UnityEngine.Transform PaintIn3D.P3dPaintDecal::tileTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tileTransform_23;
	// System.Single PaintIn3D.P3dPaintDecal::tileOpacity
	float ___tileOpacity_24;
	// System.Single PaintIn3D.P3dPaintDecal::tileTransition
	float ___tileTransition_25;
	// PaintIn3D.P3dModifierList PaintIn3D.P3dPaintDecal::modifiers
	P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* ___modifiers_26;
};

// PaintIn3D.P3dPaintFill
struct P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PaintIn3D.P3dGroup PaintIn3D.P3dPaintFill::group
	P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___group_4;
	// PaintIn3D.P3dBlendMode PaintIn3D.P3dPaintFill::blendMode
	P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___blendMode_5;
	// UnityEngine.Texture PaintIn3D.P3dPaintFill::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_6;
	// UnityEngine.Color PaintIn3D.P3dPaintFill::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_7;
	// System.Single PaintIn3D.P3dPaintFill::opacity
	float ___opacity_8;
	// System.Single PaintIn3D.P3dPaintFill::minimum
	float ___minimum_9;
	// PaintIn3D.P3dModifierList PaintIn3D.P3dPaintFill::modifiers
	P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* ___modifiers_10;
};

// PaintIn3D.P3dPaintReplace
struct P3dPaintReplace_t208CAABC9FCB9A35AE5113B48D8404ADC328097B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PaintIn3D.P3dGroup PaintIn3D.P3dPaintReplace::group
	P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___group_4;
	// UnityEngine.Texture PaintIn3D.P3dPaintReplace::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_5;
	// UnityEngine.Color PaintIn3D.P3dPaintReplace::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_6;
	// PaintIn3D.P3dModifierList PaintIn3D.P3dPaintReplace::modifiers
	P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* ___modifiers_7;
};

// PaintIn3D.P3dPaintReplaceChannels
struct P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PaintIn3D.P3dGroup PaintIn3D.P3dPaintReplaceChannels::group
	P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___group_4;
	// UnityEngine.Texture PaintIn3D.P3dPaintReplaceChannels::textureR
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___textureR_5;
	// UnityEngine.Texture PaintIn3D.P3dPaintReplaceChannels::textureG
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___textureG_6;
	// UnityEngine.Texture PaintIn3D.P3dPaintReplaceChannels::textureB
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___textureB_7;
	// UnityEngine.Texture PaintIn3D.P3dPaintReplaceChannels::textureA
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___textureA_8;
	// UnityEngine.Vector4 PaintIn3D.P3dPaintReplaceChannels::channelR
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___channelR_9;
	// UnityEngine.Vector4 PaintIn3D.P3dPaintReplaceChannels::channelG
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___channelG_10;
	// UnityEngine.Vector4 PaintIn3D.P3dPaintReplaceChannels::channelB
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___channelB_11;
	// UnityEngine.Vector4 PaintIn3D.P3dPaintReplaceChannels::channelA
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___channelA_12;
};

// PaintIn3D.P3dPaintSphere
struct P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask PaintIn3D.P3dPaintSphere::layers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layers_4;
	// PaintIn3D.P3dGroup PaintIn3D.P3dPaintSphere::group
	P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___group_5;
	// PaintIn3D.P3dModel PaintIn3D.P3dPaintSphere::targetModel
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___targetModel_6;
	// PaintIn3D.P3dPaintableTexture PaintIn3D.P3dPaintSphere::targetTexture
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___targetTexture_7;
	// PaintIn3D.P3dBlendMode PaintIn3D.P3dPaintSphere::blendMode
	P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___blendMode_8;
	// UnityEngine.Color PaintIn3D.P3dPaintSphere::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_9;
	// System.Single PaintIn3D.P3dPaintSphere::opacity
	float ___opacity_10;
	// System.Single PaintIn3D.P3dPaintSphere::angle
	float ___angle_11;
	// UnityEngine.Vector3 PaintIn3D.P3dPaintSphere::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_12;
	// System.Single PaintIn3D.P3dPaintSphere::radius
	float ___radius_13;
	// System.Single PaintIn3D.P3dPaintSphere::hardness
	float ___hardness_14;
	// UnityEngine.Texture PaintIn3D.P3dPaintSphere::tileTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___tileTexture_15;
	// UnityEngine.Transform PaintIn3D.P3dPaintSphere::tileTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tileTransform_16;
	// System.Single PaintIn3D.P3dPaintSphere::tileOpacity
	float ___tileOpacity_17;
	// System.Single PaintIn3D.P3dPaintSphere::tileTransition
	float ___tileTransition_18;
	// PaintIn3D.P3dModifierList PaintIn3D.P3dPaintSphere::modifiers
	P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* ___modifiers_19;
};

// PaintIn3D.P3dPaintableTexture
struct P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PaintIn3D.P3dSlot PaintIn3D.P3dPaintableTexture::slot
	P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C ___slot_4;
	// PaintIn3D.P3dCoord PaintIn3D.P3dPaintableTexture::coord
	int32_t ___coord_5;
	// PaintIn3D.P3dGroup PaintIn3D.P3dPaintableTexture::group
	P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___group_6;
	// PaintIn3D.P3dPaintableTexture/UndoRedoType PaintIn3D.P3dPaintableTexture::undoRedo
	int32_t ___undoRedo_7;
	// System.Int32 PaintIn3D.P3dPaintableTexture::stateLimit
	int32_t ___stateLimit_8;
	// PaintIn3D.P3dPaintableTexture/SaveLoadType PaintIn3D.P3dPaintableTexture::saveLoad
	int32_t ___saveLoad_9;
	// System.String PaintIn3D.P3dPaintableTexture::saveName
	String_t* ___saveName_10;
	// System.Int32 PaintIn3D.P3dPaintableTexture::width
	int32_t ___width_11;
	// System.Int32 PaintIn3D.P3dPaintableTexture::height
	int32_t ___height_12;
	// UnityEngine.Texture PaintIn3D.P3dPaintableTexture::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_13;
	// UnityEngine.Color PaintIn3D.P3dPaintableTexture::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_14;
	// UnityEngine.RenderTextureFormat PaintIn3D.P3dPaintableTexture::format
	int32_t ___format_15;
	// PaintIn3D.P3dPaintableTexture/MipType PaintIn3D.P3dPaintableTexture::mipMaps
	int32_t ___mipMaps_16;
	// PaintIn3D.P3dPaintableTexture/FilterType PaintIn3D.P3dPaintableTexture::filter
	int32_t ___filter_17;
	// PaintIn3D.P3dPaintableTexture/AnisoType PaintIn3D.P3dPaintableTexture::aniso
	int32_t ___aniso_18;
	// PaintIn3D.P3dPaintableTexture/WrapType PaintIn3D.P3dPaintableTexture::wrapU
	int32_t ___wrapU_19;
	// PaintIn3D.P3dPaintableTexture/WrapType PaintIn3D.P3dPaintableTexture::wrapV
	int32_t ___wrapV_20;
	// PaintIn3D.P3dPaintableTexture/ExistingType PaintIn3D.P3dPaintableTexture::existing
	int32_t ___existing_21;
	// PaintIn3D.P3dPaintableTexture/ConversionType PaintIn3D.P3dPaintableTexture::conversion
	int32_t ___conversion_22;
	// UnityEngine.Texture PaintIn3D.P3dPaintableTexture::localMaskTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___localMaskTexture_23;
	// PaintIn3D.P3dChannel PaintIn3D.P3dPaintableTexture::localMaskChannel
	int32_t ___localMaskChannel_24;
	// System.String PaintIn3D.P3dPaintableTexture::shaderKeyword
	String_t* ___shaderKeyword_25;
	// PaintIn3D.P3dHash PaintIn3D.P3dPaintableTexture::hash
	P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___hash_26;
	// System.Boolean PaintIn3D.P3dPaintableTexture::isDummy
	bool ___isDummy_27;
	// System.String PaintIn3D.P3dPaintableTexture::output
	String_t* ___output_28;
	// System.Action`1<PaintIn3D.P3dCommand> PaintIn3D.P3dPaintableTexture::OnAddCommand
	Action_1_t197D90233CFD0A751641723D06DE23097E99A46D* ___OnAddCommand_29;
	// System.Action`1<System.Boolean> PaintIn3D.P3dPaintableTexture::OnModified
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnModified_33;
	// System.Boolean PaintIn3D.P3dPaintableTexture::activated
	bool ___activated_34;
	// UnityEngine.RenderTexture PaintIn3D.P3dPaintableTexture::current
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___current_35;
	// UnityEngine.RenderTexture PaintIn3D.P3dPaintableTexture::preview
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___preview_36;
	// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableState> PaintIn3D.P3dPaintableTexture::paintableStates
	List_1_t74E0BEBF8CFBD266D746B900F6528A3B72B3168E* ___paintableStates_37;
	// System.Int32 PaintIn3D.P3dPaintableTexture::stateIndex
	int32_t ___stateIndex_38;
	// PaintIn3D.P3dPaintable PaintIn3D.P3dPaintableTexture::paintable
	P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* ___paintable_39;
	// System.Boolean PaintIn3D.P3dPaintableTexture::paintableSet
	bool ___paintableSet_40;
	// UnityEngine.Material PaintIn3D.P3dPaintableTexture::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_41;
	// System.Boolean PaintIn3D.P3dPaintableTexture::materialSet
	bool ___materialSet_42;
	// UnityEngine.Texture PaintIn3D.P3dPaintableTexture::oldTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___oldTexture_43;
	// System.Collections.Generic.List`1<PaintIn3D.P3dCommand> PaintIn3D.P3dPaintableTexture::paintCommands
	List_1_t54F090708FD8BBE1351164EA9B8A477AB71181B2* ___paintCommands_44;
	// System.Collections.Generic.List`1<PaintIn3D.P3dCommand> PaintIn3D.P3dPaintableTexture::previewCommands
	List_1_t54F090708FD8BBE1351164EA9B8A477AB71181B2* ___previewCommands_45;
	// System.Collections.Generic.List`1<PaintIn3D.P3dCommand> PaintIn3D.P3dPaintableTexture::localCommands
	List_1_t54F090708FD8BBE1351164EA9B8A477AB71181B2* ___localCommands_46;
	// System.Collections.Generic.LinkedListNode`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintableTexture::instancesNode
	LinkedListNode_1_tFEBC4F52CB20B430A0FE111B534688CD367D5B05* ___instancesNode_49;
};

// PaintIn3D.P3dPointer
struct P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PaintIn3D.P3dHitScreenBase PaintIn3D.P3dPointer::cachedHitScreenBase
	P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* ___cachedHitScreenBase_4;
	// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger> PaintIn3D.P3dPointer::fingers
	List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* ___fingers_5;
};

// PaintIn3D.P3dTextureHash
struct P3dTextureHash_t3576030550098A239E999FF9BF56B53CC443AF7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture PaintIn3D.P3dTextureHash::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_4;
	// PaintIn3D.P3dHash PaintIn3D.P3dTextureHash::hash
	P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___hash_5;
};

// PaintIn3D.P3dPaintable
struct P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00  : public P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45
{
	// PaintIn3D.P3dPaintable/ActivationType PaintIn3D.P3dPaintable::activation
	int32_t ___activation_29;
	// UnityEngine.Vector3 PaintIn3D.P3dPaintable::baseScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___baseScale_30;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> PaintIn3D.P3dPaintable::otherRenderers
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___otherRenderers_31;
	// UnityEngine.Events.UnityEvent PaintIn3D.P3dPaintable::onActivating
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onActivating_32;
	// UnityEngine.Events.UnityEvent PaintIn3D.P3dPaintable::onActivated
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onActivated_33;
	// System.Boolean PaintIn3D.P3dPaintable::activated
	bool ___activated_34;
	// System.Collections.Generic.HashSet`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintable::paintableTextures
	HashSet_1_t704CC4569C195936CC31725B4F24ED5D539B50A3* ___paintableTextures_35;
	// System.Collections.Generic.List`1<PaintIn3D.P3dMaterialCloner> PaintIn3D.P3dPaintable::materialCloners
	List_1_t0E9725291C3531AE7B3F48A164E76D9381DEA743* ___materialCloners_36;
};

// PaintIn3D.P3dPointerMouse
struct P3dPointerMouse_t2132552825D1F8C787CDA111C416F1141C0C3996  : public P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302
{
	// System.Boolean PaintIn3D.P3dPointerMouse::preview
	bool ___preview_6;
	// System.Collections.Generic.List`1<UnityEngine.KeyCode> PaintIn3D.P3dPointerMouse::keys
	List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* ___keys_7;
	// System.Int32 PaintIn3D.P3dPointerMouse::PREVIEW_FINGER_INDEX
	int32_t ___PREVIEW_FINGER_INDEX_8;
	// System.Int32 PaintIn3D.P3dPointerMouse::PAINT_FINGER_INDEX
	int32_t ___PAINT_FINGER_INDEX_9;
	// System.Boolean PaintIn3D.P3dPointerMouse::oldHeld
	bool ___oldHeld_10;
};

// PaintIn3D.P3dPointerPen
struct P3dPointerPen_tD52B01CDAF3AAC78196CE0D30272B12A48411362  : public P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302
{
	// System.Boolean PaintIn3D.P3dPointerPen::preview
	bool ___preview_6;
	// System.Single PaintIn3D.P3dPointerPen::offset
	float ___offset_7;
	// System.Int32 PaintIn3D.P3dPointerPen::PREVIEW_FINGER_INDEX
	int32_t ___PREVIEW_FINGER_INDEX_8;
	// System.Int32 PaintIn3D.P3dPointerPen::PAINT_FINGER_INDEX
	int32_t ___PAINT_FINGER_INDEX_9;
	// System.Boolean PaintIn3D.P3dPointerPen::oldHeld
	bool ___oldHeld_10;
};

// PaintIn3D.P3dPointerTouch
struct P3dPointerTouch_tFA3F92373690EE86D5378CCC6A153CCD3B4AE352  : public P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302
{
	// System.Single PaintIn3D.P3dPointerTouch::offset
	float ___offset_6;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material>

// System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Int32>

// System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Int32>

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dModel>

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dModel>

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dPaintableTexture>

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dPaintableTexture>

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,UnityEngine.Texture>

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,UnityEngine.Texture>

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dModel,PaintIn3D.P3dHash>

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dModel,PaintIn3D.P3dHash>

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dHash>

// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dHash>

// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,PaintIn3D.P3dHash>

// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,PaintIn3D.P3dHash>

// System.Collections.Generic.LinkedList`1<PaintIn3D.P3dPaintableTexture>

// System.Collections.Generic.LinkedList`1<PaintIn3D.P3dPaintableTexture>

// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32Enum>

// System.Collections.Generic.List`1<UnityEngine.KeyCode>
struct List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.KeyCode>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture>
struct List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	P3dPaintableTextureU5BU5D_t13EF66E663D8465A663CE5F1401D1A77B3E321A3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture>

// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>
struct List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FingerU5BU5D_tB9DD3197CFB643A5397B3C530FC3D15D708A6F70* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>

// PaintIn3D.P3dModifierList

// PaintIn3D.P3dModifierList

// PaintIn3D.P3dSerialization
struct P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material> PaintIn3D.P3dSerialization::HashToMaterial
	Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90* ___HashToMaterial_0;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Int32> PaintIn3D.P3dSerialization::MaterialToHash
	Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80* ___MaterialToHash_1;
	// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dModel> PaintIn3D.P3dSerialization::HashToModel
	Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1* ___HashToModel_2;
	// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dModel,PaintIn3D.P3dHash> PaintIn3D.P3dSerialization::ModelToHash
	Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215* ___ModelToHash_3;
	// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,UnityEngine.Texture> PaintIn3D.P3dSerialization::HashToTexture
	Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394* ___HashToTexture_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,PaintIn3D.P3dHash> PaintIn3D.P3dSerialization::TextureToHash
	Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D* ___TextureToHash_5;
	// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dSerialization::HashToPaintableTexture
	Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302* ___HashToPaintableTexture_6;
	// System.Collections.Generic.Dictionary`2<PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dHash> PaintIn3D.P3dSerialization::PaintableTextureToHash
	Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015* ___PaintableTextureToHash_7;
};

// PaintIn3D.P3dSerialization

// PaintIn3D.P3dStateManager

// PaintIn3D.P3dStateManager

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.KeyCode>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.KeyCode>

// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>

// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>

// System.Collections.Generic.LinkedList`1/Enumerator<PaintIn3D.P3dPaintableTexture>

// System.Collections.Generic.LinkedList`1/Enumerator<PaintIn3D.P3dPaintableTexture>

// Unity.Collections.NativeArray`1<UnityEngine.Color32>

// Unity.Collections.NativeArray`1<UnityEngine.Color32>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// PaintIn3D.P3dGroup

// PaintIn3D.P3dGroup

// PaintIn3D.P3dHash

// PaintIn3D.P3dHash

// PaintIn3D.P3dHashedMaterial

// PaintIn3D.P3dHashedMaterial

// PaintIn3D.P3dSlot

// PaintIn3D.P3dSlot

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.RenderTextureDescriptor

// UnityEngine.RenderTextureDescriptor

// System.Single

// System.Single

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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector2Int

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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.Rendering.AsyncGPUReadbackRequest

// UnityEngine.Rendering.AsyncGPUReadbackRequest

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Int32Enum

// System.Int32Enum

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// PaintIn3D.P3dBlendMode
struct P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_StaticFields
{
	// System.String[] PaintIn3D.P3dBlendMode::NAMES
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___NAMES_20;
	// System.Int32 PaintIn3D.P3dBlendMode::_Channels
	int32_t ____Channels_26;
	// System.Int32 PaintIn3D.P3dBlendMode::_ReplaceColor
	int32_t ____ReplaceColor_27;
	// System.Int32 PaintIn3D.P3dBlendMode::_ReplaceTexture
	int32_t ____ReplaceTexture_28;
	// System.Int32 PaintIn3D.P3dBlendMode::_ReplaceTextureSize
	int32_t ____ReplaceTextureSize_29;
	// System.Int32 PaintIn3D.P3dBlendMode::_Kernel
	int32_t ____Kernel_30;
};

// PaintIn3D.P3dBlendMode

// PaintIn3D.P3dHashedModel

// PaintIn3D.P3dHashedModel

// PaintIn3D.P3dHashedTexture

// PaintIn3D.P3dHashedTexture

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// CW.Common.CwInputManager/Finger

// CW.Common.CwInputManager/Finger

// PaintIn3D.P3dPointer/VirtualFinger

// PaintIn3D.P3dPointer/VirtualFinger

// PaintIn3D.P3dReadColor/ColorEvent

// PaintIn3D.P3dReadColor/ColorEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// PaintIn3D.P3dCommand
struct P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D_StaticFields
{
	// System.Int32 PaintIn3D.P3dCommand::_LocalMaskTexture
	int32_t ____LocalMaskTexture_9;
	// System.Int32 PaintIn3D.P3dCommand::_LocalMaskChannel
	int32_t ____LocalMaskChannel_10;
};

// PaintIn3D.P3dCommand

// PaintIn3D.P3dHit

// PaintIn3D.P3dHit

// PaintIn3D.P3dReader

// PaintIn3D.P3dReader

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>

// System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>

// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>

// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// PaintIn3D.P3dCommandDecal
struct P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields
{
	// PaintIn3D.P3dCommandDecal PaintIn3D.P3dCommandDecal::Instance
	P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* ___Instance_38;
	// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandDecal> PaintIn3D.P3dCommandDecal::pool
	Stack_1_t75B69EB7A953242B7FCF5E4350FFF1DC10F3598A* ___pool_39;
	// UnityEngine.Material PaintIn3D.P3dCommandDecal::cachedSpotMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedSpotMaterial_40;
	// UnityEngine.Material PaintIn3D.P3dCommandDecal::cachedLineMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedLineMaterial_41;
	// UnityEngine.Material PaintIn3D.P3dCommandDecal::cachedQuadMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedQuadMaterial_42;
	// UnityEngine.Material PaintIn3D.P3dCommandDecal::cachedLineClipMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedLineClipMaterial_43;
	// UnityEngine.Material PaintIn3D.P3dCommandDecal::cachedQuadClipMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedQuadClipMaterial_44;
	// System.Int32 PaintIn3D.P3dCommandDecal::cachedSpotMaterialHash
	int32_t ___cachedSpotMaterialHash_45;
	// System.Int32 PaintIn3D.P3dCommandDecal::cachedLineMaterialHash
	int32_t ___cachedLineMaterialHash_46;
	// System.Int32 PaintIn3D.P3dCommandDecal::cachedQuadMaterialHash
	int32_t ___cachedQuadMaterialHash_47;
	// System.Int32 PaintIn3D.P3dCommandDecal::cachedLineClipMaterialHash
	int32_t ___cachedLineClipMaterialHash_48;
	// System.Int32 PaintIn3D.P3dCommandDecal::cachedQuadClipMaterialHash
	int32_t ___cachedQuadClipMaterialHash_49;
	// System.Int32 PaintIn3D.P3dCommandDecal::_In3D
	int32_t ____In3D_50;
	// System.Int32 PaintIn3D.P3dCommandDecal::_Position
	int32_t ____Position_51;
	// System.Int32 PaintIn3D.P3dCommandDecal::_EndPosition
	int32_t ____EndPosition_52;
	// System.Int32 PaintIn3D.P3dCommandDecal::_Position2
	int32_t ____Position2_53;
	// System.Int32 PaintIn3D.P3dCommandDecal::_EndPosition2
	int32_t ____EndPosition2_54;
	// System.Int32 PaintIn3D.P3dCommandDecal::_Matrix
	int32_t ____Matrix_55;
	// System.Int32 PaintIn3D.P3dCommandDecal::_Direction
	int32_t ____Direction_56;
	// System.Int32 PaintIn3D.P3dCommandDecal::_Color
	int32_t ____Color_57;
	// System.Int32 PaintIn3D.P3dCommandDecal::_Opacity
	int32_t ____Opacity_58;
	// System.Int32 PaintIn3D.P3dCommandDecal::_Hardness
	int32_t ____Hardness_59;
	// System.Int32 PaintIn3D.P3dCommandDecal::_Wrapping
	int32_t ____Wrapping_60;
	// System.Int32 PaintIn3D.P3dCommandDecal::_Texture
	int32_t ____Texture_61;
	// System.Int32 PaintIn3D.P3dCommandDecal::_Shape
	int32_t ____Shape_62;
	// System.Int32 PaintIn3D.P3dCommandDecal::_ShapeChannel
	int32_t ____ShapeChannel_63;
	// System.Int32 PaintIn3D.P3dCommandDecal::_NormalFront
	int32_t ____NormalFront_64;
	// System.Int32 PaintIn3D.P3dCommandDecal::_NormalBack
	int32_t ____NormalBack_65;
	// System.Int32 PaintIn3D.P3dCommandDecal::_TileTexture
	int32_t ____TileTexture_66;
	// System.Int32 PaintIn3D.P3dCommandDecal::_TileMatrix
	int32_t ____TileMatrix_67;
	// System.Int32 PaintIn3D.P3dCommandDecal::_TileOpacity
	int32_t ____TileOpacity_68;
	// System.Int32 PaintIn3D.P3dCommandDecal::_TileTransition
	int32_t ____TileTransition_69;
	// System.Int32 PaintIn3D.P3dCommandDecal::_MaskMatrix
	int32_t ____MaskMatrix_70;
	// System.Int32 PaintIn3D.P3dCommandDecal::_MaskTexture
	int32_t ____MaskTexture_71;
	// System.Int32 PaintIn3D.P3dCommandDecal::_MaskChannel
	int32_t ____MaskChannel_72;
	// System.Int32 PaintIn3D.P3dCommandDecal::_MaskStretch
	int32_t ____MaskStretch_73;
};

// PaintIn3D.P3dCommandDecal

// PaintIn3D.P3dCommandFill
struct P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_StaticFields
{
	// PaintIn3D.P3dCommandFill PaintIn3D.P3dCommandFill::Instance
	P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B* ___Instance_16;
	// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandFill> PaintIn3D.P3dCommandFill::pool
	Stack_1_tA1F624B1E4D038F4D85940BF71FA5CE058DF58BB* ___pool_17;
	// UnityEngine.Material PaintIn3D.P3dCommandFill::cachedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedMaterial_18;
	// System.Int32 PaintIn3D.P3dCommandFill::cachedMaterialHash
	int32_t ___cachedMaterialHash_19;
	// System.Int32 PaintIn3D.P3dCommandFill::_Buffer
	int32_t ____Buffer_20;
	// System.Int32 PaintIn3D.P3dCommandFill::_BufferSize
	int32_t ____BufferSize_21;
	// System.Int32 PaintIn3D.P3dCommandFill::_Texture
	int32_t ____Texture_22;
	// System.Int32 PaintIn3D.P3dCommandFill::_Color
	int32_t ____Color_23;
	// System.Int32 PaintIn3D.P3dCommandFill::_Opacity
	int32_t ____Opacity_24;
	// System.Int32 PaintIn3D.P3dCommandFill::_Minimum
	int32_t ____Minimum_25;
};

// PaintIn3D.P3dCommandFill

// PaintIn3D.P3dCommandReplace
struct P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_StaticFields
{
	// PaintIn3D.P3dCommandReplace PaintIn3D.P3dCommandReplace::Instance
	P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E* ___Instance_13;
	// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandReplace> PaintIn3D.P3dCommandReplace::pool
	Stack_1_tAE30C95CC6CCF0562D675542D2CC6756B55BDD51* ___pool_14;
	// UnityEngine.Material PaintIn3D.P3dCommandReplace::cachedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedMaterial_15;
	// System.Int32 PaintIn3D.P3dCommandReplace::cachedMaterialHash
	int32_t ___cachedMaterialHash_16;
	// System.Int32 PaintIn3D.P3dCommandReplace::_Texture
	int32_t ____Texture_17;
	// System.Int32 PaintIn3D.P3dCommandReplace::_Color
	int32_t ____Color_18;
};

// PaintIn3D.P3dCommandReplace

// PaintIn3D.P3dCommandReplaceChannels
struct P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4_StaticFields
{
	// PaintIn3D.P3dCommandReplaceChannels PaintIn3D.P3dCommandReplaceChannels::Instance
	P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4* ___Instance_19;
	// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandReplaceChannels> PaintIn3D.P3dCommandReplaceChannels::pool
	Stack_1_tC3DB17B595AEEC4F0BFADDB055C8407AB87B6D76* ___pool_20;
	// UnityEngine.Material PaintIn3D.P3dCommandReplaceChannels::cachedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedMaterial_21;
	// System.Int32 PaintIn3D.P3dCommandReplaceChannels::cachedMaterialHash
	int32_t ___cachedMaterialHash_22;
	// System.Int32 PaintIn3D.P3dCommandReplaceChannels::_TextureR
	int32_t ____TextureR_23;
	// System.Int32 PaintIn3D.P3dCommandReplaceChannels::_TextureG
	int32_t ____TextureG_24;
	// System.Int32 PaintIn3D.P3dCommandReplaceChannels::_TextureB
	int32_t ____TextureB_25;
	// System.Int32 PaintIn3D.P3dCommandReplaceChannels::_TextureA
	int32_t ____TextureA_26;
	// System.Int32 PaintIn3D.P3dCommandReplaceChannels::_ChannelR
	int32_t ____ChannelR_27;
	// System.Int32 PaintIn3D.P3dCommandReplaceChannels::_ChannelG
	int32_t ____ChannelG_28;
	// System.Int32 PaintIn3D.P3dCommandReplaceChannels::_ChannelB
	int32_t ____ChannelB_29;
	// System.Int32 PaintIn3D.P3dCommandReplaceChannels::_ChannelA
	int32_t ____ChannelA_30;
};

// PaintIn3D.P3dCommandReplaceChannels

// PaintIn3D.P3dCommandSphere
struct P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields
{
	// PaintIn3D.P3dCommandSphere PaintIn3D.P3dCommandSphere::Instance
	P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* ___Instance_31;
	// System.Collections.Generic.Stack`1<PaintIn3D.P3dCommandSphere> PaintIn3D.P3dCommandSphere::pool
	Stack_1_t3FE996F8578F9A3A931A9BECA884EC7C240A9D68* ___pool_32;
	// UnityEngine.Material PaintIn3D.P3dCommandSphere::cachedSpotMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedSpotMaterial_33;
	// UnityEngine.Material PaintIn3D.P3dCommandSphere::cachedLineMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedLineMaterial_34;
	// UnityEngine.Material PaintIn3D.P3dCommandSphere::cachedQuadMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedQuadMaterial_35;
	// UnityEngine.Material PaintIn3D.P3dCommandSphere::cachedLineClipMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedLineClipMaterial_36;
	// UnityEngine.Material PaintIn3D.P3dCommandSphere::cachedQuadClipMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cachedQuadClipMaterial_37;
	// System.Int32 PaintIn3D.P3dCommandSphere::cachedSpotMaterialHash
	int32_t ___cachedSpotMaterialHash_38;
	// System.Int32 PaintIn3D.P3dCommandSphere::cachedLineMaterialHash
	int32_t ___cachedLineMaterialHash_39;
	// System.Int32 PaintIn3D.P3dCommandSphere::cachedQuadMaterialHash
	int32_t ___cachedQuadMaterialHash_40;
	// System.Int32 PaintIn3D.P3dCommandSphere::cachedLineClipMaterialHash
	int32_t ___cachedLineClipMaterialHash_41;
	// System.Int32 PaintIn3D.P3dCommandSphere::cachedQuadClipMaterialHash
	int32_t ___cachedQuadClipMaterialHash_42;
	// System.Int32 PaintIn3D.P3dCommandSphere::_In3D
	int32_t ____In3D_43;
	// System.Int32 PaintIn3D.P3dCommandSphere::_Position
	int32_t ____Position_44;
	// System.Int32 PaintIn3D.P3dCommandSphere::_EndPosition
	int32_t ____EndPosition_45;
	// System.Int32 PaintIn3D.P3dCommandSphere::_Position2
	int32_t ____Position2_46;
	// System.Int32 PaintIn3D.P3dCommandSphere::_EndPosition2
	int32_t ____EndPosition2_47;
	// System.Int32 PaintIn3D.P3dCommandSphere::_Matrix
	int32_t ____Matrix_48;
	// System.Int32 PaintIn3D.P3dCommandSphere::_Color
	int32_t ____Color_49;
	// System.Int32 PaintIn3D.P3dCommandSphere::_Opacity
	int32_t ____Opacity_50;
	// System.Int32 PaintIn3D.P3dCommandSphere::_Hardness
	int32_t ____Hardness_51;
	// System.Int32 PaintIn3D.P3dCommandSphere::_TileTexture
	int32_t ____TileTexture_52;
	// System.Int32 PaintIn3D.P3dCommandSphere::_TileMatrix
	int32_t ____TileMatrix_53;
	// System.Int32 PaintIn3D.P3dCommandSphere::_TileOpacity
	int32_t ____TileOpacity_54;
	// System.Int32 PaintIn3D.P3dCommandSphere::_TileTransition
	int32_t ____TileTransition_55;
	// System.Int32 PaintIn3D.P3dCommandSphere::_MaskMatrix
	int32_t ____MaskMatrix_56;
	// System.Int32 PaintIn3D.P3dCommandSphere::_MaskTexture
	int32_t ____MaskTexture_57;
	// System.Int32 PaintIn3D.P3dCommandSphere::_MaskChannel
	int32_t ____MaskChannel_58;
	// System.Int32 PaintIn3D.P3dCommandSphere::_MaskStretch
	int32_t ____MaskStretch_59;
};

// PaintIn3D.P3dCommandSphere

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// PaintIn3D.P3dHitScreenBase

// PaintIn3D.P3dHitScreenBase

// PaintIn3D.P3dMask
struct P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A_StaticFields
{
	// System.Collections.Generic.LinkedList`1<PaintIn3D.P3dMask> PaintIn3D.P3dMask::instances
	LinkedList_1_t7D3F451CA5F1DA0C0DDCCD3326D4A7ABD36B1EE4* ___instances_7;
};

// PaintIn3D.P3dMask

// PaintIn3D.P3dModel
struct P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_StaticFields
{
	// System.Collections.Generic.List`1<PaintIn3D.P3dModel> PaintIn3D.P3dModel::tempModels
	List_1_tAC4011F8E14CCFF35F20EBAF7202AE73E16CC115* ___tempModels_26;
	// System.Collections.Generic.LinkedList`1<PaintIn3D.P3dModel> PaintIn3D.P3dModel::instances
	LinkedList_1_tC8A19488ECD9C07CB0CACE5838EC91C69D63ECB7* ___instances_27;
};

// PaintIn3D.P3dModel

// PaintIn3D.P3dPaintDecal

// PaintIn3D.P3dPaintDecal

// PaintIn3D.P3dPaintFill

// PaintIn3D.P3dPaintFill

// PaintIn3D.P3dPaintReplace

// PaintIn3D.P3dPaintReplace

// PaintIn3D.P3dPaintReplaceChannels

// PaintIn3D.P3dPaintReplaceChannels

// PaintIn3D.P3dPaintSphere

// PaintIn3D.P3dPaintSphere

// PaintIn3D.P3dPaintableTexture
struct P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_StaticFields
{
	// System.Action`2<PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dCommand> PaintIn3D.P3dPaintableTexture::OnAddCommandGlobal
	Action_2_t903AF59C5D183CD3FFAFCB0E4E9EBE099FC8DFA5* ___OnAddCommandGlobal_30;
	// System.Action`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintableTexture::OnInstanceAdded
	Action_1_t514F3319E2FB4BAEC6A4AF9DA6AE65F8BD91A7B5* ___OnInstanceAdded_31;
	// System.Action`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintableTexture::OnInstanceRemoved
	Action_1_t514F3319E2FB4BAEC6A4AF9DA6AE65F8BD91A7B5* ___OnInstanceRemoved_32;
	// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintableTexture::tempPaintableTextures
	List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* ___tempPaintableTextures_47;
	// System.Collections.Generic.LinkedList`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintableTexture::instances
	LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* ___instances_48;
	// System.Int32 PaintIn3D.P3dPaintableTexture::_Buffer
	int32_t ____Buffer_50;
	// System.Int32 PaintIn3D.P3dPaintableTexture::_BufferSize
	int32_t ____BufferSize_51;
};

// PaintIn3D.P3dPaintableTexture

// PaintIn3D.P3dPointer

// PaintIn3D.P3dPointer

// PaintIn3D.P3dTextureHash

// PaintIn3D.P3dTextureHash

// PaintIn3D.P3dPaintable
struct P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_StaticFields
{
	// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintable::tempPaintableTextures
	List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* ___tempPaintableTextures_37;
};

// PaintIn3D.P3dPaintable

// PaintIn3D.P3dPointerMouse

// PaintIn3D.P3dPointerMouse

// PaintIn3D.P3dPointerPen

// PaintIn3D.P3dPointerPen

// PaintIn3D.P3dPointerTouch

// PaintIn3D.P3dPointerTouch
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
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


// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<UnityEngine.Color32>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D AsyncGPUReadbackRequest_GetData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m242FB56AC043B6D76E240078F45DCD8A1C9A501D_gshared (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, int32_t ___0_layer, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mD67FD4914AE940ACA1C55F0221107D63AF44C5C6_gshared_inline (Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___0_obj, const RuntimeMethod* method) ;
// T CW.Common.CwHelper::Destroy<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CwHelper_Destroy_TisRuntimeObject_m7213AC4776D04786080D87EA4253E9D02C34DA10_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<UnityEngine.Color32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dSerialization::TryRegister<System.Object>(T,PaintIn3D.P3dHash,System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,T>,System.Collections.Generic.Dictionary`2<T,PaintIn3D.P3dHash>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dSerialization_TryRegister_TisRuntimeObject_mF0AA5B38959414A6CBCA4AA57487B6CDDACAC28B_gshared (RuntimeObject* ___0_obj, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___1_hash, Dictionary_2_t74D806EBEBBD5EAB8AD9F3A3805D5711AD41EC6A* ___2_hashToObj, Dictionary_2_t41C885115A9F39B409C53492A03DA764F26BA14C* ___3_objToHash, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m659E8FEDF3005D31D06FC587FA2BB601A9BD4174_gshared (Dictionary_2_t74D806EBEBBD5EAB8AD9F3A3805D5711AD41EC6A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,PaintIn3D.P3dHash>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6162944DDC3A29A6C0BA9F9D2765E7F5FF1CE606_gshared (Dictionary_2_t41C885115A9F39B409C53492A03DA764F26BA14C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7C3D0A1FD36704AFBBE4FD4E69204B809D3FC90E_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32Enum>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m09AF8D2807410AAEB42E9FCC1A54299458EFEFF2_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
inline void UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, const RuntimeMethod*))UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.AsyncGPUReadbackRequest::get_hasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncGPUReadbackRequest_get_hasError_m374BB20A32B9DCDBFD8F81BBE542847B82F04EE5 (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dReader::CompleteDirectly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_CompleteDirectly_m3F237C565C38816EC7566639454DE71A47F2FD0C (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.AsyncGPUReadbackRequest::get_done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncGPUReadbackRequest_get_done_mC042016E5BE850F18995831CBB4F06655914798C (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture PaintIn3D.P3dCommon::ReleaseRenderTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* P3dCommon_ReleaseRenderTexture_mC6870C94C775CA99DA0A52C151E97791F71DDA90 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_renderTexture, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<UnityEngine.Color32>(System.Int32)
inline NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D AsyncGPUReadbackRequest_GetData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m242FB56AC043B6D76E240078F45DCD8A1C9A501D (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, int32_t ___0_layer, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D (*) (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7*, int32_t, const RuntimeMethod*))AsyncGPUReadbackRequest_GetData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m242FB56AC043B6D76E240078F45DCD8A1C9A501D_gshared)(__this, ___0_layer, method);
}
// System.Void System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>::Invoke(T)
inline void Action_1_Invoke_mD67FD4914AE940ACA1C55F0221107D63AF44C5C6_inline (Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, const RuntimeMethod*))Action_1_Invoke_mD67FD4914AE940ACA1C55F0221107D63AF44C5C6_gshared_inline)(__this, ___0_obj, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureDescriptor UnityEngine.RenderTexture::get_descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 RenderTexture_get_descriptor_m2FABD5CF6CCF410D1311FCBC7C9D9ECDEE9C7CC2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_width(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_height(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture PaintIn3D.P3dCommon::GetRenderTexture(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* P3dCommon_GetRenderTexture_mF303CB74815227B5A6AAC9BE0509DE8E38B2D1D4 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___0_desc, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandReplace::Blit(UnityEngine.RenderTexture,UnityEngine.Texture,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandReplace_Blit_mCFDC7EFA8CA2E3377BFEA446142DE888ED7FBF9F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_renderTexture, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_texture, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_tint, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsAsyncGPUReadback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsAsyncGPUReadback_m042FD6786738983BF2EDDD06FA633B2F436A7EA2 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.AsyncGPUReadbackRequest UnityEngine.Rendering.AsyncGPUReadback::Request(UnityEngine.Texture,System.Int32,UnityEngine.TextureFormat,System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 AsyncGPUReadback_Request_m5D899367806082794B10D6038D0ECDD23F7C4A1C (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_src, int32_t ___1_mipIndex, int32_t ___2_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___3_callback, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dReader::UpdateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_UpdateRequest_m3F75484B2C09F1CE40DB17552B4384F90275FD52 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) ;
// T CW.Common.CwHelper::Destroy<UnityEngine.Texture2D>(T)
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* CwHelper_Destroy_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m1D871287C681458FE17E21A467CAE3E91E83816C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_o, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))CwHelper_Destroy_TisRuntimeObject_m7213AC4776D04786080D87EA4253E9D02C34DA10_gshared)(___0_o, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// System.Void CW.Common.CwHelper::BeginActive(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_BeginActive_m9B420B3A0635814AB6BC5B074164860834284317 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_renderTexture, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, int32_t ___1_destX, int32_t ___2_destY, const RuntimeMethod* method) ;
// System.Void CW.Common.CwHelper::EndActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_EndActive_mF1BAA382F73B1DEA7B8E6895686B349A59BA5162 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<UnityEngine.Color32>()
inline NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dSerialization::TryRegister<PaintIn3D.P3dPaintableTexture>(T,PaintIn3D.P3dHash,System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,T>,System.Collections.Generic.Dictionary`2<T,PaintIn3D.P3dHash>)
inline void P3dSerialization_TryRegister_TisP3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_m3AF44BB78BE06E05A7E89BE44D4AAB40982CA367 (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___0_obj, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___1_hash, Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302* ___2_hashToObj, Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015* ___3_objToHash, const RuntimeMethod* method)
{
	((  void (*) (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63*, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7, Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302*, Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015*, const RuntimeMethod*))P3dSerialization_TryRegister_TisRuntimeObject_mF0AA5B38959414A6CBCA4AA57487B6CDDACAC28B_gshared)(___0_obj, ___1_hash, ___2_hashToObj, ___3_objToHash, method);
}
// PaintIn3D.P3dHash PaintIn3D.P3dModel::get_Hash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 P3dModel_get_Hash_m6D731BDD400F96C7F4883BE82AE7C486455832D5_inline (P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dSerialization::TryRegister<PaintIn3D.P3dModel>(T,PaintIn3D.P3dHash,System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,T>,System.Collections.Generic.Dictionary`2<T,PaintIn3D.P3dHash>)
inline void P3dSerialization_TryRegister_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mEBECE70EBD42DBB90C14404F3CAD4CB65A74A811 (P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___0_obj, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___1_hash, Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1* ___2_hashToObj, Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215* ___3_objToHash, const RuntimeMethod* method)
{
	((  void (*) (P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45*, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7, Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1*, Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215*, const RuntimeMethod*))P3dSerialization_TryRegister_TisRuntimeObject_mF0AA5B38959414A6CBCA4AA57487B6CDDACAC28B_gshared)(___0_obj, ___1_hash, ___2_hashToObj, ___3_objToHash, method);
}
// System.Void PaintIn3D.P3dSerialization::TryRegister<UnityEngine.Texture>(T,PaintIn3D.P3dHash,System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,T>,System.Collections.Generic.Dictionary`2<T,PaintIn3D.P3dHash>)
inline void P3dSerialization_TryRegister_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_mD7ABBA8409F2CDF0B4ED27993C9BF9B4B005426A (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_obj, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___1_hash, Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394* ___2_hashToObj, Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D* ___3_objToHash, const RuntimeMethod* method)
{
	((  void (*) (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7, Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394*, Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D*, const RuntimeMethod*))P3dSerialization_TryRegister_TisRuntimeObject_mF0AA5B38959414A6CBCA4AA57487B6CDDACAC28B_gshared)(___0_obj, ___1_hash, ___2_hashToObj, ___3_objToHash, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 PaintIn3D.P3dSerialization::GetStableStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dSerialization_GetStableStringHash_mA46855A8DFB4910E0911C4AEFC08E913060F6A13 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mB2358E1DCA7C030B82026AA186D3481F3568D759 (Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material>::get_Item(TKey)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Dictionary_2_get_Item_m34643E8F228FC7E513C6BD213366EFDB9D477BEE (Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___0_key, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_mEF2E83E7D7A51D9598E8771D187138AF3CE614A6 (Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material>::Add(TKey,TValue)
inline void Dictionary_2_Add_mE69F96061EACB196437CBF7F103092D04BDF3BC5 (Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90* __this, int32_t ___0_key, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90*, int32_t, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material>::.ctor()
inline void Dictionary_2__ctor_m07794A540A5137936E353505EE63AA7BFDCF2917 (Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA563968253DE4672794228EC7E1F9BC19CAE0A93 (Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dModel>::.ctor()
inline void Dictionary_2__ctor_m18CC90C0D11272926148AAD0E6D65731A5986525 (Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1*, const RuntimeMethod*))Dictionary_2__ctor_m659E8FEDF3005D31D06FC587FA2BB601A9BD4174_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<PaintIn3D.P3dModel,PaintIn3D.P3dHash>::.ctor()
inline void Dictionary_2__ctor_mCD6FD15DC3C0B842FF06E7DEE046062747368619 (Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215*, const RuntimeMethod*))Dictionary_2__ctor_m6162944DDC3A29A6C0BA9F9D2765E7F5FF1CE606_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,UnityEngine.Texture>::.ctor()
inline void Dictionary_2__ctor_m99BA4C8EF72A9963DF9C4E23CFD9FC4409D0C7AC (Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394*, const RuntimeMethod*))Dictionary_2__ctor_m659E8FEDF3005D31D06FC587FA2BB601A9BD4174_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Texture,PaintIn3D.P3dHash>::.ctor()
inline void Dictionary_2__ctor_mB84CE1E338BC58D15838BC22253FC92068C924CA (Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D*, const RuntimeMethod*))Dictionary_2__ctor_m6162944DDC3A29A6C0BA9F9D2765E7F5FF1CE606_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<PaintIn3D.P3dHash,PaintIn3D.P3dPaintableTexture>::.ctor()
inline void Dictionary_2__ctor_mE59850AC4C9397D5332D553B0E9BADF4E96447DE (Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302*, const RuntimeMethod*))Dictionary_2__ctor_m659E8FEDF3005D31D06FC587FA2BB601A9BD4174_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dHash>::.ctor()
inline void Dictionary_2__ctor_mDDD519BC8A7FF02C1AA63B719EE99073027C1323 (Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015*, const RuntimeMethod*))Dictionary_2__ctor_m6162944DDC3A29A6C0BA9F9D2765E7F5FF1CE606_gshared)(__this, method);
}
// System.Void PaintIn3D.P3dSlot::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dSlot__ctor_m94D018FBF673769031508CFD1818315C221FE68A (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* __this, int32_t ___0_newIndex, String_t* ___1_newName, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<PaintIn3D.P3dPaintable>()
inline P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* GameObject_GetComponentInParent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m65BC4E73EDE6D567FEA89918246CF50E1F790866 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// UnityEngine.Renderer PaintIn3D.P3dModel::get_CachedRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* P3dModel_get_CachedRenderer_m58856A1E3E28F9F61F87AB779E69A5584722EE60 (P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* __this, const RuntimeMethod* method) ;
// UnityEngine.Material PaintIn3D.P3dCommon::GetMaterial(UnityEngine.Renderer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* P3dCommon_GetMaterial_mC8AD56995F1B1C5BE5398E0FA1144A9F147557A8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_renderer, int32_t ___1_materialIndex, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Texture PaintIn3D.P3dSlot::FindTexture(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dSlot_FindTexture_mCA6AD6C28ED81DE539634518AAFAB3459919C4B1 (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureScale(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_GetTextureScale_mF3406F1439C275C25FEE0C4E19108B29AA77E693 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_GetTextureOffset_m4F9E2C96960DFE3C76B9D878F8E654D78185F9CA (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dSlot::IsTransformed(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dSlot_IsTransformed_mA35048577FC219BA4CC3F61965455E9E4A30AC0F (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dSlot::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dSlot_Equals_m7D33E018C413ED0AF28521BA659351A11092361B (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 PaintIn3D.P3dSlot::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dSlot_GetHashCode_mE3F593FFD1F807B849DF8998D62C30FC62584A05 (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedList`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintableTexture::get_Instances()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* P3dPaintableTexture_get_Instances_m8F189AB6D36C8D1473A0A4FE72F735F9C9DE407C_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<PaintIn3D.P3dPaintableTexture>::GetEnumerator()
inline Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299 (LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B (*) (LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C*, const RuntimeMethod*))LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<PaintIn3D.P3dPaintableTexture>::Dispose()
inline void Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693 (Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B*, const RuntimeMethod*))Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared)(__this, method);
}
// T System.Collections.Generic.LinkedList`1/Enumerator<PaintIn3D.P3dPaintableTexture>::get_Current()
inline P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_inline (Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B* __this, const RuntimeMethod* method)
{
	return ((  P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* (*) (Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B*, const RuntimeMethod*))Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline)(__this, method);
}
// System.Boolean PaintIn3D.P3dPaintableTexture::get_CanUndo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPaintableTexture_get_CanUndo_mB2045FABFD28F9C95C0670DF11267AE199F21CDD (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<PaintIn3D.P3dPaintableTexture>::MoveNext()
inline bool Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F (Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B*, const RuntimeMethod*))Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared)(__this, method);
}
// System.Boolean PaintIn3D.P3dPaintableTexture::get_CanRedo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPaintableTexture_get_CanRedo_m7679F5C03C7A27197578F92C7C76880A6FDF47E6 (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintableTexture::StoreState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintableTexture_StoreState_m7A343CF81E64AF221269E8DE5746B6ECE47A33D9 (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintableTexture::ClearStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintableTexture_ClearStates_mCF24386E400CCF9DBF3FF2FDE8CC4C47720ADEB5 (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintableTexture::Undo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintableTexture_Undo_mFAB9D64CFA23B7929E886D0293A692D236B286E0 (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintableTexture::Redo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintableTexture_Redo_m89C864894DCBAE163C0AFCE1AB51A46DAA742218 (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dSerialization::TryRegister(UnityEngine.Texture,PaintIn3D.P3dHash)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dSerialization_TryRegister_mA7290B66C8725FCC5703A47F40D0933FFF3305EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___1_hash, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dModifierList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dModifierList__ctor_m9D9D6E371B210CC03977BC98F8EB83EF70AED91E (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Int32 PaintIn3D.P3dModifierList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dModifierList_get_Count_mC0913A1BA1A125E0801BAD24BB4E30B9EE4FA381 (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* __this, const RuntimeMethod* method) ;
// System.Void CW.Common.CwHelper::BeginSeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_BeginSeed_m1D62CE23D4E0A2F8465AD3A2C07F276F5BE8CB55 (int32_t ___0_newSeed, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dModifierList::ModifyPosition(UnityEngine.Vector3&,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dModifierList_ModifyPosition_mE88DC9807F94DAB7AF2C675E5260DBD0F4D02D45 (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, bool ___1_preview, float ___2_pressure, const RuntimeMethod* method) ;
// System.Void CW.Common.CwHelper::EndSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwHelper_EndSeed_m4F4DA857C9212EE9E8471C1E27F57A036C98E2FC (const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommand::SetState(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B (P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* __this, bool ___0_preview, int32_t ___1_priority, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandDecal::SetLocation(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandDecal_SetLocation_m4A9164297301A744B0FB27F121CA412ED2B59382 (P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, bool ___1_in3D, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PaintIn3D.P3dPaintDecal::HandleHitCommon(System.Boolean,System.Single,System.Int32,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dPaintDecal_HandleHitCommon_m894B34920984CA60CA94456B1599B0E11139C70E (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, bool ___0_preview, float ___1_pressure, int32_t ___2_seed, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3_rotation, const RuntimeMethod* method) ;
// System.Single PaintIn3D.P3dCommon::GetRadius(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dCommon_GetRadius_m7E16C6034DBD775EE364F2092BE9980D5634C9B1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_size, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintDecal::HandleMaskCommon(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_HandleMaskCommon_m8F1356622AE690DAA8ED9F7E17EB96AD3E1BCA24 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintableManager::SubmitAll(PaintIn3D.P3dCommand,UnityEngine.Vector3,System.Single,System.Int32,PaintIn3D.P3dGroup,PaintIn3D.P3dModel,PaintIn3D.P3dPaintableTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintableManager_SubmitAll_m534EE3CE5C2E8FDCADA006B3A8DBBB4BB44C8921 (P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* ___0_command, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, float ___2_radius, int32_t ___3_layerMask, P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___4_group, P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___5_targetModel, P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___6_targetTexture, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandDecal::SetLocation(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandDecal_SetLocation_m7C2C24334763D2D31D81587582987DE002AC4A80 (P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endPosition, bool ___2_in3D, bool ___3_clip, const RuntimeMethod* method) ;
// System.Single PaintIn3D.P3dCommon::GetRadius(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dCommon_GetRadius_m0509B370DBED0B2B1F517D07B07D53609F60EB36 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_size, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_endPosition, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PaintIn3D.P3dCommon::GetPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dCommon_GetPosition_m28F7E54170571CF9710164319DF7333497B85081 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endPosition, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandDecal::SetLocation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandDecal_SetLocation_m237360949C68BD84F9D2C1186B9AFD8E4A15709D (P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_positionA, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_positionB, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_positionC, bool ___3_in3D, const RuntimeMethod* method) ;
// System.Single PaintIn3D.P3dCommon::GetRadius(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dCommon_GetRadius_m17542CC3B98D4F91FEEFC096DC201903BA7667BA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_size, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_positionA, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_positionB, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_positionC, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PaintIn3D.P3dCommon::GetPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dCommon_GetPosition_mB234B0E65B008F26795293CC3AF75917B847C30F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_positionA, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_positionB, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_positionC, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandDecal::SetLocation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandDecal_SetLocation_mE63FBCAAB5442A5CD7DDC907DCB5307FB4A51497 (P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_position2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_endPosition2, bool ___4_in3D, bool ___5_clip, const RuntimeMethod* method) ;
// System.Single PaintIn3D.P3dCommon::GetRadius(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dCommon_GetRadius_mDFB0FEFF736E8C181E21419B5BDED6BEDA4DAA1A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_size, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_endPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_position2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_endPosition2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PaintIn3D.P3dCommon::GetPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dCommon_GetPosition_mCA91024EE0AE627141C7380BCA19AD3F445A9B1B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_position2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_endPosition2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PaintIn3D.P3dModel>()
inline P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* Component_GetComponent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mA758582494F390A5B318A0F6458F342154337C24 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture> PaintIn3D.P3dPaintableTexture::FilterAll(PaintIn3D.P3dModel,PaintIn3D.P3dGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* P3dPaintableTexture_FilterAll_m64EE096F71051A9D1445A209FFD79113DE7821B7 (P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___0_model, P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___1_group, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture>::get_Count()
inline int32_t List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_inline (List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<PaintIn3D.P3dPaintableTexture>::get_Item(System.Int32)
inline P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB (List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* (*) (List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// UnityEngine.Vector2 PaintIn3D.P3dPaintableTexture::GetCoord(PaintIn3D.P3dHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 P3dPaintableTexture_GetCoord_m1F64F7344005358C423CF091B40760F89BE53BAF (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3* ___0_hit, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandDecal::ClearMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandDecal_ClearMask_m0C0CDDC43A49C57D23645961195FCA2965249E3E (P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture PaintIn3D.P3dPaintableTexture::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* P3dPaintableTexture_get_Current_m42C0BE96C6A74B703F1A64763F921D15752F5092_inline (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandDecal::ApplyAspect(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandDecal_ApplyAspect_mE7C305DFCF4B3F12A87761C7B220EF2556D39ACB (P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, const RuntimeMethod* method) ;
// PaintIn3D.P3dCommand PaintIn3D.P3dPaintableManager::Submit(PaintIn3D.P3dCommand,PaintIn3D.P3dModel,PaintIn3D.P3dPaintableTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* P3dPaintableManager_Submit_m8AA1CBCFFF81BC4CC046875FC8CDEAECC4F87B38 (P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* ___0_command, P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___1_model, P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___2_paintableTexture, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dModifierList::ModifyColor(UnityEngine.Color&,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dModifierList_ModifyColor_m24E04F5E8C44A2AD3D655B1E901387614F0F0007 (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_color, bool ___1_preview, float ___2_pressure, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dModifierList::ModifyAngle(System.Single&,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dModifierList_ModifyAngle_m27BF9DA495CF0495F9E5B8333312623FCD6A304B (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* __this, float* ___0_angle, bool ___1_preview, float ___2_pressure, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dModifierList::ModifyOpacity(System.Single&,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dModifierList_ModifyOpacity_m009A957B6C46DC4134DB9BB02E2332AAF3DBED29 (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* __this, float* ___0_opacity, bool ___1_preview, float ___2_pressure, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dModifierList::ModifyRadius(System.Single&,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dModifierList_ModifyRadius_m69F2DD323E11F6C8B925E3E44E06ACE8F476C2FA (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* __this, float* ___0_radius, bool ___1_preview, float ___2_pressure, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dModifierList::ModifyScale(UnityEngine.Vector3&,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dModifierList_ModifyScale_m937E84324D420765732BFA252FC3A15DC311B039 (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_scale, bool ___1_preview, float ___2_pressure, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dModifierList::ModifyHardness(System.Single&,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dModifierList_ModifyHardness_mCD1382DD83C0AF549C0602056F890B9ECA0C169B (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* __this, float* ___0_hardness, bool ___1_preview, float ___2_pressure, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dModifierList::ModifyTexture(UnityEngine.Texture&,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dModifierList_ModifyTexture_m07BB20EFADF9A9438BF8F2DD04CDFD92336B2D1E (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** ___0_texture, bool ___1_preview, float ___2_pressure, const RuntimeMethod* method) ;
// System.Single PaintIn3D.P3dCommon::GetAspect(UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dCommon_GetAspect_mB316C673163EA2E7EB0E9283BA2BF08FAE9AEBDC (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_textureA, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_textureB, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PaintIn3D.P3dCommon::ScaleAspect(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dCommon_ScaleAspect_m374333567B0CFB460700CE893D933FE58FAAB49D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_size, float ___1_aspect, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandDecal::SetShape(UnityEngine.Quaternion,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandDecal_SetShape_m85EDD24BC0A9D22103D329FAB4683F64F4B3178A (P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, float ___2_angle, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandDecal::SetMaterial(PaintIn3D.P3dBlendMode,UnityEngine.Texture,UnityEngine.Texture,PaintIn3D.P3dChannel,System.Single,System.Single,System.Single,System.Single,System.Single,UnityEngine.Color,System.Single,UnityEngine.Texture,UnityEngine.Matrix4x4,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandDecal_SetMaterial_m1A8A1B856120B87BB4EBE3BCB2FAF7F2CA52138F (P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* __this, P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___0_blendMode, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_texture, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___2_shape, int32_t ___3_shapeChannel, float ___4_hardness, float ___5_wrapping, float ___6_normalBack, float ___7_normalFront, float ___8_normalFade, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___9_color, float ___10_opacity, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___11_tileTexture, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___12_tileMatrix, float ___13_tileOpacity, float ___14_tileTransition, const RuntimeMethod* method) ;
// PaintIn3D.P3dMask PaintIn3D.P3dMask::Find(UnityEngine.Vector3,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* P3dMask_Find_m753253EEA4AB8C8658BB7549F8E7AC46C58A51B9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___1_layers, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 PaintIn3D.P3dMask::get_Matrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 P3dMask_get_Matrix_m65F5191E56B856F41C0ABFF11CC41E22C59C9836 (P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture PaintIn3D.P3dMask::get_Texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dMask_get_Texture_m9C39FCD0317704F16992AB17FCDE674A530440CA_inline (P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* __this, const RuntimeMethod* method) ;
// PaintIn3D.P3dChannel PaintIn3D.P3dMask::get_Channel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dMask_get_Channel_m39F9AADE2834AE09BDD6ACD19CFFF99F96CC04F3_inline (P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 PaintIn3D.P3dMask::get_Stretch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 P3dMask_get_Stretch_m364B963C5C3509C111A5264B8654FA88BA55A22A_inline (P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandDecal::SetMask(UnityEngine.Matrix4x4,UnityEngine.Texture,PaintIn3D.P3dChannel,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandDecal_SetMask_mF76334F6CA59DD148A5E562186CEFA18210F4050 (P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_matrix, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_shape, int32_t ___2_channel, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_stretch, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline (const RuntimeMethod* method) ;
// PaintIn3D.P3dBlendMode PaintIn3D.P3dBlendMode::AlphaBlend(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B P3dBlendMode_AlphaBlend_mD0DD96D2ED070D215CBD8D2D0363E9DA8AC6938A (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_channels, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<PaintIn3D.P3dModel>()
inline P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* Component_GetComponentInParent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_m7F8EB08BE51A75422DB909E7A5A7F035F136C720 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Material PaintIn3D.P3dCommandFill::SetMaterial(PaintIn3D.P3dBlendMode,UnityEngine.Texture,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* P3dCommandFill_SetMaterial_mDE9A1A795A2D1156C3854F862B086A640F770A71 (P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B* __this, P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___0_blendMode, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_texture, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_opacity, float ___4_minimum, const RuntimeMethod* method) ;
// UnityEngine.Material PaintIn3D.P3dCommandReplace::SetMaterial(UnityEngine.Texture,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* P3dCommandReplace_SetMaterial_m42618C4F539ABA6405A90C3D67BDF7AA537B84B9 (P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) ;
// UnityEngine.Material PaintIn3D.P3dCommandReplaceChannels::SetMaterial(UnityEngine.Texture,UnityEngine.Texture,UnityEngine.Texture,UnityEngine.Texture,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* P3dCommandReplaceChannels_SetMaterial_mEC5CA9ED2B2B6F3D50CCBBE2A29E02BD4353C027 (P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_textureR, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_textureG, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___2_textureB, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___3_textureA, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___4_channelR, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___5_channelG, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___6_channelB, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___7_channelA, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandSphere::SetLocation(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandSphere_SetLocation_m2B2CD625739BD6B1AAF2785A4384CBB8E3A6C4DC (P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, bool ___1_in3D, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PaintIn3D.P3dPaintSphere::HandleHitCommon(System.Boolean,System.Single,System.Int32,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dPaintSphere_HandleHitCommon_m704B440634579EBD279EEEA183186637B174807E (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, bool ___0_preview, float ___1_pressure, int32_t ___2_seed, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3_rotation, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPaintSphere::HandleMaskCommon(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_HandleMaskCommon_m6808B7E2E83644421A871D6F7A2382A244124519 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandSphere::SetLocation(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandSphere_SetLocation_mFA1FFCC8962CFD2BC3B319FD8147965A596A405B (P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endPosition, bool ___2_in3D, bool ___3_clip, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandSphere::SetLocation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandSphere_SetLocation_m6966F03F4A011C7E77FA1BDED524395AFC2E3BD9 (P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_positionA, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_positionB, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_positionC, bool ___3_in3D, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandSphere::SetLocation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandSphere_SetLocation_m7E17950983437C869DDCAE431FDC5F25724AFA6E (P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_position2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_endPosition2, bool ___4_in3D, bool ___5_clip, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandSphere::ClearMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandSphere_ClearMask_m3020446C7E9088A1970F6C4ED0953E45BC3E674C (P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandSphere::ApplyAspect(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandSphere_ApplyAspect_mCA2D0A5A9CAB80C836A9A2E97E8101054F77371F (P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandSphere::SetShape(UnityEngine.Quaternion,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandSphere_SetShape_m9B6D5C2B4DB770A9ECBD7BDB30F1DE35170CEC49 (P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, float ___2_angle, const RuntimeMethod* method) ;
// PaintIn3D.P3dBlendMode PaintIn3D.P3dPaintSphere::get_BlendMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B P3dPaintSphere_get_BlendMode_m82EABBF6B6219F7DF181553E8BAFE0E30D45FDBD_inline (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandSphere::SetMaterial(PaintIn3D.P3dBlendMode,System.Single,UnityEngine.Color,System.Single,UnityEngine.Texture,UnityEngine.Matrix4x4,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandSphere_SetMaterial_mEAF0650ECFECF49B11517DA365D6476B599D3D59 (P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* __this, P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___0_blendMode, float ___1_hardness, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_opacity, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___4_tileTexture, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___5_tileMatrix, float ___6_tileOpacity, float ___7_tileTransition, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dCommandSphere::SetMask(UnityEngine.Matrix4x4,UnityEngine.Texture,PaintIn3D.P3dChannel,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dCommandSphere_SetMask_m693D133476F4B4FB1C1151E9734583EC867EF0F6 (P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_matrix, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_shape, int32_t ___2_channel, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_stretch, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::get_Item(System.Int32)
inline Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* List_1_get_Item_mF008129D58C5940526BA8102498BA5611D24052E (List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* (*) (List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void PaintIn3D.P3dPointer::StepFinger(CW.Common.CwInputManager/Finger,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointer_StepFinger_mC25A6EAF70701C1DBD4B474963DE90880D616F80 (P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302* __this, Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* ___0_finger, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPosition, float ___2_pressure, bool ___3_set, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::get_Count()
inline int32_t List_1_get_Count_mC3CEF874C2D99ED6FDF204103CA1B7CACFE34165_inline (List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void CW.Common.CwInputManager/Finger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Finger__ctor_mB8EBC54FB189CE84A3EC0E1021E3D0D51D0AECD4 (Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::Add(T)
inline void List_1_Add_m972218EFF43D49745F18BA376C1278752F80936E_inline (List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* __this, Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782*, Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.LayerMask PaintIn3D.P3dHitScreenBase::get_GuiLayers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB P3dHitScreenBase_get_GuiLayers_m31041116E756727015CE253DB025BAA28DBDE6AB_inline (P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* __this, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPointer::InitFinger(CW.Common.CwInputManager/Finger,System.Int32,UnityEngine.Vector2,System.Single,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointer_InitFinger_m624A85F554F58ACA15416A4C11D58B07D8BA67D3 (P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302* __this, Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* ___0_finger, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_screenPosition, float ___3_pressure, bool ___4_set, int32_t ___5_guiLayers, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD209AF471B3572AEC6457935C2BA8D1368C254D0 (List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// T UnityEngine.Component::GetComponent<PaintIn3D.P3dHitScreenBase>()
inline P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* Component_GetComponent_TisP3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC_m23C977D470FD8DF6A7342924B14F836987372B65 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean CW.Common.CwInputManager::PointOverGui(UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInputManager_PointOverGui_mBBE742D280F6170487DB315E7F1331E10F4D9805 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPosition, int32_t ___1_guiLayers, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CW.Common.CwInputManager/Finger>::.ctor()
inline void List_1__ctor_m481EE73C5E158B5A00393F44ABEACBAAD6F88A48 (List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.KeyCode>::.ctor()
inline void List_1__ctor_mBBC374561D2D32D99D36614F8CED83A19FD4F702 (List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32*, const RuntimeMethod*))List_1__ctor_m7C3D0A1FD36704AFBBE4FD4E69204B809D3FC90E_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.KeyCode> PaintIn3D.P3dPointerMouse::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* P3dPointerMouse_get_Keys_mA83F8185DD552BDB93B260AC7113360A1D148F12 (P3dPointerMouse_t2132552825D1F8C787CDA111C416F1141C0C3996* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.KeyCode>::Contains(T)
inline bool List_1_Contains_mAE800C985C1868453C1F2CBB37075BC93B2E302B (List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32*, int32_t, const RuntimeMethod*))List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.KeyCode>::Add(T)
inline void List_1_Add_m32DCBD336D2D01A925C430FFC3AE3BF70B845179_inline (List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32*, int32_t, const RuntimeMethod*))List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.KeyCode>::GetEnumerator()
inline Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5 List_1_GetEnumerator_mEB5CAC74E588EFB6530371C6DD9DA9E6E8F9F61D (List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5 (*) (List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32*, const RuntimeMethod*))List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.KeyCode>::Dispose()
inline void Enumerator_Dispose_m617C29693EB2801276678FF3113122991240CDF0 (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5*, const RuntimeMethod*))Enumerator_Dispose_m09AF8D2807410AAEB42E9FCC1A54299458EFEFF2_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.KeyCode>::get_Current()
inline int32_t Enumerator_get_Current_m1EB88CCB3276E602D3FE9BB36D2F521ABDD86E20_inline (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5*, const RuntimeMethod*))Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline)(__this, method);
}
// System.Boolean CW.Common.CwInput::GetKeyIsHeld(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetKeyIsHeld_m3CF9110B4AE5AF560FC12DD196281D04809955D2 (int32_t ___0_oldKey, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.KeyCode>::MoveNext()
inline bool Enumerator_MoveNext_mB46607AA8EBED12F5C4392F03DA7A93FB5EE5172 (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5*, const RuntimeMethod*))Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared)(__this, method);
}
// System.Boolean CW.Common.CwInput::GetMouseExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CwInput_GetMouseExists_m5D88DE70E6D21E03FCEDFB12B7383D5D59A9DED2 (const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dPointerMouse::GetKeyHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointerMouse_GetKeyHeld_m6A24717B61AAF5916FCD9A28EA11903E84EACD7B (P3dPointerMouse_t2132552825D1F8C787CDA111C416F1141C0C3996* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 CW.Common.CwInput::GetMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CwInput_GetMousePosition_mEAB61C2A353CEBB87CEF6EB5A917C94988C91548 (const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dPointer::GetFinger(System.Int32,UnityEngine.Vector2,System.Single,System.Boolean,CW.Common.CwInputManager/Finger&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointer_GetFinger_m12856905DE9F202BF8C40450EF2BB1B1BE5E5C20 (P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302* __this, int32_t ___0_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_position, float ___2_pressure, bool ___3_set, Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8** ___4_finger, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dPointer::TryNullFinger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointer_TryNullFinger_m1905F716C6DCCF1F2D576CA6877A5877EE91632A (P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void PaintIn3D.P3dPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointer__ctor_mC0C83DD02534A87FC2AE3903D127DBDB33695F05 (P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302* __this, const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dPointerPen::GetPenExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointerPen_GetPenExists_m840D171DC8DEA8AE6152B1263114994F65550482 (const RuntimeMethod* method) ;
// System.Boolean PaintIn3D.P3dPointerPen::GetPenHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointerPen_GetPenHeld_m47FF55344EE93C9CDACAB6D41AFA583DA88988B8 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 PaintIn3D.P3dPointerPen::GetPenPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 P3dPointerPen_GetPenPosition_m89AA6134537B7470C1CA9E82831750023CCC5EA2 (const RuntimeMethod* method) ;
// System.Single PaintIn3D.P3dPointerPen::GetPenPressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPointerPen_GetPenPressure_mFE3346E58D115A38D34980C0D7EDEC416594030C (const RuntimeMethod* method) ;
// System.Void CW.Common.CwInput::GetTouch(System.Int32,System.Int32&,UnityEngine.Vector2&,System.Single&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CwInput_GetTouch_mD60E0699649F3E4B8CC3F02BF10F40C2215D80BF (int32_t ___0_index, int32_t* ___1_id, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_position, float* ___3_pressure, bool* ___4_set, const RuntimeMethod* method) ;
// System.Single CW.Common.CwInputManager::get_ScaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CwInputManager_get_ScaleFactor_m1A41E25DACE4A55583764544DBE1400C5BC1B74A (const RuntimeMethod* method) ;
// System.Int32 CW.Common.CwInput::GetTouchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CwInput_GetTouchCount_m1D0A09D098D1B6A2B433CA0948510C4C299B6031 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PaintIn3D.P3dReadColor/ColorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEvent__ctor_m085AC0E7B78CC9673C2C6B868541E45297C781AA (ColorEvent_t871C324F6981EB1A0CDE0FC4F559E313017CA4C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D(__this, UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var);
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
// System.Void PaintIn3D.P3dReader::add_OnComplete(System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_add_OnComplete_mDFFE350011A2C71EF1862BFE252020BAE6E0AAB4 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* V_0 = NULL;
	Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* V_1 = NULL;
	Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* V_2 = NULL;
	{
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_0 = __this->___OnComplete_9;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_1 = V_0;
		V_1 = L_1;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_2 = V_1;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*)Castclass((RuntimeObject*)L_4, Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var));
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F** L_5 = (&__this->___OnComplete_9);
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_6 = V_2;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_7 = V_1;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_9 = V_0;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*)L_9) == ((RuntimeObject*)(Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void PaintIn3D.P3dReader::remove_OnComplete(System.Action`1<Unity.Collections.NativeArray`1<UnityEngine.Color32>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_remove_OnComplete_m84EF0B0012144214AF3F074305792628C8EFB7D1 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* V_0 = NULL;
	Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* V_1 = NULL;
	Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* V_2 = NULL;
	{
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_0 = __this->___OnComplete_9;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_1 = V_0;
		V_1 = L_1;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_2 = V_1;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*)Castclass((RuntimeObject*)L_4, Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F_il2cpp_TypeInfo_var));
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F** L_5 = (&__this->___OnComplete_9);
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_6 = V_2;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_7 = V_1;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_9 = V_0;
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*)L_9) == ((RuntimeObject*)(Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean PaintIn3D.P3dReader::get_Dirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dReader_get_Dirty_m7EE9D82C66B9590F9D52579A6E7F5244403E6C9B (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	{
		// return dirty;
		bool L_0 = __this->___dirty_1;
		return L_0;
	}
}
// System.Boolean PaintIn3D.P3dReader::get_Requested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dReader_get_Requested_mDCD8CEB59E98149E15F50B8CFBA1DE1C77A13B26 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	{
		// return requested;
		bool L_0 = __this->___requested_2;
		return L_0;
	}
}
// UnityEngine.Vector2Int PaintIn3D.P3dReader::get_OriginalSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A P3dReader_get_OriginalSize_m705B61CDA7F0FF6397128F0EDE232E4C9837B74F (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	{
		// return originalSize;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___originalSize_4;
		return L_0;
	}
}
// System.Int32 PaintIn3D.P3dReader::get_DownsampleSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dReader_get_DownsampleSteps_m9F77A09DB730E757D5ACE8B543BE4E5CED890EA2 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	{
		// return downsampleSteps;
		int32_t L_0 = __this->___downsampleSteps_6;
		return L_0;
	}
}
// UnityEngine.Vector2Int PaintIn3D.P3dReader::get_DownsampledSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A P3dReader_get_DownsampledSize_m9063C8F4A4E1638FA30F31781E3B16E0F6E9BD59 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	{
		// return downsampledSize;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___downsampledSize_5;
		return L_0;
	}
}
// System.Int32 PaintIn3D.P3dReader::get_DownsampleBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dReader_get_DownsampleBoost_mDB506481EC62604A391227A9F55F82ADFAFA23A0 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	{
		// return downsampleBoost;
		int32_t L_0 = __this->___downsampleBoost_7;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dReader::MarkAsDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_MarkAsDirty_m51B678565AB412A0760D9B585A6831B6A06106A1 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	{
		// dirty = true;
		__this->___dirty_1 = (bool)1;
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dReader::UpdateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_UpdateRequest_m3F75484B2C09F1CE40DB17552B4384F90275FD52 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncGPUReadbackRequest_GetData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m242FB56AC043B6D76E240078F45DCD8A1C9A501D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (requested == true)
		bool L_0 = __this->___requested_2;
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// if (request.hasError == true)
		AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* L_1 = (&__this->___request_0);
		bool L_2;
		L_2 = AsyncGPUReadbackRequest_get_hasError_m374BB20A32B9DCDBFD8F81BBE542847B82F04EE5(L_1, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// requested = false;
		__this->___requested_2 = (bool)0;
		// CompleteDirectly();
		P3dReader_CompleteDirectly_m3F237C565C38816EC7566639454DE71A47F2FD0C(__this, NULL);
		return;
	}

IL_0023:
	{
		// else if (request.done == true)
		AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* L_3 = (&__this->___request_0);
		bool L_4;
		L_4 = AsyncGPUReadbackRequest_get_done_mC042016E5BE850F18995831CBB4F06655914798C(L_3, NULL);
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		// requested = false;
		__this->___requested_2 = (bool)0;
		// buffer = P3dCommon.ReleaseRenderTexture(buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___buffer_3;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6;
		L_6 = P3dCommon_ReleaseRenderTexture_mC6870C94C775CA99DA0A52C151E97791F71DDA90(L_5, NULL);
		__this->___buffer_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_3), (void*)L_6);
		// OnComplete(request.GetData<Color32>());
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_7 = __this->___OnComplete_9;
		AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* L_8 = (&__this->___request_0);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_9;
		L_9 = AsyncGPUReadbackRequest_GetData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m242FB56AC043B6D76E240078F45DCD8A1C9A501D(L_8, 0, AsyncGPUReadbackRequest_GetData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m242FB56AC043B6D76E240078F45DCD8A1C9A501D_RuntimeMethod_var);
		NullCheck(L_7);
		Action_1_Invoke_mD67FD4914AE940ACA1C55F0221107D63AF44C5C6_inline(L_7, L_9, NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dReader::Request(UnityEngine.RenderTexture,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_Request_m638D53DBE2AAC0CB7AE55DA22A30214686FB4E0D (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, int32_t ___1_downsample, bool ___2_async, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AF5592252FBEDC6AAFD83F963FB41AE2AFDB80F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C3568C5A9F7681FBE333387A1C3F08C2FC73DC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE46331659FD12304188189F2E10246360DDD420);
		s_Il2CppMethodInitialized = true;
	}
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (texture == null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("Texture null."); return;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralCE46331659FD12304188189F2E10246360DDD420, NULL);
		// Debug.LogError("Texture null."); return;
		return;
	}

IL_0014:
	{
		// if (requested == true)
		bool L_2 = __this->___requested_2;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Debug.LogError("Already requested."); return;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2AF5592252FBEDC6AAFD83F963FB41AE2AFDB80F, NULL);
		// Debug.LogError("Already requested."); return;
		return;
	}

IL_0027:
	{
		// if (buffer != null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___buffer_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// Debug.LogError("Buffer exists."); return;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5C3568C5A9F7681FBE333387A1C3F08C2FC73DC0, NULL);
		// Debug.LogError("Buffer exists."); return;
		return;
	}

IL_0040:
	{
		// originalSize.x = downsampledSize.x = texture.width;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_5 = (&__this->___originalSize_4);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_6 = (&__this->___downsampledSize_5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ___0_texture;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		int32_t L_9 = L_8;
		V_1 = L_9;
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_6, L_9, NULL);
		int32_t L_10 = V_1;
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_5, L_10, NULL);
		// originalSize.y = downsampledSize.y = texture.height;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_11 = (&__this->___originalSize_4);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_12 = (&__this->___downsampledSize_5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = ___0_texture;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		int32_t L_15 = L_14;
		V_1 = L_15;
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_12, L_15, NULL);
		int32_t L_16 = V_1;
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_11, L_16, NULL);
		// for (var i = 0; i < downsample; i++)
		V_2 = 0;
		goto IL_00c8;
	}

IL_0082:
	{
		// if (downsampledSize.x > 2)
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_17 = (&__this->___downsampledSize_5);
		int32_t L_18;
		L_18 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_17, NULL);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_00a3;
		}
	}
	{
		// downsampledSize.x /= 2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_19 = (&__this->___downsampledSize_5);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_20 = L_19;
		int32_t L_21;
		L_21 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_20, NULL);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_20, ((int32_t)(L_21/2)), NULL);
	}

IL_00a3:
	{
		// if (downsampledSize.y > 2)
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_22 = (&__this->___downsampledSize_5);
		int32_t L_23;
		L_23 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_22, NULL);
		if ((((int32_t)L_23) <= ((int32_t)2)))
		{
			goto IL_00c4;
		}
	}
	{
		// downsampledSize.y /= 2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_24 = (&__this->___downsampledSize_5);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_25 = L_24;
		int32_t L_26;
		L_26 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_25, NULL);
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_25, ((int32_t)(L_26/2)), NULL);
	}

IL_00c4:
	{
		// for (var i = 0; i < downsample; i++)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00c8:
	{
		// for (var i = 0; i < downsample; i++)
		int32_t L_28 = V_2;
		int32_t L_29 = ___1_downsample;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0082;
		}
	}
	{
		// downsampleSteps = downsample;
		int32_t L_30 = ___1_downsample;
		__this->___downsampleSteps_6 = L_30;
		// downsampleBoost = (originalSize.x / downsampledSize.x) * (originalSize.y / downsampledSize.y);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_31 = (&__this->___originalSize_4);
		int32_t L_32;
		L_32 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_31, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_33 = (&__this->___downsampledSize_5);
		int32_t L_34;
		L_34 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_33, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_35 = (&__this->___originalSize_4);
		int32_t L_36;
		L_36 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_35, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_37 = (&__this->___downsampledSize_5);
		int32_t L_38;
		L_38 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_37, NULL);
		__this->___downsampleBoost_7 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_32/L_34)), ((int32_t)(L_36/L_38))));
		// var desc = texture.descriptor;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = ___0_texture;
		NullCheck(L_39);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_40;
		L_40 = RenderTexture_get_descriptor_m2FABD5CF6CCF410D1311FCBC7C9D9ECDEE9C7CC2(L_39, NULL);
		V_0 = L_40;
		// desc.useMipMap = false;
		RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539((&V_0), (bool)0, NULL);
		// desc.width     = downsampledSize.x;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_41 = (&__this->___downsampledSize_5);
		int32_t L_42;
		L_42 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_41, NULL);
		RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline((&V_0), L_42, NULL);
		// desc.height    = downsampledSize.y;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_43 = (&__this->___downsampledSize_5);
		int32_t L_44;
		L_44 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_43, NULL);
		RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline((&V_0), L_44, NULL);
		// buffer = P3dCommon.GetRenderTexture(desc);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_45 = V_0;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46;
		L_46 = P3dCommon_GetRenderTexture_mF303CB74815227B5A6AAC9BE0509DE8E38B2D1D4(L_45, NULL);
		__this->___buffer_3 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_3), (void*)L_46);
		// P3dCommandReplace.Blit(buffer, texture, Color.white);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = __this->___buffer_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = ___0_texture;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49;
		L_49 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var);
		P3dCommandReplace_Blit_mCFDC7EFA8CA2E3377BFEA446142DE888ED7FBF9F(L_47, L_48, L_49, NULL);
		// if (async == true && SystemInfo.supportsAsyncGPUReadback == true)
		bool L_50 = ___2_async;
		if (!L_50)
		{
			goto IL_0184;
		}
	}
	{
		bool L_51;
		L_51 = SystemInfo_get_supportsAsyncGPUReadback_m042FD6786738983BF2EDDD06FA633B2F436A7EA2(NULL);
		if (!L_51)
		{
			goto IL_0184;
		}
	}
	{
		// request   = AsyncGPUReadback.Request(buffer, 0, TextureFormat.RGBA32);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = __this->___buffer_3;
		AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 L_53;
		L_53 = AsyncGPUReadback_Request_m5D899367806082794B10D6038D0ECDD23F7C4A1C(L_52, 0, 4, (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*)NULL, NULL);
		__this->___request_0 = L_53;
		// requested = true;
		__this->___requested_2 = (bool)1;
		// UpdateRequest();
		P3dReader_UpdateRequest_m3F75484B2C09F1CE40DB17552B4384F90275FD52(__this, NULL);
		return;
	}

IL_0184:
	{
		// CompleteDirectly();
		P3dReader_CompleteDirectly_m3F237C565C38816EC7566639454DE71A47F2FD0C(__this, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dReader::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_Release_m5A459BB1F1801EBD3F1DD9CBDA94FB82079458F2 (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_Destroy_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m1D871287C681458FE17E21A467CAE3E91E83816C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer = P3dCommon.ReleaseRenderTexture(buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___buffer_3;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1;
		L_1 = P3dCommon_ReleaseRenderTexture_mC6870C94C775CA99DA0A52C151E97791F71DDA90(L_0, NULL);
		__this->___buffer_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_3), (void*)L_1);
		// tempTexture = CwHelper.Destroy(tempTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___tempTexture_8;
		il2cpp_codegen_runtime_class_init_inline(CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = CwHelper_Destroy_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m1D871287C681458FE17E21A467CAE3E91E83816C(L_2, CwHelper_Destroy_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m1D871287C681458FE17E21A467CAE3E91E83816C_RuntimeMethod_var);
		__this->___tempTexture_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempTexture_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dReader::CompleteDirectly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader_CompleteDirectly_m3F237C565C38816EC7566639454DE71A47F2FD0C (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_Destroy_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m1D871287C681458FE17E21A467CAE3E91E83816C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tempTexture != null && (tempTexture.width != buffer.width || tempTexture.height != buffer.height))
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___tempTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___tempTexture_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = __this->___buffer_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_003e;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___tempTexture_8;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = __this->___buffer_3;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_004f;
		}
	}

IL_003e:
	{
		// tempTexture = CwHelper.Destroy(tempTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___tempTexture_8;
		il2cpp_codegen_runtime_class_init_inline(CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11;
		L_11 = CwHelper_Destroy_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m1D871287C681458FE17E21A467CAE3E91E83816C(L_10, CwHelper_Destroy_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m1D871287C681458FE17E21A467CAE3E91E83816C_RuntimeMethod_var);
		__this->___tempTexture_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempTexture_8), (void*)L_11);
	}

IL_004f:
	{
		// if (tempTexture == null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = __this->___tempTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		// tempTexture = new Texture2D(buffer.width, buffer.height, TextureFormat.RGBA32, false);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = __this->___buffer_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = __this->___buffer_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_18, L_15, L_17, 4, (bool)0, NULL);
		__this->___tempTexture_8 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempTexture_8), (void*)L_18);
	}

IL_0080:
	{
		// CwHelper.BeginActive(buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = __this->___buffer_3;
		il2cpp_codegen_runtime_class_init_inline(CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		CwHelper_BeginActive_m9B420B3A0635814AB6BC5B074164860834284317(L_19, NULL);
		// tempTexture.ReadPixels(new Rect(0, 0, buffer.width, buffer.height), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = __this->___tempTexture_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = __this->___buffer_3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_21);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = __this->___buffer_3;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_23);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_25;
		memset((&L_25), 0, sizeof(L_25));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_25), (0.0f), (0.0f), ((float)L_22), ((float)L_24), /*hidden argument*/NULL);
		NullCheck(L_20);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_20, L_25, 0, 0, NULL);
		// CwHelper.EndActive();
		CwHelper_EndActive_mF1BAA382F73B1DEA7B8E6895686B349A59BA5162(NULL);
		// buffer = P3dCommon.ReleaseRenderTexture(buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = __this->___buffer_3;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27;
		L_27 = P3dCommon_ReleaseRenderTexture_mC6870C94C775CA99DA0A52C151E97791F71DDA90(L_26, NULL);
		__this->___buffer_3 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_3), (void*)L_27);
		// tempTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = __this->___tempTexture_8;
		NullCheck(L_28);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_28, NULL);
		// OnComplete(tempTexture.GetRawTextureData<Color32>());
		Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* L_29 = __this->___OnComplete_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = __this->___tempTexture_8;
		NullCheck(L_30);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_31;
		L_31 = Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2(L_30, Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var);
		NullCheck(L_29);
		Action_1_Invoke_mD67FD4914AE940ACA1C55F0221107D63AF44C5C6_inline(L_29, L_31, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dReader__ctor_m7488B54594DB3D8C8611D7641CE62F52CF90EBED (P3dReader_t79052AC4451976F88A846F1C014AB735BE7B0DB7* __this, const RuntimeMethod* method) 
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
// System.Void PaintIn3D.P3dSerialization::TryRegister(PaintIn3D.P3dPaintableTexture,PaintIn3D.P3dHash)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dSerialization_TryRegister_mE793091DDCE834C8C1BF1D621AC9172B8DCE3C36 (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___0_paintableTexture, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___1_hash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSerialization_TryRegister_TisP3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_m3AF44BB78BE06E05A7E89BE44D4AAB40982CA367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryRegister(paintableTexture, hash, HashToPaintableTexture, PaintableTextureToHash);
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_0 = ___0_paintableTexture;
		P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 L_1 = ___1_hash;
		il2cpp_codegen_runtime_class_init_inline(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302* L_2 = ((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToPaintableTexture_6;
		Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015* L_3 = ((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___PaintableTextureToHash_7;
		P3dSerialization_TryRegister_TisP3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_m3AF44BB78BE06E05A7E89BE44D4AAB40982CA367(L_0, L_1, L_2, L_3, P3dSerialization_TryRegister_TisP3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_m3AF44BB78BE06E05A7E89BE44D4AAB40982CA367_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dSerialization::TryRegister(PaintIn3D.P3dModel,PaintIn3D.P3dHash)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dSerialization_TryRegister_m25F012425669AB2E49BD7AE23D810987CEA0BF1E (P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___0_model, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___1_hash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSerialization_TryRegister_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mEBECE70EBD42DBB90C14404F3CAD4CB65A74A811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryRegister(model, model.Hash, HashToModel, ModelToHash);
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_0 = ___0_model;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_1 = ___0_model;
		NullCheck(L_1);
		P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 L_2;
		L_2 = P3dModel_get_Hash_m6D731BDD400F96C7F4883BE82AE7C486455832D5_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1* L_3 = ((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToModel_2;
		Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215* L_4 = ((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___ModelToHash_3;
		P3dSerialization_TryRegister_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mEBECE70EBD42DBB90C14404F3CAD4CB65A74A811(L_0, L_2, L_3, L_4, P3dSerialization_TryRegister_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mEBECE70EBD42DBB90C14404F3CAD4CB65A74A811_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dSerialization::TryRegister(UnityEngine.Texture,PaintIn3D.P3dHash)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dSerialization_TryRegister_mA7290B66C8725FCC5703A47F40D0933FFF3305EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___1_hash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSerialization_TryRegister_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_mD7ABBA8409F2CDF0B4ED27993C9BF9B4B005426A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryRegister(texture, hash, HashToTexture, TextureToHash);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_texture;
		P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 L_1 = ___1_hash;
		il2cpp_codegen_runtime_class_init_inline(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394* L_2 = ((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToTexture_4;
		Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D* L_3 = ((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___TextureToHash_5;
		P3dSerialization_TryRegister_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_mD7ABBA8409F2CDF0B4ED27993C9BF9B4B005426A(L_0, L_1, L_2, L_3, P3dSerialization_TryRegister_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_mD7ABBA8409F2CDF0B4ED27993C9BF9B4B005426A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 PaintIn3D.P3dSerialization::TryRegister(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dSerialization_TryRegister_m818988E97E00258E9D7F4AA73BEC6D288B65DD25 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE69F96061EACB196437CBF7F103092D04BDF3BC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mEF2E83E7D7A51D9598E8771D187138AF3CE614A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB2358E1DCA7C030B82026AA186D3481F3568D759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	String_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	{
		// var hash = GetStableStringHash(material.name);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = P3dSerialization_GetStableStringHash_mA46855A8DFB4910E0911C4AEFC08E913060F6A13(L_1, NULL);
		V_0 = L_2;
		// if (HashToMaterial.ContainsKey(hash) == true)
		Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90* L_3 = ((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToMaterial_0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mB2358E1DCA7C030B82026AA186D3481F3568D759(L_3, L_4, Dictionary_2_ContainsKey_mB2358E1DCA7C030B82026AA186D3481F3568D759_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		// throw new System.Exception("You're trying to register the " + material + " Material, but you've already registered the " + HashToMaterial[hash] + " Material with the same hash.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral757B18ACAD868A51DF0C2C15F3BADCC795AB8674)));
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral757B18ACAD868A51DF0C2C15F3BADCC795AB8674)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = L_9;
		G_B2_0 = L_10;
		G_B2_1 = 1;
		G_B2_2 = L_8;
		G_B2_3 = L_8;
		if (L_10)
		{
			G_B3_0 = L_10;
			G_B3_1 = 1;
			G_B3_2 = L_8;
			G_B3_3 = L_8;
			goto IL_0031;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0036;
	}

IL_0031:
	{
		NullCheck(G_B3_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0036:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = G_B4_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E89A105996F0C2AA1A32FDFCFE768824EA726B2)));
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E89A105996F0C2AA1A32FDFCFE768824EA726B2)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var)));
		Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90* L_14 = ((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))))->___HashToMaterial_0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16;
		L_16 = Dictionary_2_get_Item_m34643E8F228FC7E513C6BD213366EFDB9D477BEE(L_14, L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dictionary_2_get_Item_m34643E8F228FC7E513C6BD213366EFDB9D477BEE_RuntimeMethod_var)));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = L_16;
		G_B5_0 = L_17;
		G_B5_1 = 3;
		G_B5_2 = L_13;
		G_B5_3 = L_13;
		if (L_17)
		{
			G_B6_0 = L_17;
			G_B6_1 = 3;
			G_B6_2 = L_13;
			G_B6_3 = L_13;
			goto IL_0053;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		goto IL_0058;
	}

IL_0053:
	{
		NullCheck(G_B6_0);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
		G_B7_0 = L_18;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
	}

IL_0058:
	{
		NullCheck(G_B7_2);
		ArrayElementTypeCheck (G_B7_2, G_B7_0);
		(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (String_t*)G_B7_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = G_B7_3;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AA8E34EBF72A798323E167196385A02499FFC64)));
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AA8E34EBF72A798323E167196385A02499FFC64)));
		String_t* L_20;
		L_20 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_19, NULL);
		Exception_t* L_21 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&P3dSerialization_TryRegister_m818988E97E00258E9D7F4AA73BEC6D288B65DD25_RuntimeMethod_var)));
	}

IL_006c:
	{
		// MaterialToHash.Add(material, hash);
		il2cpp_codegen_runtime_class_init_inline(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80* L_22 = ((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___MaterialToHash_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = ___0_material;
		int32_t L_24 = V_0;
		NullCheck(L_22);
		Dictionary_2_Add_mEF2E83E7D7A51D9598E8771D187138AF3CE614A6(L_22, L_23, L_24, Dictionary_2_Add_mEF2E83E7D7A51D9598E8771D187138AF3CE614A6_RuntimeMethod_var);
		// HashToMaterial.Add(hash, material);
		Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90* L_25 = ((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToMaterial_0;
		int32_t L_26 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = ___0_material;
		NullCheck(L_25);
		Dictionary_2_Add_mE69F96061EACB196437CBF7F103092D04BDF3BC5(L_25, L_26, L_27, Dictionary_2_Add_mE69F96061EACB196437CBF7F103092D04BDF3BC5_RuntimeMethod_var);
		// return hash;
		int32_t L_28 = V_0;
		return L_28;
	}
}
// System.Int32 PaintIn3D.P3dSerialization::GetStableStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dSerialization_GetStableStringHash_mA46855A8DFB4910E0911C4AEFC08E913060F6A13 (String_t* ___0_s, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		// var hash = 23;
		V_0 = ((int32_t)23);
		// foreach (var c in s)
		String_t* L_0 = ___0_s;
		V_1 = L_0;
		V_2 = 0;
		goto IL_001c;
	}

IL_0009:
	{
		// foreach (var c in s)
		String_t* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_3 = L_3;
		// hash = hash * 31 + c;
		int32_t L_4 = V_0;
		Il2CppChar L_5 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)31))), (int32_t)L_5));
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001c:
	{
		// foreach (var c in s)
		int32_t L_7 = V_2;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0009;
		}
	}
	{
		// return hash;
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Void PaintIn3D.P3dSerialization::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dSerialization__cctor_mC56144EC6542BAFA5FD9742D1047883218EB0FED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m07794A540A5137936E353505EE63AA7BFDCF2917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m18CC90C0D11272926148AAD0E6D65731A5986525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m99BA4C8EF72A9963DF9C4E23CFD9FC4409D0C7AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA563968253DE4672794228EC7E1F9BC19CAE0A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB84CE1E338BC58D15838BC22253FC92068C924CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD6FD15DC3C0B842FF06E7DEE046062747368619_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDDD519BC8A7FF02C1AA63B719EE99073027C1323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE59850AC4C9397D5332D553B0E9BADF4E96447DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dictionary<int, Material> HashToMaterial = new Dictionary<int, Material>();
		Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90* L_0 = (Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90*)il2cpp_codegen_object_new(Dictionary_2_tBF325E0F09BEEDF7AC6E6CB85841301637FC6E90_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m07794A540A5137936E353505EE63AA7BFDCF2917(L_0, Dictionary_2__ctor_m07794A540A5137936E353505EE63AA7BFDCF2917_RuntimeMethod_var);
		((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToMaterial_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToMaterial_0), (void*)L_0);
		// public static Dictionary<Material, int> MaterialToHash = new Dictionary<Material, int>();
		Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80* L_1 = (Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80*)il2cpp_codegen_object_new(Dictionary_2_t6EB10DF170874D02D43E115B0A1B93479CE3FF80_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mA563968253DE4672794228EC7E1F9BC19CAE0A93(L_1, Dictionary_2__ctor_mA563968253DE4672794228EC7E1F9BC19CAE0A93_RuntimeMethod_var);
		((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___MaterialToHash_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___MaterialToHash_1), (void*)L_1);
		// public static Dictionary<P3dHash, P3dModel> HashToModel = new Dictionary<P3dHash, P3dModel>();
		Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1* L_2 = (Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1*)il2cpp_codegen_object_new(Dictionary_2_tF1F6E3D7B242C72221F6E7D7C9F8988D4F88E5B1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m18CC90C0D11272926148AAD0E6D65731A5986525(L_2, Dictionary_2__ctor_m18CC90C0D11272926148AAD0E6D65731A5986525_RuntimeMethod_var);
		((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToModel_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToModel_2), (void*)L_2);
		// public static Dictionary<P3dModel, P3dHash> ModelToHash = new Dictionary<P3dModel, P3dHash>();
		Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215* L_3 = (Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215*)il2cpp_codegen_object_new(Dictionary_2_t23F009F6BF30385E6BBB413094B91AB9DF341215_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mCD6FD15DC3C0B842FF06E7DEE046062747368619(L_3, Dictionary_2__ctor_mCD6FD15DC3C0B842FF06E7DEE046062747368619_RuntimeMethod_var);
		((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___ModelToHash_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___ModelToHash_3), (void*)L_3);
		// public static Dictionary<P3dHash, Texture> HashToTexture = new Dictionary<P3dHash, Texture>();
		Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394* L_4 = (Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394*)il2cpp_codegen_object_new(Dictionary_2_t09239EC9CA16DB1115B0870D2CBE39FF72CFB394_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m99BA4C8EF72A9963DF9C4E23CFD9FC4409D0C7AC(L_4, Dictionary_2__ctor_m99BA4C8EF72A9963DF9C4E23CFD9FC4409D0C7AC_RuntimeMethod_var);
		((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToTexture_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToTexture_4), (void*)L_4);
		// public static Dictionary<Texture, P3dHash> TextureToHash = new Dictionary<Texture, P3dHash>();
		Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D* L_5 = (Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D*)il2cpp_codegen_object_new(Dictionary_2_t716A84C3D63C928561C76B9981587F239461F23D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_mB84CE1E338BC58D15838BC22253FC92068C924CA(L_5, Dictionary_2__ctor_mB84CE1E338BC58D15838BC22253FC92068C924CA_RuntimeMethod_var);
		((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___TextureToHash_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___TextureToHash_5), (void*)L_5);
		// public static Dictionary<P3dHash, P3dPaintableTexture> HashToPaintableTexture = new Dictionary<P3dHash, P3dPaintableTexture>();
		Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302* L_6 = (Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302*)il2cpp_codegen_object_new(Dictionary_2_t8439C174754E422BCA76B85073E98C05EE188302_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_mE59850AC4C9397D5332D553B0E9BADF4E96447DE(L_6, Dictionary_2__ctor_mE59850AC4C9397D5332D553B0E9BADF4E96447DE_RuntimeMethod_var);
		((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToPaintableTexture_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___HashToPaintableTexture_6), (void*)L_6);
		// public static Dictionary<P3dPaintableTexture, P3dHash> PaintableTextureToHash = new Dictionary<P3dPaintableTexture, P3dHash>();
		Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015* L_7 = (Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015*)il2cpp_codegen_object_new(Dictionary_2_t9C5763F800DA47A342DD29F005B760EA39828015_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_mDDD519BC8A7FF02C1AA63B719EE99073027C1323(L_7, Dictionary_2__ctor_mDDD519BC8A7FF02C1AA63B719EE99073027C1323_RuntimeMethod_var);
		((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___PaintableTextureToHash_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_StaticFields*)il2cpp_codegen_static_fields_for(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var))->___PaintableTextureToHash_7), (void*)L_7);
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
// Conversion methods for marshalling of: PaintIn3D.P3dSlot
IL2CPP_EXTERN_C void P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshal_pinvoke(const P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C& unmarshaled, P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshaled_pinvoke& marshaled)
{
	marshaled.___Index_0 = unmarshaled.___Index_0;
	marshaled.___Name_1 = il2cpp_codegen_marshal_string(unmarshaled.___Name_1);
}
IL2CPP_EXTERN_C void P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshal_pinvoke_back(const P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshaled_pinvoke& marshaled, P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C& unmarshaled)
{
	int32_t unmarshaledIndex_temp_0 = 0;
	unmarshaledIndex_temp_0 = marshaled.___Index_0;
	unmarshaled.___Index_0 = unmarshaledIndex_temp_0;
	unmarshaled.___Name_1 = il2cpp_codegen_marshal_string_result(marshaled.___Name_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Name_1));
}
// Conversion method for clean up from marshalling of: PaintIn3D.P3dSlot
IL2CPP_EXTERN_C void P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshal_pinvoke_cleanup(P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_1);
	marshaled.___Name_1 = NULL;
}
// Conversion methods for marshalling of: PaintIn3D.P3dSlot
IL2CPP_EXTERN_C void P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshal_com(const P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C& unmarshaled, P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshaled_com& marshaled)
{
	marshaled.___Index_0 = unmarshaled.___Index_0;
	marshaled.___Name_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___Name_1);
}
IL2CPP_EXTERN_C void P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshal_com_back(const P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshaled_com& marshaled, P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C& unmarshaled)
{
	int32_t unmarshaledIndex_temp_0 = 0;
	unmarshaledIndex_temp_0 = marshaled.___Index_0;
	unmarshaled.___Index_0 = unmarshaledIndex_temp_0;
	unmarshaled.___Name_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___Name_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Name_1));
}
// Conversion method for clean up from marshalling of: PaintIn3D.P3dSlot
IL2CPP_EXTERN_C void P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshal_com_cleanup(P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Name_1);
	marshaled.___Name_1 = NULL;
}
// System.Void PaintIn3D.P3dSlot::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dSlot__ctor_m94D018FBF673769031508CFD1818315C221FE68A (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* __this, int32_t ___0_newIndex, String_t* ___1_newName, const RuntimeMethod* method) 
{
	{
		// Index = newIndex;
		int32_t L_0 = ___0_newIndex;
		__this->___Index_0 = L_0;
		// Name  = newName;
		String_t* L_1 = ___1_newName;
		__this->___Name_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_1), (void*)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void P3dSlot__ctor_m94D018FBF673769031508CFD1818315C221FE68A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_newIndex, String_t* ___1_newName, const RuntimeMethod* method)
{
	P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C*>(__this + _offset);
	P3dSlot__ctor_m94D018FBF673769031508CFD1818315C221FE68A(_thisAdjusted, ___0_newIndex, ___1_newName, method);
}
// UnityEngine.Texture PaintIn3D.P3dSlot::FindTexture(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dSlot_FindTexture_mCA6AD6C28ED81DE539634518AAFAB3459919C4B1 (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m65BC4E73EDE6D567FEA89918246CF50E1F790866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	{
		// if (gameObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// var paintable = gameObject.GetComponentInParent<P3dPaintable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_gameObject;
		NullCheck(L_2);
		P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* L_3;
		L_3 = GameObject_GetComponentInParent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m65BC4E73EDE6D567FEA89918246CF50E1F790866(L_2, GameObject_GetComponentInParent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m65BC4E73EDE6D567FEA89918246CF50E1F790866_RuntimeMethod_var);
		V_0 = L_3;
		// if (paintable != null)
		P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// var material = P3dCommon.GetMaterial(paintable.CachedRenderer, Index);
		P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* L_6 = V_0;
		NullCheck(L_6);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = P3dModel_get_CachedRenderer_m58856A1E3E28F9F61F87AB779E69A5584722EE60(L_6, NULL);
		int32_t L_8 = __this->___Index_0;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = P3dCommon_GetMaterial_mC8AD56995F1B1C5BE5398E0FA1144A9F147557A8(L_7, L_8, NULL);
		V_1 = L_9;
		// if (material != null && material.HasProperty(Name) == true)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = V_1;
		String_t* L_13 = __this->___Name_1;
		NullCheck(L_12);
		bool L_14;
		L_14 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_004f;
		}
	}
	{
		// return material.GetTexture(Name);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = V_1;
		String_t* L_16 = __this->___Name_1;
		NullCheck(L_15);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17;
		L_17 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_15, L_16, NULL);
		return L_17;
	}

IL_004f:
	{
		// return null;
		return (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
	}
}
IL2CPP_EXTERN_C  Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dSlot_FindTexture_mCA6AD6C28ED81DE539634518AAFAB3459919C4B1_AdjustorThunk (RuntimeObject* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method)
{
	P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C*>(__this + _offset);
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* _returnValue;
	_returnValue = P3dSlot_FindTexture_mCA6AD6C28ED81DE539634518AAFAB3459919C4B1(_thisAdjusted, ___0_gameObject, method);
	return _returnValue;
}
// System.Boolean PaintIn3D.P3dSlot::IsTransformed(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dSlot_IsTransformed_mA35048577FC219BA4CC3F61965455E9E4A30AC0F (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m65BC4E73EDE6D567FEA89918246CF50E1F790866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	{
		// if (gameObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// var paintable = gameObject.GetComponentInParent<P3dPaintable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_gameObject;
		NullCheck(L_2);
		P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* L_3;
		L_3 = GameObject_GetComponentInParent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m65BC4E73EDE6D567FEA89918246CF50E1F790866(L_2, GameObject_GetComponentInParent_TisP3dPaintable_tC5471B5C328513F1757B292031417E5287321A00_m65BC4E73EDE6D567FEA89918246CF50E1F790866_RuntimeMethod_var);
		V_0 = L_3;
		// if (paintable != null)
		P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		// var material = P3dCommon.GetMaterial(paintable.CachedRenderer, Index);
		P3dPaintable_tC5471B5C328513F1757B292031417E5287321A00* L_6 = V_0;
		NullCheck(L_6);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = P3dModel_get_CachedRenderer_m58856A1E3E28F9F61F87AB779E69A5584722EE60(L_6, NULL);
		int32_t L_8 = __this->___Index_0;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = P3dCommon_GetMaterial_mC8AD56995F1B1C5BE5398E0FA1144A9F147557A8(L_7, L_8, NULL);
		V_1 = L_9;
		// if (material != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		// if (material.GetTextureScale(Name) != Vector2.one || material.GetTextureOffset(Name) != Vector2.zero)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = V_1;
		String_t* L_13 = __this->___Name_1;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Material_GetTextureScale_mF3406F1439C275C25FEE0C4E19108B29AA77E693(L_12, L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		bool L_16;
		L_16 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_14, L_15, NULL);
		if (L_16)
		{
			goto IL_0064;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = V_1;
		String_t* L_18 = __this->___Name_1;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Material_GetTextureOffset_m4F9E2C96960DFE3C76B9D878F8E654D78185F9CA(L_17, L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_21;
		L_21 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0066;
		}
	}

IL_0064:
	{
		// return true;
		return (bool)1;
	}

IL_0066:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool P3dSlot_IsTransformed_mA35048577FC219BA4CC3F61965455E9E4A30AC0F_AdjustorThunk (RuntimeObject* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method)
{
	P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C*>(__this + _offset);
	bool _returnValue;
	_returnValue = P3dSlot_IsTransformed_mA35048577FC219BA4CC3F61965455E9E4A30AC0F(_thisAdjusted, ___0_gameObject, method);
	return _returnValue;
}
// System.Boolean PaintIn3D.P3dSlot::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dSlot_Equals_m7D33E018C413ED0AF28521BA659351A11092361B (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return base.Equals(obj);
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_0 = (*(P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C*)__this);
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_1 = L_0;
		RuntimeObject* L_2 = Box(P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool P3dSlot_Equals_m7D33E018C413ED0AF28521BA659351A11092361B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C*>(__this + _offset);
	bool _returnValue;
	_returnValue = P3dSlot_Equals_m7D33E018C413ED0AF28521BA659351A11092361B(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 PaintIn3D.P3dSlot::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dSlot_GetHashCode_mE3F593FFD1F807B849DF8998D62C30FC62584A05 (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* __this, const RuntimeMethod* method) 
{
	{
		// return Index.GetHashCode() ^ Name.GetHashCode();
		int32_t* L_0 = (&__this->___Index_0);
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_0, NULL);
		String_t* L_2 = __this->___Name_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)(L_1^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t P3dSlot_GetHashCode_mE3F593FFD1F807B849DF8998D62C30FC62584A05_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = P3dSlot_GetHashCode_mE3F593FFD1F807B849DF8998D62C30FC62584A05(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean PaintIn3D.P3dSlot::op_Equality(PaintIn3D.P3dSlot,PaintIn3D.P3dSlot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dSlot_op_Equality_mE8EB06307B9683B03D54CECB09DB4D8AEBE13628 (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C ___0_a, P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C ___1_b, const RuntimeMethod* method) 
{
	{
		// return a.Index == b.Index && a.Name == b.Name;
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_0 = ___0_a;
		int32_t L_1 = L_0.___Index_0;
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_2 = ___1_b;
		int32_t L_3 = L_2.___Index_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_4 = ___0_a;
		String_t* L_5 = L_4.___Name_1;
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_6 = ___1_b;
		String_t* L_7 = L_6.___Name_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_7, NULL);
		return L_8;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean PaintIn3D.P3dSlot::op_Inequality(PaintIn3D.P3dSlot,PaintIn3D.P3dSlot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dSlot_op_Inequality_mF85F2B2E210C6D2A2402B5656D073839D4FAA2B8 (P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C ___0_a, P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C ___1_b, const RuntimeMethod* method) 
{
	{
		// return a.Index != b.Index || a.Name != b.Name;
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_0 = ___0_a;
		int32_t L_1 = L_0.___Index_0;
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_2 = ___1_b;
		int32_t L_3 = L_2.___Index_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_4 = ___0_a;
		String_t* L_5 = L_4.___Name_1;
		P3dSlot_tBCEB253A8BEE3F3E407B7C8C31616A760071138C L_6 = ___1_b;
		String_t* L_7 = L_6.___Name_1;
		bool L_8;
		L_8 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_5, L_7, NULL);
		return L_8;
	}

IL_0020:
	{
		return (bool)1;
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
// System.Boolean PaintIn3D.P3dStateManager::get_CanUndo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dStateManager_get_CanUndo_mD3BB99F18950BD0227ACEBDE51FE37D4662051BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// foreach (var paintableTexture in P3dPaintableTexture.Instances)
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* L_0;
		L_0 = P3dPaintableTexture_get_Instances_m8F189AB6D36C8D1473A0A4FE72F735F9C9DE407C_inline(NULL);
		NullCheck(L_0);
		Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B L_1;
		L_1 = LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299(L_0, LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693((&V_0), Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_000d_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_2;
				L_2 = Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_inline((&V_0), Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
				// if (paintableTexture.CanUndo == true)
				NullCheck(L_2);
				bool L_3;
				L_3 = P3dPaintableTexture_get_CanUndo_mB2045FABFD28F9C95C0670DF11267AE199F21CDD(L_2, NULL);
				if (!L_3)
				{
					goto IL_001f_1;
				}
			}
			{
				// return true;
				V_1 = (bool)1;
				goto IL_003a;
			}

IL_001f_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				bool L_4;
				L_4 = Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F((&V_0), Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}

IL_003a:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean PaintIn3D.P3dStateManager::get_CanRedo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dStateManager_get_CanRedo_m5AD15D23AA19C6CC6F8855295B92FE49252C16BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// foreach (var paintableTexture in P3dPaintableTexture.Instances)
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* L_0;
		L_0 = P3dPaintableTexture_get_Instances_m8F189AB6D36C8D1473A0A4FE72F735F9C9DE407C_inline(NULL);
		NullCheck(L_0);
		Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B L_1;
		L_1 = LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299(L_0, LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693((&V_0), Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_000d_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_2;
				L_2 = Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_inline((&V_0), Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
				// if (paintableTexture.CanRedo == true)
				NullCheck(L_2);
				bool L_3;
				L_3 = P3dPaintableTexture_get_CanRedo_m7679F5C03C7A27197578F92C7C76880A6FDF47E6(L_2, NULL);
				if (!L_3)
				{
					goto IL_001f_1;
				}
			}
			{
				// return true;
				V_1 = (bool)1;
				goto IL_003a;
			}

IL_001f_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				bool L_4;
				L_4 = Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F((&V_0), Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}

IL_003a:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void PaintIn3D.P3dStateManager::StoreAllStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dStateManager_StoreAllStates_m6826D145BC61570B8E611A286518036D9D160B6A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var paintableTexture in P3dPaintableTexture.Instances)
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* L_0;
		L_0 = P3dPaintableTexture_get_Instances_m8F189AB6D36C8D1473A0A4FE72F735F9C9DE407C_inline(NULL);
		NullCheck(L_0);
		Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B L_1;
		L_1 = LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299(L_0, LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693((&V_0), Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000d_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_2;
				L_2 = Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_inline((&V_0), Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
				// paintableTexture.StoreState();
				NullCheck(L_2);
				P3dPaintableTexture_StoreState_m7A343CF81E64AF221269E8DE5746B6ECE47A33D9(L_2, NULL);
			}

IL_0019_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				bool L_3;
				L_3 = Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F((&V_0), Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dStateManager::ClearAllStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dStateManager_ClearAllStates_m979FDA05D0FA1208C6CD033D7569E98FB3918B58 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var paintableTexture in P3dPaintableTexture.Instances)
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* L_0;
		L_0 = P3dPaintableTexture_get_Instances_m8F189AB6D36C8D1473A0A4FE72F735F9C9DE407C_inline(NULL);
		NullCheck(L_0);
		Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B L_1;
		L_1 = LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299(L_0, LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693((&V_0), Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000d_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_2;
				L_2 = Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_inline((&V_0), Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
				// paintableTexture.ClearStates();
				NullCheck(L_2);
				P3dPaintableTexture_ClearStates_mCF24386E400CCF9DBF3FF2FDE8CC4C47720ADEB5(L_2, NULL);
			}

IL_0019_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				bool L_3;
				L_3 = Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F((&V_0), Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dStateManager::UndoAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dStateManager_UndoAll_m609BF9039E5ACB449AFB957B952B850A1421B9AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var paintableTexture in P3dPaintableTexture.Instances)
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* L_0;
		L_0 = P3dPaintableTexture_get_Instances_m8F189AB6D36C8D1473A0A4FE72F735F9C9DE407C_inline(NULL);
		NullCheck(L_0);
		Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B L_1;
		L_1 = LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299(L_0, LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693((&V_0), Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000d_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_2;
				L_2 = Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_inline((&V_0), Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
				// paintableTexture.Undo();
				NullCheck(L_2);
				P3dPaintableTexture_Undo_mFAB9D64CFA23B7929E886D0293A692D236B286E0(L_2, NULL);
			}

IL_0019_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				bool L_3;
				L_3 = Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F((&V_0), Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dStateManager::RedoAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dStateManager_RedoAll_m88391E5B861B10D9A149BB574A0ADDA30D530C71 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var paintableTexture in P3dPaintableTexture.Instances)
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* L_0;
		L_0 = P3dPaintableTexture_get_Instances_m8F189AB6D36C8D1473A0A4FE72F735F9C9DE407C_inline(NULL);
		NullCheck(L_0);
		Enumerator_t91A2317476662685802A0D75B17C6A42B6F3E30B L_1;
		L_1 = LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299(L_0, LinkedList_1_GetEnumerator_m00E894F6C7E2CBAFD324015E1645EB731763D299_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693((&V_0), Enumerator_Dispose_mE9E5FDD389649F2948C38A65E2721253CB20A693_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000d_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_2;
				L_2 = Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_inline((&V_0), Enumerator_get_Current_m129116DC2754100687595C916881FB5157055A17_RuntimeMethod_var);
				// paintableTexture.Redo();
				NullCheck(L_2);
				P3dPaintableTexture_Redo_m89C864894DCBAE163C0AFCE1AB51A46DAA742218(L_2, NULL);
			}

IL_0019_1:
			{
				// foreach (var paintableTexture in P3dPaintableTexture.Instances)
				bool L_3;
				L_3 = Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F((&V_0), Enumerator_MoveNext_m200CBC3163B3B30D5248E0C9227B029656D7C42F_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
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
// System.Void PaintIn3D.P3dTextureHash::set_Texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTextureHash_set_Texture_m27EDA114C2E8AB6974382AF8864C082691D74DC9 (P3dTextureHash_t3576030550098A239E999FF9BF56B53CC443AF7C* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___texture_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texture_4), (void*)L_0);
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.P3dTextureHash::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dTextureHash_get_Texture_mCAB036AD79F0F803AFA3F73479BCD7959228921E (P3dTextureHash_t3576030550098A239E999FF9BF56B53CC443AF7C* __this, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___texture_4;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dTextureHash::set_Hash(PaintIn3D.P3dHash)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTextureHash_set_Hash_m41B6BBA745D12B4060F4DB483087B3163F268524 (P3dTextureHash_t3576030550098A239E999FF9BF56B53CC443AF7C* __this, P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public P3dHash Hash { set { hash = value; P3dSerialization.TryRegister(texture, hash); } get { return hash; } } [SerializeField] private P3dHash hash;
		P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 L_0 = ___0_value;
		__this->___hash_5 = L_0;
		// public P3dHash Hash { set { hash = value; P3dSerialization.TryRegister(texture, hash); } get { return hash; } } [SerializeField] private P3dHash hash;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = __this->___texture_4;
		P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 L_2 = __this->___hash_5;
		il2cpp_codegen_runtime_class_init_inline(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		P3dSerialization_TryRegister_mA7290B66C8725FCC5703A47F40D0933FFF3305EE(L_1, L_2, NULL);
		// public P3dHash Hash { set { hash = value; P3dSerialization.TryRegister(texture, hash); } get { return hash; } } [SerializeField] private P3dHash hash;
		return;
	}
}
// PaintIn3D.P3dHash PaintIn3D.P3dTextureHash::get_Hash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 P3dTextureHash_get_Hash_mECCCC7901A13A16DE17F20F902475C51F1B84A69 (P3dTextureHash_t3576030550098A239E999FF9BF56B53CC443AF7C* __this, const RuntimeMethod* method) 
{
	{
		// public P3dHash Hash { set { hash = value; P3dSerialization.TryRegister(texture, hash); } get { return hash; } } [SerializeField] private P3dHash hash;
		P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 L_0 = __this->___hash_5;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dTextureHash::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTextureHash_OnEnable_m4D1C764FF8334C0E87E9571F9FBF77394FDC5766 (P3dTextureHash_t3576030550098A239E999FF9BF56B53CC443AF7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// P3dSerialization.TryRegister(texture, hash);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___texture_4;
		P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 L_1 = __this->___hash_5;
		il2cpp_codegen_runtime_class_init_inline(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		P3dSerialization_TryRegister_mA7290B66C8725FCC5703A47F40D0933FFF3305EE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dTextureHash::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTextureHash_OnDestroy_mA085E659D8E2CC17EE1F2077B72A686CDDD90EA6 (P3dTextureHash_t3576030550098A239E999FF9BF56B53CC443AF7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// P3dSerialization.TryRegister(texture, default(P3dHash));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___texture_4;
		il2cpp_codegen_initobj((&V_0), sizeof(P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7));
		P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(P3dSerialization_t5C06EBC5C6404D94E680AFD6D63C4A13A50697D9_il2cpp_TypeInfo_var);
		P3dSerialization_TryRegister_mA7290B66C8725FCC5703A47F40D0933FFF3305EE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dTextureHash::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dTextureHash__ctor_m48D0550729A2924E08CA216CA5E32F234456C459 (P3dTextureHash_t3576030550098A239E999FF9BF56B53CC443AF7C* __this, const RuntimeMethod* method) 
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
// System.Void PaintIn3D.P3dPaintDecal::set_Layers(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_Layers_m954B171F9F41ABC3134AFCF6E979A60650EC5B28 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_value, const RuntimeMethod* method) 
{
	{
		// public LayerMask Layers { set { layers = value; } get { return layers; } } [SerializeField] private LayerMask layers = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___0_value;
		__this->___layers_4 = L_0;
		// public LayerMask Layers { set { layers = value; } get { return layers; } } [SerializeField] private LayerMask layers = -1;
		return;
	}
}
// UnityEngine.LayerMask PaintIn3D.P3dPaintDecal::get_Layers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB P3dPaintDecal_get_Layers_m71467E49B9B1D5049A7867BFAF8B33EC134AFFB2 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public LayerMask Layers { set { layers = value; } get { return layers; } } [SerializeField] private LayerMask layers = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___layers_4;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_TargetModel(PaintIn3D.P3dModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_TargetModel_mA002BBC6045EEA2A6677131CF979B9CC07B0E2C9 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dModel TargetModel { set { targetModel = value; } get { return targetModel; } } [SerializeField] private P3dModel targetModel;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_0 = ___0_value;
		__this->___targetModel_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetModel_5), (void*)L_0);
		// public P3dModel TargetModel { set { targetModel = value; } get { return targetModel; } } [SerializeField] private P3dModel targetModel;
		return;
	}
}
// PaintIn3D.P3dModel PaintIn3D.P3dPaintDecal::get_TargetModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* P3dPaintDecal_get_TargetModel_m905804C2B7C2F7CB339A9AE192C949342688CAB5 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public P3dModel TargetModel { set { targetModel = value; } get { return targetModel; } } [SerializeField] private P3dModel targetModel;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_0 = __this->___targetModel_5;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_Group(PaintIn3D.P3dGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_Group_m8C803A3900F67E01CDE3C50C0CE609F80443A87F (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_0 = ___0_value;
		__this->___group_6 = L_0;
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		return;
	}
}
// PaintIn3D.P3dGroup PaintIn3D.P3dPaintDecal::get_Group()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D P3dPaintDecal_get_Group_m5435E4021102D4EFA8AD131B3990E588C7A76348 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_0 = __this->___group_6;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_TargetTexture(PaintIn3D.P3dPaintableTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_TargetTexture_mBD6FCF7B53117FBF8D049CAF4256CD9562916BEF (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dPaintableTexture TargetTexture { set { targetTexture = value; } get { return targetTexture; } } [SerializeField] private P3dPaintableTexture targetTexture;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_0 = ___0_value;
		__this->___targetTexture_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetTexture_7), (void*)L_0);
		// public P3dPaintableTexture TargetTexture { set { targetTexture = value; } get { return targetTexture; } } [SerializeField] private P3dPaintableTexture targetTexture;
		return;
	}
}
// PaintIn3D.P3dPaintableTexture PaintIn3D.P3dPaintDecal::get_TargetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* P3dPaintDecal_get_TargetTexture_m7C2ACAE5963AB55E24635E315D878FEC389C69CE (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public P3dPaintableTexture TargetTexture { set { targetTexture = value; } get { return targetTexture; } } [SerializeField] private P3dPaintableTexture targetTexture;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_0 = __this->___targetTexture_7;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_BlendMode(PaintIn3D.P3dBlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_BlendMode_m83ECD79631871B61107AEC0C4FDA13023C94029D (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_0 = ___0_value;
		__this->___blendMode_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___blendMode_8))->___Texture_23), (void*)NULL);
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		return;
	}
}
// PaintIn3D.P3dBlendMode PaintIn3D.P3dPaintDecal::get_BlendMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B P3dPaintDecal_get_BlendMode_m2191A8A98629F087D3263C3F38C2E861E633B252 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_0 = __this->___blendMode_8;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_Texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_Texture_m6822C4144E59DE1CE4345DCFBA99376711287989 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___texture_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texture_9), (void*)L_0);
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.P3dPaintDecal::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dPaintDecal_get_Texture_mB284E0195D98206B9838AB861C5FD8967A64B00E (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___texture_9;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_Shape(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_Shape_mF546C1D692F6A4BF48D9D60F4F56A9C0771400F1 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Texture Shape { set { shape = value; } get { return shape; } } [SerializeField] private Texture shape;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___shape_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shape_10), (void*)L_0);
		// public Texture Shape { set { shape = value; } get { return shape; } } [SerializeField] private Texture shape;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.P3dPaintDecal::get_Shape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dPaintDecal_get_Shape_m1D602A3E5BC1B2D2C16A5E7BE2559CE853924FD5 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public Texture Shape { set { shape = value; } get { return shape; } } [SerializeField] private Texture shape;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___shape_10;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_ShapeChannel(PaintIn3D.P3dChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_ShapeChannel_mA858D50E27D68990B21D77F7447747186B9A2487 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dChannel ShapeChannel { set { shapeChannel = value; } get { return shapeChannel; } } [SerializeField] private P3dChannel shapeChannel = P3dChannel.Alpha;
		int32_t L_0 = ___0_value;
		__this->___shapeChannel_11 = L_0;
		// public P3dChannel ShapeChannel { set { shapeChannel = value; } get { return shapeChannel; } } [SerializeField] private P3dChannel shapeChannel = P3dChannel.Alpha;
		return;
	}
}
// PaintIn3D.P3dChannel PaintIn3D.P3dPaintDecal::get_ShapeChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t P3dPaintDecal_get_ShapeChannel_m148AE0DEA4D2C9086B4A5779EAF56E2AB91443B9 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public P3dChannel ShapeChannel { set { shapeChannel = value; } get { return shapeChannel; } } [SerializeField] private P3dChannel shapeChannel = P3dChannel.Alpha;
		int32_t L_0 = __this->___shapeChannel_11;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_Color_m3883007602119532F655DEC3B01C79C33B91C08F (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___color_12 = L_0;
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		return;
	}
}
// UnityEngine.Color PaintIn3D.P3dPaintDecal::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F P3dPaintDecal_get_Color_m84A3F51FFB38C2EAE7DBFF0E3F1BFFB1BD3A1668 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_12;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_Opacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_Opacity_mDA53C2EE8810E861F0CA9E898722DA83C5640A02 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		float L_0 = ___0_value;
		__this->___opacity_13 = L_0;
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintDecal::get_Opacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintDecal_get_Opacity_m95AA0AF6FFB64BB30EC299546186C4AFB9FB75BD (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		float L_0 = __this->___opacity_13;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_Angle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_Angle_mFABD670EA3A7BBA93D41400A3E7811B56282C343 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Angle { set { angle = value; } get { return angle; } } [Range(-180.0f, 180.0f)] [SerializeField] private float angle;
		float L_0 = ___0_value;
		__this->___angle_14 = L_0;
		// public float Angle { set { angle = value; } get { return angle; } } [Range(-180.0f, 180.0f)] [SerializeField] private float angle;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintDecal::get_Angle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintDecal_get_Angle_m46D9939D7104DC387D998A32721D8F7087ACBA9E (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public float Angle { set { angle = value; } get { return angle; } } [Range(-180.0f, 180.0f)] [SerializeField] private float angle;
		float L_0 = __this->___angle_14;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_Scale_m0CEFDAC9F7A5FA2EEAD75170321540196EB263C6 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Scale { set { scale = value; } get { return scale; } } [SerializeField] private Vector3 scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___scale_15 = L_0;
		// public Vector3 Scale { set { scale = value; } get { return scale; } } [SerializeField] private Vector3 scale = Vector3.one;
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.P3dPaintDecal::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dPaintDecal_get_Scale_m8FBF504DE363BA484D7AA85DB293B1729BA6B0AC (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Scale { set { scale = value; } get { return scale; } } [SerializeField] private Vector3 scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___scale_15;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_Radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_Radius_mFEC3F208528E57254004252F30C427542D25055A (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Radius { set { radius = value; } get { return radius; } } [SerializeField] private float radius = 0.1f;
		float L_0 = ___0_value;
		__this->___radius_16 = L_0;
		// public float Radius { set { radius = value; } get { return radius; } } [SerializeField] private float radius = 0.1f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintDecal::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintDecal_get_Radius_mF1B8C8015F483BDB64ED332D3B845D69982304C0 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public float Radius { set { radius = value; } get { return radius; } } [SerializeField] private float radius = 0.1f;
		float L_0 = __this->___radius_16;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_Hardness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_Hardness_m5DD7F76BA571E8F64B83017DE99709FEB3586777 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Hardness { set { hardness = value; } get { return hardness; } } [SerializeField] private float hardness = 3.0f;
		float L_0 = ___0_value;
		__this->___hardness_17 = L_0;
		// public float Hardness { set { hardness = value; } get { return hardness; } } [SerializeField] private float hardness = 3.0f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintDecal::get_Hardness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintDecal_get_Hardness_mE332AF81199AE811E3BAF24CB238EA0C40E2ACBD (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public float Hardness { set { hardness = value; } get { return hardness; } } [SerializeField] private float hardness = 3.0f;
		float L_0 = __this->___hardness_17;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_Wrapping(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_Wrapping_mE0CC730CD27255992C8D97EC826B771B4E9BD00F (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Wrapping { set { wrapping = value; } get { return wrapping; } } [SerializeField] [Range(0.0f, 1.0f)] private float wrapping = 1.0f;
		float L_0 = ___0_value;
		__this->___wrapping_18 = L_0;
		// public float Wrapping { set { wrapping = value; } get { return wrapping; } } [SerializeField] [Range(0.0f, 1.0f)] private float wrapping = 1.0f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintDecal::get_Wrapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintDecal_get_Wrapping_mFAD456256BC2CE4CEFA45190C0BF5CE8B6976C8E (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public float Wrapping { set { wrapping = value; } get { return wrapping; } } [SerializeField] [Range(0.0f, 1.0f)] private float wrapping = 1.0f;
		float L_0 = __this->___wrapping_18;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_NormalFront(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_NormalFront_mC6AE28719C12BBBE403CE8EB8E1E9BCD79BF2C54 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float NormalFront { set { normalFront = value; } get { return normalFront; } } [Range(0.0f, 2.0f)] [SerializeField] private float normalFront = 1.0f;
		float L_0 = ___0_value;
		__this->___normalFront_19 = L_0;
		// public float NormalFront { set { normalFront = value; } get { return normalFront; } } [Range(0.0f, 2.0f)] [SerializeField] private float normalFront = 1.0f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintDecal::get_NormalFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintDecal_get_NormalFront_m7539D32A46E3105F187FF77D70CF46ECF152704B (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public float NormalFront { set { normalFront = value; } get { return normalFront; } } [Range(0.0f, 2.0f)] [SerializeField] private float normalFront = 1.0f;
		float L_0 = __this->___normalFront_19;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_NormalBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_NormalBack_m9DB8147B232DEF8D7DF8534E1616FF0AC88B5CB6 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float NormalBack { set { normalBack = value; } get { return normalBack; } } [Range(0.0f, 2.0f)] [SerializeField] private float normalBack;
		float L_0 = ___0_value;
		__this->___normalBack_20 = L_0;
		// public float NormalBack { set { normalBack = value; } get { return normalBack; } } [Range(0.0f, 2.0f)] [SerializeField] private float normalBack;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintDecal::get_NormalBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintDecal_get_NormalBack_m233C8E6BE4EA599752ABD8C3062A2DD843073609 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public float NormalBack { set { normalBack = value; } get { return normalBack; } } [Range(0.0f, 2.0f)] [SerializeField] private float normalBack;
		float L_0 = __this->___normalBack_20;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_NormalFade(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_NormalFade_m3645674FBE4B866C366CB3F92BE7C85BBE085E73 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float NormalFade { set { normalFade = value; } get { return normalFade; } } [Range(0.001f, 0.5f)] [SerializeField] private float normalFade = 0.01f;
		float L_0 = ___0_value;
		__this->___normalFade_21 = L_0;
		// public float NormalFade { set { normalFade = value; } get { return normalFade; } } [Range(0.001f, 0.5f)] [SerializeField] private float normalFade = 0.01f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintDecal::get_NormalFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintDecal_get_NormalFade_m901AB7D97725D63C56AD39D64D355E0C6277D468 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public float NormalFade { set { normalFade = value; } get { return normalFade; } } [Range(0.001f, 0.5f)] [SerializeField] private float normalFade = 0.01f;
		float L_0 = __this->___normalFade_21;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_TileTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_TileTexture_m7A001A07F2351042E01E10AB6839A3F576ED222B (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Texture TileTexture { set { tileTexture = value; } get { return tileTexture; } } [SerializeField] private Texture tileTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___tileTexture_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tileTexture_22), (void*)L_0);
		// public Texture TileTexture { set { tileTexture = value; } get { return tileTexture; } } [SerializeField] private Texture tileTexture;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.P3dPaintDecal::get_TileTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dPaintDecal_get_TileTexture_m1A1875D498577C2492F861E8F6253B2A2A2AD55E (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public Texture TileTexture { set { tileTexture = value; } get { return tileTexture; } } [SerializeField] private Texture tileTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___tileTexture_22;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_TileTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_TileTransform_mF455FED5468BDAE3D61C30C5BA4BC35CA3ACB0F7 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform TileTransform { set { tileTransform = value; } get { return tileTransform; } } [SerializeField] private Transform tileTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___tileTransform_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tileTransform_23), (void*)L_0);
		// public Transform TileTransform { set { tileTransform = value; } get { return tileTransform; } } [SerializeField] private Transform tileTransform;
		return;
	}
}
// UnityEngine.Transform PaintIn3D.P3dPaintDecal::get_TileTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* P3dPaintDecal_get_TileTransform_mC2B5E42112C68C74D3F6863DC039262F4C7BC501 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public Transform TileTransform { set { tileTransform = value; } get { return tileTransform; } } [SerializeField] private Transform tileTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___tileTransform_23;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_TileOpacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_TileOpacity_mB92D5C194F5F8B2E689D20550D95F4109AEAC164 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float TileOpacity { set { tileOpacity = value; } get { return tileOpacity; } } [UnityEngine.Serialization.FormerlySerializedAs("tileBlend")] [Range(0.0f, 1.0f)] [SerializeField] private float tileOpacity = 1.0f;
		float L_0 = ___0_value;
		__this->___tileOpacity_24 = L_0;
		// public float TileOpacity { set { tileOpacity = value; } get { return tileOpacity; } } [UnityEngine.Serialization.FormerlySerializedAs("tileBlend")] [Range(0.0f, 1.0f)] [SerializeField] private float tileOpacity = 1.0f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintDecal::get_TileOpacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintDecal_get_TileOpacity_mDE6D856334EF22A6C6DA5B2CDB626B50214B384A (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public float TileOpacity { set { tileOpacity = value; } get { return tileOpacity; } } [UnityEngine.Serialization.FormerlySerializedAs("tileBlend")] [Range(0.0f, 1.0f)] [SerializeField] private float tileOpacity = 1.0f;
		float L_0 = __this->___tileOpacity_24;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::set_TileTransition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_set_TileTransition_mA3897A542E2C012F3374C98A7F81336BA6C78A0A (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float TileTransition { set { tileTransition = value; } get { return tileTransition; } } [Range(1.0f, 200.0f)] [SerializeField] private float tileTransition = 4.0f;
		float L_0 = ___0_value;
		__this->___tileTransition_25 = L_0;
		// public float TileTransition { set { tileTransition = value; } get { return tileTransition; } } [Range(1.0f, 200.0f)] [SerializeField] private float tileTransition = 4.0f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintDecal::get_TileTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintDecal_get_TileTransition_m87EC7DEDB468A1B4C69D6C66C9E8DB73D1D84E50 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// public float TileTransition { set { tileTransition = value; } get { return tileTransition; } } [Range(1.0f, 200.0f)] [SerializeField] private float tileTransition = 4.0f;
		float L_0 = __this->___tileTransition_25;
		return L_0;
	}
}
// PaintIn3D.P3dModifierList PaintIn3D.P3dPaintDecal::get_Modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* P3dPaintDecal_get_Modifiers_m1A64040647D9B945F0E2AE736F17FFF52098CBB4 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_0 = __this->___modifiers_26;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_1 = (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1*)il2cpp_codegen_object_new(P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		P3dModifierList__ctor_m9D9D6E371B210CC03977BC98F8EB83EF70AED91E(L_1, NULL);
		__this->___modifiers_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modifiers_26), (void*)L_1);
	}

IL_0013:
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_2 = __this->___modifiers_26;
		return L_2;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::FlipHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_FlipHorizontal_mDA8A6DCFFC805362A7D40E7F5D5935E9E1D9781A (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// scale.x = -scale.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___scale_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___scale_15);
		float L_2 = L_1->___x_2;
		L_0->___x_2 = ((-L_2));
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::FlipVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_FlipVertical_m2E1719C1A94FA808BD77122264DD1DD51F2DDBD3 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	{
		// scale.y = -scale.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___scale_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___scale_15);
		float L_2 = L_1->___y_3;
		L_0->___y_3 = ((-L_2));
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::IncrementOpacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_IncrementOpacity_mC81D14406170B96DEBE7185B67DDE322B70E9796 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_delta, const RuntimeMethod* method) 
{
	{
		// opacity = Mathf.Clamp01(opacity + delta);
		float L_0 = __this->___opacity_13;
		float L_1 = ___0_delta;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(L_0, L_1)), NULL);
		__this->___opacity_13 = L_2;
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::IncrementAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_IncrementAngle_m69011BFB3A2ED3FD06140C0D6F1080D6194FE49D (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_degrees, const RuntimeMethod* method) 
{
	{
		// angle = Mathf.Repeat(angle + 180.0f + degrees, 360.0f) - 180.0f;
		float L_0 = __this->___angle_14;
		float L_1 = ___0_degrees;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_0, (180.0f))), L_1)), (360.0f), NULL);
		__this->___angle_14 = ((float)il2cpp_codegen_subtract(L_2, (180.0f)));
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::MultiplyScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_MultiplyScale_m57712A26218B65E59707ED2237BF9871629BC2C6 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_multiplier, const RuntimeMethod* method) 
{
	{
		// scale *= multiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___scale_15;
		float L_1 = ___0_multiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		__this->___scale_15 = L_2;
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::MultiplyHardness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_MultiplyHardness_mC3C71611025C1EC35892A216E3DE637BB651B70D (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, float ___0_multiplier, const RuntimeMethod* method) 
{
	{
		// hardness *= multiplier;
		float L_0 = __this->___hardness_17;
		float L_1 = ___0_multiplier;
		__this->___hardness_17 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::HandleHitPoint(System.Boolean,System.Int32,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_HandleHitPoint_m2F92339003829BD01AE4C72F68A94720FEAA0F1F (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (modifiers != null && modifiers.Count > 0)
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_0 = __this->___modifiers_26;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_1 = __this->___modifiers_26;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = P3dModifierList_get_Count_mC0913A1BA1A125E0801BAD24BB4E30B9EE4FA381(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// CwHelper.BeginSeed(seed);
		int32_t L_3 = ___3_seed;
		il2cpp_codegen_runtime_class_init_inline(CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		CwHelper_BeginSeed_m1D62CE23D4E0A2F8465AD3A2C07F276F5BE8CB55(L_3, NULL);
		// modifiers.ModifyPosition(ref position, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_4 = __this->___modifiers_26;
		bool L_5 = ___0_preview;
		float L_6 = ___2_pressure;
		NullCheck(L_4);
		P3dModifierList_ModifyPosition_mE88DC9807F94DAB7AF2C675E5260DBD0F4D02D45(L_4, (&___4_position), L_5, L_6, NULL);
		// CwHelper.EndSeed();
		CwHelper_EndSeed_m4F4DA857C9212EE9E8471C1E27F57A036C98E2FC(NULL);
	}

IL_0031:
	{
		// P3dCommandDecal.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_7 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		bool L_8 = ___0_preview;
		int32_t L_9 = ___1_priority;
		NullCheck(L_7);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_7, L_8, L_9, NULL);
		// P3dCommandDecal.Instance.SetLocation(position);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_10 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___4_position;
		NullCheck(L_10);
		P3dCommandDecal_SetLocation_m4A9164297301A744B0FB27F121CA412ED2B59382(L_10, L_11, (bool)1, NULL);
		// var worldSize     = HandleHitCommon(preview, pressure, seed, rotation);
		bool L_12 = ___0_preview;
		float L_13 = ___2_pressure;
		int32_t L_14 = ___3_seed;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___5_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = P3dPaintDecal_HandleHitCommon_m894B34920984CA60CA94456B1599B0E11139C70E(__this, L_12, L_13, L_14, L_15, NULL);
		// var worldRadius   = P3dCommon.GetRadius(worldSize);
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		float L_17;
		L_17 = P3dCommon_GetRadius_m7E16C6034DBD775EE364F2092BE9980D5634C9B1(L_16, NULL);
		V_0 = L_17;
		// var worldPosition = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___4_position;
		V_1 = L_18;
		// HandleMaskCommon(worldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		P3dPaintDecal_HandleMaskCommon_m8F1356622AE690DAA8ED9F7E17EB96AD3E1BCA24(__this, L_19, NULL);
		// P3dPaintableManager.SubmitAll(P3dCommandDecal.Instance, worldPosition, worldRadius, layers, group, targetModel, targetTexture);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_20 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		float L_22 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_23 = __this->___layers_4;
		int32_t L_24;
		L_24 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_23, NULL);
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_25 = __this->___group_6;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_26 = __this->___targetModel_5;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_27 = __this->___targetTexture_7;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dPaintableManager_SubmitAll_m534EE3CE5C2E8FDCADA006B3A8DBBB4BB44C8921(L_20, L_21, L_22, L_24, L_25, L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::HandleHitLine(System.Boolean,System.Int32,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_HandleHitLine_m51010AB7D98BDBE17692159ADAEE56540BB85776 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_endPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___6_rotation, bool ___7_clip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// P3dCommandDecal.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_0 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		bool L_1 = ___0_preview;
		int32_t L_2 = ___1_priority;
		NullCheck(L_0);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_0, L_1, L_2, NULL);
		// P3dCommandDecal.Instance.SetLocation(position, endPosition, clip: clip);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_3 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___5_endPosition;
		bool L_6 = ___7_clip;
		NullCheck(L_3);
		P3dCommandDecal_SetLocation_m7C2C24334763D2D31D81587582987DE002AC4A80(L_3, L_4, L_5, (bool)1, L_6, NULL);
		// var worldSize     = HandleHitCommon(preview, pressure, seed, rotation);
		bool L_7 = ___0_preview;
		float L_8 = ___2_pressure;
		int32_t L_9 = ___3_seed;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___6_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = P3dPaintDecal_HandleHitCommon_m894B34920984CA60CA94456B1599B0E11139C70E(__this, L_7, L_8, L_9, L_10, NULL);
		// var worldRadius   = P3dCommon.GetRadius(worldSize, position, endPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___5_endPosition;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		float L_14;
		L_14 = P3dCommon_GetRadius_m0509B370DBED0B2B1F517D07B07D53609F60EB36(L_11, L_12, L_13, NULL);
		V_0 = L_14;
		// var worldPosition = P3dCommon.GetPosition(position, endPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___5_endPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = P3dCommon_GetPosition_m28F7E54170571CF9710164319DF7333497B85081(L_15, L_16, NULL);
		V_1 = L_17;
		// HandleMaskCommon(worldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		P3dPaintDecal_HandleMaskCommon_m8F1356622AE690DAA8ED9F7E17EB96AD3E1BCA24(__this, L_18, NULL);
		// P3dPaintableManager.SubmitAll(P3dCommandDecal.Instance, worldPosition, worldRadius, layers, group, targetModel, targetTexture);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_19 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		float L_21 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_22 = __this->___layers_4;
		int32_t L_23;
		L_23 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_22, NULL);
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_24 = __this->___group_6;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_25 = __this->___targetModel_5;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_26 = __this->___targetTexture_7;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dPaintableManager_SubmitAll_m534EE3CE5C2E8FDCADA006B3A8DBBB4BB44C8921(L_19, L_20, L_21, L_23, L_24, L_25, L_26, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::HandleHitTriangle(System.Boolean,System.Int32,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_HandleHitTriangle_m7E1F346B7AB479063525E55EF045CF167696C867 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_positionA, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_positionB, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_positionC, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___7_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// P3dCommandDecal.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_0 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		bool L_1 = ___0_preview;
		int32_t L_2 = ___1_priority;
		NullCheck(L_0);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_0, L_1, L_2, NULL);
		// P3dCommandDecal.Instance.SetLocation(positionA, positionB, positionC);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_3 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___4_positionA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___5_positionB;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___6_positionC;
		NullCheck(L_3);
		P3dCommandDecal_SetLocation_m237360949C68BD84F9D2C1186B9AFD8E4A15709D(L_3, L_4, L_5, L_6, (bool)1, NULL);
		// var worldSize     = HandleHitCommon(preview, pressure, seed, rotation);
		bool L_7 = ___0_preview;
		float L_8 = ___2_pressure;
		int32_t L_9 = ___3_seed;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___7_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = P3dPaintDecal_HandleHitCommon_m894B34920984CA60CA94456B1599B0E11139C70E(__this, L_7, L_8, L_9, L_10, NULL);
		// var worldRadius   = P3dCommon.GetRadius(worldSize, positionA, positionB, positionC);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___4_positionA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___5_positionB;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___6_positionC;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = P3dCommon_GetRadius_m17542CC3B98D4F91FEEFC096DC201903BA7667BA(L_11, L_12, L_13, L_14, NULL);
		V_0 = L_15;
		// var worldPosition = P3dCommon.GetPosition(positionA, positionB, positionC);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___4_positionA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___5_positionB;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___6_positionC;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = P3dCommon_GetPosition_mB234B0E65B008F26795293CC3AF75917B847C30F(L_16, L_17, L_18, NULL);
		V_1 = L_19;
		// HandleMaskCommon(worldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		P3dPaintDecal_HandleMaskCommon_m8F1356622AE690DAA8ED9F7E17EB96AD3E1BCA24(__this, L_20, NULL);
		// P3dPaintableManager.SubmitAll(P3dCommandDecal.Instance, worldPosition, worldRadius, layers, group, targetModel, targetTexture);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_21 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		float L_23 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_24 = __this->___layers_4;
		int32_t L_25;
		L_25 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_24, NULL);
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_26 = __this->___group_6;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_27 = __this->___targetModel_5;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_28 = __this->___targetTexture_7;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dPaintableManager_SubmitAll_m534EE3CE5C2E8FDCADA006B3A8DBBB4BB44C8921(L_21, L_22, L_23, L_25, L_26, L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::HandleHitQuad(System.Boolean,System.Int32,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_HandleHitQuad_mB48A39B8AD488169E9866154A61EAF3A5CC46B0B (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_endPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_endPosition2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___8_rotation, bool ___9_clip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// P3dCommandDecal.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_0 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		bool L_1 = ___0_preview;
		int32_t L_2 = ___1_priority;
		NullCheck(L_0);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_0, L_1, L_2, NULL);
		// P3dCommandDecal.Instance.SetLocation(position, endPosition, position2, endPosition2, clip: clip);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_3 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___5_endPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___6_position2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___7_endPosition2;
		bool L_8 = ___9_clip;
		NullCheck(L_3);
		P3dCommandDecal_SetLocation_mE63FBCAAB5442A5CD7DDC907DCB5307FB4A51497(L_3, L_4, L_5, L_6, L_7, (bool)1, L_8, NULL);
		// var worldSize     = HandleHitCommon(preview, pressure, seed, rotation);
		bool L_9 = ___0_preview;
		float L_10 = ___2_pressure;
		int32_t L_11 = ___3_seed;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___8_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = P3dPaintDecal_HandleHitCommon_m894B34920984CA60CA94456B1599B0E11139C70E(__this, L_9, L_10, L_11, L_12, NULL);
		// var worldRadius   = P3dCommon.GetRadius(worldSize, position, endPosition, position2, endPosition2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___5_endPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___6_position2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___7_endPosition2;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		float L_18;
		L_18 = P3dCommon_GetRadius_mDFB0FEFF736E8C181E21419B5BDED6BEDA4DAA1A(L_13, L_14, L_15, L_16, L_17, NULL);
		V_0 = L_18;
		// var worldPosition = P3dCommon.GetPosition(position, endPosition, position2, endPosition2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___5_endPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___6_position2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___7_endPosition2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = P3dCommon_GetPosition_mCA91024EE0AE627141C7380BCA19AD3F445A9B1B(L_19, L_20, L_21, L_22, NULL);
		V_1 = L_23;
		// HandleMaskCommon(worldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		P3dPaintDecal_HandleMaskCommon_m8F1356622AE690DAA8ED9F7E17EB96AD3E1BCA24(__this, L_24, NULL);
		// P3dPaintableManager.SubmitAll(P3dCommandDecal.Instance, worldPosition, worldRadius, layers, group, targetModel, targetTexture);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_25 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		float L_27 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_28 = __this->___layers_4;
		int32_t L_29;
		L_29 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_28, NULL);
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_30 = __this->___group_6;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_31 = __this->___targetModel_5;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_32 = __this->___targetTexture_7;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dPaintableManager_SubmitAll_m534EE3CE5C2E8FDCADA006B3A8DBBB4BB44C8921(L_25, L_26, L_27, L_29, L_30, L_31, L_32, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::HandleHitCoord(System.Boolean,System.Int32,System.Single,System.Int32,PaintIn3D.P3dHit,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_HandleHitCoord_m492EECBBE5422B8945811A36FDF0D4CF8416F6DB (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3 ___4_hit, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mA758582494F390A5B318A0F6458F342154337C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* V_0 = NULL;
	List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* V_1 = NULL;
	int32_t V_2 = 0;
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* V_3 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var model = hit.Transform.GetComponent<P3dModel>();
		P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3 L_0 = ___4_hit;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0.___Transform_7;
		NullCheck(L_1);
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_2;
		L_2 = Component_GetComponent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mA758582494F390A5B318A0F6458F342154337C24(L_1, Component_GetComponent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mA758582494F390A5B318A0F6458F342154337C24_RuntimeMethod_var);
		V_0 = L_2;
		// if (model != null)
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_00e6;
		}
	}
	{
		// var paintableTextures = P3dPaintableTexture.FilterAll(model, group);
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_5 = V_0;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_6 = __this->___group_6;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_7;
		L_7 = P3dPaintableTexture_FilterAll_m64EE096F71051A9D1445A209FFD79113DE7821B7(L_5, L_6, NULL);
		V_1 = L_7;
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_inline(L_8, List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_00df;
	}

IL_0034:
	{
		// var paintableTexture = paintableTextures[i];
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_12;
		L_12 = List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB(L_10, L_11, List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB_RuntimeMethod_var);
		V_3 = L_12;
		// var coord            = paintableTexture.GetCoord(ref hit);
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_13 = V_3;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = P3dPaintableTexture_GetCoord_m1F64F7344005358C423CF091B40760F89BE53BAF(L_13, (&___4_hit), NULL);
		V_4 = L_14;
		// if (modifiers != null && modifiers.Count > 0)
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_15 = __this->___modifiers_26;
		if (!L_15)
		{
			goto IL_0089;
		}
	}
	{
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_16 = __this->___modifiers_26;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = P3dModifierList_get_Count_mC0913A1BA1A125E0801BAD24BB4E30B9EE4FA381(L_16, NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// var position = (Vector3)coord;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_18, NULL);
		V_5 = L_19;
		// CwHelper.BeginSeed(seed);
		int32_t L_20 = ___3_seed;
		il2cpp_codegen_runtime_class_init_inline(CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		CwHelper_BeginSeed_m1D62CE23D4E0A2F8465AD3A2C07F276F5BE8CB55(L_20, NULL);
		// modifiers.ModifyPosition(ref position, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_21 = __this->___modifiers_26;
		bool L_22 = ___0_preview;
		float L_23 = ___2_pressure;
		NullCheck(L_21);
		P3dModifierList_ModifyPosition_mE88DC9807F94DAB7AF2C675E5260DBD0F4D02D45(L_21, (&V_5), L_22, L_23, NULL);
		// CwHelper.EndSeed();
		CwHelper_EndSeed_m4F4DA857C9212EE9E8471C1E27F57A036C98E2FC(NULL);
		// coord = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_24, NULL);
		V_4 = L_25;
	}

IL_0089:
	{
		// P3dCommandDecal.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_26 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		bool L_27 = ___0_preview;
		int32_t L_28 = ___1_priority;
		NullCheck(L_26);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_26, L_27, L_28, NULL);
		// P3dCommandDecal.Instance.SetLocation(coord, false);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_29 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_30, NULL);
		NullCheck(L_29);
		P3dCommandDecal_SetLocation_m4A9164297301A744B0FB27F121CA412ED2B59382(L_29, L_31, (bool)0, NULL);
		// HandleHitCommon(preview, pressure, seed, rotation);
		bool L_32 = ___0_preview;
		float L_33 = ___2_pressure;
		int32_t L_34 = ___3_seed;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = ___5_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = P3dPaintDecal_HandleHitCommon_m894B34920984CA60CA94456B1599B0E11139C70E(__this, L_32, L_33, L_34, L_35, NULL);
		// P3dCommandDecal.Instance.ClearMask();
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_37 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		NullCheck(L_37);
		P3dCommandDecal_ClearMask_m0C0CDDC43A49C57D23645961195FCA2965249E3E(L_37, NULL);
		// P3dCommandDecal.Instance.ApplyAspect(paintableTexture.Current);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_38 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_39 = V_3;
		NullCheck(L_39);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40;
		L_40 = P3dPaintableTexture_get_Current_m42C0BE96C6A74B703F1A64763F921D15752F5092_inline(L_39, NULL);
		NullCheck(L_38);
		P3dCommandDecal_ApplyAspect_mE7C305DFCF4B3F12A87761C7B220EF2556D39ACB(L_38, L_40, NULL);
		// P3dPaintableManager.Submit(P3dCommandDecal.Instance, model, paintableTexture);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_41 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_42 = V_0;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_43 = V_3;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* L_44;
		L_44 = P3dPaintableManager_Submit_m8AA1CBCFFF81BC4CC046875FC8CDEAECC4F87B38(L_41, L_42, L_43, NULL);
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
	}

IL_00df:
	{
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		int32_t L_46 = V_2;
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}

IL_00e6:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.P3dPaintDecal::HandleHitCommon(System.Boolean,System.Single,System.Int32,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dPaintDecal_HandleHitCommon_m894B34920984CA60CA94456B1599B0E11139C70E (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, bool ___0_preview, float ___1_pressure, int32_t ___2_seed, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_6 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// var finalOpacity  = opacity;
		float L_0 = __this->___opacity_13;
		V_0 = L_0;
		// var finalRadius   = radius;
		float L_1 = __this->___radius_16;
		V_1 = L_1;
		// var finalScale    = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___scale_15;
		V_2 = L_2;
		// var finalHardness = hardness;
		float L_3 = __this->___hardness_17;
		V_3 = L_3;
		// var finalColor    = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___color_12;
		V_4 = L_4;
		// var finalAngle    = angle;
		float L_5 = __this->___angle_14;
		V_5 = L_5;
		// var finalTexture  = texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = __this->___texture_9;
		V_6 = L_6;
		// var finalMatrix   = tileTransform != null ? tileTransform.localToWorldMatrix : Matrix4x4.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___tileTransform_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_0049;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		G_B3_0 = L_9;
		goto IL_0054;
	}

IL_0049:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___tileTransform_23;
		NullCheck(L_10);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_10, NULL);
		G_B3_0 = L_11;
	}

IL_0054:
	{
		V_7 = G_B3_0;
		// if (modifiers != null && modifiers.Count > 0)
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_12 = __this->___modifiers_26;
		if (!L_12)
		{
			goto IL_00e3;
		}
	}
	{
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_13 = __this->___modifiers_26;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = P3dModifierList_get_Count_mC0913A1BA1A125E0801BAD24BB4E30B9EE4FA381(L_13, NULL);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_00e3;
		}
	}
	{
		// CwHelper.BeginSeed(seed);
		int32_t L_15 = ___2_seed;
		il2cpp_codegen_runtime_class_init_inline(CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		CwHelper_BeginSeed_m1D62CE23D4E0A2F8465AD3A2C07F276F5BE8CB55(L_15, NULL);
		// modifiers.ModifyColor(ref finalColor, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_16 = __this->___modifiers_26;
		bool L_17 = ___0_preview;
		float L_18 = ___1_pressure;
		NullCheck(L_16);
		P3dModifierList_ModifyColor_m24E04F5E8C44A2AD3D655B1E901387614F0F0007(L_16, (&V_4), L_17, L_18, NULL);
		// modifiers.ModifyAngle(ref finalAngle, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_19 = __this->___modifiers_26;
		bool L_20 = ___0_preview;
		float L_21 = ___1_pressure;
		NullCheck(L_19);
		P3dModifierList_ModifyAngle_m27BF9DA495CF0495F9E5B8333312623FCD6A304B(L_19, (&V_5), L_20, L_21, NULL);
		// modifiers.ModifyOpacity(ref finalOpacity, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_22 = __this->___modifiers_26;
		bool L_23 = ___0_preview;
		float L_24 = ___1_pressure;
		NullCheck(L_22);
		P3dModifierList_ModifyOpacity_m009A957B6C46DC4134DB9BB02E2332AAF3DBED29(L_22, (&V_0), L_23, L_24, NULL);
		// modifiers.ModifyRadius(ref finalRadius, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_25 = __this->___modifiers_26;
		bool L_26 = ___0_preview;
		float L_27 = ___1_pressure;
		NullCheck(L_25);
		P3dModifierList_ModifyRadius_m69F2DD323E11F6C8B925E3E44E06ACE8F476C2FA(L_25, (&V_1), L_26, L_27, NULL);
		// modifiers.ModifyScale(ref finalScale, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_28 = __this->___modifiers_26;
		bool L_29 = ___0_preview;
		float L_30 = ___1_pressure;
		NullCheck(L_28);
		P3dModifierList_ModifyScale_m937E84324D420765732BFA252FC3A15DC311B039(L_28, (&V_2), L_29, L_30, NULL);
		// modifiers.ModifyHardness(ref finalHardness, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_31 = __this->___modifiers_26;
		bool L_32 = ___0_preview;
		float L_33 = ___1_pressure;
		NullCheck(L_31);
		P3dModifierList_ModifyHardness_mCD1382DD83C0AF549C0602056F890B9ECA0C169B(L_31, (&V_3), L_32, L_33, NULL);
		// modifiers.ModifyTexture(ref finalTexture, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_34 = __this->___modifiers_26;
		bool L_35 = ___0_preview;
		float L_36 = ___1_pressure;
		NullCheck(L_34);
		P3dModifierList_ModifyTexture_m07BB20EFADF9A9438BF8F2DD04CDFD92336B2D1E(L_34, (&V_6), L_35, L_36, NULL);
		// CwHelper.EndSeed();
		CwHelper_EndSeed_m4F4DA857C9212EE9E8471C1E27F57A036C98E2FC(NULL);
	}

IL_00e3:
	{
		// var finalAspect = P3dCommon.GetAspect(shape, finalTexture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_37 = __this->___shape_10;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_38 = V_6;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		float L_39;
		L_39 = P3dCommon_GetAspect_mB316C673163EA2E7EB0E9283BA2BF08FAE9AEBDC(L_37, L_38, NULL);
		V_8 = L_39;
		// var finalSize   = P3dCommon.ScaleAspect(finalScale * finalRadius, finalAspect);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_2;
		float L_41 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_40, L_41, NULL);
		float L_43 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = P3dCommon_ScaleAspect_m374333567B0CFB460700CE893D933FE58FAAB49D(L_42, L_43, NULL);
		V_9 = L_44;
		// P3dCommandDecal.Instance.SetShape(rotation, finalSize, finalAngle);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_45 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___3_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_9;
		float L_48 = V_5;
		NullCheck(L_45);
		P3dCommandDecal_SetShape_m85EDD24BC0A9D22103D329FAB4683F64F4B3178A(L_45, L_46, L_47, L_48, NULL);
		// P3dCommandDecal.Instance.SetMaterial(blendMode, finalTexture, shape, shapeChannel, finalHardness, wrapping, normalBack, normalFront, normalFade, finalColor, finalOpacity, tileTexture, finalMatrix, tileOpacity, tileTransition);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_49 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_50 = __this->___blendMode_8;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_51 = V_6;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_52 = __this->___shape_10;
		int32_t L_53 = __this->___shapeChannel_11;
		float L_54 = V_3;
		float L_55 = __this->___wrapping_18;
		float L_56 = __this->___normalBack_20;
		float L_57 = __this->___normalFront_19;
		float L_58 = __this->___normalFade_21;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = V_4;
		float L_60 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_61 = __this->___tileTexture_22;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_62 = V_7;
		float L_63 = __this->___tileOpacity_24;
		float L_64 = __this->___tileTransition_25;
		NullCheck(L_49);
		P3dCommandDecal_SetMaterial_m1A8A1B856120B87BB4EBE3BCB2FAF7F2CA52138F(L_49, L_50, L_51, L_52, L_53, L_54, L_55, L_56, L_57, L_58, L_59, L_60, L_61, L_62, L_63, L_64, NULL);
		// return finalSize;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_9;
		return L_65;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::HandleMaskCommon(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal_HandleMaskCommon_m8F1356622AE690DAA8ED9F7E17EB96AD3E1BCA24 (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* V_0 = NULL;
	{
		// var mask = P3dMask.Find(worldPosition, layers);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_worldPosition;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = __this->___layers_4;
		il2cpp_codegen_runtime_class_init_inline(P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A_il2cpp_TypeInfo_var);
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_2;
		L_2 = P3dMask_Find_m753253EEA4AB8C8658BB7549F8E7AC46C58A51B9(L_0, L_1, NULL);
		V_0 = L_2;
		// if (mask != null)
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// P3dCommandDecal.Instance.SetMask(mask.Matrix, mask.Texture, mask.Channel, mask.Stretch);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_5 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_6 = V_0;
		NullCheck(L_6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = P3dMask_get_Matrix_m65F5191E56B856F41C0ABFF11CC41E22C59C9836(L_6, NULL);
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_8 = V_0;
		NullCheck(L_8);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9;
		L_9 = P3dMask_get_Texture_m9C39FCD0317704F16992AB17FCDE674A530440CA_inline(L_8, NULL);
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = P3dMask_get_Channel_m39F9AADE2834AE09BDD6ACD19CFFF99F96CC04F3_inline(L_10, NULL);
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_12 = V_0;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = P3dMask_get_Stretch_m364B963C5C3509C111A5264B8654FA88BA55A22A_inline(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		NullCheck(L_5);
		P3dCommandDecal_SetMask_mF76334F6CA59DD148A5E562186CEFA18210F4050(L_5, L_7, L_9, L_11, L_14, NULL);
		return;
	}

IL_003e:
	{
		// P3dCommandDecal.Instance.ClearMask();
		il2cpp_codegen_runtime_class_init_inline(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var);
		P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66* L_15 = ((P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandDecal_tC13CA914131668F7D9174E291BDE4338D35B3C66_il2cpp_TypeInfo_var))->___Instance_38;
		NullCheck(L_15);
		P3dCommandDecal_ClearMask_m0C0CDDC43A49C57D23645961195FCA2965249E3E(L_15, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintDecal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintDecal__ctor_mA12FBD9453341B1E327217444177D54054DF18AA (P3dPaintDecal_t14FD593DD68628F1DACDB16E0624C4B6947F620A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LayerMask Layers { set { layers = value; } get { return layers; } } [SerializeField] private LayerMask layers = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->___layers_4 = L_0;
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_il2cpp_TypeInfo_var);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_2;
		L_2 = P3dBlendMode_AlphaBlend_mD0DD96D2ED070D215CBD8D2D0363E9DA8AC6938A(L_1, NULL);
		__this->___blendMode_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___blendMode_8))->___Texture_23), (void*)NULL);
		// public P3dChannel ShapeChannel { set { shapeChannel = value; } get { return shapeChannel; } } [SerializeField] private P3dChannel shapeChannel = P3dChannel.Alpha;
		__this->___shapeChannel_11 = 3;
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color_12 = L_3;
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		__this->___opacity_13 = (1.0f);
		// public Vector3 Scale { set { scale = value; } get { return scale; } } [SerializeField] private Vector3 scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___scale_15 = L_4;
		// public float Radius { set { radius = value; } get { return radius; } } [SerializeField] private float radius = 0.1f;
		__this->___radius_16 = (0.100000001f);
		// public float Hardness { set { hardness = value; } get { return hardness; } } [SerializeField] private float hardness = 3.0f;
		__this->___hardness_17 = (3.0f);
		// public float Wrapping { set { wrapping = value; } get { return wrapping; } } [SerializeField] [Range(0.0f, 1.0f)] private float wrapping = 1.0f;
		__this->___wrapping_18 = (1.0f);
		// public float NormalFront { set { normalFront = value; } get { return normalFront; } } [Range(0.0f, 2.0f)] [SerializeField] private float normalFront = 1.0f;
		__this->___normalFront_19 = (1.0f);
		// public float NormalFade { set { normalFade = value; } get { return normalFade; } } [Range(0.001f, 0.5f)] [SerializeField] private float normalFade = 0.01f;
		__this->___normalFade_21 = (0.00999999978f);
		// public float TileOpacity { set { tileOpacity = value; } get { return tileOpacity; } } [UnityEngine.Serialization.FormerlySerializedAs("tileBlend")] [Range(0.0f, 1.0f)] [SerializeField] private float tileOpacity = 1.0f;
		__this->___tileOpacity_24 = (1.0f);
		// public float TileTransition { set { tileTransition = value; } get { return tileTransition; } } [Range(1.0f, 200.0f)] [SerializeField] private float tileTransition = 4.0f;
		__this->___tileTransition_25 = (4.0f);
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
// System.Void PaintIn3D.P3dPaintFill::set_Group(PaintIn3D.P3dGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintFill_set_Group_mEFEF4615B409F5B477906EBC066FFB705309812C (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_0 = ___0_value;
		__this->___group_4 = L_0;
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		return;
	}
}
// PaintIn3D.P3dGroup PaintIn3D.P3dPaintFill::get_Group()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D P3dPaintFill_get_Group_m6736D5037704FD225904347FC723D5B79EDD1079 (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, const RuntimeMethod* method) 
{
	{
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_0 = __this->___group_4;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintFill::set_BlendMode(PaintIn3D.P3dBlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintFill_set_BlendMode_m990894DDCB74B7CA84300DA731E278CEFEA39B5E (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_0 = ___0_value;
		__this->___blendMode_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___blendMode_5))->___Texture_23), (void*)NULL);
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		return;
	}
}
// PaintIn3D.P3dBlendMode PaintIn3D.P3dPaintFill::get_BlendMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B P3dPaintFill_get_BlendMode_m57514148ACAD75E964B8022A1B5FC55CE65A9BDA (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, const RuntimeMethod* method) 
{
	{
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_0 = __this->___blendMode_5;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintFill::set_Texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintFill_set_Texture_m092122EA9A9893FAA5D4744B68E848E9B1C4483E (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___texture_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texture_6), (void*)L_0);
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.P3dPaintFill::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dPaintFill_get_Texture_m3013D1477CDBF64484E956329180B3EF9CE28FBB (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___texture_6;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintFill::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintFill_set_Color_m5A9285AEEF0BDAF2A824F05E4373B1A2E6E56279 (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___color_7 = L_0;
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		return;
	}
}
// UnityEngine.Color PaintIn3D.P3dPaintFill::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F P3dPaintFill_get_Color_mAD7F51F2CEDB317313C3E3C3B9F317AE9517A0B6 (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_7;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintFill::set_Opacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintFill_set_Opacity_m68DFD6DC09625169851ABBB7C1F8072E1C55406A (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		float L_0 = ___0_value;
		__this->___opacity_8 = L_0;
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintFill::get_Opacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintFill_get_Opacity_mC13B83AA7A7482A7357B19CC6DF47EB29115A4BA (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, const RuntimeMethod* method) 
{
	{
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		float L_0 = __this->___opacity_8;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintFill::set_Minimum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintFill_set_Minimum_m5F3BB36FD1E6FC9338AC49BBAFAB5D76BADC36A7 (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Minimum { set { minimum = value; } get { return minimum; } } [Range(0.0f, 1.0f)] [SerializeField] private float minimum;
		float L_0 = ___0_value;
		__this->___minimum_9 = L_0;
		// public float Minimum { set { minimum = value; } get { return minimum; } } [Range(0.0f, 1.0f)] [SerializeField] private float minimum;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintFill::get_Minimum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintFill_get_Minimum_mB5759195A54106091D9D465A4F099A2D6D993028 (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, const RuntimeMethod* method) 
{
	{
		// public float Minimum { set { minimum = value; } get { return minimum; } } [Range(0.0f, 1.0f)] [SerializeField] private float minimum;
		float L_0 = __this->___minimum_9;
		return L_0;
	}
}
// PaintIn3D.P3dModifierList PaintIn3D.P3dPaintFill::get_Modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* P3dPaintFill_get_Modifiers_m60DD0553D300D7F26FCACE6A088C960C6511EC50 (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_0 = __this->___modifiers_10;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_1 = (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1*)il2cpp_codegen_object_new(P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		P3dModifierList__ctor_m9D9D6E371B210CC03977BC98F8EB83EF70AED91E(L_1, NULL);
		__this->___modifiers_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modifiers_10), (void*)L_1);
	}

IL_0013:
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_2 = __this->___modifiers_10;
		return L_2;
	}
}
// System.Void PaintIn3D.P3dPaintFill::IncrementOpacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintFill_IncrementOpacity_m3C1CF41C7163AB55FF94CBD413CF1579F1A41FD7 (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, float ___0_delta, const RuntimeMethod* method) 
{
	{
		// opacity = Mathf.Clamp01(opacity + delta);
		float L_0 = __this->___opacity_8;
		float L_1 = ___0_delta;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(L_0, L_1)), NULL);
		__this->___opacity_8 = L_2;
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintFill::HandleHitCoord(System.Boolean,System.Int32,System.Single,System.Int32,PaintIn3D.P3dHit,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintFill_HandleHitCoord_mF814526F3D6451E42750F207CF93C14C0CE67652 (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3 ___4_hit, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_m7F8EB08BE51A75422DB909E7A5A7F035F136C720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* V_0 = NULL;
	List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_4 = NULL;
	int32_t V_5 = 0;
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* V_6 = NULL;
	{
		// var model = hit.Transform.GetComponentInParent<P3dModel>();
		P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3 L_0 = ___4_hit;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0.___Transform_7;
		NullCheck(L_1);
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_2;
		L_2 = Component_GetComponentInParent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_m7F8EB08BE51A75422DB909E7A5A7F035F136C720(L_1, Component_GetComponentInParent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_m7F8EB08BE51A75422DB909E7A5A7F035F136C720_RuntimeMethod_var);
		V_0 = L_2;
		// if (model != null)
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_00f2;
		}
	}
	{
		// var paintableTextures = P3dPaintableTexture.FilterAll(model, group);
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_5 = V_0;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_6 = __this->___group_4;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_7;
		L_7 = P3dPaintableTexture_FilterAll_m64EE096F71051A9D1445A209FFD79113DE7821B7(L_5, L_6, NULL);
		V_1 = L_7;
		// if (paintableTextures.Count > 0)
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_inline(L_8, List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00f2;
		}
	}
	{
		// var finalColor   = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___color_7;
		V_2 = L_10;
		// var finalOpacity = opacity;
		float L_11 = __this->___opacity_8;
		V_3 = L_11;
		// var finalTexture = texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12 = __this->___texture_6;
		V_4 = L_12;
		// if (modifiers != null && modifiers.Count > 0)
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_13 = __this->___modifiers_10;
		if (!L_13)
		{
			goto IL_0097;
		}
	}
	{
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_14 = __this->___modifiers_10;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = P3dModifierList_get_Count_mC0913A1BA1A125E0801BAD24BB4E30B9EE4FA381(L_14, NULL);
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		// CwHelper.BeginSeed(seed);
		int32_t L_16 = ___3_seed;
		il2cpp_codegen_runtime_class_init_inline(CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		CwHelper_BeginSeed_m1D62CE23D4E0A2F8465AD3A2C07F276F5BE8CB55(L_16, NULL);
		// modifiers.ModifyColor(ref finalColor, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_17 = __this->___modifiers_10;
		bool L_18 = ___0_preview;
		float L_19 = ___2_pressure;
		NullCheck(L_17);
		P3dModifierList_ModifyColor_m24E04F5E8C44A2AD3D655B1E901387614F0F0007(L_17, (&V_2), L_18, L_19, NULL);
		// modifiers.ModifyOpacity(ref finalOpacity, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_20 = __this->___modifiers_10;
		bool L_21 = ___0_preview;
		float L_22 = ___2_pressure;
		NullCheck(L_20);
		P3dModifierList_ModifyOpacity_m009A957B6C46DC4134DB9BB02E2332AAF3DBED29(L_20, (&V_3), L_21, L_22, NULL);
		// modifiers.ModifyTexture(ref finalTexture, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_23 = __this->___modifiers_10;
		bool L_24 = ___0_preview;
		float L_25 = ___2_pressure;
		NullCheck(L_23);
		P3dModifierList_ModifyTexture_m07BB20EFADF9A9438BF8F2DD04CDFD92336B2D1E(L_23, (&V_4), L_24, L_25, NULL);
		// CwHelper.EndSeed();
		CwHelper_EndSeed_m4F4DA857C9212EE9E8471C1E27F57A036C98E2FC(NULL);
	}

IL_0097:
	{
		// P3dCommandFill.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var);
		P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B* L_26 = ((P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var))->___Instance_16;
		bool L_27 = ___0_preview;
		int32_t L_28 = ___1_priority;
		NullCheck(L_26);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_26, L_27, L_28, NULL);
		// P3dCommandFill.Instance.SetMaterial(blendMode, finalTexture, finalColor, opacity, minimum);
		P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B* L_29 = ((P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var))->___Instance_16;
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_30 = __this->___blendMode_5;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_31 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = V_2;
		float L_33 = __this->___opacity_8;
		float L_34 = __this->___minimum_9;
		NullCheck(L_29);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = P3dCommandFill_SetMaterial_mDE9A1A795A2D1156C3854F862B086A640F770A71(L_29, L_30, L_31, L_32, L_33, L_34, NULL);
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_inline(L_36, List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		goto IL_00ed;
	}

IL_00cf:
	{
		// var paintableTexture = paintableTextures[i];
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_38 = V_1;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_40;
		L_40 = List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB(L_38, L_39, List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB_RuntimeMethod_var);
		V_6 = L_40;
		// P3dPaintableManager.Submit(P3dCommandFill.Instance, model, paintableTexture);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var);
		P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B* L_41 = ((P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandFill_tA4E0C9D3CBF8047AEB118DC06D4F669875D8392B_il2cpp_TypeInfo_var))->___Instance_16;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_42 = V_0;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_43 = V_6;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* L_44;
		L_44 = P3dPaintableManager_Submit_m8AA1CBCFFF81BC4CC046875FC8CDEAECC4F87B38(L_41, L_42, L_43, NULL);
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
	}

IL_00ed:
	{
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_00cf;
		}
	}

IL_00f2:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintFill::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintFill__ctor_m4FCEE60665BBAE0BDA38EE1454C1F6A1AD56F97D (P3dPaintFill_t120A394D64D5859B2810F3142B70B562820E3E0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_il2cpp_TypeInfo_var);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_1;
		L_1 = P3dBlendMode_AlphaBlend_mD0DD96D2ED070D215CBD8D2D0363E9DA8AC6938A(L_0, NULL);
		__this->___blendMode_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___blendMode_5))->___Texture_23), (void*)NULL);
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color_7 = L_2;
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		__this->___opacity_8 = (1.0f);
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
// System.Void PaintIn3D.P3dPaintReplace::set_Group(PaintIn3D.P3dGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplace_set_Group_mC70F047896A3DDB1E57D5F93ABF2454E02CAE05C (P3dPaintReplace_t208CAABC9FCB9A35AE5113B48D8404ADC328097B* __this, P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_0 = ___0_value;
		__this->___group_4 = L_0;
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		return;
	}
}
// PaintIn3D.P3dGroup PaintIn3D.P3dPaintReplace::get_Group()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D P3dPaintReplace_get_Group_mA672D094C939648F33AC8C2D23E0F4785C79A0CE (P3dPaintReplace_t208CAABC9FCB9A35AE5113B48D8404ADC328097B* __this, const RuntimeMethod* method) 
{
	{
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_0 = __this->___group_4;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintReplace::set_Texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplace_set_Texture_m247CC27516F3C409E76E10010526AD1E8D18A80B (P3dPaintReplace_t208CAABC9FCB9A35AE5113B48D8404ADC328097B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___texture_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texture_5), (void*)L_0);
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.P3dPaintReplace::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dPaintReplace_get_Texture_m1EA8E3F1A18044707300E445406CCEF6E8D12038 (P3dPaintReplace_t208CAABC9FCB9A35AE5113B48D8404ADC328097B* __this, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___texture_5;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintReplace::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplace_set_Color_m5A546B04849997A6F01D80BFEC757AF22E2CC2EC (P3dPaintReplace_t208CAABC9FCB9A35AE5113B48D8404ADC328097B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___color_6 = L_0;
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		return;
	}
}
// UnityEngine.Color PaintIn3D.P3dPaintReplace::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F P3dPaintReplace_get_Color_m3F9F4C734B76622909984403D8D10B1EDB2F5C98 (P3dPaintReplace_t208CAABC9FCB9A35AE5113B48D8404ADC328097B* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_6;
		return L_0;
	}
}
// PaintIn3D.P3dModifierList PaintIn3D.P3dPaintReplace::get_Modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* P3dPaintReplace_get_Modifiers_mEE39802C462B82244EFADE3B4F3351F2BA712F9A (P3dPaintReplace_t208CAABC9FCB9A35AE5113B48D8404ADC328097B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_0 = __this->___modifiers_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_1 = (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1*)il2cpp_codegen_object_new(P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		P3dModifierList__ctor_m9D9D6E371B210CC03977BC98F8EB83EF70AED91E(L_1, NULL);
		__this->___modifiers_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modifiers_7), (void*)L_1);
	}

IL_0013:
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_2 = __this->___modifiers_7;
		return L_2;
	}
}
// System.Void PaintIn3D.P3dPaintReplace::HandleHitCoord(System.Boolean,System.Int32,System.Single,System.Int32,PaintIn3D.P3dHit,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplace_HandleHitCoord_m6BEC6088BAF3B512C74B1BB03C30FDB78E8FA775 (P3dPaintReplace_t208CAABC9FCB9A35AE5113B48D8404ADC328097B* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3 ___4_hit, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_m7F8EB08BE51A75422DB909E7A5A7F035F136C720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* V_0 = NULL;
	List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_3 = NULL;
	int32_t V_4 = 0;
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* V_5 = NULL;
	{
		// var model = hit.Transform.GetComponentInParent<P3dModel>();
		P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3 L_0 = ___4_hit;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0.___Transform_7;
		NullCheck(L_1);
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_2;
		L_2 = Component_GetComponentInParent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_m7F8EB08BE51A75422DB909E7A5A7F035F136C720(L_1, Component_GetComponentInParent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_m7F8EB08BE51A75422DB909E7A5A7F035F136C720_RuntimeMethod_var);
		V_0 = L_2;
		// if (model != null)
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_00c8;
		}
	}
	{
		// var paintableTextures = P3dPaintableTexture.FilterAll(model, group);
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_5 = V_0;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_6 = __this->___group_4;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_7;
		L_7 = P3dPaintableTexture_FilterAll_m64EE096F71051A9D1445A209FFD79113DE7821B7(L_5, L_6, NULL);
		V_1 = L_7;
		// if (paintableTextures.Count > 0)
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_inline(L_8, List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		// var finalColor   = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___color_6;
		V_2 = L_10;
		// var finalTexture = texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = __this->___texture_5;
		V_3 = L_11;
		// if (modifiers != null && modifiers.Count > 0)
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_12 = __this->___modifiers_7;
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_13 = __this->___modifiers_7;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = P3dModifierList_get_Count_mC0913A1BA1A125E0801BAD24BB4E30B9EE4FA381(L_13, NULL);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0080;
		}
	}
	{
		// CwHelper.BeginSeed(seed);
		int32_t L_15 = ___3_seed;
		il2cpp_codegen_runtime_class_init_inline(CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		CwHelper_BeginSeed_m1D62CE23D4E0A2F8465AD3A2C07F276F5BE8CB55(L_15, NULL);
		// modifiers.ModifyColor(ref finalColor, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_16 = __this->___modifiers_7;
		bool L_17 = ___0_preview;
		float L_18 = ___2_pressure;
		NullCheck(L_16);
		P3dModifierList_ModifyColor_m24E04F5E8C44A2AD3D655B1E901387614F0F0007(L_16, (&V_2), L_17, L_18, NULL);
		// modifiers.ModifyTexture(ref finalTexture, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_19 = __this->___modifiers_7;
		bool L_20 = ___0_preview;
		float L_21 = ___2_pressure;
		NullCheck(L_19);
		P3dModifierList_ModifyTexture_m07BB20EFADF9A9438BF8F2DD04CDFD92336B2D1E(L_19, (&V_3), L_20, L_21, NULL);
		// CwHelper.EndSeed();
		CwHelper_EndSeed_m4F4DA857C9212EE9E8471C1E27F57A036C98E2FC(NULL);
	}

IL_0080:
	{
		// P3dCommandReplace.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var);
		P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E* L_22 = ((P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var))->___Instance_13;
		bool L_23 = ___0_preview;
		int32_t L_24 = ___1_priority;
		NullCheck(L_22);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_22, L_23, L_24, NULL);
		// P3dCommandReplace.Instance.SetMaterial(finalTexture, finalColor);
		P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E* L_25 = ((P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var))->___Instance_13;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_26 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = V_2;
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28;
		L_28 = P3dCommandReplace_SetMaterial_m42618C4F539ABA6405A90C3D67BDF7AA537B84B9(L_25, L_26, L_27, NULL);
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_inline(L_29, List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		goto IL_00c3;
	}

IL_00a5:
	{
		// var paintableTexture = paintableTextures[i];
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_31 = V_1;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_33;
		L_33 = List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB(L_31, L_32, List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB_RuntimeMethod_var);
		V_5 = L_33;
		// P3dPaintableManager.Submit(P3dCommandReplace.Instance, model, paintableTexture);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var);
		P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E* L_34 = ((P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandReplace_t79651DC85DCC1B685A6388EA6B4045445EB9E08E_il2cpp_TypeInfo_var))->___Instance_13;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_35 = V_0;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_36 = V_5;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* L_37;
		L_37 = P3dPaintableManager_Submit_m8AA1CBCFFF81BC4CC046875FC8CDEAECC4F87B38(L_34, L_35, L_36, NULL);
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_00c3:
	{
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintReplace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplace__ctor_mD1050CA88B55831DB0DC4C404D6038373EEA9CE0 (P3dPaintReplace_t208CAABC9FCB9A35AE5113B48D8404ADC328097B* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color_6 = L_0;
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
// System.Void PaintIn3D.P3dPaintReplaceChannels::set_Group(PaintIn3D.P3dGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplaceChannels_set_Group_m0F9CE38E29681571FEA8586008AF1B38188E3455 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_0 = ___0_value;
		__this->___group_4 = L_0;
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		return;
	}
}
// PaintIn3D.P3dGroup PaintIn3D.P3dPaintReplaceChannels::get_Group()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D P3dPaintReplaceChannels_get_Group_mDB1DC30AD80E6AD51D58A65AA96B419EDD253C36 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, const RuntimeMethod* method) 
{
	{
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_0 = __this->___group_4;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintReplaceChannels::set_TextureR(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplaceChannels_set_TextureR_m2D3A0135B8EE12D351E5C8C3FBF8E0F71F802FFA (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Texture TextureR { set { textureR = value; } get { return textureR; } } [SerializeField] private Texture textureR;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___textureR_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textureR_5), (void*)L_0);
		// public Texture TextureR { set { textureR = value; } get { return textureR; } } [SerializeField] private Texture textureR;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.P3dPaintReplaceChannels::get_TextureR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dPaintReplaceChannels_get_TextureR_m2610C5EF3F2E2560A2D1D0B19C389DD4A0A83279 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, const RuntimeMethod* method) 
{
	{
		// public Texture TextureR { set { textureR = value; } get { return textureR; } } [SerializeField] private Texture textureR;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___textureR_5;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintReplaceChannels::set_TextureG(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplaceChannels_set_TextureG_m42AA72F53FF8E5812860C7FFCDDC8754866B10CB (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Texture TextureG { set { textureG = value; } get { return textureG; } } [SerializeField] private Texture textureG;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___textureG_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textureG_6), (void*)L_0);
		// public Texture TextureG { set { textureG = value; } get { return textureG; } } [SerializeField] private Texture textureG;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.P3dPaintReplaceChannels::get_TextureG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dPaintReplaceChannels_get_TextureG_m502BD48F50951C61DB4BD61FEE2BFF45331340C6 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, const RuntimeMethod* method) 
{
	{
		// public Texture TextureG { set { textureG = value; } get { return textureG; } } [SerializeField] private Texture textureG;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___textureG_6;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintReplaceChannels::set_TextureB(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplaceChannels_set_TextureB_m77A9D67CCD804FD26511D788E8DEF4131BB91016 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Texture TextureB { set { textureB = value; } get { return textureB; } } [SerializeField] private Texture textureB;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___textureB_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textureB_7), (void*)L_0);
		// public Texture TextureB { set { textureB = value; } get { return textureB; } } [SerializeField] private Texture textureB;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.P3dPaintReplaceChannels::get_TextureB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dPaintReplaceChannels_get_TextureB_mC3A0D5C09B1D211CCB57F38B7CD8638212E6549E (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, const RuntimeMethod* method) 
{
	{
		// public Texture TextureB { set { textureB = value; } get { return textureB; } } [SerializeField] private Texture textureB;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___textureB_7;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintReplaceChannels::set_TextureA(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplaceChannels_set_TextureA_m6879791B29689A358D76E4ACC0EEEFC78634811F (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Texture TextureA { set { textureA = value; } get { return textureA; } } [SerializeField] private Texture textureA;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___textureA_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textureA_8), (void*)L_0);
		// public Texture TextureA { set { textureA = value; } get { return textureA; } } [SerializeField] private Texture textureA;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.P3dPaintReplaceChannels::get_TextureA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dPaintReplaceChannels_get_TextureA_mD97B8C70CCA00C029580B194358F379D860FB253 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, const RuntimeMethod* method) 
{
	{
		// public Texture TextureA { set { textureA = value; } get { return textureA; } } [SerializeField] private Texture textureA;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___textureA_8;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintReplaceChannels::set_ChannelR(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplaceChannels_set_ChannelR_m4EA7E7B234C8CDD82AA0361EEA869BCEF5EFD470 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector4 ChannelR { set { channelR = value; } get { return channelR; } } [SerializeField] private Vector4 channelR = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		__this->___channelR_9 = L_0;
		// public Vector4 ChannelR { set { channelR = value; } get { return channelR; } } [SerializeField] private Vector4 channelR = new Vector4(1, 0, 0, 0);
		return;
	}
}
// UnityEngine.Vector4 PaintIn3D.P3dPaintReplaceChannels::get_ChannelR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 P3dPaintReplaceChannels_get_ChannelR_m44A61CCDBBE0C5CD61CF56D50CB84602431115F1 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, const RuntimeMethod* method) 
{
	{
		// public Vector4 ChannelR { set { channelR = value; } get { return channelR; } } [SerializeField] private Vector4 channelR = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->___channelR_9;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintReplaceChannels::set_ChannelG(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplaceChannels_set_ChannelG_m9AF5FCCB0D6DD73D2C48013966C6FB40534B4CB3 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector4 ChannelG { set { channelR = value; } get { return channelG; } } [SerializeField] private Vector4 channelG = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		__this->___channelR_9 = L_0;
		// public Vector4 ChannelG { set { channelR = value; } get { return channelG; } } [SerializeField] private Vector4 channelG = new Vector4(1, 0, 0, 0);
		return;
	}
}
// UnityEngine.Vector4 PaintIn3D.P3dPaintReplaceChannels::get_ChannelG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 P3dPaintReplaceChannels_get_ChannelG_mB10F468494F656FC7F27344702B9C4A16F71D4FC (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, const RuntimeMethod* method) 
{
	{
		// public Vector4 ChannelG { set { channelR = value; } get { return channelG; } } [SerializeField] private Vector4 channelG = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->___channelG_10;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintReplaceChannels::set_ChannelB(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplaceChannels_set_ChannelB_m4F9BA41351455DF3BA0AF55E65C940EA97FB5338 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector4 ChannelB { set { channelR = value; } get { return channelB; } } [SerializeField] private Vector4 channelB = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		__this->___channelR_9 = L_0;
		// public Vector4 ChannelB { set { channelR = value; } get { return channelB; } } [SerializeField] private Vector4 channelB = new Vector4(1, 0, 0, 0);
		return;
	}
}
// UnityEngine.Vector4 PaintIn3D.P3dPaintReplaceChannels::get_ChannelB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 P3dPaintReplaceChannels_get_ChannelB_mBDD50C952CDC9622463B3EBDE829B665943D282B (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, const RuntimeMethod* method) 
{
	{
		// public Vector4 ChannelB { set { channelR = value; } get { return channelB; } } [SerializeField] private Vector4 channelB = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->___channelB_11;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintReplaceChannels::set_ChannelA(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplaceChannels_set_ChannelA_m4DBEA59A799C054DB1A7C6E1B397C12E79B053BE (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector4 ChannelA { set { channelR = value; } get { return channelA; } } [SerializeField] private Vector4 channelA = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		__this->___channelR_9 = L_0;
		// public Vector4 ChannelA { set { channelR = value; } get { return channelA; } } [SerializeField] private Vector4 channelA = new Vector4(1, 0, 0, 0);
		return;
	}
}
// UnityEngine.Vector4 PaintIn3D.P3dPaintReplaceChannels::get_ChannelA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 P3dPaintReplaceChannels_get_ChannelA_m2114242ED36B46DC5952E1AFBD191139C4E1E94A (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, const RuntimeMethod* method) 
{
	{
		// public Vector4 ChannelA { set { channelR = value; } get { return channelA; } } [SerializeField] private Vector4 channelA = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->___channelA_12;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintReplaceChannels::HandleHitCoord(System.Boolean,System.Int32,System.Single,System.Int32,PaintIn3D.P3dHit,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplaceChannels_HandleHitCoord_m641598AC2104FDA27B81993519B660204B3E5AC6 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3 ___4_hit, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_m7F8EB08BE51A75422DB909E7A5A7F035F136C720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* V_0 = NULL;
	List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* V_1 = NULL;
	int32_t V_2 = 0;
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* V_3 = NULL;
	{
		// var model = hit.Transform.GetComponentInParent<P3dModel>();
		P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3 L_0 = ___4_hit;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0.___Transform_7;
		NullCheck(L_1);
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_2;
		L_2 = Component_GetComponentInParent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_m7F8EB08BE51A75422DB909E7A5A7F035F136C720(L_1, Component_GetComponentInParent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_m7F8EB08BE51A75422DB909E7A5A7F035F136C720_RuntimeMethod_var);
		V_0 = L_2;
		// if (model != null)
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_009e;
		}
	}
	{
		// var paintableTextures = P3dPaintableTexture.FilterAll(model, group);
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_5 = V_0;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_6 = __this->___group_4;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_7;
		L_7 = P3dPaintableTexture_FilterAll_m64EE096F71051A9D1445A209FFD79113DE7821B7(L_5, L_6, NULL);
		V_1 = L_7;
		// if (paintableTextures.Count > 0)
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_inline(L_8, List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_009e;
		}
	}
	{
		// P3dCommandReplaceChannels.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4_il2cpp_TypeInfo_var);
		P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4* L_10 = ((P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4_il2cpp_TypeInfo_var))->___Instance_19;
		bool L_11 = ___0_preview;
		int32_t L_12 = ___1_priority;
		NullCheck(L_10);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_10, L_11, L_12, NULL);
		// P3dCommandReplaceChannels.Instance.SetMaterial(textureR, textureG, textureB, textureA, channelR, channelG, channelB, channelA);
		P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4* L_13 = ((P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4_il2cpp_TypeInfo_var))->___Instance_19;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_14 = __this->___textureR_5;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_15 = __this->___textureG_6;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_16 = __this->___textureB_7;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17 = __this->___textureA_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18 = __this->___channelR_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = __this->___channelG_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = __this->___channelB_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = __this->___channelA_12;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22;
		L_22 = P3dCommandReplaceChannels_SetMaterial_mEC5CA9ED2B2B6F3D50CCBBE2A29E02BD4353C027(L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_inline(L_23, List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		goto IL_009a;
	}

IL_0081:
	{
		// var paintableTexture = paintableTextures[i];
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_25 = V_1;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_27;
		L_27 = List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB(L_25, L_26, List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB_RuntimeMethod_var);
		V_3 = L_27;
		// P3dPaintableManager.Submit(P3dCommandReplaceChannels.Instance, model, paintableTexture);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4_il2cpp_TypeInfo_var);
		P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4* L_28 = ((P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandReplaceChannels_tDCC2EE81FA2493FDCF198858E1ABC85F383222E4_il2cpp_TypeInfo_var))->___Instance_19;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_29 = V_0;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_30 = V_3;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* L_31;
		L_31 = P3dPaintableManager_Submit_m8AA1CBCFFF81BC4CC046875FC8CDEAECC4F87B38(L_28, L_29, L_30, NULL);
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
	}

IL_009a:
	{
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		int32_t L_33 = V_2;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintReplaceChannels::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintReplaceChannels__ctor_mE93FCD9EC95FC7226DAB6E71C1D0378C80E744B0 (P3dPaintReplaceChannels_t8C01242F2C9E0D4D8FA35040B095EE7F54BB3520* __this, const RuntimeMethod* method) 
{
	{
		// public Vector4 ChannelR { set { channelR = value; } get { return channelR; } } [SerializeField] private Vector4 channelR = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_0), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___channelR_9 = L_0;
		// public Vector4 ChannelG { set { channelR = value; } get { return channelG; } } [SerializeField] private Vector4 channelG = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_1), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___channelG_10 = L_1;
		// public Vector4 ChannelB { set { channelR = value; } get { return channelB; } } [SerializeField] private Vector4 channelB = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_2), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___channelB_11 = L_2;
		// public Vector4 ChannelA { set { channelR = value; } get { return channelA; } } [SerializeField] private Vector4 channelA = new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_3), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___channelA_12 = L_3;
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
// System.Void PaintIn3D.P3dPaintSphere::set_Layers(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_Layers_m3354A7A428EC423D1BBA33D677152F64E6288031 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_value, const RuntimeMethod* method) 
{
	{
		// public LayerMask Layers { set { layers = value; } get { return layers; } } [SerializeField] private LayerMask layers = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___0_value;
		__this->___layers_4 = L_0;
		// public LayerMask Layers { set { layers = value; } get { return layers; } } [SerializeField] private LayerMask layers = -1;
		return;
	}
}
// UnityEngine.LayerMask PaintIn3D.P3dPaintSphere::get_Layers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB P3dPaintSphere_get_Layers_m9D6B8DC39A0E52D4996E2F6BE0FB4288A5795D3D (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public LayerMask Layers { set { layers = value; } get { return layers; } } [SerializeField] private LayerMask layers = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___layers_4;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_Group(PaintIn3D.P3dGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_Group_mA158483C509130B8813E2987B9B1570305A08A98 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_0 = ___0_value;
		__this->___group_5 = L_0;
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		return;
	}
}
// PaintIn3D.P3dGroup PaintIn3D.P3dPaintSphere::get_Group()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D P3dPaintSphere_get_Group_m64C8EFEE46F93823035978C798BD6A1FD229C91B (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public P3dGroup Group { set { group = value; } get { return group; } } [SerializeField] private P3dGroup group;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_0 = __this->___group_5;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_TargetModel(PaintIn3D.P3dModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_TargetModel_m118876AD01E699E91AFD2A1F17B9156780F10785 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dModel TargetModel { set { targetModel = value; } get { return targetModel; } } [SerializeField] private P3dModel targetModel;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_0 = ___0_value;
		__this->___targetModel_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetModel_6), (void*)L_0);
		// public P3dModel TargetModel { set { targetModel = value; } get { return targetModel; } } [SerializeField] private P3dModel targetModel;
		return;
	}
}
// PaintIn3D.P3dModel PaintIn3D.P3dPaintSphere::get_TargetModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* P3dPaintSphere_get_TargetModel_mE0417C44563692BAF06A4745841049AC77D873E7 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public P3dModel TargetModel { set { targetModel = value; } get { return targetModel; } } [SerializeField] private P3dModel targetModel;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_0 = __this->___targetModel_6;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_TargetTexture(PaintIn3D.P3dPaintableTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_TargetTexture_mB6FDE31D497835E5670F32A206AD3161B0882272 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dPaintableTexture TargetTexture { set { targetTexture = value; } get { return targetTexture; } } [SerializeField] private P3dPaintableTexture targetTexture;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_0 = ___0_value;
		__this->___targetTexture_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetTexture_7), (void*)L_0);
		// public P3dPaintableTexture TargetTexture { set { targetTexture = value; } get { return targetTexture; } } [SerializeField] private P3dPaintableTexture targetTexture;
		return;
	}
}
// PaintIn3D.P3dPaintableTexture PaintIn3D.P3dPaintSphere::get_TargetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* P3dPaintSphere_get_TargetTexture_m3419A4267B6F6DF1A37E263813EC7A9E23F6FFDE (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public P3dPaintableTexture TargetTexture { set { targetTexture = value; } get { return targetTexture; } } [SerializeField] private P3dPaintableTexture targetTexture;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_0 = __this->___targetTexture_7;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_BlendMode(PaintIn3D.P3dBlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_BlendMode_mCC08300C398796C438E0761A023D648C12E38520 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B ___0_value, const RuntimeMethod* method) 
{
	{
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_0 = ___0_value;
		__this->___blendMode_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___blendMode_8))->___Texture_23), (void*)NULL);
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		return;
	}
}
// PaintIn3D.P3dBlendMode PaintIn3D.P3dPaintSphere::get_BlendMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B P3dPaintSphere_get_BlendMode_m82EABBF6B6219F7DF181553E8BAFE0E30D45FDBD (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_0 = __this->___blendMode_8;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_Color_m8A5FA168518606D6C41D81C23F8382B76A529096 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___color_9 = L_0;
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		return;
	}
}
// UnityEngine.Color PaintIn3D.P3dPaintSphere::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F P3dPaintSphere_get_Color_mD410203083AE05E8D7BB089F949E1875098B140F (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_9;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_Opacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_Opacity_mEFAECB5E4790E336D3FE2758C7F98AFA82245719 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		float L_0 = ___0_value;
		__this->___opacity_10 = L_0;
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintSphere::get_Opacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintSphere_get_Opacity_m6B044FD635C7ED36685EBB50A49BB8943F461B39 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		float L_0 = __this->___opacity_10;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_Angle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_Angle_m667C9451A6D55E2134E09B66223AA8B0CB1C5261 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Angle { set { angle = value; } get { return angle; } } [Range(-180.0f, 180.0f)] [SerializeField] private float angle;
		float L_0 = ___0_value;
		__this->___angle_11 = L_0;
		// public float Angle { set { angle = value; } get { return angle; } } [Range(-180.0f, 180.0f)] [SerializeField] private float angle;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintSphere::get_Angle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintSphere_get_Angle_m3F84761012A7724976471E227AD1F4C0051F67CA (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public float Angle { set { angle = value; } get { return angle; } } [Range(-180.0f, 180.0f)] [SerializeField] private float angle;
		float L_0 = __this->___angle_11;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_Scale_mBD73B9B5FF693D439220577D657168C470DA35EB (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Scale { set { scale = value; } get { return scale; } } [SerializeField] private Vector3 scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___scale_12 = L_0;
		// public Vector3 Scale { set { scale = value; } get { return scale; } } [SerializeField] private Vector3 scale = Vector3.one;
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.P3dPaintSphere::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dPaintSphere_get_Scale_m57417BA84E9A244DB7F51C8B67748BBF57F29BDD (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Scale { set { scale = value; } get { return scale; } } [SerializeField] private Vector3 scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___scale_12;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_Radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_Radius_m328FEE7CC3DE50F6F51D7EE396F7D50E47D8A44F (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Radius { set { radius = value; } get { return radius; } } [SerializeField] private float radius = 0.1f;
		float L_0 = ___0_value;
		__this->___radius_13 = L_0;
		// public float Radius { set { radius = value; } get { return radius; } } [SerializeField] private float radius = 0.1f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintSphere::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintSphere_get_Radius_m1164EC99A3FE575AE08F228A88FB5F72B99CB9D1 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public float Radius { set { radius = value; } get { return radius; } } [SerializeField] private float radius = 0.1f;
		float L_0 = __this->___radius_13;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_Hardness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_Hardness_m8A127F3CD8A55FA6913FC2B52513D9A601576535 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Hardness { set { hardness = value; } get { return hardness; } } [SerializeField] private float hardness = 5.0f;
		float L_0 = ___0_value;
		__this->___hardness_14 = L_0;
		// public float Hardness { set { hardness = value; } get { return hardness; } } [SerializeField] private float hardness = 5.0f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintSphere::get_Hardness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintSphere_get_Hardness_m3F801750E1EF0BB7CE660B4AFEEB0A359C962561 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public float Hardness { set { hardness = value; } get { return hardness; } } [SerializeField] private float hardness = 5.0f;
		float L_0 = __this->___hardness_14;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_TileTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_TileTexture_m365392D8C32A034288E9C45E22CE0BF4DA388D89 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Texture TileTexture { set { tileTexture = value; } get { return tileTexture; } } [SerializeField] private Texture tileTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___tileTexture_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tileTexture_15), (void*)L_0);
		// public Texture TileTexture { set { tileTexture = value; } get { return tileTexture; } } [SerializeField] private Texture tileTexture;
		return;
	}
}
// UnityEngine.Texture PaintIn3D.P3dPaintSphere::get_TileTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dPaintSphere_get_TileTexture_m7C05AF68101DE468EE4349D7A09026AC16BB5C5E (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public Texture TileTexture { set { tileTexture = value; } get { return tileTexture; } } [SerializeField] private Texture tileTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___tileTexture_15;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_TileTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_TileTransform_mB8D16557C9569FBB4C7AAE6D650242D18BF8238B (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform TileTransform { set { tileTransform = value; } get { return tileTransform; } } [SerializeField] private Transform tileTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___tileTransform_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tileTransform_16), (void*)L_0);
		// public Transform TileTransform { set { tileTransform = value; } get { return tileTransform; } } [SerializeField] private Transform tileTransform;
		return;
	}
}
// UnityEngine.Transform PaintIn3D.P3dPaintSphere::get_TileTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* P3dPaintSphere_get_TileTransform_m61F69E723795E8074BC735BFD27101ADFCFB1567 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public Transform TileTransform { set { tileTransform = value; } get { return tileTransform; } } [SerializeField] private Transform tileTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___tileTransform_16;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_TileOpacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_TileOpacity_m1271646818302401EDA05B583FA8DA7F59B839F8 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float TileOpacity { set { tileOpacity = value; } get { return tileOpacity; } } [UnityEngine.Serialization.FormerlySerializedAs("tileBlend")] [Range(0.0f, 1.0f)] [SerializeField] private float tileOpacity = 1.0f;
		float L_0 = ___0_value;
		__this->___tileOpacity_17 = L_0;
		// public float TileOpacity { set { tileOpacity = value; } get { return tileOpacity; } } [UnityEngine.Serialization.FormerlySerializedAs("tileBlend")] [Range(0.0f, 1.0f)] [SerializeField] private float tileOpacity = 1.0f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintSphere::get_TileOpacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintSphere_get_TileOpacity_m96AABF7555A5A2EEA8FBF9B271588637EA95F11B (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public float TileOpacity { set { tileOpacity = value; } get { return tileOpacity; } } [UnityEngine.Serialization.FormerlySerializedAs("tileBlend")] [Range(0.0f, 1.0f)] [SerializeField] private float tileOpacity = 1.0f;
		float L_0 = __this->___tileOpacity_17;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::set_TileTransition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_set_TileTransition_m74B0CE3834C6AEF76B856674D8FAC1B9B4FFFB3D (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float TileTransition { set { tileTransition = value; } get { return tileTransition; } } [Range(1.0f, 200.0f)] [SerializeField] private float tileTransition = 4.0f;
		float L_0 = ___0_value;
		__this->___tileTransition_18 = L_0;
		// public float TileTransition { set { tileTransition = value; } get { return tileTransition; } } [Range(1.0f, 200.0f)] [SerializeField] private float tileTransition = 4.0f;
		return;
	}
}
// System.Single PaintIn3D.P3dPaintSphere::get_TileTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPaintSphere_get_TileTransition_m152EB8D19E0016D43D2D794BEA615CB5D9C0AD85 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public float TileTransition { set { tileTransition = value; } get { return tileTransition; } } [Range(1.0f, 200.0f)] [SerializeField] private float tileTransition = 4.0f;
		float L_0 = __this->___tileTransition_18;
		return L_0;
	}
}
// PaintIn3D.P3dModifierList PaintIn3D.P3dPaintSphere::get_Modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* P3dPaintSphere_get_Modifiers_mE33EF778545877C8993412676DE8292688AC3DE6 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_0 = __this->___modifiers_19;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_1 = (P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1*)il2cpp_codegen_object_new(P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		P3dModifierList__ctor_m9D9D6E371B210CC03977BC98F8EB83EF70AED91E(L_1, NULL);
		__this->___modifiers_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modifiers_19), (void*)L_1);
	}

IL_0013:
	{
		// public P3dModifierList Modifiers { get { if (modifiers == null) modifiers = new P3dModifierList(); return modifiers; } } [SerializeField] private P3dModifierList modifiers;
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_2 = __this->___modifiers_19;
		return L_2;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::IncrementOpacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_IncrementOpacity_m0C37DB1657358FB3E052BD813CA5C4C274F123F9 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, float ___0_delta, const RuntimeMethod* method) 
{
	{
		// opacity = Mathf.Clamp01(opacity + delta);
		float L_0 = __this->___opacity_10;
		float L_1 = ___0_delta;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(L_0, L_1)), NULL);
		__this->___opacity_10 = L_2;
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::IncrementAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_IncrementAngle_m93F1D113505793582248D329F32B9BFCBBDEE896 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, float ___0_degrees, const RuntimeMethod* method) 
{
	{
		// angle = Mathf.Repeat(angle + 180.0f + degrees, 360.0f) - 180.0f;
		float L_0 = __this->___angle_11;
		float L_1 = ___0_degrees;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_0, (180.0f))), L_1)), (360.0f), NULL);
		__this->___angle_11 = ((float)il2cpp_codegen_subtract(L_2, (180.0f)));
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::MultiplyRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_MultiplyRadius_mE537AB2742A3516EA5A451E0146AF0680F2E1BCB (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, float ___0_multiplier, const RuntimeMethod* method) 
{
	{
		// radius *= multiplier;
		float L_0 = __this->___radius_13;
		float L_1 = ___0_multiplier;
		__this->___radius_13 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::MultiplyScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_MultiplyScale_m623416573839D03C92D47B679E76793AB23BD3FE (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, float ___0_multiplier, const RuntimeMethod* method) 
{
	{
		// scale *= multiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___scale_12;
		float L_1 = ___0_multiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		__this->___scale_12 = L_2;
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::HandleHitPoint(System.Boolean,System.Int32,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_HandleHitPoint_m36AD84ADC0F493574DE7E120D719D3DB2147671B (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (modifiers != null && modifiers.Count > 0)
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_0 = __this->___modifiers_19;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_1 = __this->___modifiers_19;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = P3dModifierList_get_Count_mC0913A1BA1A125E0801BAD24BB4E30B9EE4FA381(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// CwHelper.BeginSeed(seed);
		int32_t L_3 = ___3_seed;
		il2cpp_codegen_runtime_class_init_inline(CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		CwHelper_BeginSeed_m1D62CE23D4E0A2F8465AD3A2C07F276F5BE8CB55(L_3, NULL);
		// modifiers.ModifyPosition(ref position, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_4 = __this->___modifiers_19;
		bool L_5 = ___0_preview;
		float L_6 = ___2_pressure;
		NullCheck(L_4);
		P3dModifierList_ModifyPosition_mE88DC9807F94DAB7AF2C675E5260DBD0F4D02D45(L_4, (&___4_position), L_5, L_6, NULL);
		// CwHelper.EndSeed();
		CwHelper_EndSeed_m4F4DA857C9212EE9E8471C1E27F57A036C98E2FC(NULL);
	}

IL_0031:
	{
		// P3dCommandSphere.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_7 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		bool L_8 = ___0_preview;
		int32_t L_9 = ___1_priority;
		NullCheck(L_7);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_7, L_8, L_9, NULL);
		// P3dCommandSphere.Instance.SetLocation(position);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_10 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___4_position;
		NullCheck(L_10);
		P3dCommandSphere_SetLocation_m2B2CD625739BD6B1AAF2785A4384CBB8E3A6C4DC(L_10, L_11, (bool)1, NULL);
		// var worldSize     = HandleHitCommon(preview, pressure, seed, rotation);
		bool L_12 = ___0_preview;
		float L_13 = ___2_pressure;
		int32_t L_14 = ___3_seed;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___5_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = P3dPaintSphere_HandleHitCommon_m704B440634579EBD279EEEA183186637B174807E(__this, L_12, L_13, L_14, L_15, NULL);
		// var worldRadius   = P3dCommon.GetRadius(worldSize);
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		float L_17;
		L_17 = P3dCommon_GetRadius_m7E16C6034DBD775EE364F2092BE9980D5634C9B1(L_16, NULL);
		V_0 = L_17;
		// var worldPosition = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___4_position;
		V_1 = L_18;
		// HandleMaskCommon(worldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		P3dPaintSphere_HandleMaskCommon_m6808B7E2E83644421A871D6F7A2382A244124519(__this, L_19, NULL);
		// P3dPaintableManager.SubmitAll(P3dCommandSphere.Instance, worldPosition, worldRadius, layers, group, targetModel, targetTexture);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_20 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		float L_22 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_23 = __this->___layers_4;
		int32_t L_24;
		L_24 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_23, NULL);
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_25 = __this->___group_5;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_26 = __this->___targetModel_6;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_27 = __this->___targetTexture_7;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dPaintableManager_SubmitAll_m534EE3CE5C2E8FDCADA006B3A8DBBB4BB44C8921(L_20, L_21, L_22, L_24, L_25, L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::HandleHitLine(System.Boolean,System.Int32,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_HandleHitLine_m18CA2DC06271E8ABFF7E8022EA59C05A5AD58D82 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_endPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___6_rotation, bool ___7_clip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// P3dCommandSphere.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_0 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		bool L_1 = ___0_preview;
		int32_t L_2 = ___1_priority;
		NullCheck(L_0);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_0, L_1, L_2, NULL);
		// P3dCommandSphere.Instance.SetLocation(position, endPosition, clip: clip);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_3 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___5_endPosition;
		bool L_6 = ___7_clip;
		NullCheck(L_3);
		P3dCommandSphere_SetLocation_mFA1FFCC8962CFD2BC3B319FD8147965A596A405B(L_3, L_4, L_5, (bool)1, L_6, NULL);
		// var worldSize     = HandleHitCommon(preview, pressure, seed, rotation);
		bool L_7 = ___0_preview;
		float L_8 = ___2_pressure;
		int32_t L_9 = ___3_seed;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___6_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = P3dPaintSphere_HandleHitCommon_m704B440634579EBD279EEEA183186637B174807E(__this, L_7, L_8, L_9, L_10, NULL);
		// var worldRadius   = P3dCommon.GetRadius(worldSize, position, endPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___5_endPosition;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		float L_14;
		L_14 = P3dCommon_GetRadius_m0509B370DBED0B2B1F517D07B07D53609F60EB36(L_11, L_12, L_13, NULL);
		V_0 = L_14;
		// var worldPosition = P3dCommon.GetPosition(position, endPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___5_endPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = P3dCommon_GetPosition_m28F7E54170571CF9710164319DF7333497B85081(L_15, L_16, NULL);
		V_1 = L_17;
		// HandleMaskCommon(worldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		P3dPaintSphere_HandleMaskCommon_m6808B7E2E83644421A871D6F7A2382A244124519(__this, L_18, NULL);
		// P3dPaintableManager.SubmitAll(P3dCommandSphere.Instance, worldPosition, worldRadius, layers, group, targetModel, targetTexture);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_19 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		float L_21 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_22 = __this->___layers_4;
		int32_t L_23;
		L_23 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_22, NULL);
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_24 = __this->___group_5;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_25 = __this->___targetModel_6;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_26 = __this->___targetTexture_7;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dPaintableManager_SubmitAll_m534EE3CE5C2E8FDCADA006B3A8DBBB4BB44C8921(L_19, L_20, L_21, L_23, L_24, L_25, L_26, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::HandleHitTriangle(System.Boolean,System.Int32,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_HandleHitTriangle_mD5A5767548A3CC30609681667606BE106147F924 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_positionA, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_positionB, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_positionC, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___7_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// P3dCommandSphere.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_0 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		bool L_1 = ___0_preview;
		int32_t L_2 = ___1_priority;
		NullCheck(L_0);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_0, L_1, L_2, NULL);
		// P3dCommandSphere.Instance.SetLocation(positionA, positionB, positionC);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_3 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___4_positionA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___5_positionB;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___6_positionC;
		NullCheck(L_3);
		P3dCommandSphere_SetLocation_m6966F03F4A011C7E77FA1BDED524395AFC2E3BD9(L_3, L_4, L_5, L_6, (bool)1, NULL);
		// var worldSize     = HandleHitCommon(preview, pressure, seed, rotation);
		bool L_7 = ___0_preview;
		float L_8 = ___2_pressure;
		int32_t L_9 = ___3_seed;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___7_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = P3dPaintSphere_HandleHitCommon_m704B440634579EBD279EEEA183186637B174807E(__this, L_7, L_8, L_9, L_10, NULL);
		// var worldRadius   = P3dCommon.GetRadius(worldSize, positionA, positionB, positionC);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___4_positionA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___5_positionB;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___6_positionC;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = P3dCommon_GetRadius_m17542CC3B98D4F91FEEFC096DC201903BA7667BA(L_11, L_12, L_13, L_14, NULL);
		V_0 = L_15;
		// var worldPosition = P3dCommon.GetPosition(positionA, positionB, positionC);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___4_positionA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___5_positionB;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___6_positionC;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = P3dCommon_GetPosition_mB234B0E65B008F26795293CC3AF75917B847C30F(L_16, L_17, L_18, NULL);
		V_1 = L_19;
		// HandleMaskCommon(worldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		P3dPaintSphere_HandleMaskCommon_m6808B7E2E83644421A871D6F7A2382A244124519(__this, L_20, NULL);
		// P3dPaintableManager.SubmitAll(P3dCommandSphere.Instance, worldPosition, worldRadius, layers, group, targetModel, targetTexture);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_21 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		float L_23 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_24 = __this->___layers_4;
		int32_t L_25;
		L_25 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_24, NULL);
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_26 = __this->___group_5;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_27 = __this->___targetModel_6;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_28 = __this->___targetTexture_7;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dPaintableManager_SubmitAll_m534EE3CE5C2E8FDCADA006B3A8DBBB4BB44C8921(L_21, L_22, L_23, L_25, L_26, L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::HandleHitQuad(System.Boolean,System.Int32,System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_HandleHitQuad_m715C65E8761E593F3A3B92E0E483C3021BEE746F (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_endPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_endPosition2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___8_rotation, bool ___9_clip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// P3dCommandSphere.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_0 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		bool L_1 = ___0_preview;
		int32_t L_2 = ___1_priority;
		NullCheck(L_0);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_0, L_1, L_2, NULL);
		// P3dCommandSphere.Instance.SetLocation(position, endPosition, position2, endPosition2, clip: clip);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_3 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___5_endPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___6_position2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___7_endPosition2;
		bool L_8 = ___9_clip;
		NullCheck(L_3);
		P3dCommandSphere_SetLocation_m7E17950983437C869DDCAE431FDC5F25724AFA6E(L_3, L_4, L_5, L_6, L_7, (bool)1, L_8, NULL);
		// var worldSize     = HandleHitCommon(preview, pressure, seed, rotation);
		bool L_9 = ___0_preview;
		float L_10 = ___2_pressure;
		int32_t L_11 = ___3_seed;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___8_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = P3dPaintSphere_HandleHitCommon_m704B440634579EBD279EEEA183186637B174807E(__this, L_9, L_10, L_11, L_12, NULL);
		// var worldRadius   = P3dCommon.GetRadius(worldSize, position, endPosition, position2, endPosition2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___5_endPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___6_position2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___7_endPosition2;
		il2cpp_codegen_runtime_class_init_inline(P3dCommon_t8A6EB7DFE0555442629A0E41104354D142C9773E_il2cpp_TypeInfo_var);
		float L_18;
		L_18 = P3dCommon_GetRadius_mDFB0FEFF736E8C181E21419B5BDED6BEDA4DAA1A(L_13, L_14, L_15, L_16, L_17, NULL);
		V_0 = L_18;
		// var worldPosition = P3dCommon.GetPosition(position, endPosition, position2, endPosition2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___4_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___5_endPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___6_position2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___7_endPosition2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = P3dCommon_GetPosition_mCA91024EE0AE627141C7380BCA19AD3F445A9B1B(L_19, L_20, L_21, L_22, NULL);
		V_1 = L_23;
		// HandleMaskCommon(worldPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		P3dPaintSphere_HandleMaskCommon_m6808B7E2E83644421A871D6F7A2382A244124519(__this, L_24, NULL);
		// P3dPaintableManager.SubmitAll(P3dCommandSphere.Instance, worldPosition, worldRadius, layers, group, targetModel, targetTexture);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_25 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		float L_27 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_28 = __this->___layers_4;
		int32_t L_29;
		L_29 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_28, NULL);
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_30 = __this->___group_5;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_31 = __this->___targetModel_6;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_32 = __this->___targetTexture_7;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dPaintableManager_SubmitAll_m534EE3CE5C2E8FDCADA006B3A8DBBB4BB44C8921(L_25, L_26, L_27, L_29, L_30, L_31, L_32, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::HandleHitCoord(System.Boolean,System.Int32,System.Single,System.Int32,PaintIn3D.P3dHit,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_HandleHitCoord_m552081C5D910AC70F025ED2C3E2D26AD30433AD5 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, bool ___0_preview, int32_t ___1_priority, float ___2_pressure, int32_t ___3_seed, P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3 ___4_hit, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mA758582494F390A5B318A0F6458F342154337C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* V_0 = NULL;
	List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* V_1 = NULL;
	int32_t V_2 = 0;
	P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* V_3 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var model = hit.Transform.GetComponent<P3dModel>();
		P3dHit_tEC5B4969FE381469007E1D176E4B3EA4C4B308B3 L_0 = ___4_hit;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0.___Transform_7;
		NullCheck(L_1);
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_2;
		L_2 = Component_GetComponent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mA758582494F390A5B318A0F6458F342154337C24(L_1, Component_GetComponent_TisP3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45_mA758582494F390A5B318A0F6458F342154337C24_RuntimeMethod_var);
		V_0 = L_2;
		// if (model != null)
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_00e6;
		}
	}
	{
		// var paintableTextures = P3dPaintableTexture.FilterAll(model, group);
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_5 = V_0;
		P3dGroup_t9E4B1D5F29CA927326300D89E6F2CBE707AD115D L_6 = __this->___group_5;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_7;
		L_7 = P3dPaintableTexture_FilterAll_m64EE096F71051A9D1445A209FFD79113DE7821B7(L_5, L_6, NULL);
		V_1 = L_7;
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_inline(L_8, List_1_get_Count_m6A809FA42B65226B5DE030D898625F3A26956EA8_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_00df;
	}

IL_0034:
	{
		// var paintableTexture = paintableTextures[i];
		List_1_t09FE195137E301CFD7E9211F00B5AF5388FF61C7* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_12;
		L_12 = List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB(L_10, L_11, List_1_get_Item_m19B3CC76EF822EA897D631F61C7CDFF87D9A26AB_RuntimeMethod_var);
		V_3 = L_12;
		// var coord            = paintableTexture.GetCoord(ref hit);
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_13 = V_3;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = P3dPaintableTexture_GetCoord_m1F64F7344005358C423CF091B40760F89BE53BAF(L_13, (&___4_hit), NULL);
		V_4 = L_14;
		// if (modifiers != null && modifiers.Count > 0)
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_15 = __this->___modifiers_19;
		if (!L_15)
		{
			goto IL_0089;
		}
	}
	{
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_16 = __this->___modifiers_19;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = P3dModifierList_get_Count_mC0913A1BA1A125E0801BAD24BB4E30B9EE4FA381(L_16, NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// var position = (Vector3)coord;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_18, NULL);
		V_5 = L_19;
		// CwHelper.BeginSeed(seed);
		int32_t L_20 = ___3_seed;
		il2cpp_codegen_runtime_class_init_inline(CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		CwHelper_BeginSeed_m1D62CE23D4E0A2F8465AD3A2C07F276F5BE8CB55(L_20, NULL);
		// modifiers.ModifyPosition(ref position, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_21 = __this->___modifiers_19;
		bool L_22 = ___0_preview;
		float L_23 = ___2_pressure;
		NullCheck(L_21);
		P3dModifierList_ModifyPosition_mE88DC9807F94DAB7AF2C675E5260DBD0F4D02D45(L_21, (&V_5), L_22, L_23, NULL);
		// CwHelper.EndSeed();
		CwHelper_EndSeed_m4F4DA857C9212EE9E8471C1E27F57A036C98E2FC(NULL);
		// coord = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_24, NULL);
		V_4 = L_25;
	}

IL_0089:
	{
		// P3dCommandSphere.Instance.SetState(preview, priority);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_26 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		bool L_27 = ___0_preview;
		int32_t L_28 = ___1_priority;
		NullCheck(L_26);
		P3dCommand_SetState_m0C81A54F3052088E285F1708825AE29FF6441B5B(L_26, L_27, L_28, NULL);
		// P3dCommandSphere.Instance.SetLocation(coord, in3D: false);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_29 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_30, NULL);
		NullCheck(L_29);
		P3dCommandSphere_SetLocation_m2B2CD625739BD6B1AAF2785A4384CBB8E3A6C4DC(L_29, L_31, (bool)0, NULL);
		// HandleHitCommon(preview, pressure, seed, rotation);
		bool L_32 = ___0_preview;
		float L_33 = ___2_pressure;
		int32_t L_34 = ___3_seed;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = ___5_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = P3dPaintSphere_HandleHitCommon_m704B440634579EBD279EEEA183186637B174807E(__this, L_32, L_33, L_34, L_35, NULL);
		// P3dCommandSphere.Instance.ClearMask();
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_37 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		NullCheck(L_37);
		P3dCommandSphere_ClearMask_m3020446C7E9088A1970F6C4ED0953E45BC3E674C(L_37, NULL);
		// P3dCommandSphere.Instance.ApplyAspect(paintableTexture.Current);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_38 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_39 = V_3;
		NullCheck(L_39);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40;
		L_40 = P3dPaintableTexture_get_Current_m42C0BE96C6A74B703F1A64763F921D15752F5092_inline(L_39, NULL);
		NullCheck(L_38);
		P3dCommandSphere_ApplyAspect_mCA2D0A5A9CAB80C836A9A2E97E8101054F77371F(L_38, L_40, NULL);
		// P3dPaintableManager.Submit(P3dCommandSphere.Instance, model, paintableTexture);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_41 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* L_42 = V_0;
		P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* L_43 = V_3;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableManager_tBF2411195945DA012C3679CC0D7B4183A56FB6FD_il2cpp_TypeInfo_var);
		P3dCommand_tFD8AAF5D82B3E5014E6A579517A371583FB70E0D* L_44;
		L_44 = P3dPaintableManager_Submit_m8AA1CBCFFF81BC4CC046875FC8CDEAECC4F87B38(L_41, L_42, L_43, NULL);
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
	}

IL_00df:
	{
		// for (var i = paintableTextures.Count - 1; i >= 0; i--)
		int32_t L_46 = V_2;
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}

IL_00e6:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 PaintIn3D.P3dPaintSphere::HandleHitCommon(System.Boolean,System.Single,System.Int32,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 P3dPaintSphere_HandleHitCommon_m704B440634579EBD279EEEA183186637B174807E (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, bool ___0_preview, float ___1_pressure, int32_t ___2_seed, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// var finalOpacity    = opacity;
		float L_0 = __this->___opacity_10;
		V_0 = L_0;
		// var finalRadius     = radius;
		float L_1 = __this->___radius_13;
		V_1 = L_1;
		// var finalScale      = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___scale_12;
		V_2 = L_2;
		// var finalHardness   = hardness;
		float L_3 = __this->___hardness_14;
		V_3 = L_3;
		// var finalColor      = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___color_9;
		V_4 = L_4;
		// var finalAngle      = angle;
		float L_5 = __this->___angle_11;
		V_5 = L_5;
		// var finalTileMatrix = tileTransform != null ? tileTransform.localToWorldMatrix : Matrix4x4.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___tileTransform_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8;
		L_8 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		G_B3_0 = L_8;
		goto IL_004c;
	}

IL_0041:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___tileTransform_16;
		NullCheck(L_9);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_9, NULL);
		G_B3_0 = L_10;
	}

IL_004c:
	{
		V_6 = G_B3_0;
		// if (modifiers != null && modifiers.Count > 0)
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_11 = __this->___modifiers_19;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_12 = __this->___modifiers_19;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = P3dModifierList_get_Count_mC0913A1BA1A125E0801BAD24BB4E30B9EE4FA381(L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_00c9;
		}
	}
	{
		// CwHelper.BeginSeed(seed);
		int32_t L_14 = ___2_seed;
		il2cpp_codegen_runtime_class_init_inline(CwHelper_tA75B82888802E2D673AEAF8F84E219275DE6DE77_il2cpp_TypeInfo_var);
		CwHelper_BeginSeed_m1D62CE23D4E0A2F8465AD3A2C07F276F5BE8CB55(L_14, NULL);
		// modifiers.ModifyColor(ref finalColor, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_15 = __this->___modifiers_19;
		bool L_16 = ___0_preview;
		float L_17 = ___1_pressure;
		NullCheck(L_15);
		P3dModifierList_ModifyColor_m24E04F5E8C44A2AD3D655B1E901387614F0F0007(L_15, (&V_4), L_16, L_17, NULL);
		// modifiers.ModifyAngle(ref finalAngle, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_18 = __this->___modifiers_19;
		bool L_19 = ___0_preview;
		float L_20 = ___1_pressure;
		NullCheck(L_18);
		P3dModifierList_ModifyAngle_m27BF9DA495CF0495F9E5B8333312623FCD6A304B(L_18, (&V_5), L_19, L_20, NULL);
		// modifiers.ModifyOpacity(ref finalOpacity, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_21 = __this->___modifiers_19;
		bool L_22 = ___0_preview;
		float L_23 = ___1_pressure;
		NullCheck(L_21);
		P3dModifierList_ModifyOpacity_m009A957B6C46DC4134DB9BB02E2332AAF3DBED29(L_21, (&V_0), L_22, L_23, NULL);
		// modifiers.ModifyRadius(ref finalRadius, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_24 = __this->___modifiers_19;
		bool L_25 = ___0_preview;
		float L_26 = ___1_pressure;
		NullCheck(L_24);
		P3dModifierList_ModifyRadius_m69F2DD323E11F6C8B925E3E44E06ACE8F476C2FA(L_24, (&V_1), L_25, L_26, NULL);
		// modifiers.ModifyScale(ref finalScale, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_27 = __this->___modifiers_19;
		bool L_28 = ___0_preview;
		float L_29 = ___1_pressure;
		NullCheck(L_27);
		P3dModifierList_ModifyScale_m937E84324D420765732BFA252FC3A15DC311B039(L_27, (&V_2), L_28, L_29, NULL);
		// modifiers.ModifyHardness(ref finalHardness, preview, pressure);
		P3dModifierList_t7A8EACDF282389D236660815EDA0D308528977E1* L_30 = __this->___modifiers_19;
		bool L_31 = ___0_preview;
		float L_32 = ___1_pressure;
		NullCheck(L_30);
		P3dModifierList_ModifyHardness_mCD1382DD83C0AF549C0602056F890B9ECA0C169B(L_30, (&V_3), L_31, L_32, NULL);
		// CwHelper.EndSeed();
		CwHelper_EndSeed_m4F4DA857C9212EE9E8471C1E27F57A036C98E2FC(NULL);
	}

IL_00c9:
	{
		// var finalSize = finalScale * finalRadius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_2;
		float L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, L_34, NULL);
		V_7 = L_35;
		// P3dCommandSphere.Instance.SetShape(rotation, finalSize, finalAngle);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_36 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = ___3_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_7;
		float L_39 = V_5;
		NullCheck(L_36);
		P3dCommandSphere_SetShape_m9B6D5C2B4DB770A9ECBD7BDB30F1DE35170CEC49(L_36, L_37, L_38, L_39, NULL);
		// P3dCommandSphere.Instance.SetMaterial(BlendMode, finalHardness, finalColor, finalOpacity, tileTexture, finalTileMatrix, tileOpacity, tileTransition);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_40 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_41;
		L_41 = P3dPaintSphere_get_BlendMode_m82EABBF6B6219F7DF181553E8BAFE0E30D45FDBD_inline(__this, NULL);
		float L_42 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = V_4;
		float L_44 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_45 = __this->___tileTexture_15;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_46 = V_6;
		float L_47 = __this->___tileOpacity_17;
		float L_48 = __this->___tileTransition_18;
		NullCheck(L_40);
		P3dCommandSphere_SetMaterial_mEAF0650ECFECF49B11517DA365D6476B599D3D59(L_40, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, NULL);
		// return finalSize;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_7;
		return L_49;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::HandleMaskCommon(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere_HandleMaskCommon_m6808B7E2E83644421A871D6F7A2382A244124519 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* V_0 = NULL;
	{
		// var mask = P3dMask.Find(worldPosition, layers);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_worldPosition;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = __this->___layers_4;
		il2cpp_codegen_runtime_class_init_inline(P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A_il2cpp_TypeInfo_var);
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_2;
		L_2 = P3dMask_Find_m753253EEA4AB8C8658BB7549F8E7AC46C58A51B9(L_0, L_1, NULL);
		V_0 = L_2;
		// if (mask != null)
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// P3dCommandSphere.Instance.SetMask(mask.Matrix, mask.Texture, mask.Channel, mask.Stretch);
		il2cpp_codegen_runtime_class_init_inline(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_5 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_6 = V_0;
		NullCheck(L_6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = P3dMask_get_Matrix_m65F5191E56B856F41C0ABFF11CC41E22C59C9836(L_6, NULL);
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_8 = V_0;
		NullCheck(L_8);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9;
		L_9 = P3dMask_get_Texture_m9C39FCD0317704F16992AB17FCDE674A530440CA_inline(L_8, NULL);
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = P3dMask_get_Channel_m39F9AADE2834AE09BDD6ACD19CFFF99F96CC04F3_inline(L_10, NULL);
		P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* L_12 = V_0;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = P3dMask_get_Stretch_m364B963C5C3509C111A5264B8654FA88BA55A22A_inline(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		NullCheck(L_5);
		P3dCommandSphere_SetMask_m693D133476F4B4FB1C1151E9734583EC867EF0F6(L_5, L_7, L_9, L_11, L_14, NULL);
		return;
	}

IL_003e:
	{
		// P3dCommandSphere.Instance.ClearMask();
		il2cpp_codegen_runtime_class_init_inline(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var);
		P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8* L_15 = ((P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_StaticFields*)il2cpp_codegen_static_fields_for(P3dCommandSphere_tB17AC23EB27C50730CFB8BD05605E65DF5508CA8_il2cpp_TypeInfo_var))->___Instance_31;
		NullCheck(L_15);
		P3dCommandSphere_ClearMask_m3020446C7E9088A1970F6C4ED0953E45BC3E674C(L_15, NULL);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPaintSphere::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPaintSphere__ctor_m5E92A4A9E14FE5BD24A2106F614D992275FCE9D2 (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LayerMask Layers { set { layers = value; } get { return layers; } } [SerializeField] private LayerMask layers = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->___layers_4 = L_0;
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B_il2cpp_TypeInfo_var);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_2;
		L_2 = P3dBlendMode_AlphaBlend_mD0DD96D2ED070D215CBD8D2D0363E9DA8AC6938A(L_1, NULL);
		__this->___blendMode_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___blendMode_8))->___Texture_23), (void*)NULL);
		// public Color Color { set { color = value; } get { return color; } } [SerializeField] private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color_9 = L_3;
		// public float Opacity { set { opacity = value; } get { return opacity; } } [Range(0.0f, 1.0f)] [SerializeField] private float opacity = 1.0f;
		__this->___opacity_10 = (1.0f);
		// public Vector3 Scale { set { scale = value; } get { return scale; } } [SerializeField] private Vector3 scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___scale_12 = L_4;
		// public float Radius { set { radius = value; } get { return radius; } } [SerializeField] private float radius = 0.1f;
		__this->___radius_13 = (0.100000001f);
		// public float Hardness { set { hardness = value; } get { return hardness; } } [SerializeField] private float hardness = 5.0f;
		__this->___hardness_14 = (5.0f);
		// public float TileOpacity { set { tileOpacity = value; } get { return tileOpacity; } } [UnityEngine.Serialization.FormerlySerializedAs("tileBlend")] [Range(0.0f, 1.0f)] [SerializeField] private float tileOpacity = 1.0f;
		__this->___tileOpacity_17 = (1.0f);
		// public float TileTransition { set { tileTransition = value; } get { return tileTransition; } } [Range(1.0f, 200.0f)] [SerializeField] private float tileTransition = 4.0f;
		__this->___tileTransition_18 = (4.0f);
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
// System.Boolean PaintIn3D.P3dPointer::GetFinger(System.Int32,UnityEngine.Vector2,System.Single,System.Boolean,CW.Common.CwInputManager/Finger&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointer_GetFinger_m12856905DE9F202BF8C40450EF2BB1B1BE5E5C20 (P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302* __this, int32_t ___0_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_position, float ___2_pressure, bool ___3_set, Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8** ___4_finger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m972218EFF43D49745F18BA376C1278752F80936E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC3CEF874C2D99ED6FDF204103CA1B7CACFE34165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF008129D58C5940526BA8102498BA5611D24052E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < fingers.Count; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_0004:
	{
		// finger = fingers[i];
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8** L_0 = ___4_finger;
		List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* L_1 = __this->___fingers_5;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_3;
		L_3 = List_1_get_Item_mF008129D58C5940526BA8102498BA5611D24052E(L_1, L_2, List_1_get_Item_mF008129D58C5940526BA8102498BA5611D24052E_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_3);
		// if (finger.Index == index)
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8** L_4 = ___4_finger;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_5 = *((Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8**)L_4);
		NullCheck(L_5);
		int32_t L_6 = L_5->___Index_0;
		int32_t L_7 = ___0_index;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_002d;
		}
	}
	{
		// StepFinger(finger, position, pressure, set);
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8** L_8 = ___4_finger;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_9 = *((Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8**)L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___1_position;
		float L_11 = ___2_pressure;
		bool L_12 = ___3_set;
		P3dPointer_StepFinger_mC25A6EAF70701C1DBD4B474963DE90880D616F80(__this, L_9, L_10, L_11, L_12, NULL);
		// return false;
		return (bool)0;
	}

IL_002d:
	{
		// for (var i = 0; i < fingers.Count; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0031:
	{
		// for (var i = 0; i < fingers.Count; i++)
		int32_t L_14 = V_0;
		List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* L_15 = __this->___fingers_5;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mC3CEF874C2D99ED6FDF204103CA1B7CACFE34165_inline(L_15, List_1_get_Count_mC3CEF874C2D99ED6FDF204103CA1B7CACFE34165_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		// finger = new CwInputManager.Finger();
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8** L_17 = ___4_finger;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_18 = (Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8*)il2cpp_codegen_object_new(Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Finger__ctor_mB8EBC54FB189CE84A3EC0E1021E3D0D51D0AECD4(L_18, NULL);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_18);
		// fingers.Add(finger);
		List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* L_19 = __this->___fingers_5;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8** L_20 = ___4_finger;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_21 = *((Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8**)L_20);
		NullCheck(L_19);
		List_1_Add_m972218EFF43D49745F18BA376C1278752F80936E_inline(L_19, L_21, List_1_Add_m972218EFF43D49745F18BA376C1278752F80936E_RuntimeMethod_var);
		// InitFinger(finger, index, position, pressure, set, cachedHitScreenBase.GuiLayers);
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8** L_22 = ___4_finger;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_23 = *((Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8**)L_22);
		int32_t L_24 = ___0_index;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = ___1_position;
		float L_26 = ___2_pressure;
		bool L_27 = ___3_set;
		P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* L_28 = __this->___cachedHitScreenBase_4;
		NullCheck(L_28);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_29;
		L_29 = P3dHitScreenBase_get_GuiLayers_m31041116E756727015CE253DB025BAA28DBDE6AB_inline(L_28, NULL);
		int32_t L_30;
		L_30 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_29, NULL);
		P3dPointer_InitFinger_m624A85F554F58ACA15416A4C11D58B07D8BA67D3(__this, L_23, L_24, L_25, L_26, L_27, L_30, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean PaintIn3D.P3dPointer::TryNullFinger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointer_TryNullFinger_m1905F716C6DCCF1F2D576CA6877A5877EE91632A (P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mD209AF471B3572AEC6457935C2BA8D1368C254D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC3CEF874C2D99ED6FDF204103CA1B7CACFE34165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF008129D58C5940526BA8102498BA5611D24052E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < fingers.Count; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// if (fingers[i].Index == index)
		List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* L_0 = __this->___fingers_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_2;
		L_2 = List_1_get_Item_mF008129D58C5940526BA8102498BA5611D24052E(L_0, L_1, List_1_get_Item_mF008129D58C5940526BA8102498BA5611D24052E_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = L_2->___Index_0;
		int32_t L_4 = ___0_index;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0026;
		}
	}
	{
		// fingers.RemoveAt(i);
		List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* L_5 = __this->___fingers_5;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		List_1_RemoveAt_mD209AF471B3572AEC6457935C2BA8D1368C254D0(L_5, L_6, List_1_RemoveAt_mD209AF471B3572AEC6457935C2BA8D1368C254D0_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0026:
	{
		// for (var i = 0; i < fingers.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002a:
	{
		// for (var i = 0; i < fingers.Count; i++)
		int32_t L_8 = V_0;
		List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* L_9 = __this->___fingers_5;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mC3CEF874C2D99ED6FDF204103CA1B7CACFE34165_inline(L_9, List_1_get_Count_mC3CEF874C2D99ED6FDF204103CA1B7CACFE34165_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void PaintIn3D.P3dPointer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointer_OnEnable_m8B2CCF724032C54E588B831C859FEBB881D981FB (P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisP3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC_m23C977D470FD8DF6A7342924B14F836987372B65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cachedHitScreenBase = GetComponent<P3dHitScreenBase>();
		P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* L_0;
		L_0 = Component_GetComponent_TisP3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC_m23C977D470FD8DF6A7342924B14F836987372B65(__this, Component_GetComponent_TisP3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC_m23C977D470FD8DF6A7342924B14F836987372B65_RuntimeMethod_var);
		__this->___cachedHitScreenBase_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedHitScreenBase_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPointer::InitFinger(CW.Common.CwInputManager/Finger,System.Int32,UnityEngine.Vector2,System.Single,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointer_InitFinger_m624A85F554F58ACA15416A4C11D58B07D8BA67D3 (P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302* __this, Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* ___0_finger, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_screenPosition, float ___3_pressure, bool ___4_set, int32_t ___5_guiLayers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t92456D41A22047264E18E84F135DB75F3E6AA0B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// finger.Index = index;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_0 = ___0_finger;
		int32_t L_1 = ___1_index;
		NullCheck(L_0);
		L_0->___Index_0 = L_1;
		// finger.Down  = true;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_2 = ___0_finger;
		NullCheck(L_2);
		L_2->___Down_2 = (bool)1;
		// finger.Age   = 0.0f;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_3 = ___0_finger;
		NullCheck(L_3);
		L_3->___Age_4 = (0.0f);
		// finger.StartedOverGui          = PointOverGui(screenPosition, guiLayers);
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_4 = ___0_finger;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___2_screenPosition;
		int32_t L_6 = ___5_guiLayers;
		il2cpp_codegen_runtime_class_init_inline(CwInputManager_t92456D41A22047264E18E84F135DB75F3E6AA0B5_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = CwInputManager_PointOverGui_mBBE742D280F6170487DB315E7F1331E10F4D9805(L_5, L_6, NULL);
		NullCheck(L_4);
		L_4->___StartedOverGui_5 = L_7;
		// finger.StartScreenPosition     = screenPosition;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_8 = ___0_finger;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___2_screenPosition;
		NullCheck(L_8);
		L_8->___StartScreenPosition_6 = L_9;
		// finger.ScreenPositionOld       = screenPosition;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_10 = ___0_finger;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___2_screenPosition;
		NullCheck(L_10);
		L_10->___ScreenPositionOld_8 = L_11;
		// finger.ScreenPositionOldOld    = screenPosition;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_12 = ___0_finger;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___2_screenPosition;
		NullCheck(L_12);
		L_12->___ScreenPositionOldOld_9 = L_13;
		// finger.ScreenPositionOldOldOld = screenPosition;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_14 = ___0_finger;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___2_screenPosition;
		NullCheck(L_14);
		L_14->___ScreenPositionOldOldOld_10 = L_15;
		// finger.Pressure       = pressure;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_16 = ___0_finger;
		float L_17 = ___3_pressure;
		NullCheck(L_16);
		L_16->___Pressure_1 = L_17;
		// finger.ScreenPosition = screenPosition;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_18 = ___0_finger;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___2_screenPosition;
		NullCheck(L_18);
		L_18->___ScreenPosition_7 = L_19;
		// finger.Up             = set == false;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_20 = ___0_finger;
		bool L_21 = ___4_set;
		NullCheck(L_20);
		L_20->___Up_3 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPointer::StepFinger(CW.Common.CwInputManager/Finger,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointer_StepFinger_mC25A6EAF70701C1DBD4B474963DE90880D616F80 (P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302* __this, Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* ___0_finger, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPosition, float ___2_pressure, bool ___3_set, const RuntimeMethod* method) 
{
	{
		// finger.Down = false;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_0 = ___0_finger;
		NullCheck(L_0);
		L_0->___Down_2 = (bool)0;
		// finger.Age += Time.deltaTime;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_1 = ___0_finger;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_2 = L_1;
		NullCheck(L_2);
		float L_3 = L_2->___Age_4;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_2);
		L_2->___Age_4 = ((float)il2cpp_codegen_add(L_3, L_4));
		// finger.ScreenPositionOldOldOld = finger.ScreenPositionOldOld;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_5 = ___0_finger;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_6 = ___0_finger;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6->___ScreenPositionOldOld_9;
		NullCheck(L_5);
		L_5->___ScreenPositionOldOldOld_10 = L_7;
		// finger.ScreenPositionOldOld    = finger.ScreenPositionOld;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_8 = ___0_finger;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_9 = ___0_finger;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = L_9->___ScreenPositionOld_8;
		NullCheck(L_8);
		L_8->___ScreenPositionOldOld_9 = L_10;
		// finger.ScreenPositionOld       = finger.ScreenPosition;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_11 = ___0_finger;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_12 = ___0_finger;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = L_12->___ScreenPosition_7;
		NullCheck(L_11);
		L_11->___ScreenPositionOld_8 = L_13;
		// finger.Pressure       = pressure;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_14 = ___0_finger;
		float L_15 = ___2_pressure;
		NullCheck(L_14);
		L_14->___Pressure_1 = L_15;
		// finger.ScreenPosition = screenPosition;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_16 = ___0_finger;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___1_screenPosition;
		NullCheck(L_16);
		L_16->___ScreenPosition_7 = L_17;
		// finger.Up             = set == false;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_18 = ___0_finger;
		bool L_19 = ___3_set;
		NullCheck(L_18);
		L_18->___Up_3 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointer__ctor_mC0C83DD02534A87FC2AE3903D127DBDB33695F05 (P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m481EE73C5E158B5A00393F44ABEACBAAD6F88A48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<CwInputManager.Finger> fingers = new List<CwInputManager.Finger>();
		List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782* L_0 = (List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782*)il2cpp_codegen_object_new(List_1_t57BA10989BB385C8CDBCCA2F92653513CBF31782_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m481EE73C5E158B5A00393F44ABEACBAAD6F88A48(L_0, List_1__ctor_m481EE73C5E158B5A00393F44ABEACBAAD6F88A48_RuntimeMethod_var);
		__this->___fingers_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fingers_5), (void*)L_0);
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
// System.Void PaintIn3D.P3dPointer/VirtualFinger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualFinger__ctor_mAF7C9D01703246DE4A833AE5BC60136583C05365 (VirtualFinger_tD77E369159E2991B7AB80C168614731B02DC5C22* __this, const RuntimeMethod* method) 
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
// System.Void PaintIn3D.P3dPointerMouse::set_Preview(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointerMouse_set_Preview_m0DE9ED02F93740091533BD5F7E94719779844BF6 (P3dPointerMouse_t2132552825D1F8C787CDA111C416F1141C0C3996* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Preview { set { preview = value; } get { return preview; } } [SerializeField] private bool preview;
		bool L_0 = ___0_value;
		__this->___preview_6 = L_0;
		// public bool Preview { set { preview = value; } get { return preview; } } [SerializeField] private bool preview;
		return;
	}
}
// System.Boolean PaintIn3D.P3dPointerMouse::get_Preview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointerMouse_get_Preview_m28143D4894CEA22F14795C2FA66F25995B348B2B (P3dPointerMouse_t2132552825D1F8C787CDA111C416F1141C0C3996* __this, const RuntimeMethod* method) 
{
	{
		// public bool Preview { set { preview = value; } get { return preview; } } [SerializeField] private bool preview;
		bool L_0 = __this->___preview_6;
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.KeyCode> PaintIn3D.P3dPointerMouse::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* P3dPointerMouse_get_Keys_mA83F8185DD552BDB93B260AC7113360A1D148F12 (P3dPointerMouse_t2132552825D1F8C787CDA111C416F1141C0C3996* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBBC374561D2D32D99D36614F8CED83A19FD4F702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<KeyCode> Keys { get { if (keys == null) { keys = new List<KeyCode>(); } return keys; } } [SerializeField] private List<KeyCode> keys;
		List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* L_0 = __this->___keys_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// public List<KeyCode> Keys { get { if (keys == null) { keys = new List<KeyCode>(); } return keys; } } [SerializeField] private List<KeyCode> keys;
		List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* L_1 = (List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32*)il2cpp_codegen_object_new(List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mBBC374561D2D32D99D36614F8CED83A19FD4F702(L_1, List_1__ctor_mBBC374561D2D32D99D36614F8CED83A19FD4F702_RuntimeMethod_var);
		__this->___keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys_7), (void*)L_1);
	}

IL_0013:
	{
		// public List<KeyCode> Keys { get { if (keys == null) { keys = new List<KeyCode>(); } return keys; } } [SerializeField] private List<KeyCode> keys;
		List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* L_2 = __this->___keys_7;
		return L_2;
	}
}
// System.Boolean PaintIn3D.P3dPointerMouse::TryAddKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointerMouse_TryAddKey_m5609DF9300383158877C3B2DB0934996DF326DD9 (P3dPointerMouse_t2132552825D1F8C787CDA111C416F1141C0C3996* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m32DCBD336D2D01A925C430FFC3AE3BF70B845179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mAE800C985C1868453C1F2CBB37075BC93B2E302B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Keys.Contains(key) == false)
		List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* L_0;
		L_0 = P3dPointerMouse_get_Keys_mA83F8185DD552BDB93B260AC7113360A1D148F12(__this, NULL);
		int32_t L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mAE800C985C1868453C1F2CBB37075BC93B2E302B(L_0, L_1, List_1_Contains_mAE800C985C1868453C1F2CBB37075BC93B2E302B_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// keys.Add(key);
		List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* L_3 = __this->___keys_7;
		int32_t L_4 = ___0_key;
		NullCheck(L_3);
		List_1_Add_m32DCBD336D2D01A925C430FFC3AE3BF70B845179_inline(L_3, L_4, List_1_Add_m32DCBD336D2D01A925C430FFC3AE3BF70B845179_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean PaintIn3D.P3dPointerMouse::GetKeyHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointerMouse_GetKeyHeld_m6A24717B61AAF5916FCD9A28EA11903E84EACD7B (P3dPointerMouse_t2132552825D1F8C787CDA111C416F1141C0C3996* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m617C29693EB2801276678FF3113122991240CDF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB46607AA8EBED12F5C4392F03DA7A93FB5EE5172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1EB88CCB3276E602D3FE9BB36D2F521ABDD86E20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEB5CAC74E588EFB6530371C6DD9DA9E6E8F9F61D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (keys != null)
		List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* L_0 = __this->___keys_7;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// foreach (var key in keys)
		List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* L_1 = __this->___keys_7;
		NullCheck(L_1);
		Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5 L_2;
		L_2 = List_1_GetEnumerator_mEB5CAC74E588EFB6530371C6DD9DA9E6E8F9F61D(L_1, List_1_GetEnumerator_mEB5CAC74E588EFB6530371C6DD9DA9E6E8F9F61D_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m617C29693EB2801276678FF3113122991240CDF0((&V_0), Enumerator_Dispose_m617C29693EB2801276678FF3113122991240CDF0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0016_1:
			{
				// foreach (var key in keys)
				int32_t L_3;
				L_3 = Enumerator_get_Current_m1EB88CCB3276E602D3FE9BB36D2F521ABDD86E20_inline((&V_0), Enumerator_get_Current_m1EB88CCB3276E602D3FE9BB36D2F521ABDD86E20_RuntimeMethod_var);
				// if (CwInput.GetKeyIsHeld(key) == true)
				bool L_4;
				L_4 = CwInput_GetKeyIsHeld_m3CF9110B4AE5AF560FC12DD196281D04809955D2(L_3, NULL);
				if (!L_4)
				{
					goto IL_0028_1;
				}
			}
			{
				// return true;
				V_1 = (bool)1;
				goto IL_0043;
			}

IL_0028_1:
			{
				// foreach (var key in keys)
				bool L_5;
				L_5 = Enumerator_MoveNext_mB46607AA8EBED12F5C4392F03DA7A93FB5EE5172((&V_0), Enumerator_MoveNext_mB46607AA8EBED12F5C4392F03DA7A93FB5EE5172_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// return false;
		return (bool)0;
	}

IL_0043:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Void PaintIn3D.P3dPointerMouse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointerMouse_Update_mE580FF51FB4AC65D0EF3EE5841B1EBA1950A7666 (P3dPointerMouse_t2132552825D1F8C787CDA111C416F1141C0C3996* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// var newHeld       = false;
		V_0 = (bool)0;
		// var enablePreview = false;
		V_1 = (bool)0;
		// var enablePaint   = false;
		V_2 = (bool)0;
		// if (CwInput.GetMouseExists() == true)
		bool L_0;
		L_0 = CwInput_GetMouseExists_m5D88DE70E6D21E03FCEDFB12B7383D5D59A9DED2(NULL);
		if (!L_0)
		{
			goto IL_008c;
		}
	}
	{
		// newHeld       = GetKeyHeld();
		bool L_1;
		L_1 = P3dPointerMouse_GetKeyHeld_m6A24717B61AAF5916FCD9A28EA11903E84EACD7B(__this, NULL);
		V_0 = L_1;
		// enablePaint   = newHeld == true || oldHeld == true;
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		bool L_3 = __this->___oldHeld_10;
		G_B4_0 = ((int32_t)(L_3));
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 1;
	}

IL_0020:
	{
		V_2 = (bool)G_B4_0;
		// enablePreview = preview == true && enablePaint == false;
		bool L_4 = __this->___preview_6;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		bool L_5 = V_2;
		G_B7_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B7_0 = 0;
	}

IL_0030:
	{
		V_1 = (bool)G_B7_0;
		// if (enablePreview == true)
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		// GetFinger(PREVIEW_FINGER_INDEX, CwInput.GetMousePosition(), 1.0f, true, out finger);
		int32_t L_7 = __this->___PREVIEW_FINGER_INDEX_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = CwInput_GetMousePosition_mEAB61C2A353CEBB87CEF6EB5A917C94988C91548(NULL);
		bool L_9;
		L_9 = P3dPointer_GetFinger_m12856905DE9F202BF8C40450EF2BB1B1BE5E5C20(__this, L_7, L_8, (1.0f), (bool)1, (&V_3), NULL);
		// cachedHitScreenBase.HandleFingerUpdate(finger, false, false);
		P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* L_10 = ((P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302*)__this)->___cachedHitScreenBase_4;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_11 = V_3;
		NullCheck(L_10);
		VirtualActionInvoker3< Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8*, bool, bool >::Invoke(4 /* System.Void PaintIn3D.P3dHitScreenBase::HandleFingerUpdate(CW.Common.CwInputManager/Finger,System.Boolean,System.Boolean) */, L_10, L_11, (bool)0, (bool)0);
	}

IL_005c:
	{
		// if (enablePaint == true)
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		// var down = GetFinger(PAINT_FINGER_INDEX, CwInput.GetMousePosition(), 1.0f, true, out finger);
		int32_t L_13 = __this->___PAINT_FINGER_INDEX_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = CwInput_GetMousePosition_mEAB61C2A353CEBB87CEF6EB5A917C94988C91548(NULL);
		bool L_15;
		L_15 = P3dPointer_GetFinger_m12856905DE9F202BF8C40450EF2BB1B1BE5E5C20(__this, L_13, L_14, (1.0f), (bool)1, (&V_3), NULL);
		V_4 = L_15;
		// cachedHitScreenBase.HandleFingerUpdate(finger, down, newHeld == false);
		P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* L_16 = ((P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302*)__this)->___cachedHitScreenBase_4;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_17 = V_3;
		bool L_18 = V_4;
		bool L_19 = V_0;
		NullCheck(L_16);
		VirtualActionInvoker3< Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8*, bool, bool >::Invoke(4 /* System.Void PaintIn3D.P3dHitScreenBase::HandleFingerUpdate(CW.Common.CwInputManager/Finger,System.Boolean,System.Boolean) */, L_16, L_17, L_18, (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0));
	}

IL_008c:
	{
		// if (enablePreview == false)
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_009c;
		}
	}
	{
		// TryNullFinger(PREVIEW_FINGER_INDEX);
		int32_t L_21 = __this->___PREVIEW_FINGER_INDEX_8;
		bool L_22;
		L_22 = P3dPointer_TryNullFinger_m1905F716C6DCCF1F2D576CA6877A5877EE91632A(__this, L_21, NULL);
	}

IL_009c:
	{
		// if (enablePaint == false)
		bool L_23 = V_2;
		if (L_23)
		{
			goto IL_00ac;
		}
	}
	{
		// TryNullFinger(PAINT_FINGER_INDEX);
		int32_t L_24 = __this->___PAINT_FINGER_INDEX_9;
		bool L_25;
		L_25 = P3dPointer_TryNullFinger_m1905F716C6DCCF1F2D576CA6877A5877EE91632A(__this, L_24, NULL);
	}

IL_00ac:
	{
		// oldHeld = newHeld;
		bool L_26 = V_0;
		__this->___oldHeld_10 = L_26;
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPointerMouse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointerMouse__ctor_m06F509191C83463150253845654B00A24E3EC585 (P3dPointerMouse_t2132552825D1F8C787CDA111C416F1141C0C3996* __this, const RuntimeMethod* method) 
{
	{
		// private readonly int PREVIEW_FINGER_INDEX = -1;
		__this->___PREVIEW_FINGER_INDEX_8 = (-1);
		// private readonly int PAINT_FINGER_INDEX = 1;
		__this->___PAINT_FINGER_INDEX_9 = 1;
		P3dPointer__ctor_mC0C83DD02534A87FC2AE3903D127DBDB33695F05(__this, NULL);
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
// System.Void PaintIn3D.P3dPointerPen::set_Preview(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointerPen_set_Preview_m177809D612064E0A0092A9A8326D1BF728C90648 (P3dPointerPen_tD52B01CDAF3AAC78196CE0D30272B12A48411362* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Preview { set { preview = value; } get { return preview; } } [SerializeField] private bool preview;
		bool L_0 = ___0_value;
		__this->___preview_6 = L_0;
		// public bool Preview { set { preview = value; } get { return preview; } } [SerializeField] private bool preview;
		return;
	}
}
// System.Boolean PaintIn3D.P3dPointerPen::get_Preview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointerPen_get_Preview_m29875D16F24D575E9E4ACDF1443D57173E8364CA (P3dPointerPen_tD52B01CDAF3AAC78196CE0D30272B12A48411362* __this, const RuntimeMethod* method) 
{
	{
		// public bool Preview { set { preview = value; } get { return preview; } } [SerializeField] private bool preview;
		bool L_0 = __this->___preview_6;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPointerPen::set_Offset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointerPen_set_Offset_mAB6B96D7146420A235DE31AD0C3C88F98F3CFD8C (P3dPointerPen_tD52B01CDAF3AAC78196CE0D30272B12A48411362* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Offset { set { offset = value; } get { return offset; } } [SerializeField] private float offset;
		float L_0 = ___0_value;
		__this->___offset_7 = L_0;
		// public float Offset { set { offset = value; } get { return offset; } } [SerializeField] private float offset;
		return;
	}
}
// System.Single PaintIn3D.P3dPointerPen::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPointerPen_get_Offset_m4DDCEEAD391A1741FD8592E5F207E55D470936DD (P3dPointerPen_tD52B01CDAF3AAC78196CE0D30272B12A48411362* __this, const RuntimeMethod* method) 
{
	{
		// public float Offset { set { offset = value; } get { return offset; } } [SerializeField] private float offset;
		float L_0 = __this->___offset_7;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPointerPen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointerPen_Update_m5D72BFC493A27D8739E8306F5D8B965248ACEA5B (P3dPointerPen_tD52B01CDAF3AAC78196CE0D30272B12A48411362* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// var newHeld       = false;
		V_0 = (bool)0;
		// var enablePreview = false;
		V_1 = (bool)0;
		// var enablePaint   = false;
		V_2 = (bool)0;
		// if (GetPenExists() == true)
		bool L_0;
		L_0 = P3dPointerPen_GetPenExists_m840D171DC8DEA8AE6152B1263114994F65550482(NULL);
		if (!L_0)
		{
			goto IL_008b;
		}
	}
	{
		// newHeld       = GetPenHeld();
		bool L_1;
		L_1 = P3dPointerPen_GetPenHeld_m47FF55344EE93C9CDACAB6D41AFA583DA88988B8(NULL);
		V_0 = L_1;
		// enablePaint   = newHeld == true || oldHeld == true;
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = __this->___oldHeld_10;
		G_B4_0 = ((int32_t)(L_3));
		goto IL_001f;
	}

IL_001e:
	{
		G_B4_0 = 1;
	}

IL_001f:
	{
		V_2 = (bool)G_B4_0;
		// enablePreview = preview == true && enablePaint == false;
		bool L_4 = __this->___preview_6;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		bool L_5 = V_2;
		G_B7_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B7_0 = 0;
	}

IL_002f:
	{
		V_1 = (bool)G_B7_0;
		// if (enablePreview == true)
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		// GetFinger(PREVIEW_FINGER_INDEX, GetPenPosition(), GetPenPressure(), true, out finger);
		int32_t L_7 = __this->___PREVIEW_FINGER_INDEX_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = P3dPointerPen_GetPenPosition_m89AA6134537B7470C1CA9E82831750023CCC5EA2(NULL);
		float L_9;
		L_9 = P3dPointerPen_GetPenPressure_mFE3346E58D115A38D34980C0D7EDEC416594030C(NULL);
		bool L_10;
		L_10 = P3dPointer_GetFinger_m12856905DE9F202BF8C40450EF2BB1B1BE5E5C20(__this, L_7, L_8, L_9, (bool)1, (&V_3), NULL);
		// cachedHitScreenBase.HandleFingerUpdate(finger, false, false);
		P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* L_11 = ((P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302*)__this)->___cachedHitScreenBase_4;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_12 = V_3;
		NullCheck(L_11);
		VirtualActionInvoker3< Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8*, bool, bool >::Invoke(4 /* System.Void PaintIn3D.P3dHitScreenBase::HandleFingerUpdate(CW.Common.CwInputManager/Finger,System.Boolean,System.Boolean) */, L_11, L_12, (bool)0, (bool)0);
	}

IL_005b:
	{
		// if (enablePaint == true)
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_008b;
		}
	}
	{
		// var down = GetFinger(PAINT_FINGER_INDEX, GetPenPosition(), GetPenPressure(), true, out finger);
		int32_t L_14 = __this->___PAINT_FINGER_INDEX_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = P3dPointerPen_GetPenPosition_m89AA6134537B7470C1CA9E82831750023CCC5EA2(NULL);
		float L_16;
		L_16 = P3dPointerPen_GetPenPressure_mFE3346E58D115A38D34980C0D7EDEC416594030C(NULL);
		bool L_17;
		L_17 = P3dPointer_GetFinger_m12856905DE9F202BF8C40450EF2BB1B1BE5E5C20(__this, L_14, L_15, L_16, (bool)1, (&V_3), NULL);
		V_4 = L_17;
		// cachedHitScreenBase.HandleFingerUpdate(finger, down, newHeld == false);
		P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* L_18 = ((P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302*)__this)->___cachedHitScreenBase_4;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_19 = V_3;
		bool L_20 = V_4;
		bool L_21 = V_0;
		NullCheck(L_18);
		VirtualActionInvoker3< Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8*, bool, bool >::Invoke(4 /* System.Void PaintIn3D.P3dHitScreenBase::HandleFingerUpdate(CW.Common.CwInputManager/Finger,System.Boolean,System.Boolean) */, L_18, L_19, L_20, (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0));
	}

IL_008b:
	{
		// if (enablePreview == false)
		bool L_22 = V_1;
		if (L_22)
		{
			goto IL_009b;
		}
	}
	{
		// TryNullFinger(PREVIEW_FINGER_INDEX);
		int32_t L_23 = __this->___PREVIEW_FINGER_INDEX_8;
		bool L_24;
		L_24 = P3dPointer_TryNullFinger_m1905F716C6DCCF1F2D576CA6877A5877EE91632A(__this, L_23, NULL);
	}

IL_009b:
	{
		// if (enablePaint == false)
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_00ab;
		}
	}
	{
		// TryNullFinger(PAINT_FINGER_INDEX);
		int32_t L_26 = __this->___PAINT_FINGER_INDEX_9;
		bool L_27;
		L_27 = P3dPointer_TryNullFinger_m1905F716C6DCCF1F2D576CA6877A5877EE91632A(__this, L_26, NULL);
	}

IL_00ab:
	{
		// oldHeld = newHeld;
		bool L_28 = V_0;
		__this->___oldHeld_10 = L_28;
		// }
		return;
	}
}
// System.Boolean PaintIn3D.P3dPointerPen::GetPenExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointerPen_GetPenExists_m840D171DC8DEA8AE6152B1263114994F65550482 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Vector2 PaintIn3D.P3dPointerPen::GetPenPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 P3dPointerPen_GetPenPosition_m89AA6134537B7470C1CA9E82831750023CCC5EA2 (const RuntimeMethod* method) 
{
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_0;
	}
}
// System.Single PaintIn3D.P3dPointerPen::GetPenPressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPointerPen_GetPenPressure_mFE3346E58D115A38D34980C0D7EDEC416594030C (const RuntimeMethod* method) 
{
	{
		// return 0.0f;
		return (0.0f);
	}
}
// System.Boolean PaintIn3D.P3dPointerPen::GetPenHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool P3dPointerPen_GetPenHeld_m47FF55344EE93C9CDACAB6D41AFA583DA88988B8 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void PaintIn3D.P3dPointerPen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointerPen__ctor_m95315CB608D5727CEEF2CDF5E5A3423E0071D30F (P3dPointerPen_tD52B01CDAF3AAC78196CE0D30272B12A48411362* __this, const RuntimeMethod* method) 
{
	{
		// private readonly int PREVIEW_FINGER_INDEX = -1;
		__this->___PREVIEW_FINGER_INDEX_8 = (-1);
		// private readonly int PAINT_FINGER_INDEX = 1;
		__this->___PAINT_FINGER_INDEX_9 = 1;
		P3dPointer__ctor_mC0C83DD02534A87FC2AE3903D127DBDB33695F05(__this, NULL);
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
// System.Void PaintIn3D.P3dPointerTouch::set_Offset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointerTouch_set_Offset_m26629D2C2CF36EED48D4E6E4AA8CD6DB0010275B (P3dPointerTouch_tFA3F92373690EE86D5378CCC6A153CCD3B4AE352* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Offset { set { offset = value; } get { return offset; } } [SerializeField] private float offset;
		float L_0 = ___0_value;
		__this->___offset_6 = L_0;
		// public float Offset { set { offset = value; } get { return offset; } } [SerializeField] private float offset;
		return;
	}
}
// System.Single PaintIn3D.P3dPointerTouch::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float P3dPointerTouch_get_Offset_m034228ACAD65EB5797699521E14D59E45E4A322D (P3dPointerTouch_tFA3F92373690EE86D5378CCC6A153CCD3B4AE352* __this, const RuntimeMethod* method) 
{
	{
		// public float Offset { set { offset = value; } get { return offset; } } [SerializeField] private float offset;
		float L_0 = __this->___offset_6;
		return L_0;
	}
}
// System.Void PaintIn3D.P3dPointerTouch::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointerTouch_Update_m5D21EE1A48F220860E46BDB2907460C8871CDD9F (P3dPointerTouch_tFA3F92373690EE86D5378CCC6A153CCD3B4AE352* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CwInputManager_t92456D41A22047264E18E84F135DB75F3E6AA0B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	{
		// for (var i = 0; i < CwInput.GetTouchCount(); i++)
		V_1 = 0;
		goto IL_005c;
	}

IL_0004:
	{
		// CwInput.GetTouch(i, out index, out position, out pressure, out set);
		int32_t L_0 = V_1;
		CwInput_GetTouch_mD60E0699649F3E4B8CC3F02BF10F40C2215D80BF(L_0, (&V_2), (&V_3), (&V_4), (&V_5), NULL);
		// position.y += offset * CwInputManager.ScaleFactor;
		float* L_1 = (&(&V_3)->___y_1);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = __this->___offset_6;
		il2cpp_codegen_runtime_class_init_inline(CwInputManager_t92456D41A22047264E18E84F135DB75F3E6AA0B5_il2cpp_TypeInfo_var);
		float L_5;
		L_5 = CwInputManager_get_ScaleFactor_m1A41E25DACE4A55583764544DBE1400C5BC1B74A(NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// var down = GetFinger(index, position, pressure, set, out finger);
		int32_t L_6 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_3;
		float L_8 = V_4;
		bool L_9 = V_5;
		bool L_10;
		L_10 = P3dPointer_GetFinger_m12856905DE9F202BF8C40450EF2BB1B1BE5E5C20(__this, L_6, L_7, L_8, L_9, (&V_0), NULL);
		V_6 = L_10;
		// cachedHitScreenBase.HandleFingerUpdate(finger, down, set == false);
		P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* L_11 = ((P3dPointer_tA05FE532F6606C2C1AE7F5E5CEE39424C12BF302*)__this)->___cachedHitScreenBase_4;
		Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8* L_12 = V_0;
		bool L_13 = V_6;
		bool L_14 = V_5;
		NullCheck(L_11);
		VirtualActionInvoker3< Finger_tF0FFA146E12F3DEF1F354487835AA90A59834AB8*, bool, bool >::Invoke(4 /* System.Void PaintIn3D.P3dHitScreenBase::HandleFingerUpdate(CW.Common.CwInputManager/Finger,System.Boolean,System.Boolean) */, L_11, L_12, L_13, (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0));
		// if (set == false)
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_0058;
		}
	}
	{
		// TryNullFinger(index);
		int32_t L_16 = V_2;
		bool L_17;
		L_17 = P3dPointer_TryNullFinger_m1905F716C6DCCF1F2D576CA6877A5877EE91632A(__this, L_16, NULL);
	}

IL_0058:
	{
		// for (var i = 0; i < CwInput.GetTouchCount(); i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005c:
	{
		// for (var i = 0; i < CwInput.GetTouchCount(); i++)
		int32_t L_19 = V_1;
		int32_t L_20;
		L_20 = CwInput_GetTouchCount_m1D0A09D098D1B6A2B433CA0948510C4C299B6031(NULL);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PaintIn3D.P3dPointerTouch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P3dPointerTouch__ctor_m57E677B00F40CA2C6A9A143488BF21053D7593C0 (P3dPointerTouch_tFA3F92373690EE86D5378CCC6A153CCD3B4AE352* __this, const RuntimeMethod* method) 
{
	{
		P3dPointer__ctor_mC0C83DD02534A87FC2AE3903D127DBDB33695F05(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_X_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Y_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CwidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CheightU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 P3dModel_get_Hash_m6D731BDD400F96C7F4883BE82AE7C486455832D5_inline (P3dModel_tC4035590CA878A52F476C6E756D6753A15D42B45* __this, const RuntimeMethod* method) 
{
	{
		// public P3dHash Hash { set { hash = value; P3dSerialization.TryRegister(this, hash); } get { return hash; } } [SerializeField] protected P3dHash hash;
		P3dHash_t23798B546524E21E61CBCA27F42D1D6130F913E7 L_0 = __this->___hash_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* P3dPaintableTexture_get_Instances_m8F189AB6D36C8D1473A0A4FE72F735F9C9DE407C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LinkedList<P3dPaintableTexture> Instances { get { return instances; } } private static LinkedList<P3dPaintableTexture> instances = new LinkedList<P3dPaintableTexture>(); private LinkedListNode<P3dPaintableTexture> instancesNode;
		il2cpp_codegen_runtime_class_init_inline(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var);
		LinkedList_1_t7549AC715C205439D844F1939DE930C926B49D9C* L_0 = ((P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_StaticFields*)il2cpp_codegen_static_fields_for(P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63_il2cpp_TypeInfo_var))->___instances_48;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* P3dPaintableTexture_get_Current_m42C0BE96C6A74B703F1A64763F921D15752F5092_inline (P3dPaintableTexture_t51EE35DC0EECDF4A41ED0BB3CE36B038CEF49F63* __this, const RuntimeMethod* method) 
{
	{
		// return current;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___current_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* P3dMask_get_Texture_m9C39FCD0317704F16992AB17FCDE674A530440CA_inline (P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* __this, const RuntimeMethod* method) 
{
	{
		// public Texture Texture { set { texture = value; } get { return texture; } } [SerializeField] private Texture texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___texture_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t P3dMask_get_Channel_m39F9AADE2834AE09BDD6ACD19CFFF99F96CC04F3_inline (P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* __this, const RuntimeMethod* method) 
{
	{
		// public P3dChannel Channel { set { channel = value; } get { return channel; } } [SerializeField] private P3dChannel channel = P3dChannel.Alpha;
		int32_t L_0 = __this->___channel_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 P3dMask_get_Stretch_m364B963C5C3509C111A5264B8654FA88BA55A22A_inline (P3dMask_t6EA48EB745F6B5B8A9D21A7C5EC45DDA9D25E35A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Stretch { set { stretch = value; } get { return stretch; } } [SerializeField] private Vector2 stretch = Vector2.one;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___stretch_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B P3dPaintSphere_get_BlendMode_m82EABBF6B6219F7DF181553E8BAFE0E30D45FDBD_inline (P3dPaintSphere_tC477D082978B0E9427C275972F619A0E63EFC07B* __this, const RuntimeMethod* method) 
{
	{
		// public P3dBlendMode BlendMode { set { blendMode = value; } get { return blendMode; } } [SerializeField] private P3dBlendMode blendMode = P3dBlendMode.AlphaBlend(Vector4.one);
		P3dBlendMode_t59D98FAB72980963D82A3BBCFF491873C9B8675B L_0 = __this->___blendMode_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB P3dHitScreenBase_get_GuiLayers_m31041116E756727015CE253DB025BAA28DBDE6AB_inline (P3dHitScreenBase_tE909309E6193A4F0F2A7081D733AEA438749BBAC* __this, const RuntimeMethod* method) 
{
	{
		// public LayerMask GuiLayers { set { guiLayers = value; } get { return guiLayers; } } [SerializeField] private LayerMask guiLayers = 1 << 5;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___guiLayers_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mD67FD4914AE940ACA1C55F0221107D63AF44C5C6_gshared_inline (Action_1_t052A9660F18FC1C13652092B0E020E3CFC1B110F* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
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
