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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// AnswerCollision[]
struct AnswerCollisionU5BU5D_t9370F9E05D9A10E90B22652567D7A5AE29B4785D;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
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
// AnswerCollision
struct AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CreatureBehaviour
struct CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD;
// DragBehaviour
struct DragBehaviour_t4A5839FDFD6CCBDE93585C5EAFA1942284ABA71F;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HardGameManager
struct HardGameManager_t642652200B190D19A5C457506274E058CB201711;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// MainMenuBehaviour
struct MainMenuBehaviour_t59408D8CD57E03D8875505AD565E1DDE6F638261;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
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
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24B7D84EF41342E937438C448359C39D2739CDB3;
IL2CPP_EXTERN_C String_t* _stringLiteral7C53468DBF252F5E40B56B710CE7E338B68FE5CC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisAnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0_mB2C1AA2FC6EB7AE9FB05857A4E4BAC618D963C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;

struct AnswerCollisionU5BU5D_t9370F9E05D9A10E90B22652567D7A5AE29B4785D;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries_1;
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
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
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

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___s_emptyArray_5;
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

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
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

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AnswerCollision
struct AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 AnswerCollision::childId
	int32_t ___childId_4;
	// System.Int32 AnswerCollision::parentId
	int32_t ___parentId_5;
	// System.Boolean AnswerCollision::hasAnswer
	bool ___hasAnswer_6;
	// System.Boolean AnswerCollision::doubleAnswer
	bool ___doubleAnswer_7;
	// GameManager AnswerCollision::gm
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gm_8;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// CreatureBehaviour
struct CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer> CreatureBehaviour::sprites
	List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* ___sprites_4;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> CreatureBehaviour::aTraits
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___aTraits_5;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> CreatureBehaviour::bTraits
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___bTraits_6;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> CreatureBehaviour::bodyBase
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___bodyBase_7;
	// System.Int32 CreatureBehaviour::id
	int32_t ___id_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> CreatureBehaviour::creatureTraits
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___creatureTraits_9;
};

// DragBehaviour
struct DragBehaviour_t4A5839FDFD6CCBDE93585C5EAFA1942284ABA71F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean DragBehaviour::isDragging
	bool ___isDragging_4;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameManager::creaturePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___creaturePrefab_4;
	// UnityEngine.GameObject GameManager::unitPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___unitPrefab_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform> GameManager::familyTree
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___familyTree_6;
	// System.Collections.Generic.List`1<UnityEngine.Transform> GameManager::childSpawns
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___childSpawns_7;
	// UnityEngine.GameObject GameManager::winText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winText_8;
	// UnityEngine.GameObject GameManager::loseText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loseText_9;
	// UnityEngine.GameObject GameManager::submitButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___submitButton_10;
	// UnityEngine.GameObject GameManager::endGamePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___endGamePanel_11;
	// UnityEngine.GameObject GameManager::nextButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextButton_12;
	// System.Collections.Generic.List`1<System.Int32> GameManager::numOfUnits
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___numOfUnits_13;
	// System.Int32 GameManager::NumOfSpriteGroups
	int32_t ___NumOfSpriteGroups_14;
	// System.Int32 GameManager::round
	int32_t ___round_16;
	// System.Collections.Generic.HashSet`1<System.Int32> GameManager::spawnCheck
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___spawnCheck_17;
	// System.Int32 GameManager::unitCheck
	int32_t ___unitCheck_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::toDeleteOnReset
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___toDeleteOnReset_19;
	// System.Collections.Generic.List`1<System.Int32> GameManager::pair21
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___pair21_20;
	// System.Collections.Generic.List`1<System.Int32> GameManager::pair22
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___pair22_21;
	// System.Collections.Generic.List`1<System.Int32> GameManager::pair23
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___pair23_22;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// System.Int32 GameManager::spriteGroupType
	int32_t ___spriteGroupType_15;
};

// MainMenuBehaviour
struct MainMenuBehaviour_t59408D8CD57E03D8875505AD565E1DDE6F638261  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MainMenuBehaviour::howToPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___howToPanel_4;
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

// HardGameManager
struct HardGameManager_t642652200B190D19A5C457506274E058CB201711  : public GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6
{
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
// AnswerCollision[]
struct AnswerCollisionU5BU5D_t9370F9E05D9A10E90B22652567D7A5AE29B4785D  : public RuntimeArray
{
	ALIGN_FIELD (8) AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* m_Items[1];

	inline AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* value)
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF_gshared (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_gshared_inline (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_gshared_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_gshared_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029_gshared (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CreatureBehaviour>()
inline CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 CreatureBehaviour::GetId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CreatureBehaviour_GetId_m19CF6238229E602731EAAFD2C73E9EF7513D6765_inline (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1 (const RuntimeMethod* method)
{
	return ((  GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void GameManager::UpdateUnitCheck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateUnitCheck_m460F181F96136CE5613FE6F5FA6CBD3155A1DC20 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void CreatureBehaviour::SetSprites(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBehaviour_SetSprites_m125CF9B0BCBC3179B62706A4F1124A03C7948288 (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, bool ___isHard0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
inline Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
inline void Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB*, const RuntimeMethod*))Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
inline KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_inline (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 (*) (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB*, const RuntimeMethod*))Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189*, const RuntimeMethod*))KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::get_Item(System.Int32)
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020 (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189*, const RuntimeMethod*))KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029 (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB*, const RuntimeMethod*))Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::.ctor()
inline void List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::.ctor()
inline void List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void GameManager::CreateUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CreateUnits_mCDAC5A3857DBE79B937A67BEC224318AE9ADC6FC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Void CreatureBehaviour::SetTraits(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBehaviour_SetTraits_mDAFD73390C82F1F5CB9D6D5FDB07737814FEDF0B (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___e4, bool ___isHard5, const RuntimeMethod* method) ;
// System.Void CreatureBehaviour::SetId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreatureBehaviour_SetId_m0571520D652361241F9F6794AC11BDC80B3214AC_inline (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, int32_t ___i0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<CreatureBehaviour>()
inline CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> CreatureBehaviour::GetTraits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* CreatureBehaviour_GetTraits_mAA199F2978193828A4B34D2753FD2593ECCA157E_inline (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
inline bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared)(__this, ___item0, method);
}
// System.Void CreatureBehaviour::SetTraits(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBehaviour_SetTraits_m714BEA1E6200633112EAC43D5BB573DB7DD73372 (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___traits0, bool ___isHard1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<AnswerCollision>()
inline AnswerCollisionU5BU5D_t9370F9E05D9A10E90B22652567D7A5AE29B4785D* Object_FindObjectsOfType_TisAnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0_mB2C1AA2FC6EB7AE9FB05857A4E4BAC618D963C66 (const RuntimeMethod* method)
{
	return ((  AnswerCollisionU5BU5D_t9370F9E05D9A10E90B22652567D7A5AE29B4785D* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Boolean AnswerCollision::GetAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnswerCollision_GetAnswer_mA329DCBA233A280DF7B12CD10B5FE1278A2661B3 (AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
inline void HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
inline void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void AnswerCollision::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerCollision_Start_m42FD453E129F35C6B063E859701C493DA436D224 (AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parentId = transform.parent.transform.GetChild(0).gameObject.GetComponent<CreatureBehaviour>().GetId(); //disgusting
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_5;
		L_5 = GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525(L_4, GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		int32_t L_6;
		L_6 = CreatureBehaviour_GetId_m19CF6238229E602731EAAFD2C73E9EF7513D6765_inline(L_5, NULL);
		__this->___parentId_5 = L_6;
		// gm = FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7;
		L_7 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		__this->___gm_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gm_8), (void*)L_7);
		// }
		return;
	}
}
// System.Void AnswerCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerCollision_OnTriggerEnter2D_m6802FFEF1546BDBE545B2C898ECEF8DB0D643D73 (AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!hasAnswer)
		bool L_0 = __this->___hasAnswer_6;
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		// hasAnswer = true;
		__this->___hasAnswer_6 = (bool)1;
		// gm.UpdateUnitCheck(1);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___gm_8;
		GameManager_UpdateUnitCheck_m460F181F96136CE5613FE6F5FA6CBD3155A1DC20(L_1, 1, NULL);
		// childId = col.gameObject.GetComponent<CreatureBehaviour>().GetId();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2 = ___col0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_4;
		L_4 = GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525(L_3, GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		int32_t L_5;
		L_5 = CreatureBehaviour_GetId_m19CF6238229E602731EAAFD2C73E9EF7513D6765_inline(L_4, NULL);
		__this->___childId_4 = L_5;
		return;
	}

IL_0032:
	{
		// doubleAnswer = true;
		__this->___doubleAnswer_7 = (bool)1;
		// }
		return;
	}
}
// System.Void AnswerCollision::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerCollision_OnTriggerExit2D_mE45478586C9CA32C4CBBECD1377A1D9EA2C25D58 (AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___col0, const RuntimeMethod* method) 
{
	{
		// if (!doubleAnswer)
		bool L_0 = __this->___doubleAnswer_7;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// hasAnswer = false;
		__this->___hasAnswer_6 = (bool)0;
		// gm.UpdateUnitCheck(-1);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___gm_8;
		GameManager_UpdateUnitCheck_m460F181F96136CE5613FE6F5FA6CBD3155A1DC20(L_1, (-1), NULL);
		return;
	}

IL_001c:
	{
		// doubleAnswer = false;
		__this->___doubleAnswer_7 = (bool)0;
		// }
		return;
	}
}
// System.Boolean AnswerCollision::GetAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnswerCollision_GetAnswer_mA329DCBA233A280DF7B12CD10B5FE1278A2661B3 (AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* __this, const RuntimeMethod* method) 
{
	{
		// return childId == parentId;
		int32_t L_0 = __this->___childId_4;
		int32_t L_1 = __this->___parentId_5;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Void AnswerCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerCollision__ctor_mDAC4B8B3402ADDEDFD16CEB0A588BBEB4B225DFF (AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* __this, const RuntimeMethod* method) 
{
	{
		// private int childId = -1;
		__this->___childId_4 = (-1);
		// private int parentId = -1;
		__this->___parentId_5 = (-1);
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
// System.Void CreatureBehaviour::SetTraits(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBehaviour_SetTraits_mDAFD73390C82F1F5CB9D6D5FDB07737814FEDF0B (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___e4, bool ___isHard5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// creatureTraits.Add(0, a);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = __this->___creatureTraits_9;
		int32_t L_1 = ___a0;
		Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_0, 0, L_1, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
		// creatureTraits.Add(1, b);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_2 = __this->___creatureTraits_9;
		int32_t L_3 = ___b1;
		Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_2, 1, L_3, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
		// creatureTraits.Add(2, c);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_4 = __this->___creatureTraits_9;
		int32_t L_5 = ___c2;
		Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_4, 2, L_5, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
		// creatureTraits.Add(3, d);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_6 = __this->___creatureTraits_9;
		int32_t L_7 = ___d3;
		Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_6, 3, L_7, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
		// creatureTraits.Add(4, e);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_8 = __this->___creatureTraits_9;
		int32_t L_9 = ___e4;
		Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_8, 4, L_9, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
		// SetSprites(isHard);
		bool L_10 = ___isHard5;
		CreatureBehaviour_SetSprites_m125CF9B0BCBC3179B62706A4F1124A03C7948288(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void CreatureBehaviour::SetTraits(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBehaviour_SetTraits_m714BEA1E6200633112EAC43D5BB573DB7DD73372 (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___traits0, bool ___isHard1, const RuntimeMethod* method) 
{
	{
		// creatureTraits = traits;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = ___traits0;
		__this->___creatureTraits_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___creatureTraits_9), (void*)L_0);
		// SetSprites(isHard);
		bool L_1 = ___isHard1;
		CreatureBehaviour_SetSprites_m125CF9B0BCBC3179B62706A4F1124A03C7948288(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> CreatureBehaviour::GetTraits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* CreatureBehaviour_GetTraits_mAA199F2978193828A4B34D2753FD2593ECCA157E (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, const RuntimeMethod* method) 
{
	{
		// return creatureTraits;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = __this->___creatureTraits_9;
		return L_0;
	}
}
// System.Void CreatureBehaviour::SetSprites(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBehaviour_SetSprites_m125CF9B0BCBC3179B62706A4F1124A03C7948288 (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, bool ___isHard0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* G_B5_0 = NULL;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* G_B4_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B6_0 = NULL;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* G_B6_1 = NULL;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* G_B9_0 = NULL;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* G_B8_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B10_0 = NULL;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* G_B10_1 = NULL;
	{
		// foreach (KeyValuePair<int, int> trait in creatureTraits)
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = __this->___creatureTraits_9;
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_1;
		L_1 = Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568(L_0, Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00da:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF((&V_0), Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00cc_1;
			}

IL_0011_1:
			{
				// foreach (KeyValuePair<int, int> trait in creatureTraits)
				KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 L_2;
				L_2 = Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_inline((&V_0), Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_RuntimeMethod_var);
				V_1 = L_2;
				// if (!isHard)
				bool L_3 = ___isHard0;
				if (L_3)
				{
					goto IL_0075_1;
				}
			}
			{
				// sprites[trait.Key].sprite = trait.Value == 1 ? aTraits[trait.Key + (GameManager.spriteGroupType * 5)] : bTraits[trait.Key + (GameManager.spriteGroupType * 5)];
				List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_4 = __this->___sprites_4;
				int32_t L_5;
				L_5 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_1), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
				L_6 = List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020(L_4, L_5, List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var);
				int32_t L_7;
				L_7 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&V_1), KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
				G_B4_0 = L_6;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					G_B5_0 = L_6;
					goto IL_0054_1;
				}
			}
			{
				List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_8 = __this->___bTraits_6;
				int32_t L_9;
				L_9 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_1), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_10 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___spriteGroupType_15;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11;
				L_11 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_8, ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)il2cpp_codegen_multiply(L_10, 5)))), List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
				G_B6_0 = L_11;
				G_B6_1 = G_B4_0;
				goto IL_006e_1;
			}

IL_0054_1:
			{
				List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_12 = __this->___aTraits_5;
				int32_t L_13;
				L_13 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_1), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_14 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___spriteGroupType_15;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15;
				L_15 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_12, ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)il2cpp_codegen_multiply(L_14, 5)))), List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
				G_B6_0 = L_15;
				G_B6_1 = G_B5_0;
			}

IL_006e_1:
			{
				SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(G_B6_1, G_B6_0, NULL);
				goto IL_00cc_1;
			}

IL_0075_1:
			{
				// sprites[trait.Key].sprite = trait.Value == 3 ? bTraits[trait.Key + (GameManager.spriteGroupType * 5)] : aTraits[trait.Key + (GameManager.spriteGroupType * 5)];
				List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_16 = __this->___sprites_4;
				int32_t L_17;
				L_17 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_1), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18;
				L_18 = List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020(L_16, L_17, List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var);
				int32_t L_19;
				L_19 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&V_1), KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
				G_B8_0 = L_18;
				if ((((int32_t)L_19) == ((int32_t)3)))
				{
					G_B9_0 = L_18;
					goto IL_00ad_1;
				}
			}
			{
				List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_20 = __this->___aTraits_5;
				int32_t L_21;
				L_21 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_1), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_22 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___spriteGroupType_15;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_23;
				L_23 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_20, ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_multiply(L_22, 5)))), List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
				G_B10_0 = L_23;
				G_B10_1 = G_B8_0;
				goto IL_00c7_1;
			}

IL_00ad_1:
			{
				List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_24 = __this->___bTraits_6;
				int32_t L_25;
				L_25 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_1), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_26 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___spriteGroupType_15;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_27;
				L_27 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_24, ((int32_t)il2cpp_codegen_add(L_25, ((int32_t)il2cpp_codegen_multiply(L_26, 5)))), List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
				G_B10_0 = L_27;
				G_B10_1 = G_B9_0;
			}

IL_00c7_1:
			{
				SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(G_B10_1, G_B10_0, NULL);
			}

IL_00cc_1:
			{
				// foreach (KeyValuePair<int, int> trait in creatureTraits)
				bool L_28;
				L_28 = Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029((&V_0), Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_00e8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e8:
	{
		// gameObject.GetComponent<SpriteRenderer>().sprite = bodyBase[GameManager.spriteGroupType];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_30;
		L_30 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_29, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_31 = __this->___bodyBase_7;
		int32_t L_32 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___spriteGroupType_15;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_33;
		L_33 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_31, L_32, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_30, L_33, NULL);
		// }
		return;
	}
}
// System.Int32 CreatureBehaviour::GetId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreatureBehaviour_GetId_m19CF6238229E602731EAAFD2C73E9EF7513D6765 (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, const RuntimeMethod* method) 
{
	{
		// return id;
		int32_t L_0 = __this->___id_8;
		return L_0;
	}
}
// System.Void CreatureBehaviour::SetId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBehaviour_SetId_m0571520D652361241F9F6794AC11BDC80B3214AC (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		// id = i;
		int32_t L_0 = ___i0;
		__this->___id_8 = L_0;
		// }
		return;
	}
}
// System.Void CreatureBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBehaviour__ctor_m887259CFFB3BFBFD49A25564B558A5B59A3C3F9A (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<SpriteRenderer> sprites = new List<SpriteRenderer>();
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_0 = (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*)il2cpp_codegen_object_new(List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_il2cpp_TypeInfo_var);
		List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA(L_0, List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA_RuntimeMethod_var);
		__this->___sprites_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sprites_4), (void*)L_0);
		// public List<Sprite> aTraits = new List<Sprite>(); //1 - 2 : 2 being ab instead of just aa
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_1 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_1, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___aTraits_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aTraits_5), (void*)L_1);
		// public List<Sprite> bTraits = new List<Sprite>(); //3
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_2 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_2, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___bTraits_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bTraits_6), (void*)L_2);
		// public List<Sprite> bodyBase = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_3 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_3, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___bodyBase_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bodyBase_7), (void*)L_3);
		// public int id = -1;
		__this->___id_8 = (-1);
		// private Dictionary<int, int> creatureTraits = new Dictionary<int, int>();
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_4 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F(L_4, Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		__this->___creatureTraits_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___creatureTraits_9), (void*)L_4);
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
// System.Void DragBehaviour::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragBehaviour_OnMouseDown_mFFA1EAF3A91E218F0291641C1451CE8E4DC60733 (DragBehaviour_t4A5839FDFD6CCBDE93585C5EAFA1942284ABA71F* __this, const RuntimeMethod* method) 
{
	{
		// isDragging = true;
		__this->___isDragging_4 = (bool)1;
		// }
		return;
	}
}
// System.Void DragBehaviour::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragBehaviour_OnMouseUp_m755B6E9FB75D47487CB318CCE06269D406F76F09 (DragBehaviour_t4A5839FDFD6CCBDE93585C5EAFA1942284ABA71F* __this, const RuntimeMethod* method) 
{
	{
		// isDragging = false;
		__this->___isDragging_4 = (bool)0;
		// }
		return;
	}
}
// System.Void DragBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragBehaviour_Update_mE0C8CEF4F09473EDE6EF3A68B24D673357E86CC8 (DragBehaviour_t4A5839FDFD6CCBDE93585C5EAFA1942284ABA71F* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(isDragging)
		bool L_0 = __this->___isDragging_4;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_6, NULL);
		V_0 = L_7;
		// transform.Translate(mousePos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_9, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_8, L_10, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void DragBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragBehaviour__ctor_m1E047B5BEA843ACB2F0456BD8383FEC9A11CBE06 (DragBehaviour_t4A5839FDFD6CCBDE93585C5EAFA1942284ABA71F* __this, const RuntimeMethod* method) 
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// round = 0;
		__this->___round_16 = 0;
		// unitCheck = 0;
		__this->___unitCheck_18 = 0;
		// spriteGroupType = Random.Range(0, NumOfSpriteGroups);
		int32_t L_0 = __this->___NumOfSpriteGroups_14;
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_0, NULL);
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___spriteGroupType_15 = L_1;
		// CreateUnits();
		GameManager_CreateUnits_mCDAC5A3857DBE79B937A67BEC224318AE9ADC6FC(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::CreateUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CreateUnits_mCDAC5A3857DBE79B937A67BEC224318AE9ADC6FC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* V_2 = NULL;
	CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* V_3 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		// for(int i = 0; i < (round < numOfUnits.Count ? numOfUnits[round] : 4); i++)
		V_0 = 0;
		goto IL_0073;
	}

IL_0004:
	{
		// GameObject unit = Instantiate(unitPrefab, familyTree[i]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___unitPrefab_5;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___familyTree_6;
		int32_t L_2 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_1, L_2, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_0, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_1 = L_4;
		// toDeleteOnReset.Add(unit);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___toDeleteOnReset_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_5, L_6, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// CreatureBehaviour p1 = unit.transform.GetChild(0).gameObject.GetComponent<CreatureBehaviour>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_11;
		L_11 = GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525(L_10, GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		V_2 = L_11;
		// CreatureBehaviour p2 = unit.transform.GetChild(1).gameObject.GetComponent<CreatureBehaviour>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_13, 1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_16;
		L_16 = GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525(L_15, GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		V_3 = L_16;
		// CreateParents(p1, i);
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_17 = V_2;
		int32_t L_18 = V_0;
		VirtualActionInvoker2< CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD*, int32_t >::Invoke(4 /* System.Void GameManager::CreateParents(CreatureBehaviour,System.Int32) */, __this, L_17, L_18);
		// CreateParents(p2, i);
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_19 = V_3;
		int32_t L_20 = V_0;
		VirtualActionInvoker2< CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD*, int32_t >::Invoke(4 /* System.Void GameManager::CreateParents(CreatureBehaviour,System.Int32) */, __this, L_19, L_20);
		// CreateChild(p1, p2, i);
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_21 = V_2;
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_22 = V_3;
		int32_t L_23 = V_0;
		VirtualActionInvoker3< CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD*, CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD*, int32_t >::Invoke(5 /* System.Void GameManager::CreateChild(CreatureBehaviour,CreatureBehaviour,System.Int32) */, __this, L_21, L_22, L_23);
		// for(int i = 0; i < (round < numOfUnits.Count ? numOfUnits[round] : 4); i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0073:
	{
		// for(int i = 0; i < (round < numOfUnits.Count ? numOfUnits[round] : 4); i++)
		int32_t L_25 = V_0;
		int32_t L_26 = __this->___round_16;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_27 = __this->___numOfUnits_13;
		int32_t L_28;
		L_28 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_27, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		G_B3_0 = L_25;
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			G_B4_0 = L_25;
			goto IL_008a;
		}
	}
	{
		G_B5_0 = 4;
		G_B5_1 = G_B3_0;
		goto IL_009b;
	}

IL_008a:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_29 = __this->___numOfUnits_13;
		int32_t L_30 = __this->___round_16;
		int32_t L_31;
		L_31 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_29, L_30, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		G_B5_0 = L_31;
		G_B5_1 = G_B4_0;
	}

IL_009b:
	{
		if ((((int32_t)G_B5_1) < ((int32_t)G_B5_0)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::CreateParents(CreatureBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CreateParents_m4974072D1ADB8834E69CE8135473536E306E197A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* ___parent0, int32_t ___id1, const RuntimeMethod* method) 
{
	{
		// parent.SetTraits(Random.Range(1, 3), Random.Range(1, 3), Random.Range(1, 3), Random.Range(1, 3), Random.Range(1, 3));
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_0 = ___parent0;
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 3, NULL);
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 3, NULL);
		int32_t L_3;
		L_3 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 3, NULL);
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 3, NULL);
		int32_t L_5;
		L_5 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 3, NULL);
		CreatureBehaviour_SetTraits_mDAFD73390C82F1F5CB9D6D5FDB07737814FEDF0B(L_0, L_1, L_2, L_3, L_4, L_5, (bool)0, NULL);
		// parent.SetId(id);
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_6 = ___parent0;
		int32_t L_7 = ___id1;
		CreatureBehaviour_SetId_m0571520D652361241F9F6794AC11BDC80B3214AC_inline(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void GameManager::CreateChild(CreatureBehaviour,CreatureBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CreateChild_m82E77A1E0BD36F7969061036C292E1313F14627C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* ___p10, CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* ___p21, int32_t ___id2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* V_0 = NULL;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var p2Traits = p2.GetComponent<CreatureBehaviour>().GetTraits();
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_0 = ___p21;
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_1;
		L_1 = Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522(L_0, Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522_RuntimeMethod_var);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_2;
		L_2 = CreatureBehaviour_GetTraits_mAA199F2978193828A4B34D2753FD2593ECCA157E_inline(L_1, NULL);
		V_0 = L_2;
		// Dictionary<int, int> childTraits = new Dictionary<int, int>();
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_3 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F(L_3, Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		V_1 = L_3;
		// foreach (KeyValuePair<int, int> trait in p1.GetComponent<CreatureBehaviour>().GetTraits())
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_4 = ___p10;
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_5;
		L_5 = Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522(L_4, Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522_RuntimeMethod_var);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_6;
		L_6 = CreatureBehaviour_GetTraits_mAA199F2978193828A4B34D2753FD2593ECCA157E_inline(L_5, NULL);
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_7;
		L_7 = Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568(L_6, Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568_RuntimeMethod_var);
		V_4 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0090:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF((&V_4), Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0085_1;
			}

IL_0026_1:
			{
				// foreach (KeyValuePair<int, int> trait in p1.GetComponent<CreatureBehaviour>().GetTraits())
				KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 L_8;
				L_8 = Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_inline((&V_4), Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_RuntimeMethod_var);
				V_5 = L_8;
				// if (trait.Value == p2Traits[trait.Key]) // for same pairing pairing
				int32_t L_9;
				L_9 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&V_5), KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_10 = V_0;
				int32_t L_11;
				L_11 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_12;
				L_12 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_10, L_11, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
				if ((!(((uint32_t)L_9) == ((uint32_t)L_12))))
				{
					goto IL_005b_1;
				}
			}
			{
				// childTraits.Add(trait.Key, trait.Value);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_13 = V_1;
				int32_t L_14;
				L_14 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_15;
				L_15 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&V_5), KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
				Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_13, L_14, L_15, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
				goto IL_0085_1;
			}

IL_005b_1:
			{
				// else if (trait.Value != p2Traits[trait.Key]) // for 1-2 pairing
				int32_t L_16;
				L_16 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&V_5), KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_17 = V_0;
				int32_t L_18;
				L_18 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_19;
				L_19 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_17, L_18, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
				if ((((int32_t)L_16) == ((int32_t)L_19)))
				{
					goto IL_0085_1;
				}
			}
			{
				// childTraits.Add(trait.Key, Random.Range(1,3));
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_20 = V_1;
				int32_t L_21;
				L_21 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_22;
				L_22 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 3, NULL);
				Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_20, L_21, L_22, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
			}

IL_0085_1:
			{
				// foreach (KeyValuePair<int, int> trait in p1.GetComponent<CreatureBehaviour>().GetTraits())
				bool L_23;
				L_23 = Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029((&V_4), Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		// int spawn = Random.Range(0, 4);
		int32_t L_24;
		L_24 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		V_2 = L_24;
		goto IL_00b0;
	}

IL_00a8:
	{
		// spawn = Random.Range(0, 4);
		int32_t L_25;
		L_25 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		V_2 = L_25;
	}

IL_00b0:
	{
		// while (!spawnCheck.Add(spawn))
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_26 = __this->___spawnCheck_17;
		int32_t L_27 = V_2;
		bool L_28;
		L_28 = HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB(L_26, L_27, HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_00a8;
		}
	}
	{
		// GameObject g = Instantiate(creaturePrefab, childSpawns[spawn]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___creaturePrefab_4;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_30 = __this->___childSpawns_7;
		int32_t L_31 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_30, L_31, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_29, L_32, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_3 = L_33;
		// g.GetComponent<CreatureBehaviour>().SetTraits(childTraits);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_3;
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_35;
		L_35 = GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525(L_34, GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_36 = V_1;
		CreatureBehaviour_SetTraits_m714BEA1E6200633112EAC43D5BB573DB7DD73372(L_35, L_36, (bool)0, NULL);
		// g.GetComponent<CreatureBehaviour>().SetId(id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_3;
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_38;
		L_38 = GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525(L_37, GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		int32_t L_39 = ___id2;
		CreatureBehaviour_SetId_m0571520D652361241F9F6794AC11BDC80B3214AC_inline(L_38, L_39, NULL);
		// g.GetComponent<BoxCollider2D>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_3;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_41;
		L_41 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_40, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_41, (bool)1, NULL);
		// toDeleteOnReset.Add(g);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_42 = __this->___toDeleteOnReset_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_3;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_42, L_43, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameManager::CheckAnswers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CheckAnswers_m5E197142E086742A218BF2EC97B5D16B09A3D8F0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisAnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0_mB2C1AA2FC6EB7AE9FB05857A4E4BAC618D963C66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24B7D84EF41342E937438C448359C39D2739CDB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C53468DBF252F5E40B56B710CE7E338B68FE5CC);
		s_Il2CppMethodInitialized = true;
	}
	AnswerCollisionU5BU5D_t9370F9E05D9A10E90B22652567D7A5AE29B4785D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// var answers = FindObjectsOfType<AnswerCollision>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AnswerCollisionU5BU5D_t9370F9E05D9A10E90B22652567D7A5AE29B4785D* L_0;
		L_0 = Object_FindObjectsOfType_TisAnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0_mB2C1AA2FC6EB7AE9FB05857A4E4BAC618D963C66(Object_FindObjectsOfType_TisAnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0_mB2C1AA2FC6EB7AE9FB05857A4E4BAC618D963C66_RuntimeMethod_var);
		V_0 = L_0;
		// bool isCorrect = true;
		V_1 = (bool)1;
		// for(int i = 0; i < answers.Length; i++)
		V_2 = 0;
		goto IL_001e;
	}

IL_000c:
	{
		// if(!answers[i].GetAnswer())
		AnswerCollisionU5BU5D_t9370F9E05D9A10E90B22652567D7A5AE29B4785D* L_1 = V_0;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		AnswerCollision_t6B656ADDB400D0D5E3FF88F854D87158BBB929C0* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5;
		L_5 = AnswerCollision_GetAnswer_mA329DCBA233A280DF7B12CD10B5FE1278A2661B3(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}
	{
		// isCorrect = false;
		V_1 = (bool)0;
		// break;
		goto IL_0024;
	}

IL_001a:
	{
		// for(int i = 0; i < answers.Length; i++)
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for(int i = 0; i < answers.Length; i++)
		int32_t L_7 = V_2;
		AnswerCollisionU5BU5D_t9370F9E05D9A10E90B22652567D7A5AE29B4785D* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000c;
		}
	}

IL_0024:
	{
		// endGamePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___endGamePanel_11;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// if (isCorrect)
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		// winText.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___winText_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// nextButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___nextButton_12;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		return;
	}

IL_004c:
	{
		// loseText.GetComponent<TextMeshProUGUI>().text = "Oops Wrong Parents \n You lasted " + round + " rounds!";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___loseText_9;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14;
		L_14 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_13, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		int32_t* L_15 = (&__this->___round_16);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral24B7D84EF41342E937438C448359C39D2739CDB3, L_16, _stringLiteral7C53468DBF252F5E40B56B710CE7E338B68FE5CC, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_17);
		// loseText.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___loseText_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::UpdateUnitCheck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateUnitCheck_m460F181F96136CE5613FE6F5FA6CBD3155A1DC20 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unitCheck += i;
		int32_t L_0 = __this->___unitCheck_18;
		int32_t L_1 = ___i0;
		__this->___unitCheck_18 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// if(unitCheck == numOfUnits[round])
		int32_t L_2 = __this->___unitCheck_18;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___numOfUnits_13;
		int32_t L_4 = __this->___round_16;
		int32_t L_5;
		L_5 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_3, L_4, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		// submitButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___submitButton_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		return;
	}

IL_0034:
	{
		// submitButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___submitButton_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NextLevel_m8C788DB3E42A69E16169B855F886F1DB6D43B9A0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// round++;
		int32_t L_0 = __this->___round_16;
		__this->___round_16 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// foreach(GameObject g in toDeleteOnReset)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___toDeleteOnReset_19;
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_2;
		L_2 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_1, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_001c_1:
			{
				// foreach(GameObject g in toDeleteOnReset)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(g);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
			}

IL_0028_1:
			{
				// foreach(GameObject g in toDeleteOnReset)
				bool L_4;
				L_4 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_001c_1;
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
		// toDeleteOnReset.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___toDeleteOnReset_19;
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_5, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// spawnCheck.Clear();
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_6 = __this->___spawnCheck_17;
		HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92(L_6, HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var);
		// endGamePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___endGamePanel_11;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// winText.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___winText_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// loseText.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___loseText_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// nextButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___nextButton_12;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// spriteGroupType = Random.Range(0, NumOfSpriteGroups);
		int32_t L_11 = __this->___NumOfSpriteGroups_14;
		int32_t L_12;
		L_12 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_11, NULL);
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___spriteGroupType_15 = L_12;
		// CreateUnits();
		GameManager_CreateUnits_mCDAC5A3857DBE79B937A67BEC224318AE9ADC6FC(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::GoToMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GoToMain_m12B03AE02F9B5350A4ED465B050701EE2E790F56 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Transform> familyTree = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___familyTree_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___familyTree_6), (void*)L_0);
		// public List<Transform> childSpawns = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_1, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___childSpawns_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childSpawns_7), (void*)L_1);
		// public List<int> numOfUnits = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_2, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___numOfUnits_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___numOfUnits_13), (void*)L_2);
		// protected HashSet<int> spawnCheck = new HashSet<int>();
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_3 = (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*)il2cpp_codegen_object_new(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF(L_3, HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		__this->___spawnCheck_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnCheck_17), (void*)L_3);
		// protected List<GameObject> toDeleteOnReset = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_4, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___toDeleteOnReset_19 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toDeleteOnReset_19), (void*)L_4);
		// private List<int> pair21 = new List<int> { 1, 1, 2, 2 };
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_5, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = L_5;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_6, 1, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = L_6;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_7, 1, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = L_7;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_8, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = L_8;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_9, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		__this->___pair21_20 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pair21_20), (void*)L_9);
		// private List<int> pair22 = new List<int> { 1, 2, 2, 3 };
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_10, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = L_10;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_11, 1, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = L_11;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_12, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = L_12;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_13, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = L_13;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_14, 3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		__this->___pair22_21 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pair22_21), (void*)L_14);
		// private List<int> pair23 = new List<int> { 2, 2, 3, 3 };
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_15 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_15, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = L_15;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_16, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = L_16;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_17, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = L_17;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_18, 3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_19 = L_18;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_19, 3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		__this->___pair23_22 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pair23_22), (void*)L_19);
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
// System.Void HardGameManager::CreateParents(CreatureBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardGameManager_CreateParents_m6E4A7FF7BCFC4EB483AD791BC17336914C0990A1 (HardGameManager_t642652200B190D19A5C457506274E058CB201711* __this, CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* ___parent0, int32_t ___id1, const RuntimeMethod* method) 
{
	{
		// parent.SetId(id);
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_0 = ___parent0;
		int32_t L_1 = ___id1;
		CreatureBehaviour_SetId_m0571520D652361241F9F6794AC11BDC80B3214AC_inline(L_0, L_1, NULL);
		// parent.SetTraits(Random.Range(1, 4), Random.Range(1, 4), Random.Range(1, 4), Random.Range(1, 4), Random.Range(1, 4), true);
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_2 = ___parent0;
		int32_t L_3;
		L_3 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		int32_t L_5;
		L_5 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		int32_t L_6;
		L_6 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		CreatureBehaviour_SetTraits_mDAFD73390C82F1F5CB9D6D5FDB07737814FEDF0B(L_2, L_3, L_4, L_5, L_6, L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void HardGameManager::CreateChild(CreatureBehaviour,CreatureBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardGameManager_CreateChild_m292426F8F86A78AC2C8BE3B753C211BA1DBB491E (HardGameManager_t642652200B190D19A5C457506274E058CB201711* __this, CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* ___p10, CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* ___p21, int32_t ___id2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* V_0 = NULL;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// var p2Traits = p2.GetComponent<CreatureBehaviour>().GetTraits();
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_0 = ___p21;
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_1;
		L_1 = Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522(L_0, Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522_RuntimeMethod_var);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_2;
		L_2 = CreatureBehaviour_GetTraits_mAA199F2978193828A4B34D2753FD2593ECCA157E_inline(L_1, NULL);
		V_0 = L_2;
		// Dictionary<int, int> childTraits = new Dictionary<int, int>();
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_3 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F(L_3, Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		V_1 = L_3;
		// foreach (KeyValuePair<int, int> trait in p1.GetComponent<CreatureBehaviour>().GetTraits())
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_4 = ___p10;
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_5;
		L_5 = Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522(L_4, Component_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_mB32C3720C4749724A41069F7409872F0DA320522_RuntimeMethod_var);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_6;
		L_6 = CreatureBehaviour_GetTraits_mAA199F2978193828A4B34D2753FD2593ECCA157E_inline(L_5, NULL);
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_7;
		L_7 = Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568(L_6, Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568_RuntimeMethod_var);
		V_4 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0177:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF((&V_4), Enumerator_Dispose_mF1BC613D7434809EB54EB8B3F03209B1E34C9DBF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0169_1;
			}

IL_0029_1:
			{
				// foreach (KeyValuePair<int, int> trait in p1.GetComponent<CreatureBehaviour>().GetTraits())
				KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 L_8;
				L_8 = Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_inline((&V_4), Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_RuntimeMethod_var);
				V_5 = L_8;
				// if (trait.Value == 2)
				int32_t L_9;
				L_9 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&V_5), KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
				if ((!(((uint32_t)L_9) == ((uint32_t)2))))
				{
					goto IL_00aa_1;
				}
			}
			{
				// int newVal = Random.Range(1, 4);
				int32_t L_10;
				L_10 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
				V_6 = L_10;
				// switch (p2Traits[trait.Key])
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_11 = V_0;
				int32_t L_12;
				L_12 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_13;
				L_13 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_11, L_12, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
				V_7 = L_13;
				int32_t L_14 = V_7;
				switch (((int32_t)il2cpp_codegen_subtract(L_14, 1)))
				{
					case 0:
					{
						goto IL_006e_1;
					}
					case 1:
					{
						goto IL_0082_1;
					}
					case 2:
					{
						goto IL_0096_1;
					}
				}
			}
			{
				goto IL_0169_1;
			}

IL_006e_1:
			{
				// childTraits.Add(trait.Key, newVal);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_15 = V_1;
				int32_t L_16;
				L_16 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_17 = V_6;
				Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_15, L_16, L_17, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
				// break;
				goto IL_0169_1;
			}

IL_0082_1:
			{
				// childTraits.Add(trait.Key, newVal);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_18 = V_1;
				int32_t L_19;
				L_19 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_20 = V_6;
				Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_18, L_19, L_20, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
				// break;
				goto IL_0169_1;
			}

IL_0096_1:
			{
				// childTraits.Add(trait.Key, newVal);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_21 = V_1;
				int32_t L_22;
				L_22 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_23 = V_6;
				Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_21, L_22, L_23, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
				// break;
				goto IL_0169_1;
			}

IL_00aa_1:
			{
				// else if (p2Traits[trait.Key] == 2)
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_24 = V_0;
				int32_t L_25;
				L_25 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_26;
				L_26 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_24, L_25, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
				if ((!(((uint32_t)L_26) == ((uint32_t)2))))
				{
					goto IL_0119_1;
				}
			}
			{
				// int newVal = Random.Range(1, 4);
				int32_t L_27;
				L_27 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
				V_8 = L_27;
				// switch (trait.Value)
				int32_t L_28;
				L_28 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&V_5), KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
				V_7 = L_28;
				int32_t L_29 = V_7;
				switch (((int32_t)il2cpp_codegen_subtract(L_29, 1)))
				{
					case 0:
					{
						goto IL_00e6_1;
					}
					case 1:
					{
						goto IL_00f7_1;
					}
					case 2:
					{
						goto IL_0108_1;
					}
				}
			}
			{
				goto IL_0169_1;
			}

IL_00e6_1:
			{
				// childTraits.Add(trait.Key, newVal);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_30 = V_1;
				int32_t L_31;
				L_31 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_32 = V_8;
				Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_30, L_31, L_32, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
				// break;
				goto IL_0169_1;
			}

IL_00f7_1:
			{
				// childTraits.Add(trait.Key, newVal);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_33 = V_1;
				int32_t L_34;
				L_34 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_35 = V_8;
				Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_33, L_34, L_35, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
				// break;
				goto IL_0169_1;
			}

IL_0108_1:
			{
				// childTraits.Add(trait.Key, newVal);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_36 = V_1;
				int32_t L_37;
				L_37 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_38 = V_8;
				Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_36, L_37, L_38, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
				// break;
				goto IL_0169_1;
			}

IL_0119_1:
			{
				// else if (trait.Value == p2Traits[trait.Key]) // for 1-1 or 3-3 pairing
				int32_t L_39;
				L_39 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&V_5), KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_40 = V_0;
				int32_t L_41;
				L_41 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_42;
				L_42 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_40, L_41, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
				if ((!(((uint32_t)L_39) == ((uint32_t)L_42))))
				{
					goto IL_0145_1;
				}
			}
			{
				// childTraits.Add(trait.Key, trait.Value);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_43 = V_1;
				int32_t L_44;
				L_44 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_45;
				L_45 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&V_5), KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
				Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_43, L_44, L_45, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
				goto IL_0169_1;
			}

IL_0145_1:
			{
				// else if (trait.Value != p2Traits[trait.Key]) // for 1-3 pairing
				int32_t L_46;
				L_46 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&V_5), KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_RuntimeMethod_var);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_47 = V_0;
				int32_t L_48;
				L_48 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				int32_t L_49;
				L_49 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_47, L_48, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
				if ((((int32_t)L_46) == ((int32_t)L_49)))
				{
					goto IL_0169_1;
				}
			}
			{
				// childTraits.Add(trait.Key, 2);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_50 = V_1;
				int32_t L_51;
				L_51 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&V_5), KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_RuntimeMethod_var);
				Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_50, L_51, 2, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
			}

IL_0169_1:
			{
				// foreach (KeyValuePair<int, int> trait in p1.GetComponent<CreatureBehaviour>().GetTraits())
				bool L_52;
				L_52 = Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029((&V_4), Enumerator_MoveNext_mB3209CB4B6378CF044D4B4B1DCFB5639555A6029_RuntimeMethod_var);
				if (L_52)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_0185;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0185:
	{
		// int spawn = Random.Range(0, 4);
		int32_t L_53;
		L_53 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		V_2 = L_53;
		goto IL_0197;
	}

IL_018f:
	{
		// spawn = Random.Range(0, 4);
		int32_t L_54;
		L_54 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		V_2 = L_54;
	}

IL_0197:
	{
		// while (!spawnCheck.Add(spawn))
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_55 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6*)__this)->___spawnCheck_17;
		int32_t L_56 = V_2;
		bool L_57;
		L_57 = HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB(L_55, L_56, HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		if (!L_57)
		{
			goto IL_018f;
		}
	}
	{
		// GameObject g = Instantiate(creaturePrefab, childSpawns[spawn]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6*)__this)->___creaturePrefab_4;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_59 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6*)__this)->___childSpawns_7;
		int32_t L_60 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_59, L_60, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_58, L_61, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_3 = L_62;
		// g.GetComponent<CreatureBehaviour>().SetTraits(childTraits, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = V_3;
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_64;
		L_64 = GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525(L_63, GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_65 = V_1;
		CreatureBehaviour_SetTraits_m714BEA1E6200633112EAC43D5BB573DB7DD73372(L_64, L_65, (bool)1, NULL);
		// g.GetComponent<CreatureBehaviour>().SetId(id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = V_3;
		CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* L_67;
		L_67 = GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525(L_66, GameObject_GetComponent_TisCreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD_m7562801AEC1BE6590536B377F4BE5954153F8525_RuntimeMethod_var);
		int32_t L_68 = ___id2;
		CreatureBehaviour_SetId_m0571520D652361241F9F6794AC11BDC80B3214AC_inline(L_67, L_68, NULL);
		// g.GetComponent<BoxCollider2D>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = V_3;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_70;
		L_70 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_69, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_70, (bool)1, NULL);
		// toDeleteOnReset.Add(g);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_71 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6*)__this)->___toDeleteOnReset_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = V_3;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_71, L_72, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HardGameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardGameManager__ctor_m7CA41978469F1B4865B6603BC9D83AFD1028B1EA (HardGameManager_t642652200B190D19A5C457506274E058CB201711* __this, const RuntimeMethod* method) 
{
	{
		GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368(__this, NULL);
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
// System.Void MainMenuBehaviour::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuBehaviour_StartGame_mB66AD68025E723F60B573E338346144447DF9782 (MainMenuBehaviour_t59408D8CD57E03D8875505AD565E1DDE6F638261* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuBehaviour::StartHardGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuBehaviour_StartHardGame_m7B15D2852661D283BAC9392CE5D69EAEB50CB095 (MainMenuBehaviour_t59408D8CD57E03D8875505AD565E1DDE6F638261* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(2, NULL);
		// }
		return;
	}
}
// System.Void MainMenuBehaviour::HowTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuBehaviour_HowTo_mD34495242FE5D49F00BF31A70CB9CF3045FAFDBB (MainMenuBehaviour_t59408D8CD57E03D8875505AD565E1DDE6F638261* __this, const RuntimeMethod* method) 
{
	{
		// howToPanel.SetActive(!howToPanel.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___howToPanel_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___howToPanel_4;
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void MainMenuBehaviour::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuBehaviour_QuitGame_m900430EDA01764C4AC44A54177341781BCF92D4F (MainMenuBehaviour_t59408D8CD57E03D8875505AD565E1DDE6F638261* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void MainMenuBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuBehaviour__ctor_m8D7C1B5D8D9234A66A1D69DE3BEA0AB9024D1F5F (MainMenuBehaviour_t59408D8CD57E03D8875505AD565E1DDE6F638261* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CreatureBehaviour_GetId_m19CF6238229E602731EAAFD2C73E9EF7513D6765_inline (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, const RuntimeMethod* method) 
{
	{
		// return id;
		int32_t L_0 = __this->___id_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreatureBehaviour_SetId_m0571520D652361241F9F6794AC11BDC80B3214AC_inline (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		// id = i;
		int32_t L_0 = ___i0;
		__this->___id_8 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* CreatureBehaviour_GetTraits_mAA199F2978193828A4B34D2753FD2593ECCA157E_inline (CreatureBehaviour_tC675BDCE140D1FFC2D79ADBAF135A1217796D7BD* __this, const RuntimeMethod* method) 
{
	{
		// return creatureTraits;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = __this->___creatureTraits_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 Enumerator_get_Current_mF8686FE59226D0603D5B095DC67F76377BBA52B6_gshared_inline (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 L_0 = (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_gshared_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_gshared_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
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
