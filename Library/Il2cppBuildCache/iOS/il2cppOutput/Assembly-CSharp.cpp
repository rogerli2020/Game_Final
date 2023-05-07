#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<Ink.Runtime.Choice>
struct Action_1_t16D9E813F23DBC6B2E5DBFB7ABC91BCA2C679D18;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Ink.Runtime.Story>
struct Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Action`2<System.String,System.Object[]>
struct Action_2_t48A40D13AC950EA4E32E5F1B0B1787B102798910;
// System.Action`4<System.String,System.Object[],System.String,System.Object>
struct Action_4_t6F52DFEEE9C8656E1874926136A959F191DA8BDE;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.Story/ExternalFunctionDef>
struct Dictionary_2_tF062828A54ADD443C677C71A299000A1A7FF0ECA;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.Story/VariableObserver>
struct Dictionary_2_t0FC1AA36A3E09D400A2240C13ACFB7B4BAA39FF4;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_tC189DB2F3849FDE7C64E0E497B557212046F70ED;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Ink.Runtime.Choice>
struct List_1_t0FC6C36130B1779B147FDAF435332956D11125B2;
// System.Collections.Generic.List`1<Ink.Runtime.Container>
struct List_1_t349BFECBCFD8087208E39C04E6DF080F8E0507A9;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// Ink.Runtime.Choice[]
struct ChoiceU5BU5D_tB256304D6B83B8D473E656BAE753810C836CA4BC;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// BasicInkExample
struct BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BossTriggerBox
struct BossTriggerBox_tB60DDC791643D1246B685B9B12C38B62ABD446A8;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraBehavior
struct CameraBehavior_t7F1E8CF807060E73AD4984151E22E62E59CCB71A;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Character
struct Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61;
// Ink.Runtime.Choice
struct Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Ink.Runtime.Container
struct Container_t74302BC1028974B0A346A43F334AECB681D79579;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Damage
struct Damage_tF640D3076BC620E4202275ED78B842A7F36C804E;
// Ink.Runtime.DebugMetadata
struct DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10;
// Ink.ErrorHandler
struct ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F;
// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GhostMob
struct GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA;
// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95;
// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A;
// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B;
// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E;
// Ink.Runtime.ListDefinitionsOrigin
struct ListDefinitionsOrigin_tBDD8343C1C7129DD84565AB1E6C435FECE0BEF89;
// MageScript
struct MageScript_t5602D358F05952C008EB60F0890D269FAF6B934B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NPCBehavior
struct NPCBehavior_t48D7D90C13962BCB12461B6B78226076B36F4183;
// NPCOverlapCircle
struct NPCOverlapCircle_tEC4CC1D7CD801661293C17D296FA5D077F898B23;
// NextScenes
struct NextScenes_tB3C64B9F6028DA82B17138AA4A6F20A26479F95E;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Ink.Runtime.Path
struct Path_tCC1F1626DB60711735401EA8FA76A191D9014600;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerOther
struct PlayerOther_t43A2DE7CFCC1D5D569F530E236CD50F7196C0EEE;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Ink.Runtime.Profiler
struct Profiler_tF4E485997B5D938116F7C370F114B9EBA327BBFA;
// QuitGameOnKeypress
struct QuitGameOnKeypress_t43D92D44E6B02FE6C8A804E4BD0E48692DBC9AD9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneSwitchScript
struct SceneSwitchScript_tEA62AEFE2A48AB5863D68D176B02EAFEE62B8DD1;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Shangyu_boss
struct Shangyu_boss_t9B5AE1FD56ED520E8071C66923174EBB57827556;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// Ink.Runtime.Story
struct Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A;
// Ink.Runtime.StoryState
struct StoryState_t93975BE855AACA9E18087DADAAF0FFE6312F26EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// BasicInkExample/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Ink.Runtime.CallStack/Thread
struct Thread_tC2410B9C77D297A37CB37AF1D7826155F3C54D42;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// Character/<FlashColor>d__16
struct U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092;
// Item/<WaitForCollidable>d__11
struct U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Menu/<WaitForSceneLoad>d__5
struct U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04194CE40DE9941EB4C568634F82616A6D46F9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral0AD8FE68646D3B34B85891FB64D6E04E2F51F3C2;
IL2CPP_EXTERN_C String_t* _stringLiteral0B9E5D894A3B7F7F3D00DCF14E96AA95D4D232FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1;
IL2CPP_EXTERN_C String_t* _stringLiteral0F9B26F223F7BDA29F60980386E99DD4DA72C27F;
IL2CPP_EXTERN_C String_t* _stringLiteral1ACF4B5AD43BEDD7DBBBC1DA72A722539EC8082B;
IL2CPP_EXTERN_C String_t* _stringLiteral1CE87A1371B287F5620FA74E07BBC1ACB958DE16;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteral41516F191D29670728E46A0A29A67AFB680F00B4;
IL2CPP_EXTERN_C String_t* _stringLiteral432BE89141C2B5D42796C8B799CE0A7C1CFB99FD;
IL2CPP_EXTERN_C String_t* _stringLiteral4357B0A62988D04D31D82A4191051976EB4F08DA;
IL2CPP_EXTERN_C String_t* _stringLiteral4C0664A0A38FD57804FC8FB1EFA743C560F5BFF2;
IL2CPP_EXTERN_C String_t* _stringLiteral50A8290750B9DF9F93C5822390EB77CC3C604E56;
IL2CPP_EXTERN_C String_t* _stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A;
IL2CPP_EXTERN_C String_t* _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8;
IL2CPP_EXTERN_C String_t* _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral5855E0295E3480BADAB1C4F310532412F4E7F529;
IL2CPP_EXTERN_C String_t* _stringLiteral5A01A5E45748F1DDB1F8BA8166D751C165682CFB;
IL2CPP_EXTERN_C String_t* _stringLiteral5C3DBF6BF11FACB2B152784999E32FF5664D84CD;
IL2CPP_EXTERN_C String_t* _stringLiteral631D4C33AC2BF784A34017CCA931BDBE1F4AF8BF;
IL2CPP_EXTERN_C String_t* _stringLiteral70BCEF11BA07D4A061BF7D50AD8A6150431D493F;
IL2CPP_EXTERN_C String_t* _stringLiteral7381FC3D6767D4569988A3D7F3828F68DAE25517;
IL2CPP_EXTERN_C String_t* _stringLiteral7A272869252F7DC58D4AFA3D6D49195788ED632D;
IL2CPP_EXTERN_C String_t* _stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1;
IL2CPP_EXTERN_C String_t* _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F97764CD30D068972E939605A30B69C6A5825DB;
IL2CPP_EXTERN_C String_t* _stringLiteral843B29D0BBC4649D45DB1A5558E36BECA7E92C36;
IL2CPP_EXTERN_C String_t* _stringLiteral861FAA2C0AA91F21AD617175333ED12C3C91E383;
IL2CPP_EXTERN_C String_t* _stringLiteral8FCF065371C0A77179B0066EE37B691B0DEF6AC6;
IL2CPP_EXTERN_C String_t* _stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2;
IL2CPP_EXTERN_C String_t* _stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral9BE072D8D0EE9593CEC0DCAECE8F5FBF90242A19;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralA2474EB85E7EEF13C75BB9EE2A361443B79F99AC;
IL2CPP_EXTERN_C String_t* _stringLiteralA5DAA4CCAB969C478942849A4E50269CFF2090B3;
IL2CPP_EXTERN_C String_t* _stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C;
IL2CPP_EXTERN_C String_t* _stringLiteralB82BE4803EEDE4F52B7447F6BB8CA17950CFBC3B;
IL2CPP_EXTERN_C String_t* _stringLiteralB84841763BB9250DC755FBC2E78377B8C151A0E7;
IL2CPP_EXTERN_C String_t* _stringLiteralBEF8DEEAD936F0511A4BFB8461EBCD45C5696EF3;
IL2CPP_EXTERN_C String_t* _stringLiteralBF5C3432D439613E3FA9D190AEE92C661BEF4805;
IL2CPP_EXTERN_C String_t* _stringLiteralC53D54A1693AB435FC7B249796B95A2188D95C30;
IL2CPP_EXTERN_C String_t* _stringLiteralC7DED49BAA78CD757AAB6400B4C8367DDFAABB85;
IL2CPP_EXTERN_C String_t* _stringLiteralC910E0B22C4AE8F18628BB2211E9B1A07D1B511C;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCC7A769437AB44F803B6A52648E949FE710AF2;
IL2CPP_EXTERN_C String_t* _stringLiteralCD37410E9672AFBBBAA901ECAEF13287D7D3B0D9;
IL2CPP_EXTERN_C String_t* _stringLiteralD2BC17AB0D91DEA7C7AF564DFF70B572364ABEF9;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A59EABF0C51AF863757F81CFC978C0C90E24B3;
IL2CPP_EXTERN_C String_t* _stringLiteralDB90E9B7DCCC2C7E4208C10695C48FD2F200CB69;
IL2CPP_EXTERN_C String_t* _stringLiteralEA20BA1CAFBFF139DA392FF1E0399B8197E02121;
IL2CPP_EXTERN_C String_t* _stringLiteralEE6236541FFB93B7ADD42417A04CF149F1D27196;
IL2CPP_EXTERN_C String_t* _stringLiteralF19D9E4D225560E6B4A0D98F284B4A27FDB2CC9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3DA3DFAF67DBA03FF661AB502A94A5A6A4677F0;
IL2CPP_EXTERN_C String_t* _stringLiteralF3EFA0628E5D08FE8A377CFAEFEE7EDE87A2172B;
IL2CPP_EXTERN_C String_t* _stringLiteralFBBC47E7F2139AAFD43B9CC29413BBECD9C270A8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E;
IL2CPP_EXTERN_C const RuntimeMethod* BasicInkExample_U3CRefreshViewU3Eb__7_1_m217ECB83A1C71BFD5B2B83A35A2A46E814E668B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_m1DF360D4574B72DBFE3008DB7BFC2D4EDA680CEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC5F30923A946D536424C8D9ACB3938D8289C4C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m33C34E4F1C77B491E24DCCBF07C43639016B2247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_m83253A9F5650DB994C8A18B44B6AFD24D0BA8C4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2_m97BC6DD4B065584EB738E06266BC51A3E57A89B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2E27425543BC9E37A35AC28CFFEA0D6A5574133C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m75363F90491ABE67C1772E917B8BE2F7C83F3D15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m6699524C00C6758053CF86F067C28FC28669B016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mD0AD654B5C45D1968901D27D7F4F1B486215DCD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFlashColorU3Ed__16_System_Collections_IEnumerator_Reset_mAA9B5C224C964A1E655E7D9BBC67CDCBB1AB52DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CRefreshViewU3Eb__0_m07A5E31F88E7AA6FFC69F3165C7FE8D30AA74F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForCollidableU3Ed__11_System_Collections_IEnumerator_Reset_m92209B7A8AB5B6C65C7023CAFBEE9C884FDB8F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForSceneLoadU3Ed__5_System_Collections_IEnumerator_Reset_m48A5510F43685BBE84BB6A6EA5A009BC43BEC5D2_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
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
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____dictionary_0;
};

// System.Collections.Generic.List`1<Ink.Runtime.Choice>
struct List_1_t0FC6C36130B1779B147FDAF435332956D11125B2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChoiceU5BU5D_tB256304D6B83B8D473E656BAE753810C836CA4BC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// Ink.Runtime.Object
struct Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB  : public RuntimeObject
{
	// Ink.Runtime.Object Ink.Runtime.Object::<parent>k__BackingField
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___U3CparentU3Ek__BackingField_0;
	// Ink.Runtime.DebugMetadata Ink.Runtime.Object::_debugMetadata
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ____debugMetadata_1;
	// Ink.Runtime.Path Ink.Runtime.Object::_path
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ____path_2;
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

// BasicInkExample/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08  : public RuntimeObject
{
	// Ink.Runtime.Choice BasicInkExample/<>c__DisplayClass7_0::choice
	Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* ___choice_0;
	// BasicInkExample BasicInkExample/<>c__DisplayClass7_0::<>4__this
	BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* ___U3CU3E4__this_1;
};

// Character/<FlashColor>d__16
struct U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092  : public RuntimeObject
{
	// System.Int32 Character/<FlashColor>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Character/<FlashColor>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Character Character/<FlashColor>d__16::<>4__this
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* ___U3CU3E4__this_2;
	// System.Single Character/<FlashColor>d__16::red
	float ___red_3;
	// System.Single Character/<FlashColor>d__16::green
	float ___green_4;
	// System.Single Character/<FlashColor>d__16::blue
	float ___blue_5;
	// System.Single Character/<FlashColor>d__16::opacity
	float ___opacity_6;
	// System.Single Character/<FlashColor>d__16::time
	float ___time_7;
};

// Item/<WaitForCollidable>d__11
struct U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F  : public RuntimeObject
{
	// System.Int32 Item/<WaitForCollidable>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Item/<WaitForCollidable>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Item Item/<WaitForCollidable>d__11::<>4__this
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___U3CU3E4__this_2;
};

// Menu/<WaitForSceneLoad>d__5
struct U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5  : public RuntimeObject
{
	// System.Int32 Menu/<WaitForSceneLoad>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Menu/<WaitForSceneLoad>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
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

// Ink.Runtime.Choice
struct Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// System.String Ink.Runtime.Choice::<text>k__BackingField
	String_t* ___U3CtextU3Ek__BackingField_3;
	// System.String Ink.Runtime.Choice::sourcePath
	String_t* ___sourcePath_4;
	// System.Int32 Ink.Runtime.Choice::<index>k__BackingField
	int32_t ___U3CindexU3Ek__BackingField_5;
	// Ink.Runtime.Path Ink.Runtime.Choice::targetPath
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___targetPath_6;
	// Ink.Runtime.CallStack/Thread Ink.Runtime.Choice::<threadAtGeneration>k__BackingField
	Thread_tC2410B9C77D297A37CB37AF1D7826155F3C54D42* ___U3CthreadAtGenerationU3Ek__BackingField_7;
	// System.Int32 Ink.Runtime.Choice::originalThreadIndex
	int32_t ___originalThreadIndex_8;
	// System.Boolean Ink.Runtime.Choice::isInvisibleDefault
	bool ___isInvisibleDefault_9;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// Ink.Runtime.Story
struct Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// Ink.ErrorHandler Ink.Runtime.Story::onError
	ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728* ___onError_5;
	// System.Action Ink.Runtime.Story::onDidContinue
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onDidContinue_6;
	// System.Action`1<Ink.Runtime.Choice> Ink.Runtime.Story::onMakeChoice
	Action_1_t16D9E813F23DBC6B2E5DBFB7ABC91BCA2C679D18* ___onMakeChoice_7;
	// System.Action`2<System.String,System.Object[]> Ink.Runtime.Story::onEvaluateFunction
	Action_2_t48A40D13AC950EA4E32E5F1B0B1787B102798910* ___onEvaluateFunction_8;
	// System.Action`4<System.String,System.Object[],System.String,System.Object> Ink.Runtime.Story::onCompleteEvaluateFunction
	Action_4_t6F52DFEEE9C8656E1874926136A959F191DA8BDE* ___onCompleteEvaluateFunction_9;
	// System.Action`2<System.String,System.Object[]> Ink.Runtime.Story::onChoosePathString
	Action_2_t48A40D13AC950EA4E32E5F1B0B1787B102798910* ___onChoosePathString_10;
	// System.Collections.Generic.List`1<Ink.Runtime.Container> Ink.Runtime.Story::_prevContainers
	List_1_t349BFECBCFD8087208E39C04E6DF080F8E0507A9* ____prevContainers_11;
	// System.Boolean Ink.Runtime.Story::<allowExternalFunctionFallbacks>k__BackingField
	bool ___U3CallowExternalFunctionFallbacksU3Ek__BackingField_12;
	// Ink.Runtime.Container Ink.Runtime.Story::_mainContentContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____mainContentContainer_13;
	// Ink.Runtime.ListDefinitionsOrigin Ink.Runtime.Story::_listDefinitions
	ListDefinitionsOrigin_tBDD8343C1C7129DD84565AB1E6C435FECE0BEF89* ____listDefinitions_14;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.Story/ExternalFunctionDef> Ink.Runtime.Story::_externals
	Dictionary_2_tF062828A54ADD443C677C71A299000A1A7FF0ECA* ____externals_15;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.Story/VariableObserver> Ink.Runtime.Story::_variableObservers
	Dictionary_2_t0FC1AA36A3E09D400A2240C13ACFB7B4BAA39FF4* ____variableObservers_16;
	// System.Boolean Ink.Runtime.Story::_hasValidatedExternals
	bool ____hasValidatedExternals_17;
	// Ink.Runtime.Container Ink.Runtime.Story::_temporaryEvaluationContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____temporaryEvaluationContainer_18;
	// Ink.Runtime.StoryState Ink.Runtime.Story::_state
	StoryState_t93975BE855AACA9E18087DADAAF0FFE6312F26EF* ____state_19;
	// System.Boolean Ink.Runtime.Story::_asyncContinueActive
	bool ____asyncContinueActive_20;
	// Ink.Runtime.StoryState Ink.Runtime.Story::_stateSnapshotAtLastNewline
	StoryState_t93975BE855AACA9E18087DADAAF0FFE6312F26EF* ____stateSnapshotAtLastNewline_21;
	// System.Boolean Ink.Runtime.Story::_sawLookaheadUnsafeFunctionAfterNewline
	bool ____sawLookaheadUnsafeFunctionAfterNewline_22;
	// System.Int32 Ink.Runtime.Story::_recursiveContinueCount
	int32_t ____recursiveContinueCount_23;
	// System.Boolean Ink.Runtime.Story::_asyncSaving
	bool ____asyncSaving_24;
	// Ink.Runtime.Profiler Ink.Runtime.Story::_profiler
	Profiler_tF4E485997B5D938116F7C370F114B9EBA327BBFA* ____profiler_25;
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

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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
	intptr_t ___method_ptr_0;
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
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Ink.Runtime.Story>
struct Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BasicInkExample
struct BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.String> BasicInkExample::dialogueOverview
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___dialogueOverview_5;
	// UnityEngine.TextAsset BasicInkExample::inkJSONAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___inkJSONAsset_6;
	// Ink.Runtime.Story BasicInkExample::story
	Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* ___story_7;
	// UnityEngine.UI.Text BasicInkExample::dialogueTextField
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___dialogueTextField_8;
	// UnityEngine.UI.Text BasicInkExample::speakerNameField
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___speakerNameField_9;
	// UnityEngine.UI.Image BasicInkExample::speakerAvatarField
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___speakerAvatarField_10;
	// UnityEngine.Canvas BasicInkExample::choicesCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___choicesCanvas_11;
	// GameManager BasicInkExample::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_12;
	// UnityEngine.AudioSource BasicInkExample::talkingSoundEffect
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___talkingSoundEffect_13;
	// UnityEngine.Canvas BasicInkExample::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_14;
	// UnityEngine.UI.Text BasicInkExample::textPrefab
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textPrefab_15;
	// UnityEngine.UI.Button BasicInkExample::buttonPrefab
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonPrefab_16;
};

// BossTriggerBox
struct BossTriggerBox_tB60DDC791643D1246B685B9B12C38B62ABD446A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager BossTriggerBox::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_4;
	// System.Boolean BossTriggerBox::alreadyTriggered
	bool ___alreadyTriggered_5;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// CameraBehavior
struct CameraBehavior_t7F1E8CF807060E73AD4984151E22E62E59CCB71A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraBehavior::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
};

// Character
struct Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Character::initialHealth
	int32_t ___initialHealth_4;
	// UnityEngine.GameObject Character::itemPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___itemPrefab_5;
	// UnityEngine.GameObject Character::gameManager
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameManager_6;
	// UnityEngine.AudioSource Character::pickupSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___pickupSound_7;
	// UnityEngine.AudioSource Character::dropSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___dropSound_8;
	// UnityEngine.AudioSource Character::healSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___healSound_9;
	// UnityEngine.AudioSource Character::hurtSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___hurtSound_10;
	// UnityEngine.AudioSource Character::deathSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___deathSound_11;
	// System.Int32 Character::health
	int32_t ___health_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Character::_inventory
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____inventory_13;
};

// Damage
struct Damage_tF640D3076BC620E4202275ED78B842A7F36C804E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Damage::damage
	int32_t ___damage_4;
	// System.Single Damage::disappearAfter
	float ___disappearAfter_5;
	// System.Single Damage::timePassed
	float ___timePassed_6;
	// UnityEngine.AudioSource Damage::shing
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___shing_7;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameManager::gameUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameUI_4;
	// UnityEngine.GameObject GameManager::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
	// UnityEngine.GameObject GameManager::Camera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Camera_6;
	// System.String GameManager::nearestNPCId
	String_t* ___nearestNPCId_7;
	// UnityEngine.Sprite GameManager::greenPlantSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___greenPlantSprite_8;
	// UnityEngine.Sprite GameManager::blueKeySprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___blueKeySprite_9;
	// UnityEngine.Sprite GameManager::knifeSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___knifeSprite_10;
	// UnityEngine.Sprite GameManager::swordSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___swordSprite_11;
	// UnityEngine.Sprite GameManager::diamondSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___diamondSprite_12;
	// UnityEngine.Sprite GameManager::blueDoorUnlockSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___blueDoorUnlockSprite_13;
	// UnityEngine.GameObject GameManager::blueDoor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___blueDoor_14;
	// UnityEngine.Sprite GameManager::MageSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___MageSprite_15;
	// UnityEngine.Sprite GameManager::BlacksmithSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___BlacksmithSprite_16;
	// UnityEngine.Sprite GameManager::BlueDoorSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___BlueDoorSprite_17;
	// UnityEngine.Sprite GameManager::BossSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___BossSprite_18;
	// System.Boolean GameManager::mageTaskDelegated
	bool ___mageTaskDelegated_19;
	// UnityEngine.TextAsset GameManager::mageInitialConversation
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___mageInitialConversation_20;
	// UnityEngine.TextAsset GameManager::mageNoItemConversation
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___mageNoItemConversation_21;
	// UnityEngine.TextAsset GameManager::mageFinalConversation
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___mageFinalConversation_22;
	// UnityEngine.TextAsset GameManager::blackSmithInitialConvo
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___blackSmithInitialConvo_23;
	// UnityEngine.TextAsset GameManager::blackSmithAfterConvo
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___blackSmithAfterConvo_24;
	// UnityEngine.TextAsset GameManager::blueDoorInitial
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___blueDoorInitial_25;
	// UnityEngine.TextAsset GameManager::blueDoorAfter
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___blueDoorAfter_26;
	// UnityEngine.TextAsset GameManager::mage2Initial
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___mage2Initial_27;
	// UnityEngine.TextAsset GameManager::mage2After
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___mage2After_28;
	// UnityEngine.TextAsset GameManager::bossTalk
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___bossTalk_29;
	// UnityEngine.AudioSource GameManager::bgm1
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgm1_30;
	// UnityEngine.AudioSource GameManager::bgm2
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgm2_31;
	// UnityEngine.AudioSource GameManager::currentAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___currentAudioSource_32;
	// UnityEngine.GameObject GameManager::PauseScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PauseScreen_33;
	// UnityEngine.AudioSource GameManager::unlockSFX
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___unlockSFX_34;
	// System.String GameManager::currentObjective
	String_t* ___currentObjective_35;
};

// GhostMob
struct GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GhostMob::normalMoveSpeed
	float ___normalMoveSpeed_4;
	// System.Single GhostMob::stunMoveSpeed
	float ___stunMoveSpeed_5;
	// System.Single GhostMob::moveSpeed
	float ___moveSpeed_6;
	// System.Single GhostMob::trackingDistance
	float ___trackingDistance_7;
	// System.Single GhostMob::detectionRange
	float ___detectionRange_8;
	// System.Single GhostMob::stopDistance
	float ___stopDistance_9;
	// System.Single GhostMob::stunDuration
	float ___stunDuration_10;
	// System.Int32 GhostMob::damage
	int32_t ___damage_11;
	// UnityEngine.Transform GhostMob::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_12;
	// UnityEngine.AudioSource GhostMob::GhostSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___GhostSound_13;
	// UnityEngine.SpriteRenderer GhostMob::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_14;
	// System.Boolean GhostMob::alreadyPlaying
	bool ___alreadyPlaying_15;
};

// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Item::itemId
	String_t* ___itemId_4;
	// System.Single Item::collidableAfter
	float ___collidableAfter_5;
	// UnityEngine.Sprite Item::greenPlantSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___greenPlantSprite_6;
	// UnityEngine.Sprite Item::blueKeySprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___blueKeySprite_7;
	// UnityEngine.Sprite Item::knifeSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___knifeSprite_8;
	// UnityEngine.Sprite Item::diamondSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___diamondSprite_9;
	// UnityEngine.Sprite Item::swordSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___swordSprite_10;
	// UnityEngine.SpriteRenderer Item::_sr
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ____sr_11;
};

// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single JoystickPlayerExample::speed
	float ___speed_4;
	// VariableJoystick JoystickPlayerExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_5;
	// UnityEngine.Rigidbody JoystickPlayerExample::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
};

// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VariableJoystick JoystickSetterExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_4;
	// UnityEngine.UI.Text JoystickSetterExample::valueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___valueText_5;
	// UnityEngine.UI.Image JoystickSetterExample::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// UnityEngine.Sprite[] JoystickSetterExample::axisSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___axisSprites_7;
};

// MageScript
struct MageScript_t5602D358F05952C008EB60F0890D269FAF6B934B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Menu::_bgm
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____bgm_4;
	// UnityEngine.AudioSource Menu::_play
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____play_5;
	// UnityEngine.Animator Menu::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_6;
};

// NPCBehavior
struct NPCBehavior_t48D7D90C13962BCB12461B6B78226076B36F4183  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String NPCBehavior::temperament
	String_t* ___temperament_4;
};

// NPCOverlapCircle
struct NPCOverlapCircle_tEC4CC1D7CD801661293C17D296FA5D077F898B23  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager NPCOverlapCircle::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_4;
	// UnityEngine.GameObject NPCOverlapCircle::parent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent_5;
	// System.String NPCOverlapCircle::NPCid
	String_t* ___NPCid_6;
	// System.Boolean NPCOverlapCircle::isInRange
	bool ___isInRange_7;
};

// NextScenes
struct NextScenes_tB3C64B9F6028DA82B17138AA4A6F20A26479F95E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource NextScenes::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_4;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Player::speed
	float ___speed_4;
	// UnityEngine.Rigidbody2D Player::_rigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rigidbody_5;
	// Character Player::_character
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* ____character_6;
	// System.String Player::facing
	String_t* ___facing_7;
	// System.Single Player::attackCoolDown
	float ___attackCoolDown_8;
	// System.Int32 Player::attackDamage
	int32_t ___attackDamage_9;
	// UnityEngine.GameObject Player::attackPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackPrefab_10;
	// UnityEngine.GameObject Player::strongAttackPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___strongAttackPrefab_11;
	// FixedJoystick Player::_joystick
	FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* ____joystick_12;
	// System.String Player::lastFacing
	String_t* ___lastFacing_13;
	// UnityEngine.Animator Player::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_14;
	// System.Single Player::HSpeed
	float ___HSpeed_15;
	// System.Single Player::VSpeed
	float ___VSpeed_16;
};

// PlayerOther
struct PlayerOther_t43A2DE7CFCC1D5D569F530E236CD50F7196C0EEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerOther::speed
	float ___speed_4;
	// System.Single PlayerOther::HSpeed
	float ___HSpeed_5;
	// System.Single PlayerOther::VSpeed
	float ___VSpeed_6;
	// System.Int32 PlayerOther::health
	int32_t ___health_7;
	// FixedJoystick PlayerOther::_joystick
	FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* ____joystick_8;
	// UnityEngine.Rigidbody2D PlayerOther::_rigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rigidbody_9;
	// UnityEngine.Animator PlayerOther::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_10;
};

// QuitGameOnKeypress
struct QuitGameOnKeypress_t43D92D44E6B02FE6C8A804E4BD0E48692DBC9AD9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode QuitGameOnKeypress::key
	int32_t ___key_4;
};

// SceneSwitchScript
struct SceneSwitchScript_tEA62AEFE2A48AB5863D68D176B02EAFEE62B8DD1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Shangyu_boss
struct Shangyu_boss_t9B5AE1FD56ED520E8071C66923174EBB57827556  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Shangyu_boss::bulletPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bulletPrefab_4;
	// UnityEngine.Transform Shangyu_boss::firePoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___firePoint_5;
	// System.Single Shangyu_boss::fireRate
	float ___fireRate_6;
	// System.Single Shangyu_boss::moveSpeed
	float ___moveSpeed_7;
	// System.Single Shangyu_boss::trackingDistance
	float ___trackingDistance_8;
	// System.Single Shangyu_boss::detectionRange
	float ___detectionRange_9;
	// System.Single Shangyu_boss::stopDistance
	float ___stopDistance_10;
	// UnityEngine.Transform Shangyu_boss::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_11;
	// System.Single Shangyu_boss::nextFireTime
	float ___nextFireTime_12;
	// UnityEngine.SpriteRenderer Shangyu_boss::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_13;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;
};

// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___fixedPosition_17;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleWidth
	bool ___m_ChildScaleWidth_17;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleHeight
	bool ___m_ChildScaleHeight_18;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ReverseArrangement
	bool ___m_ReverseArrangement_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>

// System.Collections.Generic.List`1<Ink.Runtime.Choice>
struct List_1_t0FC6C36130B1779B147FDAF435332956D11125B2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChoiceU5BU5D_tB256304D6B83B8D473E656BAE753810C836CA4BC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Runtime.Choice>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// BasicInkExample/<>c__DisplayClass7_0

// BasicInkExample/<>c__DisplayClass7_0

// Character/<FlashColor>d__16

// Character/<FlashColor>d__16

// Item/<WaitForCollidable>d__11

// Item/<WaitForCollidable>d__11

// Menu/<WaitForSceneLoad>d__5

// Menu/<WaitForSceneLoad>d__5

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Ink.Runtime.Choice

// Ink.Runtime.Choice

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

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// Ink.Runtime.Story

// Ink.Runtime.Story

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

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.Collision2D

// UnityEngine.Collision2D

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.Sprite

// UnityEngine.Sprite

// UnityEngine.TextAsset

// UnityEngine.TextAsset

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<Ink.Runtime.Story>

// System.Action`1<Ink.Runtime.Story>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BasicInkExample
struct BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_StaticFields
{
	// System.Action`1<Ink.Runtime.Story> BasicInkExample::OnCreateStory
	Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* ___OnCreateStory_4;
};

// BasicInkExample

// BossTriggerBox

// BossTriggerBox

// UnityEngine.BoxCollider2D

// UnityEngine.BoxCollider2D

// CameraBehavior

// CameraBehavior

// Character

// Character

// Damage

// Damage

// GameManager

// GameManager

// GhostMob

// GhostMob

// Item

// Item

// Joystick

// Joystick

// JoystickPlayerExample

// JoystickPlayerExample

// JoystickSetterExample

// JoystickSetterExample

// MageScript

// MageScript

// Menu

// Menu

// NPCBehavior

// NPCBehavior

// NPCOverlapCircle

// NPCOverlapCircle

// NextScenes

// NextScenes

// Player

// Player

// PlayerOther

// PlayerOther

// QuitGameOnKeypress

// QuitGameOnKeypress

// SceneSwitchScript

// SceneSwitchScript

// Shangyu_boss

// Shangyu_boss

// DynamicJoystick

// DynamicJoystick

// FixedJoystick

// FixedJoystick

// FloatingJoystick

// FloatingJoystick

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// VariableJoystick

// VariableJoystick

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup

// UnityEngine.UI.HorizontalLayoutGroup

// UnityEngine.UI.HorizontalLayoutGroup

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* Dictionary_2_get_Keys_m241B452A1A7DDE3C7E10D446BE86FFD25EDD160E_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE35BA77DD444C2F1A94F5B1410DC048035E0C549_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Menu::WaitForSceneLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Menu_WaitForSceneLoad_m97DAE268BA008AAD4EBECFF2497EE616952792DE (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Menu/<WaitForSceneLoad>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSceneLoadU3Ed__5__ctor_m46AC03F6C93D94A9DCF6BA9C70638F754FC31305 (U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void PlayerOther::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerOther_Die_mD2AE72E5297E33FF588E8F321266C6C35271853E (PlayerOther_t43A2DE7CFCC1D5D569F530E236CD50F7196C0EEE* __this, const RuntimeMethod* method) ;
// System.Void PlayerOther::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerOther_LoadScene_mECDA7CB82D107EEF685C5C4E534C46E54E34E889 (PlayerOther_t43A2DE7CFCC1D5D569F530E236CD50F7196C0EEE* __this, String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void BasicInkExample::StartStory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_StartStory_m0AAE3EEFA9C697CE872B3F0A4454E60C96CA6552 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void GameManager::HandleDialogueEnd(System.Collections.Generic.List`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleDialogueEnd_mEED9F7F600C24C32B74789AD39C9ECEA146AE636 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_DialogueLog, String_t* ___1_talkedTo, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Story::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story__ctor_m636765332FF010AC37E474224C2BC364AAAFACBA (Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* __this, String_t* ___0_jsonString, const RuntimeMethod* method) ;
// System.Void System.Action`1<Ink.Runtime.Story>::Invoke(T)
inline void Action_1_Invoke_m30410F92A50A4D855876A7EAAD6EA725DC367973_inline (Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* __this, Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE*, Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void BasicInkExample::RefreshView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_RefreshView_m405F54059B55BA2C3E9A62A172FBF94257015DD0 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, const RuntimeMethod* method) ;
// System.Void BasicInkExample::RemoveChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_RemoveChildren_m766CEC3453D5D7B886B26153C6751B56B48B050B (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, const RuntimeMethod* method) ;
// System.String Ink.Runtime.Story::Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Story_Continue_mAFDF34AF5EB3394D21EE99A60B9422DBCC1A7B80 (Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean Ink.Runtime.Story::get_canContinue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Story_get_canContinue_m69FBBD714469DD4749B99711686E1C868573A1F1 (Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Ink.Runtime.Choice> Ink.Runtime.Story::get_currentChoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0FC6C36130B1779B147FDAF435332956D11125B2* Story_get_currentChoices_m21807A079BB04A180D4F38425DFF0A365DCD9E84 (Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Runtime.Choice>::get_Count()
inline int32_t List_1_get_Count_m2E27425543BC9E37A35AC28CFFEA0D6A5574133C_inline (List_1_t0FC6C36130B1779B147FDAF435332956D11125B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0FC6C36130B1779B147FDAF435332956D11125B2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void BasicInkExample/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mE66A949D81526B52DEDF0EE8465E81EEBA59CB40 (U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Ink.Runtime.Choice>::get_Item(System.Int32)
inline Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* List_1_get_Item_m75363F90491ABE67C1772E917B8BE2F7C83F3D15 (List_1_t0FC6C36130B1779B147FDAF435332956D11125B2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* (*) (List_1_t0FC6C36130B1779B147FDAF435332956D11125B2*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String Ink.Runtime.Choice::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Choice_get_text_m5D7AAB6481E4F43A278548E3F7C5D75515FC1D30_inline (Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button BasicInkExample::CreateChoiceView(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* BasicInkExample_CreateChoiceView_m6A3FBF9E03350889DDC0CB018E3AD0958C04BE32 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Int32 Ink.Runtime.Choice::get_index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Choice_get_index_mFAE18B25A1655AAB28B402D146F80F9A53B64FA9_inline (Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Story::ChooseChoiceIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_ChooseChoiceIndex_mE14F2F189F4F2C5158407EB051290EF03E90AEBA (Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* __this, int32_t ___0_choiceIdx, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.UI.Text>(T)
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mD0AD654B5C45D1968901D27D7F4F1B486215DCD8 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_original, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.UI.Button>(T)
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Object_Instantiate_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m6699524C00C6758053CF86F067C28FC28669B016 (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_original, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.HorizontalLayoutGroup>()
inline HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* Component_GetComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_m1DF360D4574B72DBFE3008DB7BFC2D4EDA680CEB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childForceExpandHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_childForceExpandHeight_mA144CF421614F41813DE346AA9D1C64621C6C2E5 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void BasicInkExample::HandleDialogueEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_HandleDialogueEnd_m1D0349C63003C415156ED7BEF65152E6EB0FD324 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, const RuntimeMethod* method) ;
// System.Void BasicInkExample::OnClickChoiceButton(Ink.Runtime.Choice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_OnClickChoiceButton_mD4A1BAEA594370D9609F50B5079DDC7A38B91902 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* ___0_choice, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___0_joystickType, const RuntimeMethod* method) ;
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, int32_t ___1_snapAxis, const RuntimeMethod* method) ;
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransformUtility_WorldToScreenPoint_mC8701032E223BA296C43799F4AEE98626686238F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_cam, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___2_cam, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_localPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPosition, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_magnitude, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_normalised, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_radius, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___3_cam, const RuntimeMethod* method) ;
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void GameManager::HandleBossStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleBossStart_mCF03FEDE388406B3AF3AA6E8FC353AB2E8211BDD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean Character::CheckItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Character_CheckItem_m3E0AE1336791944F128D849C7DF425D60536E4B7 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, String_t* ___0_itemId, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
inline bool Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared)(__this, ___0_key, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.GameObject::GetComponent<Item>()
inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Item::ChangeItemId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_ChangeItemId_m0F02C7B63B8F1B4FE19963AECA93B5EF0DD21FCF (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, String_t* ___0_newId, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GameManager>()
inline GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameManager::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateUI_m592EA278752B47E9A40AE3B0DCC0BE8BAB0D472E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared)(__this, ___0_key, method);
}
// System.Void Character::HandleDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_HandleDeath_mFF4D609FEC4806415B3689B497C0D03EBE0A8949 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Character::FlashColor(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Character_FlashColor_m8A2A5731D0ED2B1040B5760A65D498E1E08236C6 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, float ___0_red, float ___1_green, float ___2_blue, float ___3_opacity, float ___4_time, const RuntimeMethod* method) ;
// System.Void Character/<FlashColor>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashColorU3Ed__16__ctor_m96B1A75B0BA021283AB8493D17BB01455ADD171F (U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Keys()
inline KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2_get_Keys_m241B452A1A7DDE3C7E10D446BE86FFD25EDD160E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void Character::DropItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_DropItem_m803354C73778E5947CED3C631463DFF549375D30 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, String_t* ___0_itemId, const RuntimeMethod* method) ;
// System.Boolean Character::DropAnyItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Character_DropAnyItem_m13E8D6334BE41A7E00C7A279C7AF36E1C62FC8E8 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Collider2D::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_isTrigger_m19D5227BAB5D41F212D515C1E2CA433C2FEF7A48 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_mE2FAC2D78B06B445BD2AD58F87AC5B1865B23248 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Void Character::AddItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_AddItem_m1B290C337BFE8F6AD356D69B05CF59B6215BD212 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, String_t* ___0_itemId, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Character>()
inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void Character::ChangeHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_ChangeHealth_m40924BC0F6DD4A6927CB090FCBA90F58621EE562 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, int32_t ___0_changeBy, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GhostMob>()
inline GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2* GameObject_GetComponent_TisGhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2_m97BC6DD4B065584EB738E06266BC51A3E57A89B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GhostMob::HandleStun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostMob_HandleStun_m23671A5CF5BCF264E713F6AB3124B537B6676859 (GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2* __this, const RuntimeMethod* method) ;
// System.Int32 Character::GetHealth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_GetHealth_mE8BF820006CEA5530185AB059A8E9E118AC09E35_inline (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Character::GetInventory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* Character_GetInventory_mF0C9B3B4BB89B000221A4C066A8EB7EE49E21659_inline (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void Dictionary_2__ctor_mC5F30923A946D536424C8D9ACB3938D8289C4C84 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mE35BA77DD444C2F1A94F5B1410DC048035E0C549_gshared)(__this, ___0_dictionary, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
inline int32_t Dictionary_2_get_Count_m33C34E4F1C77B491E24DCCBF07C43639016B2247 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Sprite GameManager::GetSprite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GameManager_GetSprite_m2FD0483A66F19D3B521A964C21282372CB1E4761 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, String_t* ___0_itemId, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameManager::EnableAttackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableAttackButton_mBBD26663F81EF1E84ED8213A73413EC42DBF6911 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void GameManager::EnableHealButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableHealButton_mF9A660AE089C2147BB83F2A32E4C36340B8FBF24 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::DisableHealButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableHealButton_m73CF6185760C87E4B65884820B0E7ED18B8D7BF3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Character::ConsumeItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_ConsumeItem_m0C01B2C32979F75550B02FBF2991FC33F8659088 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, String_t* ___0_itemId, const RuntimeMethod* method) ;
// System.Void GameManager::StartDialogue(UnityEngine.TextAsset,UnityEngine.Sprite,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___0_JSONFile, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_CharSprite, String_t* ___2_CharName, const RuntimeMethod* method) ;
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
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void GameManager::ProcessDialogueLog(System.Collections.Generic.List`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ProcessDialogueLog_m777109850B1D077D5B202A612B76909AE1206879 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_DialogueLog, String_t* ___1_talkedTo, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<BasicInkExample>()
inline BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* GameObject_GetComponent_TisBasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_m83253A9F5650DB994C8A18B44B6AFD24D0BA8C4D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void BasicInkExample::HandleDialogue(UnityEngine.TextAsset,UnityEngine.Sprite,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_HandleDialogue_m984E086269FB8D7F6F0133041F76D480429001D1 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___0_JSONFile, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_speakerSprite, String_t* ___2_speakerName, const RuntimeMethod* method) ;
// System.Void Player::HandleAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_HandleAttack_m874679E26E5C06808181A8EDE8A83D4528017FD8 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Item::SetSprite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_SetSprite_m77D57D00817691FBBAD19B4858953F5FAA0980B5 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, String_t* ___0_itemId, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Item::WaitForCollidable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Item_WaitForCollidable_m802D2123B6A684E887926F4971AB44F3C951EC66 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) ;
// System.Void Item/<WaitForCollidable>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCollidableU3Ed__11__ctor_m89B6E630BCDFBEE7DA6B5F3154CA7CAFF0445ED5 (U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameManager::EnableTalkButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableTalkButton_mBA7FB0C72A31344C38B0B23503910722EC503EAC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::DisableTalkButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableTalkButton_mDD64A16C3218D1A0A4B9444681C94F18906E9459 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Player::letterToVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Player_letterToVector_m3F6CCCA7C3E91C585E5520D68815B680AD225ADB (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Player::letterToAngle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Player_letterToAngle_mF979FE982D5D8684A3A1C27CB4600B894AF73601 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___0_vector, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void Shangyu_boss::FireBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shangyu_boss_FireBullet_mB5791F1D669C0E55A4A94ACB8BE4EA1498DE6F97 (Shangyu_boss_t9B5AE1FD56ED520E8071C66923174EBB57827556* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_mC49986718939F87924A1391044721CAC6E28919D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _bgm.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____bgm_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// _animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____animator_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Menu::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_PlayGame_mB3BBBB5BF9F14D79F02AE8CEE052CC1F7B2858E4 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _play.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____play_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// _bgm.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->____bgm_4;
		NullCheck(L_1);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_1, NULL);
		// _animator.SetBool("play", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->____animator_6;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8, (bool)1, NULL);
		// StartCoroutine(WaitForSceneLoad());
		RuntimeObject* L_3;
		L_3 = Menu_WaitForSceneLoad_m97DAE268BA008AAD4EBECFF2497EE616952792DE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Menu::WaitForSceneLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Menu_WaitForSceneLoad_m97DAE268BA008AAD4EBECFF2497EE616952792DE (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5* L_0 = (U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5*)il2cpp_codegen_object_new(U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForSceneLoadU3Ed__5__ctor_m46AC03F6C93D94A9DCF6BA9C70638F754FC31305(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
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
// System.Void Menu/<WaitForSceneLoad>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSceneLoadU3Ed__5__ctor_m46AC03F6C93D94A9DCF6BA9C70638F754FC31305 (U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Menu/<WaitForSceneLoad>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSceneLoadU3Ed__5_System_IDisposable_Dispose_mA2E33079F8D8838331BBCD534AB0D3F69DDB91D8 (U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Menu/<WaitForSceneLoad>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForSceneLoadU3Ed__5_MoveNext_m692CDA7493D74A69626889BD4C91CFC51A4C160B (U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1.9f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.89999998f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		// }
		return (bool)0;
	}
}
// System.Object Menu/<WaitForSceneLoad>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForSceneLoadU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD912BD1D0551D6DAB36CD808AB3BDDF52B11DE25 (U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Menu/<WaitForSceneLoad>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSceneLoadU3Ed__5_System_Collections_IEnumerator_Reset_m48A5510F43685BBE84BB6A6EA5A009BC43BEC5D2 (U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForSceneLoadU3Ed__5_System_Collections_IEnumerator_Reset_m48A5510F43685BBE84BB6A6EA5A009BC43BEC5D2_RuntimeMethod_var)));
	}
}
// System.Object Menu/<WaitForSceneLoad>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForSceneLoadU3Ed__5_System_Collections_IEnumerator_get_Current_m2D238E160D136E0ECAA158549E58CADBC5213AC9 (U3CWaitForSceneLoadU3Ed__5_tFCB81127599A7A58DF9C31123EF93DAC481BAAD5* __this, const RuntimeMethod* method) 
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
// System.Void NextScenes::nextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextScenes_nextLevel_m08214F1C829152099F576BB66AF41A36A79C4679 (NextScenes_tB3C64B9F6028DA82B17138AA4A6F20A26479F95E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		// }
		return;
	}
}
// System.Void NextScenes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextScenes__ctor_mF58AD35B14DE4548944B9A41943405AF6BEA8DF7 (NextScenes_tB3C64B9F6028DA82B17138AA4A6F20A26479F95E* __this, const RuntimeMethod* method) 
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
// System.Void PlayerOther::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerOther_Start_mE82DE26174A2EDF8BB61CB77D4DC9ADF85E892D0 (PlayerOther_t43A2DE7CFCC1D5D569F530E236CD50F7196C0EEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->____rigidbody_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_9), (void*)L_0);
		// _animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____animator_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void PlayerOther::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerOther_FixedUpdate_m2E0A0A7AE92AAEB2AB9425DE693FF2820148D8CD (PlayerOther_t43A2DE7CFCC1D5D569F530E236CD50F7196C0EEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B9E5D894A3B7F7F3D00DCF14E96AA95D4D232FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF19D9E4D225560E6B4A0D98F284B4A27FDB2CC9D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float xJoystickSpeed = _joystick.Horizontal * speed;
		FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* L_0 = __this->____joystick_8;
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_0, NULL);
		float L_2 = __this->___speed_4;
		V_0 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// float yJoystickSpeed = _joystick.Vertical * speed;
		FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* L_3 = __this->____joystick_8;
		NullCheck(L_3);
		float L_4;
		L_4 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_3, NULL);
		float L_5 = __this->___speed_4;
		V_1 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// if (xJoystickSpeed >= 1)
		float L_6 = V_0;
		if ((!(((float)L_6) >= ((float)(1.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// HSpeed = speed;
		float L_7 = __this->___speed_4;
		__this->___HSpeed_5 = L_7;
		// VSpeed = 0;
		__this->___VSpeed_6 = (0.0f);
		goto IL_0074;
	}

IL_0047:
	{
		// } else if (xJoystickSpeed <= -1)
		float L_8 = V_0;
		if ((!(((float)L_8) <= ((float)(-1.0f)))))
		{
			goto IL_0069;
		}
	}
	{
		// HSpeed = -speed;
		float L_9 = __this->___speed_4;
		__this->___HSpeed_5 = ((-L_9));
		// VSpeed = 0;
		__this->___VSpeed_6 = (0.0f);
		goto IL_0074;
	}

IL_0069:
	{
		// HSpeed = 0;
		__this->___HSpeed_5 = (0.0f);
	}

IL_0074:
	{
		// if (yJoystickSpeed >= 1)
		float L_10 = V_1;
		if ((!(((float)L_10) >= ((float)(1.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// VSpeed = speed;
		float L_11 = __this->___speed_4;
		__this->___VSpeed_6 = L_11;
		// HSpeed = 0;
		__this->___HSpeed_5 = (0.0f);
		goto IL_00c2;
	}

IL_0095:
	{
		// } else if (yJoystickSpeed <= -1)
		float L_12 = V_1;
		if ((!(((float)L_12) <= ((float)(-1.0f)))))
		{
			goto IL_00b7;
		}
	}
	{
		// VSpeed = -speed;
		float L_13 = __this->___speed_4;
		__this->___VSpeed_6 = ((-L_13));
		// HSpeed = 0;
		__this->___HSpeed_5 = (0.0f);
		goto IL_00c2;
	}

IL_00b7:
	{
		// VSpeed = 0;
		__this->___VSpeed_6 = (0.0f);
	}

IL_00c2:
	{
		// _rigidbody.velocity = new Vector2(_joystick.Horizontal * speed, _rigidbody.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_14 = __this->____rigidbody_9;
		FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* L_15 = __this->____joystick_8;
		NullCheck(L_15);
		float L_16;
		L_16 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_15, NULL);
		float L_17 = __this->___speed_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_18 = __this->____rigidbody_9;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_18, NULL);
		float L_20 = L_19.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), ((float)il2cpp_codegen_multiply(L_16, L_17)), L_20, /*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_14, L_21, NULL);
		// _rigidbody.velocity = new Vector2(_rigidbody.velocity.x, _joystick.Vertical * speed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_22 = __this->____rigidbody_9;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_23 = __this->____rigidbody_9;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_23, NULL);
		float L_25 = L_24.___x_0;
		FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* L_26 = __this->____joystick_8;
		NullCheck(L_26);
		float L_27;
		L_27 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_26, NULL);
		float L_28 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), L_25, ((float)il2cpp_codegen_multiply(L_27, L_28)), /*hidden argument*/NULL);
		NullCheck(L_22);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_22, L_29, NULL);
		// float xScale = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_30, NULL);
		float L_32 = L_31.___x_2;
		V_2 = L_32;
		// if ((HSpeed > 0 && xScale > 0) || (HSpeed < 0 && xScale < 0))
		float L_33 = __this->___HSpeed_5;
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_014c;
		}
	}
	{
		float L_34 = V_2;
		if ((((float)L_34) > ((float)(0.0f))))
		{
			goto IL_0161;
		}
	}

IL_014c:
	{
		float L_35 = __this->___HSpeed_5;
		if ((!(((float)L_35) < ((float)(0.0f)))))
		{
			goto IL_0190;
		}
	}
	{
		float L_36 = V_2;
		if ((!(((float)L_36) < ((float)(0.0f)))))
		{
			goto IL_0190;
		}
	}

IL_0161:
	{
		// transform.localScale *= new Vector2(-1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = L_37;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_38, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_39, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_42, NULL);
		NullCheck(L_38);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_38, L_43, NULL);
	}

IL_0190:
	{
		// _animator.SetFloat("VSpeed", VSpeed);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_44 = __this->____animator_10;
		float L_45 = __this->___VSpeed_6;
		NullCheck(L_44);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_44, _stringLiteralF19D9E4D225560E6B4A0D98F284B4A27FDB2CC9D, L_45, NULL);
		// _animator.SetFloat("HSpeed", Mathf.Abs(HSpeed));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_46 = __this->____animator_10;
		float L_47 = __this->___HSpeed_5;
		float L_48;
		L_48 = fabsf(L_47);
		NullCheck(L_46);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_46, _stringLiteral0B9E5D894A3B7F7F3D00DCF14E96AA95D4D232FD, L_48, NULL);
		// }
		return;
	}
}
// System.Void PlayerOther::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerOther_TakeDamage_mE853E7249F8EB7006F4D251FF0793B9400CD5203 (PlayerOther_t43A2DE7CFCC1D5D569F530E236CD50F7196C0EEE* __this, int32_t ___0_damage, const RuntimeMethod* method) 
{
	{
		// health -= damage;
		int32_t L_0 = __this->___health_7;
		int32_t L_1 = ___0_damage;
		__this->___health_7 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (health <= 0)
		int32_t L_2 = __this->___health_7;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// Die();
		PlayerOther_Die_mD2AE72E5297E33FF588E8F321266C6C35271853E(__this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void PlayerOther::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerOther_Die_mD2AE72E5297E33FF588E8F321266C6C35271853E (PlayerOther_t43A2DE7CFCC1D5D569F530E236CD50F7196C0EEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadScene("Death"); // ?YourSceneName????????????
		PlayerOther_LoadScene_mECDA7CB82D107EEF685C5C4E534C46E54E34E889(__this, _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, NULL);
		// }
		return;
	}
}
// System.Void PlayerOther::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerOther_LoadScene_mECDA7CB82D107EEF685C5C4E534C46E54E34E889 (PlayerOther_t43A2DE7CFCC1D5D569F530E236CD50F7196C0EEE* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___0_sceneName;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerOther::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerOther__ctor_m7781492067C8AAA0CC0B83C6ABDD52D6E99BC106 (PlayerOther_t43A2DE7CFCC1D5D569F530E236CD50F7196C0EEE* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 2.5f;
		__this->___speed_4 = (2.5f);
		// public int health = 100;
		__this->___health_7 = ((int32_t)100);
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
// System.Void SceneSwitchScript::JumpToMainScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchScript_JumpToMainScreen_m6F5F33ED15724B357F11D3211CC914CA6FD7A865 (SceneSwitchScript_tEA62AEFE2A48AB5863D68D176B02EAFEE62B8DD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A272869252F7DC58D4AFA3D6D49195788ED632D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainScreen");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral7A272869252F7DC58D4AFA3D6D49195788ED632D, NULL);
		// }
		return;
	}
}
// System.Void SceneSwitchScript::JumpToWinScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchScript_JumpToWinScreen_mA4E43408FB8C42632725B3F27ADC866D1AD4DC9E (SceneSwitchScript_tEA62AEFE2A48AB5863D68D176B02EAFEE62B8DD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Win");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1, NULL);
		// }
		return;
	}
}
// System.Void SceneSwitchScript::JumpToGameScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchScript_JumpToGameScreen_m4C1FC6AD612666CB07C5DE663DDD7654E23BFD81 (SceneSwitchScript_tEA62AEFE2A48AB5863D68D176B02EAFEE62B8DD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A59EABF0C51AF863757F81CFC978C0C90E24B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Intro");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralD7A59EABF0C51AF863757F81CFC978C0C90E24B3, NULL);
		// }
		return;
	}
}
// System.Void SceneSwitchScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchScript__ctor_m144A63920CB9A0E8A87BF8A0110510F7F2837A1D (SceneSwitchScript_tEA62AEFE2A48AB5863D68D176B02EAFEE62B8DD1* __this, const RuntimeMethod* method) 
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
// System.Void BasicInkExample::add_OnCreateStory(System.Action`1<Ink.Runtime.Story>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_add_OnCreateStory_m58548A00C8687F8A945F8104EDD7758F7EFBF239 (Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* V_0 = NULL;
	Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* V_1 = NULL;
	Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* V_2 = NULL;
	{
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_0 = ((BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_StaticFields*)il2cpp_codegen_static_fields_for(BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_il2cpp_TypeInfo_var))->___OnCreateStory_4;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_2 = V_1;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE*)Castclass((RuntimeObject*)L_4, Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE_il2cpp_TypeInfo_var));
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_5 = V_2;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_6 = V_1;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE*>((&((BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_StaticFields*)il2cpp_codegen_static_fields_for(BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_il2cpp_TypeInfo_var))->___OnCreateStory_4), L_5, L_6);
		V_0 = L_7;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_8 = V_0;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE*)L_8) == ((RuntimeObject*)(Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void BasicInkExample::remove_OnCreateStory(System.Action`1<Ink.Runtime.Story>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_remove_OnCreateStory_m834CC166E2843A10D80673E98BB5D5649E54A059 (Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* V_0 = NULL;
	Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* V_1 = NULL;
	Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* V_2 = NULL;
	{
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_0 = ((BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_StaticFields*)il2cpp_codegen_static_fields_for(BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_il2cpp_TypeInfo_var))->___OnCreateStory_4;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_1 = V_0;
		V_1 = L_1;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_2 = V_1;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE*)Castclass((RuntimeObject*)L_4, Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE_il2cpp_TypeInfo_var));
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_5 = V_2;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_6 = V_1;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE*>((&((BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_StaticFields*)il2cpp_codegen_static_fields_for(BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_il2cpp_TypeInfo_var))->___OnCreateStory_4), L_5, L_6);
		V_0 = L_7;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_8 = V_0;
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE*)L_8) == ((RuntimeObject*)(Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void BasicInkExample::HandleDialogue(UnityEngine.TextAsset,UnityEngine.Sprite,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_HandleDialogue_m984E086269FB8D7F6F0133041F76D480429001D1 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___0_JSONFile, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_speakerSprite, String_t* ___2_speakerName, const RuntimeMethod* method) 
{
	{
		// inkJSONAsset = JSONFile;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = ___0_JSONFile;
		__this->___inkJSONAsset_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inkJSONAsset_6), (void*)L_0);
		// speakerAvatarField.sprite = speakerSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___speakerAvatarField_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___1_speakerSprite;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		// speakerNameField.text = speakerName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___speakerNameField_9;
		String_t* L_4 = ___2_speakerName;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// StartStory();
		BasicInkExample_StartStory_m0AAE3EEFA9C697CE872B3F0A4454E60C96CA6552(__this, NULL);
		// }
		return;
	}
}
// System.Void BasicInkExample::HandleDialogueEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_HandleDialogueEnd_m1D0349C63003C415156ED7BEF65152E6EB0FD324 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(dialogueOverview);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___dialogueOverview_5;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// Debug.Log(speakerNameField.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___speakerNameField_9;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// gameManager.HandleDialogueEnd(dialogueOverview, speakerNameField.text);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = __this->___gameManager_12;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___dialogueOverview_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___speakerNameField_9;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		NullCheck(L_3);
		GameManager_HandleDialogueEnd_mEED9F7F600C24C32B74789AD39C9ECEA146AE636(L_3, L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void BasicInkExample::StartStory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_StartStory_m0AAE3EEFA9C697CE872B3F0A4454E60C96CA6552 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// story = new Story (inkJSONAsset.text);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___inkJSONAsset_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_2 = (Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A*)il2cpp_codegen_object_new(Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Story__ctor_m636765332FF010AC37E474224C2BC364AAAFACBA(L_2, L_1, NULL);
		__this->___story_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___story_7), (void*)L_2);
		// if(OnCreateStory != null) OnCreateStory(story);
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_3 = ((BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_StaticFields*)il2cpp_codegen_static_fields_for(BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_il2cpp_TypeInfo_var))->___OnCreateStory_4;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if(OnCreateStory != null) OnCreateStory(story);
		Action_1_t6EC8AFEFC60B84BE5895E9A8AD723653BABDD1EE* L_4 = ((BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_StaticFields*)il2cpp_codegen_static_fields_for(BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_il2cpp_TypeInfo_var))->___OnCreateStory_4;
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_5 = __this->___story_7;
		NullCheck(L_4);
		Action_1_Invoke_m30410F92A50A4D855876A7EAAD6EA725DC367973_inline(L_4, L_5, NULL);
	}

IL_002d:
	{
		// RefreshView();
		BasicInkExample_RefreshView_m405F54059B55BA2C3E9A62A172FBF94257015DD0(__this, NULL);
		// }
		return;
	}
}
// System.Void BasicInkExample::RefreshView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_RefreshView_m405F54059B55BA2C3E9A62A172FBF94257015DD0 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicInkExample_U3CRefreshViewU3Eb__7_1_m217ECB83A1C71BFD5B2B83A35A2A46E814E668B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2E27425543BC9E37A35AC28CFFEA0D6A5574133C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m75363F90491ABE67C1772E917B8BE2F7C83F3D15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CRefreshViewU3Eb__0_m07A5E31F88E7AA6FFC69F3165C7FE8D30AA74F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral861FAA2C0AA91F21AD617175333ED12C3C91E383);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08* V_2 = NULL;
	{
		// RemoveChildren ();
		BasicInkExample_RemoveChildren_m766CEC3453D5D7B886B26153C6751B56B48B050B(__this, NULL);
		goto IL_003e;
	}

IL_0008:
	{
		// string text = story.Continue ();
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_0 = __this->___story_7;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Story_Continue_mAFDF34AF5EB3394D21EE99A60B9422DBCC1A7B80(L_0, NULL);
		V_0 = L_1;
		// text = text.Trim();
		String_t* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_2, NULL);
		V_0 = L_3;
		// talkingSoundEffect.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___talkingSoundEffect_13;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// dialogueTextField.text = text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___dialogueTextField_8;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// dialogueOverview.Add(text);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->___dialogueOverview_5;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, L_8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_003e:
	{
		// while (story.canContinue) {
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_9 = __this->___story_7;
		NullCheck(L_9);
		bool L_10;
		L_10 = Story_get_canContinue_m69FBBD714469DD4749B99711686E1C868573A1F1(L_9, NULL);
		if (L_10)
		{
			goto IL_0008;
		}
	}
	{
		// if(story.currentChoices.Count > 0) {
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_11 = __this->___story_7;
		NullCheck(L_11);
		List_1_t0FC6C36130B1779B147FDAF435332956D11125B2* L_12;
		L_12 = Story_get_currentChoices_m21807A079BB04A180D4F38425DFF0A365DCD9E84(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m2E27425543BC9E37A35AC28CFFEA0D6A5574133C_inline(L_12, List_1_get_Count_m2E27425543BC9E37A35AC28CFFEA0D6A5574133C_RuntimeMethod_var);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		// for (int i = 0; i < story.currentChoices.Count; i++) {
		V_1 = 0;
		goto IL_00b6;
	}

IL_0062:
	{
		U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08* L_14 = (U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		U3CU3Ec__DisplayClass7_0__ctor_mE66A949D81526B52DEDF0EE8465E81EEBA59CB40(L_14, NULL);
		V_2 = L_14;
		U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08* L_15 = V_2;
		NullCheck(L_15);
		L_15->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___U3CU3E4__this_1), (void*)__this);
		// Choice choice = story.currentChoices [i];
		U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08* L_16 = V_2;
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_17 = __this->___story_7;
		NullCheck(L_17);
		List_1_t0FC6C36130B1779B147FDAF435332956D11125B2* L_18;
		L_18 = Story_get_currentChoices_m21807A079BB04A180D4F38425DFF0A365DCD9E84(L_17, NULL);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* L_20;
		L_20 = List_1_get_Item_m75363F90491ABE67C1772E917B8BE2F7C83F3D15(L_18, L_19, List_1_get_Item_m75363F90491ABE67C1772E917B8BE2F7C83F3D15_RuntimeMethod_var);
		NullCheck(L_16);
		L_16->___choice_0 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___choice_0), (void*)L_20);
		// Button button = CreateChoiceView (choice.text.Trim ());
		U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08* L_21 = V_2;
		NullCheck(L_21);
		Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* L_22 = L_21->___choice_0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = Choice_get_text_m5D7AAB6481E4F43A278548E3F7C5D75515FC1D30_inline(L_22, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_23, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25;
		L_25 = BasicInkExample_CreateChoiceView_m6A3FBF9E03350889DDC0CB018E3AD0958C04BE32(__this, L_24, NULL);
		// button.onClick.AddListener (delegate {
		//     OnClickChoiceButton (choice);
		// });
		NullCheck(L_25);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_26;
		L_26 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_25, NULL);
		U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08* L_27 = V_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_28 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CRefreshViewU3Eb__0_m07A5E31F88E7AA6FFC69F3165C7FE8D30AA74F4B_RuntimeMethod_var), NULL);
		NullCheck(L_26);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_26, L_28, NULL);
		// for (int i = 0; i < story.currentChoices.Count; i++) {
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00b6:
	{
		// for (int i = 0; i < story.currentChoices.Count; i++) {
		int32_t L_30 = V_1;
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_31 = __this->___story_7;
		NullCheck(L_31);
		List_1_t0FC6C36130B1779B147FDAF435332956D11125B2* L_32;
		L_32 = Story_get_currentChoices_m21807A079BB04A180D4F38425DFF0A365DCD9E84(L_31, NULL);
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m2E27425543BC9E37A35AC28CFFEA0D6A5574133C_inline(L_32, List_1_get_Count_m2E27425543BC9E37A35AC28CFFEA0D6A5574133C_RuntimeMethod_var);
		if ((((int32_t)L_30) < ((int32_t)L_33)))
		{
			goto IL_0062;
		}
	}
	{
		return;
	}

IL_00ca:
	{
		// Button choice = CreateChoiceView("[END CONVERSATION]");
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_34;
		L_34 = BasicInkExample_CreateChoiceView_m6A3FBF9E03350889DDC0CB018E3AD0958C04BE32(__this, _stringLiteral861FAA2C0AA91F21AD617175333ED12C3C91E383, NULL);
		// choice.onClick.AddListener(delegate
		// {
		//     HandleDialogueEnd();
		//     return;
		// });
		NullCheck(L_34);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_35;
		L_35 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_34, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_36 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_36, __this, (intptr_t)((void*)BasicInkExample_U3CRefreshViewU3Eb__7_1_m217ECB83A1C71BFD5B2B83A35A2A46E814E668B8_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_35, L_36, NULL);
		// }
		return;
	}
}
// System.Void BasicInkExample::OnClickChoiceButton(Ink.Runtime.Choice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_OnClickChoiceButton_mD4A1BAEA594370D9609F50B5079DDC7A38B91902 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* ___0_choice, const RuntimeMethod* method) 
{
	{
		// story.ChooseChoiceIndex (choice.index);
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_0 = __this->___story_7;
		Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* L_1 = ___0_choice;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Choice_get_index_mFAE18B25A1655AAB28B402D146F80F9A53B64FA9_inline(L_1, NULL);
		NullCheck(L_0);
		Story_ChooseChoiceIndex_mE14F2F189F4F2C5158407EB051290EF03E90AEBA(L_0, L_2, NULL);
		// RefreshView();
		BasicInkExample_RefreshView_m405F54059B55BA2C3E9A62A172FBF94257015DD0(__this, NULL);
		// }
		return;
	}
}
// System.Void BasicInkExample::CreateContentView(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_CreateContentView_mB54F2C87AA2BC78567D328219D5BFB892F72FA6C (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mD0AD654B5C45D1968901D27D7F4F1B486215DCD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Text storyText = Instantiate (textPrefab) as Text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textPrefab_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mD0AD654B5C45D1968901D27D7F4F1B486215DCD8(L_0, Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mD0AD654B5C45D1968901D27D7F4F1B486215DCD8_RuntimeMethod_var);
		// storyText.text = text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = L_1;
		String_t* L_3 = ___0_text;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// storyText.transform.SetParent (canvas.transform, false);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5 = __this->___canvas_14;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_4);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_4, L_6, (bool)0, NULL);
		// }
		return;
	}
}
// UnityEngine.UI.Button BasicInkExample::CreateChoiceView(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* BasicInkExample_CreateChoiceView_m6A3FBF9E03350889DDC0CB018E3AD0958C04BE32 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_m1DF360D4574B72DBFE3008DB7BFC2D4EDA680CEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m6699524C00C6758053CF86F067C28FC28669B016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Button choice = Instantiate (buttonPrefab) as Button;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___buttonPrefab_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Object_Instantiate_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m6699524C00C6758053CF86F067C28FC28669B016(L_0, Object_Instantiate_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m6699524C00C6758053CF86F067C28FC28669B016_RuntimeMethod_var);
		// choice.transform.SetParent (choicesCanvas.transform, false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = L_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___choicesCanvas_11;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_3);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_3, L_5, (bool)0, NULL);
		// Text choiceText = choice.GetComponentInChildren<Text> ();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = L_2;
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7;
		L_7 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_6, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		// choiceText.text = text;
		String_t* L_8 = ___0_text;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_8);
		// HorizontalLayoutGroup layoutGroup = choice.GetComponent <HorizontalLayoutGroup> ();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = L_6;
		NullCheck(L_9);
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_10;
		L_10 = Component_GetComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_m1DF360D4574B72DBFE3008DB7BFC2D4EDA680CEB(L_9, Component_GetComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_m1DF360D4574B72DBFE3008DB7BFC2D4EDA680CEB_RuntimeMethod_var);
		// layoutGroup.childForceExpandHeight = false;
		NullCheck(L_10);
		HorizontalOrVerticalLayoutGroup_set_childForceExpandHeight_mA144CF421614F41813DE346AA9D1C64621C6C2E5(L_10, (bool)0, NULL);
		// return choice;
		return L_9;
	}
}
// System.Void BasicInkExample::RemoveChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_RemoveChildren_m766CEC3453D5D7B886B26153C6751B56B48B050B (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int childCount = choicesCanvas.transform.childCount;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___choicesCanvas_11;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		// for (int i = childCount - 1; i >= 0; --i) {
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_0034;
	}

IL_0015:
	{
		// GameObject.Destroy (choicesCanvas.transform.GetChild (i).gameObject);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___choicesCanvas_11;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, L_5, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		// for (int i = childCount - 1; i >= 0; --i) {
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0034:
	{
		// for (int i = childCount - 1; i >= 0; --i) {
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BasicInkExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample__ctor_mF092D71115D198726D59C5500BCC8E7ED261D2D0 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<string> dialogueOverview = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___dialogueOverview_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dialogueOverview_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void BasicInkExample::<RefreshView>b__7_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicInkExample_U3CRefreshViewU3Eb__7_1_m217ECB83A1C71BFD5B2B83A35A2A46E814E668B8 (BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* __this, const RuntimeMethod* method) 
{
	{
		// HandleDialogueEnd();
		BasicInkExample_HandleDialogueEnd_m1D0349C63003C415156ED7BEF65152E6EB0FD324(__this, NULL);
		// return;
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
// System.Void BasicInkExample/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mE66A949D81526B52DEDF0EE8465E81EEBA59CB40 (U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BasicInkExample/<>c__DisplayClass7_0::<RefreshView>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CRefreshViewU3Eb__0_m07A5E31F88E7AA6FFC69F3165C7FE8D30AA74F4B (U3CU3Ec__DisplayClass7_0_t090BB2C34A9943015548D5D08BAE2F3D8BBFDD08* __this, const RuntimeMethod* method) 
{
	{
		// OnClickChoiceButton (choice);
		BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* L_0 = __this->___U3CU3E4__this_1;
		Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* L_1 = __this->___choice_0;
		NullCheck(L_0);
		BasicInkExample_OnClickChoiceButton_mD4A1BAEA594370D9609F50B5079DDC7A38B91902(L_0, L_1, NULL);
		// });
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
// System.Void QuitGameOnKeypress::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitGameOnKeypress_Update_m494AA90832DB42CE29E1A6659A18CA780F689547 (QuitGameOnKeypress_t43D92D44E6B02FE6C8A804E4BD0E48692DBC9AD9* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKeyDown(key)) Application.Quit();
		int32_t L_0 = __this->___key_4;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if(Input.GetKeyDown(key)) Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void QuitGameOnKeypress::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitGameOnKeypress__ctor_m2F4EB3C89FA4210C1E6CC1FF48B92E4FEFF6E954 (QuitGameOnKeypress_t43D92D44E6B02FE6C8A804E4BD0E48692DBC9AD9* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode key = KeyCode.Escape;
		__this->___key_4 = ((int32_t)27);
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
// System.Void JoystickPlayerExample::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_FixedUpdate_m9AEDBA111F95D67A006A5D3821956048224541B7 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_5;
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_5 = __this->___variableJoystick_5;
		NullCheck(L_5);
		float L_6;
		L_6 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_9, L_14, 2, NULL);
		// }
		return;
	}
}
// System.Void JoystickPlayerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample__ctor_m702422E0AE29402330CF41FDDBEE76F0506342E2 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
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
// System.Void JoystickSetterExample::ModeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_ModeChanged_m35AF30EE3E6C8CEBF064A7AB80F5795E9AF06D23 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.SetMode(JoystickType.Fixed);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_1, 0, NULL);
		// break;
		return;
	}

IL_0020:
	{
		// variableJoystick.SetMode(JoystickType.Floating);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_2 = __this->___variableJoystick_4;
		NullCheck(L_2);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_2, 1, NULL);
		// break;
		return;
	}

IL_002d:
	{
		// variableJoystick.SetMode(JoystickType.Dynamic);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_3 = __this->___variableJoystick_4;
		NullCheck(L_3);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_3, 2, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::AxisChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_AxisChanged_m5CA220FEA14E06BD8A445E31C5B66E4601C5E404 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.AxisOptions = AxisOptions.Both;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_1, 0, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_3 = __this->___axisSprites_7;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_6, NULL);
		// break;
		return;
	}

IL_0033:
	{
		// variableJoystick.AxisOptions = AxisOptions.Horizontal;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_7 = __this->___variableJoystick_4;
		NullCheck(L_7);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_7, 1, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_9 = __this->___axisSprites_7;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_12, NULL);
		// break;
		return;
	}

IL_0053:
	{
		// variableJoystick.AxisOptions = AxisOptions.Vertical;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_13 = __this->___variableJoystick_4;
		NullCheck(L_13);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_13, 2, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_15 = __this->___axisSprites_7;
		int32_t L_16 = ___0_index;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_14, L_18, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapX_m25A77C3DE4C6DBBE3B4A58E2DE8CD44B1773D6A1 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapX = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapY_m54FE8DCB2CE8D2BF5D2CDF84C68DE263F0E25B1B (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapY = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_Update_m99B2432D22FE669B4DC3209696AD4A62096C7D41 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// valueText.text = "Current Value: " + variableJoystick.Direction;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___valueText_5;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample__ctor_m2A3D66E05BCDF78D0F116348094717BEBA73EC91 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
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
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		bool L_0 = __this->___snapX_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___input_14);
		float L_2 = L_1->___x_0;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___input_14);
		float L_4 = L_3->___x_0;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 1, NULL);
		return L_5;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		bool L_0 = __this->___snapY_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___input_14);
		float L_2 = L_1->___y_1;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___input_14);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 2, NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		float L_0;
		L_0 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(__this, NULL);
		float L_1;
		L_1 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_mB38F0D3B6ADE2D1557D7A3D6759C469F17509D77 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return handleRange; }
		float L_0 = __this->___handleRange_4;
		return L_0;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { handleRange = Mathf.Abs(value); }
		float L_0 = ___0_value;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___handleRange_4 = L_1;
		// set { handleRange = Mathf.Abs(value); }
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_mCE52B635A8CF24F6DD867C14E34094515DE6AEFC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return deadZone; }
		float L_0 = __this->___deadZone_5;
		return L_0;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { deadZone = Mathf.Abs(value); }
		float L_0 = ___0_value;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___deadZone_5 = L_1;
		// set { deadZone = Mathf.Abs(value); }
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0;
		L_0 = Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388(__this, NULL);
		return L_0;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___0_value;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_m51CAFDCC399606BA82986908700AAA45668A0F40 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = __this->___snapX_7;
		return L_0;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___0_value;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_m35AFC1AD1DF5EDE5FCE8BAFEBE91AD51D7451613 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = __this->___snapY_8;
		return L_0;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___0_value;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandleRange = handleRange;
		float L_0 = __this->___handleRange_4;
		Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505(__this, L_0, NULL);
		// DeadZone = deadZone;
		float L_1 = __this->___deadZone_5;
		Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19(__this, L_1, NULL);
		// baseRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___baseRect_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)L_2);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___canvas_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_12), (void*)L_3);
		// if (canvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError("The Joystick is not placed inside a canvas");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6, NULL);
	}

IL_0048:
	{
		// Vector2 center = new Vector2(0.5f, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.5f), (0.5f), NULL);
		// background.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		NullCheck(L_6);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_6, L_7, NULL);
		// handle.anchorMin = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		NullCheck(L_8);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_8, L_9, NULL);
		// handle.anchorMax = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		NullCheck(L_10);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_10, L_11, NULL);
		// handle.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		NullCheck(L_12);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_12, L_13, NULL);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cam = null;
		__this->___cam_13 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// cam = canvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___canvas_12;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_2, NULL);
		__this->___cam_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)L_3);
	}

IL_0026:
	{
		// Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cam_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___background_9;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransformUtility_WorldToScreenPoint_mC8701032E223BA296C43799F4AEE98626686238F(L_4, L_6, NULL);
		V_0 = L_7;
		// Vector2 radius = background.sizeDelta / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___background_9;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_9, (2.0f), NULL);
		V_1 = L_10;
		// input = (eventData.position - position) / (radius * canvas.scaleFactor);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = ___0_eventData;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_12, L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = __this->___canvas_12;
		NullCheck(L_16);
		float L_17;
		L_17 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_15, L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline(L_14, L_18, NULL);
		__this->___input_14 = L_19;
		// FormatInput();
		Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342(__this, NULL);
		// HandleInput(input.magnitude, input.normalized, radius, cam);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___input_14);
		float L_21;
		L_21 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___input_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___cam_13;
		VirtualActionInvoker4< float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_21, L_23, L_24, L_25);
		// handle.anchoredPosition = input * radius * handleRange;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_27, L_28, NULL);
		float L_30 = __this->___handleRange_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_29, L_30, NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_26, L_31, NULL);
		// }
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_magnitude, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_normalised, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_radius, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___3_cam, const RuntimeMethod* method) 
{
	{
		// if (magnitude > deadZone)
		float L_0 = ___0_magnitude;
		float L_1 = __this->___deadZone_5;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (magnitude > 1)
		float L_2 = ___0_magnitude;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// input = normalised;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_normalised;
		__this->___input_14 = L_3;
		return;
	}

IL_0019:
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_4;
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// if (axisOptions == AxisOptions.Horizontal)
		int32_t L_0 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// input = new Vector2(input.x, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___input_14);
		float L_2 = L_1->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->___input_14 = L_3;
		return;
	}

IL_0025:
	{
		// else if (axisOptions == AxisOptions.Vertical)
		int32_t L_4 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0049;
		}
	}
	{
		// input = new Vector2(0f, input.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___input_14);
		float L_6 = L_5->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->___input_14 = L_7;
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, int32_t ___1_snapAxis, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (value == 0)
		float L_0 = ___0_value;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return value;
		float L_1 = ___0_value;
		return L_1;
	}

IL_000a:
	{
		// if (axisOptions == AxisOptions.Both)
		int32_t L_2 = __this->___axisOptions_6;
		if (L_2)
		{
			goto IL_0075;
		}
	}
	{
		// float angle = Vector2.Angle(input, Vector2.up);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		float L_5;
		L_5 = Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// if (snapAxis == AxisOptions.Horizontal)
		int32_t L_6 = ___1_snapAxis;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// if (angle < 22.5f || angle > 157.5f)
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(22.5f))))
		{
			goto IL_0037;
		}
	}
	{
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(157.5f)))))
		{
			goto IL_003d;
		}
	}

IL_0037:
	{
		// return 0;
		return (0.0f);
	}

IL_003d:
	{
		// return (value > 0) ? 1 : -1;
		float L_9 = ___0_value;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_0049;
	}

IL_0048:
	{
		G_B10_0 = 1;
	}

IL_0049:
	{
		return ((float)G_B10_0);
	}

IL_004b:
	{
		// else if (snapAxis == AxisOptions.Vertical)
		int32_t L_10 = ___1_snapAxis;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// if (angle > 67.5f && angle < 112.5f)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(67.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		float L_12 = V_0;
		if ((!(((float)L_12) < ((float)(112.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0065:
	{
		// return (value > 0) ? 1 : -1;
		float L_13 = ___0_value;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B18_0 = 1;
	}

IL_0071:
	{
		return ((float)G_B18_0);
	}

IL_0073:
	{
		// return value;
		float L_14 = ___0_value;
		return L_14;
	}

IL_0075:
	{
		// if (value > 0)
		float L_15 = ___0_value;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0083:
	{
		// if (value < 0)
		float L_16 = ___0_value;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_0091:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_0;
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 localPoint = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(baseRect, screenPosition, cam, out localPoint))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___baseRect_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_screenPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_13;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_1, L_2, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// Vector2 pivotOffset = baseRect.pivot * baseRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___baseRect_11;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_5, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___baseRect_11;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// return localPoint - (background.anchorMax * baseRect.sizeDelta) + pivotOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___background_9;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_11, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___baseRect_11;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_12, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_10, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_16, L_17, NULL);
		return L_18;
	}

IL_0060:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_19;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float handleRange = 1;
		__this->___handleRange_4 = (1.0f);
		// private Vector2 input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_0;
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
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m16C670C1DA0A45E83F6F87C4304F459EDDEEDD5A (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___0_value;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_mFE16C6CE0B753F08E79A2AEC75782DEEF3B96F72 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// MoveThreshold = moveThreshold;
		float L_0 = __this->___moveThreshold_15;
		DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9(__this, L_0, NULL);
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_mBFA3026A0DA4A6B53C0E747A1E892CBC7F43E136 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___0_eventData;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_m10389907A9D3362F6B75FDC5F35AF37A5DD5AE7C (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_m3F157F4825BE6682228C8E135581C6404D268506 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___0_magnitude, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_normalised, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_radius, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___3_cam, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (magnitude > moveThreshold)
		float L_0 = ___0_magnitude;
		float L_1 = __this->___moveThreshold_15;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_normalised;
		float L_3 = ___0_magnitude;
		float L_4 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_2, ((float)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___2_radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = L_8;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_9, L_12, NULL);
	}

IL_0035:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_13 = ___0_magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___1_normalised;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___2_radius;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = ___3_cam;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_m9DDA6263314BD7B97679DF14A4664358BD3E58CB (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_m8C8BB74E5EA8CA2C3DD2AE084301EC91F519AD24 (FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_mB22059CD82AF77A8F94AC72E81A8BAE969399E81 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_mFE5B4F54D5BBCA72F9729AB64765F558FA5C7A54 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___0_eventData;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m80ABA9C914E1953F91DBF74853CE84879352280D (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_m6B72425996D46B025F9E9D22121E9D01BEC6BD3C (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m8C9D3A63DB3B6CF1F0139C3504EC2E7AC4E7CF99 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_m23DC4187B405EB690D297379E2113568B40C705A (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___0_value;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___0_joystickType, const RuntimeMethod* method) 
{
	{
		// this.joystickType = joystickType;
		int32_t L_0 = ___0_joystickType;
		__this->___joystickType_16 = L_0;
		// if(joystickType == JoystickType.Fixed)
		int32_t L_1 = ___0_joystickType;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// background.anchoredPosition = fixedPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___fixedPosition_17;
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		return;
	}

IL_002d:
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m21743760641EA0317ACCD95949B99825446FE74D (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// fixedPosition = background.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___fixedPosition_17 = L_1;
		// SetMode(joystickType);
		int32_t L_2 = __this->___joystickType_16;
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m8ABE5C8EFBC8DB3A2EE135FFF3C0F67C533AF4B5 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_3, NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_4, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0030:
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___0_eventData;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m65296D82A6C2E1BDC2D622B9C922FAE8E4544526 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_mD1BCF9A068737A9C057EE8CEB7E6DEB682CC03AB (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___0_magnitude, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_normalised, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_radius, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___3_cam, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		int32_t L_0 = __this->___joystickType_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = ___0_magnitude;
		float L_2 = __this->___moveThreshold_15;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_normalised;
		float L_4 = ___0_magnitude;
		float L_5 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___2_radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_6, L_7, NULL);
		V_0 = L_8;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_13, NULL);
	}

IL_003e:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_14 = ___0_magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___1_normalised;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___2_radius;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___3_cam;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_14, L_15, L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m6C7B41973BE20A94F16DB5DCC9AA805C5D8DF852 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		// private Vector2 fixedPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___fixedPosition_17 = L_0;
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void BossTriggerBox::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTriggerBox_OnTriggerEnter2D_mE3E6BF2A76EAE3EB0FB3EDC61F014781CA8BCD72 (BossTriggerBox_tB60DDC791643D1246B685B9B12C38B62ABD446A8* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player" && !alreadyTriggered)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = __this->___alreadyTriggered_5;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		// gameManager.HandleBossStart();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = __this->___gameManager_4;
		NullCheck(L_5);
		GameManager_HandleBossStart_mCF03FEDE388406B3AF3AA6E8FC353AB2E8211BDD(L_5, NULL);
		// alreadyTriggered = true;
		__this->___alreadyTriggered_5 = (bool)1;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void BossTriggerBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTriggerBox__ctor_mD5943E9919CABC62FA5EDD354866DC99A730A0CE (BossTriggerBox_tB60DDC791643D1246B685B9B12C38B62ABD446A8* __this, const RuntimeMethod* method) 
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
// System.Void CameraBehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBehavior_Update_mB5D478D6620FBF3EB0E7F8C68F4EC3B8ED6C29AA (CameraBehavior_t7F1E8CF807060E73AD4984151E22E62E59CCB71A* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.transform.position = player.transform.position + new Vector3(0, 0, -10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), (0.0f), (-10.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_5, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void CameraBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBehavior__ctor_m570193336D1B71985919B0D7E5F944D2B5F5B71A (CameraBehavior_t7F1E8CF807060E73AD4984151E22E62E59CCB71A* __this, const RuntimeMethod* method) 
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
// System.Void Character::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Awake_m999C4CC2D96D7D8FC56002FFBADB1EDF72CC39B7 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	{
		// health = initialHealth;
		int32_t L_0 = __this->___initialHealth_4;
		__this->___health_12 = L_0;
		// }
		return;
	}
}
// System.Void Character::DropItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_DropItem_m803354C73778E5947CED3C631463DFF549375D30 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, String_t* ___0_itemId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2BC17AB0D91DEA7C7AF564DFF70B572364ABEF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CheckItem(itemId))
		String_t* L_0 = ___0_itemId;
		bool L_1;
		L_1 = Character_CheckItem_m3E0AE1336791944F128D849C7DF425D60536E4B7(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.Log("Item cannot be dropped because item is not found.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD2BC17AB0D91DEA7C7AF564DFF70B572364ABEF9, NULL);
		// return;
		return;
	}

IL_0014:
	{
		// _inventory[itemId] = _inventory[itemId] - 1;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = __this->____inventory_13;
		String_t* L_3 = ___0_itemId;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4 = __this->____inventory_13;
		String_t* L_5 = ___0_itemId;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_4, L_5, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		NullCheck(L_2);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_2, L_3, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// if (_inventory[itemId] == 0) _inventory.Remove(itemId);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_7 = __this->____inventory_13;
		String_t* L_8 = ___0_itemId;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_7, L_8, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0049;
		}
	}
	{
		// if (_inventory[itemId] == 0) _inventory.Remove(itemId);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_10 = __this->____inventory_13;
		String_t* L_11 = ___0_itemId;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC(L_10, L_11, Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var);
	}

IL_0049:
	{
		// GameObject newItem = Instantiate(itemPrefab, gameObject.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___itemPrefab_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_13, L_16, L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// newItem.GetComponent<Item>().ChangeItemId(itemId);
		NullCheck(L_18);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_19;
		L_19 = GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05(L_18, GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05_RuntimeMethod_var);
		String_t* L_20 = ___0_itemId;
		NullCheck(L_19);
		Item_ChangeItemId_m0F02C7B63B8F1B4FE19963AECA93B5EF0DD21FCF(L_19, L_20, NULL);
		// if (dropSound != null) dropSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->___dropSound_8;
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_008d;
		}
	}
	{
		// if (dropSound != null) dropSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23 = __this->___dropSound_8;
		NullCheck(L_23);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_23, NULL);
	}

IL_008d:
	{
		// if (gameManager != null) gameManager.GetComponent<GameManager>().UpdateUI();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___gameManager_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00ab;
		}
	}
	{
		// if (gameManager != null) gameManager.GetComponent<GameManager>().UpdateUI();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___gameManager_6;
		NullCheck(L_26);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_27;
		L_27 = GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6(L_26, GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var);
		NullCheck(L_27);
		GameManager_UpdateUI_m592EA278752B47E9A40AE3B0DCC0BE8BAB0D472E(L_27, NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void Character::ConsumeItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_ConsumeItem_m0C01B2C32979F75550B02FBF2991FC33F8659088 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, String_t* ___0_itemId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CheckItem(itemId))
		String_t* L_0 = ___0_itemId;
		bool L_1;
		L_1 = Character_CheckItem_m3E0AE1336791944F128D849C7DF425D60536E4B7(__this, L_0, NULL);
		if (L_1)
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
		// _inventory[itemId] = _inventory[itemId] - 1;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = __this->____inventory_13;
		String_t* L_3 = ___0_itemId;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4 = __this->____inventory_13;
		String_t* L_5 = ___0_itemId;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_4, L_5, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		NullCheck(L_2);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_2, L_3, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// if (_inventory[itemId] == 0) _inventory.Remove(itemId);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_7 = __this->____inventory_13;
		String_t* L_8 = ___0_itemId;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_7, L_8, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		// if (_inventory[itemId] == 0) _inventory.Remove(itemId);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_10 = __this->____inventory_13;
		String_t* L_11 = ___0_itemId;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC(L_10, L_11, Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var);
	}

IL_003f:
	{
		// gameManager.GetComponent<GameManager>().UpdateUI();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___gameManager_6;
		NullCheck(L_13);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_14;
		L_14 = GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6(L_13, GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var);
		NullCheck(L_14);
		GameManager_UpdateUI_m592EA278752B47E9A40AE3B0DCC0BE8BAB0D472E(L_14, NULL);
		// }
		return;
	}
}
// System.Boolean Character::CheckItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Character_CheckItem_m3E0AE1336791944F128D849C7DF425D60536E4B7 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, String_t* ___0_itemId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_inventory.ContainsKey(itemId)) return true;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_0 = __this->____inventory_13;
		String_t* L_1 = ___0_itemId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E(L_0, L_1, Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (_inventory.ContainsKey(itemId)) return true;
		return (bool)1;
	}

IL_0010:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Character::AddItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_AddItem_m1B290C337BFE8F6AD356D69B05CF59B6215BD212 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, String_t* ___0_itemId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CheckItem(itemId)) _inventory[itemId] = 0;
		String_t* L_0 = ___0_itemId;
		bool L_1;
		L_1 = Character_CheckItem_m3E0AE1336791944F128D849C7DF425D60536E4B7(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (!CheckItem(itemId)) _inventory[itemId] = 0;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = __this->____inventory_13;
		String_t* L_3 = ___0_itemId;
		NullCheck(L_2);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_2, L_3, 0, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
	}

IL_0016:
	{
		// _inventory[itemId] = _inventory[itemId] + 1;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4 = __this->____inventory_13;
		String_t* L_5 = ___0_itemId;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_6 = __this->____inventory_13;
		String_t* L_7 = ___0_itemId;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_6, L_7, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		NullCheck(L_4);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_4, L_5, ((int32_t)il2cpp_codegen_add(L_8, 1)), Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// if (pickupSound != null) pickupSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___pickupSound_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		// if (pickupSound != null) pickupSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___pickupSound_7;
		NullCheck(L_11);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
	}

IL_0049:
	{
		// gameManager.GetComponent<GameManager>().UpdateUI();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___gameManager_6;
		NullCheck(L_12);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13;
		L_13 = GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6(L_12, GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var);
		NullCheck(L_13);
		GameManager_UpdateUI_m592EA278752B47E9A40AE3B0DCC0BE8BAB0D472E(L_13, NULL);
		// }
		return;
	}
}
// System.Void Character::ChangeHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_ChangeHealth_m40924BC0F6DD4A6927CB090FCBA90F58621EE562 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, int32_t ___0_changeBy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// health += changeBy;
		int32_t L_0 = __this->___health_12;
		int32_t L_1 = ___0_changeBy;
		__this->___health_12 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// if (health <= 0) {
		int32_t L_2 = __this->___health_12;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// HandleDeath();
		Character_HandleDeath_mFF4D609FEC4806415B3689B497C0D03EBE0A8949(__this, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// gameManager.GetComponent<GameManager>().UpdateUI();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___gameManager_6;
		NullCheck(L_3);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4;
		L_4 = GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6(L_3, GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var);
		NullCheck(L_4);
		GameManager_UpdateUI_m592EA278752B47E9A40AE3B0DCC0BE8BAB0D472E(L_4, NULL);
		// if (changeBy >= 0 && healSound != null) {
		int32_t L_5 = ___0_changeBy;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___healSound_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// healSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___healSound_9;
		NullCheck(L_8);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_8, NULL);
		// StartCoroutine(FlashColor(0f, 1f, 0f, 1f, 0.1f));
		RuntimeObject* L_9;
		L_9 = Character_FlashColor_m8A2A5731D0ED2B1040B5760A65D498E1E08236C6(__this, (0.0f), (1.0f), (0.0f), (1.0f), (0.100000001f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
	}

IL_0071:
	{
		// if (changeBy < 0)
		int32_t L_11 = ___0_changeBy;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		// StartCoroutine(FlashColor(1f, 0f, 0f, 1f, 0.1f));
		RuntimeObject* L_12;
		L_12 = Character_FlashColor_m8A2A5731D0ED2B1040B5760A65D498E1E08236C6(__this, (1.0f), (0.0f), (0.0f), (1.0f), (0.100000001f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
		// if (hurtSound != null) hurtSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___hurtSound_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		// if (hurtSound != null) hurtSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = __this->___hurtSound_10;
		NullCheck(L_16);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_16, NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Character::FlashColor(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Character_FlashColor_m8A2A5731D0ED2B1040B5760A65D498E1E08236C6 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, float ___0_red, float ___1_green, float ___2_blue, float ___3_opacity, float ___4_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* L_0 = (U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092*)il2cpp_codegen_object_new(U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFlashColorU3Ed__16__ctor_m96B1A75B0BA021283AB8493D17BB01455ADD171F(L_0, 0, NULL);
		U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* L_2 = L_1;
		float L_3 = ___0_red;
		NullCheck(L_2);
		L_2->___red_3 = L_3;
		U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* L_4 = L_2;
		float L_5 = ___1_green;
		NullCheck(L_4);
		L_4->___green_4 = L_5;
		U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* L_6 = L_4;
		float L_7 = ___2_blue;
		NullCheck(L_6);
		L_6->___blue_5 = L_7;
		U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* L_8 = L_6;
		float L_9 = ___3_opacity;
		NullCheck(L_8);
		L_8->___opacity_6 = L_9;
		U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* L_10 = L_8;
		float L_11 = ___4_time;
		NullCheck(L_10);
		L_10->___time_7 = L_11;
		return L_10;
	}
}
// System.Boolean Character::DropAnyItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Character_DropAnyItem_m13E8D6334BE41A7E00C7A279C7AF36E1C62FC8E8 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// List<string> keyList = new List<string>(_inventory.Keys);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_0 = __this->____inventory_13;
		NullCheck(L_0);
		KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* L_1;
		L_1 = Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E(L_0, Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_2, L_1, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		V_0 = L_2;
		// if (keyList.Count == 0) return false;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_3, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		// if (keyList.Count == 0) return false;
		return (bool)0;
	}

IL_001b:
	{
		// DropItem(keyList[0]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_5, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		Character_DropItem_m803354C73778E5947CED3C631463DFF549375D30(__this, L_6, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Character::HandleDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_HandleDeath_mFF4D609FEC4806415B3689B497C0D03EBE0A8949 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC53D54A1693AB435FC7B249796B95A2188D95C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}

IL_0000:
	{
		// while (DropAnyItem()) { }
		bool L_0;
		L_0 = Character_DropAnyItem_m13E8D6334BE41A7E00C7A279C7AF36E1C62FC8E8(__this, NULL);
		if (L_0)
		{
			goto IL_0000;
		}
	}
	{
		// gameObject.GetComponent<Collider2D>().isTrigger = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2;
		L_2 = GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4(L_1, GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		NullCheck(L_2);
		Collider2D_set_isTrigger_m19D5227BAB5D41F212D515C1E2CA433C2FEF7A48(L_2, (bool)1, NULL);
		// gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4;
		L_4 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_3, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		NullCheck(L_4);
		Rigidbody2D_set_bodyType_mE2FAC2D78B06B445BD2AD58F87AC5B1865B23248(L_4, 0, NULL);
		// gameObject.GetComponent<Rigidbody2D>().gravityScale = 1f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6;
		L_6 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_5, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		NullCheck(L_6);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_6, (1.0f), NULL);
		// if (deathSound != null) deathSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___deathSound_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		// if (deathSound != null) deathSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___deathSound_11;
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
	}

IL_0058:
	{
		// Destroy(gameObject, 3.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_10, (3.0f), NULL);
		// if (gameObject.tag == "Player")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_11, NULL);
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		// SceneManager.LoadScene("DeathScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC53D54A1693AB435FC7B249796B95A2188D95C30, NULL);
	}

IL_0089:
	{
		// if (gameObject.tag == "Boss")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2, NULL);
		if (!L_16)
		{
			goto IL_00aa;
		}
	}
	{
		// SceneManager.LoadScene("Win");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1, NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void Character::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_OnCollisionEnter2D_mD8F576626BECA56AE359AB2B2DA172435D933014 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB90E9B7DCCC2C7E4208C10695C48FD2F200CB69);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (collision.gameObject.tag == "ITEM")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralDB90E9B7DCCC2C7E4208C10695C48FD2F200CB69, NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// string itemId = collision.gameObject.GetComponent<Item>().itemId;
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___0_collision;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_4, NULL);
		NullCheck(L_5);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_6;
		L_6 = GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05(L_5, GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7 = L_6->___itemId_4;
		V_0 = L_7;
		// AddItem(itemId);
		String_t* L_8 = V_0;
		Character_AddItem_m1B290C337BFE8F6AD356D69B05CF59B6215BD212(__this, L_8, NULL);
		// Destroy(collision.gameObject);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_9 = ___0_collision;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Int32 Character::GetHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Character_GetHealth_mE8BF820006CEA5530185AB059A8E9E118AC09E35 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	{
		// return health;
		int32_t L_0 = __this->___health_12;
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Character::GetInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* Character_GetInventory_mF0C9B3B4BB89B000221A4C066A8EB7EE49E21659 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	{
		// return _inventory;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_0 = __this->____inventory_13;
		return L_0;
	}
}
// System.Void Character::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character__ctor_m9D8D6104D9CB19DAE6866ECA929FFB0F2592DD19 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int health = 100;
		__this->___health_12 = ((int32_t)100);
		// private Dictionary<string, int> _inventory = new Dictionary<string, int>();
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_0 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_0, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		__this->____inventory_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inventory_13), (void*)L_0);
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
// System.Void Character/<FlashColor>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashColorU3Ed__16__ctor_m96B1A75B0BA021283AB8493D17BB01455ADD171F (U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Character/<FlashColor>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashColorU3Ed__16_System_IDisposable_Dispose_m4BB0F5D8B839D07F8EC2641C80A89B5F23D3708A (U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Character/<FlashColor>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFlashColorU3Ed__16_MoveNext_m3FB4B22936DE2E723BB6F7D471551757A1E7F4EE (U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_0080;
			}
			case 2:
			{
				goto IL_00ca;
			}
			case 3:
			{
				goto IL_0118;
			}
			case 4:
			{
				goto IL_0162;
			}
			case 5:
			{
				goto IL_01b0;
			}
			case 6:
			{
				goto IL_01fa;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.GetComponent<SpriteRenderer>().color = new Color(red, green, blue, opacity);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_3 = V_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_4, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		float L_6 = __this->___red_3;
		float L_7 = __this->___green_4;
		float L_8 = __this->___blue_5;
		float L_9 = __this->___opacity_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_10), L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_5, L_10, NULL);
		// yield return new WaitForSeconds(time);
		float L_11 = __this->___time_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_12 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_12, L_11, NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0080:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 1f);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_14, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_15, L_16, NULL);
		// yield return new WaitForSeconds(time);
		float L_17 = __this->___time_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_18 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_18, L_17, NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ca:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.GetComponent<SpriteRenderer>().color = new Color(red, green, blue, opacity);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_19 = V_1;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_21;
		L_21 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_20, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		float L_22 = __this->___red_3;
		float L_23 = __this->___green_4;
		float L_24 = __this->___blue_5;
		float L_25 = __this->___opacity_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_26), L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_21);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_21, L_26, NULL);
		// yield return new WaitForSeconds(time);
		float L_27 = __this->___time_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_28 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_28, L_27, NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0118:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 1f);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_29 = V_1;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		NullCheck(L_30);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_31;
		L_31 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_30, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		memset((&L_32), 0, sizeof(L_32));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_32), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_31, L_32, NULL);
		// yield return new WaitForSeconds(time);
		float L_33 = __this->___time_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_34 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_34, L_33, NULL);
		__this->___U3CU3E2__current_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_34);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_0162:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.GetComponent<SpriteRenderer>().color = new Color(red, green, blue, opacity);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_35 = V_1;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		NullCheck(L_36);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37;
		L_37 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_36, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		float L_38 = __this->___red_3;
		float L_39 = __this->___green_4;
		float L_40 = __this->___blue_5;
		float L_41 = __this->___opacity_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42;
		memset((&L_42), 0, sizeof(L_42));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_42), L_38, L_39, L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_37);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_37, L_42, NULL);
		// yield return new WaitForSeconds(time);
		float L_43 = __this->___time_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_44 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_44, L_43, NULL);
		__this->___U3CU3E2__current_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_44);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_01b0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 1f);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_45 = V_1;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_45, NULL);
		NullCheck(L_46);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_47;
		L_47 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_46, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		memset((&L_48), 0, sizeof(L_48));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_48), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_47);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_47, L_48, NULL);
		// yield return new WaitForSeconds(time);
		float L_49 = __this->___time_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_50 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_50, L_49, NULL);
		__this->___U3CU3E2__current_1 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_50);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_01fa:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Character/<FlashColor>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFlashColorU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF773CB13303A631EC59FA27E6F799CCBB8C1FFA7 (U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Character/<FlashColor>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashColorU3Ed__16_System_Collections_IEnumerator_Reset_mAA9B5C224C964A1E655E7D9BBC67CDCBB1AB52DF (U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFlashColorU3Ed__16_System_Collections_IEnumerator_Reset_mAA9B5C224C964A1E655E7D9BBC67CDCBB1AB52DF_RuntimeMethod_var)));
	}
}
// System.Object Character/<FlashColor>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFlashColorU3Ed__16_System_Collections_IEnumerator_get_Current_mA20DDB2C91A64F67E7DF3EAC4B12F7FEF014225E (U3CFlashColorU3Ed__16_t1B825B601BBB3C01FCC50DD6C63CAEC315B90092* __this, const RuntimeMethod* method) 
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
// System.Void Damage::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damage_Awake_m06DA7921BF795EB740CB854E1A96A3068B76C164 (Damage_tF640D3076BC620E4202275ED78B842A7F36C804E* __this, const RuntimeMethod* method) 
{
	{
		// shing.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___shing_7;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void Damage::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damage_FixedUpdate_m78934B9AA45ABDB1C3A518F1414E37D68EDC5372 (Damage_tF640D3076BC620E4202275ED78B842A7F36C804E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// timePassed += Time.deltaTime;
		float L_0 = __this->___timePassed_6;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timePassed_6 = ((float)il2cpp_codegen_add(L_0, L_1));
		// Color currentColor = gameObject.GetComponent<SpriteRenderer>().color;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_2, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_3, NULL);
		V_0 = L_4;
		// gameObject.GetComponent<SpriteRenderer>().color = new Color(currentColor.r, currentColor.b, currentColor.g, (disappearAfter - timePassed)/(disappearAfter) );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		float L_8 = L_7.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		float L_10 = L_9.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_0;
		float L_12 = L_11.___g_1;
		float L_13 = __this->___disappearAfter_5;
		float L_14 = __this->___timePassed_6;
		float L_15 = __this->___disappearAfter_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), L_8, L_10, L_12, ((float)(((float)il2cpp_codegen_subtract(L_13, L_14))/L_15)), /*hidden argument*/NULL);
		NullCheck(L_6);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_6, L_16, NULL);
		// if (timePassed >= disappearAfter)
		float L_17 = __this->___timePassed_6;
		float L_18 = __this->___disappearAfter_5;
		if ((!(((float)L_17) >= ((float)L_18))))
		{
			goto IL_0077;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_19, NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Damage::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damage_OnTriggerEnter2D_m0F96D5E31901C1E7E92CD7C52795BB3127485C6A (Damage_tF640D3076BC620E4202275ED78B842A7F36C804E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2_m97BC6DD4B065584EB738E06266BC51A3E57A89B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD37410E9672AFBBBAA901ECAEF13287D7D3B0D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(collision.gameObject.tag);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// if (collision.gameObject.GetComponent<Character>())
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_collision;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_5;
		L_5 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_4, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// collision.gameObject.GetComponent<Character>().ChangeHealth(-damage);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___0_collision;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_9;
		L_9 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_8, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_10 = __this->___damage_4;
		NullCheck(L_9);
		Character_ChangeHealth_m40924BC0F6DD4A6927CB090FCBA90F58621EE562(L_9, ((-L_10)), NULL);
		// if (collision.gameObject.tag == "GHOST")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = ___0_collision;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_12, NULL);
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralCD37410E9672AFBBBAA901ECAEF13287D7D3B0D9, NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		// collision.gameObject.GetComponent<GhostMob>().HandleStun();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_15 = ___0_collision;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2* L_17;
		L_17 = GameObject_GetComponent_TisGhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2_m97BC6DD4B065584EB738E06266BC51A3E57A89B8(L_16, GameObject_GetComponent_TisGhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2_m97BC6DD4B065584EB738E06266BC51A3E57A89B8_RuntimeMethod_var);
		NullCheck(L_17);
		GhostMob_HandleStun_m23671A5CF5BCF264E713F6AB3124B537B6676859(L_17, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Damage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damage__ctor_mD125E75891B1101B5BB47BD4E746206A6AD8BCA6 (Damage_tF640D3076BC620E4202275ED78B842A7F36C804E* __this, const RuntimeMethod* method) 
{
	{
		// public float disappearAfter = 0.2f;
		__this->___disappearAfter_5 = (0.200000003f);
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
// System.Void GameManager::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateUI_m592EA278752B47E9A40AE3B0DCC0BE8BAB0D472E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC5F30923A946D536424C8D9ACB3938D8289C4C84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m33C34E4F1C77B491E24DCCBF07C43639016B2247_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F9B26F223F7BDA29F60980386E99DD4DA72C27F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral432BE89141C2B5D42796C8B799CE0A7C1CFB99FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4357B0A62988D04D31D82A4191051976EB4F08DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A01A5E45748F1DDB1F8BA8166D751C165682CFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7381FC3D6767D4569988A3D7F3828F68DAE25517);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F97764CD30D068972E939605A30B69C6A5825DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843B29D0BBC4649D45DB1A5558E36BECA7E92C36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2474EB85E7EEF13C75BB9EE2A361443B79F99AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF5C3432D439613E3FA9D190AEE92C661BEF4805);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7DED49BAA78CD757AAB6400B4C8367DDFAABB85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC910E0B22C4AE8F18628BB2211E9B1A07D1B511C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCC7A769437AB44F803B6A52648E949FE710AF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA20BA1CAFBFF139DA392FF1E0399B8197E02121);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE6236541FFB93B7ADD42417A04CF149F1D27196);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3DA3DFAF67DBA03FF661AB502A94A5A6A4677F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3EFA0628E5D08FE8A377CFAEFEE7EDE87A2172B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_8 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_9 = NULL;
	String_t* V_10 = NULL;
	int32_t V_11 = 0;
	{
		// Character playerStats = player.GetComponent<Character>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_5;
		NullCheck(L_0);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_1;
		L_1 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_0, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		// int playerHealth = playerStats.GetHealth();
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Character_GetHealth_mE8BF820006CEA5530185AB059A8E9E118AC09E35_inline(L_2, NULL);
		V_0 = L_3;
		// Dictionary<string, int> playerInventory = playerStats.GetInventory();
		NullCheck(L_2);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4;
		L_4 = Character_GetInventory_mF0C9B3B4BB89B000221A4C066A8EB7EE49E21659_inline(L_2, NULL);
		// Dictionary<string, int> playerInventoryDictCopy = new Dictionary<string, int>(playerInventory);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_5 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_mC5F30923A946D536424C8D9ACB3938D8289C4C84(L_5, L_4, Dictionary_2__ctor_mC5F30923A946D536424C8D9ACB3938D8289C4C84_RuntimeMethod_var);
		V_1 = L_5;
		// GameObject gameUIPanel = gameUI.transform.Find("Panel").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___gameUI_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_7, _stringLiteralA2474EB85E7EEF13C75BB9EE2A361443B79F99AC, NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		V_2 = L_9;
		// GameObject weaponSlot = gameUIPanel.transform.Find("WeaponSlot").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_11, _stringLiteral843B29D0BBC4649D45DB1A5558E36BECA7E92C36, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		V_3 = L_13;
		// List<GameObject> itemSlots = new List<GameObject>()
		// {
		//     gameUIPanel.transform.Find("ItemSlot1").gameObject,
		//     gameUIPanel.transform.Find("ItemSlot2").gameObject,
		//     gameUIPanel.transform.Find("ItemSlot3").gameObject,
		//     gameUIPanel.transform.Find("ItemSlot4").gameObject,
		//     gameUIPanel.transform.Find("ItemSlot5").gameObject,
		//     gameUIPanel.transform.Find("ItemSlot6").gameObject,
		//     gameUIPanel.transform.Find("ItemSlot7").gameObject,
		//     gameUIPanel.transform.Find("ItemSlot8").gameObject,
		// };
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_14, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = L_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_2;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_17, _stringLiteralBF5C3432D439613E3FA9D190AEE92C661BEF4805, NULL);
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_15);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_15, L_19, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_2;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_22, _stringLiteralCCCC7A769437AB44F803B6A52648E949FE710AF2, NULL);
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_20);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_20, L_24, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_27, _stringLiteralC7DED49BAA78CD757AAB6400B4C8367DDFAABB85, NULL);
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_28, NULL);
		NullCheck(L_25);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_25, L_29, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = L_25;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_2;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_32, _stringLiteralF3EFA0628E5D08FE8A377CFAEFEE7EDE87A2172B, NULL);
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		NullCheck(L_30);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_30, L_34, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_35 = L_30;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_2;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_37, _stringLiteral0F9B26F223F7BDA29F60980386E99DD4DA72C27F, NULL);
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		NullCheck(L_35);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_35, L_39, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_40 = L_35;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_2;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_42, _stringLiteral7381FC3D6767D4569988A3D7F3828F68DAE25517, NULL);
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_43, NULL);
		NullCheck(L_40);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_40, L_44, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_45 = L_40;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = V_2;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_47, _stringLiteral5A01A5E45748F1DDB1F8BA8166D751C165682CFB, NULL);
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_48, NULL);
		NullCheck(L_45);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_45, L_49, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_50 = L_45;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = V_2;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_51, NULL);
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_52, _stringLiteral432BE89141C2B5D42796C8B799CE0A7C1CFB99FD, NULL);
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		NullCheck(L_50);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_50, L_54, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		V_4 = L_50;
		// bool foundWeed = false;
		V_5 = (bool)0;
		// bool foundSword = false;
		V_6 = (bool)0;
		// for (int i = 0; i < itemSlots.Count; i++)
		V_7 = 0;
		goto IL_02e0;
	}

IL_013b:
	{
		// GameObject curSlot = itemSlots[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_55 = V_4;
		int32_t L_56 = V_7;
		NullCheck(L_55);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_55, L_56, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		// GameObject itemSlotSprite = curSlot.transform.Find("ItemSprite").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = L_57;
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_59, _stringLiteralC910E0B22C4AE8F18628BB2211E9B1A07D1B511C, NULL);
		NullCheck(L_60);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_60, NULL);
		V_8 = L_61;
		// GameObject itemSlotCount = curSlot.transform.Find("Count").gameObject;
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_62, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, NULL);
		NullCheck(L_63);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_63, NULL);
		V_9 = L_64;
		// if (playerInventoryDictCopy.Count == 0)
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_65 = V_1;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = Dictionary_2_get_Count_m33C34E4F1C77B491E24DCCBF07C43639016B2247(L_65, Dictionary_2_get_Count_m33C34E4F1C77B491E24DCCBF07C43639016B2247_RuntimeMethod_var);
		if (L_66)
		{
			goto IL_0198;
		}
	}
	{
		// itemSlotSprite.GetComponent<Image>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = V_8;
		NullCheck(L_67);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_68;
		L_68 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_67, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_68);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_68, (bool)0, NULL);
		// itemSlotCount.GetComponent<Text>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = V_9;
		NullCheck(L_69);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_70;
		L_70 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_69, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		NullCheck(L_70);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_70, (bool)0, NULL);
		// continue;
		goto IL_02da;
	}

IL_0198:
	{
		// itemSlotSprite.GetComponent<Image>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = V_8;
		NullCheck(L_71);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_72;
		L_72 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_71, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_72);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_72, (bool)1, NULL);
		// itemSlotCount.GetComponent<Text>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = V_9;
		NullCheck(L_73);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_74;
		L_74 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_73, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		NullCheck(L_74);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_74, (bool)1, NULL);
		// List<string> curKeys = new List<string>(playerInventoryDictCopy.Keys);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_75 = V_1;
		NullCheck(L_75);
		KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* L_76;
		L_76 = Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E(L_75, Dictionary_2_get_Keys_m676C0478E6247AD8299FC3AE47E19A0239EC590E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_77 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_77, L_76, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		// string curKey = curKeys[0];
		NullCheck(L_77);
		String_t* L_78;
		L_78 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_77, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_10 = L_78;
		// if (curKey == "WEED")
		String_t* L_79 = V_10;
		bool L_80;
		L_80 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_79, _stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B, NULL);
		if (!L_80)
		{
			goto IL_01fb;
		}
	}
	{
		// foundWeed = true;
		V_5 = (bool)1;
		// if (currentObjective == "FIND PLANT") currentObjective = "TRADE PLANT";
		String_t* L_81 = __this->___currentObjective_35;
		bool L_82;
		L_82 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_81, _stringLiteral4357B0A62988D04D31D82A4191051976EB4F08DA, NULL);
		if (!L_82)
		{
			goto IL_02a0;
		}
	}
	{
		// if (currentObjective == "FIND PLANT") currentObjective = "TRADE PLANT";
		__this->___currentObjective_35 = _stringLiteralEE6236541FFB93B7ADD42417A04CF149F1D27196;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObjective_35), (void*)_stringLiteralEE6236541FFB93B7ADD42417A04CF149F1D27196);
		goto IL_02a0;
	}

IL_01fb:
	{
		// } else if (curKey == "KNIFE" && !foundSword)
		String_t* L_83 = V_10;
		bool L_84;
		L_84 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_83, _stringLiteralEA20BA1CAFBFF139DA392FF1E0399B8197E02121, NULL);
		if (!L_84)
		{
			goto IL_024f;
		}
	}
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_024f;
		}
	}
	{
		// weaponSlot.GetComponent<Image>().sprite = GetSprite(curKey);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = V_3;
		NullCheck(L_86);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_87;
		L_87 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_86, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		String_t* L_88 = V_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_89;
		L_89 = GameManager_GetSprite_m2FD0483A66F19D3B521A964C21282372CB1E4761(__this, L_88, NULL);
		NullCheck(L_87);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_87, L_89, NULL);
		// player.GetComponent<Player>().attackCoolDown = 1f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90 = __this->___player_5;
		NullCheck(L_90);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_91;
		L_91 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_90, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		NullCheck(L_91);
		L_91->___attackCoolDown_8 = (1.0f);
		// player.GetComponent<Player>().attackDamage = 10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92 = __this->___player_5;
		NullCheck(L_92);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_93;
		L_93 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_92, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		NullCheck(L_93);
		L_93->___attackDamage_9 = ((int32_t)10);
		// EnableAttackButton();
		GameManager_EnableAttackButton_mBBD26663F81EF1E84ED8213A73413EC42DBF6911(__this, NULL);
		goto IL_02a0;
	}

IL_024f:
	{
		// } else if (curKey == "SWORD")
		String_t* L_94 = V_10;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral7F97764CD30D068972E939605A30B69C6A5825DB, NULL);
		if (!L_95)
		{
			goto IL_02a0;
		}
	}
	{
		// weaponSlot.GetComponent<Image>().sprite = GetSprite(curKey);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = V_3;
		NullCheck(L_96);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_97;
		L_97 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_96, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		String_t* L_98 = V_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_99;
		L_99 = GameManager_GetSprite_m2FD0483A66F19D3B521A964C21282372CB1E4761(__this, L_98, NULL);
		NullCheck(L_97);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_97, L_99, NULL);
		// EnableAttackButton();
		GameManager_EnableAttackButton_mBBD26663F81EF1E84ED8213A73413EC42DBF6911(__this, NULL);
		// player.GetComponent<Player>().attackCoolDown = 0.25f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100 = __this->___player_5;
		NullCheck(L_100);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_101;
		L_101 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_100, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		NullCheck(L_101);
		L_101->___attackCoolDown_8 = (0.25f);
		// player.GetComponent<Player>().attackDamage = 100;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = __this->___player_5;
		NullCheck(L_102);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_103;
		L_103 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_102, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		NullCheck(L_103);
		L_103->___attackDamage_9 = ((int32_t)100);
		// foundSword = true;
		V_6 = (bool)1;
	}

IL_02a0:
	{
		// itemSlotSprite.GetComponent<Image>().sprite = GetSprite(curKey);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = V_8;
		NullCheck(L_104);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_105;
		L_105 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_104, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		String_t* L_106 = V_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_107;
		L_107 = GameManager_GetSprite_m2FD0483A66F19D3B521A964C21282372CB1E4761(__this, L_106, NULL);
		NullCheck(L_105);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_105, L_107, NULL);
		// itemSlotCount.GetComponent<Text>().text = playerInventoryDictCopy[curKey].ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108 = V_9;
		NullCheck(L_108);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_109;
		L_109 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_108, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_110 = V_1;
		String_t* L_111 = V_10;
		NullCheck(L_110);
		int32_t L_112;
		L_112 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_110, L_111, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		V_11 = L_112;
		String_t* L_113;
		L_113 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_11), NULL);
		NullCheck(L_109);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_109, L_113);
		// playerInventoryDictCopy.Remove(curKey);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_114 = V_1;
		String_t* L_115 = V_10;
		NullCheck(L_114);
		bool L_116;
		L_116 = Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC(L_114, L_115, Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var);
	}

IL_02da:
	{
		// for (int i = 0; i < itemSlots.Count; i++)
		int32_t L_117 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_02e0:
	{
		// for (int i = 0; i < itemSlots.Count; i++)
		int32_t L_118 = V_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_119 = V_4;
		NullCheck(L_119);
		int32_t L_120;
		L_120 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_119, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_118) < ((int32_t)L_120)))
		{
			goto IL_013b;
		}
	}
	{
		// if (foundWeed) { EnableHealButton();  } else { DisableHealButton(); }
		bool L_121 = V_5;
		if (!L_121)
		{
			goto IL_02fa;
		}
	}
	{
		// if (foundWeed) { EnableHealButton();  } else { DisableHealButton(); }
		GameManager_EnableHealButton_mF9A660AE089C2147BB83F2A32E4C36340B8FBF24(__this, NULL);
		goto IL_0300;
	}

IL_02fa:
	{
		// if (foundWeed) { EnableHealButton();  } else { DisableHealButton(); }
		GameManager_DisableHealButton_m73CF6185760C87E4B65884820B0E7ED18B8D7BF3(__this, NULL);
	}

IL_0300:
	{
		// gameUIPanel.transform.Find("Health").gameObject.GetComponent<Text>().text = playerHealth.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = V_2;
		NullCheck(L_122);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		NullCheck(L_123);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124;
		L_124 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_123, _stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1, NULL);
		NullCheck(L_124);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125;
		L_125 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_124, NULL);
		NullCheck(L_125);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_126;
		L_126 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_125, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_127;
		L_127 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_126);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_126, L_127);
		// gameUIPanel.transform.Find("objectiveText").gameObject.GetComponent<Text>().text = currentObjective;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_128 = V_2;
		NullCheck(L_128);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_128, NULL);
		NullCheck(L_129);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_129, _stringLiteralF3DA3DFAF67DBA03FF661AB502A94A5A6A4677F0, NULL);
		NullCheck(L_130);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_131;
		L_131 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_130, NULL);
		NullCheck(L_131);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_132;
		L_132 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_131, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_133 = __this->___currentObjective_35;
		NullCheck(L_132);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_132, L_133);
		// }
		return;
	}
}
// UnityEngine.Sprite GameManager::GetSprite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GameManager_GetSprite_m2FD0483A66F19D3B521A964C21282372CB1E4761 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, String_t* ___0_itemId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F97764CD30D068972E939605A30B69C6A5825DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF8DEEAD936F0511A4BFB8461EBCD45C5696EF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA20BA1CAFBFF139DA392FF1E0399B8197E02121);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_itemId;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B, NULL);
		if (L_1)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_2 = ___0_itemId;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C, NULL);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_4 = ___0_itemId;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralEA20BA1CAFBFF139DA392FF1E0399B8197E02121, NULL);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_6 = ___0_itemId;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral7F97764CD30D068972E939605A30B69C6A5825DB, NULL);
		if (L_7)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_8 = ___0_itemId;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteralBEF8DEEAD936F0511A4BFB8461EBCD45C5696EF3, NULL);
		if (L_9)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0066;
	}

IL_0043:
	{
		// return greenPlantSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = __this->___greenPlantSprite_8;
		return L_10;
	}

IL_004a:
	{
		// return blueKeySprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = __this->___blueKeySprite_9;
		return L_11;
	}

IL_0051:
	{
		// return knifeSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = __this->___knifeSprite_10;
		return L_12;
	}

IL_0058:
	{
		// return swordSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = __this->___swordSprite_11;
		return L_13;
	}

IL_005f:
	{
		// return diamondSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14 = __this->___diamondSprite_12;
		return L_14;
	}

IL_0066:
	{
		// return greenPlantSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15 = __this->___greenPlantSprite_8;
		return L_15;
	}
}
// System.Void GameManager::EnableTalkButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableTalkButton_mBA7FB0C72A31344C38B0B23503910722EC503EAC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BE072D8D0EE9593CEC0DCAECE8F5FBF90242A19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject talkButton = gameUI.transform.Find("talkButton").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameUI_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral9BE072D8D0EE9593CEC0DCAECE8F5FBF90242A19, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		// talkButton.GetComponent<Button>().interactable = true;
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_3, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::DisableTalkButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableTalkButton_mDD64A16C3218D1A0A4B9444681C94F18906E9459 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BE072D8D0EE9593CEC0DCAECE8F5FBF90242A19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject talkButton = gameUI.transform.Find("talkButton").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameUI_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral9BE072D8D0EE9593CEC0DCAECE8F5FBF90242A19, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		// talkButton.GetComponent<Button>().interactable = false;
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_3, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::EnableHealButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableHealButton_mF9A660AE089C2147BB83F2A32E4C36340B8FBF24 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CE87A1371B287F5620FA74E07BBC1ACB958DE16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject healButton = gameUI.transform.Find("healButton").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameUI_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral1CE87A1371B287F5620FA74E07BBC1ACB958DE16, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		// healButton.GetComponent<Button>().interactable = true;
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_3, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::EnableAttackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableAttackButton_mBBD26663F81EF1E84ED8213A73413EC42DBF6911 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral631D4C33AC2BF784A34017CCA931BDBE1F4AF8BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject attackButton = gameUI.transform.Find("attackButton").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameUI_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral631D4C33AC2BF784A34017CCA931BDBE1F4AF8BF, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		// attackButton.GetComponent<Button>().interactable = true;
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_3, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::DisableHealButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableHealButton_m73CF6185760C87E4B65884820B0E7ED18B8D7BF3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CE87A1371B287F5620FA74E07BBC1ACB958DE16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject healButton = gameUI.transform.Find("healButton").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameUI_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral1CE87A1371B287F5620FA74E07BBC1ACB958DE16, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		// healButton.GetComponent<Button>().interactable = false;
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_3, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::HandleHeal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleHeal_m636292108D41CD543A266D6CE4D8878C930B0D69 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.GetComponent<Character>().ChangeHealth(20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_5;
		NullCheck(L_0);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_1;
		L_1 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_0, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_1);
		Character_ChangeHealth_m40924BC0F6DD4A6927CB090FCBA90F58621EE562(L_1, ((int32_t)20), NULL);
		// player.GetComponent<Character>().ConsumeItem("WEED");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_5;
		NullCheck(L_2);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_3;
		L_3 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_2, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_3);
		Character_ConsumeItem_m0C01B2C32979F75550B02FBF2991FC33F8659088(L_3, _stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B, NULL);
		// }
		return;
	}
}
// System.Void GameManager::HandleTalk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleTalk_m2C8C4EB1F463C3DFD54E255F4AE26BF8AFCD20D0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD8FE68646D3B34B85891FB64D6E04E2F51F3C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ACF4B5AD43BEDD7DBBBC1DA72A722539EC8082B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C3DBF6BF11FACB2B152784999E32FF5664D84CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F97764CD30D068972E939605A30B69C6A5825DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5DAA4CCAB969C478942849A4E50269CFF2090B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF8DEEAD936F0511A4BFB8461EBCD45C5696EF3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch (nearestNPCId)
		String_t* L_0 = __this->___nearestNPCId_7;
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralA5DAA4CCAB969C478942849A4E50269CFF2090B3, NULL);
		if (L_2)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral0AD8FE68646D3B34B85891FB64D6E04E2F51F3C2, NULL);
		if (L_4)
		{
			goto IL_00ac;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral1ACF4B5AD43BEDD7DBBBC1DA72A722539EC8082B, NULL);
		if (L_6)
		{
			goto IL_00f3;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral5C3DBF6BF11FACB2B152784999E32FF5664D84CD, NULL);
		if (L_8)
		{
			goto IL_013a;
		}
	}
	{
		return;
	}

IL_0045:
	{
		// if (player.GetComponent<Character>().CheckItem("WEED"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___player_5;
		NullCheck(L_9);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_10;
		L_10 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_9, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11;
		L_11 = Character_CheckItem_m3E0AE1336791944F128D849C7DF425D60536E4B7(L_10, _stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B, NULL);
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		// StartDialogue(mageFinalConversation, MageSprite, "MAGE");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_12 = __this->___mageFinalConversation_22;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = __this->___MageSprite_15;
		GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880(__this, L_12, L_13, _stringLiteralA5DAA4CCAB969C478942849A4E50269CFF2090B3, NULL);
		return;
	}

IL_0074:
	{
		// } else if (mageTaskDelegated)
		bool L_14 = __this->___mageTaskDelegated_19;
		if (!L_14)
		{
			goto IL_0094;
		}
	}
	{
		// StartDialogue(mageNoItemConversation, MageSprite, "MAGE");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_15 = __this->___mageNoItemConversation_21;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = __this->___MageSprite_15;
		GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880(__this, L_15, L_16, _stringLiteralA5DAA4CCAB969C478942849A4E50269CFF2090B3, NULL);
		return;
	}

IL_0094:
	{
		// StartDialogue(mageInitialConversation, MageSprite, "MAGE");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_17 = __this->___mageInitialConversation_20;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = __this->___MageSprite_15;
		GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880(__this, L_17, L_18, _stringLiteralA5DAA4CCAB969C478942849A4E50269CFF2090B3, NULL);
		// break;
		return;
	}

IL_00ac:
	{
		// if (player.GetComponent<Character>().CheckItem("DIAMOND")) // if diamond  say shit
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___player_5;
		NullCheck(L_19);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_20;
		L_20 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_19, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_20);
		bool L_21;
		L_21 = Character_CheckItem_m3E0AE1336791944F128D849C7DF425D60536E4B7(L_20, _stringLiteralBEF8DEEAD936F0511A4BFB8461EBCD45C5696EF3, NULL);
		if (!L_21)
		{
			goto IL_00db;
		}
	}
	{
		// StartDialogue(blackSmithAfterConvo, BlacksmithSprite, "BLACKSMITH");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_22 = __this->___blackSmithAfterConvo_24;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_23 = __this->___BlacksmithSprite_16;
		GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880(__this, L_22, L_23, _stringLiteral0AD8FE68646D3B34B85891FB64D6E04E2F51F3C2, NULL);
		return;
	}

IL_00db:
	{
		// StartDialogue(blackSmithInitialConvo, BlacksmithSprite, "BLACKSMITH");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_24 = __this->___blackSmithInitialConvo_23;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_25 = __this->___BlacksmithSprite_16;
		GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880(__this, L_24, L_25, _stringLiteral0AD8FE68646D3B34B85891FB64D6E04E2F51F3C2, NULL);
		// break;
		return;
	}

IL_00f3:
	{
		// if (player.GetComponent<Character>().CheckItem("BLUE_KEY"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___player_5;
		NullCheck(L_26);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_27;
		L_27 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_26, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_27);
		bool L_28;
		L_28 = Character_CheckItem_m3E0AE1336791944F128D849C7DF425D60536E4B7(L_27, _stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C, NULL);
		if (!L_28)
		{
			goto IL_0122;
		}
	}
	{
		// StartDialogue(blueDoorAfter, BlueDoorSprite, "BLUE_GATE");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_29 = __this->___blueDoorAfter_26;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_30 = __this->___BlueDoorSprite_17;
		GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880(__this, L_29, L_30, _stringLiteral1ACF4B5AD43BEDD7DBBBC1DA72A722539EC8082B, NULL);
		return;
	}

IL_0122:
	{
		// StartDialogue(blueDoorInitial, BlueDoorSprite, "BLUE_GATE");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_31 = __this->___blueDoorInitial_25;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_32 = __this->___BlueDoorSprite_17;
		GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880(__this, L_31, L_32, _stringLiteral1ACF4B5AD43BEDD7DBBBC1DA72A722539EC8082B, NULL);
		// break;
		return;
	}

IL_013a:
	{
		// if (player.GetComponent<Character>().CheckItem("SWORD"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___player_5;
		NullCheck(L_33);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_34;
		L_34 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_33, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_34);
		bool L_35;
		L_35 = Character_CheckItem_m3E0AE1336791944F128D849C7DF425D60536E4B7(L_34, _stringLiteral7F97764CD30D068972E939605A30B69C6A5825DB, NULL);
		if (!L_35)
		{
			goto IL_0169;
		}
	}
	{
		// StartDialogue(mage2After, MageSprite, "MAGE_2");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_36 = __this->___mage2After_28;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_37 = __this->___MageSprite_15;
		GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880(__this, L_36, L_37, _stringLiteral5C3DBF6BF11FACB2B152784999E32FF5664D84CD, NULL);
		return;
	}

IL_0169:
	{
		// StartDialogue(mage2Initial, MageSprite, "MAGE_2");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_38 = __this->___mage2Initial_27;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_39 = __this->___MageSprite_15;
		GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880(__this, L_38, L_39, _stringLiteral5C3DBF6BF11FACB2B152784999E32FF5664D84CD, NULL);
		// break;
		return;
	}
}
// System.Void GameManager::ProcessDialogueLog(System.Collections.Generic.List`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ProcessDialogueLog_m777109850B1D077D5B202A612B76909AE1206879 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_DialogueLog, String_t* ___1_talkedTo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD8FE68646D3B34B85891FB64D6E04E2F51F3C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ACF4B5AD43BEDD7DBBBC1DA72A722539EC8082B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4357B0A62988D04D31D82A4191051976EB4F08DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C0664A0A38FD57804FC8FB1EFA743C560F5BFF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F97764CD30D068972E939605A30B69C6A5825DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FCF065371C0A77179B0066EE37B691B0DEF6AC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5DAA4CCAB969C478942849A4E50269CFF2090B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB82BE4803EEDE4F52B7447F6BB8CA17950CFBC3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB84841763BB9250DC755FBC2E78377B8C151A0E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF8DEEAD936F0511A4BFB8461EBCD45C5696EF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA20BA1CAFBFF139DA392FF1E0399B8197E02121);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBBC47E7F2139AAFD43B9CC29413BBECD9C270A8);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	{
		String_t* L_0 = ___1_talkedTo;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralA5DAA4CCAB969C478942849A4E50269CFF2090B3, NULL);
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_2 = ___1_talkedTo;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral0AD8FE68646D3B34B85891FB64D6E04E2F51F3C2, NULL);
		if (L_3)
		{
			goto IL_00c6;
		}
	}
	{
		String_t* L_4 = ___1_talkedTo;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral1ACF4B5AD43BEDD7DBBBC1DA72A722539EC8082B, NULL);
		if (L_5)
		{
			goto IL_0143;
		}
	}
	{
		return;
	}

IL_002e:
	{
		// foreach (string item in DialogueLog)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ___0_DialogueLog;
		NullCheck(L_6);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_7;
		L_7 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_6, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00aa_1;
			}

IL_0037_1:
			{
				// foreach (string item in DialogueLog)
				String_t* L_8;
				L_8 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				// if (item.Contains("Great! You got yourself a deal!!"))
				String_t* L_9 = L_8;
				NullCheck(L_9);
				bool L_10;
				L_10 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_9, _stringLiteralB84841763BB9250DC755FBC2E78377B8C151A0E7, NULL);
				G_B7_0 = L_9;
				if (!L_10)
				{
					G_B8_0 = L_9;
					goto IL_0063_1;
				}
			}
			{
				// mageTaskDelegated = true;
				__this->___mageTaskDelegated_19 = (bool)1;
				// currentObjective = "FIND PLANT";
				__this->___currentObjective_35 = _stringLiteral4357B0A62988D04D31D82A4191051976EB4F08DA;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObjective_35), (void*)_stringLiteral4357B0A62988D04D31D82A4191051976EB4F08DA);
				// UpdateUI();
				GameManager_UpdateUI_m592EA278752B47E9A40AE3B0DCC0BE8BAB0D472E(__this, NULL);
				G_B8_0 = G_B7_0;
			}

IL_0063_1:
			{
				// if (item.Contains("Here's your key! Have fun!!"))
				NullCheck(G_B8_0);
				bool L_11;
				L_11 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(G_B8_0, _stringLiteralB82BE4803EEDE4F52B7447F6BB8CA17950CFBC3B, NULL);
				if (!L_11)
				{
					goto IL_00aa_1;
				}
			}
			{
				// player.GetComponent<Character>().ConsumeItem("WEED");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___player_5;
				NullCheck(L_12);
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_13;
				L_13 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_12, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
				NullCheck(L_13);
				Character_ConsumeItem_m0C01B2C32979F75550B02FBF2991FC33F8659088(L_13, _stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B, NULL);
				// player.GetComponent<Character>().AddItem("BLUE_KEY");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___player_5;
				NullCheck(L_14);
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_15;
				L_15 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_14, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
				NullCheck(L_15);
				Character_AddItem_m1B290C337BFE8F6AD356D69B05CF59B6215BD212(L_15, _stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C, NULL);
				// currentObjective = "OPEN GATE";
				__this->___currentObjective_35 = _stringLiteral8FCF065371C0A77179B0066EE37B691B0DEF6AC6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObjective_35), (void*)_stringLiteral8FCF065371C0A77179B0066EE37B691B0DEF6AC6);
				// UpdateUI();
				GameManager_UpdateUI_m592EA278752B47E9A40AE3B0DCC0BE8BAB0D472E(__this, NULL);
			}

IL_00aa_1:
			{
				// foreach (string item in DialogueLog)
				bool L_16;
				L_16 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_01bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c6:
	{
		// foreach (string item in DialogueLog)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = ___0_DialogueLog;
		NullCheck(L_17);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_18;
		L_18 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_17, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0135:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0127_1;
			}

IL_00cf_1:
			{
				// foreach (string item in DialogueLog)
				String_t* L_19;
				L_19 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				// if (item.Contains("shall craft you"))
				NullCheck(L_19);
				bool L_20;
				L_20 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_19, _stringLiteral4C0664A0A38FD57804FC8FB1EFA743C560F5BFF2, NULL);
				if (!L_20)
				{
					goto IL_0127_1;
				}
			}
			{
				// player.GetComponent<Character>().ConsumeItem("KNIFE");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___player_5;
				NullCheck(L_21);
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_22;
				L_22 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_21, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
				NullCheck(L_22);
				Character_ConsumeItem_m0C01B2C32979F75550B02FBF2991FC33F8659088(L_22, _stringLiteralEA20BA1CAFBFF139DA392FF1E0399B8197E02121, NULL);
				// player.GetComponent<Character>().ConsumeItem("DIAMOND");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___player_5;
				NullCheck(L_23);
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_24;
				L_24 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_23, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
				NullCheck(L_24);
				Character_ConsumeItem_m0C01B2C32979F75550B02FBF2991FC33F8659088(L_24, _stringLiteralBEF8DEEAD936F0511A4BFB8461EBCD45C5696EF3, NULL);
				// player.GetComponent<Character>().AddItem("SWORD");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___player_5;
				NullCheck(L_25);
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_26;
				L_26 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_25, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
				NullCheck(L_26);
				Character_AddItem_m1B290C337BFE8F6AD356D69B05CF59B6215BD212(L_26, _stringLiteral7F97764CD30D068972E939605A30B69C6A5825DB, NULL);
				// UpdateUI();
				GameManager_UpdateUI_m592EA278752B47E9A40AE3B0DCC0BE8BAB0D472E(__this, NULL);
			}

IL_0127_1:
			{
				// foreach (string item in DialogueLog)
				bool L_27;
				L_27 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_00cf_1;
				}
			}
			{
				goto IL_01bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0143:
	{
		// foreach (string item in DialogueLog)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = ___0_DialogueLog;
		NullCheck(L_28);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_29;
		L_29 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_28, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01a6_1;
			}

IL_014c_1:
			{
				// foreach (string item in DialogueLog)
				String_t* L_30;
				L_30 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				// if (item.Contains("unlocked the gate"))
				NullCheck(L_30);
				bool L_31;
				L_31 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_30, _stringLiteralFBBC47E7F2139AAFD43B9CC29413BBECD9C270A8, NULL);
				if (!L_31)
				{
					goto IL_01a6_1;
				}
			}
			{
				// player.GetComponent<Character>().ConsumeItem("BLUE_KEY");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___player_5;
				NullCheck(L_32);
				Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_33;
				L_33 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_32, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
				NullCheck(L_33);
				Character_ConsumeItem_m0C01B2C32979F75550B02FBF2991FC33F8659088(L_33, _stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C, NULL);
				// blueDoor.GetComponent<SpriteRenderer>().sprite = blueDoorUnlockSprite;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___blueDoor_14;
				NullCheck(L_34);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35;
				L_35 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_34, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_36 = __this->___blueDoorUnlockSprite_13;
				NullCheck(L_35);
				SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_35, L_36, NULL);
				// blueDoor.GetComponent<Collider2D>().enabled = false;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___blueDoor_14;
				NullCheck(L_37);
				Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_38;
				L_38 = GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4(L_37, GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
				NullCheck(L_38);
				Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_38, (bool)0, NULL);
				// unlockSFX.Play();
				AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_39 = __this->___unlockSFX_34;
				NullCheck(L_39);
				AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_39, NULL);
			}

IL_01a6_1:
			{
				// foreach (string item in DialogueLog)
				bool L_40;
				L_40 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_014c_1;
				}
			}
			{
				goto IL_01bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01bf:
	{
		// }
		return;
	}
}
// System.Void GameManager::HandleDialogueEnd(System.Collections.Generic.List`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleDialogueEnd_mEED9F7F600C24C32B74789AD39C9ECEA146AE636 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_DialogueLog, String_t* ___1_talkedTo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41516F191D29670728E46A0A29A67AFB680F00B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ProcessDialogueLog(DialogueLog, talkedTo);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_DialogueLog;
		String_t* L_1 = ___1_talkedTo;
		GameManager_ProcessDialogueLog_m777109850B1D077D5B202A612B76909AE1206879(__this, L_0, L_1, NULL);
		// GameObject dialoguePanel = gameUI.transform.Find("DialoguePanel").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___gameUI_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral41516F191D29670728E46A0A29A67AFB680F00B4, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		// dialoguePanel.SetActive(false);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// currentAudioSource.volume = 0.20f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___currentAudioSource_32;
		NullCheck(L_6);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_6, (0.200000003f), NULL);
		// }
		return;
	}
}
// System.Void GameManager::StartDialogue(UnityEngine.TextAsset,UnityEngine.Sprite,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___0_JSONFile, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_CharSprite, String_t* ___2_CharName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_m83253A9F5650DB994C8A18B44B6AFD24D0BA8C4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41516F191D29670728E46A0A29A67AFB680F00B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentAudioSource == null) currentAudioSource = bgm1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___currentAudioSource_32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (currentAudioSource == null) currentAudioSource = bgm1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___bgm1_30;
		__this->___currentAudioSource_32 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentAudioSource_32), (void*)L_2);
	}

IL_001a:
	{
		// currentAudioSource.volume = 0.10f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___currentAudioSource_32;
		NullCheck(L_3);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_3, (0.100000001f), NULL);
		// GameObject dialoguePanel = gameUI.transform.Find("DialoguePanel").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___gameUI_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_5, _stringLiteral41516F191D29670728E46A0A29A67AFB680F00B4, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		// dialoguePanel.GetComponent<BasicInkExample>().HandleDialogue(JSONFile, CharSprite, CharName);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7;
		NullCheck(L_8);
		BasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00* L_9;
		L_9 = GameObject_GetComponent_TisBasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_m83253A9F5650DB994C8A18B44B6AFD24D0BA8C4D(L_8, GameObject_GetComponent_TisBasicInkExample_t3BA3A6E48836D975B044B5C802EEA40A30742D00_m83253A9F5650DB994C8A18B44B6AFD24D0BA8C4D_RuntimeMethod_var);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_10 = ___0_JSONFile;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = ___1_CharSprite;
		String_t* L_12 = ___2_CharName;
		NullCheck(L_9);
		BasicInkExample_HandleDialogue_m984E086269FB8D7F6F0133041F76D480429001D1(L_9, L_10, L_11, L_12, NULL);
		// Time.timeScale = 0.01f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.00999999978f), NULL);
		// dialoguePanel.SetActive(true);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::HandleAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleAttack_mAF20163C41AFB8DAEB11BCE59DFD2FA21940A7BF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.GetComponent<Player>().HandleAttack();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_5;
		NullCheck(L_0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1;
		L_1 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_0, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		NullCheck(L_1);
		Player_HandleAttack_m874679E26E5C06808181A8EDE8A83D4528017FD8(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::JumpToMainScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_JumpToMainScreen_m811B2D897FD0FE7830278E5D55F75CB7FCA4542B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A272869252F7DC58D4AFA3D6D49195788ED632D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainScreen");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral7A272869252F7DC58D4AFA3D6D49195788ED632D, NULL);
		// }
		return;
	}
}
// System.Void GameManager::HandlePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandlePause_m1462D7F4389550330AAD3637D2034FC52B44384E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PauseScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PauseScreen_33;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// if (currentAudioSource == null) currentAudioSource = bgm1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___currentAudioSource_32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if (currentAudioSource == null) currentAudioSource = bgm1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___bgm1_30;
		__this->___currentAudioSource_32 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentAudioSource_32), (void*)L_3);
	}

IL_0026:
	{
		// currentAudioSource.pitch = 0.50f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___currentAudioSource_32;
		NullCheck(L_4);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_4, (0.5f), NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return;
	}
}
// System.Void GameManager::HandleUnpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleUnpause_mFF56683E03F1FDF14191002EFF739FD18572F102 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PauseScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PauseScreen_33;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (currentAudioSource == null) currentAudioSource = bgm1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___currentAudioSource_32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if (currentAudioSource == null) currentAudioSource = bgm1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___bgm1_30;
		__this->___currentAudioSource_32 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentAudioSource_32), (void*)L_3);
	}

IL_0026:
	{
		// currentAudioSource.pitch = 1f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___currentAudioSource_32;
		NullCheck(L_4);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_4, (1.0f), NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// UpdateUI();
		GameManager_UpdateUI_m592EA278752B47E9A40AE3B0DCC0BE8BAB0D472E(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::HandleBossStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleBossStart_mCF03FEDE388406B3AF3AA6E8FC353AB2E8211BDD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70BCEF11BA07D4A061BF7D50AD8A6150431D493F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bgm1.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___bgm1_30;
		NullCheck(L_0);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// currentAudioSource = bgm2;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___bgm2_31;
		__this->___currentAudioSource_32 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentAudioSource_32), (void*)L_1);
		// bgm2.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___bgm2_31;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// StartDialogue(bossTalk, BossSprite, "BOSS");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_3 = __this->___bossTalk_29;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___BossSprite_18;
		GameManager_StartDialogue_mE56F761822D931845B3CFEEE5E7CBD8495B4B880(__this, L_3, L_4, _stringLiteral70BCEF11BA07D4A061BF7D50AD8A6150431D493F, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50A8290750B9DF9F93C5822390EB77CC3C604E56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string currentObjective = "TALK";
		__this->___currentObjective_35 = _stringLiteral50A8290750B9DF9F93C5822390EB77CC3C604E56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObjective_35), (void*)_stringLiteral50A8290750B9DF9F93C5822390EB77CC3C604E56);
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
// System.Void GhostMob::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostMob_Start_m96F55EA0D575D2B0675388C480E5A3ABBECB9215 (GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// player = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___player_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_12), (void*)L_1);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_14), (void*)L_2);
		// float randNum = Random.Range(0f, 2f);
		float L_3;
		L_3 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (2.0f), NULL);
		// float randNum2 = Random.Range(0f, 2f);
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (2.0f), NULL);
		V_0 = L_4;
		// if (randNum >= 1.0f) gameObject.GetComponent<Character>().AddItem("WEED");
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		// if (randNum >= 1.0f) gameObject.GetComponent<Character>().AddItem("WEED");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_6;
		L_6 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_5, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_6);
		Character_AddItem_m1B290C337BFE8F6AD356D69B05CF59B6215BD212(L_6, _stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B, NULL);
	}

IL_005c:
	{
		// if (randNum2 >= 1.0f) gameObject.GetComponent<Character>().AddItem("WEED");
		float L_7 = V_0;
		if ((!(((float)L_7) >= ((float)(1.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		// if (randNum2 >= 1.0f) gameObject.GetComponent<Character>().AddItem("WEED");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_9;
		L_9 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_8, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_9);
		Character_AddItem_m1B290C337BFE8F6AD356D69B05CF59B6215BD212(L_9, _stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B, NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void GhostMob::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostMob_Update_m1EFE40FF68F48AB771A8E4D5B609FC879574F28C (GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (player == null || spriteRenderer == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___spriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// if (player == null || spriteRenderer == null) return;
		return;
	}

IL_001d:
	{
		// float distanceToPlayer = Vector3.Distance(transform.position, player.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___player_12;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8;
		L_8 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_5, L_7, NULL);
		V_0 = L_8;
		// if (distanceToPlayer > detectionRange) return;
		float L_9 = V_0;
		float L_10 = __this->___detectionRange_8;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		// if (distanceToPlayer > detectionRange) return;
		return;
	}

IL_0043:
	{
		// if (distanceToPlayer < trackingDistance && distanceToPlayer > stopDistance)
		float L_11 = V_0;
		float L_12 = __this->___trackingDistance_7;
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_00f8;
		}
	}
	{
		float L_13 = V_0;
		float L_14 = __this->___stopDistance_9;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_00f8;
		}
	}
	{
		// if (!alreadyPlaying)
		bool L_15 = __this->___alreadyPlaying_15;
		if (L_15)
		{
			goto IL_0075;
		}
	}
	{
		// GhostSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = __this->___GhostSound_13;
		NullCheck(L_16);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_16, NULL);
		// alreadyPlaying = true;
		__this->___alreadyPlaying_15 = (bool)1;
	}

IL_0075:
	{
		// Vector3 direction = (player.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___player_12;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_18, L_20, NULL);
		V_2 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_1 = L_22;
		// transform.position += direction * moveSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = L_23;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		float L_27 = __this->___moveSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, L_27, NULL);
		float L_29;
		L_29 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_30, NULL);
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_31, NULL);
		// if (direction.x > 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_1;
		float L_33 = L_32.___x_2;
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_00df;
		}
	}
	{
		// spriteRenderer.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_34 = __this->___spriteRenderer_14;
		NullCheck(L_34);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_34, (bool)0, NULL);
		return;
	}

IL_00df:
	{
		// else if (direction.x < 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = L_35.___x_2;
		if ((!(((float)L_36) < ((float)(0.0f)))))
		{
			goto IL_00f8;
		}
	}
	{
		// spriteRenderer.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37 = __this->___spriteRenderer_14;
		NullCheck(L_37);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_37, (bool)1, NULL);
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void GhostMob::HandleStun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostMob_HandleStun_m23671A5CF5BCF264E713F6AB3124B537B6676859 (GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GhostMob::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostMob_OnCollisionEnter2D_mD1A249E0F12F330B3F7EDC4388B03E97FA6AFC72 (GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// collision.gameObject.GetComponent<Character>().ChangeHealth(-damage);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___0_collision;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_4, NULL);
		NullCheck(L_5);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_6;
		L_6 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_5, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_7 = __this->___damage_11;
		NullCheck(L_6);
		Character_ChangeHealth_m40924BC0F6DD4A6927CB090FCBA90F58621EE562(L_6, ((-L_7)), NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void GhostMob::OnCollisionStay2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostMob_OnCollisionStay2D_mD94A72A9E5EC5D1838C5294054343B98C95B9F97 (GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// collision.gameObject.GetComponent<Character>().ChangeHealth(-damage);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___0_collision;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_4, NULL);
		NullCheck(L_5);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_6;
		L_6 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_5, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_7 = __this->___damage_11;
		NullCheck(L_6);
		Character_ChangeHealth_m40924BC0F6DD4A6927CB090FCBA90F58621EE562(L_6, ((-L_7)), NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void GhostMob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostMob__ctor_m1022E81C89CA2553B96C11B0A66B76EC54F6B4AB (GhostMob_t4AC47D650B4308483059890ED1EAA949C9DE4CE2* __this, const RuntimeMethod* method) 
{
	{
		// public float normalMoveSpeed = 5f;
		__this->___normalMoveSpeed_4 = (5.0f);
		// public float stunMoveSpeed = 1.5f;
		__this->___stunMoveSpeed_5 = (1.5f);
		// public float moveSpeed = 5f;
		__this->___moveSpeed_6 = (5.0f);
		// public float trackingDistance = 10f;
		__this->___trackingDistance_7 = (10.0f);
		// public float detectionRange = 20f;
		__this->___detectionRange_8 = (20.0f);
		// public float stopDistance = 2f;
		__this->___stopDistance_9 = (2.0f);
		// public float stunDuration = 1.5f;
		__this->___stunDuration_10 = (1.5f);
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
// System.Void Item::ChangeItemId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_ChangeItemId_m0F02C7B63B8F1B4FE19963AECA93B5EF0DD21FCF (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, String_t* ___0_newId, const RuntimeMethod* method) 
{
	{
		// itemId = newId;
		String_t* L_0 = ___0_newId;
		__this->___itemId_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemId_4), (void*)L_0);
		// SetSprite(itemId);
		String_t* L_1 = __this->___itemId_4;
		Item_SetSprite_m77D57D00817691FBBAD19B4858953F5FAA0980B5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Item::SetSprite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_SetSprite_m77D57D00817691FBBAD19B4858953F5FAA0980B5 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, String_t* ___0_itemId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5855E0295E3480BADAB1C4F310532412F4E7F529);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F97764CD30D068972E939605A30B69C6A5825DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF8DEEAD936F0511A4BFB8461EBCD45C5696EF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA20BA1CAFBFF139DA392FF1E0399B8197E02121);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			String_t* L_0 = ___0_itemId;
			bool L_1;
			L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B, NULL);
			if (L_1)
			{
				goto IL_0043_1;
			}
		}
		{
			String_t* L_2 = ___0_itemId;
			bool L_3;
			L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C, NULL);
			if (L_3)
			{
				goto IL_0056_1;
			}
		}
		{
			String_t* L_4 = ___0_itemId;
			bool L_5;
			L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralEA20BA1CAFBFF139DA392FF1E0399B8197E02121, NULL);
			if (L_5)
			{
				goto IL_0069_1;
			}
		}
		{
			String_t* L_6 = ___0_itemId;
			bool L_7;
			L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralBEF8DEEAD936F0511A4BFB8461EBCD45C5696EF3, NULL);
			if (L_7)
			{
				goto IL_007c_1;
			}
		}
		{
			String_t* L_8 = ___0_itemId;
			bool L_9;
			L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral7F97764CD30D068972E939605A30B69C6A5825DB, NULL);
			if (L_9)
			{
				goto IL_008f_1;
			}
		}
		{
			goto IL_00a2_1;
		}

IL_0043_1:
		{
			// _sr.sprite = greenPlantSprite;
			SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->____sr_11;
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = __this->___greenPlantSprite_6;
			NullCheck(L_10);
			SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_10, L_11, NULL);
			// break;
			goto IL_00ac_1;
		}

IL_0056_1:
		{
			// _sr.sprite = blueKeySprite;
			SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->____sr_11;
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = __this->___blueKeySprite_7;
			NullCheck(L_12);
			SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_12, L_13, NULL);
			// break;
			goto IL_00ac_1;
		}

IL_0069_1:
		{
			// _sr.sprite = knifeSprite;
			SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14 = __this->____sr_11;
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15 = __this->___knifeSprite_8;
			NullCheck(L_14);
			SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_14, L_15, NULL);
			// break;
			goto IL_00ac_1;
		}

IL_007c_1:
		{
			// _sr.sprite = diamondSprite;
			SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16 = __this->____sr_11;
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = __this->___diamondSprite_9;
			NullCheck(L_16);
			SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_16, L_17, NULL);
			// break;
			goto IL_00ac_1;
		}

IL_008f_1:
		{
			// _sr.sprite = swordSprite;
			SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18 = __this->____sr_11;
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_19 = __this->___swordSprite_10;
			NullCheck(L_18);
			SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_18, L_19, NULL);
			// break;
			goto IL_00ac_1;
		}

IL_00a2_1:
		{
			// Debug.Log("SetSprite: id not found.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5855E0295E3480BADAB1C4F310532412F4E7F529, NULL);
		}

IL_00ac_1:
		{
			// } catch { }
			goto IL_00b1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ae;
		}
		throw e;
	}

CATCH_00ae:
	{// begin catch(System.Object)
		// } catch { }
		// } catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	}// end catch (depth: 1)

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void Item::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Start_mAF304BC26FB5ED4C69F6534266EE4F082967E4D8 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _sr = gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->____sr_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sr_11), (void*)L_1);
		// SetSprite(itemId);
		String_t* L_2 = __this->___itemId_4;
		Item_SetSprite_m77D57D00817691FBBAD19B4858953F5FAA0980B5(__this, L_2, NULL);
		// StartCoroutine(WaitForCollidable());
		RuntimeObject* L_3;
		L_3 = Item_WaitForCollidable_m802D2123B6A684E887926F4971AB44F3C951EC66(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Item::WaitForCollidable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Item_WaitForCollidable_m802D2123B6A684E887926F4971AB44F3C951EC66 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F* L_0 = (U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F*)il2cpp_codegen_object_new(U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForCollidableU3Ed__11__ctor_m89B6E630BCDFBEE7DA6B5F3154CA7CAFF0445ED5(L_0, 0, NULL);
		U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m741D59B05082743C60D2F1149112B571E89CAFAF (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
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
// System.Void Item/<WaitForCollidable>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCollidableU3Ed__11__ctor_m89B6E630BCDFBEE7DA6B5F3154CA7CAFF0445ED5 (U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Item/<WaitForCollidable>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCollidableU3Ed__11_System_IDisposable_Dispose_mBB7191BD36774ADB2DB4BE29F75DDBA6039B1FEA (U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Item/<WaitForCollidable>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForCollidableU3Ed__11_MoveNext_mFD466C86084C7DC52C2E003C6B8E57C9CAB44713 (U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_1 = __this->___U3CU3E4__this_2;
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
		// yield return new WaitForSeconds(collidableAfter);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___collidableAfter_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.GetComponent<BoxCollider2D>().enabled = true;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_9;
		L_9 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_8, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)1, NULL);
		// gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_10 = V_1;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12;
		L_12 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_11, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		NullCheck(L_12);
		Rigidbody2D_set_bodyType_mE2FAC2D78B06B445BD2AD58F87AC5B1865B23248(L_12, 2, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Item/<WaitForCollidable>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForCollidableU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFE7E6BA2A4539C6AF25CBF54A9C5F39DD22E08E7 (U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Item/<WaitForCollidable>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCollidableU3Ed__11_System_Collections_IEnumerator_Reset_m92209B7A8AB5B6C65C7023CAFBEE9C884FDB8F06 (U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForCollidableU3Ed__11_System_Collections_IEnumerator_Reset_m92209B7A8AB5B6C65C7023CAFBEE9C884FDB8F06_RuntimeMethod_var)));
	}
}
// System.Object Item/<WaitForCollidable>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForCollidableU3Ed__11_System_Collections_IEnumerator_get_Current_mDCF0FDE616231FA7E54228C0FD40CE3F44BA5999 (U3CWaitForCollidableU3Ed__11_t9DE62C153CFAE75E5DDFE9A0B8CE6373FF4F920F* __this, const RuntimeMethod* method) 
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
// System.Void MageScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MageScript_Awake_m2DB17D714A8B7F9A78CA5100B4252C0A3EF6BD84 (MageScript_t5602D358F05952C008EB60F0890D269FAF6B934B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<Character>().AddItem("BLUE_KEY");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_1;
		L_1 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_0, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_1);
		Character_AddItem_m1B290C337BFE8F6AD356D69B05CF59B6215BD212(L_1, _stringLiteralB25C3DF5CB00E94A1555260BC98A731C83C67C2C, NULL);
		// gameObject.GetComponent<Character>().AddItem("WEED");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_3;
		L_3 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_2, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_3);
		Character_AddItem_m1B290C337BFE8F6AD356D69B05CF59B6215BD212(L_3, _stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B, NULL);
		// gameObject.GetComponent<Character>().AddItem("WEED");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_5;
		L_5 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_4, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_5);
		Character_AddItem_m1B290C337BFE8F6AD356D69B05CF59B6215BD212(L_5, _stringLiteral91E83B3C710840E76E1B779F1031EE2CAC280C8B, NULL);
		// }
		return;
	}
}
// System.Void MageScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MageScript__ctor_m3485875F7DAB434487597C82569C0092838BDEBE (MageScript_t5602D358F05952C008EB60F0890D269FAF6B934B* __this, const RuntimeMethod* method) 
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
// System.Void NPCBehavior::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCBehavior_FixedUpdate_m9487F3234880625300040F96E34B8802E9E40FA2 (NPCBehavior_t48D7D90C13962BCB12461B6B78226076B36F4183* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NPCBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCBehavior__ctor_m27CD42D7432B4F5D3BFCE5B1BA4F17311FBBF6D4 (NPCBehavior_t48D7D90C13962BCB12461B6B78226076B36F4183* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04194CE40DE9941EB4C568634F82616A6D46F9BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string temperament = "FRIENDLY";
		__this->___temperament_4 = _stringLiteral04194CE40DE9941EB4C568634F82616A6D46F9BE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___temperament_4), (void*)_stringLiteral04194CE40DE9941EB4C568634F82616A6D46F9BE);
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
// System.Void NPCOverlapCircle::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCOverlapCircle_OnTriggerEnter2D_m08D8561D0E6D26A5AF2AA3E9E8E391970DF92353 (NPCOverlapCircle_tEC4CC1D7CD801661293C17D296FA5D077F898B23* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	{
		// gameManager.nearestNPCId = NPCid;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->___gameManager_4;
		String_t* L_1 = __this->___NPCid_6;
		NullCheck(L_0);
		L_0->___nearestNPCId_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___nearestNPCId_7), (void*)L_1);
		// gameManager.EnableTalkButton();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = __this->___gameManager_4;
		NullCheck(L_2);
		GameManager_EnableTalkButton_mBA7FB0C72A31344C38B0B23503910722EC503EAC(L_2, NULL);
		// isInRange = true;
		__this->___isInRange_7 = (bool)1;
		// }
		return;
	}
}
// System.Void NPCOverlapCircle::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCOverlapCircle_OnTriggerExit2D_mA5EE98F9B0A687759D32EBD34358889FD173AD8E (NPCOverlapCircle_tEC4CC1D7CD801661293C17D296FA5D077F898B23* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	{
		// isInRange = false;
		__this->___isInRange_7 = (bool)0;
		// gameManager.DisableTalkButton();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->___gameManager_4;
		NullCheck(L_0);
		GameManager_DisableTalkButton_mDD64A16C3218D1A0A4B9444681C94F18906E9459(L_0, NULL);
		// }
		return;
	}
}
// System.Void NPCOverlapCircle::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCOverlapCircle_OnDestroy_m107BA2FAC20E812FD8599C551484AB694C18326E (NPCOverlapCircle_tEC4CC1D7CD801661293C17D296FA5D077F898B23* __this, const RuntimeMethod* method) 
{
	{
		// if (isInRange)
		bool L_0 = __this->___isInRange_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// gameManager.DisableTalkButton();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___gameManager_4;
		NullCheck(L_1);
		GameManager_DisableTalkButton_mDD64A16C3218D1A0A4B9444681C94F18906E9459(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void NPCOverlapCircle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCOverlapCircle__ctor_m8819CC8C4A28A35846AD4B64FB1A694C1AA9BE3D (NPCOverlapCircle_tEC4CC1D7CD801661293C17D296FA5D077F898B23* __this, const RuntimeMethod* method) 
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody = gameObject.GetComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_0, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		__this->____rigidbody_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_5), (void*)L_1);
		// _character = gameObject.GetComponent<Character>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_3;
		L_3 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_2, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		__this->____character_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____character_6), (void*)L_3);
		// _animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____animator_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_14), (void*)L_4);
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_mEDDB0539FCD5145298CB87D4592DFFF98503AF9B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B9E5D894A3B7F7F3D00DCF14E96AA95D4D232FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF19D9E4D225560E6B4A0D98F284B4A27FDB2CC9D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float xJoystickSpeed = _joystick.Horizontal * speed;
		FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* L_0 = __this->____joystick_12;
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_0, NULL);
		float L_2 = __this->___speed_4;
		V_0 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// float yJoystickSpeed = _joystick.Vertical * speed;
		FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* L_3 = __this->____joystick_12;
		NullCheck(L_3);
		float L_4;
		L_4 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_3, NULL);
		float L_5 = __this->___speed_4;
		V_1 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// if (xJoystickSpeed >= 1)
		float L_6 = V_0;
		if ((!(((float)L_6) >= ((float)(1.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// HSpeed = speed;
		float L_7 = __this->___speed_4;
		__this->___HSpeed_15 = L_7;
		// VSpeed = 0;
		__this->___VSpeed_16 = (0.0f);
		goto IL_0074;
	}

IL_0047:
	{
		// else if (xJoystickSpeed <= -1)
		float L_8 = V_0;
		if ((!(((float)L_8) <= ((float)(-1.0f)))))
		{
			goto IL_0069;
		}
	}
	{
		// HSpeed = -speed;
		float L_9 = __this->___speed_4;
		__this->___HSpeed_15 = ((-L_9));
		// VSpeed = 0;
		__this->___VSpeed_16 = (0.0f);
		goto IL_0074;
	}

IL_0069:
	{
		// HSpeed = 0;
		__this->___HSpeed_15 = (0.0f);
	}

IL_0074:
	{
		// if (yJoystickSpeed >= 1)
		float L_10 = V_1;
		if ((!(((float)L_10) >= ((float)(1.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// VSpeed = speed;
		float L_11 = __this->___speed_4;
		__this->___VSpeed_16 = L_11;
		// HSpeed = 0;
		__this->___HSpeed_15 = (0.0f);
		goto IL_00c2;
	}

IL_0095:
	{
		// else if (yJoystickSpeed <= -1)
		float L_12 = V_1;
		if ((!(((float)L_12) <= ((float)(-1.0f)))))
		{
			goto IL_00b7;
		}
	}
	{
		// VSpeed = -speed;
		float L_13 = __this->___speed_4;
		__this->___VSpeed_16 = ((-L_13));
		// HSpeed = 0;
		__this->___HSpeed_15 = (0.0f);
		goto IL_00c2;
	}

IL_00b7:
	{
		// VSpeed = 0;
		__this->___VSpeed_16 = (0.0f);
	}

IL_00c2:
	{
		// _rigidbody.velocity = new Vector2(_joystick.Horizontal * speed, _rigidbody.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_14 = __this->____rigidbody_5;
		FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* L_15 = __this->____joystick_12;
		NullCheck(L_15);
		float L_16;
		L_16 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_15, NULL);
		float L_17 = __this->___speed_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_18 = __this->____rigidbody_5;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_18, NULL);
		float L_20 = L_19.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), ((float)il2cpp_codegen_multiply(L_16, L_17)), L_20, /*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_14, L_21, NULL);
		// _rigidbody.velocity = new Vector2(_rigidbody.velocity.x, _joystick.Vertical * speed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_22 = __this->____rigidbody_5;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_23 = __this->____rigidbody_5;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_23, NULL);
		float L_25 = L_24.___x_0;
		FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* L_26 = __this->____joystick_12;
		NullCheck(L_26);
		float L_27;
		L_27 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_26, NULL);
		float L_28 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), L_25, ((float)il2cpp_codegen_multiply(L_27, L_28)), /*hidden argument*/NULL);
		NullCheck(L_22);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_22, L_29, NULL);
		// float xScale = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_30, NULL);
		float L_32 = L_31.___x_2;
		V_2 = L_32;
		// if ((HSpeed > 0 && xScale > 0) || (HSpeed < 0 && xScale < 0))
		float L_33 = __this->___HSpeed_15;
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_014c;
		}
	}
	{
		float L_34 = V_2;
		if ((((float)L_34) > ((float)(0.0f))))
		{
			goto IL_0161;
		}
	}

IL_014c:
	{
		float L_35 = __this->___HSpeed_15;
		if ((!(((float)L_35) < ((float)(0.0f)))))
		{
			goto IL_0190;
		}
	}
	{
		float L_36 = V_2;
		if ((!(((float)L_36) < ((float)(0.0f)))))
		{
			goto IL_0190;
		}
	}

IL_0161:
	{
		// transform.localScale *= new Vector2(-1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = L_37;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_38, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_39, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_42, NULL);
		NullCheck(L_38);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_38, L_43, NULL);
	}

IL_0190:
	{
		// _animator.SetFloat("VSpeed", VSpeed);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_44 = __this->____animator_14;
		float L_45 = __this->___VSpeed_16;
		NullCheck(L_44);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_44, _stringLiteralF19D9E4D225560E6B4A0D98F284B4A27FDB2CC9D, L_45, NULL);
		// _animator.SetFloat("HSpeed", Mathf.Abs(HSpeed));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_46 = __this->____animator_14;
		float L_47 = __this->___HSpeed_15;
		float L_48;
		L_48 = fabsf(L_47);
		NullCheck(L_46);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_46, _stringLiteral0B9E5D894A3B7F7F3D00DCF14E96AA95D4D232FD, L_48, NULL);
		// if (HSpeed == 0 && VSpeed == 0) return;
		float L_49 = __this->___HSpeed_15;
		if ((!(((float)L_49) == ((float)(0.0f)))))
		{
			goto IL_01dc;
		}
	}
	{
		float L_50 = __this->___VSpeed_16;
		if ((!(((float)L_50) == ((float)(0.0f)))))
		{
			goto IL_01dc;
		}
	}
	{
		// if (HSpeed == 0 && VSpeed == 0) return;
		return;
	}

IL_01dc:
	{
		// if (Mathf.Abs(HSpeed) > Mathf.Abs(VSpeed))
		float L_51 = __this->___HSpeed_15;
		float L_52;
		L_52 = fabsf(L_51);
		float L_53 = __this->___VSpeed_16;
		float L_54;
		L_54 = fabsf(L_53);
		if ((!(((float)L_52) > ((float)L_54))))
		{
			goto IL_0219;
		}
	}
	{
		// if (HSpeed >= 0)
		float L_55 = __this->___HSpeed_15;
		if ((!(((float)L_55) >= ((float)(0.0f)))))
		{
			goto IL_020d;
		}
	}
	{
		// lastFacing = "R";
		__this->___lastFacing_13 = _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastFacing_13), (void*)_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		return;
	}

IL_020d:
	{
		// lastFacing = "L";
		__this->___lastFacing_13 = _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastFacing_13), (void*)_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		return;
	}

IL_0219:
	{
		// if (VSpeed >= 0)
		float L_56 = __this->___VSpeed_16;
		if ((!(((float)L_56) >= ((float)(0.0f)))))
		{
			goto IL_0232;
		}
	}
	{
		// lastFacing = "U";
		__this->___lastFacing_13 = _stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastFacing_13), (void*)_stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A);
		return;
	}

IL_0232:
	{
		// lastFacing = "D";
		__this->___lastFacing_13 = _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastFacing_13), (void*)_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		// }
		return;
	}
}
// UnityEngine.Vector3 Player::letterToVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Player_letterToVector_m3F6CCCA7C3E91C585E5520D68815B680AD225ADB (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lastFacing == "U")
		String_t* L_0 = __this->___lastFacing_13;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// return new Vector3(0, 0.15f, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.150000006f), (0.0f), /*hidden argument*/NULL);
		return L_2;
	}

IL_0027:
	{
		// } else if (lastFacing == "D")
		String_t* L_3 = __this->___lastFacing_13;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// return new Vector3(0, -0.15f, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), (-0.150000006f), (0.0f), /*hidden argument*/NULL);
		return L_5;
	}

IL_004e:
	{
		// } else if (lastFacing == "R")
		String_t* L_6 = __this->___lastFacing_13;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, NULL);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		// return new Vector3(0.15f, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.150000006f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_8;
	}

IL_0075:
	{
		// return new Vector3(-0.15f, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (-0.150000006f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Quaternion Player::letterToAngle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Player_letterToAngle_mF979FE982D5D8684A3A1C27CB4600B894AF73601 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lastFacing == "U")
		String_t* L_0 = __this->___lastFacing_13;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// return Quaternion.Euler(0, 0, 270);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (270.0f), NULL);
		return L_2;
	}

IL_0027:
	{
		// else if (lastFacing == "D")
		String_t* L_3 = __this->___lastFacing_13;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// return Quaternion.Euler(0, 0, 90);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (90.0f), NULL);
		return L_5;
	}

IL_004e:
	{
		// else if (lastFacing == "R")
		String_t* L_6 = __this->___lastFacing_13;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, NULL);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		// return Quaternion.Euler(0, 0, 180);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (180.0f), NULL);
		return L_8;
	}

IL_0075:
	{
		// return Quaternion.Euler(0, 0, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		return L_9;
	}
}
// System.Void Player::HandleAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_HandleAttack_m874679E26E5C06808181A8EDE8A83D4528017FD8 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (attackDamage <= 0f) return;
		int32_t L_0 = __this->___attackDamage_9;
		if ((!(((float)((float)L_0)) <= ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		// if (attackDamage <= 0f) return;
		return;
	}

IL_000f:
	{
		// if (attackDamage < 50)
		int32_t L_1 = __this->___attackDamage_9;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)50))))
		{
			goto IL_0067;
		}
	}
	{
		// GameObject attackObj = Instantiate(attackPrefab, gameObject.transform.position + letterToVector(lastFacing), letterToAngle(lastFacing));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___attackPrefab_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		String_t* L_6 = __this->___lastFacing_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Player_letterToVector_m3F6CCCA7C3E91C585E5520D68815B680AD225ADB(__this, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_7, NULL);
		String_t* L_9 = __this->___lastFacing_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Player_letterToAngle_mF979FE982D5D8684A3A1C27CB4600B894AF73601(__this, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_8, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// attackObj.transform.parent = gameObject.transform;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_12);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_12, L_14, NULL);
		return;
	}

IL_0067:
	{
		// GameObject attackObj = Instantiate(strongAttackPrefab, gameObject.transform.position + letterToVector(lastFacing), letterToAngle(lastFacing));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___strongAttackPrefab_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		String_t* L_19 = __this->___lastFacing_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Player_letterToVector_m3F6CCCA7C3E91C585E5520D68815B680AD225ADB(__this, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_20, NULL);
		String_t* L_22 = __this->___lastFacing_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Player_letterToAngle_mF979FE982D5D8684A3A1C27CB4600B894AF73601(__this, L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_15, L_21, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// attackObj.transform.parent = gameObject.transform;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_25);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_25, L_27, NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float attackCoolDown = 60f;
		__this->___attackCoolDown_8 = (60.0f);
		// private string lastFacing = "U";
		__this->___lastFacing_13 = _stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastFacing_13), (void*)_stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A);
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
// System.Void Shangyu_boss::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shangyu_boss_Start_mBBFCEA91B15EEACDA2170F28A3D2E7C49EC29020 (Shangyu_boss_t9B5AE1FD56ED520E8071C66923174EBB57827556* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___player_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_11), (void*)L_1);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_13), (void*)L_2);
		// }
		return;
	}
}
// System.Void Shangyu_boss::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shangyu_boss_Update_mBFA704ECA38F401D5876760550914A110FC13BEB (Shangyu_boss_t9B5AE1FD56ED520E8071C66923174EBB57827556* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (player == null || spriteRenderer == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___spriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// if (player == null || spriteRenderer == null) return;
		return;
	}

IL_001d:
	{
		// float distanceToPlayer = Vector3.Distance(transform.position, player.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___player_11;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8;
		L_8 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_5, L_7, NULL);
		V_0 = L_8;
		// if (distanceToPlayer > detectionRange) return;
		float L_9 = V_0;
		float L_10 = __this->___detectionRange_9;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		// if (distanceToPlayer > detectionRange) return;
		return;
	}

IL_0043:
	{
		// if (distanceToPlayer < trackingDistance && distanceToPlayer > stopDistance)
		float L_11 = V_0;
		float L_12 = __this->___trackingDistance_8;
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_00df;
		}
	}
	{
		float L_13 = V_0;
		float L_14 = __this->___stopDistance_10;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_00df;
		}
	}
	{
		// Vector3 direction = (player.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___player_11;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_18, NULL);
		V_2 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_1 = L_20;
		// transform.position += direction * moveSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		float L_25 = __this->___moveSpeed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_25, NULL);
		float L_27;
		L_27 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_28, NULL);
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_29, NULL);
		// if (direction.x > 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_1;
		float L_31 = L_30.___x_2;
		if ((!(((float)L_31) > ((float)(0.0f)))))
		{
			goto IL_00c6;
		}
	}
	{
		// spriteRenderer.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_32 = __this->___spriteRenderer_13;
		NullCheck(L_32);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_32, (bool)0, NULL);
		goto IL_00df;
	}

IL_00c6:
	{
		// else if (direction.x < 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_1;
		float L_34 = L_33.___x_2;
		if ((!(((float)L_34) < ((float)(0.0f)))))
		{
			goto IL_00df;
		}
	}
	{
		// spriteRenderer.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = __this->___spriteRenderer_13;
		NullCheck(L_35);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_35, (bool)1, NULL);
	}

IL_00df:
	{
		// if (Time.time > nextFireTime)
		float L_36;
		L_36 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_37 = __this->___nextFireTime_12;
		if ((!(((float)L_36) > ((float)L_37))))
		{
			goto IL_010a;
		}
	}
	{
		// FireBullet();
		Shangyu_boss_FireBullet_mB5791F1D669C0E55A4A94ACB8BE4EA1498DE6F97(__this, NULL);
		// nextFireTime = Time.time + 1f / fireRate;
		float L_38;
		L_38 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_39 = __this->___fireRate_6;
		__this->___nextFireTime_12 = ((float)il2cpp_codegen_add(L_38, ((float)((1.0f)/L_39))));
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void Shangyu_boss::FireBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shangyu_boss_FireBullet_mB5791F1D669C0E55A4A94ACB8BE4EA1498DE6F97 (Shangyu_boss_t9B5AE1FD56ED520E8071C66923174EBB57827556* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (bulletPrefab == null || firePoint == null) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___bulletPrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___firePoint_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// if (bulletPrefab == null || firePoint == null) return;
		return;
	}

IL_001d:
	{
		// GameObject bullet = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___bulletPrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___firePoint_5;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___firePoint_5;
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_6, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Rigidbody2D bulletRb = bullet.GetComponent<Rigidbody2D>();
		NullCheck(L_9);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_10;
		L_10 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_9, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		V_0 = L_10;
		// if (bulletRb != null)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_11 = V_0;
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		// Vector2 direction = (player.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___player_11;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_14, L_16, NULL);
		V_2 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_18, NULL);
		V_1 = L_19;
		// bulletRb.velocity = direction * fireRate;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_20 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_1;
		float L_22 = __this->___fireRate_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_21, L_22, NULL);
		NullCheck(L_20);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_20, L_23, NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void Shangyu_boss::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shangyu_boss__ctor_m0668E6528B49EB264647DDAF4F0956C8BE96D36D (Shangyu_boss_t9B5AE1FD56ED520E8071C66923174EBB57827556* __this, const RuntimeMethod* method) 
{
	{
		// public float fireRate = 1f;
		__this->___fireRate_6 = (1.0f);
		// public float moveSpeed = 5f;
		__this->___moveSpeed_7 = (5.0f);
		// public float trackingDistance = 10f;
		__this->___trackingDistance_8 = (10.0f);
		// public float detectionRange = 20f;
		__this->___detectionRange_9 = (20.0f);
		// public float stopDistance = 2f;
		__this->___stopDistance_10 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Choice_get_text_m5D7AAB6481E4F43A278548E3F7C5D75515FC1D30_inline (Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* __this, const RuntimeMethod* method) 
{
	{
		// public string text { get; set; }
		String_t* L_0 = __this->___U3CtextU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Choice_get_index_mFAE18B25A1655AAB28B402D146F80F9A53B64FA9_inline (Choice_tC013DCFBB0184C2EC78C3BC4E7941D3C18418D65* __this, const RuntimeMethod* method) 
{
	{
		// public int index { get; set; }
		int32_t L_0 = __this->___U3CindexU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___0_value;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___0_value;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___0_value;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
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
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_from;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_to;
		float L_7;
		L_7 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_GetHealth_mE8BF820006CEA5530185AB059A8E9E118AC09E35_inline (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	{
		// return health;
		int32_t L_0 = __this->___health_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* Character_GetInventory_mF0C9B3B4BB89B000221A4C066A8EB7EE49E21659_inline (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	{
		// return _inventory;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_0 = __this->____inventory_13;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
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
