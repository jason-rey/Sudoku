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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.List`1<UnityEngine.Vector3[]>
struct List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// BoardInternal.Board
struct Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184;
// BoardUI
struct BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CellPos
struct CellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GameBoardInternal
struct GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StartGame
struct StartGame_t90AD9E5EF32F94D01D593C5340B2CCAD86A98E07;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TestBoard
struct TestBoard_t5C81A60307C93561252C49E393BC606E62D1C14E;
// TestSolver
struct TestSolver_t832C17117A150F9CDE00DC5EB231CA95D1123CE2;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// BoardUI/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// GameBoardInternal/<WrongGuess>d__14
struct U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral03A66FCA2AD7DC00C6D97DDA8AB6D4B27C73D859;
IL2CPP_EXTERN_C String_t* _stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2C6C4A0396E04E83942E78DFF4DF343644956432;
IL2CPP_EXTERN_C String_t* _stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32_mC199AAD4C768687EF9669FE13279F341515C9623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0097EFD9D24A1B53F161E87AC4C759F41D7C0708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m32490BBA3129AC1138DCF96F10BE17379AD10971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAC1F2C322C14888AFF0189DC34D8D8C0C70C1FDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC92F52DB8C830F1E6FD0E7133F46F37304267D9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StartGame_StartOnClick_m8B14EE8415C17B4B17A671BF819F68894FCA992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_m895DE1CFB261762CB169A0E0101535AB8B0DA1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWrongGuessU3Ed__14_System_Collections_IEnumerator_Reset_mBD3535BDB8141AB000D05628575BCDF580E28B80_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

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

// System.Collections.Generic.List`1<UnityEngine.Vector3[]>
struct List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// BoardInternal.Board
struct Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184  : public RuntimeObject
{
	// System.Int32[][] BoardInternal.Board::unchangedBoard
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___unchangedBoard_0;
	// System.Int32[][] BoardInternal.Board::board
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___board_1;
};

// SolverInternal.Solver
struct Solver_tB2B6B06476117651035711F4B27ABEBA5F121ADB  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// BoardUI/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7  : public RuntimeObject
{
	// UnityEngine.UI.Button BoardUI/<>c__DisplayClass8_0::curr
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___curr_0;
	// BoardUI BoardUI/<>c__DisplayClass8_0::<>4__this
	BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C* ___U3CU3E4__this_1;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// BoardInternal.Move
struct Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695 
{
	// System.Int32[] BoardInternal.Move::<pos>k__BackingField
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CposU3Ek__BackingField_0;
	// System.Int32 BoardInternal.Move::<val>k__BackingField
	int32_t ___U3CvalU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of BoardInternal.Move
struct Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___U3CposU3Ek__BackingField_0;
	int32_t ___U3CvalU3Ek__BackingField_1;
};
// Native definition for COM marshalling of BoardInternal.Move
struct Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___U3CposU3Ek__BackingField_0;
	int32_t ___U3CvalU3Ek__BackingField_1;
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// GameBoardInternal/<WrongGuess>d__14
struct U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9  : public RuntimeObject
{
	// System.Int32 GameBoardInternal/<WrongGuess>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameBoardInternal/<WrongGuess>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameBoardInternal GameBoardInternal/<WrongGuess>d__14::<>4__this
	GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* ___U3CU3E4__this_2;
	// UnityEngine.UI.Button GameBoardInternal/<WrongGuess>d__14::<btn>5__2
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___U3CbtnU3E5__2_3;
	// UnityEngine.UI.ColorBlock GameBoardInternal/<WrongGuess>d__14::<colorVar>5__3
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___U3CcolorVarU3E5__3_4;
	// UnityEngine.Color GameBoardInternal/<WrongGuess>d__14::<tempHigh>5__4
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CtempHighU3E5__4_5;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// BoardUI
struct BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameBoardInternal BoardUI::boardLogic
	GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* ___boardLogic_4;
	// UnityEngine.GameObject BoardUI::boardObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boardObj_5;
	// UnityEngine.GameObject BoardUI::cellPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cellPrefab_6;
	// UnityEngine.GameObject BoardUI::barPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___barPrefab_7;
	// UnityEngine.UI.Button[] BoardUI::boardElements
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___boardElements_8;
	// System.Int32 BoardUI::cellSize
	int32_t ___cellSize_9;
	// System.Int32 BoardUI::cellMargin
	int32_t ___cellMargin_10;
	// BoardInternal.Board BoardUI::playerBoard
	Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* ___playerBoard_11;
	// System.Int32 BoardUI::squareSize
	int32_t ___squareSize_12;
	// System.Int32 BoardUI::idx
	int32_t ___idx_13;
};

// CellPos
struct CellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32[] CellPos::pos
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___pos_4;
};

// GameBoardInternal
struct GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BoardInternal.Board GameBoardInternal::<playerBoard>k__BackingField
	Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* ___U3CplayerBoardU3Ek__BackingField_4;
	// System.Int32 GameBoardInternal::lives
	int32_t ___lives_5;
	// BoardInternal.Board GameBoardInternal::solvedBoard
	Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* ___solvedBoard_6;
	// UnityEngine.GameObject GameBoardInternal::selected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected_7;
	// UnityEngine.Color GameBoardInternal::temp
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___temp_8;
	// UnityEngine.Color GameBoardInternal::highlighted
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___highlighted_9;
	// System.Boolean GameBoardInternal::wrongCooldown
	bool ___wrongCooldown_10;
};

// StartGame
struct StartGame_t90AD9E5EF32F94D01D593C5340B2CCAD86A98E07  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject StartGame::boardUIPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boardUIPrefab_4;
};

// TestBoard
struct TestBoard_t5C81A60307C93561252C49E393BC606E62D1C14E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BoardInternal.Board TestBoard::testBoard
	Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* ___testBoard_4;
};

// TestSolver
struct TestSolver_t832C17117A150F9CDE00DC5EB231CA95D1123CE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
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

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF  : public RuntimeArray
{
	ALIGN_FIELD (8) Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* m_Items[1];

	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
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


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;

// BoardInternal.Board GameBoardInternal::get_playerBoard()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* GameBoardInternal_get_playerBoard_m1B3FE04B47C07F1FCEBE17DC198605CBE209E5E1_inline (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, const RuntimeMethod* method) ;
// System.Void BoardUI::PlaceCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardUI_PlaceCells_mF4D536209DD184587FDBC064004C09F546CFD2E1 (BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C* __this, const RuntimeMethod* method) ;
// System.Void BoardUI::PlaceBars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardUI_PlaceBars_mAD3095B31D268A657AB22146645DB08F52F57D39 (BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void BoardUI/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m45D85B3EDEA4363474F506221F9F308D04F120DE (U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform,System.Boolean)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// T UnityEngine.GameObject::GetComponent<CellPos>()
inline CellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32* GameObject_GetComponent_TisCellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32_mC199AAD4C768687EF9669FE13279F341515C9623 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void TMPro.TMP_Text::set_fontSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3[]>::.ctor()
inline void List_1__ctor_m32490BBA3129AC1138DCF96F10BE17379AD10971 (List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3[]>::Add(T)
inline void List_1_Add_m0097EFD9D24A1B53F161E87AC4C759F41D7C0708_inline (List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3[]>::get_Item(System.Int32)
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_get_Item_mC92F52DB8C830F1E6FD0E7133F46F37304267D9D (List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.GameObject BoardUI::CreateBar(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BoardUI_CreateBar_m39C05D73F9A751DFDFE1A5F48EE937929D9F4DBB (BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___width1, float ___height2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3[]>::get_Count()
inline int32_t List_1_get_Count_mAC1F2C322C14888AFF0189DC34D8D8C0C70C1FDC_inline (List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void GameBoardInternal::SetSelectedSquare(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardInternal_SetSelectedSquare_m59C9963E0C17B2B5757D3EB43A3B1480AD02155B (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___btn0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void BoardInternal.Board::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board__ctor_mE580ECF93F5B9805F2DAF0F364EDFA2F8D418A19 (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, String_t* ___boardStr0, const RuntimeMethod* method) ;
// System.Int32[][] SolverInternal.Solver::FastSolve(BoardInternal.Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* Solver_FastSolve_mBF10B1D3D948DEE015E0C1BD70853ADFE789B5D8 (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* ____board0, const RuntimeMethod* method) ;
// System.Void GameBoardInternal::set_playerBoard(BoardInternal.Board)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameBoardInternal_set_playerBoard_mAA380CDFF3BBEF921A0704E4CABBA8BA2CA653FE_inline (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void GameBoardInternal::ResetSelectedSquare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardInternal_ResetSelectedSquare_m4FB4BD476FA7A760124E933C5724D85DFB1C012B (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_anyKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_mEF32EB1ABEE0F334F99B96E3C502266A9D174520 (const RuntimeMethod* method) ;
// System.String UnityEngine.Input::get_inputString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Input_get_inputString_m7383383B0F5879FF1B5E4AEB9FB6FE3361E31BF0 (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsDigit_mC98DAF907860EFB7D26C3E126D80AD3A2CE72715 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Double System.Char::GetNumericValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Char_GetNumericValue_mC6F88D2867A2D6EAFB9399277E2A5406CDBB0D96 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameBoardInternal::WrongGuess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameBoardInternal_WrongGuess_m211984BC92DA358D3139100EAFC2BE7D985143DA (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameBoardInternal/<WrongGuess>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrongGuessU3Ed__14__ctor_m07C343407DE5145842ADD6B0B43A0DC17D91675A (U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.UI.ColorBlock::get_highlightedColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorBlock_get_highlightedColor_m4D1A3D268CB00B351F56934F7F244DBC68855301_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_highlightedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String BoardInternal.Board::PrintBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Board_PrintBoard_mB7220576E141292D8A3AA84972D4A7589B2B671F (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared)(__this, ___key0, method);
}
// System.Void BoardInternal.Move::.ctor(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move__ctor_mD758EC896129BD9902B332EEF44AA467DAE19752 (Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pos0, int32_t ____val1, const RuntimeMethod* method) ;
// System.Boolean BoardInternal.Board::MakeMove(BoardInternal.Move)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_MakeMove_m4460CF126A64D6908497C88D86CC6E783341D8A4 (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695 ___move0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32[] BoardInternal.Move::get_pos()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Move_get_pos_mBE2CC99EBD50305821AA7CCC749358AC2C175D31_inline (Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695* __this, const RuntimeMethod* method) ;
// System.Int32 BoardInternal.Move::get_val()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Move_get_val_m30B95B0E299E6DACB04F34E00EB48D3474859415_inline (Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695* __this, const RuntimeMethod* method) ;
// System.Int32[][] BoardInternal.Board::ParseBoardString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* Board_ParseBoardString_mDCA097A072036DEEF620271CEDC5D66D3BA6F83B (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, String_t* ___boardStr0, const RuntimeMethod* method) ;
// System.Int32[][] BoardInternal.Board::ConstructEmptyBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* Board_ConstructEmptyBoard_mBA044AEC1DB9B65AD1DB8DBF299E1618BBFCC031 (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, const RuntimeMethod* method) ;
// System.Boolean BoardInternal.Board::IsValidMove(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_IsValidMove_m726375C87569BEAF4554091D7346A0D960922470 (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___movePos0, const RuntimeMethod* method) ;
// System.Int32[] BoardInternal.Board::PosToSquareIdx(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Board_PosToSquareIdx_m1F514C56844638F491BC064A709C53B34F36AF42 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___pos0, const RuntimeMethod* method) ;
// System.Int32[] BoardInternal.Board::GetColumnArr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Board_GetColumnArr_m9D9C326073434E94A5B24A49ACFA28CD111000BD (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, int32_t ___colIdx0, const RuntimeMethod* method) ;
// System.Int32[] BoardInternal.Board::GetSquareArr(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Board_GetSquareArr_m446D892F7CC051DB20FE4EAC81ACF006245C6DBA (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___squarePos0, const RuntimeMethod* method) ;
// System.Boolean BoardInternal.Board::IsValidArr(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_IsValidArr_m92075A27B35D6EBFAD594B8A4F0110D319AFEE58 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arr0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
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
// System.Void BoardUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardUI_Start_m829DB6ED8E276661DC0D34B235289A3C57BF22E9 (BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_m895DE1CFB261762CB169A0E0101535AB8B0DA1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7* V_1 = NULL;
	{
		// playerBoard = boardLogic.playerBoard;
		GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* L_0 = __this->___boardLogic_4;
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_1;
		L_1 = GameBoardInternal_get_playerBoard_m1B3FE04B47C07F1FCEBE17DC198605CBE209E5E1_inline(L_0, NULL);
		__this->___playerBoard_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerBoard_11), (void*)L_1);
		// boardElements = new Button[playerBoard.board.Length * playerBoard.board[0].Length];
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_2 = __this->___playerBoard_11;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_3 = L_2->___board_1;
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_4 = __this->___playerBoard_11;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_5 = L_4->___board_1;
		int32_t L_6 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_8 = (ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)SZArrayNew(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), ((int32_t)(((RuntimeArray*)L_7)->max_length)))));
		__this->___boardElements_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boardElements_8), (void*)L_8);
		// PlaceCells();
		BoardUI_PlaceCells_mF4D536209DD184587FDBC064004C09F546CFD2E1(__this, NULL);
		// PlaceBars();
		BoardUI_PlaceBars_mAD3095B31D268A657AB22146645DB08F52F57D39(__this, NULL);
		// this.transform.localPosition = new Vector3(-((cellSize + cellMargin) * 9) / 2, ((cellSize + cellMargin) * 9) / 2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_10 = __this->___cellSize_9;
		int32_t L_11 = __this->___cellMargin_10;
		int32_t L_12 = __this->___cellSize_9;
		int32_t L_13 = __this->___cellMargin_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_14), ((float)((int32_t)(((-((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_10, L_11)), ((int32_t)9)))))/2))), ((float)((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_12, L_13)), ((int32_t)9)))/2))), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_14, NULL);
		// for (int i = 0; i < boardElements.Length; i++) {
		V_0 = 0;
		goto IL_00bb;
	}

IL_0080:
	{
		U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7* L_15 = (U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_m45D85B3EDEA4363474F506221F9F308D04F120DE(L_15, NULL);
		V_1 = L_15;
		U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7* L_16 = V_1;
		L_16->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___U3CU3E4__this_1), (void*)__this);
		// Button curr = boardElements[i];
		U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7* L_17 = V_1;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_18 = __this->___boardElements_8;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		L_17->___curr_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___curr_0), (void*)L_21);
		// curr.onClick.AddListener(() => { boardLogic.SetSelectedSquare(curr.gameObject); });
		U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7* L_22 = V_1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = L_22->___curr_0;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_24;
		L_24 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_23, NULL);
		U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7* L_25 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_26 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_m895DE1CFB261762CB169A0E0101535AB8B0DA1F9_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_24, L_26, NULL);
		// for (int i = 0; i < boardElements.Length; i++) {
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00bb:
	{
		// for (int i = 0; i < boardElements.Length; i++) {
		int32_t L_28 = V_0;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_29 = __this->___boardElements_8;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0080;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardUI::PlaceCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardUI_PlaceCells_mF4D536209DD184587FDBC064004C09F546CFD2E1 (BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32_mC199AAD4C768687EF9669FE13279F341515C9623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// for (int row = 0; row < playerBoard.board.Length; row++) {
		V_0 = 0;
		goto IL_0118;
	}

IL_0007:
	{
		// int[] curr = playerBoard.board[row];
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_0 = __this->___playerBoard_11;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = L_0->___board_1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// for (int col = 0; col < curr.Length; col++) {
		V_2 = 0;
		goto IL_010b;
	}

IL_001c:
	{
		// Vector3 cellPos = new Vector3(col * (cellSize + cellMargin), row * -(cellSize + cellMargin));
		int32_t L_5 = V_2;
		int32_t L_6 = __this->___cellSize_9;
		int32_t L_7 = __this->___cellMargin_10;
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___cellSize_9;
		int32_t L_10 = __this->___cellMargin_10;
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&V_3), ((float)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)il2cpp_codegen_add(L_6, L_7))))), ((float)((int32_t)il2cpp_codegen_multiply(L_8, ((-((int32_t)il2cpp_codegen_add(L_9, L_10))))))), NULL);
		// string numText = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (curr[col] != 0) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		// numText = curr[col].ToString();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_1;
		int32_t L_16 = V_2;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16))), NULL);
		V_4 = L_17;
	}

IL_005e:
	{
		// GameObject cell = Instantiate(cellPrefab, this.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___cellPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5(L_18, L_19, (bool)0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
		V_5 = L_20;
		// cell.GetComponent<CellPos>().pos = new int[] { col, row };
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_5;
		CellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32* L_22;
		L_22 = GameObject_GetComponent_TisCellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32_mC199AAD4C768687EF9669FE13279F341515C9623(L_21, GameObject_GetComponent_TisCellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32_mC199AAD4C768687EF9669FE13279F341515C9623_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23;
		int32_t L_25 = V_2;
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_24;
		int32_t L_27 = V_0;
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_27);
		L_22->___pos_4 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___pos_4), (void*)L_26);
		// RectTransform rectCell = (RectTransform)cell.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		// rectCell.sizeDelta = new Vector3(cellSize, cellSize);
		int32_t L_30 = __this->___cellSize_9;
		int32_t L_31 = __this->___cellSize_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_32), ((float)L_30), ((float)L_31), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_32, NULL);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_29, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_33, NULL);
		// Button cellButton = cell.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_5;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_35;
		L_35 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_34, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		V_6 = L_35;
		// TextMeshProUGUI cellText = cellButton.GetComponentInChildren<TextMeshProUGUI>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_36 = V_6;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_37;
		L_37 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_36, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		// cellText.text = numText;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_38 = L_37;
		String_t* L_39 = V_4;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_38, L_39);
		// cellText.fontSize = cellSize;
		int32_t L_40 = __this->___cellSize_9;
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_38, ((float)L_40), NULL);
		// boardElements[idx] = cellButton;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_41 = __this->___boardElements_8;
		int32_t L_42 = __this->___idx_13;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_43 = V_6;
		ArrayElementTypeCheck (L_41, L_43);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42), (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)L_43);
		// idx += 1;
		int32_t L_44 = __this->___idx_13;
		__this->___idx_13 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		// Vector3 pos = cellPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_3;
		V_7 = L_45;
		// cell.transform.localPosition = pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_7;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_47, L_48, NULL);
		// for (int col = 0; col < curr.Length; col++) {
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_010b:
	{
		// for (int col = 0; col < curr.Length; col++) {
		int32_t L_50 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_1;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// for (int row = 0; row < playerBoard.board.Length; row++) {
		int32_t L_52 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0118:
	{
		// for (int row = 0; row < playerBoard.board.Length; row++) {
		int32_t L_53 = V_0;
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_54 = __this->___playerBoard_11;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_55 = L_54->___board_1;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject BoardUI::CreateBar(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BoardUI_CreateBar_m39C05D73F9A751DFDFE1A5F48EE937929D9F4DBB (BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___width1, float ___height2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject bar = Instantiate(barPrefab, this.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___barPrefab_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5(L_0, L_1, (bool)0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
		// bar.transform.localPosition = pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___pos0;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// RectTransform rT = (RectTransform)bar.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		// rT.sizeDelta = new Vector3(width, height);
		float L_8 = ___width1;
		float L_9 = ___height2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_10, NULL);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_7, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_11, NULL);
		// return bar;
		return L_6;
	}
}
// System.Void BoardUI::PlaceBars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardUI_PlaceBars_mAD3095B31D268A657AB22146645DB08F52F57D39 (BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0097EFD9D24A1B53F161E87AC4C759F41D7C0708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m32490BBA3129AC1138DCF96F10BE17379AD10971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAC1F2C322C14888AFF0189DC34D8D8C0C70C1FDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC92F52DB8C830F1E6FD0E7133F46F37304267D9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_9 = NULL;
	{
		// float width = cellMargin / 2.25f;
		int32_t L_0 = __this->___cellMargin_10;
		V_0 = ((float)(((float)L_0)/(2.25f)));
		// float height = (cellSize + cellMargin) * playerBoard.board.Length;
		int32_t L_1 = __this->___cellSize_9;
		int32_t L_2 = __this->___cellMargin_10;
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_3 = __this->___playerBoard_11;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = L_3->___board_1;
		V_1 = ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_1, L_2)), ((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		// int xPrev = 0;
		V_2 = 0;
		// List<Vector3[]> positions = new List<Vector3[]>();
		List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5* L_5 = (List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5*)il2cpp_codegen_object_new(List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5_il2cpp_TypeInfo_var);
		List_1__ctor_m32490BBA3129AC1138DCF96F10BE17379AD10971(L_5, List_1__ctor_m32490BBA3129AC1138DCF96F10BE17379AD10971_RuntimeMethod_var);
		V_3 = L_5;
		// for (int i = 0; i < playerBoard.board.Length; i++) {
		V_4 = 0;
		goto IL_00d7;
	}

IL_003b:
	{
		// int xSum = xPrev + (cellSize + cellMargin);
		int32_t L_6 = V_2;
		int32_t L_7 = __this->___cellSize_9;
		int32_t L_8 = __this->___cellMargin_10;
		V_5 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)il2cpp_codegen_add(L_7, L_8))));
		// xPrev = xSum;
		int32_t L_9 = V_5;
		V_2 = L_9;
		// if ((i + 1) % squareSize != 0 || i == playerBoard.board.Length - 1) {
		int32_t L_10 = V_4;
		int32_t L_11 = __this->___squareSize_12;
		if (((int32_t)(((int32_t)il2cpp_codegen_add(L_10, 1))%L_11)))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_12 = V_4;
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_13 = __this->___playerBoard_11;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_14 = L_13->___board_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), 1)))))
		{
			goto IL_00d1;
		}
	}
	{
		// Vector3 vBarPos = new Vector3(xSum - (cellSize + cellMargin)/2, -height / 2.25f);
		int32_t L_15 = V_5;
		int32_t L_16 = __this->___cellSize_9;
		int32_t L_17 = __this->___cellMargin_10;
		float L_18 = V_1;
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&V_6), ((float)((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(((int32_t)il2cpp_codegen_add(L_16, L_17))/2))))), ((float)(((-L_18))/(2.25f))), NULL);
		// Vector3 hBarPos = new Vector3(height / 2.25f, -(xSum - (cellSize + cellMargin) / 2));
		float L_19 = V_1;
		int32_t L_20 = V_5;
		int32_t L_21 = __this->___cellSize_9;
		int32_t L_22 = __this->___cellMargin_10;
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&V_7), ((float)(L_19/(2.25f))), ((float)((-((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)(((int32_t)il2cpp_codegen_add(L_21, L_22))/2))))))), NULL);
		// positions.Add(new Vector3[]{ vBarPos, hBarPos });
		List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5* L_23 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_6;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_26);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_7;
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_28);
		List_1_Add_m0097EFD9D24A1B53F161E87AC4C759F41D7C0708_inline(L_23, L_27, List_1_Add_m0097EFD9D24A1B53F161E87AC4C759F41D7C0708_RuntimeMethod_var);
	}

IL_00d1:
	{
		// for (int i = 0; i < playerBoard.board.Length; i++) {
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00d7:
	{
		// for (int i = 0; i < playerBoard.board.Length; i++) {
		int32_t L_30 = V_4;
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_31 = __this->___playerBoard_11;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_32 = L_31->___board_1;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_003b;
		}
	}
	{
		// for (int i = 0; i < positions.Count; i++) {
		V_8 = 0;
		goto IL_0122;
	}

IL_00f0:
	{
		// Vector3[] curr = positions[i];
		List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5* L_33 = V_3;
		int32_t L_34 = V_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35;
		L_35 = List_1_get_Item_mC92F52DB8C830F1E6FD0E7133F46F37304267D9D(L_33, L_34, List_1_get_Item_mC92F52DB8C830F1E6FD0E7133F46F37304267D9D_RuntimeMethod_var);
		V_9 = L_35;
		// CreateBar(curr[0], width, height);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_36 = V_9;
		int32_t L_37 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		float L_39 = V_0;
		float L_40 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = BoardUI_CreateBar_m39C05D73F9A751DFDFE1A5F48EE937929D9F4DBB(__this, L_38, L_39, L_40, NULL);
		// CreateBar(curr[1], height, width);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = V_9;
		int32_t L_43 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		float L_45 = V_1;
		float L_46 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = BoardUI_CreateBar_m39C05D73F9A751DFDFE1A5F48EE937929D9F4DBB(__this, L_44, L_45, L_46, NULL);
		// for (int i = 0; i < positions.Count; i++) {
		int32_t L_48 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0122:
	{
		// for (int i = 0; i < positions.Count; i++) {
		int32_t L_49 = V_8;
		List_1_tBA1879215003B1A1F26394BD52DEEDB0ED9279D5* L_50 = V_3;
		int32_t L_51;
		L_51 = List_1_get_Count_mAC1F2C322C14888AFF0189DC34D8D8C0C70C1FDC_inline(L_50, List_1_get_Count_mAC1F2C322C14888AFF0189DC34D8D8C0C70C1FDC_RuntimeMethod_var);
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_00f0;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardUI__ctor_m9B97CEFA240DF40BBFD4648CFC3C7B8AFF7B77DE (BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C* __this, const RuntimeMethod* method) 
{
	{
		// private int squareSize = 3;
		__this->___squareSize_12 = 3;
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
// System.Void BoardUI/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m45D85B3EDEA4363474F506221F9F308D04F120DE (U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BoardUI/<>c__DisplayClass8_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_m895DE1CFB261762CB169A0E0101535AB8B0DA1F9 (U3CU3Ec__DisplayClass8_0_tCB864540BDC32D9714BCC7849EDB77D3EABB05F7* __this, const RuntimeMethod* method) 
{
	{
		// curr.onClick.AddListener(() => { boardLogic.SetSelectedSquare(curr.gameObject); });
		BoardUI_t868F96B85414E2D3F5C2599D62776E0FBDE4904C* L_0 = __this->___U3CU3E4__this_1;
		GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* L_1 = L_0->___boardLogic_4;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___curr_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameBoardInternal_SetSelectedSquare_m59C9963E0C17B2B5757D3EB43A3B1480AD02155B(L_1, L_3, NULL);
		// curr.onClick.AddListener(() => { boardLogic.SetSelectedSquare(curr.gameObject); });
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
// System.Void CellPos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellPos__ctor_m03A409EF2DEA9457A30757D277B01650B4C81CDB (CellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32* __this, const RuntimeMethod* method) 
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
// BoardInternal.Board GameBoardInternal::get_playerBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* GameBoardInternal_get_playerBoard_m1B3FE04B47C07F1FCEBE17DC198605CBE209E5E1 (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, const RuntimeMethod* method) 
{
	{
		// public Board playerBoard { get; private set; }
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_0 = __this->___U3CplayerBoardU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GameBoardInternal::set_playerBoard(BoardInternal.Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardInternal_set_playerBoard_mAA380CDFF3BBEF921A0704E4CABBA8BA2CA653FE (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* ___value0, const RuntimeMethod* method) 
{
	{
		// public Board playerBoard { get; private set; }
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_0 = ___value0;
		__this->___U3CplayerBoardU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerBoardU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void GameBoardInternal::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardInternal_Awake_m799F18146287011EB64E3868704A321DFFAE9D1D (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C6C4A0396E04E83942E78DFF4DF343644956432);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string boardStr = GameObject.Find("Input").GetComponentInChildren<TextMeshProUGUI>().text.Trim();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral2C6C4A0396E04E83942E78DFF4DF343644956432, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB(L_0, GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_1);
		String_t* L_3;
		L_3 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_2, NULL);
		V_0 = L_3;
		// solvedBoard = new Board(boardStr);
		String_t* L_4 = V_0;
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_5 = (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184*)il2cpp_codegen_object_new(Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184_il2cpp_TypeInfo_var);
		Board__ctor_mE580ECF93F5B9805F2DAF0F364EDFA2F8D418A19(L_5, L_4, NULL);
		__this->___solvedBoard_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___solvedBoard_6), (void*)L_5);
		// Solver.FastSolve(solvedBoard);
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_6 = __this->___solvedBoard_6;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_7;
		L_7 = Solver_FastSolve_mBF10B1D3D948DEE015E0C1BD70853ADFE789B5D8(L_6, NULL);
		// playerBoard = new Board(boardStr);
		String_t* L_8 = V_0;
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_9 = (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184*)il2cpp_codegen_object_new(Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184_il2cpp_TypeInfo_var);
		Board__ctor_mE580ECF93F5B9805F2DAF0F364EDFA2F8D418A19(L_9, L_8, NULL);
		GameBoardInternal_set_playerBoard_mAA380CDFF3BBEF921A0704E4CABBA8BA2CA653FE_inline(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void GameBoardInternal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardInternal_Update_m5C14052EC0AB53DE53CE7568B919CD06AECDB175 (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32_mC199AAD4C768687EF9669FE13279F341515C9623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		// if (wrongCooldown) {
		bool L_0 = __this->___wrongCooldown_10;
		if (!L_0)
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
		// if (Input.GetKeyDown(KeyCode.Mouse0)) {
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)323), NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// if (selected != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___selected_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_00e5;
		}
	}
	{
		// ResetSelectedSquare();
		GameBoardInternal_ResetSelectedSquare_m4FB4BD476FA7A760124E933C5724D85DFB1C012B(__this, NULL);
		return;
	}

IL_002d:
	{
		// else if (Input.anyKeyDown && selected != null) {
		bool L_4;
		L_4 = Input_get_anyKeyDown_mEF32EB1ABEE0F334F99B96E3C502266A9D174520(NULL);
		if (!L_4)
		{
			goto IL_00e5;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___selected_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_00e5;
		}
	}
	{
		// string input = Input.inputString;
		String_t* L_7;
		L_7 = Input_get_inputString_m7383383B0F5879FF1B5E4AEB9FB6FE3361E31BF0(NULL);
		V_0 = L_7;
		// if (input.Length > 0 && char.IsDigit(input[0])) {
		String_t* L_8 = V_0;
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00df;
		}
	}
	{
		String_t* L_10 = V_0;
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsDigit_mC98DAF907860EFB7D26C3E126D80AD3A2CE72715(L_11, NULL);
		if (!L_12)
		{
			goto IL_00df;
		}
	}
	{
		// int[] cellPos = selected.GetComponent<CellPos>().pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___selected_7;
		CellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32* L_14;
		L_14 = GameObject_GetComponent_TisCellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32_mC199AAD4C768687EF9669FE13279F341515C9623(L_13, GameObject_GetComponent_TisCellPos_t48D4E90540D68FD2841E19EA16EE46D6708A7E32_mC199AAD4C768687EF9669FE13279F341515C9623_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = L_14->___pos_4;
		V_1 = L_15;
		// int expected = solvedBoard.board[cellPos[1]][cellPos[0]];
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_16 = __this->___solvedBoard_6;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_17 = L_16->___board_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = 1;
		int32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = L_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		int32_t L_24 = 0;
		int32_t L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = L_25;
		int32_t L_27 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_2 = L_27;
		// int inNum = (int)char.GetNumericValue(input[0]);
		String_t* L_28 = V_0;
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		double L_30;
		L_30 = Char_GetNumericValue_mC6F88D2867A2D6EAFB9399277E2A5406CDBB0D96(L_29, NULL);
		// if (inNum != expected) {
		int32_t L_31 = V_2;
		if ((((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_30)) == ((int32_t)L_31)))
		{
			goto IL_00b9;
		}
	}
	{
		// lives -= 1;
		int32_t L_32 = __this->___lives_5;
		__this->___lives_5 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		// StartCoroutine(WrongGuess());
		RuntimeObject* L_33;
		L_33 = GameBoardInternal_WrongGuess_m211984BC92DA358D3139100EAFC2BE7D985143DA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_34;
		L_34 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_33, NULL);
		return;
	}

IL_00b9:
	{
		// selected.GetComponentInChildren<TextMeshProUGUI>().text = input[0].ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___selected_7;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_36;
		L_36 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB(L_35, GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		String_t* L_37 = V_0;
		Il2CppChar L_38;
		L_38 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_37, 0, NULL);
		V_3 = L_38;
		String_t* L_39;
		L_39 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_36, L_39);
		// ResetSelectedSquare();
		GameBoardInternal_ResetSelectedSquare_m4FB4BD476FA7A760124E933C5724D85DFB1C012B(__this, NULL);
		return;
	}

IL_00df:
	{
		// ResetSelectedSquare();
		GameBoardInternal_ResetSelectedSquare_m4FB4BD476FA7A760124E933C5724D85DFB1C012B(__this, NULL);
	}

IL_00e5:
	{
		// }
		return;
	}
}
// System.Void GameBoardInternal::SetSelectedSquare(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardInternal_SetSelectedSquare_m59C9963E0C17B2B5757D3EB43A3B1480AD02155B (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___btn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	{
		// if (wrongCooldown) {
		bool L_0 = __this->___wrongCooldown_10;
		if (!L_0)
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
		// selected = btn;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___btn0;
		__this->___selected_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selected_7), (void*)L_1);
		// Image col = selected.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___selected_7;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		V_0 = L_3;
		// temp = col.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		__this->___temp_8 = L_5;
		// col.color = highlighted;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___highlighted_9;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void GameBoardInternal::ResetSelectedSquare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardInternal_ResetSelectedSquare_m4FB4BD476FA7A760124E933C5724D85DFB1C012B (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selected.GetComponent<Image>().color = temp;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___selected_7;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___temp_8;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// selected = null;
		__this->___selected_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selected_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameBoardInternal::WrongGuess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameBoardInternal_WrongGuess_m211984BC92DA358D3139100EAFC2BE7D985143DA (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9* L_0 = (U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9*)il2cpp_codegen_object_new(U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9_il2cpp_TypeInfo_var);
		U3CWrongGuessU3Ed__14__ctor_m07C343407DE5145842ADD6B0B43A0DC17D91675A(L_0, 0, NULL);
		U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameBoardInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardInternal__ctor_mC37CC3DD2B05BB16C2E58818CE3E2122E9253D8E (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, const RuntimeMethod* method) 
{
	{
		// private int lives = 5;
		__this->___lives_5 = 5;
		// private Color highlighted = new Color(128, 128, 128, 125);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (128.0f), (128.0f), (128.0f), (125.0f), /*hidden argument*/NULL);
		__this->___highlighted_9 = L_0;
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
// System.Void GameBoardInternal/<WrongGuess>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrongGuessU3Ed__14__ctor_m07C343407DE5145842ADD6B0B43A0DC17D91675A (U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameBoardInternal/<WrongGuess>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrongGuessU3Ed__14_System_IDisposable_Dispose_m3CB35A6C9B0D407E6F3369DAFF7F00508335DFDA (U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameBoardInternal/<WrongGuess>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWrongGuessU3Ed__14_MoveNext_mA6DCBAA798942C6FAF2DC7DDD79AC1F29989D27E (U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_00aa;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// wrongCooldown = true;
		GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* L_4 = V_1;
		L_4->___wrongCooldown_10 = (bool)1;
		// Image col = selected.GetComponent<Image>();
		GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* L_5 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___selected_7;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_6, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		// Button btn = selected.GetComponent<Button>();
		GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* L_8 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___selected_7;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10;
		L_10 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_9, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___U3CbtnU3E5__2_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbtnU3E5__2_3), (void*)L_10);
		// ColorBlock colorVar = btn.colors;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___U3CbtnU3E5__2_3;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_12;
		L_12 = Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline(L_11, NULL);
		__this->___U3CcolorVarU3E5__3_4 = L_12;
		// Color tempHigh = colorVar.highlightedColor;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* L_13 = (&__this->___U3CcolorVarU3E5__3_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = ColorBlock_get_highlightedColor_m4D1A3D268CB00B351F56934F7F244DBC68855301_inline(L_13, NULL);
		__this->___U3CtempHighU3E5__4_5 = L_14;
		// colorVar.highlightedColor = Color.red;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* L_15 = (&__this->___U3CcolorVarU3E5__3_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline(L_15, L_16, NULL);
		// btn.colors = colorVar;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->___U3CbtnU3E5__2_3;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_18 = __this->___U3CcolorVarU3E5__3_4;
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_17, L_18, NULL);
		// col.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_19);
		// yield return new WaitForSeconds(0.35f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_20 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_20, (0.349999994f), NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00aa:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// wrongCooldown = false;
		GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* L_21 = V_1;
		L_21->___wrongCooldown_10 = (bool)0;
		// colorVar.highlightedColor = tempHigh;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* L_22 = (&__this->___U3CcolorVarU3E5__3_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = __this->___U3CtempHighU3E5__4_5;
		ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline(L_22, L_23, NULL);
		// btn.colors = colorVar;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_24 = __this->___U3CbtnU3E5__2_3;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_25 = __this->___U3CcolorVarU3E5__3_4;
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_24, L_25, NULL);
		// ResetSelectedSquare();
		GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* L_26 = V_1;
		GameBoardInternal_ResetSelectedSquare_m4FB4BD476FA7A760124E933C5724D85DFB1C012B(L_26, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameBoardInternal/<WrongGuess>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWrongGuessU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m86242163E107E4731AC66D452BA2BC0F8ACB9C80 (U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameBoardInternal/<WrongGuess>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrongGuessU3Ed__14_System_Collections_IEnumerator_Reset_mBD3535BDB8141AB000D05628575BCDF580E28B80 (U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWrongGuessU3Ed__14_System_Collections_IEnumerator_Reset_mBD3535BDB8141AB000D05628575BCDF580E28B80_RuntimeMethod_var)));
	}
}
// System.Object GameBoardInternal/<WrongGuess>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWrongGuessU3Ed__14_System_Collections_IEnumerator_get_Current_mC234B0C16DE4C81B40D6926B94F05AA5E722437A (U3CWrongGuessU3Ed__14_t5200AA1E0A0F289A84F3CDC00B5978B9EEA336D9* __this, const RuntimeMethod* method) 
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
// System.Void StartGame::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGame_Start_mEC116D491FF38D1DE26181473D793B7B26CECA5D (StartGame_t90AD9E5EF32F94D01D593C5340B2CCAD86A98E07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartGame_StartOnClick_m8B14EE8415C17B4B17A671BF819F68894FCA992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Button>().onClick.AddListener(StartOnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)StartGame_StartOnClick_m8B14EE8415C17B4B17A671BF819F68894FCA992B_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void StartGame::StartOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGame_StartOnClick_m8B14EE8415C17B4B17A671BF819F68894FCA992B (StartGame_t90AD9E5EF32F94D01D593C5340B2CCAD86A98E07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject board = Instantiate(boardUIPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boardUIPrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// board.SetActive(true);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// GameObject.Find("StartMenu").SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void StartGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGame__ctor_mCE51A8179D9D10D4F741CDAB63ED2DA16C00B797 (StartGame_t90AD9E5EF32F94D01D593C5340B2CCAD86A98E07* __this, const RuntimeMethod* method) 
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
// System.Void TestBoard::PrintArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestBoard_PrintArray_mC0948A416BFF3AF852B14A6B90B80DCB794F49EC (TestBoard_t5C81A60307C93561252C49E393BC606E62D1C14E* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string output = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < arr.Length; i++) {
		V_1 = 0;
		goto IL_0026;
	}

IL_000a:
	{
		// output += arr[i].ToString() + " ";
		String_t* L_0 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___arr0;
		int32_t L_2 = V_1;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2))), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_3, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_4;
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_6 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___arr0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// Debug.Log(output);
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
		// }
		return;
	}
}
// System.Void TestBoard::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestBoard_Start_mEAB13703B1F8975F706EEA23062DB3EC96A896C5 (TestBoard_t5C81A60307C93561252C49E393BC606E62D1C14E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03A66FCA2AD7DC00C6D97DDA8AB6D4B27C73D859);
		s_Il2CppMethodInitialized = true;
	}
	{
		// testBoard = new Board("010020300004005060070000008006900070000100002030048000500006040000800106008000000");
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_0 = (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184*)il2cpp_codegen_object_new(Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184_il2cpp_TypeInfo_var);
		Board__ctor_mE580ECF93F5B9805F2DAF0F364EDFA2F8D418A19(L_0, _stringLiteral03A66FCA2AD7DC00C6D97DDA8AB6D4B27C73D859, NULL);
		__this->___testBoard_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___testBoard_4), (void*)L_0);
		// Debug.Log(testBoard.PrintBoard());
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_1 = __this->___testBoard_4;
		String_t* L_2;
		L_2 = Board_PrintBoard_mB7220576E141292D8A3AA84972D4A7589B2B671F(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// Solver.FastSolve(testBoard);
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_3 = __this->___testBoard_4;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4;
		L_4 = Solver_FastSolve_mBF10B1D3D948DEE015E0C1BD70853ADFE789B5D8(L_3, NULL);
		// Debug.Log(testBoard.PrintBoard());
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_5 = __this->___testBoard_4;
		String_t* L_6;
		L_6 = Board_PrintBoard_mB7220576E141292D8A3AA84972D4A7589B2B671F(L_5, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// }
		return;
	}
}
// System.String TestBoard::PrintBoard(System.Int32[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TestBoard_PrintBoard_m5302A2C17E639E51F42CAE58CB690199631B26D1 (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___board0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// string output = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int row = 0; row < 9; row++) {
		V_1 = 0;
		goto IL_007d;
	}

IL_000a:
	{
		// string curr = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int column = 0; column < 9; column++) {
		V_3 = 0;
		goto IL_0050;
	}

IL_0014:
	{
		// curr += board[row][column].ToString();
		String_t* L_0 = V_2;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = ___board0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = V_3;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5))), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, L_6, NULL);
		V_2 = L_7;
		// curr += " ";
		String_t* L_8 = V_2;
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_2 = L_9;
		// if ((column + 1) % 3 == 0 && column < 8) {
		int32_t L_10 = V_3;
		if (((int32_t)(((int32_t)il2cpp_codegen_add(L_10, 1))%3)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) >= ((int32_t)8)))
		{
			goto IL_004c;
		}
	}
	{
		// curr += "| ";
		String_t* L_12 = V_2;
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_12, _stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D, NULL);
		V_2 = L_13;
	}

IL_004c:
	{
		// for (int column = 0; column < 9; column++) {
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0050:
	{
		// for (int column = 0; column < 9; column++) {
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)9))))
		{
			goto IL_0014;
		}
	}
	{
		// output += curr + "\n";
		String_t* L_16 = V_0;
		String_t* L_17 = V_2;
		String_t* L_18;
		L_18 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_16, L_17, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_0 = L_18;
		// if ((row + 1) % 3 == 0 && row < 8) {
		int32_t L_19 = V_1;
		if (((int32_t)(((int32_t)il2cpp_codegen_add(L_19, 1))%3)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)8)))
		{
			goto IL_0079;
		}
	}
	{
		// output += "\n";
		String_t* L_21 = V_0;
		String_t* L_22;
		L_22 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_21, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_0 = L_22;
	}

IL_0079:
	{
		// for (int row = 0; row < 9; row++) {
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007d:
	{
		// for (int row = 0; row < 9; row++) {
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)9))))
		{
			goto IL_000a;
		}
	}
	{
		// return output;
		String_t* L_25 = V_0;
		return L_25;
	}
}
// System.Void TestBoard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestBoard_Update_mC34FB9F6E4BA79B553C86C1258D362362524116B (TestBoard_t5C81A60307C93561252C49E393BC606E62D1C14E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TestBoard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestBoard__ctor_m2A0C9F7E6621D9E9933AF48AFAD23FF85BD10AE7 (TestBoard_t5C81A60307C93561252C49E393BC606E62D1C14E* __this, const RuntimeMethod* method) 
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
// System.Void TestSolver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestSolver_Start_m0A41CFB8E1FB28CBE84E4AF2AD7A3E2080F04A30 (TestSolver_t832C17117A150F9CDE00DC5EB231CA95D1123CE2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TestSolver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestSolver_Update_mC6C9C31C0B79FABBA5A4AC65361DCBCDBD6DC8DE (TestSolver_t832C17117A150F9CDE00DC5EB231CA95D1123CE2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TestSolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestSolver__ctor_m93D207D04E2D18C872D825D9D0E85098D26ADE24 (TestSolver_t832C17117A150F9CDE00DC5EB231CA95D1123CE2* __this, const RuntimeMethod* method) 
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
// System.Int32[][] SolverInternal.Solver::FastSolve(BoardInternal.Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* Solver_FastSolve_mBF10B1D3D948DEE015E0C1BD70853ADFE789B5D8 (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* ____board0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_0 = NULL;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t V_6 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		// int[][] ans = _board.board;
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_0 = ____board0;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = L_0->___board_1;
		V_0 = L_1;
		// Dictionary<string, int> encountered = new Dictionary<string, int>();
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_2, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		V_1 = L_2;
		// int rowIdx = 0;
		V_2 = 0;
		// bool goBack = false;
		V_3 = (bool)0;
		// bool rowBack = false;
		V_4 = (bool)0;
		goto IL_0112;
	}

IL_0019:
	{
		// int[] cRow = ans[rowIdx];
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_3 = V_0;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_5 = L_6;
		// int colIdx = rowBack ? cRow.Length - 1 : 0;
		bool L_7 = V_4;
		if (L_7)
		{
			goto IL_0025;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_002b;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_5;
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1));
	}

IL_002b:
	{
		V_6 = G_B4_0;
		goto IL_00f2;
	}

IL_0032:
	{
		// if (colIdx < 0) {
		int32_t L_9 = V_6;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_00fd;
		}
	}
	{
		// if (_board.unchangedBoard[rowIdx][colIdx] != 0) {
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_10 = ____board0;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_11 = L_10->___unchangedBoard_0;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = V_6;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if (!L_17)
		{
			goto IL_0058;
		}
	}
	{
		// colIdx += goBack ? -1 : 1;
		int32_t L_18 = V_6;
		bool L_19 = V_3;
		G_B8_0 = L_18;
		if (L_19)
		{
			G_B9_0 = L_18;
			goto IL_004f;
		}
	}
	{
		G_B10_0 = 1;
		G_B10_1 = G_B8_0;
		goto IL_0050;
	}

IL_004f:
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B9_0;
	}

IL_0050:
	{
		V_6 = ((int32_t)il2cpp_codegen_add(G_B10_1, G_B10_0));
		// continue;
		goto IL_00f2;
	}

IL_0058:
	{
		// int[] pos = { colIdx, rowIdx };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20;
		int32_t L_22 = V_6;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_22);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = L_21;
		int32_t L_24 = V_2;
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_24);
		V_7 = L_23;
		// string posKey = colIdx.ToString() + rowIdx.ToString();
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_27;
		L_27 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_25, L_26, NULL);
		V_8 = L_27;
		// if (!encountered.ContainsKey(posKey)) {
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_28 = V_1;
		String_t* L_29 = V_8;
		bool L_30;
		L_30 = Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E(L_28, L_29, Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		if (L_30)
		{
			goto IL_0091;
		}
	}
	{
		// encountered.Add(posKey, 0);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_31 = V_1;
		String_t* L_32 = V_8;
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_31, L_32, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
	}

IL_0091:
	{
		// int guess = encountered[posKey] + 1;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_33 = V_1;
		String_t* L_34 = V_8;
		int32_t L_35;
		L_35 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_33, L_34, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		V_9 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		goto IL_00ba;
	}

IL_009f:
	{
		// Move move = new Move(pos, guess);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_7;
		int32_t L_37 = V_9;
		Move__ctor_mD758EC896129BD9902B332EEF44AA467DAE19752((&V_10), L_36, L_37, NULL);
		// bool madeMove = _board.MakeMove(move);
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_38 = ____board0;
		Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695 L_39 = V_10;
		bool L_40;
		L_40 = Board_MakeMove_m4460CF126A64D6908497C88D86CC6E783341D8A4(L_38, L_39, NULL);
		// if (madeMove) {
		if (L_40)
		{
			goto IL_00c0;
		}
	}
	{
		// guess += 1;
		int32_t L_41 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00ba:
	{
		// while (guess <= 9) {
		int32_t L_42 = V_9;
		if ((((int32_t)L_42) <= ((int32_t)((int32_t)9))))
		{
			goto IL_009f;
		}
	}

IL_00c0:
	{
		// if (guess > 9) {
		int32_t L_43 = V_9;
		if ((((int32_t)L_43) <= ((int32_t)((int32_t)9))))
		{
			goto IL_00e0;
		}
	}
	{
		// encountered[posKey] = 0;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_44 = V_1;
		String_t* L_45 = V_8;
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_44, L_45, 0, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// ans[rowIdx][colIdx] = 0;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_46 = V_0;
		int32_t L_47 = V_2;
		int32_t L_48 = L_47;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		int32_t L_50 = V_6;
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50), (int32_t)0);
		// colIdx -= 1;
		int32_t L_51 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		// goBack = true;
		V_3 = (bool)1;
		goto IL_00f2;
	}

IL_00e0:
	{
		// encountered[posKey] = guess;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_52 = V_1;
		String_t* L_53 = V_8;
		int32_t L_54 = V_9;
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_52, L_53, L_54, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// colIdx += 1;
		int32_t L_55 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		// goBack = false;
		V_3 = (bool)0;
	}

IL_00f2:
	{
		// while (colIdx < cRow.Length) {
		int32_t L_56 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_5;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_0032;
		}
	}

IL_00fd:
	{
		// if (colIdx < 0) {
		int32_t L_58 = V_6;
		if ((((int32_t)L_58) >= ((int32_t)0)))
		{
			goto IL_010b;
		}
	}
	{
		// rowIdx -= 1;
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_59, 1));
		// rowBack = true;
		V_4 = (bool)1;
		goto IL_0112;
	}

IL_010b:
	{
		// rowIdx += 1;
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		// rowBack = false;
		V_4 = (bool)0;
	}

IL_0112:
	{
		// while (rowIdx < ans.Length) {
		int32_t L_61 = V_2;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_62 = V_0;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// return ans;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_63 = V_0;
		return L_63;
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
// Conversion methods for marshalling of: BoardInternal.Move
IL2CPP_EXTERN_C void Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshal_pinvoke(const Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695& unmarshaled, Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CposU3Ek__BackingField_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___U3CposU3Ek__BackingField_0);
	marshaled.___U3CvalU3Ek__BackingField_1 = unmarshaled.___U3CvalU3Ek__BackingField_1;
}
IL2CPP_EXTERN_C void Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshal_pinvoke_back(const Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshaled_pinvoke& marshaled, Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___U3CposU3Ek__BackingField_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___U3CposU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CposU3Ek__BackingField_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___U3CposU3Ek__BackingField_0));
	int32_t unmarshaledU3CvalU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CvalU3Ek__BackingField_temp_1 = marshaled.___U3CvalU3Ek__BackingField_1;
	unmarshaled.___U3CvalU3Ek__BackingField_1 = unmarshaledU3CvalU3Ek__BackingField_temp_1;
}
// Conversion method for clean up from marshalling of: BoardInternal.Move
IL2CPP_EXTERN_C void Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshal_pinvoke_cleanup(Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CposU3Ek__BackingField_0);
	marshaled.___U3CposU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: BoardInternal.Move
IL2CPP_EXTERN_C void Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshal_com(const Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695& unmarshaled, Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshaled_com& marshaled)
{
	marshaled.___U3CposU3Ek__BackingField_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___U3CposU3Ek__BackingField_0);
	marshaled.___U3CvalU3Ek__BackingField_1 = unmarshaled.___U3CvalU3Ek__BackingField_1;
}
IL2CPP_EXTERN_C void Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshal_com_back(const Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshaled_com& marshaled, Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___U3CposU3Ek__BackingField_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___U3CposU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CposU3Ek__BackingField_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___U3CposU3Ek__BackingField_0));
	int32_t unmarshaledU3CvalU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CvalU3Ek__BackingField_temp_1 = marshaled.___U3CvalU3Ek__BackingField_1;
	unmarshaled.___U3CvalU3Ek__BackingField_1 = unmarshaledU3CvalU3Ek__BackingField_temp_1;
}
// Conversion method for clean up from marshalling of: BoardInternal.Move
IL2CPP_EXTERN_C void Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshal_com_cleanup(Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CposU3Ek__BackingField_0);
	marshaled.___U3CposU3Ek__BackingField_0 = NULL;
}
// System.Int32[] BoardInternal.Move::get_pos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Move_get_pos_mBE2CC99EBD50305821AA7CCC749358AC2C175D31 (Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695* __this, const RuntimeMethod* method) 
{
	{
		// public int[] pos { get; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___U3CposU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Move_get_pos_mBE2CC99EBD50305821AA7CCC749358AC2C175D31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695*>(__this + _offset);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* _returnValue;
	_returnValue = Move_get_pos_mBE2CC99EBD50305821AA7CCC749358AC2C175D31_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 BoardInternal.Move::get_val()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Move_get_val_m30B95B0E299E6DACB04F34E00EB48D3474859415 (Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695* __this, const RuntimeMethod* method) 
{
	{
		// public int val { get; }
		int32_t L_0 = __this->___U3CvalU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Move_get_val_m30B95B0E299E6DACB04F34E00EB48D3474859415_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Move_get_val_m30B95B0E299E6DACB04F34E00EB48D3474859415_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void BoardInternal.Move::.ctor(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move__ctor_mD758EC896129BD9902B332EEF44AA467DAE19752 (Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pos0, int32_t ____val1, const RuntimeMethod* method) 
{
	{
		// pos = _pos;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ____pos0;
		__this->___U3CposU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CposU3Ek__BackingField_0), (void*)L_0);
		// val = _val;
		int32_t L_1 = ____val1;
		__this->___U3CvalU3Ek__BackingField_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Move__ctor_mD758EC896129BD9902B332EEF44AA467DAE19752_AdjustorThunk (RuntimeObject* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pos0, int32_t ____val1, const RuntimeMethod* method)
{
	Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695*>(__this + _offset);
	Move__ctor_mD758EC896129BD9902B332EEF44AA467DAE19752(_thisAdjusted, ____pos0, ____val1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoardInternal.Board::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board__ctor_mE580ECF93F5B9805F2DAF0F364EDFA2F8D418A19 (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, String_t* ___boardStr0, const RuntimeMethod* method) 
{
	{
		// public Board(string boardStr = null) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (boardStr != null) {
		String_t* L_0 = ___boardStr0;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// board = ParseBoardString(boardStr);
		String_t* L_1 = ___boardStr0;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_2;
		L_2 = Board_ParseBoardString_mDCA097A072036DEEF620271CEDC5D66D3BA6F83B(__this, L_1, NULL);
		__this->___board_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___board_1), (void*)L_2);
		// unchangedBoard = ParseBoardString(boardStr);
		String_t* L_3 = ___boardStr0;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4;
		L_4 = Board_ParseBoardString_mDCA097A072036DEEF620271CEDC5D66D3BA6F83B(__this, L_3, NULL);
		__this->___unchangedBoard_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unchangedBoard_0), (void*)L_4);
		return;
	}

IL_0024:
	{
		// board = ConstructEmptyBoard();
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_5;
		L_5 = Board_ConstructEmptyBoard_mBA044AEC1DB9B65AD1DB8DBF299E1618BBFCC031(__this, NULL);
		__this->___board_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___board_1), (void*)L_5);
		// unchangedBoard = ConstructEmptyBoard();
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_6;
		L_6 = Board_ConstructEmptyBoard_mBA044AEC1DB9B65AD1DB8DBF299E1618BBFCC031(__this, NULL);
		__this->___unchangedBoard_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unchangedBoard_0), (void*)L_6);
		// }
		return;
	}
}
// System.String BoardInternal.Board::PrintBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Board_PrintBoard_mB7220576E141292D8A3AA84972D4A7589B2B671F (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// string output = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int row = 0; row < 9; row++) {
		V_1 = 0;
		goto IL_0082;
	}

IL_000a:
	{
		// string curr = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int column = 0; column < 9; column++) {
		V_3 = 0;
		goto IL_0055;
	}

IL_0014:
	{
		// curr += board[row][column].ToString();
		String_t* L_0 = V_2;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = __this->___board_1;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = V_3;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5))), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, L_6, NULL);
		V_2 = L_7;
		// curr += " ";
		String_t* L_8 = V_2;
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_2 = L_9;
		// if ((column + 1) % 3 == 0 && column < 8) {
		int32_t L_10 = V_3;
		if (((int32_t)(((int32_t)il2cpp_codegen_add(L_10, 1))%3)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) >= ((int32_t)8)))
		{
			goto IL_0051;
		}
	}
	{
		// curr += "| ";
		String_t* L_12 = V_2;
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_12, _stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D, NULL);
		V_2 = L_13;
	}

IL_0051:
	{
		// for (int column = 0; column < 9; column++) {
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0055:
	{
		// for (int column = 0; column < 9; column++) {
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)9))))
		{
			goto IL_0014;
		}
	}
	{
		// output += curr + "\n";
		String_t* L_16 = V_0;
		String_t* L_17 = V_2;
		String_t* L_18;
		L_18 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_16, L_17, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_0 = L_18;
		// if ((row + 1) % 3 == 0 && row < 8) {
		int32_t L_19 = V_1;
		if (((int32_t)(((int32_t)il2cpp_codegen_add(L_19, 1))%3)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		// output += "\n";
		String_t* L_21 = V_0;
		String_t* L_22;
		L_22 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_21, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_0 = L_22;
	}

IL_007e:
	{
		// for (int row = 0; row < 9; row++) {
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0082:
	{
		// for (int row = 0; row < 9; row++) {
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)9))))
		{
			goto IL_000a;
		}
	}
	{
		// return output;
		String_t* L_25 = V_0;
		return L_25;
	}
}
// System.Boolean BoardInternal.Board::MakeMove(BoardInternal.Move)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_MakeMove_m4460CF126A64D6908497C88D86CC6E783341D8A4 (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695 ___move0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int col = move.pos[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = Move_get_pos_mBE2CC99EBD50305821AA7CCC749358AC2C175D31_inline((&___move0), NULL);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		// int row = move.pos[1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = Move_get_pos_mBE2CC99EBD50305821AA7CCC749358AC2C175D31_inline((&___move0), NULL);
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// int temp = board[row][col];
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_6 = __this->___board_1;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// if (unchangedBoard[row][col] != 0) {
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_13 = __this->___unchangedBoard_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		if (!L_19)
		{
			goto IL_002d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002d:
	{
		// board[row][col] = move.val;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_20 = __this->___board_1;
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = Move_get_val_m30B95B0E299E6DACB04F34E00EB48D3474859415_inline((&___move0), NULL);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (int32_t)L_25);
		// if (!IsValidMove(move.pos)) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26;
		L_26 = Move_get_pos_mBE2CC99EBD50305821AA7CCC749358AC2C175D31_inline((&___move0), NULL);
		bool L_27;
		L_27 = Board_IsValidMove_m726375C87569BEAF4554091D7346A0D960922470(__this, L_26, NULL);
		if (L_27)
		{
			goto IL_005a;
		}
	}
	{
		// board[row][col] = temp;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_28 = __this->___board_1;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = V_0;
		int32_t L_33 = V_2;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)L_33);
		// return false;
		return (bool)0;
	}

IL_005a:
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32[][] BoardInternal.Board::ConstructEmptyBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* Board_ConstructEmptyBoard_mBA044AEC1DB9B65AD1DB8DBF299E1618BBFCC031 (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// int[][] output = new int[9][];
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_0 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		V_0 = L_0;
		// for (int i = 0; i < 9; i++) {
		V_1 = 0;
		goto IL_001a;
	}

IL_000c:
	{
		// output[i] = new int[9];
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = V_0;
		int32_t L_2 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_3);
		// for (int i = 0; i < 9; i++) {
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < 9; i++) {
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_000c;
		}
	}
	{
		// return output;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_6 = V_0;
		return L_6;
	}
}
// System.Int32[][] BoardInternal.Board::ParseBoardString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* Board_ParseBoardString_mDCA097A072036DEEF620271CEDC5D66D3BA6F83B (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, String_t* ___boardStr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int[][] output = ConstructEmptyBoard();
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_0;
		L_0 = Board_ConstructEmptyBoard_mBA044AEC1DB9B65AD1DB8DBF299E1618BBFCC031(__this, NULL);
		V_0 = L_0;
		// int row = 0;
		V_1 = 0;
		// int col = 0;
		V_2 = 0;
		// for (int i = 0; i < boardStr.Length; i++) {
		V_3 = 0;
		goto IL_004f;
	}

IL_000f:
	{
		// if (col >= 9) {
		int32_t L_1 = V_2;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)9))))
		{
			goto IL_001a;
		}
	}
	{
		// col = 0;
		V_2 = 0;
		// row += 1;
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_001a:
	{
		// int curr = 0;
		V_4 = 0;
		// if (char.IsDigit(boardStr[i])) {
		String_t* L_3 = ___boardStr0;
		int32_t L_4 = V_3;
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Char_IsDigit_mC98DAF907860EFB7D26C3E126D80AD3A2CE72715(L_5, NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// curr = (int)char.GetNumericValue(boardStr[i]);
		String_t* L_7 = ___boardStr0;
		int32_t L_8 = V_3;
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = Char_GetNumericValue_mC6F88D2867A2D6EAFB9399277E2A5406CDBB0D96(L_9, NULL);
		V_4 = il2cpp_codegen_cast_double_to_int<int32_t>(L_10);
	}

IL_003a:
	{
	}
	try
	{// begin try (depth: 1)
		// output[row][col] = curr;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = V_2;
		int32_t L_16 = V_4;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (int32_t)L_16);
		// } catch {
		goto IL_0047;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0044;
		}
		throw e;
	}

CATCH_0044:
	{// begin catch(System.Object)
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0047;
	}// end catch (depth: 1)

IL_0047:
	{
		// col += 1;
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		// for (int i = 0; i < boardStr.Length; i++) {
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < boardStr.Length; i++) {
		int32_t L_19 = V_3;
		String_t* L_20 = ___boardStr0;
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_000f;
		}
	}
	{
		// return output;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_22 = V_0;
		return L_22;
	}
}
// System.Boolean BoardInternal.Board::IsValidMove(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_IsValidMove_m726375C87569BEAF4554091D7346A0D960922470 (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___movePos0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// int colIdx = movePos[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___movePos0;
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		// int rowIdx = movePos[1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___movePos0;
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// int[] squarePos = PosToSquareIdx(movePos);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___movePos0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = Board_PosToSquareIdx_m1F514C56844638F491BC064A709C53B34F36AF42(L_6, NULL);
		V_2 = L_7;
		// int[] columnArr = GetColumnArr(colIdx);
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9;
		L_9 = Board_GetColumnArr_m9D9C326073434E94A5B24A49ACFA28CD111000BD(__this, L_8, NULL);
		// int[] rowArr = board[rowIdx];
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_10 = __this->___board_1;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		// int[] squareArr = GetSquareArr(squarePos);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15;
		L_15 = Board_GetSquareArr_m446D892F7CC051DB20FE4EAC81ACF006245C6DBA(__this, L_14, NULL);
		V_4 = L_15;
		// bool validCol = IsValidArr(columnArr);
		bool L_16;
		L_16 = Board_IsValidArr_m92075A27B35D6EBFAD594B8A4F0110D319AFEE58(L_9, NULL);
		// bool validRow = IsValidArr(rowArr);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		bool L_18;
		L_18 = Board_IsValidArr_m92075A27B35D6EBFAD594B8A4F0110D319AFEE58(L_17, NULL);
		V_5 = L_18;
		// bool validSquare = IsValidArr(squareArr);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_4;
		bool L_20;
		L_20 = Board_IsValidArr_m92075A27B35D6EBFAD594B8A4F0110D319AFEE58(L_19, NULL);
		V_6 = L_20;
		// return (validCol && validRow && validSquare);
		bool L_21 = V_5;
		bool L_22 = V_6;
		return (bool)((int32_t)(((int32_t)((int32_t)L_16&(int32_t)L_21))&(int32_t)L_22));
	}
}
// System.Int32[] BoardInternal.Board::PosToSquareIdx(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Board_PosToSquareIdx_m1F514C56844638F491BC064A709C53B34F36AF42 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int squareSize = 3;
		V_0 = 3;
		// int col = pos[0]; // x
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___pos0;
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_1 = L_2;
		// int row = pos[1]; // y
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___pos0;
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// return new int[] {
		//     col / squareSize,
		//     row / squareSize
		// };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(L_8/L_9)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_7;
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(L_11/L_12)));
		return L_10;
	}
}
// System.Int32[] BoardInternal.Board::GetColumnArr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Board_GetColumnArr_m9D9C326073434E94A5B24A49ACFA28CD111000BD (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, int32_t ___colIdx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int[][] nums = board;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_0 = __this->___board_1;
		V_0 = L_0;
		// int[] output = new int[nums.Length];
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		V_1 = L_2;
		// for (int i = 0; i < nums.Length; i++) {
		V_2 = 0;
		goto IL_0020;
	}

IL_0014:
	{
		// output[i] = nums[i][colIdx];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		int32_t L_4 = V_2;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = ___colIdx0;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_11);
		// for (int i = 0; i < nums.Length; i++) {
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0020:
	{
		// for (int i = 0; i < nums.Length; i++) {
		int32_t L_13 = V_2;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		// return output;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_1;
		return L_15;
	}
}
// System.Int32[] BoardInternal.Board::GetSquareArr(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Board_GetSquareArr_m446D892F7CC051DB20FE4EAC81ACF006245C6DBA (Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___squarePos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int[][] nums = board;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_0 = __this->___board_1;
		V_0 = L_0;
		// int[] output = new int[nums.Length];
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		V_1 = L_2;
		// int squareSize = 3;
		V_2 = 3;
		// int col = squarePos[0] * squareSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___squarePos0;
		int32_t L_4 = 0;
		int32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// int row = squarePos[1] * squareSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___squarePos0;
		int32_t L_8 = 1;
		int32_t L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_9, L_10));
		// int currIdx = 0;
		V_5 = 0;
		// for (int i = 0; i < squareSize; i++) {
		V_6 = 0;
		goto IL_005b;
	}

IL_0027:
	{
		// for (int b = 0; b < squareSize; b++) {
		V_7 = 0;
		goto IL_0046;
	}

IL_002c:
	{
		// output[currIdx] = nums[row][col];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		int32_t L_12 = V_5;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_13 = V_0;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_19);
		// col += 1;
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		// currIdx += 1;
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		// for (int b = 0; b < squareSize; b++) {
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0046:
	{
		// for (int b = 0; b < squareSize; b++) {
		int32_t L_23 = V_7;
		int32_t L_24 = V_2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_002c;
		}
	}
	{
		// col -= (squareSize);
		int32_t L_25 = V_3;
		int32_t L_26 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
		// row += 1;
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		// for (int i = 0; i < squareSize; i++) {
		int32_t L_28 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_005b:
	{
		// for (int i = 0; i < squareSize; i++) {
		int32_t L_29 = V_6;
		int32_t L_30 = V_2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0027;
		}
	}
	{
		// return output;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_1;
		return L_31;
	}
}
// System.Boolean BoardInternal.Board::IsValidArr(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Board_IsValidArr_m92075A27B35D6EBFAD594B8A4F0110D319AFEE58 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___arr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int[] nums = new int[arr.Length + 1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___arr0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		// for (int i = 0; i < arr.Length; i++) {
		V_1 = 0;
		goto IL_002f;
	}

IL_000f:
	{
		// int curr = arr[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___arr0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (curr <= 0) {
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		// else if (nums[curr] > 0) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001f:
	{
		// nums[curr] += 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t* L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)));
		int32_t L_14 = *((int32_t*)L_13);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_16 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___arr0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* GameBoardInternal_get_playerBoard_m1B3FE04B47C07F1FCEBE17DC198605CBE209E5E1_inline (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, const RuntimeMethod* method) 
{
	{
		// public Board playerBoard { get; private set; }
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_0 = __this->___U3CplayerBoardU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameBoardInternal_set_playerBoard_mAA380CDFF3BBEF921A0704E4CABBA8BA2CA653FE_inline (GameBoardInternal_t73E90BCABB5E36B17EE689EFE3AA2CFBE947BC14* __this, Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* ___value0, const RuntimeMethod* method) 
{
	{
		// public Board playerBoard { get; private set; }
		Board_tE384B3E462DD444E2927DFFFD4BE11B4A53CD184* L_0 = ___value0;
		__this->___U3CplayerBoardU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerBoardU3Ek__BackingField_4), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// public ColorBlock        colors            { get { return m_Colors; } set { if (SetPropertyUtility.SetStruct(ref m_Colors, value))            OnSetProperty(); } }
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_0 = __this->___m_Colors_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorBlock_get_highlightedColor_m4D1A3D268CB00B351F56934F7F244DBC68855301_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, const RuntimeMethod* method) 
{
	{
		// public Color highlightedColor  { get { return m_HighlightedColor; } set { m_HighlightedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_HighlightedColor_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color highlightedColor  { get { return m_HighlightedColor; } set { m_HighlightedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_HighlightedColor_1 = L_0;
		// public Color highlightedColor  { get { return m_HighlightedColor; } set { m_HighlightedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Move_get_pos_mBE2CC99EBD50305821AA7CCC749358AC2C175D31_inline (Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695* __this, const RuntimeMethod* method) 
{
	{
		// public int[] pos { get; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___U3CposU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Move_get_val_m30B95B0E299E6DACB04F34E00EB48D3474859415_inline (Move_t6CA6418496B64DBB8D82B6BAA43217362F74E695* __this, const RuntimeMethod* method) 
{
	{
		// public int val { get; }
		int32_t L_0 = __this->___U3CvalU3Ek__BackingField_1;
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
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
